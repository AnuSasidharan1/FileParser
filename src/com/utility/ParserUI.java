package com.utility;

import javax.swing.*;

public class ParserUI extends javax.swing.JFrame {

    static String name = "";

    public ParserUI() {
        initComponents();
        setLocationRelativeTo(this);
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        submitButton = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        txtWrappingCommand = new javax.swing.JTextPane();
        jScrollPane2 = new javax.swing.JScrollPane();
        txtEndingCommand = new javax.swing.JTextPane();
        fileChooserbutton2 = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();
        jScrollPane3 = new javax.swing.JScrollPane();
        txtWrappingBeginingCommand = new javax.swing.JTextPane();
        jScrollPane4 = new javax.swing.JScrollPane();
        txtEndingParameterCommand = new javax.swing.JTextPane();
        jScrollPane5 = new javax.swing.JScrollPane();
        txtBeginingParameterCommand = new javax.swing.JTextPane();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        fileChooserbutton1 = new javax.swing.JButton();
        jLabel7 = new javax.swing.JLabel();
        lblsetFilePath2 = new javax.swing.JLabel();
        lblsetFilePath1 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        //set default value
        txtWrappingCommand.setText("web_custom_request");
        txtWrappingBeginingCommand.setText("lr_sub_start_transaction");
        txtEndingCommand.setText("lr_sub_end_transaction");
        txtBeginingParameterCommand.setText("lr_start_transaction");
        txtEndingParameterCommand.setText("lr_start_transaction");

        jLabel1.setText("Select the File");

        jLabel2.setText("Wrapping Command");

        jLabel3.setText("Wrap Ending Command");

        submitButton.setText("Submit");
        submitButton.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                submitButtonMousePressed(evt);
            }
        });
        submitButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                submitButtonActionPerformed(evt);
            }
        });

        jScrollPane1.setViewportView(txtWrappingCommand);

        jScrollPane2.setViewportView(txtEndingCommand);

        fileChooserbutton2.setText("Choose File");
        fileChooserbutton2.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                fileChooserbutton2MousePressed(evt);
            }
        });
        fileChooserbutton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fileChooserbutton2ActionPerformed(evt);
            }
        });

        jLabel4.setText("Wrap Beginning Command");

        jScrollPane3.setViewportView(txtWrappingBeginingCommand);

        jScrollPane4.setViewportView(txtEndingParameterCommand);

        jScrollPane5.setViewportView(txtBeginingParameterCommand);

        jLabel5.setText("Wrap Begining Parameter Command");

        jLabel6.setText("Wrap Ending Parameter Command");

        fileChooserbutton1.setText("Choose File");
        fileChooserbutton1.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mousePressed(java.awt.event.MouseEvent evt) {
                fileChooserbutton1MousePressed(evt);
            }
        });
        fileChooserbutton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                fileChooserbutton1ActionPerformed(evt);
            }
        });

        jLabel7.setText("Select the Output File");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(43, 43, 43)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(submitButton, javax.swing.GroupLayout.PREFERRED_SIZE, 115, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel6, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 196, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(39, 39, 39)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jScrollPane2, javax.swing.GroupLayout.DEFAULT_SIZE, 391, Short.MAX_VALUE)
                            .addComponent(jScrollPane1)
                            .addComponent(fileChooserbutton2, javax.swing.GroupLayout.DEFAULT_SIZE, 391, Short.MAX_VALUE)
                            .addComponent(jScrollPane5, javax.swing.GroupLayout.DEFAULT_SIZE, 391, Short.MAX_VALUE)
                            .addComponent(jScrollPane3)
                            .addComponent(jScrollPane4)
                            .addComponent(fileChooserbutton1, javax.swing.GroupLayout.DEFAULT_SIZE, 391, Short.MAX_VALUE)
                            .addComponent(lblsetFilePath2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                .addGap(23, 23, 23))
            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(jPanel1Layout.createSequentialGroup()
                    .addGap(279, 279, 279)
                    .addComponent(lblsetFilePath1, javax.swing.GroupLayout.PREFERRED_SIZE, 389, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(24, Short.MAX_VALUE)))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addContainerGap()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(fileChooserbutton1, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(0, 81, Short.MAX_VALUE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(fileChooserbutton2, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(lblsetFilePath2, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane3, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel4, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane2, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel3, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane5, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel5, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane4, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel6, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addComponent(submitButton, javax.swing.GroupLayout.PREFERRED_SIZE, 34, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                .addGroup(jPanel1Layout.createSequentialGroup()
                    .addGap(56, 56, 56)
                    .addComponent(lblsetFilePath1, javax.swing.GroupLayout.PREFERRED_SIZE, 40, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addContainerGap(423, Short.MAX_VALUE)))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void fileChooserbutton1MousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_fileChooserbutton1MousePressed
        // TODO add your handling code here:
    }//GEN-LAST:event_fileChooserbutton1MousePressed

    private void fileChooserbutton2MousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_fileChooserbutton2MousePressed
        
    }//GEN-LAST:event_fileChooserbutton2MousePressed

    private void submitButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_submitButtonActionPerformed
        Main app = new Main();
        app.setWrapBegParamLine(txtBeginingParameterCommand.getText());
        app.setWrapEndParamLine(txtEndingParameterCommand.getText());
        app.setWrapLine(txtWrappingCommand.getText());
        app.setWrapBegLine(txtWrappingBeginingCommand.getText());
        app.setWrapEndLine(txtEndingCommand.getText());

        if(name == null || name.isEmpty()){
            JOptionPane.showMessageDialog(this,"Please select an input file.");
        }
        else if(outputFile== null || outputFile.isEmpty()){
            JOptionPane.showMessageDialog(this,"Please select an output file.");
        }
        else if(app.scanFile(name,outputFile)){
            JOptionPane.showMessageDialog(this,"Successfully updated the output File.");
        } else {
            JOptionPane.showMessageDialog(this,"Failed to update the output File.");
        }
    }//GEN-LAST:event_submitButtonActionPerformed

    private void submitButtonMousePressed(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_submitButtonMousePressed

    }//GEN-LAST:event_submitButtonMousePressed

    private String outputFile = "";

    private void fileChooserbutton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fileChooserbutton2ActionPerformed
        JFileChooser chooser = new JFileChooser();
        chooser.showOpenDialog(chooser);
        outputFile = chooser.getSelectedFile().getPath();
        lblsetFilePath2.setText(outputFile);
    }//GEN-LAST:event_fileChooserbutton2ActionPerformed

    private void fileChooserbutton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fileChooserbutton1ActionPerformed
        JFileChooser chooser = new JFileChooser();
        chooser.showOpenDialog(chooser);
        name = chooser.getSelectedFile().getPath();
        lblsetFilePath1.setText(name);
    }//GEN-LAST:event_fileChooserbutton1ActionPerformed

    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(() -> {
            new ParserUI().setVisible(true);

        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton fileChooserbutton1;
    private javax.swing.JButton fileChooserbutton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane3;
    private javax.swing.JScrollPane jScrollPane4;
    private javax.swing.JScrollPane jScrollPane5;
    private javax.swing.JLabel lblsetFilePath1;
    private javax.swing.JLabel lblsetFilePath2;
    private javax.swing.JButton submitButton;
    private javax.swing.JTextPane txtBeginingParameterCommand;
    private javax.swing.JTextPane txtEndingCommand;
    private javax.swing.JTextPane txtEndingParameterCommand;
    private javax.swing.JTextPane txtWrappingBeginingCommand;
    private javax.swing.JTextPane txtWrappingCommand;
    // End of variables declaration//GEN-END:variables
}
