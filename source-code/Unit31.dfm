object Calender: TCalender
  Left = 350
  Top = 266
  BorderStyle = bsToolWindow
  Caption = 'Takvim'
  ClientHeight = 285
  ClientWidth = 384
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  DesignSize = (
    384
    285)
  PixelsPerInch = 96
  TextHeight = 13
  object Calendar1: TCCalendar
    Left = 0
    Top = 0
    Width = 384
    Height = 233
    Align = alTop
    Color = clWhite
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Default'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnChange = Calendar1Change
  end
  object BitBtn1: TBitBtn
    Left = 249
    Top = 240
    Width = 38
    Height = 38
    Anchors = [akLeft]
    TabOrder = 1
    OnClick = BitBtn1Click
    Glyph.Data = {
      FE0A0000424DFE0A00000000000036000000280000001E0000001E0000000100
      180000000000C80A0000EB0A0000EB0A00000000000000000000FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF786D6B78615D7A5C56
      7B5A547A5C5678615D796D6BFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFF7F7775825B5393493AA43F2AAD3A21B63A20BA3B21B6
      3920AD3A21A43F2A93493A825B537F7675FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFF8360589C4430B43C21BC3E23BC4126B84227B54126B54126B54127B842
      26BB4125BB3F22B43C219C4431836058FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF905346B3
      3E22BD4023B94428B64329B54327B54327B54327B54327B54328B54327B54328
      B54427B94328BD4123B33E218F5346FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF995241BC4020BD4526B747
      2AB64729B64729B64629B64729B74529B64629B64628B74729B54426B64628B6
      4628B74629BD4625BB4120985341FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFF9B5E4CBC4521BB4827B74929B84A29B84A29
      B84A29B84A29B74929B84A29B9492AB84928B33B19B94E2CB84C2BB84A29B849
      29B84929BB4A27BC44219B5E4CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFF987367B94925BD4C27B84D29B94D2ABA4D2ABB4D2ABA4D2ABA
      4D29BA4D2ABA4E2AB74621B94A25DBA18FDCA695BC5431B94D28B94D29BA4D2A
      B94D29BD4C27B94925987367FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFAD593ABE4E25BA5129BB502ABA512ABA512ABB5029BB512ABA5129BA4E
      26B94B22CD7F63F3DFD9FEFCFCE5BFB0BD5630BB5028BB512ABB5129BB5129BB
      5129BF4E26AD5939FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF9E7A6CBD
      5024BE5429BD5428BC5329BD5328BC5429BC5227BA5022BC5125C7714EECCFC3
      FDFBFAFFFFFFFFFFFFE5BCABBE582EBC5327BD5329BD5428BC5329BC5428BD53
      28BD4F249F7A6CFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFAD6B4DBF5624BD57
      29BE5729BE5728BD5728BC5221BB5120C56B43DEAA93FFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFE5BDACC05D30BD5628BE5728BE5628BD5728BE5728BD5728C05624
      AE6B4EFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFB6633AC15A26C05927C05A29
      BF5622BC4E17C56737D89778F8EEE8FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFE7C0AEC46434C15D2CC15D2CC05B29C15A29C05928C15927C25825B7623AFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFBE612DC25C25C25D28C25921C5622DD4
      8E68EFD2C3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE9C5AF
      C96C3BC66632C56531C5632EC5602DC35E2AC35C26C35B25BE602CFFFFFFFFFF
      FFFFFFFF696CFFFFFFA18B7CC35F23C45F25C36024C56328E5B79CFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBC8B3CD7744CA
      6F3BC96E39C96C34C86932C6672EC56329C36025C36022A18A7CFFFFFFFFFFFF
      696CFFFFFFA18C7EC56223C76424C76728CB7136D99568EDCCB6FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFECCDB8D0824ECE7B44CE79
      42CB763ECB7338CB7135C96B2DC66525C56323A18C7DFFFFFFFFFFFF696CFFFF
      FFFFFFFFC26A2DCA6A26CC7132CE7739CB6F2DD18046DDA478F3E0D1FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFD3BED5905AD48850D3874DD18249
      D07E43CF7B3ECE7433CB6A27C26A2DFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      BF743BCE6E25D07A37D28244D4894BD2894CD4894DDA9C68E7BF9DFAF3ECFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFF0D7C3DA9C69D9955FD7945AD58F53D48B4ED2
      8648D17C3BCF6F28BF743CFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFB48157D1
      7021D3813AD58D4CD89557DA9A5EDA9D65DB9E69DDA26FE1B086F1D9C6FEFCFB
      FFFFFFFFFFFFFFFFFFF2DDCBDFA87ADDA26FDBA069DA9C62DA995BD79251D384
      3FD37324B58158FFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFA58F7BD07526D685
      3AD89853DBA064DEA66EDFA977E0AD7EE1AE85E2B089E2B28DE8C3A6F6E8DEFE
      FBFAFFFFFFF3E1D4E3B38DE1AD82DFAA7CDFA772DCA468D99A58D7883ED0792A
      A5907BFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFBF844EDC8731DB9F57
      DFAA6FE1B07EE3B488E5B793E5BA9AE7BCA0E7BFA4E7BFA4E6BCA2EED1C0FBF6
      F1F5E4DAE7BDA1E5B997E4B690E3B284E0AB74DBA15CDD8A35BF8651FFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFA49483D38A3DE29F4EE1B277E4
      B78CE6BE9CE8C2A7E9C5ADEAC7B1EBC9B3EBCCB6EBCDB6E9C8B0EBCCB6EFD3C1
      EAC8B2E9C4ABE7C1A2E6BA93E2B27CE3A352D38C3FA49383FFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFAD9376DE9C47E7B46CE6BE95E9C5
      ABEBCAB5EDCEB9EDD0BEEED2C1EED4C3EFD6C4F0D6C4EED2C0EDCFBCEDCFBCEC
      CDB7EAC8B1E6C09EE9B573E0A04CAD9377FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFB29877E0AD61EDC18AEBC9B1EDD0BE
      EFD6C4F1D8C9F1DCCDF3DECFF3DDD0F2DDD0F2DDCEF1DACCF0D7C6EED3C0ECCB
      B8EEC392E1B066B19A78FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAB9D85D5B27BF0C99DF1D3BFF0D8C8F3
      DECEF3E1D4F4E3D7F5E4D8F5E4D8F4E1D6F3DFD1F2DACBF2D4C1F0CAA4D5B480
      AA9D85FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBBAA8EDBBFA2EED2BCF3DBCAF4DF
      D1F5E3D6F5E4D8F5E3D8F4E1D4F5DCCDEFD3BFDCC0A6BCAA92FFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCCBBABDFC9BBECD5C6
      F2DACCECD6C6DFCABDCDBBADFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696C}
  end
  object BitBtn2: TBitBtn
    Left = 140
    Top = 240
    Width = 38
    Height = 38
    Anchors = []
    TabOrder = 2
    OnClick = BitBtn2Click
    Glyph.Data = {
      FE0A0000424DFE0A00000000000036000000280000001E0000001E0000000100
      180000000000C80A0000EB0A0000EB0A00000000000000000000FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF786D6B78615D7A5C56
      7B5A547A5C5678615D796D6BFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFF7F7775825B5393493AA43F2AAD3A21B63A20BA3B21B6
      3920AD3A21A43F2A93493A825B537F7675FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFF8360589C4430B43C21BC3E23BC4126B84227B54126B54126B54127B842
      26BB4125BB3F22B43C219C4431836058FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF905346B3
      3E22BD4023B94428B64329B54327B54327B54327B54327B54328B54327B54328
      B54427B94328BD4123B33E218F5346FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF995241BC4020BD4526B747
      2AB64729B64729B64629B64729B74529B64629B64628B74729B54426B64628B6
      4628B74629BD4625BB4120985341FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFF9B5E4CBC4521BB4827B74929B84A29B84A29
      B84A29B84A29B74929B84A29B9492AB84928B33B19B94E2CB84C2BB84A29B849
      29B84929BB4A27BC44219B5E4CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFF987367B94925BD4C27B84D29B94D2ABA4D2ABB4D2ABA4D2ABA
      4D29BA4D2ABA4E2AB74621B94A25DBA18FDCA695BC5431B94D28B94D29BA4D2A
      B94D29BD4C27B94925987367FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFAD593ABE4E25BA5129BB502ABA512ABA512ABB5029BB512ABA5129BA4E
      26B94B22CD7F63F3DFD9FEFCFCE5BFB0BD5630BB5028BB512ABB5129BB5129BB
      5129BF4E26AD5939FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF9E7A6CBD
      5024BE5429BD5428BC5329BD5328BC5429BC5227BA5022BC5125C7714EECCFC3
      FDFBFAFFFFFFFFFFFFE5BCABBE582EBC5327BD5329BD5428BC5329BC5428BD53
      28BD4F249F7A6CFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFAD6B4DBF5624BD57
      29BE5729BE5728BD5728BC5221BB5120C56B43DEAA93FFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFE5BDACC05D30BD5628BE5728BE5628BD5728BE5728BD5728C05624
      AE6B4EFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFB6633AC15A26C05927C05A29
      BF5622BC4E17C56737D89778F8EEE8FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFE7C0AEC46434C15D2CC15D2CC05B29C15A29C05928C15927C25825B7623AFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFBE612DC25C25C25D28C25921C5622DD4
      8E68EFD2C3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE9C5AF
      C96C3BC66632C56531C5632EC5602DC35E2AC35C26C35B25BE602CFFFFFFFFFF
      FFFFFFFF696CFFFFFFA18B7CC35F23C45F25C36024C56328E5B79CFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBC8B3CD7744CA
      6F3BC96E39C96C34C86932C6672EC56329C36025C36022A18A7CFFFFFFFFFFFF
      696CFFFFFFA18C7EC56223C76424C76728CB7136D99568EDCCB6FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFECCDB8D0824ECE7B44CE79
      42CB763ECB7338CB7135C96B2DC66525C56323A18C7DFFFFFFFFFFFF696CFFFF
      FFFFFFFFC26A2DCA6A26CC7132CE7739CB6F2DD18046DDA478F3E0D1FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFD3BED5905AD48850D3874DD18249
      D07E43CF7B3ECE7433CB6A27C26A2DFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      BF743BCE6E25D07A37D28244D4894BD2894CD4894DDA9C68E7BF9DFAF3ECFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFF0D7C3DA9C69D9955FD7945AD58F53D48B4ED2
      8648D17C3BCF6F28BF743CFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFB48157D1
      7021D3813AD58D4CD89557DA9A5EDA9D65DB9E69DDA26FE1B086F1D9C6FEFCFB
      FFFFFFFFFFFFFFFFFFF2DDCBDFA87ADDA26FDBA069DA9C62DA995BD79251D384
      3FD37324B58158FFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFA58F7BD07526D685
      3AD89853DBA064DEA66EDFA977E0AD7EE1AE85E2B089E2B28DE8C3A6F6E8DEFE
      FBFAFFFFFFF3E1D4E3B38DE1AD82DFAA7CDFA772DCA468D99A58D7883ED0792A
      A5907BFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFBF844EDC8731DB9F57
      DFAA6FE1B07EE3B488E5B793E5BA9AE7BCA0E7BFA4E7BFA4E6BCA2EED1C0FBF6
      F1F5E4DAE7BDA1E5B997E4B690E3B284E0AB74DBA15CDD8A35BF8651FFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFA49483D38A3DE29F4EE1B277E4
      B78CE6BE9CE8C2A7E9C5ADEAC7B1EBC9B3EBCCB6EBCDB6E9C8B0EBCCB6EFD3C1
      EAC8B2E9C4ABE7C1A2E6BA93E2B27CE3A352D38C3FA49383FFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFAD9376DE9C47E7B46CE6BE95E9C5
      ABEBCAB5EDCEB9EDD0BEEED2C1EED4C3EFD6C4F0D6C4EED2C0EDCFBCEDCFBCEC
      CDB7EAC8B1E6C09EE9B573E0A04CAD9377FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFB29877E0AD61EDC18AEBC9B1EDD0BE
      EFD6C4F1D8C9F1DCCDF3DECFF3DDD0F2DDD0F2DDCEF1DACCF0D7C6EED3C0ECCB
      B8EEC392E1B066B19A78FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAB9D85D5B27BF0C99DF1D3BFF0D8C8F3
      DECEF3E1D4F4E3D7F5E4D8F5E4D8F4E1D6F3DFD1F2DACBF2D4C1F0CAA4D5B480
      AA9D85FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBBAA8EDBBFA2EED2BCF3DBCAF4DF
      D1F5E3D6F5E4D8F5E3D8F4E1D4F5DCCDEFD3BFDCC0A6BCAA92FFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCCBBABDFC9BBECD5C6
      F2DACCECD6C6DFCABDCDBBADFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696C}
  end
  object BitBtn3: TBitBtn
    Left = 203
    Top = 240
    Width = 38
    Height = 38
    Anchors = []
    TabOrder = 3
    OnClick = BitBtn3Click
    Glyph.Data = {
      FE0A0000424DFE0A00000000000036000000280000001E0000001E0000000100
      180000000000C80A0000EB0A0000EB0A00000000000000000000FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF786D6B78615D
      7A5C567B5A547A5C5678615D796D6BFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFF7F7775825B5393493AA43F2AAD3A21B63A20BA
      3B21B63920AD3A21A43F2A93493A825B537F7675FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFF8360589C4430B43C21BC3E23BC4126B84227B54126B54126B541
      27B84226BB4125BB3F22B43C219C4431836058FFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF90
      5346B33E22BD4023B94428B64329B54327B54327B54327B54327B54328B54327
      B54328B54427B94328BD4123B33E218F5346FFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF995241BC4020BD45
      26B7472AB64729B64729B64629B64729B74529B64629B64628B64729B74729B7
      4729B64628B74629BD4625BB4120985341FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF9B5E4CBC4521BB4827B74929B84A29
      B84A29B33D19B84927B74929B84A29B84929B84A29B84929B84A29B84A29B84A
      29B84929B84929BB4A27BC44219B5E4CFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFFFFFFFF987367B94925BD4C27B84D29B94D2ABA4D2ABC502DDD
      A796BA512CB74823BA4E2ABA4D29BA4D29BA4D2ABA4D2ABA4D2ABA4D2AB94D29
      BA4D2AB94D29BD4C27B94925987367FFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFFFFFFFAD593ABE4E25BA5129BB502ABA512ABA512ABC532CFDFAF8F5E6
      E0D28D73BA4E27B94F26BA4F28BB5129BB512ABB512ABB5129BB512ABB5129BB
      5129BB5129BF4E26AD5939FFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFF9E
      7A6CBD5024BE5429BD5428BC5329BD5328BC5429BD562BFCF9F7FFFFFFFEFCFB
      F0D9CFCB7A59BC5125BA4F23BC5227BC5328BC5428BD5329BD5428BC5329BC54
      28BD5328BD4F249F7A6CFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFAD6B4DBF56
      24BD5729BE5729BE5728BD5628BD5728BF5A2BFCF8F6FFFFFFFFFFFFFFFFFFFF
      FFFFE7BEADC8704ABD5425BC5222BD5729BE5728BE5628BD5728BE5728BD5728
      C05624AE6B4EFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFB6633AC15A26C05927
      C05928C15927C15B29C15C2AC35F2FFCF8F6FFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFDF8F7DDA78DC86F42BE5420BF5827C05C2AC15A29C05928C15927C25825B7
      623AFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFBE612DC25C25C25C27C35E28C4
      5F2BC5612DC7632FC66735FDF9F7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFF3DED3DB9E7FC66734C1581FC5612FC35E2AC35C26C35B25BE602CFFFF
      FFFFFFFF696CFFFFFFFFFFFFA18B7CC35F23C45F25C46328C6652BC76830C96A
      33C96C35CB713CFDF9F7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFF1D8CBD79068C56127C6672EC56329C36025C36022A18A7CFFFFFF
      696CFFFFFFFFFFFFA18C7EC56223C76424C86A2BC96E31CB7035CC7439CC773F
      CF7C46FDFAF8FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFF3DFD1D69263C96D2FCB7135C96B2DC66525C56323A18C7DFFFFFF696CFFFF
      FFFFFFFFFFFFFFC26A2DCA6A26CC7031CE7739CF7B3FD08045D1854AD38951FD
      FAF8FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF6E8DDE1AC86D48A53
      CD793CD07F45CF7B3ECE7433CB6A27C26A2DFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFBF743BCE6E25D07A37D28244D3884AD38C50D69157D8975FFDFBF9FFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFDF7F3E9C6A8DDA273D79056D69155D69054D4
      8B4ED28648D17C3BCF6F28BF743CFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFB4
      8157D17021D3813AD58D4CD89557DA9A5EDA9D66DCA26EFEFBF9FFFFFFFFFFFF
      FFFFFFFEFDFCF3DECFE3B38EDDA576DDA273DDA270DBA06ADA9C62DA995BD792
      51D3843FD37324B58158FFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFA58F7BD075
      26D6853AD89853DBA064DEA66EDFA976E0AE80FEFDFBFFFFFFFEFCFBF7EAE2EA
      C5ABE3B392E3B38FE2B28DE2B189E1AE83DFAA7CDFA772DCA468D99A58D7883E
      D0792AA5907BFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFBF844EDC8731
      DB9F57DFAA6FE1B07EE3B488E5B895FEFDFCFCF4EFF0D7C6E6BDA2E7BEA5E8C0
      A7E8C0A5E7BEA3E6BB9EE5B998E4B690E3B284E0AB74DBA15CDD8A35BF8651FF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFA49483D38A3DE29F4EE1
      B277E4B78CE6BE9CE8C3A8F4E1D4EBC8B3EAC3ADEBCBB5EBCDB6EBCBB6EBCBB5
      EBC9B2E9C6B0E9C4ACE7C1A2E6BA93E2B27CE3A352D38C3FA49383FFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAD9376DE9C47E7B46CE6BE
      95E9C5ABEBCAB5EAC8B1EDCFBCEED2C2EED4C3EFD6C4F0D5C4EED4C1EED2C0ED
      D0BCECCDB7EAC8B1E6C09EE9B573E0A04CAD9377FFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFB29877E0AD61EDC18AEBC9B1
      EDD0BEEFD6C4F1D8C9F1DCCDF3DECFF3DDD0F2DDD0F2DDCEF1DACCF0D7C6EED3
      C0ECCBB8EEC392E1B066B19A78FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAB9D85D5B27BF0C99DF1D3BFF0
      D8C8F3DECEF3E1D4F4E3D7F5E4D8F5E4D8F4E1D6F3DFD1F2DACBF2D4C1F0CAA4
      D5B480AA9D85FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBBAA8EDBBFA2EED2BCF3DB
      CAF4DFD1F5E3D6F5E4D8F5E3D8F4E1D4F5DCCDEFD3BFDCC0A6BCAA92FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCCBBABDFC9BB
      ECD5C6F2DACCECD6C6DFCABDCDBBADFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696C}
    Layout = blGlyphRight
  end
  object BitBtn4: TBitBtn
    Left = 91
    Top = 240
    Width = 38
    Height = 38
    Anchors = [akRight]
    TabOrder = 4
    OnClick = BitBtn4Click
    Glyph.Data = {
      FE0A0000424DFE0A00000000000036000000280000001E0000001E0000000100
      180000000000C80A0000EB0A0000EB0A00000000000000000000FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF786D6B78615D
      7A5C567B5A547A5C5678615D796D6BFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFF7F7775825B5393493AA43F2AAD3A21B63A20BA
      3B21B63920AD3A21A43F2A93493A825B537F7675FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFF8360589C4430B43C21BC3E23BC4126B84227B54126B54126B541
      27B84226BB4125BB3F22B43C219C4431836058FFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF90
      5346B33E22BD4023B94428B64329B54327B54327B54327B54327B54328B54327
      B54328B54427B94328BD4123B33E218F5346FFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF995241BC4020BD45
      26B7472AB64729B64729B64629B64729B74529B64629B64628B64729B74729B7
      4729B64628B74629BD4625BB4120985341FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF9B5E4CBC4521BB4827B74929B84A29
      B84A29B33D19B84927B74929B84A29B84929B84A29B84929B84A29B84A29B84A
      29B84929B84929BB4A27BC44219B5E4CFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFFFFFFFF987367B94925BD4C27B84D29B94D2ABA4D2ABC502DDD
      A796BA512CB74823BA4E2ABA4D29BA4D29BA4D2ABA4D2ABA4D2ABA4D2AB94D29
      BA4D2AB94D29BD4C27B94925987367FFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFFFFFFFAD593ABE4E25BA5129BB502ABA512ABA512ABC532CFDFAF8F5E6
      E0D28D73BA4E27B94F26BA4F28BB5129BB512ABB512ABB5129BB512ABB5129BB
      5129BB5129BF4E26AD5939FFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFF9E
      7A6CBD5024BE5429BD5428BC5329BD5328BC5429BD562BFCF9F7FFFFFFFEFCFB
      F0D9CFCB7A59BC5125BA4F23BC5227BC5328BC5428BD5329BD5428BC5329BC54
      28BD5328BD4F249F7A6CFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFAD6B4DBF56
      24BD5729BE5729BE5728BD5628BD5728BF5A2BFCF8F6FFFFFFFFFFFFFFFFFFFF
      FFFFE7BEADC8704ABD5425BC5222BD5729BE5728BE5628BD5728BE5728BD5728
      C05624AE6B4EFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFB6633AC15A26C05927
      C05928C15927C15B29C15C2AC35F2FFCF8F6FFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFDF8F7DDA78DC86F42BE5420BF5827C05C2AC15A29C05928C15927C25825B7
      623AFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFBE612DC25C25C25C27C35E28C4
      5F2BC5612DC7632FC66735FDF9F7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFF3DED3DB9E7FC66734C1581FC5612FC35E2AC35C26C35B25BE602CFFFF
      FFFFFFFF696CFFFFFFFFFFFFA18B7CC35F23C45F25C46328C6652BC76830C96A
      33C96C35CB713CFDF9F7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFF1D8CBD79068C56127C6672EC56329C36025C36022A18A7CFFFFFF
      696CFFFFFFFFFFFFA18C7EC56223C76424C86A2BC96E31CB7035CC7439CC773F
      CF7C46FDFAF8FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFF3DFD1D69263C96D2FCB7135C96B2DC66525C56323A18C7DFFFFFF696CFFFF
      FFFFFFFFFFFFFFC26A2DCA6A26CC7031CE7739CF7B3FD08045D1854AD38951FD
      FAF8FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF6E8DDE1AC86D48A53
      CD793CD07F45CF7B3ECE7433CB6A27C26A2DFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFBF743BCE6E25D07A37D28244D3884AD38C50D69157D8975FFDFBF9FFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFDF7F3E9C6A8DDA273D79056D69155D69054D4
      8B4ED28648D17C3BCF6F28BF743CFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFB4
      8157D17021D3813AD58D4CD89557DA9A5EDA9D66DCA26EFEFBF9FFFFFFFFFFFF
      FFFFFFFEFDFCF3DECFE3B38EDDA576DDA273DDA270DBA06ADA9C62DA995BD792
      51D3843FD37324B58158FFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFA58F7BD075
      26D6853AD89853DBA064DEA66EDFA976E0AE80FEFDFBFFFFFFFEFCFBF7EAE2EA
      C5ABE3B392E3B38FE2B28DE2B189E1AE83DFAA7CDFA772DCA468D99A58D7883E
      D0792AA5907BFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFBF844EDC8731
      DB9F57DFAA6FE1B07EE3B488E5B895FEFDFCFCF4EFF0D7C6E6BDA2E7BEA5E8C0
      A7E8C0A5E7BEA3E6BB9EE5B998E4B690E3B284E0AB74DBA15CDD8A35BF8651FF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFA49483D38A3DE29F4EE1
      B277E4B78CE6BE9CE8C3A8F4E1D4EBC8B3EAC3ADEBCBB5EBCDB6EBCBB6EBCBB5
      EBC9B2E9C6B0E9C4ACE7C1A2E6BA93E2B27CE3A352D38C3FA49383FFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAD9376DE9C47E7B46CE6BE
      95E9C5ABEBCAB5EAC8B1EDCFBCEED2C2EED4C3EFD6C4F0D5C4EED4C1EED2C0ED
      D0BCECCDB7EAC8B1E6C09EE9B573E0A04CAD9377FFFFFFFFFFFFFFFFFFFFFFFF
      696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFB29877E0AD61EDC18AEBC9B1
      EDD0BEEFD6C4F1D8C9F1DCCDF3DECFF3DDD0F2DDD0F2DDCEF1DACCF0D7C6EED3
      C0ECCBB8EEC392E1B066B19A78FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAB9D85D5B27BF0C99DF1D3BFF0
      D8C8F3DECEF3E1D4F4E3D7F5E4D8F5E4D8F4E1D6F3DFD1F2DACBF2D4C1F0CAA4
      D5B480AA9D85FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBBAA8EDBBFA2EED2BCF3DB
      CAF4DFD1F5E3D6F5E4D8F5E3D8F4E1D4F5DCCDEFD3BFDCC0A6BCAA92FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCCBBABDFC9BB
      ECD5C6F2DACCECD6C6DFCABDCDBBADFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFF696CFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      696C}
    Layout = blGlyphRight
  end
end