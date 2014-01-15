object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 243
  ClientWidth = 527
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 192
    Top = 184
    Width = 38
    Height = 13
    Caption = 'Height: '
  end
  object Label2: TLabel
    Left = 192
    Top = 200
    Width = 32
    Height = 13
    Caption = 'Width:'
  end
  object Button1: TButton
    Left = 208
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Full Screen'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 199
    Top = 120
    Width = 91
    Height = 25
    Caption = 'Exit Fullscreen'
    TabOrder = 1
    OnClick = Button2Click
  end
end
