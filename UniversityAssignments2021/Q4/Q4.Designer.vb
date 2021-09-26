<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Q4
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.lblTitle = New System.Windows.Forms.Label()
        Me.edtMark = New System.Windows.Forms.TextBox()
        Me.btnNextMark = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.btnDisplay = New System.Windows.Forms.Button()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.redDisplay = New System.Windows.Forms.RichTextBox()
        Me.SuspendLayout()
        '
        'lblTitle
        '
        Me.lblTitle.AutoSize = True
        Me.lblTitle.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point)
        Me.lblTitle.Location = New System.Drawing.Point(24, 27)
        Me.lblTitle.Name = "lblTitle"
        Me.lblTitle.Size = New System.Drawing.Size(217, 28)
        Me.lblTitle.TabIndex = 0
        Me.lblTitle.Text = "Indivdual Assignment"
        '
        'edtMark
        '
        Me.edtMark.Location = New System.Drawing.Point(24, 67)
        Me.edtMark.Name = "edtMark"
        Me.edtMark.Size = New System.Drawing.Size(217, 27)
        Me.edtMark.TabIndex = 1
        '
        'btnNextMark
        '
        Me.btnNextMark.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point)
        Me.btnNextMark.Location = New System.Drawing.Point(24, 111)
        Me.btnNextMark.Name = "btnNextMark"
        Me.btnNextMark.Size = New System.Drawing.Size(217, 46)
        Me.btnNextMark.TabIndex = 2
        Me.btnNextMark.Text = "Next Mark"
        Me.btnNextMark.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point)
        Me.btnClose.Location = New System.Drawing.Point(24, 392)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(217, 46)
        Me.btnClose.TabIndex = 3
        Me.btnClose.Text = "Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'btnDisplay
        '
        Me.btnDisplay.Enabled = False
        Me.btnDisplay.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point)
        Me.btnDisplay.Location = New System.Drawing.Point(324, 392)
        Me.btnDisplay.Name = "btnDisplay"
        Me.btnDisplay.Size = New System.Drawing.Size(511, 46)
        Me.btnDisplay.TabIndex = 4
        Me.btnDisplay.Text = "Display"
        Me.btnDisplay.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point)
        Me.Label2.Location = New System.Drawing.Point(324, 27)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(161, 28)
        Me.Label2.TabIndex = 5
        Me.Label2.Text = "Display Results:"
        '
        'redDisplay
        '
        Me.redDisplay.Location = New System.Drawing.Point(324, 67)
        Me.redDisplay.Name = "redDisplay"
        Me.redDisplay.Size = New System.Drawing.Size(511, 319)
        Me.redDisplay.TabIndex = 6
        Me.redDisplay.Text = ""
        '
        'Q4
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 20.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(849, 467)
        Me.Controls.Add(Me.redDisplay)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.btnDisplay)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnNextMark)
        Me.Controls.Add(Me.edtMark)
        Me.Controls.Add(Me.lblTitle)
        Me.Name = "Q4"
        Me.Text = "Student Marks Summary"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lblTitle As Label
    Friend WithEvents edtMark As TextBox
    Friend WithEvents btnNextMark As Button
    Friend WithEvents btnClose As Button
    Friend WithEvents btnDisplay As Button
    Friend WithEvents Label2 As Label
    Friend WithEvents redDisplay As RichTextBox
End Class
