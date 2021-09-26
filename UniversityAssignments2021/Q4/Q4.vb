Public Class Q4

    Dim marks(3) As Integer
    Dim count As Integer = 0

    Private Function FindHighestMark() As Integer
        Dim highestmarks As Integer
        highestmarks = marks.Max()
        Return highestmarks
    End Function

    Private Function CalcAverage() As Double
        Dim average As Double
        Dim dTotal As Integer
        Dim lCounter As Long

        dTotal = 0
        For lCounter = 0 To UBound(marks)
            dTotal = dTotal + marks(lCounter)
        Next
        average = dTotal / UBound(marks)

        Return average
    End Function

    Private Function Category(mark As Integer) As String
        If mark < 40 Then
            Return "failed"
        End If
        If mark >= 40 And mark < 50 Then
            Return "Supplementary"
        End If

        If mark >= 50 And mark < 75 Then
            Return "Passed"
        End If
        If mark >= 75 Then
            Return "Passed with Distinction"
        End If
    End Function


    Private Function Display(averagemark As String, highestmark As String)

        redDisplay.AppendText("Individual Assignment Mark: " + marks(0).ToString() + " " + Category(marks(0)))
        redDisplay.AppendText(vbCrLf)
        redDisplay.AppendText("Test Mark: " + marks(1).ToString() + " " + Category(marks(1)))
        redDisplay.AppendText(vbCrLf)
        redDisplay.AppendText("Group Assignment Mark: " + marks(2).ToString() + " " + Category(marks(2)))
        redDisplay.AppendText(vbCrLf)
        redDisplay.AppendText("The highest Marks is: " + highestmark.ToString())
        redDisplay.AppendText(vbCrLf)
        redDisplay.AppendText("Average Marks is: " + averagemark.ToString())
    End Function





    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        End
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        Display(CalcAverage().ToString(), FindHighestMark().ToString())
    End Sub

    Private Sub btnNextMark_Click(sender As Object, e As EventArgs) Handles btnNextMark.Click
        Dim mark As Integer

        Try
            mark = Integer.Parse(edtMark.Text)
        Catch ex As Exception
            MessageBox.Show("Your input mark must be between 0 and 100", "Invalid Input",
        MessageBoxButtons.OK, MessageBoxIcon.Error)
        End Try


        If mark >= 0 And mark <= 100 Then

            marks(count) = mark
            count = count + 1

        Else
            MessageBox.Show("Your input mark must be between 0 and 100", "Invalid Input",
        MessageBoxButtons.OK, MessageBoxIcon.Error)
        End If

        If count = 1 Then
            lblTitle.Text = "Test Marks"
        End If

        If count = 2 Then
            lblTitle.Text = "Group Assignment"

        End If
        If count = 3 Then
            lblTitle.Text = "Completed"
            edtMark.Enabled = False
            btnNextMark.Enabled = False
            btnDisplay.Enabled = True
        End If



    End Sub
End Class
