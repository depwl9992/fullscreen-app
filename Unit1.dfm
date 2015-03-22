object Controller: TController
  Left = 0
  Top = 0
  Caption = 'Controller'
  ClientHeight = 111
  ClientWidth = 158
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clInfoText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 70
    Width = 38
    Height = 13
    Caption = 'Height: '
    Color = clWindowText
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 89
    Width = 32
    Height = 13
    Caption = 'Width:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ToggleFS: TSpeedButton
    Left = 8
    Top = 8
    Width = 65
    Height = 41
    AllowAllUp = True
    GroupIndex = 1
    Caption = 'Fullscreen'
    OnClick = ToggleFSClick
  end
end
