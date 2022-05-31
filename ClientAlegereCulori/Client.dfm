object Form1: TForm1
  Left = 192
  Top = 165
  Width = 1044
  Height = 540
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Shape1: TShape
    Left = 248
    Top = 144
    Width = 65
    Height = 65
    OnContextPopup = Shape1ContextPopup
  end
  object Shape2: TShape
    Left = 344
    Top = 144
    Width = 65
    Height = 65
    OnContextPopup = Shape2ContextPopup
  end
  object Shape3: TShape
    Left = 440
    Top = 144
    Width = 65
    Height = 65
    OnContextPopup = Shape3ContextPopup
  end
  object Shape4: TShape
    Left = 536
    Top = 144
    Width = 65
    Height = 65
    OnContextPopup = Shape4ContextPopup
  end
  object Shape5: TShape
    Left = 632
    Top = 144
    Width = 65
    Height = 65
    OnContextPopup = Shape5ContextPopup
  end
  object btnAdauga: TButton
    Left = 248
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Adauga'
    TabOrder = 0
    OnClick = btnAdaugaClick
  end
  object btnExit: TButton
    Left = 808
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 1
    OnClick = btnExitClick
  end
  object Client: TClientSocket
    Active = True
    Address = '127.0.0.1'
    ClientType = ctNonBlocking
    Port = 2000
    OnRead = ClientRead
    Left = 736
    Top = 168
  end
end
