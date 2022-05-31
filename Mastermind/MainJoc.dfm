object FereastraJoc: TFereastraJoc
  Left = 198
  Top = 190
  Width = 1272
  Height = 658
  Caption = 'FereastraJoc'
  Color = clTeal
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 888
    Top = 120
    Width = 57
    Height = 57
    Pen.Style = psInsideFrame
    Shape = stEllipse
    OnContextPopup = Shape1ContextPopup
  end
  object Shape2: TShape
    Left = 960
    Top = 120
    Width = 57
    Height = 57
    Shape = stEllipse
    OnContextPopup = Shape2ContextPopup
  end
  object Shape3: TShape
    Left = 1032
    Top = 120
    Width = 57
    Height = 57
    Shape = stEllipse
    OnContextPopup = Shape3ContextPopup
  end
  object Shape4: TShape
    Left = 1104
    Top = 120
    Width = 57
    Height = 57
    Shape = stEllipse
    OnContextPopup = Shape4ContextPopup
  end
  object Shape5: TShape
    Left = 1176
    Top = 120
    Width = 57
    Height = 57
    Shape = stEllipse
    OnContextPopup = Shape5ContextPopup
  end
  object btnExitJ: TButton
    Left = 1152
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = btnExitJClick
  end
  object btnAdaugare: TButton
    Left = 992
    Top = 184
    Width = 75
    Height = 49
    Caption = 'Adauga'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = btnAdaugareClick
  end
  object Panel20: TPanel
    Left = 16
    Top = 8
    Width = 865
    Height = 769
    Color = clTeal
    TabOrder = 2
  end
  object btnMIncearca: TButton
    Left = 992
    Top = 240
    Width = 75
    Height = 25
    Caption = 'Mai Incearca'
    TabOrder = 3
    OnClick = btnMIncearcaClick
  end
  object Client: TClientSocket
    Active = True
    Address = '127.0.0.1'
    ClientType = ctNonBlocking
    Port = 2000
    OnRead = ClientRead
    Left = 1192
    Top = 280
  end
end
