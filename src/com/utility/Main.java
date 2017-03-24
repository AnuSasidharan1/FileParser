package com.utility;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {

    //command regex
    private Pattern p = Pattern.compile(".*\\(.*\\);*");

    private String wrapLine = "";

    private String wrapBegParamLine = "";
    private String wrapEndParamLine = "";

    private String wrapBegLine = "";
    private String wrapEndLine = "";

    /*
    public static void main(String args[]) {

        String fileName = "Action.c";

        Main app = new Main();

        app.setWrapLine("web_custom_request");

        app.setWrapBegParamLine("lr_start_transaction");
        app.setWrapEndParamLine("lr_end_transaction");

        app.setWrapBegLine("lr_sub_start_transaction");
        app.setWrapEndLine("lr_sub_end_transaction");

        app.scanFile(fileName);

    }*/

    public String getWrapLine() {
        return wrapLine;
    }

    public void setWrapLine(String wrapLine) {
        this.wrapLine = wrapLine;
    }

    public String getWrapBegParamLine() {
        return wrapBegParamLine;
    }

    public void setWrapBegParamLine(String wrapBegParamLine) {
        this.wrapBegParamLine = wrapBegParamLine;
    }

    public String getWrapEndParamLine() {
        return wrapEndParamLine;
    }

    public void setWrapEndParamLine(String wrapEndParamLine) {
        this.wrapEndParamLine = wrapEndParamLine;
    }

    public String getWrapBegLine() {
        return wrapBegLine;
    }

    public void setWrapBegLine(String wrapBegLine) {
        this.wrapBegLine = wrapBegLine;
    }

    public String getWrapEndLine() {
        return wrapEndLine;
    }

    public void setWrapEndLine(String wrapEndLine) {
        this.wrapEndLine = wrapEndLine;
    }

    public boolean scanFile(String fileName, String outputFileName){
        try (Scanner scanner = new Scanner(new File(fileName))) {
            StringBuilder line = new StringBuilder();
            String begCommParamStr = "";
            String endCommParamStr = "";
            List<String> lines = new ArrayList<String>();
            while (scanner.hasNext()){
                line.append(scanner.nextLine());
                if(isValidcommand(line)) {
                    if(isWrapBegParCommand(line.toString())){
                        begCommParamStr = findArg(line.toString());
                        lines.add(line.toString());
                    } else if(isWrapEndParCommand(line.toString())) {
                        endCommParamStr = findArg(line.toString());
                        lines.add(line.toString());
                    } else if(isWrapperCommand(line.toString())){
                        //Wrapper command Found
                        lines.add(wrapBegLine + "(" + begCommParamStr +")");
                        lines.add(line.toString());
                        lines.add(wrapEndLine + "(" + begCommParamStr + ", LR_AUTO )");
                    } else {
                        lines.add(line.toString());
                    }

                    //Clear previous StringBuilder
                    line = new StringBuilder();
                }
            }

            if(writeToTheFile(outputFileName,lines) != null){
                return true;
            } else {
                return false;
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
        return false;
    }

    private boolean isWrapBegParCommand(String command){
        if(command.contains(wrapBegParamLine)){
            return true;
        }
        return false;
    }

    private boolean isWrapEndParCommand(String command){
        if(command.contains(wrapEndParamLine)){
            return true;
        }
        return false;
    }

    private boolean isWrapperCommand(String command){
        if(command.contains(wrapLine)){
            return true;
        }
        return false;
    }

    private boolean isValidcommand(StringBuilder command) {
        Matcher m = p.matcher(command);
        if(m.matches()){
            return true;
        }
        return false;
    }

    private String findArg(String method){
        //Get the Arg between methods
        return method.substring(method.indexOf("(")+1 ,method.indexOf(")"));
    }

    public Path writeToTheFile(String fileName, List<String> contents){
        try {
            return Files.write(Paths.get(fileName), contents);
        } catch (IOException e) {
            e.printStackTrace();
        }
        return null;
    }
}
