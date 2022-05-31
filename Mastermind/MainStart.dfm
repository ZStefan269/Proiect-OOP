object FereastraStart: TFereastraStart
  Left = 553
  Top = 282
  Width = 483
  Height = 272
  Caption = 'FereastraStart'
  Color = clTeal
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object NumeJoc: TLabel
    Left = 128
    Top = 8
    Width = 207
    Height = 46
    Caption = 'MasterMind'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object btnStart: TButton
    Left = 72
    Top = 72
    Width = 321
    Height = 65
    Caption = 'Start'
    Font.Charset = ANSI_CHARSET
    Font.Color = clAqua
    Font.Height = -24
    Font.Name = 'MS UI Gothic'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = btnStartClick
  end
  object btnExit: TButton
    Left = 328
    Top = 192
    Width = 97
    Height = 33
    Caption = 'Exit'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = btnExitClick
  end
end
