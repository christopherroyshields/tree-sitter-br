01000 ! Replace Shippera/Oap !   Version 8.14
01100 ! *****
01200 ! ***** Shipper Entry, Automotive Version
01300 ! ***** Copyright (C) 1991-1994 By Oakland Sofware Corporation
01320 ! ***** 02/16/92 David R. Hockenberg
01340 ! ***** Note: List-Fm Function Is Custom For This Program
01350 ! *****
01360 ! ***** 03/29/22 Last Revised
01380 ! ***** 11/02/21 Prev Revised
02000 ! 
02100 Allocate: ! ***** Allocate Memory
02105    dim DATEW$(1)*80,DATE_$(1),DATE_(1)  !Pas half year
02110    dim COMPANY$*40,DUMMY$*255,WORK$*255
02115    dim SPECFN$(10)*18                 !Fkey display
02120    dim HELPLEVEL$(1)*8,GROUP$(1)*18
02125    dim CALW$(1)*80,CAL_SPEC$(1)*80,CALG$(1)*30,CLAH$(1)*90  !Cal use
02130    dim CAL$(1)*80,CAL(1)              !Calendars
02135    dim KEY$*64,SAVEKEY$*64,_KEY$*64,BL_KEY$*64  !Key data
02140    dim BLANK$(1)*90                   !Blank array
02145    dim F$(19)*30,F(42)                !Information record
02150    dim G$(19)*58,G(42)                !Save record
02155    dim ORH$(37)*30,ORH(45),ORDERH$(37)*30,ORDERH(45)  !Order header
02160    dim _SHH$(44)*30,_SHH(45)          !Point+shoot
02165    dim ORL$(14)*58,ORL(34)            !Order detail
02170    dim SHIPPERH$(44)*30, SHIPPERH(45)  !Shipper header
02175    dim SHIPPERL$(26)*58, SHIPPERL(43),_SHIPPERL$(26)*58, _SHIPPERL(43)  !Shipper detail
02180    dim IHISTL$(24)*30, IHISTL(42)     !Invoice history
02185    dim OSHIPL$(26)*30,OSHIPL(43)      !Save detail
02190    dim INV$(18)*30,INV(51)            !Inventory record
02192    dim INVENT$(18)*30,INVENT(48)      !Inventory record
02195    dim VEN$(23)*30,VEN(14)            !Vendor record
02200    dim CUS$(23)*30,CUS(19),CUSTOMER_KEY$(1)*8,CUSTOMER_LIST$(1)*42  !Customer record
02205    dim DES$(23)*30,DES(19),DEST_KEY$(1)*9,DEST_LIST$(1)*43  !Customer record
02210    dim QTY$(3)*15,QTY(30),BOML_QTY$(3)*15,BOML_QTY(30),INVTQTY_KEY$*80  !Invt qty
02215    dim COM$(5)*58,COM(1)              !Comments
02220    dim _SERIAL$(11)*26, _SERIAL(11)   !Used for delete routine only
02222    dim _SER$(56)*9,_SER(56),SS(56)    !Serial input and sort arrays
02225    dim CLASS$(2)*25,CLASS(11)         !Product class
02230    dim _F$(1)*30,_F(1),S$(1)*80,S(1)  !Search/save fields
02235    dim SHIPPER_TYPE$(3)*30            !Shipper type
02240    dim PC$(3)*19                      !Pay select
02242    dim DUMMY_$*80,ORD_KEY$*80,LABEL_KEY$*80
02245    dim TAXABLE$(2)*12                 !Tax select
02250    dim VENDOR_PAS$(1)*40              !Vendor p+s
02255    dim CARRIER_PAS$(1)*29             !Carrier p+s
02260    dim TERMS_PAS$(1)*24               !Terms p+s
02265    dim PLANT_PAS$(1)*34               !Plant p+s
02270    dim COMPANY_PAS$(1)*33             !Company p+s
02275    dim CURRENCY_PAS$(1)*18            !Currency p+s
02280    dim PC_PAS$(1)*30                  !P/c p+s
02285    dim SALESMAN_PAS$(1)*31            !Salesman p+s
02290    dim COMMENT_PAS$(1)*75             !Comment p+s
02295    dim LEGEND$*44                     !Function key legend
02300    dim FUNCTION$(45)*18,FUNCTIONS$(8,6)*10  !Function key data
02305    dim WINDOW$(1)*80,WINDOWSPEC$(1)*30  !Generic window info
02310    dim WORK$(1)*80,WORKSPEC$(1)*30,SPECW$(1)*30,HW$(1)*80  !Work window
02315    dim SAVE$(1)*80,SAVESPEC$(1)*30    !Save window info
02320    dim _$(1)*80                       !Generic usage
02325    dim POINT(1)                       !Search pointer
02330    dim CONTROL(109),CONTROL$(92)*30   !Control file
02335    dim FORM$(1)*512,FORM_$*30         !Forms
02340    dim TITLE$*40,FILENAME$*32,PATH$*18,SEARCH$*64
02345    dim WORK(100),DUMMY(100),DUMMY$(100)*80  !Work array
02347    dim DUMMY2$(1)*80                  !Work array
02350    dim SFRAME$(1)*2,FRAME$(1,8)*1     !Framing info
02355    dim TOTW$(1)*80,TOTSPEC$(1)*30,TOTH$(1)*80
02360    dim SHLW$(1)*80,SHLSPEC$(1)*30,SHLH$(1)*80
02365    dim INVW$(1)*80,INVSPEC$(1)*32,INVH$(1)*80
02370    dim VENW$(1)*80,VENSPEC$(1)*30,VENH$(1)*80
02375    dim COMW$(1)*80,COMSPEC$(1)*30,COMH$(1)*80
02380    dim SHHW$(1)*80,SHHSPEC$(1)*30,SHHH$(1)*70
02385    dim CUSW$(1)*80,CUSSPEC$(1)*30,CUSH$(1)*70
02390    dim ADHW$(1)*80,ADHSPEC$(1)*30,ADHH$(1)*80
02395    dim ADLW$(1)*80,ADLSPEC$(1)*30,ADLH$(1)*80
02400    dim SERW$(1)*80,SERSPEC$(1)*30,SERH$(1)*80
02405    dim LOTW$(1)*80,LOTSPEC$(1)*30,LOTH$(1)*80
02410    dim BLLW$(1)*80,BLLSPEC$(1)*30,BLLH$(1)*80,BLLG$(1)*30
02415    dim LIST_WINDOW$(1)*80,LIST_SPEC$(1)*30
02420    dim LIST$(1)*80,LIST(1),ALIST$(1)*20,ALIST(1)
02425    dim SFRGW$(1)*80,SFRGSPEC$(1)*30,SFRGH$(1)*80,OLDPART$*80
02430    dim TOTAL(5)                       !Order totals
02435    dim _INPUT_MASK$*104,MASK$*104     !For fninput
02440    dim SHIP_MASK$(4)*99,SHIPL_MASK$(4)*99
02445    dim INV_MASK$(2)*99
02450    dim BLL_MASK$(2)*99
02455    dim CUS_MASK$(3)*99
02460    dim DUMMY_MASK$(3)*99
02465    dim SHIP_DESC$(2)*30,SER_SPEC$(112)*16
02470    dim INVT$(1)*51,INVT_SPEC$(1)*30,INVT_KEY$(1)*20
02475    dim DEST$(1)*41,DEST_SPEC$(1)*30,DEST_KEY$(1)*19
02480    dim CUST$(1)*41,CUST_SPEC$(1)*30,CUST_KEY$(1)*21
02485    dim SHH_KEY$(1)*20,SHH_PAS$(1)*43
02490    dim ORH_KEY$(1)*20,ORH_PAS$(1)*63
02495    dim GLM$(6)*31,GLM(47)             !General ledger data
02500    dim GLM_$(1)*44,GLM_KEY$(1)*10     !Pas
02505    dim DEPART$(2)*28,DEPART(1),DEPART_CODE$(1)*33,DEPARTMENT$(1)*3
02510    dim TAX$(12)*20,TAX(19)            !Sales tax
02515    dim COMPANY$(12)*30,COMPANY(11)    !Company file
02520    dim INVT_PAS$(1)*30,INVT_INQ$(1)*44  !Invt inquiry
02525    dim DESC_V$(5)*30,VENMASK$(2)*99   !Vendor
02530    dim DESC_U$(3)*30                  !Customers
02535    dim QTY_KEY$*20,INQ_LIST$(1)*78    !Inventory inquiry
02540    dim TERMS$(2)*20,TERMS(4)          !Terms file
02545    dim _TAX$(12)*20,_TAX(19),TAX_KEY$(1)*4,TAX_PAS$(1)*25  !Pands
02550    dim VEND$(1)*40,VEND_SPEC$(1)*30,VEND_KEY$(1)*20
02555    dim PRODCLAS_PAS$(1)*29,PREV_CUST$*80
02560    dim PRICEW$(1)*80,PRICESPEC$(1)*30,PRICEG$(1)*30,PRICEH$(12)*90
02565    dim BLANKETL$(21)*26,BLANKETL(36)  !Blanket header
02567    dim BLANKETL_TMP$(21)*26,BLANKETL_TMP(36)  !Blanket header
02570    dim CONTAINER_PAS$(1)*31,SER_H$(112)*75  !Serial help
02572    dim SERIAL_$(56)*26,SERIAL_(56)    !Verify shipperl only
02575    dim COMMUN$(3)*30,COMMUN(1)        !Communications file
02580    dim COMM_LOCAL$(1)*36,COMM_CODE_LOCAL$(1)*4
02600    dim LOCQUAL$(1)*30,LOC2$(2)*30
02605    dim CARRIER$(5)*23,CARRIER(1)
02610    dim CONTAIN$(3)*23,CONTAIN(1),CONTAIN_CODE$(1)*32,CONT$(1)*6,TARE(1)
02615    dim UOM$(3)*9,UOM(1),UOM_CODE$(1)*13,UM$(1)*2
02620    dim BLL_KEY$(1)*42,BLL_PAS$(1)*76
02625    dim ENT_SPEC$(2)*30,CONV_SPEC$(1)*30,ENT_HELP$(2)*60  !Conversion routine
02630    dim COMMOD$(3)*34,COMMOD(1),COMMOD_CODE$(1)*40,COMMODITY$(1)*4
02635    dim BLANKET_KEY$*50
02640    dim ENT$(2)*80,ENT(3),SER_KEY$*40
02645    dim BUYER_CODE$(1)*31,BUYERS$(1)*3,BUYER$(2)*26,BUYER(1)
02650    dim SALES$(2)*26,SALES(19),SALES_CODE$(1)*31,SALESMAN$(1)*3
02655    dim INVAUDIT$(10)*15,INVAUDIT(15),BOML_AUDIT$(10)*15,BOML_AUDIT(15)  !Inventory audit trail
02660    dim PLANT(7),PLANT$(1)*30,PLANTFORM$*30
02665    dim CUM_TYPE$(6)*54,CUM_TYPE_PAS$(1)*30  !Cum type p+s
02670    dim SLIST(1),OLIST(1)
02672    dim SER_$(11)*26,SER_(11)          !For reading and writing label records
02675    dim LOTNO$(4)*15,LOTNO(2),LOT_KEY$(1)*34,LOT_PAS$(1)*42
02680    dim DOCK_PAS$(1)*16,DOCK_KEY$(1)*32,DOCK$(10)*30,DOCK(1)
02685    dim SCHEDC$(24)*25,SCHEDC(10),SCHEDC2$(24)*25,SCHEDC2(10)  !Schedules
02690    dim SQTY(16),SDATE(16),STIME(16),SCHW$(1)*80,SCHSPEC$(1)*30,SKEY$*30,ADLMASK$*30
02695    dim SHIPLOT$(3),SHIPLOT(3),LOT_$(30),LOT_(30),OLD_LOT$(30),OLD_LOT(30)
02700    dim LOCATE$(7),LOCATE(5)
02705    dim _SPH$(44)*30,_SPH(45)          !Shipper header
02710    dim STNDPACK$*6,SHIPPACK$*8        !Standard/shipped pack, piece
02715    dim SHIPDELH$(44)*30, SHIPDELH(45)  !Shipper header
02720    dim SHIPDELL$(26)*58, SHIPDELL(43)  !Shipper detail
02730    dim L_TOTAL$(26)*58, L_TOTAL(43)   !Shipper detail totals
02740    dim S_DEST$(1)*75                  !Shipper detail
02760    dim EDHW$(1)*80,EDHSPEC$(1)*30,EDHH$(1)*80
02780    dim EDIFACT_REASON$(1)*60,EDIFACT_RESPON$(1)*40,EDIFACT_HELP$(5)*80
02800    dim EDIFACT_SAVE$(6)*30
02820    dim BOML$(12)*30,BOML(9),BOMKEY$*30,QKEY$*30
02840    dim LOTLOGH$(7)*15,LOTLOGH(4)
02850    dim FRT_ACCT(1),CLAUSE_LST$(1)*30,CLAUSE_SRCH$(1)*30  !Freight accounts
02860    dim ORDERL$(14)*30,ORDERL(34)
02880    dim BARHEADER$(4)*30,_PART$(100)*100,BYTE$*1  !Upload data
02885    dim PAS_TITLE$*80
02890    dim WORKPART$(1)*80,MESSAGE$*80
02900    dim INTPART$(1)*19,WORK_INTPART$(1)*19  !Internal part list
02910    dim EDIW$(1)*80,EDISPEC$(1)*30,EDIH$(3)*80,EDIDOC_SOURCE$(1)*30
02912    dim EDI_DOC_LIST$(1)*15,EDIDOC_DATA$(3)*150,EDIDOC_DATA(5)
02913    dim EDIDOC_DATA2$(3)*150,EDIDOC_DATA2(5)  !Lin work file data
02914    dim EDIDOC_KEY$(1)*23,EDIDOC_KEY$*23,EDIDOC_PAS$(1)*100,EDIDOC_HEADING$*50
02916    dim EDIDOC_TITLE$(1)*50
02930    dim COMCAR_PAS$(1)*50,COMCAR_KEY$(1)*30,COMCAR_SPEC$(1)*30
02932    dim EQTM_PAS$(1)*58,EQTM_KEY$(1)*30,EQTM_SPEC$(1)*30
02934    dim CARR_ZOOM_HEADINGS$*52, COMMUN_ZOOM_HEADINGS$*38
02936    dim EQTM_ZOOM_HEADINGS$*46
02938    dim EQTM$(6)*25,EQTM(1)
02940    dim COMM$(44)*40,COMM(6)
02942    dim EQTM_DESC$(1)*64,EQ_DESC$*25,TM_DESC$*25,EQ_DESC$(1)*27
02944    dim PRICE$(3)*4,PRICE(3)
02946    dim CURRENCY$(1)*15,CURRENCY(7),FOREIGN_CURRENCY(1)
02948    dim RC_DETAIL$(1)*32
02949    dim PART$*15,OLD_PART$*15,PART_REV$*19,OLD_PART_REV$*19
02950    dim SCH_PAS$(1)*78
02952    dim KANBAN$(11)*30,KANBAN(8),KB_LINE$(100)*73,KB_LINE2$(1)*73,KB_WORK$*73,KANBAN_WARNING_PART$*30
03000 ! 
03100 Forms: ! ***** Forms Statements
03120    mat FORM$(42) !:
         read MAT FORM$
03140 Shipperh: data "Form 4*C 8,2*(3*V 30,V 18,V 3,V 9),V 14,V 8,C 1,V 2,V 7,3*V 2,V 10,V 4,V 5,C 1,V 20,2*V 9,V 2,V 4,V 12,C 1,V 14,POS 508,V 4,2*C 1,2*C 17,C 15,C 15,C 1,POS 402,BH 2.1,B 1,5*BH 3,2*BH 2,BH 3,2*BH 2,B 1,BH 2,B 1,2*BH 2,3*BH 2.3,10*B 1,BH 3.4,8*BH 4.2,2*BH 3,2*BH 2,BH 4,BH 3"
03160 Shipperl: data "Form 3*C 8,V 15,V 4,V 26,V 30,V 2,V 4,V 12,V 14,V 8,V 9,V 4,2*V 6,V 4,x 4,C 1,V 8,V 15,V 9,V 12,pos 315,V 6,V 14,pos 354,c 1,c 17,pos 218,BH 2,B 1,2*BH 4.2,BH 4,BH 4,BH 3,3*BH 2,B 1,BH 2,2*BH 4.WEIGHT_,2*PD 6.PRICE_,BH 4.2,3*BH 2.3,3*B 1,2*BH 3,B 1,BH 4,PD 6.PRICE_,2*BH 2,3*B 1,3*BH 3,POS 335,BH 2,BH 4.2,B 1,BH 4.2,2*BH 3,BH 2"
03180 Orderh: data "form 3*V 8,3*V 30,V 18,V 3,V 9,3*V 30,V 18,V 3,V 9,2*V 14,X 2,2*V 1,V 7,4*V 2,V 6,2*V 4,V 1,V 20,V 8,V 9,V 2,V 4,V 12,POS 489,C 15,C 3,C 17,POS 382,BH 2.2,B 1,6*BH 3,4*BH 2,B 1,BH 2,B 1,2*BH 2,3*BH 2.3,10*B 1,BH 3.4,8*BH 4.2,2*BH 3,2*BH 2,BH 4,BH 3"
03200 Orderl: data "Form V 8,V 15,V 4,V 26,V 30,V 2,2*V 8,V 14,V 8,V 9,V 4,V 6,V 8,BH 2,B 1,3*BH 4.2,BH 4,2*BH 2,2*BH 3,2*BH 4.WEIGHT_,2*PD 6.PRICE_,BH 4.2,3*BH 2.3,3*BH 1,BH 3,BH 1,BH 4,PD 6.PRICE_,BH 2,4*BH 1,3*BH 3,BH 2"
03220 Vendor: data "form V 8,3*V 30,V 18,V 3,V 9,V 10,2*V 30,V 18,V 3,V 9,V 10,V 15,V 3,V 2,2*V 4,V 19,3*V 1,2*B 1,BH 4,4*BH 3,3*PD 6.2,4*BH 4.2"
03240 Invent: data "form V 1,V 15,V 4,3*V 30,2*V 2,V 8,V 10,5*V 1,V 4,2*V 6,BH 3.3,BH 2,2*B 1,BH 2,BH 4.4,BH 4.WEIGHT_,2*PD 6.PRICE_,28*BH 4.PRICE_,10*BH 3,BH 4.4,BH 4,2*BH 3.3"
03260 Customer: data "form C 8,C 2,C 9,3*C 30,C 18,C 3,C 9,2*C 3,2*C 4,C 3,C 20,C 2,3*C 1,C 4,pos 191,C 6,C 1,POS 280,C 1,POS 198,2*B 1,BH 2,B 1,BH 2,B 1,BH 4,BH 2.2,4*BH 3,5*PD 6.2,2*BH 3"
03280 Blanketl: data "Form V 8,V 15,V 4,V 26,V 8,V 9,V 4,2*V 6,V 14,C 1,V 6,4*V 12,POS 256,V 6,V 14,V 7,V 1,V 5,POS 156,B 1,2*BH 2,6*BH 4,2*PD 6.PRICE_,BH 2,B 1,BH 2,2*B 1,3*BH 4,7*BH 3,2*BH 4,BH 4.PRICE_,B 1,BH 4,2*B 1,POS 311,BH 4,BH 3,BH 4.2"
03300 Terms: data "form V 2,V 20,BH 2.2,3*BH 1"
03320 Invtqty: data "form V 1,V 15,V 4,BH 1,4*BH 3,2*BH 1,2*BH 4,6*BH 4.2,BH 4,BH 4.2,BH 4,BH 4,BH 4,BH 4.2,8*PD 6.2,PD 6.PRICE_"
03340 Comment: data "form V 15,4*V 58,pos 1,BH 1"
03360 Gl_Master: data "form C 1,C 3,C 5,C 1,V 31,C 1,3*BH 2,47*PD 6.2"
03380 Prodclas: data "Form C 2,V 25,11*BH 4"
03400 Taxmast: data "Form C 1,V 3,V 20,9*C 1,3*BH 2.3,16*BH 4.2"
03420 Company: data "Form 3*V 30,V 18,V 3,V 9,5*C 8,C 6,BH 2,2*BH 1,7*BH 2,BH 1"
03440 Ihistl: data "Form 3*C 8,V 15,V 4,V 26,V 30,V 2,V 4,V 12,V 14,V 8,V 9,V 4,2*V 6,V 8,C 1,V 8,V 15,V 9,V 12,pos 315,V 6,V 14,pos 218,BH 2,B 1,2*BH 4.2,bh 4,BH 4,BH 3,3*BH 2,B 1,BH 2,2*BH 4.WEIGHT_,2*PD 6.PRICE_,BH 4.2,3*BH 2.3,3*B 1,2*BH 3,B 1,BH 4,PD 6.PRICE_,2*BH 2,3*B 1,3*BH 3,POS 335,BH 2,BH 4.2,B 1,BH 4.2,2*BH 3"
03460 _Serial: data "Form C 8,V 26,8*V 9,pos 140,V 9,pos 107,8*BH 3,3*BH 3"
03480 Shiplot: data "Form C 8,2*V 15,3*BH 3"
03500 _Audit: data "Form C 1,V 15,V 4,X 1,V 8,C 1,V 4,V 15,2*V 8,V 10,Pos 21,B 1,Pos 76,2*BH 1,2*BH 3,BH 2.2,BH 4.2,PD 6.PRICE_,5*BH 4.PRICE_,2*B 1"
03520 Salesman: data "Form C 3,V 26,B 1,10*BH 2.2,BH 2,BH 3,6*PD 6.2"
03540 Lotno: data "Form  V 15,V 4,V 15,V 8,BH 4.2,BH 3"
03560 Dock: data "Form V 8,V 9,c 8,3*V 30,V 18,V 3,V 9,pos 162,c 15,pos 146,B 1"
03580 Schedc: data "FORM v 8,v 15,v 4,v 8,v 9,v 1,v 9,v 5,v 10,v 10,v 6,v 1,v 7,v 20,v 20,v 20,v 15,v 25,v 12,POS 246,v 15,v 1,v 17,v 14,v 4,POS 206,BH 3,BH 3,BH 4,BH 4,BH 4,B 1,BH 3,BH 3,BH 3,BH 2"
03590 Locate: data "form C 1,C 15,C 4,X 1,C 8,C 15,C 8,C 1,POS 21,B 1,X 32,BH 3,3*BH 4.2"
03591 Dummy25: data "form X 1"
03592 Dummy26: data "form X 1"
03594 Dummy27: data "form X 1"
03600 Dummy28: data "form X 1"
03605 Dummy29: data "form X 1"
03610 Dummy30: data "form X 1"
03615 Dummy31: data "form X 1"
03620 Dummy32: data "form X 1"
03640 Boml: data "Form C 1,V 15,V 4,V 15,V 4,C 1,X 4,C 1,4*C 30,C 1,3*BH 3,4*BH 4.BQTY_,2*B 1"
03642 Lotlogh: data "Form V 15,V 4,V 15,4*V 8,2*B 1,BH 3,BH 4.2"
03644 Bcode: data "Form V 9,V 15,V 4,V 9,V 15,V 9,2*C 1,V 6,V 10,V 8,V 7,V 12,V 5,V 2,V 4,V 10,V 4,2*V 15,V 5,C 1,V 12,C 1,V 8,2*V 12,V 3,V 1,V 9,POS 270,C 8,POS 228,BH 3,B 1,3*BH 3,B 1,BH 3,2*B 1,BH 3"
03650 Carrier: data "Form C 4,C 4,V 23,C 2,C 2,BH 2"
03655 Commun: data "form C 4,G 30,G 14,2*G 9,G 10,2*G 2,2*G 15,G 1,G 2,G 2,4*G 1,2*G 12,POS 163,3*G 10,G 12,3*G 10,G 20,2*G 10,G 8,3*G 2,G 10,2*G 9,G 15,2*G 40,G 5,G 3,3*G 1,POS 144,2*BH 4,BH 3,BH 2,BH 3,BH 3"
03660 Eqtm: data "form c 8,4*c 2,c 25,bh 4"
03665 Price: data "form c 2,c 4,c 1,x 16,b 1,bh 3.4,bh 3.4"
03670 Currency: data "form V 15,BH 3.4,6*BH 4"
03675 General_Edi: data "form C 2,V 15,POS 31,V 90,POS 18,4*BH 3,BH 1"
03950 Subscript_: form POS 1,99*B 1
03955 Control_: form POS 181,82*C 1,C 30,9*C 1,POS 1,7*B 1,2*BH 2.2,18*BH 4,67*B 1,6*BH 2,2*BH 2.2,7*BH 2
03960 Kanban: data "form C 8,C 15,C 4,C 8,C 9,2*C 1,C 8,C 9,C 15,V 8,X 13,6*BH 3,BH 4,BH 3"
03962 Kanban_Shipper: form POS 47,C 8
03980 ! 
03990    if (NOT SECURITY_LEVEL_) AND ENV$("LOGNAME")><"root" then !:
            goto Menu
04000 ! 
04020 ! ***** Set Options
04040    print NEWPAGE
04060    option base 1
04080    on error goto Trap !:
         gosub Define                       !Define data !:
         execute "Config Decimal Required"
04090    gosub Link_Libs
05000 ! 
05100 Openfile: ! ***** Open Files
05105    let FNOPEN_KEYEDB(5,"SHIPDELH","HIS") !:
         let FNOPEN_KEYEDB(7,"SHIPDELL","HIS") !:
         let FNOPEN_KEYEDB(10,"SHIPPERH","OAD") !:
         let FNOPEN_KEYEDB(13,"SHIPPERL","OAD") !:
         let FNOPEN_KEYEDB(16,"LOTLOGH","IND")
05160    let FNOPEN_KEYEDB(20,"ORDERH","OED") !:
         let FNOPEN_KEYEDB(25,"ORDERL","OED") !:
         let FNOPEN_KEYEDB(-28,"INVOICEH","OAD") !:
         let FNOPEN_KEYEDB(30,"CUSTOMER","ARD") !:
         let FNOPEN_KEYEDB(35,"INVENT","IND") !:
         let FNOPEN_KEYEDB(40,"INVTQTY","IND") !:
         let FNOPEN_KEYEDB(42,"LOCATE","IND") !:
         let FNOPEN_KEYEDB(-45,"VENDOR","APD") !:
         let FNOPEN_KEYEDB(-50,"COMMENT","CND")
05280    if CONTROL$(11)="Y" AND EXISTS("BOML/MAD") then !:
            let FNOPEN_KEYEDB(-52,"BOML","MAD")
05300    open #(OPENITEM4:=54): "Name= OPENITEM/ARD, Kfname= OPENITEM.KY4/ARD, Shr",internal,input,keyed 
05360    let FNOPEN_KEYED(-55,"TAXMAST","ARD") !:
         let FNOPEN_KEYEDB(-57,"DOCKS","OAD") !:
         let FNOPEN_KEYEDB(59,"BLANKETL","OED") !:
         let FNOPEN_KEYEDB(-65,"GLMASTER","GLD") !:
         let FNOPEN_KEYEDB(67,"LOTNO","IND") !:
         let FNOPEN_KEYED(-70,"TERMS","CND") !:
         let FNOPEN_KEYEDB(-72,"COMMUN","COD")
05440    let FNOPEN_KEYEDB(-73,"SALESMAN","SAD")
05460    let FNOPEN_KEYED(-74,"PRODCLAS","IND")
05480    let FNOPEN_KEYEDB(75,"AUDIT","IND")
05500    let FNOPEN_KEYEDB(78,"LABEL","OAD")
05520    let FNOPEN_KEYEDB(80,"SHIPLOT","OAD")
05540    let FNOPEN_KEYEDB(-83,"IHISTH","HIS")
05560    let FNOPEN_KEYEDB(-84,"IHISTL","HIS")
05580    let FNOPEN_KEYEDB(-300,"SCHEDC","OED")
05590    let FNOPEN_KEYEDB(98,"CARRIER","OED") !:
         open #(EQTM2:=310): "name=oed\eqtm,kfname=oed\eqtm.ky2,shr",internal,input,keyed  !:
         if EXISTS("ind\price") then !:
            let FNOPEN_KEYEDB(-320,"PRICE","IND")
05600    if EXISTS("BCODE/BCD") then !:
            let FNOPEN_KEYEDB(325,"BCODE","BCD")
05610    let EDIDOC_CHANNEL=330
05620    open #(COMPANY:=87): "Name= COMPANY/CND, Shr",internal,outin,relative 
05640    open #(PLANT:=88): "Name= WHOUSE/CND, Shr",internal,input,relative 
05660    if CURRENCIES > 1 then !:
            open #(CURRENCY:=89): "Name= CURRENCY/CND, Shr",internal,input,relative 
05680    open #(SCREENS:= 91): "Name= WINDOW/OAP, KfName= WINDOW.KEY/OAP, Isam, Shr",internal,input,keyed  !:
         open #(SCREENSI:= 92): "Name= WINDOW/INP, Kfname= WINDOW.KEY/INP, Isam, Shr",internal,input,keyed  !:
         open #(SCREENSA:= 94): "Name= WINDOW/ARP, Kfname= WINDOW.KEY/ARP, Isam, Shr",internal,input,keyed 
05700    open #(ERRORLOG:= 96): "Name= ERRORLOG.Z[WSID]/CND, Replace, Recl=128",display,output 
05720    open #(FUNCTION:= 124): FNWINDOW$(22,1,2,80),display,output  !:
         open #125: FNWINDOW$(COMMENTR,COMMENTC,1,76),display,output  !:
         open #126: FNWINDOW$(24,COMMENTC,1,76),display,output  !:
         open #(HELP:=127): FNWINDOW$(24,1,1,80),display,output  !:
         let MESSAGE_WIN=122
06000 ! 
06100 Pre: ! ***** Pre Processing
06110    let FUNCTIONS$(1,1)=FNAVAILABLE$(FUNCTIONS$(SHIPPERH_,1),ENV$("LOGNAME"),SECURITY_LEVEL_) !:
         if FNRESTORE(PRODCLAS,NULL$) AND FNREAD_FILE(PRODCLAS,FORM$(PRODCLAS_),NULL$,0,MAT CLASS$,MAT CLASS,0) then !:
            let DEFAULT_CLASS=VAL(CLASS$(1)) error Ignore
06120    let FNGET_EQ_DESC$(MAT EQ_DESC$)
07000 ! 
07100 Mainloop: ! ***** Main Driver
07200    let FNFM(WINDEX,SHIPPERH_,SHIPPERH,FORM$(SHIPPERH_),MAT SHIPPERH$,MAT SHIPPERH,SCREENS,"SHIPPERH",SHHROW,SHHCOLUMN,SHHROWS,SHHCOLUMNS,MAT SHHW$,MAT SHHSPEC$,MAT DUMBGS$,MAT DUMUS$,MAT SHHH$,MAT SHIP_MASK$,NULL$,SAVE_FUNCTION,MAT FUNCTIONS$,255,10,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
08000 ! 
08100 Endmain: ! ***** End Of File
08120    let FNFUNCTION("         ")
09000 ! 
09100 Close: ! ***** Close Files
09200    if LREC(ERRORLOG) then 
09210       close #ERRORLOG: 
09220       if WBPLATFORM$="WINDOWS" then !:
               execute "type cnd\errorlog.z"&CNVRT$("zd 2",VAL(WSID$))&" >>cnd\errorlog" !:
               execute "type cnd\errorlog.z"&CNVRT$("zd 2",VAL(WSID$))&" >>mail\"&LOGIN_NAME$ !:
            else !:
               execute "*System cat ./cnd/errorlog.z"&CNVRT$("zd 2",VAL(WSID$))&" >>./cnd/errorlog" !:
               execute "*System cat ./cnd/errorlog.z"&CNVRT$("zd 2",VAL(WSID$))&" >>./mail/"&LOGNAME$
09230    end if 
09300    close #ERRORLOG: error Ignore !:
         execute "Free errorlog.z[wsid]/cnd -N" error Ignore
09320 ! 
09400 Menu: ! ***** Return To Menu
09500    chain "MENU/CNP"
10000 ! 
10010 Link_Libs: ! *****
10020    library "cnp\guilib": FNGUI_PAS,FNGUI_GRID !:
         library "oap\sort_shl": FNSORT_SHL !:
         return  !:
         ! 
10100 Define: ! ***** Define Data
10101    if ENV$("guimode")=="ON" then !:
            execute "con gui off"
10102    let GUI_MODE=(ENV$("guimode")=="ON") !:
         if GUI_MODE then !:
            let _C$=CHR$(5) !:
         else !:
            let _C$=" "
10103    read TITLE$
10106    data "Shipper Entry"
10109    read COMMENTR,COMMENTC,COMMENTL
10112    data 21,3,74
10115    read FUNCTIONR,FUNCTIONC,FUNCTIONL
10118    data 22,3,16
10121    read FILENAME$,PATH$,KEYPOS$,KEYLEN$,RECL
10124    data "SHIPPERH","OAD","9","8",600
10127 ! 
10130 _Frame: ! ***** Define Frame Data
10133    read MAT SFRAME$,MAT FRAME$
10136    data ""
10139    data "","","","","","","",""
10142 ! 
10145 _Function_Spec: ! ***** Define Function Field Specs
10148    read MAT SPECFN$
10151    data "01,04,C 15,,01","02,04,C 15,,02","01,19,C 15,,03","02,19,C 15,,04","01,34,C 15,,05"
10154    data "02,34,C 15,,06","01,49,C 15,,07","02,49,C 15,,08","01,64,C 15,,09","02,64,C 16,,10"
10157 ! 
10160 _Functions: ! ***** Define Function Key Descriptions
10162    read LEGEND$,MAT FUNCTION$
10164    data "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqr"
10166    data "          "
10168    data "Add       "
10170    data "Change    "
10172    data "Delete    "
10174    data "Inquire   "
10176    data "Prices    "
10178    data "Process   "
10180    data " Menu     "
10182    data " Cancel   "
10184    data "Releases  "
10186    data "Search    "
10188    data "Add'l Data"
10190    data "Shp Detail"
10192    data "Completed "
10194    data "Accept Shp"
10196    data "Reject Shp"
10198    data "Re-Start  "
10200    data "Show Total"
10202    data "Continue  "
10204    data "Move Line "
10206    data "LineEditor"
10208    data "Shp Header"
10210    data "Insert    "
10212    data "Inventory "
10214    data "Actual/Cum"
10216    data "HeaderPage"
10218    data "Zoom      "
10220    data "History   "
10222    data "Convert Or"
10224    data "Serial/Lot"
10226    data "Select All"
10228    data "Edit Qty  "
10230    data "Blanket Or"
10232    data "Print Ship"
10234    data "Select Sgl"
10236    data "Sp. Delete"
10238    data "View 862`s"
10240    data "Conveyence"
10242    data "Page Up   "
10244    data "Page Down "
10246    data "Imprt New "
10248    data "Imprt Chng"
10250    data "Select All"
10252    data "UnselctAll"
10253    data "EDI Info  "
10282 ! 
10283 ! ***** Fm Function Masks
10286    read MAT FUNCTIONS$
10289    data "AiBCD bWG ","KkZ     HL","KkZ     HL","        H ","K      LH ","        H "
10292    data "AVBCD  SUM","KcZfajWMTF","KcZfa   TF","        TC","K   aj  T ","          "
10295    data "A BCD bWH ","K Z     HL","  Z     HL","       LH ","       LH ","        H "
10298    data "AVBCD  S M","K Z aYWMTA","  Z     TB","        TC","        TD","          "
10301    data "        H ","I Z     HF","  Z     HF","        HF","         F","          "
10304    data "A B     HL","  Z E   HF","  Z E   HF","        HF","         F","          "
10307    data "A B     H ","  Z     HF","  Z     HF","        HF","        HF","          "
10310    data "AVBCD  S M","I ZKaYWMTA","I ZK    TB","        TC","        TD","          "
10313 ! 
10316 _Pas: ! ***** Read Pas Data
10319    read MAT SHIPPER_TYPE$
10322    data "Single Shipment","Return To Vendor","Return To Customer"
10323    if GUI_MODE then !:
            for I= 1 to UDIM(SHIPPER_TYPE$) !:
               let SHIPPER_TYPE$(I)=SHIPPER_TYPE$(I)&_C$ !:
            next I
10331 ! 
10334    read MAT CUM_TYPE$
10337    data "A: Update on ASN Transmission","B: Update on ASN Transmission (Previous Day's Accum)","F: Update on Shipper Conversion","G: Update on Shipper Conversion (Previous Day's Accum)","I: Update on Invoice Post","J: Update on Invoice Post (Previous Day's Accum)"
10349 ! 
10352    read MAT PC$
10355    data "P:Prepaid","C:Collect","I:Prepay & Invoice"
10356    if GUI_MODE then !:
            let PC$(1)="P"&_C$&"Prepaid"&_C$ !:
            let PC$(2)="C"&_C$&"Collect"&_C$ !:
            let PC$(3)="I"&_C$&"Prepay & Invoice"&_C$
10358 ! 
10740 ! 
10742    read MAT LOC2$
10743    if GUI_MODE then !:
            let LOC2$(1)="PP "&_C$&"Pool Point"&_C$ !:
            let LOC2$(2)="OR "&_C$&"Air Only"&_C$
10744    data "PP  Pool Point.","OR  Air Only"
10750 ! 
10752    mat EDIFACT_REASON$(21) !:
         read MAT EDIFACT_REASON$
10754    data "A Special rail car order, schedule increase forecast change"
10756    data "B Engineering change or late release","C Specification error/overbuilding"
10758    data "D Shipment Tracing Delay","E Plant inventory loss","F Building ahead of schedule"
10760    data "G Vendor behind schedule","H Failed to include in last shipment"
10762    data "I Carrier loss claim","J Transportation failure","K Insufficient weight for carload"
10764    data "L Reject or discrepancy","M Transportation delay","N Lack of railcar or railroad equipment"
10766    data "P Releasing Error","R Record error or cate reported discrepancy report"
10768    data "T Common or peculiar part schedule increase","U Alternative supplier shipping for responsible supplier"
10770    data "W Purchasing waiver approval","X Authorization code to be determined","Y Pilot Material"
10772    if GUI_MODE then !:
            for I=1 to UDIM(EDIFACT_REASON$) !:
               let EDIFACT_REASON$(I)(2:2)=_C$ !:
               let EDIFACT_REASON$(I)=EDIFACT_REASON$(I)&_C$ !:
            next I
10776    mat EDIFACT_RESPON$(5) !:
         read MAT EDIFACT_RESPON$
10777    data "A Customer Plant (receiving location)","B Material Release Issuer"
10778    data "S Supplier authority","X Responsibility to be determined","Z Mutually Defined"
10779    if GUI_MODE then !:
            for I=1 to UDIM(EDIFACT_RESPON$) !:
               let EDIFACT_RESPON$(I)(2:2)=_C$ !:
               let EDIFACT_RESPON$(I)=EDIFACT_RESPON$(I)&_C$ !:
            next I
10793 ! 
10796 _Help: ! ***** Read Help Data
10799    mat SHHH$(33)
10802    read MAT SHHH$
10805    data "1127;Enter the shipper number.;"
10808    data "1127;Enter the customer code for this shipper.;"
10811    data "1127;Enter the destination to which to ship.;"
10814    data "1127;Enter the type of shipper.;"
10817    data "1127;Enter the 'sold to' name for this shipper.;"
10820    data "1127;Enter the street address for this shipper.;"
10823    data "1127;Enter additional address information if applicable.;"
10826    data "1127;Enter the city for this shipper.;"
10829    data "1127;Enter the state for the 'sold to' address.;"
10832    data "1127;Enter the zip code for the 'sold to' address.;"
10835    data "1127;Enter the destination name.;"
10838    data "1127;Enter the destination address.;"
10841    data "1127;Enter the destination address.;"
10844    data "1127;Enter the destination city.;"
10847    data "1127;Enter the destination state.;"
10850    data "1127;Enter the destination zip code.;"
10853    data "1127;Enter the terms code for this shipper.;"
10856    data "1127;Enter the salesman code, if applicable.;"
10857    data "1127;Enter the communications code for ASN transmission.;"
10859    data "1127;Enter the pickup SCAC code of the carrier to be used.;"
10860    data "1127;Enter the delivery SCAC code of the carrier to be used.;"
10862    data "1127;Enter the plant from which shipment is being made.;"
10865    data "1127;Enter the bill of lading or air bill number.;"
10868    data "1127;Enter the customer's dock code information.;"
10874    data "1127;Enter the Trailer Number.;"
10877    data "1127;Enter the seal number, if applicable.;"
10880    data "1127;Enter the equipment code or press F3.;"
10883    data "1127;Enter the transportation mode or press F3.;"
10886    data "1127;Enter either (P)repaid, (C)ollect, or Prepay and (I)nvoice.;"
10889    data "1127;Enter the scheduled shipment date.;"
10892    data "1127;Enter the shipment time.;"
10895    data "1127;Enter the arrival date.;"
10898    data "1127;Enter the arrival time.;"
10901 ! 
10904    mat VENH$(16)
10907    read MAT VENH$
10910    data "1127;Enter the Vendor Code.;"
10913    data "1127;Enter the Vendor Name.;"
10916    data "1127;Enter the Remittance Address.;"
10919    data "1127;Enter an additional Remittance Address line if needed.;"
10922    data "1127;Enter the Remittance City.;"
10925    data "1127;Enter the Remittance State.;"
10928    data "1127;Enter the Remittance Zip Code.;"
10931    data "1127;Enter the Vendor Telephone.;"
10934    data "1127;Enter the Purchasing Address.;"
10937    data "1127;Enter an additional Purchasing Address line if needed.;"
10940    data "1127;Enter the Purchasing City.;"
10943    data "1127;Enter the Purchasing State.;"
10946    data "1127;Enter the default terms for this Vendor.;"
10949    data "1127;Enter the default carrier for this Vendor.;"
10952    data "1127;Enter either (P)repaid, (C)ollect, or Prepay and (I)nvoice.;"
10955    data "1127;Enter the default FOB Point for this Vendor.;"
10958 ! 
10961    mat SHLH$(14)
10964    read MAT SHLH$
10967    data "1127;Enter the Part number and press RETURN.;"
10970    data "1127;Enter the engineering revision number.;"
10973    data "1127;Enter the quantity shipped.;"
10976    data "1127;Enter the quantity back ordered.;"
10979    data "1127;Enter the accum quantity.;"
10982    data "1127;Enter the customer's part number.;"
10985    data "1127;Enter 'Q' or 'V' if shipping from quarantine, leave blank for onhand.;"
10988    data "1127;Enter the description for this Line.;"
10991    data "1127;Enter the unit net weight for this item.;"
10994    data "1127;Enter the total tare weight.;"
10997    data "1127;Enter the container code.;"
11000    data "1127;Enter the quantity of containers.;"
11003    data "1127;Enter the second container code.;"
11006    data "1127;Enter the quantity of the second containers.;"
11009 ! 
11012    mat INVH$(31) !:
         read MAT INVH$
11015    data "1127;Enter the part number.;"
11018    data "1127;Enter the engineering revision code.;"
11021    data "1127;Enter a valid company number.;"
11024    data "1127;Enter the internal (sale) description for this part.;"
11027    data "1127;Enter the internal (sale) description for this part.;"
11030    data "1127;Enter the external (purchase) description for this part.;"
11033    data "1127;Enter the internal (sale) unit of measure.;"
11036    data "1127;Enter the external (purchase) unit of measure.;"
11039    data "1127;Enter the material type or grade.;"
11042    data "1127;Enter the material size.;"
11045    data "1127;Enter 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', or 'J'.;"
11048    data "1127;Enter yes if this is a taxable part.;"
11051    data "1127;Enter yes if this part MUST have a lot number.;"
11054    data "1127;Enter a primary shipping container code.;"
11057    data "1127;Enter a secondary shipping container code.;"
11060    data "1127;Enter a valid vendor number for this part.;"
11061    data "1127;Enter a scrap factor to use during MRP extract (1.05 is a 5% increase).;"
11063    data "1127;Enter a user defined part type.;"
11066    data "1127;Enter the group code.;"
11069    data "1127;Enter the product class.;"
11072    data "1127;Enter the lead time in days.;"
11075    data "1127;Enter a conversion factor from vendor to stock.;"
11078    data "1127;Enter the net weight per piece in pounds.;"
11081    data "1127;Enter the commodity code.;"
11084    data "1127;Enter the standard pack for this part.;"
11087    data "1127;Enter the economic production or order quantity for this part.;"
11090    data "1127;Enter the drawing number for this part.;"
11091    data "1127;Enter the last purchase cost per piece.;"
11092    data "1127;Enter the per-piece commission for this part.;"
11093    data "1127;Enter the plant from which this part is normally shipped.;"
11094    data "1127;Enter the date the price was changed.;"
11095 ! 
11096    mat EDIDOC_SOURCE$(5) !:
         read MAT EDIDOC_SOURCE$
11097    data "J: DELJIT - Shipping Schedule","F: DELFOR - Delivery Forecast"
11098    data "S: 862 - Shipping Schedule","R: 830 - Release","P: 850 - Puchase Order"
11099 ! 
11100    mat EDIDOC_FILE$(5) !:
         read MAT EDIDOC_FILE$
11101    data "deljit","delfor","schedule","release","purchase"
11102    let EDIDOC_LEGEND$="JFSRP"
11103 ! 
11104    mat EDIDOC_TITLE$(5) !:
         read MAT EDIDOC_TITLE$
11105    data "Available Daily Ship Schedules","Available DELFORs"
11106    data "Available Ship Schedules","Available Releases"
11107    data "Available Purchase Orders"
11108 ! 
11109    read MAT EDIH$
11110    data "1127;Enter the EDI Document Type;"
11111    data "1127;Select the Specific Document;"
11112    data "1127;Select a Line Item within the Document;"
11114 ! 
11138    mat CUSH$(30) !:
         read MAT CUSH$
11140    data "1127;Enter the Customer Account Number.;"
11142    data "1127;Enter 'BT' for BILL-TO or 'ST' for SHIP-TO.;"
11144    data "1127;Enter a destination code (ST records only).;"
11146    data "1127;Enter the Customer Name.;"
11148    data "1127;Enter the Customer Address.;"
11150    data "1127;Enter the Customer Address, Line 2.;"
11152    data "1127;Enter the Customer City.;"
11154    data "1127;Enter the Customer State.;"
11156    data "1127;Enter the Customer Zip Code.;"
11158    data "1127;Enter the Customer Phone Number.;"
11160    data "1127;Enter the Customer Phone Number.;"
11162    data "1127;Enter the Customer Phone Number.;"
11164    data "1127;Enter the Customer Contact Name.;"
11166    data "1127;Enter the Terms Code.;"
11168    data "1127;Enter the Price Code.;"
11170    data "1127;Enter the Customer Class. Valid are 1 to 99.;"
11172    data "1127;Enter (Y)es or (N)o to indicate if statements should be sent.;"
11174    data "1127;Enter the Territory Code for this customer.;"
11176    data "1127;Enter (Y)es or (N)o to indicate if late changes should be made.;"
11178    data "1127;Enter (Y)es or (N)o to indicate if this customer is taxable.;"
11180    data "1127;Enter the Sales Tax Jurisdiction for this customer.;"
11182    data "1127;Enter the Company Number for this customer.;"
11184    data "1127;Enter the Currency Code for this customer.;"
11186    data "1127;Enter the Salesman Number for this customer.;"
11188    data "1127;Enter the Dock Code for this customer.;"
11190    data "1127;Enter either (P)repaid, (C)ollect, or Prepay and (I)nvoice.;"
11192    data "1127;Enter the SCAC code for the Carrier normally used.;"
11194    data "1127;Enter the communications code for this customer.;"
11196    data "1127;Enter the normal shipment time in DDHHMM form.;"
11198    data "1127;Enter the Credit Limit for this customer.;"
11201 ! 
11204    mat ADHH$(12) !:
         read MAT ADHH$
11207    data "1127;Enter the Master Bill of Lading Number if Applicable.;"
11210    data "1127;Enter the location ID.;"
11213    data "1127;Enter the location qualifier.;"
11216    data "1127;Enter the Customer Release Number if Applicable.;"
11219    data "1127;Enter the Date Created.;"
11222    data "1127;Enter the ASN Transmission Date.;"
11225    data "1127;Enter 'Y' or 'N' to indicate a Hazardous Material Shipment.;"
11228    data "1127;Enter 'Y' or 'N' to indicate if this shipment is subject to sales tax.;"
11231    data "1127;Enter the Sales Tax Jurisdiction.;"
11234    data "1127;Enter the Company Number.;"
11237    data "1127;Enter the Currency Number.;"
11240    data "1127;Enter the Work Station ID.;"
11243 ! 
11246    mat ADLH$(25) !:
         read MAT ADLH$
11249    data "1127;Enter the Order Number.;"
11252    data "1127;Enter the customer release number.;"
11255    data "1127;Enter the lot number.;"
11258    data "1127;Enter the heat number.;"
11261    data "1127;Enter the RAN number (Diamond Star only).;"
11264    data "1127;Enter the quantity ordered.;"
11267    data "1127;Enter the plant bin location number.;"
11268    data "1127;Enter the Honda Customer Part Extension here.;"
11270    data "1127;Enter the standard cost for this part.;"
11273    data "1127;Enter the unit price for this part.;"
11276    data "1127;Enter the commission code for this part.;"
11279    data "1127;Enter the net commission per part.;"
11282    data "1127;Enter the general ledger credit account for this part.;"
11285    data "1127;Enter the group code for this part.;"
11288    data "1127;Enter the product class for this part.;"
11289    data "1127;Enter the Honda Project Number here.;"
11290    data "1127;Enter the Schedule Number.;"
11291    data "1127;Enter the unit of measure for this part.;"
11294    data "1127;Enter the commodity code (BOL) for this part.;"
11297    data "1127;Enter the model year for this part.;"
11300    data "1127;Enter the standard pack for this part.;"
11303    data "1127;Enter the number of loose containers.;"
11306    data "1127;Enter 'Y' or 'N' to indicate if this part is taxable.;"
11309    data "1127;Enter the salesman code for this part.;"
11310    data "1127;Enter the clause number or TTB for Transportation.;"
11312 ! 
11314    mat BLLH$(17) !:
         read MAT BLLH$
11316    data "1127;Enter the Item number and press RETURN.;"
11318    data "1127;Enter the Engineering Revision.;"
11320    data "1127;Enter the Customer's Part Number.;"
11322    data "1127;Enter the Customer's Purchase Order Number.;"
11324    data "1127;Enter the special ship code, if any.;"
11326    data "1127;Enter the Container Type Normally Used for this Part.;"
11328    data "1127;Valid Accum Update Methods are 'A', 'B', 'I', and 'J'.;"
11330    data "1127;Enter the Model Year for this part.;"
11332    data "1127;Enter the standard pack quantity for this part.;"
11334    data "1127;Enter the Order Quantity (OPTIONAL).;"
11336    data "1127;Enter the Cumulative Quantity for this Part.;"
11338    data "1127;Enter the Unit Cost for This Part.;"
11340    data "1127;Enter the Unit Price for This Customer.;"
11342    data "1127;Enter the Latest Customer Release Number.;"
11344    data "1127;Enter the date of the Latest Customer Release.;"
11346    data "1127;Enter the Salesman Number for This Part.;"
11348    data "1127;Enter the Commission Per Piece, if applicable.;"
11350 ! 
11352    read MAT EDIFACT_HELP$
11354    data "1127;Enter the excess reason code.;"
11356    data "1127;Enter the excess responsibility code.;"
11358    data "1127;Enter the excess authorization number.;"
11360    data "1127;Enter the conveyance number.;"
11364    data "1127;Enter the ultimate customer, if applicable.;"
11369 ! 
11372 _Masks: ! ***** Read Field Masks
11375    read MAT SHIP_MASK$
11378    data "010111111111111111111111111111111111"
11381    data "111100000000000000000000000000000111"
11384    data "000011111111111111111111111111111111"
11387    data "111100000000000000000000000000000111"
11390 ! 
11393    read MAT SHIPL_MASK$
11396    data ""
11399    data "00000000000000"
11402    data "01111110111111"
11403    data "00011000000000"
11405 ! 
11408    read MAT CUS_MASK$
11411    data "0001111111111111111111111111111111111111111"
11414    data "1110000000000000000000000000001111111111111"
11417    data "1110000000000100101001100000011111111111111"
11420 ! 
11423    read MAT INV_MASK$
11426    data "0001111111111111111111111111111"
11429    data "1110000000000000000000000000011"
11432 ! 
11435    read MAT VENMASK$
11438    data "011111111111111111111111111111111"
11441    data "100000000000000000000000000001111"
11444 ! 
11447    read MAT BLL_MASK$
11450    data ""
11453    data "000001000000000"
11456 ! 
11459    read ADHMASK$
11461    data "0000110110111"
11465 ! 
11468    read ADLMASK$
11471    data "100000001001010100000"
11474 ! 
11477    read MAT ENT_SPEC$
11480    data "00,58,NZ 8,E","00,67,NZ 8,"
11483 ! 
11486    read MAT ENT_HELP$
11489    data "1127;Enter the quantity to be shipped.;"
11492    data "1127;Enter the quantity to be back-ordered.;"
11493 ! 
11494    for COLUMN_=1 to 4                 !Serial number specs !:
            let WORK=17*(COLUMN_-1)+6 !:
            for ROW_=1 to 14 !:
               let DUMMY=2*ROW_+28*(COLUMN_-1) !:
               let SER_SPEC$(DUMMY-1)=STR$(ROW_+3)&","&STR$(WORK)&",GU 9,UH" !:
               let SER_SPEC$(DUMMY)=STR$(ROW_+3)&","&STR$(WORK+10)&",GZ 6,UH" !:
            next ROW_ !:
         next COLUMN_
11495 ! 
11498 _Control_Data: ! ***** Read Control Data
11501    let FNREAD_CONTROL(98,"CONTROL/CND",MAT CONTROL$,MAT CONTROL) !:
         let QUANTITY_=CONTROL(4) !:
         let PRICE_=CONTROL(1) !:
         let WEIGHT_=CONTROL(2) !:
         let BQTY_=CONTROL(3) !:
         let MAX_PRICE = INT((2**31) / (10**PRICE_)) !:
         let MAX_EXT = INT(.01 * (2**31)) !:
         let INDUSTRY_CODE$=CONTROL$(34)
11504    let FNREAD_SUBSCRIPT(98,"SEQUENCE/CND")  !Field subscripts !:
         let COMPANIES=FNLAST_RECORD(98,"COMPANY/CND") !:
         let CURRENCIES=FNLAST_RECORD(98,"CURRENCY/CND") !:
         let PLANTS=FNLAST_RECORD(98,"WHOUSE/CND") !:
         let CUS_MASK$(2)(23:23) = STR$(CURRENCIES == 1) !:
         let CUS_MASK$(2)(22:22) = STR$(COMPANIES == 1) !:
         let SHIP_MASK$(2)(22:22) = STR$(PLANTS == 1)
11507    let VENMASK$(2)(23:23) = STR$(COMPANIES == 1) !:
         let VENMASK$(2)(24:24) = STR$(CURRENCIES == 1) !:
         let INV_MASK$(2)(30:30)=STR$(PLANTS==1) !:
         let PLANTFORM$=CFORM$("Form V 30,Pos 338,7*B 1")
11510 ! 
11513    if PLANTS > 1 then 
11515       let _PLANTNO=1 !:
            let _WSID=VAL(WSID$) !:
            if EXISTS("cnd\myplant") then !:
               open #(MYPLANT:=FNNEXT_CHANNEL(0,127)): "name=cnd\myplant,shr",display,input  !:
               linput #MYPLANT: _PLANTNO$ !:
               let _PLANTNO=VAL(_PLANTNO$) !:
               close #MYPLANT: 
11517 ! 
11519       open #(PLANT:= 79): "Name=WHOUSE/CND, Shr",internal,input,relative 
11521       if PLANTS > 1 then 
11523          mat FRT_ACCT(PLANTS)=(0) !:
               read #PLANT,using "form POS 338,7*B 1,bh 4",rec=_PLANTNO: MAT PLANT,DUMMY norec 11527 !:
               let CONTROL(40)=PLANT(2) !:
               let FRT_ACCT(_PLANTNO)=DUMMY !:
               let CONTROL(37)=PLANT(1)
11525       end if 
11527       close #PLANT: 
11531    end if 
11534 ! 
11537 ! ***** Compile Forms
11540    for _=1 to UDIM(FORM$) !:
            let FORM$(_)=CFORM$(FORM$(_)) !:
         next _
11543 ! 
11546 _Constants: ! ***** Define Global Constants
11549    let TRUE= ON= 1 !:
         let FALSE= OFF= 0 !:
         let NULL$= "" !:
         let NORMAL$= HEX$("E0") !:
         let HILITE$= HEX$("E4") !:
         let UNDERLINE$= HEX$("E1") !:
         let BLINK$= HEX$("E6") !:
         let REVERSE$= HEX$("E8") !:
         let ULHL$= HEX$("E5")
11551    if GUI_MODE then !:
            let NORMAL$=HILITE$=UNDERLINE$=BLINK$=REVERSE$=" " !:
            let ULHL$=_C$
11552    let DUMMY=DAYS(010180,"*mm/dd/yy") !:
         let DOS = FILE$(0)(1:3) == "CON" !:
         if DOS then !:
            let RETURN$="ENTER" !:
         else !:
            let RETURN$="RETURN"
11553    let USER_NAME$="Unknown"           !Assume unknown user !:
         if (DUMMY$:= LOGIN_NAME$)>NULL$ OR (DUMMY$:= ENV$("LOGNAME"))>NULL$ then !           User defined !:
            let USER_NAME$=DUMMY$(1:8)      !Save 8 characters
11555    let TIME_ADDED_X=-70*FNSECOND(VAL(SREP$(TIME$,1,":",""))) !:
         let VALID_TYPES$="178"
11556    let USER$=USER_NAME$ !:
         if USER$="root" OR (FNROOT_ALIKE(93,"CND\NAMES",USER$,MAT DUMMY$)) then !:
            let ADLMASK$(9:9)="0"
11557    let ADD_FUNCTION$=CHANGE_FUNCTION$="  Z     HF" !:
         if EXISTS("brc_scan") then !:
            let ADD_FUNCTION$(5:5)="n" !:
            let CHANGE_FUNCTION$(5:5)="o"
11558    let COATING=(CONTROL$(34)=="C" AND (EXISTS("BOML/MAD")>0)) !:
         if CONTROL$(12)="Y" then !:
            let ADLMASK$(9:10)="11"         !Cost/price
11559    if CONTROL$(46)<>"Y" then !                               Mask that accum !:
            let SHIPL_MASK$(2)(5:5)="1"
11561 ! 
11565    let FNOPEN_KEYEDB(315,"KANBAN","OED") !:
         do WHILE FNREAD_FILE(KANBAN,FORM$(KANBAN_),NULL$,0,MAT KANBAN$,MAT KANBAN,0)
11570       if (KB_SUB+=1)>UDIM(KB_LINE$) then !:
               mat KB_LINE$(UDIM(KB_LINE$)+100)
11575       let KB_LINE$(KB_SUB) = KANBAN$(2)&KANBAN$(3)&" "&KANBAN$(4)&KANBAN$(5)&"  "&CNVRT$("ZD 7",KANBAN(8))&CNVRT$("N 8",KANBAN(7))&" "&KANBAN$(1)&KANBAN$(7)&KANBAN$(8) !:
            if KANBAN$(11)>NULL$ then !:
               let KB_LINE$(KB_SUB)(40:46)=LPAD$(KANBAN$(11),7,"0")
11580    loop 
11585    mat KB_LINE$(KB_SUB)
11600 ! 
11603    let FNOPEN_KEYEDB(-93,"CONTAIN","CND") !:
         mat CONTAIN_CODE$(LREC(CONTAIN)) !:
         mat CONT$(UDIM(CONTAIN_CODE$)) !:
         mat TARE(UDIM(CONTAIN_CODE$)) !:
         let _ELEMENT = 0 !:
         let FORM_$ = CFORM$("Form C 5,C 1,C 23,BH 2.1")
11606    do WHILE FNREAD_FILE(CONTAIN,FORM_$,NULL$,0,MAT CONTAIN$,MAT CONTAIN,0) !:
            let CONTAIN_CODE$(_ELEMENT+=1) = CONTAIN$(1) & "-"&CONTAIN$(2)&FNEITHER$(_C$,": ",GUI_MODE)&CONTAIN$(3)&FNEITHER$(_C$,"",GUI_MODE) !:
            let CONT$(_ELEMENT) = TRIM$(CONTAIN$(1) &CONTAIN$(2)) !:
            let TARE(_ELEMENT) = CONTAIN(1) !:
         loop 
11609    close #CONTAIN: !:
         mat CONTAIN_CODE$(MAX(1,_ELEMENT)) !:
         mat CONT$(UDIM(CONTAIN_CODE$)) !:
         mat TARE(UDIM(CONTAIN_CODE$))
11612 ! 
11615    let FNOPEN_KEYEDB(-93,"UOM","CND") !:
         mat UOM_CODE$(LREC(UOM)) !:
         mat UM$(UDIM(UOM_CODE$)) !:
         let _ELEMENT = 0 !:
         let FORM_$ = CFORM$("Form C 2,C 9,C 2,BH 4.4")
11618    do WHILE FNREAD_FILE(UOM,FORM_$,NULL$,0,MAT UOM$,MAT UOM,0) !:
            let UOM_CODE$(_ELEMENT+=1) = UOM$(1)&FNEITHER$(_C$,": ",GUI_MODE)&UOM$(2)&FNEITHER$(_C$,"",GUI_MODE) !:
            let UM$(_ELEMENT) = UOM$(1) !:
         loop 
11621    if SRCH(UM$,"RC") < 1 then !:
            mat UOM_CODE$(_ELEMENT+=1) !:
            mat UM$(_ELEMENT) !:
            let UOM_CODE$(_ELEMENT) = "RC: RETURNABL" !:
            let UM$(_ELEMENT)="RC"
11624    close #UOM: !:
         mat UOM_CODE$(MAX(1,_ELEMENT)) !:
         mat UM$(UDIM(UOM_CODE$)) !:
         let DEFAULT_UOM$ = "PC" !:
         if SRCH(UM$,"PC") < 1 then !:
            let DEFAULT_UOM$ = UM$(1)
11627 ! 
11630    let FNOPEN_KEYEDB(-93,"COMMOD","CND") !:
         mat COMMOD_CODE$(LREC(COMMOD)) !:
         mat COMMODITY$(UDIM(COMMOD_CODE$)) !:
         let _ELEMENT = 0 !:
         let FORM_$ = CFORM$("Form C 4,C 34,C 4,BH 2")
11633    do WHILE FNREAD_FILE(COMMOD,FORM_$,NULL$,0,MAT COMMOD$,MAT COMMOD,0) !:
            let COMMOD_CODE$(_ELEMENT+=1) = COMMOD$(1)&FNEITHER$(_C$,": ",GUI_MODE)&COMMOD$(2)&FNEITHER$(_C$,"",GUI_MODE) !:
            let COMMODITY$(_ELEMENT) = TRIM$(COMMOD$(1)) !:
         loop 
11636    close #COMMOD: !:
         mat COMMOD_CODE$(MAX(1,_ELEMENT)) !:
         mat COMMODITY$(UDIM(COMMOD_CODE$))
11639 ! 
11642    let FNOPEN_KEYEDB(-93,"DEPART","GLD") !:
         mat DEPART_CODE$(LREC(DEPART)) !:
         mat DEPARTMENT$(UDIM(DEPART_CODE$)) !:
         let _ELEMENT = 0 !:
         let FORM_$ = CFORM$("Form C 3,C 28,Pos 1,B 1")
11645    do WHILE FNREAD_FILE(DEPART,FORM_$,NULL$,0,MAT DEPART$,MAT DEPART,0) !:
            let DEPART_CODE$(_ELEMENT+=1) = DEPART$(1) &FNEITHER$(_C$,": ",GUI_MODE)&DEPART$(2)&FNEITHER$(_C$,"",GUI_MODE) !:
            let DEPARTMENT$(_ELEMENT) = DEPART$(1) !:
         loop 
11648    close #DEPART: !:
         mat DEPART_CODE$(MAX(1,_ELEMENT)) !:
         mat DEPARTMENT$(UDIM(DEPART_CODE$))
11651 ! 
11654    let FNOPEN_KEYEDB(-93,"SALESMAN","SAD") !:
         mat SALES_CODE$(LREC(SALESMAN)) !:
         mat SALESMAN$(UDIM(SALES_CODE$)) !:
         let _ELEMENT = 0
11657    do WHILE FNREAD_FILE(SALESMAN,FORM$(SALESMAN_),NULL$,0,MAT SALES$,MAT SALES,0)
11658       if GUI_MODE then !:
               let SALES_CODE$(_ELEMENT+=1) = RPAD$(SALES$(1)&_C$&SALES$(2),30)&_C$ !:
            else !:
               let SALES_CODE$(_ELEMENT+=1) = SALES$(1) &": " & SALES$(2)
11660       let SALESMAN$(_ELEMENT) = SALES$(1)
11661    loop 
11662    close #SALESMAN: !:
         mat SALES_CODE$(MAX(1,_ELEMENT)) !:
         mat SALESMAN$(UDIM(SALES_CODE$))
11663 ! 
11666    let FNOPEN_KEYEDB(-93,"BUYER","PUD") !:
         mat BUYER_CODE$(LREC(BUYER)) !:
         mat BUYERS$(UDIM(BUYER_CODE$)) !:
         let _ELEMENT = 0 !:
         let FORM_$ = CFORM$("Form C 3,C 26,BH 2")
11669    do WHILE FNREAD_FILE(BUYER,FORM_$,NULL$,0,MAT BUYER$,MAT BUYER,0) !:
            let BUYER_CODE$(_ELEMENT+=1) = BUYER$(1) &": " & BUYER$(2) !:
            let BUYERS$(_ELEMENT) = TRIM$(BUYER$(1)) !:
         loop 
11672    close #BUYER: !:
         mat BUYER_CODE$(MAX(1,_ELEMENT)) !:
         mat BUYERS$(UDIM(BUYER_CODE$))
11674    let FNREAD_DISPLAY(93,"CLAUSE.LST/COD",MAT CLAUSE_LST$,100) !:
         mat CLAUSE_SRCH$(UDIM(CLAUSE_LST$))=CLAUSE_LST$ !:
         let FNMAT_SUBSTRING(MAT CLAUSE_SRCH$,1,4)
11675 ! 
11676    let RESTRICT_PLANTS=(TRUE)         !Default to restrict the plants !:
         if (NOT EXISTS("OAD\ALLPLANT")) OR (FNROOT_ALIKE(96,"OAD\ALLPLANT",USER$,MAT WORK$)) then ! If file doesn't exist or you're in the allplant file !:
            let RESTRICT_PLANTS=(FALSE)
11800 ! 
11802    if CURRENCIES > 1 then 
11804       open #(CURRENCY:=89): "Name= CURRENCY/CND, Shr",internal,input,relative 
11806       restore #CURRENCY,rec=2: norec 11814
11808       do WHILE FNREAD_FILE(CURRENCY,FORM$(CURRENCY_),NULL$,0,MAT CURRENCY$,MAT CURRENCY,0)
11810          let FNAPPEND(MAT FOREIGN_CURRENCY,CURRENCY(4))
11812       loop 
11814       close #CURRENCY: 
11816    end if 
11818 ! 
11900    return 
11910 ! 
11920 Ignore: continue 
12000 ! 
12100 Process_Detail: ! ***** Process Order Detail
12120    def FNPROCESS_DETAIL(_FUNCTION)
12130       let CONVERTED_ORDER=0 !:
            if TRIM$(SHIPPERH$(ORDER_SH))<>NULL$ AND FNREAD_FILE(ORDERH,FORM$(ORDERH_),SHIPPERH$(ORDER_SH),0,MAT ORH$,MAT ORH,ORDERH_) then !:
               let CONVERTED_ORDER=(ORH(TYPE_H)<=2)
12140       let FNMAKE_LL_PAS(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST$,MAT LIST,SHIPPERH(POINTER_SH),POINTER_SL) !:
            mat LIST$(MAX(1,UDIM(LIST$))) !:
            mat LIST(MAX(1,UDIM(LIST))) !:
            do 
12180          if _FUNCTION=4 OR _FUNCTION=5 then !:
                  let DUMMY=-5 !:
               else !:
                  let DUMMY=1
12200          let FNLIST_FM(WINDOW,SHIPPERL_,SHIPPERL,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST$,MAT LIST,SCREENS,"SHIPPERL",SHLROW,SHLCOLUMN,SHLROWS,SHLCOLUMNS,MAT SHLW$,MAT SHLSPEC$,MAT DUMBGS$,MAT DUMUS$,MAT SHLH$,MAT SHIPL_MASK$,MAT FUNCTIONS$,5,2,9,0,0,0,MAT LIST_WINDOW$,MAT LIST_SPEC$,MAT LISTH$,"Details for Shipper " & ORH$(ORDER_H),SREP$("\Part           \Rev \Customer Part            \   Accum\Quantity\Contain"&NORMAL$&"  ",1,"\",ULHL$),UDIM(LIST$),DUMMY,0,255,10,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
12220          let SHIPPERH(POINTER_SH)=FNREWRITE_LL(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST,POINTER_SL) !:
               if CMDKEY=9 OR _FUNCTION=4 OR _FUNCTION=5 then !:
                  let CMDKEY(6) !:
                  exit do 
12260          if CMDKEY=0 OR CMDKEY=10 then 
12270             if (NOT CONVERTED_ORDER) AND SHIPPERH$(CUSTOMER_SH)(1:2)<>"HA" then !   If shipperh$(customer_sh)(1:2)=="CH" then !  need library changes for asn transmit before non chrysler can use rc enhancements
12272                if FNRESET(BLANKETL2,RPAD$(SHIPPERH$(CUSTOMER_SH),8)&SHIPPERH$(DEST_SH)) AND NOT FNVERIFY_RC then ! On test if for blanket order !:
                        goto 12200
12274             end if 
12280             if _FUNCTION=1 then !:
                     let _FUNCTION$="      gORN"  !Add !:
                  else !:
                     let _FUNCTION$="      g RF"  !Change
12300             let FNSHOW_TOTAL(WINDEX,SHIPPER_TOTAL_,"SHIPPERT",_FUNCTION$,"Data Entry Completed.  Select a function for the Disposition of this Shipper.",MAT SHIPPERH$,MAT SHIPPERH,MAT LIST$,MAT LIST,TOTROW,TOTCOL,TOTROWS,TOTCOLS,MAT TOTW$,MAT TOTSPEC$,MAT TOTBGS$,MAT WORK$)
12320          end if 
12340       loop UNTIL (CMDKEY><9)
12360       if CMDKEY = 10 then !:
               let FNACCUM(SHIPPERH(POINTER_SH))
12380       let FNPROCESS_DETAIL=CMDKEY
12400 _End_Process_Detail: fnend 
12500 ! 
12600 Rewrite_Ll: ! ***** Update Linked List Pointers
12620    def FNREWRITE_LL(FILENO,SWITCH,&FORM$,MAT F$,MAT F,MAT L,VECTOR)
12640       mat L(UDIM(L)+1)                !Add last zero !:
            let FNREWRITE_LL=L(1) !:
            if L(1) then 
12700          for WORK=1 to UDIM(L)-1 !:
                  let FNREAD_FILE(FILENO,FORM$,NULL$,L(WORK),MAT F$,MAT F,0) !:
                  let F(VECTOR)=L(WORK+1)
12720             if SWITCH=SHIPPERL_ AND CONTROL$(7)="S" AND SHIPPERL(DATE_SHIPPED_SL)~=DAYS(SHIPPERH(SHIPMENT_DATE_SH)) then 
12740                if FNRESET(AUDIT,FNKEY$(AUDIT_,MAT F$,MAT F)) then 
12760                   do WHILE FNREAD_FILE(AUDIT,FORM$(AUDIT_),NULL$,0,MAT INVAUDIT$,MAT INVAUDIT,0) AND INVAUDIT$(2)=F$(PART_SL) AND INVAUDIT$(3)=F$(REV_SL) AND INVAUDIT(4)=SHIPPERL(DATE_SHIPPED_SL)
12780                      if INVAUDIT$(9)=F$(SHIPPER_SL) then !:
                              let INVAUDIT(4)=DAYS(SHIPPERH(SHIPMENT_DATE_SH)) !:
                              let FNREWRITE(AUDIT,FORM$(AUDIT_),NULL$,0,MAT INVAUDIT$,MAT INVAUDIT,0)
12800                   loop 
12820                end if 
12840                reread #AUDIT,release: error Ignore
12860             end if 
12880             if SWITCH=SHIPPERL_ then !:
                     let SHIPPERL(DATE_SHIPPED_SL)=DAYS(SHIPPERH(SHIPMENT_DATE_SH))
12890             let FNREWRITE(FILENO,FORM$,NULL$,L(WORK),MAT F$,MAT F,0)
12900          next WORK
12920       end if 
12930       mat L(UDIM(L)-1)
12940 _End_Rewrite_Ll: fnend 
13000 ! 
13010 Make_Committed: ! ***** Allocate Committed Quantities - Shipper Version
13020    def FNMAKE_COMMITTED(MAT F$,MAT F,MAT LOT_$,MAT LOT_,BACKOUT_SGN)
13030       let FNMAKE_COMMITTED=(FALSE)
13040       rem ! If Backout_Sgn = -1 Then We Are Backing Out Qtys                              ! If Backout_Sgn = +1 Then We Are Adding Qtys
13050       if CONTROL$(1)="Y" AND F(PLANT_SL) AND LEN(F$(PART_SL))>1 then !  Plant and a real part
13060          let INVTQTY_KEY$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&CNVRT$("BH 1",F(PLANT_SL))  !Key for invtqty file
13070          if NOT FNREAD_FILE(INVTQTY,FORM$(INVTQTY_),INVTQTY_KEY$,0,MAT QTY$,MAT QTY,INVTQTY_) then ! Does qty record exist ? !:
                  let QTY$(1)=STR$(F(COMPANY_SL))  !Company # !:
                  let QTY$(2)=F$(PART_SL)   !Part !:
                  let QTY$(3)=F$(REV_SL)    !Rev !:
                  mat QTY=(0)               !Clear qtys !:
                  let QTY(1)=F(PLANT_SL)    !Plant #            !:
                  let FNWRITE(INVTQTY,FORM$(INVTQTY_),MAT QTY$,MAT QTY,INVTQTY_)
13075          let FNCLEAR(_BLANKETL,MAT BLANKETL$,MAT BLANKETL) !:
               let FNREAD_FILE(-BLANKETL,FORM$(BLANKETL_),RPAD$(F$(ORDER_SL),8)&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9),0,MAT BLANKETL$,MAT BLANKETL,0)
13080          if POS("AB",BLANKETL$(CUM_TYPE_B)) AND F(ASN_SL) then ! Already updated
13090             if CONTROL$(11)="Y" AND BOML AND FNBOML_EXISTS(MAT F$,MAT F) AND (F(TYPE_SL)=1) then ! Backflush shipped items
13100                let FNMAKE_COMMITTED=(FNBACKFLUSH_SHIPPED_PARTS(MAT F$,MAT F,BACKOUT_SGN,(FALSE)) AND FNWRITE_AUDIT(MAT INVAUDIT$,MAT INVAUDIT,MAT F$,MAT F,BACKOUT_SGN,(TRUE)))
13110             else 
13120                let FNREAD_FILE(INVTQTY,FORM$(INVTQTY_),INVTQTY_KEY$,0,MAT QTY$,MAT QTY,INVTQTY_)  !Get our qty record
13130                let QTY(10+F(ITYPE_SL)+(F(ITYPE_SL)>0)) -= (F(SHIPPED_SL)*(BACKOUT_SGN)) !:
                     let QTY(18) += (F(SHIPPED_SL)*(BACKOUT_SGN))  !Shipped mtd !:
                     let QTY(20) += (F(SHIPPED_SL)*(BACKOUT_SGN))  !Shipped ytd !:
                     let QTY(28) = ROUND((QTY(10)+QTY(11)+QTY(13))*F(UNIT_COST_SL),2)  !Cost on hand
13140                let FNUPDATE_LOCATE_FILE(MAT F$,MAT F,BACKOUT_SGN)  !Update locate qty
13150                if FNREWRITE(INVTQTY,FORM$(INVTQTY_),NULL$,0,MAT QTY$,MAT QTY,INVTQTY_) then !                    Try to rewrite the qtys    !:
                        let FNMAKE_COMMITTED=FNWRITE_AUDIT(MAT INVAUDIT$,MAT INVAUDIT,MAT F$,MAT F,BACKOUT_SGN,(FALSE))
13160             end if 
13170          else !   Update committed qty's|onhand updated at invoice time
13180             if CONTROL$(7)="S" then ! Comit inventory now
13190                if CONTROL$(11)="Y" AND BOML AND (F(TYPE_SL)=1) then !                   Backflush shipped items
13200                   let FNMAKE_COMMITTED=FNBACKFLUSH_SHIPPED_PARTS(MAT F$,MAT F,BACKOUT_SGN,(TRUE))
13210                else 
13220                   let FNREAD_FILE(INVTQTY,FORM$(INVTQTY_),INVTQTY_KEY$,0,MAT QTY$,MAT QTY,INVTQTY_)  !Get our qty record
13230                   let QTY(14)+=(F(SHIPPED_SL)*(BACKOUT_SGN))  !We commit this !:
                        let FNREWRITE(INVTQTY,FORM$(INVTQTY_),NULL$,0,MAT QTY$,MAT QTY,INVTQTY_)
13240                end if 
13250             end if  !:
               end if  !:
            end if 
13260 _End_Make_Committed: fnend 
13270 ! 
13280 Add: ! ***** Add Function (Custom For Shippera)
13290    def FNADD(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,KEY_$*64,FUNCTION$*20,SWITCH,PRINTER,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
13300       let FNADD=FALSE                 !Assume cancel !:
            do  !:
               if KEY_$><"*" then !                               Special key
13310             let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                  let FNSPLIT_KEY(SWITCH,KEY_$,MAT F$,MAT F)
13320             do 
13330                let _KEY$=KEY_$        !Default !:
                     if LEN(_KEY$)<KLN(FILENO) AND KEY_$><"*" then !:
                        let _KEY$=FNPROMPT$(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,1,ADD_FUNCTION$,SWITCH,MAT MASK$,MAT WAIT)
13340                let WORK=FNRESET(FILENO,_KEY$) !:
                     if WORK AND _KEY$>NULL$ then !:
                        let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' already exists.")
13350             loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR (NOT WORK))
13360          end if 
13370          let DUMMY=(LEN(KEY_$)==KLN(FILENO)) !:
               if ((NOT DUMMY) AND CMDKEY><9) OR (DUMMY AND (NOT WORK)) OR KEY_$="*" then 
13380             let FNDEFAULT(SWITCH,MAT F$,MAT F)  !Set defaults
13390 ! 
13400 _Add_Loop: ! ***** Main Driver
13410             do  !:
                     let FNBLURB("Enter data for the record to be Added.") !:
                     let FNENTER(WINDOW,SWITCH,MAT SPEC$,MAT H$,MAT F$,MAT F,1,MASK$(2),FUNCTION$,MAT WAIT)
13420                if CMDKEY=1 then !:
                        let FNBLURB("Enter key data for record to be imported.") !:
                        let FNIMPORT(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,SWITCH,MAT WAIT) !:
                        goto _Add_Loop      !Continue do
13430                let FNADDENDA(SWITCH,1) !:
                  loop UNTIL ((NOT CMDKEY) OR CMDKEY>8)
13440             if CMDKEY><9 then 
13450                if AUDIT(SWITCH) then !:
                        let FNDETAIL(SWITCH,PRINTER,MAT F$,MAT F,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT) !:
                        print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' added. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
13460                let FNSAVE(SWITCH,MAT F$,MAT F)  !Save defaults !:
                     let FNWRITE(FILENO,FORM$,MAT F$,MAT F,SWITCH) !:
                     let SHIPPERL_REC=REC(FILENO) !:
                     let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' added.") !:
                     let FNADD=TRUE         !Success
13470             else 
13480                let FNBLURB(SREP$("Add of record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' cancelled.",1,"'' ",NULL$)) !:
                     if NOT (LEN(KEY_$)=KLN(FILENO) OR KEY_$="*") then !:
                        let CMDKEY(0)       !Continue do
13490             end if 
13505          end if 
13510       loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR KEY_$="*")
13515       let FNADDENDA(SWITCH,10.1)      !Final addenda
13520 _End_Add: fnend 
13525 ! 
13530 Distributor_Price: ! 
13535    def FNDISTRIBUTOR_PRICE(CUST_FL,CUST_FORM$*512,CUST_NO$,DEST$,MAT CUST$,MAT CUST,INVENT_FL,INVENT_FORM$*512,CO$,PART$,REV$,MAT INVENT$,MAT INVENT,PRICE_FL,PRICE_FORM$*512,MAT PRICE$,MAT PRICE,&PRICE,&COST)
13540       let FNDISTRIBUTOR_PRICE=PRICE_RECS_FOUND=FALSE
13545       if FNREAD_FILE(CUST_FL,CUST_FORM$,RPAD$(CUST_NO$,8)&"ST"&DEST$,0,MAT CUST$,MAT CUST,0) then 
13550          if FNREAD_FILE(INVENT_FL,INVENT_FORM$,CO$&RPAD$(PART$,15)&REV$,0,MAT INVENT$,MAT INVENT,0) then 
13555             if FNREAD_FILE(PRICE_FL,PRICE_FORM$,CNVRT$("zd 2",CUST(1))&INVENT$(16),0,MAT PRICE$,MAT PRICE,0) then 
13560                let COST=(INVENT(24)+INVENT(25)+INVENT(26)+INVENT(27)+INVENT(28))
13565                do 
13570                   on POS("ABC",PRICE$(3)) goto Distributor_Price_A,Distributor_Price_B,Distributor_Price_C none _End_Distributor_Price
13575 Distributor_Price_A: ! 
13580                   let PRICE=INVENT(31+PRICE(1))*PRICE(2)+INVENT(37)*PRICE(3) !:
                        exit do 
13585 Distributor_Price_B: ! 
13590                   let PRICE=INVENT(31+PRICE(1))*(1+PRICE(2))+INVENT(37)*(1+PRICE(3)) !:
                        exit do 
13595 Distributor_Price_C: ! 
13600                   let PRICE=COST*(1+PRICE(2))+COST*(1+PRICE(3)) !:
                        exit do 
13605                loop 
13610                let FNDISTRIBUTOR_PRICE=PRICE !:
                     let PRICE_RECS_FOUND=TRUE
13615             end if 
13620          end if 
13625       end if 
13630 _End_Distributor_Price: ! 
13635       if INDUSTRY_CODE$<>"D" AND NOT PRICE_RECS_FOUND then !:
               let FNMESSAGE(WINDEX,5,5,"Price Record for Cust: "&CUST_NO$&" Commodity Code: "&INVENT$(16)&" Not Found"," Warning ")
13640    fnend 
13700 ! 
13710 Find_In_Mat: ! ***** Find Occurence
13720    def FNFIND_IN_MAT(MAT F$,STRING$*255,MAT F,START)
13730       let FNFIND_IN_MAT=FALSE !:
            mat F(UDIM(F$))=(FALSE)
13740       for LOOP_=1 to UDIM(F$) !:
               if F$(LOOP_)(START:START+LEN(STRING$)-1)=STRING$ then !:
                  let F(LOOP_)=TRUE !:
                  let FNFIND_IN_MAT=LOOP_ !:
                  let LOOP_=UDIM(F$)+1
13750       next LOOP_
13760 _End_Find_In_Mat: fnend 
13800 ! 
13805 Change: ! ***** Change Function (Custom For Shippera)
13810    def FNCHANGE(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,KEY_$*64,FUNCTION$*20,SWITCH,PRINTER,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
13815       let FNCHANGE=FALSE              !Assume cancel !:
            do  !:
               if KEY_$><"*" then !                               Special key
13820             let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                  let FNSPLIT_KEY(SWITCH,KEY_$,MAT F$,MAT F) !:
                  do  !:
                     let _KEY$=KEY_$        !Default !:
                     if LEN(_KEY$)<KLN(FILENO) AND KEY_$><"*" then !:
                        let _KEY$=FNPROMPT$(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,3,CHANGE_FUNCTION$,SWITCH,MAT MASK$,MAT WAIT)
13825                let WORK=(FNREAD_FILE(FILENO,FORM$,_KEY$(1:64*(RTRM$(_KEY$)>NULL$)),0,MAT F$,MAT F,SWITCH))  !Boolean !:
                     if (NOT WORK) AND _KEY$>NULL$ then !:
                        let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' not on file.") !:
                     else !:
                        if (NOT WORK) then !:
                           let FNBLURB("End of file.")
13830                if WORK AND SWITCH=1 AND F(ASN_DATE_SH) AND CMDKEY<>9 then !:
                        let FNBLURB(NULL$) !:
                        let FNBLURB(BLINK$&"WARNING:"&NORMAL$&" An ASN has already been transmitted for this shipper.") !:
                        let SLEEP(3) !:
                        let FNBLURB(NULL$)
13835             loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR WORK)
13840          end if 
13845          let DUMMY=((LEN(KEY_$)==KLN(FILENO))) !:
               if ((NOT DUMMY) AND CMDKEY><9) OR (DUMMY AND WORK) OR KEY_$="*" then 
13850             if AUDIT(SWITCH) then !:
                     print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' selected for change. "&TIME$&" **",1,"'' ",NULL$),TAB(2) !:
                     let FNDETAIL(SWITCH,PRINTER,MAT F$,MAT F,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT)
13855 ! 
13860 _Change_Loop: ! ***** Main Driver
13865             do  !:
                     let FNBLURB("Edit data for the record to be changed.") !:
                     let FNENTER(WINDOW,SWITCH,MAT SPEC$,MAT H$,MAT F$,MAT F,1,MASK$(2),FUNCTION$,MAT WAIT) !:
                     if CMDKEY=1 then !:
                        let FNIMPORT(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,SWITCH,MAT WAIT) !:
                        goto _Change_Loop   !Continue do
13870                let FNADDENDA(SWITCH,3)
13875             loop UNTIL ((NOT CMDKEY) OR CMDKEY>8)
13880             if CMDKEY><9 then 
13885                if AUDIT(SWITCH) then !:
                        let FNDETAIL(SWITCH,PRINTER,MAT F$,MAT F,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT) !:
                        print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' changed. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
13890                let FNSAVE(SWITCH,MAT F$,MAT F)  !Save defaults !:
                     let FNREWRITE(FILENO,FORM$,NULL$,0,MAT F$,MAT F,SWITCH) !:
                     let FNBLURB(SREP$("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' changed.",1,"'' ",NULL$)) !:
                     let FNCHANGE=TRUE      !Success
13895             else 
13900                if AUDIT(SWITCH) then !:
                        print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' change cancelled. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
13905                let FNBLURB("Change of record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' cancelled.") !:
                     reread #FILENO,release: error 13910 !:
                     if NOT (LEN(KEY_$)=KLN(FILENO) OR KEY_$="*") then !:
                        let CMDKEY(0)       !Continue do
13910             end if 
13915          end if 
13920       loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR KEY_$="*")
13925       let FNADDENDA(SWITCH,10.3)      !Final addenda
13930 _End_Change: fnend 
14000 ! 
14005 Prompts: ! ***** Prompt For Key Information
14010    def FNPROMPT$*64(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,_FUNCTION,FUNCTION$*20,SWITCH,MAT MASK$,MAT WAIT)
14015       if DUMMY2=7 then !                               Print shipper
14020          let PROC=FNNEXT_CHANNEL(100,127) !:
               if FNOPEN_PROC(PROC,WSID) then 
14025             print #PROC: "Load cnp\lpattach" !:
                  print #PROC: "1500 editcode$='SILENT'" !:
                  print #PROC: "9090 stop" !:
                  print #PROC: "Run"
14030             print #PROC: "Run shipperp/oap Proc" !:
                  print #PROC: FIRST_SHIPPER$ !:
                  print #PROC: WSID$        !Caller's wsid !:
                  print #PROC: 1 !:
                  close #PROC: 
14035             if WBPLATFORM$="WINDOWS" then !:
                     execute SREP$("System -m -c ..\sys\br -__ Proc PROC__.$$$","__",STR$(WSID)) !:
                  else !:
                     execute SREP$("System nohup wb -__ 'Proc PROC__.$$$' >/dev/null 2>&1&","__",STR$(WSID))
14040          end if 
14045          let DUMMY2=0 !:
               let FIRST_SHIPPER$=NULL$
14050       end if 
14055       let CURFLD(1) !:
            mat HW$(UDIM(H$))=H$ !:
            if _FUNCTION=1 AND SWITCH=1 then !                               Patch !:
               let CURFLD(2) !:
               let F(TYPE_SH)=1
14060       if ENV$("TYPE9")="TRUE" then !:
               let F(TYPE_SH)=9
14065       if SWITCH=7 then !                               Customer add
14070          let F$(CUSTOMER_NO_U)=SHIPPERH$(CUSTOMER_SH)
14075       end if 
14080 ! 
14085 _Prompts_Loop: ! ***** Branch Point For Entry
14090       let MASK=1 !:
            if _FUNCTION=1 AND SWITCH=1 then !                               Same patch !:
               let MASK=3
14095       if _FUNCTION=7 then !:
               let MASK=1 !:
               print #WINDOW,fields "3,4,c 8" : "Order  " !:
               let HW$(1) = "1127;Enter the order number to be converted or Press F3.;"
14100       do  !:
               do  !:
                  let FNFUNCTION(FUNCTION$) !:
                  let FNINPUT(WINDOW,SWITCH,MAT SPEC$,MAT HW$,MAT F$,MAT F,MASK$(MASK),MAT WAIT) !:
                  let CURFLD(CURFLD) !:
               loop UNTIL ((NOT CMDKEY) OR FNCMDKEY(FUNCTION$,CMDKEY))
14105          if CMDKEY=9 then !:
                  exit do 
14110          let DUMMY=FNFIELD_COUNT(MASK$(MASK),UDIM(SPEC$))
14115          if (NOT CMDKEY) AND DUMMY>1 then !:
                  let CURFLD(CURFLD,FKEY+(104*(NOT FKEY))) !:
                  goto _Prompts_Loop        !Continue do
14120          if CMDKEY=3 then !:
                  let CURFLD(CURFLD,104*FNZOOM(SWITCH,CURFLD)) !:
                  mat HW$(UDIM(H$))=H$ !:
                  on (CMDKEY < 10) goto _Prompts_Loop  !Continue loop
14125          if _FUNCTION=1 AND CMDKEY=5 then !:
                  let FNIMPORT_ADD !:
                  goto _Prompts_Loop        !Continue do
14130          if _FUNCTION=3 AND CMDKEY=5 then !:
                  let FNIMPORT_CHANGE !:
                  goto _Prompts_Loop        !Continue do
14135          if _FUNCTION=5 AND CMDKEY=5 then 
14140             let KEY$=FNSEARCH$(WINDOW,FILENO,FORM$,FNKEY$(SWITCH,MAT F$,MAT F),MAT SPEC$,MAT H$,MAT F$,MAT F,NULL$,SWITCH,"        HF",MAT WAIT) !:
                  if CMDKEY=9 then !:
                     let CURFLD(1) !:
                     goto _Prompts_Loop     !Continue do !:
                  else !:
                     exit do 
14145          end if 
14150          mat HW$(UDIM(H$))=H$ !:
               let WORK=FNEDIT_KEY(SWITCH,MAT F$,MAT F,MAT HW$,MASK$(MASK),KEY$,_FUNCTION)
14155          let DUMMY=FNFIELD_COUNT(MASK$(MASK),UDIM(SPEC$)) !:
            loop UNTIL (WORK AND ((CMDKEY=10) OR ((NOT CMDKEY) AND DUMMY=1)))
14160       mat HW$(1) !:
            if CMDKEY><9 then 
14165          if SWITCH = 3 then !:
                  let FNPROMPT$ = _ORDER$ !:
               else !:
                  let FNPROMPT$=FNKEY$(SWITCH,MAT F$,MAT F)
14170       else 
14175          let FNSPLIT_KEY(SWITCH,NULL$,MAT F$,MAT F)
14180       end if 
14185       print #WINDOW,fields "3,4,c 8" : "Shipper"
14190 _End_Prompts: fnend 
14200 ! 
14202 Read_Num: ! ***** Read A Numeric Field
14204    def FNREAD_NUM(FILENO,KEY$*64,RECORD,&FORM$,&FIELD)
14206       rem FILENO:  Active WB file number                                                  KEY$:    Optional key for record to be read                                     RECORD:  Optional record number to be read                                      &FORM$:  File record form statement                                             &FIELD:  Numeric field to be defined by read
14208       let FNREAD_NUM=FALSE            !Assume error
14210       if KEY$>NULL$ then !  Key specified !:
               restore #FILENO,search=KEY$: nokey _End_Read_Num !:
            else !:
               if (RECORD) then !:
                  restore #FILENO,rec=RECORD: norec _End_Read_Num
14212       read #FILENO,using FORM$,release: FIELD error _End_Read_Num !:
            let FNREAD_NUM=TRUE             !Success
14214 _End_Read_Num: fnend                  !C91 mwr
14500 ! 
14510 Write_Audit: ! ***** Write Audit Trail Record
14520    def FNWRITE_AUDIT(MAT F$,MAT F,MAT SL$,MAT SL,BACKOUT_SGN,LOT_ONLY)
14530       let FNWRITE_AUDIT=0 !:
            mat F$=(NULL$) !:
            mat F=(0)
14535       let F$(1) = STR$(SL(COMPANY_SL))  !Company # !:
            mat F$(2:3) = SL$(PART_SL:REV_SL)  !Part & rev !:
            let F$(5) = "O"                 !Onhand type !:
            let F$(9) = SL$(SHIPPER_SL)     !Shipper # in internal doc #
14540       let F$(10) = SL$(DEST_SL)       !Dest # in external doc # !:
            let F(1) = SL(PLANT_SL)         !Plant # !:
            let F(2) = 7 - 4 * (SL(TYPE_SL)==1) + 5 * (SL(TYPE_SL)==7)+6*(SL(TYPE_SL)==8)  !Transaction type !:
            if (DUMMY:=SL(ITYPE_SL)) then !                        If itype=1 then quar !:
               let F$(5)="QV"(DUMMY:DUMMY)  !If itype=2 then quar w/value
14560       let F$(4) = SL$(POLINE_SL)      !Bin # !:
            let F(3) = VAL(WSID$)           !Wsid !:
            let F(4) = DAYS(SL(DATE_SHIPPED_SL))  !Date of shipper !:
            let F(5) = DAYS(DATE)           !Todays date !:
            let F(6) = VAL(TIME$(1:2))+VAL(TIME$(4:5))/60  !Todays time !:
            let F(7) = -(SL(SHIPPED_SL)*(BACKOUT_SGN))  !Qty !:
            let FNPERIOD(SL(COMPANY_SL),SL(DATE_SHIPPED_SL),F(14),F(15))
14565       if FNREAD_FILE(-INVENT,FORM$(INVENT_),F$(1)&RPAD$(F$(2),15)&RPAD$(F$(3),4),0,MAT INVENT$,MAT INVENT,INVENT_) then !               Costs !:
               mat F(8:13)=INVENT(17:22)
14570       if SUM(LOT_) then !                We have lots
14580          for _ = 1 to UDIM(LOT_)
14585             if (LOT_(_)*(BACKOUT_SGN)) then !   We have a qty
14590                let F(7)=-(LOT_(_)*(BACKOUT_SGN))  !Lot qty !:
                     let F$(7)=LOT_$(_)     !Lot number !:
                     let F$(8)=""           !Clear heat number !:
                     let FNUPDATE_LOT_QTY(MAT F$,MAT F,MAT SL$,MAT SL,BACKOUT_SGN) !:
                     if NOT (LOT_ONLY) then ! Create audit recs !:
                        let FNWRITE_AUDIT=FNWRITE(AUDIT,FORM$(AUDIT_),MAT F$,MAT F,0)
14595             end if 
14600          next _
14605          if NOT (LOT_ONLY) AND (SUM(LOT_)<>SL(SHIPPED_SL)) then ! If lots&qty dont match !:
                  let F(7)=(SUM(LOT_)-SL(SHIPPED_SL))*(BACKOUT_SGN) !:
                  let F$(7)=F$(8)="" !:
                  let FNWRITE_AUDIT=FNWRITE(AUDIT,FORM$(AUDIT_),MAT F$,MAT F,0)
14610       else 
14620          if NOT (LOT_ONLY) AND F(7) then ! No lots !:
                  let FNWRITE_AUDIT=FNWRITE(AUDIT,FORM$(AUDIT_),MAT F$,MAT F,0)
14630       end if 
14650 End_Write_Audit: fnend 
14700 ! 
14710 Copy_Subs: ! ***** Copy String Sub-Array Where Data Exists By Gsb
14720    def FNCOPY_SUBS(MAT FROM$,START,STOP,MAT TO$,START_TO;LOOP)
14740       let FNCOPY_SUBS=(FALSE)         !Assume nothing done !:
            for LOOP=START to STOP          !For array elements specified !:
               if FROM$(LOOP)>NULL$ then !  Element defined !:
                  let TO$(START_TO+(LOOP-START))=FROM$(LOOP)  !Copy data !:
                  let FNCOPY_SUBS=(TRUE)    !Some data copied
14760       next LOOP
14780 _End_Copy_Subs: fnend 
14800 ! 
14810 Copy_Sub: ! ***** Copy Numeric Sub-Array Where Data Exists By Gsb
14820    def FNCOPY_SUB(MAT FROM,START,STOP,MAT TO,START_TO;LOOP)
14840       let FNCOPY_SUB=(FALSE)          !Assume nothing done !:
            for LOOP=START to STOP          !For array elements specified !:
               if (FROM(LOOP)) then !  Element defined !:
                  let TO(START_TO+(LOOP-START))=FROM(LOOP)  !Copy data !:
                  let FNCOPY_SUB=(TRUE)     !Some data copied
14860       next LOOP
14880 _End_Copy_Sub: fnend 
14900 ! 
14910 Period: ! ***** Computes Year And Period For Date Shipped
14920    def FNPERIOD(_COMPANY,_SDATE,&_FYEAR,&_FPERIOD)
14930       let _FYEAR = DATE(DAYS(_SDATE),"y") !:
            let _FPERIOD = DATE(DAYS(_SDATE),"m")  !Defaults !:
            if FNREAD_FILE(-COMPANY,FORM$(COMPANY_),NULL$,_COMPANY,MAT COMPANY$,MAT COMPANY,0) then 
14950          let _FYEAR = COMPANY(3) !:
               let _FPERIOD -= (COMPANY(2) - 1) !:
               if _FPERIOD < 1 then !:
                  let _FPERIOD+=12
14960          if COMPANY(3) = DATE("y") AND COMPANY(2) > 1 AND DATE("m") >= COMPANY(2) then !:
                  let _FYEAR += 1
14970       end if 
14980 _End_Period: fnend 
15000 ! 
15100 Extension: ! ***** Calculate Price
15120    def FNEXTENSION(MAT F)=MAX(-999999.99,MIN(9999999.99,ROUND(F(SHIPPED_SL)*F(UNIT_PRICE_SL),2)))
15200 ! 
15300 Accum: ! ***** Recomputes Accum Amounts
15320    def FNACCUM(_POINTER)
15340       mat ALIST$(1)=(NULL$) !:
            mat ALIST(1)=(0) !:
            let SHIPPERL(POINTER_SL) = _POINTER !:
            do WHILE SHIPPERL(POINTER_SL) AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,SHIPPERL(POINTER_SL),MAT SHIPPERL$,MAT SHIPPERL,0)
15360          if LEN(SHIPPERL$(PART_SL)) > 1 AND NOT SHIPPERL(ASN_SL) then 
15380             let WORK$=FNKEY$(BLANKETL_+.1,MAT SHIPPERL$,MAT SHIPPERL) !:
                  if FNRESET(BLANKETL2,WORK$) then 
15400                do WHILE FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),NULL$,0,MAT BLANKETL$,MAT BLANKETL,0) AND (WORK$==(DUMMY$:=(FNKEY$(BLANKETL_,MAT BLANKETL$,MAT BLANKETL)&RPAD$(BLANKETL$(PART_B),15)&RPAD$(BLANKETL$(REV_B),4))(1:36)))
15420                   if BLANKETL(MODEL_YEAR_B)=VAL(SHIPPERL$(MODEL_YEAR_SL)) AND (BLANKETL$(CUSTPO_B)=RTRM$(SHIPPERL$(CUSTPO_SL)) OR CONVERTED_ORDER) then 
15440                      if (DUMMY := SRCH(ALIST$,RPAD$(SHIPPERL$(PART_SL),15)&RPAD$(SHIPPERL$(REV_SL),4)&RPAD$(SHIPPERL$(MODEL_YEAR_SL),1))) > 0 then !:
                              let _QTY_SHIPPED = ALIST(DUMMY) + SHIPPERL(SHIPPED_SL) !:
                           else !:
                              let _QTY_SHIPPED = SHIPPERL(SHIPPED_SL)
15460                      let FNTOTAL_MATS(MAT ALIST$,MAT ALIST,RPAD$(SHIPPERL$(PART_SL),15)&RPAD$(SHIPPERL$(REV_SL),4)&RPAD$(SHIPPERL$(MODEL_YEAR_SL),1),SHIPPERL(SHIPPED_SL))
15480                      if BLANKETL$(CUM_TYPE_B) < "C" then !:
                              let SHIPPERL(CUM_SL) = BLANKETL(8) + _QTY_SHIPPED * (BLANKETL$(CUM_TYPE_B) == "A") - BLANKETL(SHIPPED_TODAY_B) * (BLANKETL$(CUM_TYPE_B) == "B")*(BLANKETL(DATE_LAST_SHIP_B)==DAYS(SHIPPERL(DATE_SHIPPED_SL)))
15500                      let FNREWRITE(SHIPPERL,FORM$(SHIPPERL_),FNKEY$(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL),0,MAT SHIPPERL$,MAT SHIPPERL,0) !:
                           exit do 
15520                   end if 
15540                loop 
15560             end if  !:
               end if 
15580       loop 
15600       reread #SHIPPERL,release: error Ignore
15620 _End_Accum: fnend 
15700 ! 
15702 Get_Schedules: ! ***** Get Schedule Number Or Edi Document Key
15704    def FNGET_SCHEDULE$*18(FILENO,BLANKET$*8,PART$*15,REV$*4,&DEFAULT$,FULL_EDI_DOC_NUM;WINDEX_TEMP)
15706       let FNGET_SCHEDULE$=DEFAULT$
15708       let WORK$=RPAD$(BLANKET$,8)&RPAD$(PART$,15)&RPAD$(REV$,4)
15710       if NOT FULL_EDI_DOC_NUM OR CONTROL$(92)=="N" then 
15712          if (FNREAD_FILE(FILENO,FORM$(SCHEDC_),WORK$,0,MAT SCHEDC2$,MAT SCHEDC2,0)) AND (DAYS(DATE)-SCHEDC2(1))<=10 then !                                      Record found !:
                  let FNGET_SCHEDULE$=FNEITHER$("S-","",SHIPPERH$(COMMUN_SH)(1:2)=="HA")&SCHEDC2$(7)  !Return schedule number
15714       else 
15716          let FNRESET(SCHEDC,WORK$)
15718          mat SCH_PAS$(1)=("") !:
               mat SCH_REC(1)=(0) !:
               do WHILE FNREAD_FILE(-SCHEDC,FORM$(SCHEDC_),NULL$,0,MAT SCHEDC2$,MAT SCHEDC2,0) AND RPAD$(SCHEDC2$(1),8)&RPAD$(SCHEDC2$(2),15)&RPAD$(SCHEDC2$(3),4)==WORK$
15720             if SCHEDC2(3)<>0 then !:
                     let FNAPPENDS(MAT SCH_PAS$,CNVRT$("pic(##/##/##B)",DATE(SCHEDC2(1)))&CNVRT$("pic(####B)",SCHEDC2(2))&CNVRT$("n 8",SCHEDC2(3))&" "&RPAD$(SCHEDC2$(22),17)) !:
                     let FNAPPEND(MAT SCH_REC,REC(SCHEDC))
15722          loop 
15723          if TRIM$(SCH_PAS$(1))<>NULL$ then 
15724             mat PAS_SPEC$(1)=(NULL$) !:
                  let WINDEX_TEMP=WINDEX !:
                  let DUMMY=FNPAS(WINDEX_TEMP,MAT SCH_PAS$,MAT PAS_SPEC$,MAT BLANK$,SCH_CURRENT:=1,1,5,10,0,44,"Schedules","        H ","Date      Time      Qty",NULL$,MAT WAIT)
15726             if CMDKEY<>9 then 
15728                let DT$=SCH_PAS$(DUMMY)(1:2)&SCH_PAS$(DUMMY)(4:5)&SCH_PAS$(DUMMY)(7:8) !:
                     let TM$=SCH_PAS$(DUMMY)(10:14) !:
                     let QTY$=SCH_PAS$(DUMMY)(15:23)
15730                let SHIPPERL(GB_DATE_SL)=VAL(DT$) !:
                     let SHIPPERL(GB_TIME_SL)=VAL(TM$) !:
                     let SHIPPERL(SHIPPED_SL)=VAL(QTY$) !:
                     let SHIPPERL(CONT1_QTY_SL)=CEIL(SHIPPERL(SHIPPED_SL)/MAX(SHIPPERL(STD_PACK_SL),1))
15732                let FNREAD_FILE(-SCHEDC,FORM$(SCHEDC_),NULL$,SCH_REC(DUMMY),MAT SCHEDC2$,MAT SCHEDC2,0)
15734                let SHIPPERL$(EDI_SOURCE_SL)=SCHEDC2$(EDI_SOURCE_S) !:
                     let SHIPPERL(EDI_LIN_NUM_SL)=SCHEDC2(EDI_LIN_NUM_S) !:
                     let SHIPPERL$(CUSTPO_SL)=SCHEDC2$(CUST_PO_S) !:
                     let SHIPPERL$(POLINE_SL)=SCHEDC2$(PO_LINE_S) !:
                     let FNGET_SCHEDULE$=SCHEDC2$(EDI_DOC_S)
15736             end if 
15737          end if 
15738       end if 
15740 _End_Get_Schedules: fnend 
15800 ! 
15810 Address_Pull: ! Pull Address Data Conditionally From Order File
15820    if ORDERH$(B_NAME_H)>NULL$ then !:
            mat F$(B_NAME_SH:B_ZIP_SH)=ORDERH$(B_NAME_H:B_ZIP_H)
15830    if ORDERH$(S_NAME_H)>NULL$ then !:
            mat F$(S_NAME_SH:S_ZIP_SH)=ORDERH$(S_NAME_H:S_ZIP_H)
15840 _End_Address_Pull: return 
16000 ! 
16100 Show_Total: ! ***** Show Order Totals
16120    def FNSHOW_TOTAL(&WINDOW,SWITCH,SCREEN$,FUNCTION$,BLURB$*80,MAT F$,MAT F,MAT L$,MAT L,&A,&B,&C,&D,MAT A$,MAT B$,MAT C$,MAT D$)
16140       let FNRESTORE_WINDOW(SCREENS,SCREEN$,A,B,C,D,MAT A$,MAT B$,MAT C$,MAT D$) !:
            let FNPUSH_WINDOW(WINDOW,MAT A$,A,B,C,D,NULL$,NULL$,NULL$) !:
            let FNMAKE_TOTAL(SWITCH,MAT TOTAL,MAT L$) !:
            let FNBLURB(BLURB$) !:
            let FNDISPLAY(WINDOW,SWITCH,MAT B$,MAT F$,MAT F)
16150       let FNSHOW_TOTAL=FNSELECT(FUNCTION$) !:
            let FNPOP_WINDOW(WINDOW,1,OFF)
16260 _End_Show_Total: fnend 
16300 ! 
16305 Enter_Serials: ! ***** Enter Bar Code Serial Numbers
16310    def FNENTER_SERIALS(&WINDOW,FILENO,&FORM$,KEY$*64,MAT SPEC$,MAT F$,MAT F,FP_SWITCH,FUNCTION$*10)
16320       let FNENTER_SERIALS=FALSE       !Assume cancel !:
            let FNREAD_SERIALS(FILENO,FORM$,KEY$,MAT F$,MAT F) !:
            let FNMAKE_FRAME(MAT SERW$,18,78,NULL$,"Serial Numbers For Part " &SHIPPERL$(PART_SL)) !:
            let FNPUSH_WINDOW(WINDOW,MAT SERW$,2,2,18,78,NULL$,NULL$,NULL$)
16330       if LEN(MESSAGE$)>9 then !:
               let FNBLURB(MESSAGE$) !:
            else !:
               let FNBLURB("Enter the requested data and/or press the desired function key.")
16335       let _ADD_FUNCTION$="        HF" !:
            if UDIM(F$)=1 then !:
               mat F$(56)=(NULL$)
16345       let _PAGE=1 !:
            let CURRENT_=0 !:
            let CURFLD(1) !:
            mat WORK$(56)=(NULL$) !:
            mat WORK(56)=(0) !:
            mat WORK_H$(56)=(NULL$)
16350       mat SER_H$(MIN(112,(UDIM(F$)/56)*112))=("1127;** Enter a bar code serial number.;") !:
            for LOOP__ = 2 to UDIM(SER_H$) step 2 !:
               let SER_H$(LOOP__) = "1127;** Enter the quantity for this serial number (or -1 for pallet).;" !:
            next LOOP__
16355 _Enter_Serial_Loop: ! 
16360       do  !:
               print #WINDOW,fields FNFIELD_G$(18,68,10,NULL$): FNOF$(_PAGE,56,UDIM(F$)) !:
               mat WORK$(56)=F$((_PAGE-1)*56+1:_PAGE*56) !:
               mat WORK(56)=F((_PAGE-1)*56+1:_PAGE*56)
16375          let FNENTER(WINDOW,LABEL_,MAT SPEC$,MAT SER_H$,MAT WORK$,MAT WORK,CURRENT_,RPT$("0",56),_ADD_FUNCTION$,MAT WORK_W) !:
               mat F$((_PAGE-1)*56+1:_PAGE*56)=WORK$ !:
               mat F((_PAGE-1)*56+1:_PAGE*56)=WORK
16380          if (CMDKEY=8 OR CMDKEY=91) AND (WORK$(56)>NULL$ AND WORK(56) > 0 OR UDIM(F$)>_PAGE*56) then !:
                  let _PAGE +=1 !:
                  mat F$(MAX(UDIM(F$),_PAGE*56)) !:
                  mat F(MAX(UDIM(F),_PAGE*56)) !:
                  mat SER_H$(MAX(UDIM(SER_H$),_PAGE*112))
16390          if CMDKEY=7 OR CMDKEY=90 then !:
                  let _PAGE =MAX(1,_PAGE-1)
16395          if CMDKEY=10 then !:
                  let WORK=((CMDKEY==10) OR ((NOT CMDKEY) AND (CURRENT==1))) !:
                  let DUMMY=(WORK AND FNEDIT(17,MAT F$,MAT F,MAT SER_H$,MASK$))
16400       loop UNTIL CMDKEY=9 OR (CMDKEY>9 AND DUMMY)
16402       if CMDKEY=9 AND F(1) then !:
               let CLEAR_SERIAL$=FNLINE_INPUT$(WINDEX,15,6,1,"This will clear all serial numbers for this part.  Do you want to do this?","N",NULL$,NULL$,"Warning: ","        H ",MAT WAIT)
16405       if CMDKEY=10 OR CLEAR_SERIAL$<>"Y" then !:
               let FNWRITE_SERIALS(FILENO,FORM$,MAT F$,MAT F,LABEL_)
16410       let FNENTER_SERIALS=TRUE !:
            mat SER_H$(UDIM(H$))=H$         !Restore help !:
            let WORK=((CMDKEY==10) OR ((NOT CMDKEY) AND (CURRENT==1))) !:
            let FNPOP_WINDOW(WINDEX,1,0) !:
            let CMDKEY(9) !:
            mat F$(56)=(NULL$) !:
            mat F(56)=(0) !:
            let CMDKEY(0)
16435 _End_Enter_Serials: fnend 
16500 ! 
16600 Commission: ! ***** Computes Salesman Commission
16620    def FNCOMMISSION(MAT F$,MAT F)
16640       let F(COMM_AMT_SL)=0 !:
            if F(TYPE_SL)<7 AND F(SALESMAN_SL) AND FNREAD_FILE(SALESMAN,FORM$(SALESMAN_),CNVRT$("zd 3",F(SALESMAN_SL)),0,MAT SALES$,MAT SALES,0) then 
16660          if SALES(1)=1 then !   Percent gross !:
                  let F(COMM_AMT_SL)=ROUND(F(UNIT_PRICE_SL)*SALES(F(COMMISSION_SL)+1)*(.01),PRICE_)
16680          if SALES(1)=2 then !  Percent profit !:
                  let F(COMM_AMT_SL)=ROUND((F(UNIT_PRICE_SL)-F(UNIT_COST_SL))*SALES(1+F(COMMISSION_SL))*(.01),PRICE_)
16700          if SALES(1)=3 then !   Piece commission
16720             if FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),FNKEY$(BLANKETL_+.1,MAT F$,MAT F),0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) AND BLANKETL(COMMISSION_B) then 
16740                let F(COMM_AMT_SL)=BLANKETL(COMMISSION_B)
16760             else 
16780                let FNREAD_FIELD(INVENT,FNKEY$(INVENT_+.1,MAT F$,MAT F),0,DUMMY$:="Form Pos 267,BH 4."&STR$(PRICE_),F(COMM_AMT_SL))
16800             end if  !:
               end if  !:
            end if 
16820 _End_Commission: fnend 
16900 ! 
16905 Read_Serials: ! ***** Read Serial Numbers
16910    def FNREAD_SERIALS(FILENO,&FORM$,KEY$*64,MAT F$,MAT F;INDEX)
16915       let FNREAD_SERIALS=FALSE        !Assume none !:
            mat F$(56)=(NULL$) !:
            mat F(56)=(0) !:
            if FNRESET(FILENO,KEY$) then 
16920          let SER_MAT=1                !1 page !:
               do WHILE FNREAD_FILE(FILENO,FORM$,NULL$,0,MAT SER_$,MAT SER_,17) AND KEY$=FNKEY$(LABEL_+.1,MAT SER_$,MAT SER_)(1:LEN(KEY$))
16925             if INDEX > (UDIM(F$)-9) then !:
                     mat F$(56*(SER_MAT+=1)) !:
                     mat F(UDIM(F$))
16927             if SER_$(11)>NULL$ AND SRCH(F$,SER_$(11))<1 then !:
                     let F$(INDEX+=1)=SER_$(11) !:
                     let F(INDEX)= -1       !Pallet label
16930             for SUB1=3 to 10 !:
                     if SER_$(SUB1)>NULL$ then !:
                        let F$(INDEX+=1)=SER_$(SUB1) !:
                        let F(INDEX)= SER_(SUB1-2)
16932             next SUB1
16935             delete #FILENO: !:
               loop 
16940          let FNREAD_SERIALS=TRUE      !Success !:
            end if 
16945 _End_Read_Serials: fnend 
17000 ! 
17010 Upload_Data: ! ***** Upload The Flat File
17020    def FNUPLOAD_DATA
17065       do WHILE FNGET_BAR_FIELD(WORKFILE,8,FIELDCOUNT,ELEMENT,FIELD$)
17070          if FIELDCOUNT=1 AND UNHEX$(FIELD$(1:1))="10" then !:
                  let FIELD$=FIELD$(2:99) !:
                  let FNBREAK_SHIPPER(MAT _PART$,LINE_NO,FIELDCOUNT) !:
                  mat BARHEADER$=(NULL$)    !Clear !:
                  mat _PART$(100)=(NULL$) !:
                  let ELEMENT=FIELDCOUNT=1
17075          if (UDIM(_PART$) == LINE_NO +1) then !:
                  mat _PART$(UDIM(_PART$) + 25)
17080          if FIELDCOUNT<5 then !                  Header data !:
                  let BARHEADER$(ELEMENT)=FIELD$ !:
               else !:
                  let LINE_NO+=((ELEMENT==1) OR (ELEMENT==5))  !Counter  !:
                  let _PART$(LINE_NO)(99:0)=RPAD$(FIELD$,20)
17085       loop 
17100       if NOT FNRESET(SHIPPERH,RPAD$(BARHEADER$(1),8)) then !:
               let BARHEADER$(1)=FNCREATE_SHIPPER_HEADER$(BARHEADER$(1))
17125       let FNBREAK_SHIPPER(MAT _PART$,LINE_NO,FIELDCOUNT) !:
            if AIX then !:
               close #WORKFILE,free: !:
            else !:
               close #WORKFILE: 
17380 _End_Update_Load: fnend 
17400 ! 
17405 Get_Bar_Field: ! ***** Get A Single Field From Scanner File
17410    def FNGET_BAR_FIELD(FILENO,ELEMENTS,&FIELDCOUNT,&ELEMENT,&FIELD$)
17415       let FNGET_BAR_FIELD=FALSE       !Assume failure
17420       let FIELD$=BYTE$=NULL$          !Initialize
17425       do WHILE (BYTE$<>HEX$("0D"))
17430          read #FILENO,using "Form C 1": BYTE$ ioerr _End_Get_Bar_Field !:
               if NOT POS("02 0D",UNHEX$(BYTE$)) then !                  Skip soh and eoi !:
                  let FIELD$(999:0)=BYTE$
17435       loop 
17440       let FIELDCOUNT+=1 !:
            let ELEMENT=REM(FIELDCOUNT,ELEMENTS) !:
            let ELEMENT+=(ELEMENTS*(ELEMENT==0))
17445       let FNGET_BAR_FIELD=TRUE        !Success
17450 _End_Get_Bar_Field: fnend 
17600 ! 
17605 Break_Shipper: ! ***** Upload Control Break
17610    def FNBREAK_SHIPPER(MAT _PART$,&LINE_NO,FIELDCOUNT)
17615       let FNBREAK_SHIPPER=FALSE       !Assume no break !:
            if FIELDCOUNT>1 then 
17625          let FNDELETE_KEY(SHIPLOT,FNEXPAND$(BARHEADER$(1),8))
17630          mat _PART$(LINE_NO)          !Re-size !:
               mat BLOT$(1)=(NULL$)         !Clear lots !:
               mat BLOT(1)=(0) !:
               let RAN_ARRAY$(1)=(NULL$)    !Clear rans !:
               let PART_RAN$(1)=(NULL$)
17635          if FNRESET(SHIPPERH,RPAD$(BARHEADER$(1),8)) AND LINE_NO then !:
                  let FNVERIFY_SHIPPER(MAT _PART$)
17640          let LINE_NO=0                !Reset !:
               let FNBREAK_SHIPPER=TRUE     !Break
17645       end if 
17650 _End_Break_Shipper: fnend 
17800 ! 
17802 List_Fm: ! ***** Maintenance Driver ! Special Version For This Program
17804    def FNLIST_FM(&WINDOW,SWITCH,FILENO,&FORM$,MAT F$,MAT F,MAT L$,MAT L,SCREENFILE,SCREEN$*8,&_ROW,&_COLUMN,&_ROWS,&_COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$,MAT H$,MAT MASK$,MAT FUNCTIONS$,ROW,COLUMN,ROWS,COLUMNS,WIDTH,_WINDOW,MAT I$,MAT J$,MAT K$,TITLE$*64,HEADING$*80,CURRENT,IN,OUT,PRINTER,CLASS,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
17806       let FNLIST_FM=FALSE             !Assume error !:
            let COLUMNS=MAX(1,COLUMNS) !:
            let WIDTH=MAX(WIDTH,LEN(FNMAKE_LINE$(ABS(SWITCH),MAT F$,MAT F))) !:
            if NOT _WINDOW then !:
               let FNPAS_PRE(WINDOW,MAT I$,MAT J$,ROW,COLUMN,ROWS,COLUMNS,WIDTH,DUMMY,TITLE$,HEADING$,NULL$) !:
               let _WINDOW=WINDOW
17807       if L(1) AND IN then 
17808          if GUI_MODE then !:
                  let LEAVE_WIN=SHOW_ZOOM_ONLY=1 !:
                  let FORCE_ROWS=8 !:
                  let FNPAS(WGUI:=0,MAT L$,MAT J$,MAT K$,MAX(1,MIN(UDIM(L$),CURRENT:=UDIM(L$))),5,3,8,COLUMNS,80,TITLE$,_FUNCTION$,HEADING$,NULL$,MAT WAIT) !:
               else !:
                  let FNSHOW_LIST(_WINDOW,MAT L$,MAT J$,UDIM(L$),-ABS(ROW),-ABS(COLUMN),ROWS,COLUMNS,WIDTH,TITLE$,HEADING$,NULL$) !:
                  let LEAVE_WIN=SHOW_ZOOM_ONLY=FORCE_ROWS=0
17809       end if 
17811       if SCREEN$>NULL$ then !:
               let FNRESTORE_WINDOW(SCREENFILE,SCREEN$,_ROW,_COLUMN,_ROWS,_COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$) !:
               let FNPUSH_WINDOW(WINDOW,MAT A$,_ROW,_COLUMN,_ROWS,_COLUMNS,NULL$,NULL$,NULL$)
17812 ! 
17814 _List_Fm_Loop: ! ***** Main Driver
17816       do  !:
               do  !:
                  let MSG$(NULL$) !:
                  let _FUNCTION$=FUNCTIONS$(SWITCH,1) !:
                  if SCREEN$>NULL$ AND NOT GUI_MODE then !:
                     let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                     let FNDISPLAY(WINDOW,SWITCH,MAT B$,MAT F$,MAT F)
17818             if 64000/WIDTH<UDIM(L$) then !:
                     let _FUNCTION$(1:2)="  "
17820             if IN><ABS(IN) then !:
                     let _FUNCTION$=LPAD$(_FUNCTION$(9:10),10) !:
                     let _FUNCTION$(ABS(IN):ABS(IN))=FUNCTIONS$(SWITCH,1)(ABS(IN):ABS(IN))
17821             rem if _FUNCTION==3 AND CONVERTED_ORDER then !:                                        let IN=0 !:                                                                     let _FUNCTION$="  B D  SUM"
17822             if IN AND IN=ABS(IN) then 
17823                let CMDKEY(IN) !:
                     let IN=0
17824             else 
17825                if GUI_MODE AND NOT WGUI then !:
                        let WGUI=FNNEXT_CHANNEL(1,127) !:
                        open #WGUI: "srow=5,scol=3,erow=12,ecol=79,Border=S,Caption="&TITLE$,display,outin 
17827                let FNBLURB("Select a function.") !:
                     let FNERROR(NULL$) !:
                     if L(1) then 
17828                   let LEAVE_WIN=1 : let FORCE_ROWS=8 !:
                        let _W=FNEITHER(WGUI,_WINDOW,GUI_MODE) !:
                        let CURRENT=FNPAS(_W,MAT L$,MAT J$,MAT K$,MAX(1,MIN(UDIM(L$),CURRENT)),FNEITHER(1,-ABS(ROW),GUI_MODE),FNEITHER(1,-ABS(COLUMN),GUI_MODE),FNEITHER(8,-ROWS,GUI_MODE),COLUMNS,FNEITHER(80,WIDTH,GUI_MODE),NULL$,_FUNCTION$,HEADING$,NULL$,MAT WAIT) !:
                        let LEAVE_WIN=FORCE_ROWS=0
17829                else 
17830                   let _FUNCTION$(2:6)="     " !:
                        let _FUNCTION$(8:8)=" " !:
                        let _FUNCTION=FNSELECT(_FUNCTION$)
17831                end if 
17832                if IN><ABS(IN) AND NOT CMDKEY then !:
                        let CMDKEY(ABS(IN))
17834             end if 
17835             if CMDKEY<9 AND FNCMDKEY(_FUNCTION$,CMDKEY) then !:
                     on CMDKEY gosub _List_Fm_Add,_List_Fm_Insert,_List_Fm_Change,_List_Fm_Delete,_List_Fm_Inquire,_List_Fm_List,_List_Fm_Special,_List_Fm_Move !:
                     let CMDKEY(0)
17836          loop UNTIL (OUT OR CMDKEY>8)
17838          goto _Exit_List_Fm           !Exit do
17839 ! 
17840 _List_Fm_Add: ! ***** Invoke Add Function
17841          if GUI_MODE AND NOT WGUI then !:
                  let WGUI=FNNEXT_CHANNEL(1,127) !:
                  open #WGUI: "srow=5,scol=3,erow=12,ecol=79,Border=S,Caption="&TITLE$,display,outin 
17842          let WORK$=HILITE$&"Add Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               do  !:
                  let FNCLEAR(SWITCH,MAT F$,MAT F)
17843             if GUI_MODE AND TRIM$(L$(1))>NULL$ then !:
                     let LEAVE_WIN=SHOW_ZOOM_ONLY=1 : let FORCE_ROWS=8 !:
                     let FNPAS(WGUI,MAT L$,MAT J$,MAT K$,MAX(1,MIN(UDIM(L$),CURRENT)),1,1,8,COLUMNS,80,TITLE$,_FUNCTION$,HEADING$,NULL$,MAT WAIT) !:
                     let LEAVE_WIN=SHOW_ZOOM_ONLY=0
17844             if NOT GUI_MODE then !:
                     let FNSHOW_LIST(_WINDOW,MAT L$,MAT J$,UDIM(L$),-ABS(ROW),-ABS(COLUMN),ROWS,COLUMNS,WIDTH,TITLE$,HEADING$,NULL$)
17845             let FNADD(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,"*",FUNCTIONS$(SWITCH,2),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
                  if CMDKEY<>9 then 
17846                let FNAPPENDS(MAT L$,FNMAKE_LINE$(SWITCH,MAT F$,MAT F)) !:
                     let FNAPPEND(MAT L,SHIPPERL_REC)
17847                if (SURCHARGE_REC) then !:
                        let FNAPPENDS(MAT L$,FNMAKE_LINE$(SWITCH,MAT _SHIPPERL$,MAT _SHIPPERL)) !:
                        let FNAPPEND(MAT L,SURCHARGE_REC)
17848                let CURRENT=UDIM(L$)
17849             end if 
17850          loop UNTIL (CMDKEY=9 OR 64000/WIDTH<UDIM(L$))
17851          let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
17852 ! 
17853 _List_Fm_Insert: ! ***** Invoke Audit Toggle Function
17854          let WORK$=HILITE$&"Insert Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let _INSERT_FLAG=1 !:
               do 
17855             let FNCLEAR(SWITCH,MAT F$,MAT F)
17856             if GUI_MODE then !:
                     let FNFUNCTION(FUNCTION$) !:
                     let FNGUI_PAS(WGUI,TITLE$,HEADING$,1,2,8,80,MAT L$,CURRENT,1,1) !:
                  else !:
                     let FNSHOW_LIST(_WINDOW,MAT L$,MAT J$,UDIM(L$),-ABS(ROW),-ABS(COLUMN),ROWS,COLUMNS,WIDTH,TITLE$,HEADING$,NULL$)
17857             let FNADD(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,"*",FUNCTIONS$(SWITCH,2),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
17858             if CMDKEY><9 then 
17859                mat WORK(UDIM(L$)+1)=(1) !:
                     let WORK(CURRENT)=0 !:
                     let FNEXPAND_MATS(MAT L$,MAT WORK,NULL$) !:
                     let FNEXPAND_MAT(MAT L,MAT WORK,0) !:
                     let L$(CURRENT)=FNMAKE_LINE$(SWITCH,MAT F$,MAT F) !:
                     let L(CURRENT)=SHIPPERL_REC !:
                     let CURRENT+=1
17860                if SURCHARGE_REC then !:
                        mat WORK(UDIM(L$)+1)=(1) !:
                        let WORK(CURRENT)=0 !:
                        let FNEXPAND_MATS(MAT L$,MAT WORK,NULL$) !:
                        let FNEXPAND_MAT(MAT L,MAT WORK,0) !:
                        let L$(CURRENT)=FNMAKE_LINE$(SWITCH,MAT _SHIPPERL$,MAT _SHIPPERL) !:
                        let L(CURRENT)=SURCHARGE_REC !:
                        let CURRENT+=1
17861             end if 
17862          loop UNTIL (CMDKEY=9 OR 64000/WIDTH<UDIM(L$))
17864          let FNPOP_STRING$(_FM,MAT _FM$) !:
               let _INSERT_FLAG=0 !:
               return 
17866 ! 
17868 _List_Fm_Change: ! ***** Invoke Change Function
17870          let WORK$=HILITE$&"Change Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               if FNREAD_FILE(FILENO,FORM$,NULL$,L(CURRENT),MAT F$,MAT F,SWITCH) then 
17871             if FILENO=SHIPPERL then 
17872                let OLDPART$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
                     if CONVERTED_ORDER AND FNMATCH_ORDERL_TO_SHIPPERL(ORDERL2,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,ORDERL_REC) then !:
                        let SHIPPERL(CUM_SL)=ORDERL(SHIP_TO_DATE_L) !:
                        let SHIPPERL(BACK_SL)=ORDERL(BACK_L)
17873             end if 
17874          end if 
17876          let FNCHANGE(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,"*",FUNCTIONS$(SWITCH,3),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
17878          if CMDKEY><9 then !:
                  let L$(CURRENT)=FNMAKE_LINE$(SWITCH,MAT F$,MAT F)
17880          let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
17882 ! 
17884 _List_Fm_Inquire: ! ***** Invoke Inquire Function
17885          if _FUNCTION=5 AND GUI_MODE AND TRIM$(L$(1))>NULL$ then !:
                  let LEAVE_WIN=SHOW_ZOOM_ONLY=1 !:
                  let FNPAS(WGUI,MAT L$,MAT J$,MAT K$,MAX(1,MIN(UDIM(L$),CURRENT)),1,1,8,COLUMNS,80,TITLE$,_FUNCTION$,HEADING$,NULL$,MAT WAIT) !:
                  let LEAVE_WIN=SHOW_ZOOM_ONLY=0
17886          let WORK$=HILITE$&"Display Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNREAD_FILE(-FILENO,FORM$,NULL$,L(CURRENT),MAT F$,MAT F,SWITCH)
17887          if CONVERTED_ORDER AND FNMATCH_ORDERL_TO_SHIPPERL(ORDERL2,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,ORDERL_REC) then !:
                  let SHIPPERL(CUM_SL)=ORDERL(SHIP_TO_DATE_L) !:
                  let SHIPPERL(BACK_SL)=ORDERL(BACK_L)
17888          let FNINQUIRE(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,"*",FUNCTIONS$(SWITCH,5),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
17889 ! 
17890 _List_Fm_List: ! ***** List Records
17892          return 
17894 ! 
17896 _List_Fm_Delete: ! ***** Invoke Delete Function
17897          let WORK$=HILITE$&"Delete Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$)
17898          let FNREAD_FILE(FILENO,FORM$,NULL$,L(CURRENT),MAT F$,MAT F,SWITCH)
17899          if FNDELETE(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,"*",FUNCTIONS$(SWITCH,4),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) then 
17900             if UDIM(L$)=1 then 
17901                let SHIPPERH$(ORDER_SH)=NULL$ !:
                     mat L$=(NULL$) !:
                     mat L=(0) !:
                     let FNSHOW_LIST(_WINDOW,MAT L$,MAT J$,CURRENT,-ABS(ROW),-ABS(COLUMN),ROWS,COLUMNS,WIDTH,TITLE$,HEADING$,NULL$)
17902                if GUI_MODE then !:
                        print #WGUI,fields "1,1,c 80": RPT$(" ",80)
17903             else 
17904                mat DUMMY(UDIM(L$))=(1) !:
                     let DUMMY(CURRENT)=0 !:
                     let FNCOMPRESS_MATS(MAT L$,MAT DUMMY) !:
                     let FNCOMPRESS_MAT(MAT L,MAT DUMMY)
17905             end if 
17906          end if 
17907          let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
17910 ! 
17912 _List_Fm_Special: ! ***** Special Function
17914          let FNLIST_FM_SPECIAL(SWITCH) !:
               return 
17916 ! 
17918 _List_Fm_Move: ! ***** Move Entry Within List
17919          let WORK$=HILITE$&"Move Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNREAD_FILE(FILENO,FORM$,NULL$,L(CURRENT),MAT F$,MAT F,SWITCH) !:
               let FNDISPLAY(WINDOW,SWITCH,MAT B$,MAT F$,MAT F) !:
               let FNBLURB("Select line to move.          ")
17920          if GUI_MODE then !:
                  let FNFUNCTION(FUNCTIONS$(3,6)) !:
                  let FNGUI_PAS(WGUI,TITLE$,HEADING$,1,1,8,80,MAT L$,CURRENT,1,0) !:
                  let LEAVE_WIN=1 !:
               else !:
                  let FNDISPLAY(WINDOW,SWITCH,MAT B$,MAT F$,MAT F)
17922          let FNBLURB("Select new placement for line.") !:
               let _W=FNEITHER(WGUI,_WINDOW,GUI_MODE) !:
               let _NEW=FNPAS(_W,MAT L$,MAT J$,MAT K$,MAX(1,MIN(UDIM(L$),CURRENT)),FNEITHER(1,-ABS(ROW),GUI_MODE),FNEITHER(1,-ABS(COLUMN),GUI_MODE),FNEITHER(8,-ROWS,GUI_MODE),COLUMNS,FNEITHER(80,WIDTH,GUI_MODE),NULL$,_FUNCTION$,HEADING$,NULL$,MAT WAIT) !:
               if GUI_MODE then !:
                  let LEAVE_WIN=0
17923          let FNBLURB(NULL$) !:
               if CMDKEY><9 then 
17924             if CURRENT><_NEW then 
17926                let FNIOTA(UDIM(L$),MAT WORK) !:
                     if CURRENT<_NEW then !:
                        mat WORK(CURRENT:_NEW-1)=WORK(CURRENT+1:_NEW) !:
                     else !:
                        mat WORK(_NEW+1:CURRENT)=WORK(_NEW:CURRENT-1)
17928                let WORK(_NEW)=CURRENT !:
                     let FNRESEQUENCE(MAT L,MAT WORK) !:
                     let FNRESEQUENCES(MAT L$,MAT WORK) !:
                     let FNADDENDA(SWITCH,8) !:
                     let CURRENT=_NEW
17930             end if 
17932          end if 
17934          let FNADDENDA(SWITCH,10.8) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
17936 ! 
17938 _Exit_List_Fm: ! ***** Exit
17940       loop UNTIL (TRUE)
17942       if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1+(SCREEN$>NULL$),OFF)
17944       if _FM>0 then !:
               let MSG$(_FM$(_FM))
17945       if GUI_MODE AND WGUI then !:
               close #WGUI: !:
               let WGUI=0
17946 _End_List_Fm: fnend 
18000 ! 
18100 Increment: ! ***** Increment The Header Totals
18120    def FNINCREMENT(MAT LN$,MAT LN,MAT HD)
18140       let FNINCREMENT = 1             !Always succeeeds
18160       if LEN(LN$(PART_SL)) > 1 OR (LEN(LN$(PART_SL)) = 1 AND NOT POS("CFMNST",LN$(PART_SL))) then 
18170          let HD(GROSS_SH)+= LN(EXTENSION_SL) !:
               let HD(WEIGHT_SH)+= (LN(UNIT_WT_SL)*LN(SHIPPED_SL)) !:
               if TAXABLE$="Y" AND LN(TAXABLE_SL) then !:
                  let HD(TAX_SH)+= (ROUND(FNCALC_TAX(LN(EXTENSION_SL),HD(PERCENT1_SH),HD(PERCENT2_SH),HD(PERCENT3_SH)),2)) !:
                  let HD(TAXABLE_SALES_SH)+= (LN(EXTENSION_SL))
18175       end if 
18180       if LN$(PART_SL)="F" then !:
               let LN(EXTENSION_SL)=LN(UNIT_PRICE_SL) !:
               let HD(FREIGHT_SH)+= LN(EXTENSION_SL) !:
               let HD(TAX_SH)+= (ROUND(FNCALC_TAX(LN(EXTENSION_SL),HD(PERCENT1_SH),HD(PERCENT2_SH),HD(PERCENT3_SH),HD(FRT_TAXABLE_SH))*SGN(HD(FRT_TAXABLE_SH)),2)) !:
               let HD(TAXABLE_SALES_SH)+= (LN(EXTENSION_SL)*SGN(HD(FRT_TAXABLE_SH)))
18200       let HD(INVOICE_TOTAL_SH)=HD(GROSS_SH)+HD(FREIGHT_SH)+HD(TAX_SH)+HD(RETURNABLE_SH)
18220 _End_Increment: fnend 
18400 ! 
18405 Decrement: ! ***** Decrement The Header Totals, Orders
18410    def FNDECREMENT(MAT LN$,MAT LN,MAT HD)
18415       let FNDECREMENT = 1             !Always succeeeds
18420       if LEN(LN$(PART_L)) > 1 OR (LEN(LN$(PART_L)) = 1 AND NOT POS("CFMNST",LN$(PART_L))) then 
18425          let HD(GROSS_H)-= LN(EXTENSION_L) !:
               let HD(WEIGHT_H)-= (LN(UNIT_WT_L)*LN(SHIPPED_L)) !:
               if TAXABLE$="Y" AND LN(TAXABLE_SL) then !:
                  let HD(TAX_H)-= (ROUND(FNCALC_TAX(LN(EXTENSION_L),HD(PERCENT1_H),HD(PERCENT2_H),HD(PERCENT3_H)),2)) !:
                  let HD(TAXABLE_SALES_H)-= (LN(EXTENSION_L))
18430       end if 
18435       if LN$(PART_L)="F" then !:
               let LN(EXTENSION_L) = LN(UNIT_PRICE_L) !:
               let HD(FREIGHT_H)-= LN(EXTENSION_L) !:
               let HD(TAX_H)-= (ROUND(FNCALC_TAX(LN(EXTENSION_L),HD(PERCENT1_H),HD(PERCENT2_H),HD(PERCENT3_H),HD(FRT_TAXABLE_H))*SGN(HD(FRT_TAXABLE_H)),2)) !:
               let HD(TAXABLE_SALES_H)-= (LN(EXTENSION_L)*SGN(HD(FRT_TAXABLE_H)))
18440       let HD(INVOICE_TOTAL_H)=HD(GROSS_H)+HD(FREIGHT_H)+HD(TAX_H)+HD(RETURNABLE_H)
18445 _End_Decrement: fnend 
18800 ! 
18802 Update_Lot_Qty: ! ****** Audit File With Lot Numbers
18804    def FNUPDATE_LOT_QTY(&MAT F$,&MAT F,MAT SL$,MAT SL,BACKOUT_SGN)
18806       if FNRESET(LOTNO2,RPAD$(F$(7),15)) then !               Find a heat number
18808          do WHILE FNREAD_FILE(-LOTNO2,FORM$(LOTNO_),NULL$,0,MAT LOTNO$,MAT LOTNO,0) AND TRIM$(LOTNO$(3))=TRIM$(F$(7))
18810             if LOTNO$(4)>NULL$ then !                    If a heat number !:
                     let F$(8)=LOTNO$(4)    !Use it !:
                     exit do 
18812          loop 
18814       end if 
18816       if FNREAD_FILE(LOTNO,FORM$(LOTNO_),RPAD$(SL$(PART_SL),15)&RPAD$(SL$(REV_SL),4)&RPAD$(F$(7),15),0,MAT LOTNO$,MAT LOTNO,0) then 
18818          let LOTNO(1)+=F(7)           !Adjust qty !:
               let FNREWRITE(LOTNO,FORM$(LOTNO_),RPAD$(SL$(PART_SL),15)&RPAD$(SL$(REV_SL),4)&RPAD$(F$(7),15),0,MAT LOTNO$,MAT LOTNO,0)
18820       else 
18822          mat LOTNO$(1:2)=SL$(PART_SL:REV_SL)  !Part&rev !:
               let LOTNO$(3)=F$(7)          !Lot # !:
               let LOTNO$(4)=F$(8)          !Heat # !:
               let LOTNO(1)=F(7)            !Qty !:
               let LOTNO(2)=FNEITHER(F(5),F(4),F(4)==0)  !Shipper date !:
               let FNWRITE(LOTNO,FORM$(LOTNO_),MAT LOTNO$,MAT LOTNO,0)
18824       end if 
18826       if (BACKOUT_SGN=1) then ! Add in data
18830          mat LOTLOGH$(1:2)=SL$(PART_SL:REV_SL)  !Part & rev !:
               let LOTLOGH$(3)=F$(7)        !Lot number !:
               let LOTLOGH$(4)=LOTNO$(4)    !Heat number !:
               let LOTLOGH$(5)=SL$(SHIPPER_SL)  !Shipper !:
               let LOTLOGH(1)=5             !Transaction type !:
               let LOTLOGH(2)=SL(PLANT_SL)  !Plant number !:
               let LOTLOGH(3)=FNEITHER(F(5),F(4),F(4)==0)  !Date !:
               let LOTLOGH(4)=F(7)          !Quantity !:
               let FNWRITE(LOTLOGH,FORM$(LOTLOGH_),MAT LOTLOGH$,MAT LOTLOGH,0)
18834       else ! Back out the data
18836          let FNDELETE_KEY(LOTLOGH,RPAD$(SL$(PART_SL),15)&RPAD$(SL$(REV_SL),4)&RPAD$(F$(7),15)&CNVRT$("B 1",5)&RPAD$(SL$(SHIPPER_SL),8))
18838       end if 
18840 _End_Update_Lot_Qty: fnend 
18842 ! 
18880 Compare_Mats: ! ***** Compare Mats
18885    def FNCOMPARE_MATS(MAT P$,MAT Q$)
18890       let FNCOMPARE_MATS=(FALSE) !:
            if UDIM(P$)=UDIM(Q$) then !  Same size
18895          for _ = 1 to UDIM(P$)        !For each one !:
                  if TRIM$(P$(_))<>TRIM$(Q$(_)) then !  Do they match? !:
                     goto _End_Compare_Mats
18900          next _
18905          let FNCOMPARE_MATS=(TRUE)
18910       end if 
18915 _End_Compare_Mats: fnend 
18920 ! 
18925 Compare_Mat: ! ***** Compare Mat
18930    def FNCOMPARE_MAT(MAT P,MAT Q)
18935       let FNCOMPARE_MAT=(FALSE) !:
            if UDIM(P)=UDIM(Q) then !  Same size
18940          for _ = 1 to UDIM(P)         !For each one !:
                  if P(_)<>Q(_) then !  Do they match? !:
                     goto _End_Compare_Mat
18945          next _
18950          let FNCOMPARE_MAT=(TRUE)
18955       end if 
18960 _End_Compare_Mat: fnend 
19000 ! 
19005 Price_Break: ! ***** Returns Price Based Upon Quantity
19010    def FNPRICE_BREAK(MAT _PRICE,MAT _BREAK,_QTY,_CODE)
19020       on POS("DEC",CONTROL$(34))+1 goto Price_Break_Default,Price_Break_Dist,Price_Break_Elect,Price_Break_Coating none _End_Price_Break !:
            ! 
19025 Price_Break_Default: ! 
19030       let FNPRICE_BREAK = _PRICE = _PRICE(MAX(1,_CODE))  !Default !:
            let _CODE=MAX(1,_CODE) !:
            if UDIM(_PRICE) ~= UDIM(_BREAK) then !:
               goto _End_Price_Break
19035       do WHILE _CODE > 1 AND _PRICE(_CODE) = 0 !:
               let _CODE -= 1 !:
               let _PRICE = _PRICE(_CODE) !:
            loop 
19040       for _LOOP = _CODE to UDIM(_PRICE) - 1
19045          if _QTY < _BREAK(_LOOP+1) OR _PRICE(_LOOP+1) = 0 then !:
                  let FNPRICE_BREAK = _PRICE(_LOOP) !:
                  goto _End_Price_Break
19050       next _LOOP
19055       let FNPRICE_BREAK = _PRICE(UDIM(_PRICE)-1+(_PRICE(UDIM(_PRICE))>0))
19060       goto _End_Price_Break !:
            ! 
19065 Price_Break_Elect: ! 
19070       let FNPRICE_BREAK=_PRICE(1)*.01*(100-CUS(CLASS_CODE_U))
19075       goto _End_Price_Break !:
            ! 
19080 Price_Break_Dist: ! 
19085       let FNPRICE_BREAK= FNDISTRIBUTOR_PRICE(CUSTOMER,FORM$(CUSTOMER_),SHIPPERH$(4),SHIPPERH$(31),MAT CUS$,MAT CUS,INVENT,FORM$(INVENT_),STR$(SHIPPERH(21)),SHIPPERL$(4),SHIPPERL$(5),MAT INV$,MAT INV,PRICE,FORM$(_PRICE_),MAT PRICE$,MAT PRICE,F(UNIT_PRICE_SL),F(UNIT_COST_SL))
19090       goto _End_Price_Break !:
            ! 
19095 Price_Break_Coating: ! 
19100       let F(UNIT_PRICE_L)=_PRICE(PRICE1_I)+_PRICE(PRICE2_I)
19105       goto _End_Price_Break
19110 ! 
19115 _End_Price_Break: fnend 
19120 ! 
19125 Write_Serials: ! ***** Write Serial Numbers
19130    def FNWRITE_SERIALS(FILENO,&FORM$,MAT F$,MAT F,SWITCH;INDEX,SUB1)
19135       let FNWRITE_SERIALS=TRUE        !Assume success !:
            mat SER_$ = (NULL$) !:
            mat SER_ = (0) !:
            let FNXREF_FIELDS(SWITCH,MAT SER_$,MAT SER_) !:
            let SUB1=2
19145       for INDEX = 1 to UDIM(F$)
19150          if F$(INDEX) > NULL$ then 
19151             if F(INDEX) < 0 AND SUB1 >2 then !:
                     let FNWRITE(FILENO,FORM$,MAT SER_$,MAT SER_,0) !:
                     let SUB1 = 2 !:
                     mat SER_$(3:10) = (NULL$) !:
                     mat SER_(1:8) = (0)
19152             if F(INDEX) < 0 then ! Pallet serial !:
                     let SER_$(11) = F$(INDEX) !:
                     let SER_(11) = FNPALLET_TOTAL(MAT F,INDEX+1) !:
                  else !:
                     let SER_$(SUB1+=1) = F$(INDEX) !:
                     let SER_(SUB1-2) = F(INDEX)
19160          end if 
19165          if SUB1 = 10 then !:
                  let FNWRITE(FILENO,FORM$,MAT SER_$,MAT SER_,0) !:
                  let SUB1 = 2 !:
                  mat SER_$(3:10) = (NULL$) !:
                  mat SER_(1:8) = (0)
19170       next INDEX
19175       if SUB1 > 2 then !:
               let FNWRITE(FILENO,FORM$,MAT SER_$,MAT SER_,0)
19180 _End_Write_Serials: fnend 
19200 ! 
19205 Pallet_Total: ! ***** Calculate The Total Parts On Pallet Label
19210    def FNPALLET_TOTAL(MAT QTY,INDEX;WORK)
19215       do WHILE INDEX <= UDIM(QTY) AND QTY(INDEX) >= 0 !:
               let WORK += QTY(INDEX) !:
               let INDEX += 1 !:
            loop 
19220       let FNPALLET_TOTAL = WORK
19225 _End_Pallet_Total: fnend 
19400 ! 
19405 Update_Locate_File: ! ***** Update Locate File
19410    def FNUPDATE_LOCATE_FILE(MAT F$,MAT F,BACKOUT_SGN)
19415       let FNUPDATE_LOCATE_FILE=(TRUE)  !Always successful !:
            if FNREAD_FILE(LOCATE,FORM$(LOCATE_),INVTQTY_KEY$&"FINI    ",0,MAT LOCATE$,MAT LOCATE,0) then !  Staging record found
19420          let LOCATE(3+F(ITYPE_SL))-=(F(SHIPPED_SL)*(BACKOUT_SGN))  !Qty onhand/quar !:
               let FNREWRITE(LOCATE,FORM$(LOCATE_),NULL$,0,MAT LOCATE$,MAT LOCATE,0)
19425       else !                Create a staging record
19430          mat LOCATE$=(NULL$)          !Clear !:
               mat LOCATE=(0)               !Ditto !:
               let LOCATE$(1)=STR$(F(COMPANY_SL))  !Company !:
               let LOCATE$(2)=F$(PART_SL)   !Part !:
               let LOCATE$(3)=F$(REV_SL)    !Rev !:
               let LOCATE$(4)="FINI"        !Staging location !:
               let LOCATE$(7)="1"           !Priority level
19435          let LOCATE(1)=F(PLANT_SL)    !Plant # !:
               let LOCATE(2)=DAYS(F(DATE_SHIPPED_SL))  !Date !:
               let LOCATE(3+F(ITYPE_SL))=-(F(SHIPPED_SL)*(BACKOUT_SGN))  !Qty onhand/quarantined
19440          let FNWRITE(LOCATE,FORM$(LOCATE_),MAT LOCATE$,MAT LOCATE,0)  !Write new record
19445       end if 
19450 _End_Update_Locate_File: fnend 
19600 ! 
19605 Shhist_Inquiry: ! ****** Display Shipment History
19610    def FNSHHIST_INQUIRY(_CUSTOMER$*8,_DEST$*9,_PART$*15)
19615       let FNSHHIST_INQUIRY = FALSE !:
            let DUMMY$ = RPAD$(_CUSTOMER$,8)&RPAD$(_DEST$,9)&RPAD$(_PART$,15)&"zzzz" !:
            if FNRESET(IHISTL,DUMMY$(1:32)) AND (FNRESTORE(IHISTL,DUMMY$) OR FNRESTORE_LAST(IHISTL)) then 
19620          read #IHISTL,PRIOR:          !Bypass high record !:
               mat INQ_LIST$(1) = (NULL$) !:
               let FNBLURB("Now reading shipment history records. Please wait...")
19625          do WHILE FNREAD_PRIOR(IHISTL,FORM$(IHISTL_),MAT IHISTL$,MAT IHISTL,IHISTL_) AND (IHISTL$(CUSTOMER_SL) >= _CUSTOMER$) AND (IHISTL$(DEST_SL) >= DEST$) AND (IHISTL$(PART_SL) >= _PART$)
19630             let FNAPPENDS(MAT INQ_LIST$,FNMAKE_LINE$(IHISTL_,MAT IHISTL$,MAT IHISTL))
19635          loop UNTIL UDIM(INQ_LIST$)>=1071
19636          if INQ_LIST$(1) > NULL$ then !   At least 1 is found
19638             if GUI_MODE then 
19640                let CUR_FUNCTION$=FUNCTION$ !:
                     let FUNCTION$="        H "
19642                let CUR_LEAVE=LEAVE_WIN !:
                     let CUR_SHOW=SHOW_ZOOM_ONLY !:
                     let LEAVE_WIN=SHOW_ZOOM_ONLY=0 !:
                     let FNPAS((WIN_TEMP:=0),MAT INQ_LIST$,MAT J$,MAT K$,1,3,3,10,COLUMNS,80,"Shipment History: Part "&_PART$,FUNCTION$,SREP$(SREP$("Rev ^ Quantity^     Accum`^Invoice ^ShipDate^ Unit Price^",1,"^",ULHL$),1,"`",NORMAL$),NULL$,MAT WAIT) !:
                     let FNBLURB(NULL$)
19644                let LEAVE_WIN=CUR_LEAVE !:
                     let SHOW_ZOOM_ONLY=CUR_SHOW !:
                     let FUNCTION$=CUR_FUNCTION$ !:
                     let FNSHHIST_INQUIRY=TRUE
19646             end if 
19649             if NOT GUI_MODE then !:
                     let FNBLURB("Use Page-Up or Page-Down. F9 to End.") !:
                     mat PAS_SPEC$(1)=(NULL$) !:
                     let FNSHOW(WINDEX,MAT INQ_LIST$,MAT PAS_SPEC$,MAT BLANK$,1,2,3,0,1,56,"Shipment History, Part "&_PART$,"        H ",SREP$(SREP$("^Rev ^ Quantity^     Accum`^Invoice ^ShipDate^ Unit Price`",1,"^",ULHL$),1,"`",NORMAL$),NULL$,MAT WAIT) !:
                     let FNSHHIST_INQUIRY=TRUE
19650          end if 
19655          let FNBLURB("Enter Data")
19660       end if 
19665 _End_Shhist_Inquiry: fnend 
19800 ! 
19805 Valid_Time: ! ***** Validates A Time Format
19810    def FNVALID_TIME(_TIME)
19815       let FNVALID_TIME = 0 !:
            let DUMMY$ = CNVRT$("zd 4",_TIME) !:
            let HOUR = VAL(DUMMY$(1:2)) !:
            let MINUTE = VAL(DUMMY$(3:4)) !:
            if HOUR < 24 AND MINUTE < 60 then !:
               let FNVALID_TIME = 1
19820 _End_Valid_Time: fnend 
20000 ! 
20005 Import_Add: ! ***** Import Add
20010    def FNIMPORT_ADD
20015       mat SDIR$(1000)=(NULL$) !:
            mat SNAME$(1)=(NULL$)
20020       let FNDIR_MAT(98,"BRC","*",MAT SDIR$)  !List of headers
20025       mat SDIR(UDIM(SDIR$))=(0)
20030       for _ = 1 to UDIM(SDIR$)
20045          if NOT FNRESET(SHIPPERH,UPRC$(SDIR$(_)(1:8))) AND NOT FNRESET(INVOICEH,UPRC$(SDIR$(_)(1:8))) then !:
                  let FNAPPENDS(MAT SNAME$,UPRC$(SDIR$(_)(1:8)))
20050       next _
20055       mat SDIR$(UDIM(SNAME$))=SNAME$ !:
            mat DUMMY(UDIM(SDIR$))=AIDX(SDIR$)  !Sort !:
            let FNRESEQUENCES(MAT SDIR$,MAT DUMMY)
20060       let PUSH_SGN=1
20065       do  !:
               let FNBLURB("Select the desired shippers.") !:
               let DUMMY=FNPAS_MANY(WINDEX,MAT SDIR$,MAT SDIR,MAT PAS_SPEC$,MAT PAS_H$,1,2*PUSH_SGN,-3,18,1,30,"ASNs Available for Uploading","pq      HF",SREP$("^Document^Fields ",1,"^",ULHL$),NULL$,MAT WAIT) !:
               let PUSH_SGN=-1              !No more pushes
20070          if CMDKEY<3 then !:
                  let WORK=FNEITHER(1,0,(CMDKEY==1)) !:
                  mat SDIR=(WORK)
20075          if CMDKEY=10 AND NOT SUM(SDIR) then !:
                  let FNMESSAGE(WINDEX,10,10,"At least one shipper must be selected.","Selection Error") !:
                  let CMDKEY(0)
20080       loop UNTIL (CMDKEY>2)
20085       let FNPOP_WINDOW(WINDEX,1,OFF)
20088       if CMDKEY=10 then 
20090          let FNCOMPRESS_MATS(MAT SDIR$,MAT SDIR)
20100          if TRIM$(SDIR$(1))>NULL$ then 
20105             let FNEXECUTE("drop workfile."&WSID$&" -N")
20110             let WORKFILE=FNNEXT_CHANNEL(110,127)
20115             for _SCANNER_LOOP = 1 to UDIM(SDIR$)
20120                execute "sy cat brc/"&LWRC$(SDIR$(_SCANNER_LOOP)(1:8))&" > workfile."&WSID$
20125                open #WORKFILE: "Name= workfile."&WSID$&", Recl=1",external,input  !:
                     let CURRENT_SCREEN=HEADER  !Reset variables !:
                     let FIELDCOUNT=0 !:
                     let FNUPLOAD_DATA
20130             next _SCANNER_LOOP
20135          end if 
20138       end if 
20140       mat SHIPPERH$=(NULL$) !:
            mat SHIPPERH=(0) !:
            mat SHIP_DESC$=(NULL$)
20380 _End_Import_Add: fnend 
20400 ! 
20405 Import_Change: ! ***** Import Change
20410    def FNIMPORT_CHANGE
20415       mat SDIR$(1000)=(NULL$) !:
            mat SNAME$(1)=(NULL$)
20420       let FNDIR_MAT(98,"BRC","*",MAT SDIR$)  !List of headers
20425       mat MASK(UDIM(SDIR$))=(0)
20430       for _ = 1 to UDIM(SDIR$)
20445          if FNRESET(SHIPPERH,UPRC$(SDIR$(_)(1:8))) then !:
                  let FNAPPENDS(MAT SNAME$,UPRC$(SDIR$(_)(1:8)))
20450       next _
20455       mat SDIR$(UDIM(SNAME$))=SNAME$ !:
            mat DUMMY(UDIM(SDIR$))=AIDX(SDIR$)  !Sort !:
            let FNRESEQUENCES(MAT SDIR$,MAT DUMMY)
20460       let PUSH_SGN=1
20465       do  !:
               let FNBLURB("Select the desired shippers.") !:
               let DUMMY=FNPAS_MANY(WINDEX,MAT SDIR$,MAT SDIR,MAT PAS_SPEC$,MAT PAS_H$,1,2*PUSH_SGN,-3,18,1,30,"ASNs Available for Uploading","pq      HF",SREP$("^Document^Fields ",1,"^",ULHL$),NULL$,MAT WAIT) !:
               let PUSH_SGN=-1              !No more pushes
20470          if CMDKEY<3 then !:
                  let WORK=FNEITHER(1,0,(CMDKEY==1)) !:
                  mat SDIR=(WORK)
20475          if CMDKEY=10 AND NOT SUM(SDIR) then !:
                  let FNMESSAGE(WINDEX,10,10,"At least one shipper must be selected.","Selection Error") !:
                  let CMDKEY(0)
20480       loop UNTIL (CMDKEY>2)
20500       let FNPOP_WINDOW(WINDEX,1,OFF)
20505       if CMDKEY=10 then 
20508          let FNCOMPRESS_MATS(MAT SDIR$,MAT SDIR)
20510          if TRIM$(SDIR$(1))>NULL$ then 
20515             let FNEXECUTE("drop workfile."&WSID$&" -N")
20520             let WORKFILE=FNNEXT_CHANNEL(110,127)
20525             for _SCANNER_LOOP = 1 to UDIM(SDIR$)
20530                execute "sy cat brc/"&LWRC$(SDIR$(_SCANNER_LOOP)(1:8))&" > workfile."&WSID$
20535                open #WORKFILE: "Name= workfile."&WSID$&", Recl=1",external,input  !:
                     let CURRENT_SCREEN=HEADER  !Reset variables !:
                     let FIELDCOUNT=0 !:
                     let FNUPLOAD_DATA
20540             next _SCANNER_LOOP
20545          end if 
20550       end if 
20580 _End_Import_Change: fnend 
20800 ! 
20805 Tie_Bcode_To_Shipper: ! ******** Rewrite Shipper Number In Bcode File
20810    for _XLOOP = 1 to UDIM(F$)
20815       if TRIM$(F$(_XLOOP))>NULL$ then !     A serial number
20820          if FNREAD_FILE(BCODE,FORM$(BCODE_),RPAD$(TRIM$(F$(_XLOOP)),9),0,MAT BCODE$,MAT BCODE,0) then 
20825             if (PRODRECS) AND FNREAD_NAME(BOMH,CONTROL$(43)&RPAD$(BCODE$(2),15)&RPAD$(BCODE$(3),4),0,157,1,BOMH_INFO$) AND BOMH_INFO$<>"I" AND TRIM$(BCODE$(11))=NULL$ then ! Write prod if not bomh equal to ignore and not written bfore !:
                     print #PRODRECS: SHIPPERL$(PART_SL)&","&STR$(F(_XLOOP))&",1,"&CNVRT$("PIC(##/##/##)",DATE("mdy")) !:
                     let PRODRECS_FLAG=(TRUE)  !Have something to write
20830             let BCODE$(11)=SHIPPERH$(2)  !Put in shipper # !:
                  let BCODE(10)=DAYS(DATE)  !Scanned date !:
                  let FNREWRITE(BCODE,FORM$(BCODE_),NULL$,0,MAT BCODE$,MAT BCODE,0)
20835          end if 
20840       end if 
20845    next _XLOOP
20850    return 
21000 ! 
21005 Verify_Shipper: ! ***** Verify Uploaded Data Against Shipper
21010    def FNVERIFY_SHIPPER(MAT _PART$)
21015       let FNVERIFY_SHIPPER=TRUE       !Always succeeds
21020       mat INTPART$(UDIM(_PART$))=(NULL$)
21025       if LREC(BCODE)>0 then 
21030          for _LOOP_=1 to UDIM(_PART$) !:
                  if FNREAD_FILE(BCODE,FORM$(BCODE_),RTRM$(_PART$(_LOOP_)(2:10)),0,MAT BCODE$,MAT BCODE,0) AND FNREAD_NAME(SHIPPERH,RPAD$(BARHEADER$(1),8),0,360,9,_DEST$) AND FNREAD_NAME(SHIPPERH,RPAD$(BARHEADER$(1),8),0,25,8,_CUST$) AND FNREAD_NAME(SHIPPERH,RPAD$(BARHEADER$(1),8),0,371,4,_COMM$) AND FNREAD_NAME(BLANKETL2,RPAD$(_CUST$,8)&RPAD$(_DEST$,9)&RPAD$(BCODE$(2),15)&RPAD$(BCODE$(3),4),0,28,26,CUSTPART$) then 
21035                if CONTROL$(55)="Y" AND (BCODE$(6)<>_DEST$) then ! Check destinations !:
                        let FNMESSAGE(WINDEX,10,2,"Destination "&BCODE$(6)&" on label "&TRIM$(BCODE$(1))&" does not match shipper destination","Upload Warning for Destination "&_DEST$)
21040                let INTPART$(_LOOP_)=RPAD$(BCODE$(2),15)&RPAD$(BCODE$(3),4)
21045                if _COMM$(1:2)="FD" OR (_COMM$(1:2)="HA" AND POS(CUSTPART$," ",1)) then !:
                        let DUMMY=POS(CUSTPART$," ",1) !:
                        let DUMMY=POS(CUSTPART$," ",DUMMY+1) !:
                        let BASE$=CUSTPART$(1:DUMMY-1) !:
                        let SUFFIX$=CUSTPART$(DUMMY+1:LEN(CUSTPART$)) !:
                     else !:
                        let BASE$=CUSTPART$ !:
                        let SUFFIX$=NULL$
21050                if TRIM$(BASE$)=NULL$ AND TRIM$(SUFFIX$)>NULL$ then !                 If no color code !:
                        let BASE$=SUFFIX$ !:
                        let SUFFIX$=""
21055                let _PART$(_LOOP_)(99:0)="P"&RPAD$(BASE$,19)
21060                if _COMM$(1:2)="NI" AND TRIM$(BCODE$(17))>NULL$ AND _PART$(_LOOP_)(41:41)<>"A" then !                Nissan !:
                        let _PART$(_LOOP_)(99:0)="A"&RPAD$(BCODE$(17),19) !:
                     else !:
                        let _PART$(_LOOP_)(99:0)="C"&RPAD$(SUFFIX$,19)
21065                let _PART$(_LOOP_)(99:0)="Q"&STR$(BCODE(1))
21070                if TRIM$(BCODE$(5)) > NULL$ AND _PART$(_LOOP_)(1:1)<>"M" AND _PART$(_LOOP_)(1:1)<>"G" then !:
                        let FNTOTAL_MATS(MAT BLOT$,MAT BLOT,RPAD$(BCODE$(2),40)&RPAD$(BCODE$(5),20),BCODE(1))
21075                if (_PART$(_LOOP_)(1:1)<>"M" AND _PART$(_LOOP_)(1:1)<>"G") AND TRIM$(BCODE$(17)) > NULL$ then 
21080                   if SRCH(MAT PART_RAN$,BCODE$(2)) < 1 then !:
                           let FNAPPENDS(MAT PART_RAN$,BCODE$(2)) !:
                           let FNAPPENDS(MAT RAN_ARRAY$,BCODE$(17))
21085                end if 
21090             end if 
21095          next _LOOP_
21100       end if 
21105       if _PART$(1)(41:41)<>"A" then !                  Not ran # / nissan
21110          for _LOOP_=1 to UDIM(_PART$) !:
                  let _PART$(_LOOP_)(41:41)=" " !:
                  let DUMMY$=RTRM$(_PART$(_LOOP_)(21:40))&_PART$(_LOOP_)(41:59) !:
                  let _PART$(_LOOP_)(21:59)=RPAD$(DUMMY$,39) !:
               next _LOOP_
21115       else 
21120          for _LOOP_=1 to UDIM(_PART$) !:
                  let DUMMY$=_PART$(_LOOP_)(21:40) !:
                  !                        Let dummy$=srep$(dummy$,1," ","") !:
                  let _PART$(_LOOP_)(21:40)=RPAD$(DUMMY$,20) !:
               next _LOOP_
21125       end if 
21130       gosub Figure_Master             !Extract master label info if some exists
21135       let BARHEADER$(1)=FNEXPAND$(BARHEADER$(1),8) !:
            let FNCLEAR(1,MAT SHIPPERH$,MAT SHIPPERH) !:
            let READH=FNREAD_FILE(SHIPPERH,FORM$(SHIPPERH_),BARHEADER$(1),0,MAT SHIPPERH$,MAT SHIPPERH,0)
21140       if TRIM$(BARHEADER$(2)) > NULL$ then !:
               let SHIPPERH$(CARRIER_SH)=BARHEADER$(2)  !Scac code
21145       if TRIM$(BARHEADER$(3)) > NULL$ then !:
               let SHIPPERH$(TRAILER_SH)=BARHEADER$(3)  !Trailer #
21150       if TRIM$(BARHEADER$(4)) > NULL$ then !:
               let SHIPPERH$(SEAL_SH)=BARHEADER$(4)  !Seal code
21155       let _LOTLEN=8 !:
            let FNREAD_FIELD(COMPANY,NULL$,SHIPPERH(COMPANY_SH),DUMMY$:="Form POS 167,BH 2",_LOTLEN)
21160       let _POINTER=_LAST_POINTER=SHIPPERH(POINTER_SH)  !First detail line !:
            let FNMAKE_LL_PAS(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST$,MAT LIST,SHIPPERH(POINTER_SH),POINTER_SL)
21165 ! 
21170 _Verify_Shipper_Detail: ! ***** Detail Loop
21175       do WHILE _POINTER AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,_POINTER,MAT SHIPPERL$,MAT SHIPPERL,0)
21180          let MESSAGE$="WARNING: " !:
               if LEN(SHIPPERL$(PART_SL))>1 then !                  Skip freight/comment
21185             if _PART$(1)(41:41)<>"A" then !:
                     let FNSEARCH_MAT(MAT _PART$,"P"&SHIPPERL$(CUSTOMER_PART_SL),MAT DUMMY,21) !:
                  else !:
                     let FNSEARCH_MAT(MAT _PART$,"P"&RPAD$(SHIPPERL$(CUSTOMER_PART_SL),19)&"A"&SHIPPERL$(21),MAT DUMMY,21)
21190             if SUM(DUMMY) then 
21195                mat WORKPART$(UDIM(_PART$))=_PART$ !:
                     let FNCOMPRESS_MATS(MAT WORKPART$,MAT DUMMY)
21200                let _MASTER=(WORKPART$(1)(1:1)=="M") !:
                     if SHIPPERL(8+_MASTER)<>SUM(DUMMY) then !:
                        let MESSAGE$(99:0)="# of containers don't match. "
21205                let FNNOT_MAT(MAT DUMMY) !:
                     let FNCOMPRESS_MATS(MAT _PART$,MAT DUMMY)  !Remove processed
21210                let SERIAL_MAT=IP(UDIM(WORKPART$)/56)*56 !:
                     if FP(UDIM(WORKPART$)/56) then let SERIAL_MAT+=56
21215                mat SERIAL_$(SERIAL_MAT) !:
                     mat SERIAL_(SERIAL_MAT)
21220                let SHIPPERL(SCANNED_SL)=0  !Scanned qty !:
                     let FNCLEAR(1,MAT SERIAL_$,MAT SERIAL_) !:
                     for _LOOP_=1 to UDIM(WORKPART$) !:
                        let SERIAL_$(_LOOP_)=RTRM$(WORKPART$(_LOOP_)(2:20)) !:
                        let FNVERIFY(WORKPART$(_LOOP_)(62:79)) !:
                        let SHIPPERL(SCANNED_SL)+=NUMERIC !:
                        let SERIAL_(_LOOP_)=NUMERIC !:
                     next _LOOP_
21225                if SHIPPERL(SHIPPED_SL)<>SHIPPERL(SCANNED_SL) then !                  Scanned<>shipped !:
                        let MESSAGE$(99:0)="Quantities don't match."
21230                let WORK$=SHIPPERL$(SHIPPER_SL)&RPAD$(SHIPPERL$(CUSTOMER_PART_SL),26) !:
                     let FNDELETE_KEY(LABEL,WORK$&CNVRT$("BH 3",SHIPPERL(DATE_ADDED_SL))&CNVRT$("BH 3",SHIPPERL(TIME_ADDED_SL))) !:
                     let FNWRITE_SERIALS(LABEL,FORM$(LABEL_),MAT SERIAL_$,MAT SERIAL_,LABEL_)
21240                if FNENTER_SERIALS(WINDEX,LABEL,FORM$(LABEL_),WORK$&CNVRT$("BH 3",SHIPPERL(DATE_ADDED_SL))&CNVRT$("BH 3",SHIPPERL(TIME_ADDED_SL)),MAT SER_SPEC$,MAT SERIAL_$,MAT SERIAL_,.1,"        CP") then !:
                        let SHIPPERH(CARTONS_SH)-=SHIPPERL(CONT1_QTY_SL) !:
                        let SHIPPERL(CONT1_QTY_SL)=UDIM(WORKPART$)*(_MASTER==0)+SHIPPERL(CONT1_QTY_SL)*(_MASTER==1) !:
                        let SHIPPERH(CARTONS_SH)+=SHIPPERL(CONT1_QTY_SL) !:
                        let FNREWRITE(SHIPPERL,FORM$(SHIPPERL_),FNKEY$(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL),0,MAT SHIPPERL$,MAT SHIPPERL,0)
21245                let _MASTER=0          !Reset
21250                let _INDEX = 0 !:
                     let FNDELETE_KEY(SHIPLOT,RPAD$(SHIPPERL$(SHIPPER_SL),8)&RPAD$(SHIPPERL$(PART_SL),15))
21275             else 
21280                let FNMESSAGE(WINDEX,10,10,"No serial numbers uploaded for "&SHIPPERL$(6)&".","Warning")
21285             end if  !:
               end if 
21290          let _POINTER=SHIPPERL(POINTER_SL)  !Next detail line !:
               if _POINTER then !:
                  let _LAST_POINTER=_POINTER
21295       loop 
21300       if READH then 
21305          if RTRM$(_PART$(1))>NULL$ then !:
                  let FNCREATE_DETAIL(MAT SHIPPERH$,MAT SHIPPERH,MAT _PART$)
21310          let SHIPPERH$(SCAN_FLAG_SH)="1"  !Scanned
21315          mat ASN$(1)=(BARHEADER$(1)) !:
               let FNUNPACK(SHIPPERH_,MAT SHIPPERH$,MAT SHIPPERH) !:
               let FNREWRITE(SHIPPERH,FORM$(SHIPPERH_),ASN$(1),0,MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_)
21320       end if 
21325 _End_Verify_Shipper: fnend 
21400 ! 
21405 Search_Mat: ! ***** Search For Occurences
21410    def FNSEARCH_MAT(MAT F$,STRING$*255,MAT F,START)
21415       let FNSEARCH_MAT=FALSE !:
            mat F(UDIM(F$))=(FALSE)
21420       for LOOP_=1 to UDIM(F$) !:
               if F$(LOOP_)(START:START+LEN(STRING$)-1)=STRING$ then !:
                  let F(LOOP_)=TRUE
21425       next LOOP_
21430       let FNSEARCH_MAT=SUM(F)
21435 _End_Search_Mat: fnend 
21600 ! 
21605 Create_Detail: ! ***** Create Detail Lines From Uploaded Data
21610    def FNCREATE_DETAIL(MAT H$,MAT H,MAT PARTS$)
21615       let FNCREATE_DETAIL=FALSE       !Assume failure !:
            do WHILE UDIM(PARTS$) AND RTRM$(PARTS$(1))>NULL$
21620          let CUST_FOUND_FLAG=(FALSE)
21625          let FNSEARCH_MAT(MAT PARTS$,PARTS$(1)(21:60),MAT DUMMY,21) !:
               mat WORKPART$(UDIM(PARTS$))=PARTS$ !:
               mat WORK_INTPART$(UDIM(INTPART$))=INTPART$ !:
               mat _DUMMY(UDIM(DUMMY))=DUMMY
21630          let FNCOMPRESS_MATS(MAT WORKPART$,MAT DUMMY)  !Isolate part !:
               let FNCOMPRESS_MATS(MAT WORK_INTPART$,MAT _DUMMY)  !Isolate part !:
               let FNNOT_MAT(MAT DUMMY)     !Invert for drop !:
               mat _DUMMY(UDIM(DUMMY))=DUMMY !:
               let FNCOMPRESS_MATS(MAT PARTS$,MAT DUMMY)  !Remove processed   !:
               let FNCOMPRESS_MATS(MAT INTPART$,MAT DUMMY)  !Remove processed
21635          if _COMM$(1:2)="NI" AND WORKPART$(1)(41:41)="A" then !                 Nissan !:
                  let ORD_KEY$=RPAD$(RTRM$(WORKPART$(1)(22:40)),26)&RPAD$(SHIPPERH$(31),9) !:
               else !:
                  let ORD_KEY$=RPAD$(RTRM$(WORKPART$(1)(22:60)),26)&RPAD$(SHIPPERH$(31),9)
21640          if FNRESET(BLANKETL4,ORD_KEY$) then !              Find right order
21645             do WHILE FNREAD_FILE(-BLANKETL4,FORM$(BLANKETL_),NULL$,0,MAT BLANKETL$,MAT BLANKETL,0) AND RPAD$(BLANKETL$(4),26)&RPAD$(BLANKETL$(6),9)=ORD_KEY$
21650                if (WORK_INTPART$(1)=NULL$ OR RPAD$(BLANKETL$(2),15)&RPAD$(BLANKETL$(3),4)=WORK_INTPART$(1)) AND RPAD$(SHIPPERH$(4),8)=RPAD$(BLANKETL$(5),8) then 
21655                   let WORK$=STR$(BLANKETL(15))&RPAD$(BLANKETL$(2),15)&RPAD$(BLANKETL$(3),4)
21660                   let FNREAD_FILE(INVENT,FORM$(INVENT_),WORK$,0,MAT INV$,MAT INV,0) !:
                        let WORK$(99:0)=CNVRT$("B 1",BLANKETL(16)) !:
                        let FNREAD_FILE(-INVTQTY,FORM$(INVTQTY_),WORK$,0,MAT QTY$,MAT QTY,0)
21665                   let SERIAL_MAT=IP(UDIM(WORKPART$)/56)*56 !:
                        if FP(UDIM(WORKPART$)/56) then let SERIAL_MAT+=56
21670                   mat SERIAL_$(SERIAL_MAT) !:
                        mat SERIAL_(SERIAL_MAT) !:
                        let FNCLEAR(1,MAT SHIPPERL$,MAT SHIPPERL) !:
                        let FNCLEAR(1,MAT SERIAL_$,MAT SERIAL_) !:
                        let FNDEFAULT(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL)
21675                   for _LOOP_=1 to UDIM(WORKPART$) !:
                           let SERIAL_$(_LOOP_)=RTRM$(WORKPART$(_LOOP_)(2:20)) !:
                           let FNVERIFY(WORKPART$(_LOOP_)(62:79)) !:
                           let SHIPPERL(SCANNED_SL)+=NUMERIC !:
                           let SERIAL_(_LOOP_)=NUMERIC !:
                        next _LOOP_
21676                   let WORK$=STR$(BLANKETL(15))&RPAD$(BLANKETL$(2),15)&RPAD$(BLANKETL$(3),4) !:
                        let FNREAD_FILE(INVENT,FORM$(INVENT_),WORK$,0,MAT INV$,MAT INV,0)
21679                   let SHIPPERL(CONT1_QTY_SL)=UDIM(WORKPART$)*(INV$(UOM1_I)<>"RC")
21680                   let SHIPPERL$(PART_SL) = INV$(PART_I) !:
                        let SHIPPERL$(REV_SL) = INV$(REVISION_I) !:
                        let SHIPPERL(SHIPPED_SL)=SHIPPERL(SCANNED_SL)  !Ship=qty !:
                        let FNXREF_FIELDS(6,MAT SHIPPERL$,MAT SHIPPERL) !:
                        let FNXREF_FIELDS(8,MAT SHIPPERL$,MAT SHIPPERL) !:
                        let FNWRITE_SERIALS(LABEL,FORM$(LABEL_),MAT SERIAL_$,MAT SERIAL_,LABEL_)
21685                   let WORK$=SHIPPERL$(SHIPPER_SL)&RPAD$(SHIPPERL$(CUSTOMER_PART_SL),26)&CNVRT$("BH 3",SHIPPERL(DATE_ADDED_SL))&CNVRT$("BH 3",SHIPPERL(TIME_ADDED_SL)) !:
                        let FNCLEAR(1,MAT RC$,MAT RC)
21695                   let CREATE_DETAIL_FLAG=(TRUE)
21700                   if FNENTER_SERIALS(WINDEX,LABEL,FORM$(LABEL_),WORK$,MAT SER_SPEC$,MAT SERIAL_$,MAT SERIAL_,.1,"      Q CP") then 
21705                      if RTRM$(RC$(1))>NULL$ then !:
                              let FNCLEAR(1,MAT SHIPPERC$,MAT SHIPPERC) !:
                              let SHIPPERC(3)=RC(1)  !Qty shipped !:
                              let FNXREF_FIELDS(6,MAT SHIPPERC$,MAT SHIPPERC) !:
                              let FNXREF_FIELDS(7,MAT SHIPPERC$,MAT SHIPPERC) !:
                              let FNWRITE_DETAIL(SHIPPERL,FORM$(SHIPPERL_),MAT SHIPPERC$,MAT SHIPPERC,SHIPPERL_,_LAST_POINTER) !:
                              let SHIPPERH(40)+=SHIPPERC(13)  !Add tare
21710                      let _INDEX = 0 !:
                           let FNDELETE_KEY(SHIPLOT,RPAD$(SHIPPERL$(SHIPPER_SL),8)&RPAD$(SHIPPERL$(PART_SL),15))
21735                      let SHIPPERH(40)+=(SHIPPERL(SHIPPED_SL)*SHIPPERL(14)+SHIPPERL(13)) !:
                           let SHIPPERH(41)+=(SHIPPERL(SHIPPED_SL)*SHIPPERL(14))  !Net !:
                           let SHIPPERH(CARTONS_SH)+=SHIPPERL(CONT1_QTY_SL) !:
                           let FNWRITE_DETAIL(SHIPPERL,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_,_LAST_POINTER)
21740                      let CUST_FOUND_FLAG=(TRUE)
21745                   end if 
21750                   let CREATE_DETAIL_FLAG=(FALSE)
21755                   exit do 
21760                end if 
21765             loop 
21770          end if 
21775          if NOT (CUST_FOUND_FLAG) then !:
                  let DUMMY$=TRIM$(FNEITHER$(WORKPART$(1)(22:60),WORKPART$(1)(1:10),TRIM$(WORKPART$(1)(22:60))>NULL$)) !:
                  let FNMESSAGE(WINDEX,10,10,"Blanket Order not found for "&ORD_KEY$, "Warning:  Part NOT added to shipper "&BARHEADER$(1))
21780       loop 
21785 _End_Create_Detail: fnend 
21800 ! 
21805 Write_Detail: ! ***** Write Shipper Detail Record
21810    def FNWRITE_DETAIL(FILENO,&FORM$,MAT F$,MAT F,SWITCH,&_LAST_POINTER)
21815       let FNWRITE_DETAIL=TRUE         !Assume success !:
            let FNWRITE(FILENO,FORM$,MAT F$,MAT F,SWITCH) !:
            let __WORK=REC(FILENO)
21820       mat LOT_$=(NULL$) !:
            mat LOT_=(0)
21825       if FNRESET(SHIPLOT,RPAD$(F$(SHIPPER_SL),8)&RPAD$(F$(PART_SL),15)) then 
21830          let _INDEX = 0 !:
               do WHILE FNREAD_FILE(SHIPLOT,FORM$(SHIPLOT_),NULL$,0,MAT SHIPLOT$,MAT SHIPLOT,0) AND SHIPLOT$(1)=F$(SHIPPER_SL) AND SHIPLOT$(2)=F$(PART_SL) AND SHIPLOT(2)=F(DATE_ADDED_SL) AND SHIPLOT(3)=F(TIME_ADDED_SL) !:
                  let LOT_$(_INDEX+=1)=SHIPLOT$(3) !:
                  let LOT_(_INDEX)=SHIPLOT(1) !:
               loop UNTIL _INDEX=30
21835       end if 
21840       let FNMAKE_COMMITTED(MAT F$,MAT F,MAT LOT_$,MAT LOT_,1) !:
            if _LAST_POINTER then !                               Detail exists
21845          let FNREAD_FILE(FILENO,FORM$,NULL$,_LAST_POINTER,MAT F$,MAT F,0) !:
               let F(POINTER_SL)=__WORK     !Point to new !:
               let FNREWRITE(FILENO,FORM$,NULL$,_LAST_POINTER,MAT F$,MAT F,SWITCH)
21850       else 
21855          let SHIPPERH(POINTER_SH)=__WORK  !1st line item !:
               let FNREWRITE(SHIPPERH,FORM$(SHIPPERH_),SHIPPERH$(SHIPPER_SH),0,MAT SHIPPERH$,MAT SHIPPERH,0)
21860       end if 
21865       let _LAST_POINTER=__WORK
21870 _End_Write_Detail: fnend 
22000 ! 
22100 Find_All_Case: ! ***** Find Data For Matching Key - Case Version, Special
22120    def FNFIND_ALL_CASE(SWITCH,FILENO,KEY$*64,&FORM$,MAT F$,MAT F,MAT K$,MAT L$)
22140       let FNFIND_ALL_CASE=0           !Assume none !:
            if FNRESET(FILENO,KEY$) then 
22160          let WORK=LEN(FNKEY$(IP(SWITCH),MAT F$,MAT F)) !:
               let DUMMY=LEN(FNMAKE_LINE$(SWITCH,MAT F$,MAT F)) !:
               let DUMMY=MIN(3000,IP(55000/MAX(WORK,DUMMY))) !:
               mat K$(DUMMY)                !Maximum size !:
               mat L$(DUMMY)                !Maximum size !:
               mat BLANK$(MIN(1000,DUMMY)) !:
               if LWRC$(LTRM$(FORM$(1:5)))="form " then !:
                  let FORM$=CFORM$(FORM$)
22180          let _FIND_ALL_CASE=1         !Prime counter !:
               do WHILE (FNREAD_FILE(-ABS(FILENO),FORM$,NULL$,0,MAT F$,MAT F,SWITCH))
22200             let L$(_FIND_ALL_CASE)=FNMAKE_LINE$(SWITCH,MAT F$,MAT F) !:
                  let WORK$=K$(_FIND_ALL_CASE)=FNKEY$(IP(SWITCH),MAT F$,MAT F)
22240             if KEY$>NULL$ AND FP(SWITCH) then !:
                     let DUMMY = SWITCH * (IP(SWITCH) ~= INVENT_) + IP(SWITCH) * (IP(SWITCH)== INVENT_) !:
                     let WORK$=FNKEY$(DUMMY,MAT F$,MAT F)  !Augmented key
22260             if SWITCH = CUSTOMER_+.1 AND F$(CUSTOMER_TYPE_U) ~= "BT" then !:
                     let _FIND_ALL_CASE -= 1
22262             if _FIND_ALL_CASE AND (KEY$=WORK$(1:LEN(KEY$))) AND (L$(_FIND_ALL_CASE)=NULL$ OR (SWITCH = EDIDOC_+.1) AND F$(3)(1:3)<>"LIN") then !:
                     let _FIND_ALL_CASE -= 1
22280          loop UNTIL ((KEY$><WORK$(1:LEN(KEY$))) OR (_FIND_ALL_CASE+=1)>UDIM(L$))
22300          mat K$(_FIND_ALL_CASE-=1)    !Size !:
               mat L$(_FIND_ALL_CASE)       !Size !:
               mat BLANK$(UDIM(L$)) !:
               let FNFIND_ALL_CASE=_FIND_ALL_CASE  !Success
22320       end if 
22340 _End_Find_All_Case: fnend 
22400 ! 
22405 Figure_Master: ! ***** Extract Master Label Info
22410    mat _MAST_PART$(1)=(NULL$) !:
         let _MAST_=0 !:
         mat MAST_FLAG(UDIM(_PART$))=(1)    !Flag ones to delete
22415    for MLOOP_ = 1 to UDIM(_PART$)     !Go through each serial
22420       if _PART$(MLOOP_)(1:1)="M" OR _PART$(MLOOP_)(1:1)="G" then !                   If master label
22425          if FNREAD_FILE(BCODE,FORM$(BCODE_),RPAD$(TRIM$(_PART$(MLOOP_)(2:10)),9),0,MAT _BCODE$,MAT _BCODE,0) then !:
                  let _BCODE$(11)=BARHEADER$(1)  !Put in shipper #       !:
                  let _BCODE(10)=DAYS(DATE)  !Scanned date !:
                  let FNREWRITE(BCODE,FORM$(BCODE_),NULL$,0,MAT _BCODE$,MAT _BCODE,0)
22430          let _PALLET+=1
22435          let FNRESTORE(BCODE3,_PART$(MLOOP_)(2:10))  !Start file at mast
22440          do WHILE FNREAD_FILE(BCODE3,FORM$(BCODE_),NULL$,0,MAT MBCODE$,MAT MBCODE,0) AND TRIM$(_PART$(MLOOP_)(2:10))=TRIM$(MBCODE$(30))  !Get sub serials from mast
22445             if FNREAD_NAME(BLANKETL2,RPAD$(_CUST$,8)&RPAD$(_DEST$,9)&RPAD$(MBCODE$(2),15)&RPAD$(MBCODE$(3),4),0,28,26,CUSTPART$) then !                  Right part?
22450                if _COMM$(1:2)="FD" OR (_COMM$(1:2)="HA" AND POS(CUSTPART$," ",1)) then !                     Handle suffix for ford !:
                        let DUMMY=POS(CUSTPART$," ",1) !:
                        let DUMMY=POS(CUSTPART$," ",DUMMY+1) !:
                        let BASE$=CUSTPART$(1:DUMMY-1) !:
                        let SUFFIX$=CUSTPART$(DUMMY+1:LEN(CUSTPART$)) !:
                     else !:
                        let BASE$=CUSTPART$ !:
                        let SUFFIX$=NULL$
22455                if TRIM$(BASE$)=NULL$ AND TRIM$(SUFFIX$)>NULL$ then !                 No color code !:
                        let BASE$=SUFFIX$ !:
                        let SUFFIX$=""
22460                mat _MAST_PART$(UDIM(_MAST_PART$)+1)  !Write serial !:
                     let _MAST_PART$(_MAST_+=1)(1:20)=RPAD$("S"&MBCODE$(1),20) !:
                     let _MAST_PART$(_MAST_)(21:40)="P"&RPAD$(BASE$,19) !:
                     let _MAST_PART$(_MAST_)(41:60)="C"&RPAD$(SUFFIX$,19) !:
                     let _MAST_PART$(_MAST_)(61:80)="Q"&RPAD$(STR$(MBCODE(1)),19) !:
                     let MAST_FLAG(MLOOP_)=(FALSE)  !Mark to delete
22465                if LEN(TRIM$(BASE$))<19 then !:
                        let _MAST_PART$(_MAST_)(41:41)=" "  !Join part&suffx !:
                        let DUMMY$=RTRM$(_MAST_PART$(_MAST_)(21:40))&_MAST_PART$(_MAST_)(41:59) !:
                        let _MAST_PART$(_MAST_)(21:59)=RPAD$(DUMMY$,39) !:
                     else !:
                        let DUMMY$="P"&BASE$ !:
                        let _MAST_PART$(_MAST_)(21:59)=RPAD$(DUMMY$,39)
22470                let FNTOTAL_MATS(MAT BLOT$,MAT BLOT,RPAD$(MBCODE$(2),40)&RPAD$(MBCODE$(5),20),MBCODE(1))  !Sum up lot #'s
22475                if TRIM$(MBCODE$(17)) > NULL$ then 
22480                   if SRCH(MAT PART_RAN$,MBCODE$(2)) < 1 then !:
                           let FNAPPENDS(MAT PART_RAN$,MBCODE$(2)) !:
                           let FNAPPENDS(MAT RAN_ARRAY$,MBCODE$(17))
22485                end if 
22490             end if 
22495          loop 
22500       end if 
22505    next MLOOP_
22510    if UDIM(_MAST_PART$) > 1 then mat _MAST_PART$(UDIM(_MAST_PART$)-1)
22515    if SUM(MAST_FLAG)<>UDIM(MAST_FLAG) then !                  Delete some
22520       if NOT SUM(MAST_FLAG) then !                  Copy all over to other array !:
               mat _PART$(UDIM(_MAST_PART$))=_MAST_PART$ !:
            else !:
               let FNCOMPRESS_MATS(MAT _PART$,MAT MAST_FLAG)  !Remove mast !:
               let FNAPPEND_MATS(MAT _PART$,MAT _MAST_PART$)  !Add the others
22525    end if 
22530    return 
23000 ! 
23100 Container: ! ***** Compute The Container Quantity And Tare
23120    def FNCONTAINER(MAT F$,MAT F)
23140       let TARE_SAVE=F(TARE_SL) !:
            let F(TARE_SL) = 0 !:
            if TRIM$(F$(CONTAINER1_SL)) > NULL$ then !  Make sure there is one
23160          if NOT F(CONT1_QTY_SL) then !:
                  let F(CONT1_QTY_SL)=MIN(9999,CEIL(F(SHIPPED_SL)/F(STD_PACK_SL))) error Ignore
23180          let DUMMY =SRCH(CONT$,TRIM$(F$(CONTAINER1_SL))) !:
               if DUMMY > 0 then !:
                  let F(TARE_SL)=MIN(99999,F(CONT1_QTY_SL) * TARE(DUMMY))
23200       end if 
23220       if TRIM$(F$(CONTAINER2_SL)) > NULL$ AND (F(CONT2_QTY_SL)) then 
23260          let DUMMY =SRCH(CONT$,TRIM$(F$(CONTAINER2_SL))) !:
               if DUMMY > 0 then !:
                  let F(TARE_SL)+=(F(CONT2_QTY_SL) * TARE(DUMMY)) !:
                  let F(TARE_SL)=MIN(99999,F(TARE_SL))
23280       end if 
23300       if F$(UM_SL)="RC" then !:
               let F(UNIT_WT_SL)=DUMMY=0 !:
               let DUMMY$="Form Pos 167,BH 4."&STR$(WEIGHT_) !:
               let FNREAD_FIELD(INVENT,FNKEY$(INVENT_+.1,MAT F$,MAT F),0,DUMMY$,DUMMY) !:
               let F(TARE_SL)=MIN(99999,F(SHIPPED_SL)*DUMMY)
23320       if F(TARE_SL)=0 then !:
               let F(TARE_SL)=TARE_SAVE
23340 _End_Container: fnend 
23500 ! 
23510 Backflush_Shipped_Parts: ! ****** We Are Back Flushing
23520    def FNBACKFLUSH_SHIPPED_PARTS(MAT F$,MAT F,BACKOUT_SGN,_COMMIT)
23530       let FNBACKFLUSH_SHIPPED_PARTS=(FALSE)
23540       let BOMKEY$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
            if FNRESET(BOML,BOMKEY$) then 
23550          do WHILE FNREAD_FILE(BOML,FORM$(BOML_),NULL$,0,MAT BOML$,MAT BOML,0) AND BOMKEY$=BOML$(1)&RPAD$(BOML$(2),15)&RPAD$(BOML$(3),4)
23560             if BOML$(12)="A" AND BOML$(7)="1" AND BOML$(6)="Y" then 
23570                mat BOML_QTY$=(NULL$) !:
                     mat BOML_QTY=(0)
23580                let QKEY$=BOML$(1)&RPAD$(BOML$(4),15)&RPAD$(BOML$(5),4)&CHR$(F(PLANT_SL)) !:
                     if FNREAD_FILE(INVTQTY,FORM$(INVTQTY_),QKEY$,0,MAT BOML_QTY$,MAT BOML_QTY,INVTQTY_) then 
23590                   if (_COMMIT) then !:
                           let BOML_QTY(14)+=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Committed !:
                        else !:
                           let BOML_QTY(10)-=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Onhand !:
                           let BOML_QTY(18)+=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Shipped mtd !:
                           let BOML_QTY(20)+=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Shipped ytd
23600                   let FNREWRITE(INVTQTY,FORM$(INVTQTY_),NULL$,0,MAT BOML_QTY$,MAT BOML_QTY,INVTQTY_)
23610                else 
23620                   let BOML_QTY$(1)=BOML$(1)  !Company # !:
                        let BOML_QTY$(2)=BOML$(4)  !Part !:
                        let BOML_QTY$(3)=BOML$(5)  !Rev !:
                        mat BOML_QTY=(0)    !Clear qtys   !:
                        let BOML_QTY(1)=F(PLANT_SL)  !Plant #
23630                   if (_COMMIT) then !:
                           let BOML_QTY(14)=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Onhand !:
                        else !:
                           let BOML_QTY(10)=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Onhand !:
                           let BOML_QTY(18)=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Shipped mtd !:
                           let BOML_QTY(20)=(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN))  !Shipped ytd
23640                   let FNWRITE(INVTQTY,FORM$(INVTQTY_),MAT BOML_QTY$,MAT BOML_QTY,INVTQTY_)
23650                end if 
23660                if NOT (_COMMIT) then 
23670                   mat BOML_AUDIT$=(NULL$)  !Clear it out !:
                        mat BOML_AUDIT=(0)
23680                   let BOML_AUDIT$(1)=STR$(F(COMPANY_SL))  !Company !:
                        mat BOML_AUDIT$(2:3)=BOML$(4:5)  !Part & rev !:
                        let BOML_AUDIT$(5)="O"  !Invent type (onhand) !:
                        let BOML_AUDIT$(9)=F$(SHIPPER_SL)  !Internal doc !:
                        let BOML_AUDIT$(10)=F$(DEST_SL)  !External doc
23690                   let BOML_AUDIT(1) = F(PLANT_SL)  !Plant # !:
                        let BOML_AUDIT(2)=17  !Trans type (usage for items) !:
                        let BOML_AUDIT(3) = VAL(WSID$)  !Wsid !:
                        let BOML_AUDIT(4) = DAYS(F(DATE_SHIPPED_SL))  !Date of shipper
23700                   let BOML_AUDIT(5) = DAYS(DATE)  !Todays date !:
                        let BOML_AUDIT(6) = VAL(TIME$(1:2))+VAL(TIME$(4:5))/60  !Todays time !:
                        let BOML_AUDIT(7)=-(F(SHIPPED_SL)*BOML(4)*(BACKOUT_SGN) )  !Qty
23710                   let FNPERIOD(F(COMPANY_SL),F(DATE_SHIPPED_SL),BOML_AUDIT(14),BOML_AUDIT(15))
23720                   if FNREAD_FILE(-INVENT,FORM$(INVENT_),BOML_AUDIT$(1)&RPAD$(BOML_AUDIT$(2),15)&RPAD$(BOML_AUDIT$(3),4),0,MAT INVENT$,MAT INVENT,INVENT_) then !               Get costs !:
                           mat BOML_AUDIT(8:13)=INVENT(17:22)
23730                   let FNWRITE(AUDIT,FORM$(AUDIT_),MAT BOML_AUDIT$,MAT BOML_AUDIT,0)
23740                end if 
23750                let FNBACKFLUSH_SHIPPED_PARTS=(TRUE)
23760             end if 
23770          loop 
23780       end if 
23790 _End_Backflush_Shipped_Parts: fnend 
23800 ! 
23810 Boml_Exists: ! ***** See If Anything To Backflush
23820    def FNBOML_EXISTS(MAT F$,MAT F)
23830       let FNBOML_EXISTS=(FALSE)
23840       let BOMKEY$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
            if FNRESET(BOML,BOMKEY$) then 
23850          do WHILE FNREAD_FILE(BOML,FORM$(BOML_),NULL$,0,MAT BOML$,MAT BOML,0) AND BOMKEY$=BOML$(1)&RPAD$(BOML$(2),15)&RPAD$(BOML$(3),4)
23860             if BOML$(12)="A" AND BOML$(7)="1" AND BOML$(6)="Y" then !:
                     let FNBOML_EXISTS=(TRUE) !:
                     exit do 
23870          loop 
23880       end if 
23890 _End_Boml_Exists: fnend 
24000 ! 
24100 Gl_Account: ! ***** Return Valid General Ledger Account Number
24120    def FNGL_ACCOUNT(&ACCOUNT,COMPANY$*1,ROW,COL,ROWS,COLS,FRAME$*256)
24140       mat PAS_SPEC$(1)=(NULL$) !:
            let H_WIN=WINDEX !:
            let DUMMY=FNPAS(WINDEX,MAT DEPART_CODE$,MAT PAS_SPEC$,MAT BLANK$,DEPART_PAS:=1,ROW,COL,0,1,33,"Departments","        H ","Dept"&_C$&"Description"&_C$,NULL$,MAT WAIT) !:
            let WINDEX=H_WIN !:
            if (NOT CMDKEY) then 
24160          mat PAS_SPEC$(1)=(NULL$) !:
               mat GLM_$(1)=(NULL$) !:
               let WORK$=FNPAS_CASE$(WINDEX,GLMASTER_,GLMASTER,COMPANY$&DEPARTMENT$(DUMMY),FORM$(GLMASTER_),MAT GLM$,MAT GLM,MAT GLM_KEY$,MAT GLM_$,MAT PAS_SPEC$,MAT PAS_HELP$,GLM_PAS:= 1,ROW,COL,ROWS,COLS,44,"G/L Accounts for Department "&DEPARTMENT$(DUMMY),"        H ","Account"&_C$&"Description"&_C$,NULL$,"Select a general ledger master account number.",MAT WAIT)
24180          if (NOT CMDKEY) then !:
                  let ACCOUNT=VAL(WORK$(2:99))  !Reset argument !:
                  let FNGL_ACCOUNT=TRUE     !Success
24200       end if 
24220       mat PAS_SPEC$(1)=(NULL$)        !Resize !:
            mat PAS_HELP$(1) !:
            mat GLM_$(1)=(NULL$) !:
            mat GLM_KEY$(1)=(NULL$)
24240 _End_Gl_Account: fnend 
24400 ! 
24410 ! 
24412 Find_Unique: ! ***** Find Unique Key Fields
24414    def FNFIND_UNIQUE(FILENO,POSITION,LENGTH,KEY$*64,MAT F$,INSERT$*32)
24416       let FNFIND_UNIQUE=0             !Assume none !:
            let WORK$=CFORM$("form POS POSITION,G LENGTH") !:
            mat F$(IP(55000/(LENGTH+LEN(INSERT$))))  !Maximum size  !:
            let DUMMY$=KEY$                 !Prime
24418       let _FIND_UNIQUE=0              !Prime !:
            let WORK=KLN(FILENO)            !Key length !:
            do WHILE ((_FIND_UNIQUE+=1)<=UDIM(F$)) !:
               read #FILENO,using WORK$,search>=DUMMY$,release: F$(_FIND_UNIQUE) nokey _Exit_Find_Unique,eof _Exit_Find_Unique !:
               if INSERT$>NULL$ AND LENGTH>WORK then !:
                  let F$(_FIND_UNIQUE)(WORK+1:0)=INSERT$ !:
                  let F$(_FIND_UNIQUE)(99:1)=INSERT$
24420          let DUMMY$=FNNEXT_KEY$(RPAD$(SREP$(F$(_FIND_UNIQUE)(1:WORK),CHR$(5)," "),WORK)) !:
            loop UNTIL (F$(_FIND_UNIQUE)(1:LEN(KEY$))>KEY$)
24422 ! 
24424 _Exit_Find_Unique: ! ***** Exit
24426       mat F$(MAX(1,(_FIND_UNIQUE-=1)))  !Size !:
            let FNFIND_UNIQUE=_FIND_UNIQUE  !Return value
24428 _End_Find_Unique: fnend 
24430 ! 
24432 Pas_Simples: ! ***** Point And Shoot From File
24434    def FNPAS_SIMPLE$*64(&WINDOW,FILENO,LENGTH,KEY$*64,MAT F$,MAT SPEC$,MAT H$,&CURRENT,ROW,COLUMN,ROWS,COLUMNS,TITLE$*80,FUNCTION$*20,HEADING$*80,FRAME$*256,MESSAGE$*80,MAT WAIT)
24436       let FNPAS_SIMPLE$=NULL$         !Assume cancel !:
            let FNBLURB("Now reading records.  Please wait...") !:
            if UDIM(F$)>1 OR FNFIND_UNIQUE(FILENO,KPS(FILENO),LENGTH,KEY$,MAT F$,_C$) then !:
               let FNBLURB(MESSAGE$) !:
               let CURRENT=FNPAS(WINDOW,MAT F$,MAT SPEC$,MAT H$,MAX(1,CURRENT),ROW,COLUMN,ROWS,COLUMNS,LENGTH+2+(COLUMN*GUI_MODE) ,TITLE$,FUNCTION$,HEADING$,FRAME$,MAT WAIT) !:
               let FNPAS_SIMPLE$=F$(CURRENT)(1:KLN(FILENO))
24438       let FNBLURB(NULL$)
24440 _End_Pas_Simples: fnend 
25000 ! 
25005 Get_Document: ! ***** Returns The Next Document Number
25010    def FNGET_DOCUMENT$*8(_COMPANY,_VECTOR)
25015       let FNGET_DOCUMENT$ = RPT$("0",8-2*(_VECTOR==12))  !Default !:
            if FNREAD_FILE(COMPANY,FORM$(COMPANY_),NULL$,_COMPANY,MAT COMPANY$,MAT COMPANY,0) then 
25020          if TRIM$(COMPANY$(_VECTOR))=NULL$ then !:
                  let COMPANY$(_VECTOR)=RPAD$(NULL$,8-2*(_VECTOR==2),"0")
25025          let DUMMY$=COMPANY$(_VECTOR) !:
               let _FIRSTNUM=1 !:
               let __LOOP=9-2*(_VECTOR==12) !:
               let _LASTNUM=8-2*(_VECTOR==12) !:
               do WHILE (__LOOP-=1)
25030             if DUMMY$(__LOOP:__LOOP) <"0" OR DUMMY$(__LOOP:__LOOP) > "9" then !:
                     let _FIRSTNUM=__LOOP+1 !:
                     exit do 
25035          loop 
25040          do WHILE (__LOOP+=1) <= (8-2*(_VECTOR==12)) !:
                  if DUMMY$(__LOOP:__LOOP) <"0" AND DUMMY$(__LOOP:__LOOP) > "9" then !:
                     let _LASTNUM=__LOOP !:
                     exit do 
25045          loop 
25050          let DUMMY=VAL(DUMMY$(_FIRSTNUM:_LASTNUM))+1 !:
               let DUMMY$(_FIRSTNUM:_LASTNUM)= CNVRT$("zd "&STR$(_LASTNUM-_FIRSTNUM+1),DUMMY) !:
               let FNGET_DOCUMENT$=COMPANY$(_VECTOR)=DUMMY$ !:
               if CONTROL$(9) = "Y" then !:
                  let COMPANY$(9)=COMPANY$(8)
25055          let FNREWRITE(COMPANY,FORM$(COMPANY_),NULL$,_COMPANY,MAT COMPANY$,MAT COMPANY,0)
25060       end if 
25065       reread #COMPANY,release: error Ignore
25070 End_Get_Document: fnend 
25200 ! 
25205 Put_Document: ! ***** Return The Number On Cancellation, If Possible
25210    def FNPUT_DOCUMENT(_COMPANY,_VECTOR,_DOCUMENT$*9)
25215       let FNPUT_DOCUMENT = 0          !Default !:
            if FNREAD_FILE(COMPANY,FORM$(COMPANY_),NULL$,_COMPANY,MAT COMPANY$,MAT COMPANY,0) AND COMPANY$(_VECTOR) = _DOCUMENT$ then 
25220          if TRIM$(COMPANY$(_VECTOR))=NULL$ then !:
                  let COMPANY$(_VECTOR)=RPAD$(NULL$,8-2*(_VECTOR==2),"0")
25225          let DUMMY$=COMPANY$(_VECTOR) !:
               let _FIRSTNUM=1 !:
               let __LOOP=9-2*(_VECTOR==12) !:
               let _LASTNUM=8-2*(_VECTOR==12) !:
               do WHILE (__LOOP-=1)
25230             if DUMMY$(__LOOP:__LOOP) <"0" OR DUMMY$(__LOOP:__LOOP) > "9" then !:
                     let _FIRSTNUM=__LOOP+1 !:
                     exit do 
25235          loop 
25240          do WHILE (__LOOP+=1) <= (8-2*(_VECTOR==12)) !:
                  if DUMMY$(__LOOP:__LOOP) <"0" AND DUMMY$(__LOOP:__LOOP) > "9" then !:
                     let _LASTNUM=__LOOP !:
                     exit do 
25245          loop 
25250          let DUMMY=VAL(DUMMY$(_FIRSTNUM:_LASTNUM))-1 !:
               let DUMMY$(_FIRSTNUM:_LASTNUM)= CNVRT$("zd "&STR$(_LASTNUM-_FIRSTNUM+1),DUMMY) !:
               let COMPANY$(_VECTOR)=DUMMY$ !:
               if CONTROL$(9) = "Y" then !:
                  let COMPANY$(9) = COMPANY$(8)
25255          let FNREWRITE(COMPANY,FORM$(COMPANY_),NULL$,_COMPANY,MAT COMPANY$,MAT COMPANY,0) !:
               let FNPUT_DOCUMENT=1
25260       end if 
25265       reread #COMPANY,release: error Ignore
25270 End_Put_Document: fnend 
25400 ! 
25405 Make_Total: ! ***** Make Totals For Display
25410    def FNMAKE_TOTAL(SWITCH,MAT TOTAL,MAT L$)
25415       let FNMAKE_TOTAL=FALSE !:
            mat TOTAL=(0) !:
            for _=1 to UDIM(L$) !:
               if RTRM$(L$(_)(1:15))=NULL$ then 
25420             let TOTAL(2)+=1
25425          else 
25430             let TOTAL(1)+=1 !:
                  let TOTAL(5)+=VAL(L$(_)(54:62)) !:
                  if RTRM$(L$(_)(1:15))><"F" then !:
                     let TOTAL(3)+=(VAL(L$(_)(54:62))==0) !:
                     let TOTAL(4)+=(VAL(L$(_)(64:72))==0)
25435          end if 
25440          let F(GROSS_SH)=F(TAX_SH)=F(TAXABLE_SALES_SH)=F(WEIGHT_SH)=0 !:
               let F(CARTONS_SH)=F(PALLETS_SH)=F(RETURNABLE_SH)=F(FREIGHT_SH)=0
25445          let F(INVOICE_TOTAL_SH)=F(FREIGHT_SH)=0 !:
               let F(NET_WEIGHT_SH)=0 !:
               let L_TOTAL(POINTER_SL)=F(POINTER_SH)
25450          do WHILE L_TOTAL(POINTER_SL) !:
                  if FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,L_TOTAL(POINTER_SL),MAT L_TOTAL$,MAT L_TOTAL,SHIPPERL_) then 
25455                let F(GROSS_SH)+= (L_TOTAL(EXTENSION_SL)*(L_TOTAL$(UM_SL)><"RC")) !:
                     if TAXABLE$="Y" AND L_TOTAL(TAXABLE_SL) then !:
                        let F(TAX_SH)+= (ROUND(FNCALC_TAX(L_TOTAL(EXTENSION_SL),F(PERCENT1_SH),F(PERCENT2_SH),F(PERCENT3_SH)),2)) !:
                        let F(TAXABLE_SALES_SH)+= (L_TOTAL(EXTENSION_SL))
25460                let F(NET_WEIGHT_SH)+= (L_TOTAL(UNIT_WT_SL)*L_TOTAL(SHIPPED_SL)*(L_TOTAL$(UM_SL)~="RC")) !:
                     let F(WEIGHT_SH)+= (L_TOTAL(UNIT_WT_SL)*L_TOTAL(SHIPPED_SL)+L_TOTAL(TARE_SL)) !:
                     let F(CARTONS_SH)+= L_TOTAL(CONT1_QTY_SL) !:
                     let F(PALLETS_SH)+= L_TOTAL(CONT2_QTY_SL)
25465                if L_TOTAL$(UM_SL) = "RC" then !:
                        let F(RETURNABLE_SH)+=L_TOTAL(EXTENSION_SL)
25470                if L_TOTAL$(PART_SL)="F" then !:
                        let F(FREIGHT_SH)+= L_TOTAL(EXTENSION_SL) !:
                        let F(TAX_SH)+= (ROUND(FNCALC_TAX(L_TOTAL(EXTENSION_SL),F(PERCENT1_SH),F(PERCENT2_SH),F(PERCENT3_SH),F(FRT_TAXABLE_SH))*SGN(F(FRT_TAXABLE_SH)),2)) !:
                        let F(TAXABLE_SALES_SH)+= (L_TOTAL(EXTENSION_SL)*SGN(L_TOTAL(FRT_TAXABLE_SH)))
25475                let F(INVOICE_TOTAL_SH)=F(GROSS_SH)+F(FREIGHT_SH)+F(TAX_SH)+F(RETURNABLE_SH)
25480             end if 
25485          loop 
25490       next _
25495       mat WARNING$(2)=(NULL$) !:
            let FNMAKE_TOTAL=TRUE
25500 _End_Make_Total: fnend 
25600 ! 
25620 Create_Shipper_Headers: ! ***** Create The Header For Scanned Data
25640    def FNCREATE_SHIPPER_HEADER$(ORDER$)
25660       let FNCREATE_SHIPPER_HEADER$=ORDER$
25662       mat ORDERH$=(NULL$)             !Get info from orderh file !:
            mat ORDERH=(0) !:
            if FNREAD_FILE(-ORDERH,FORM$(ORDERH_),ORDER$,0,MAT ORDERH$,MAT ORDERH,0) then 
25665 ! Shipper Header Strings
25670          let SHIPPERH$(1)=ORDER$      !Order # !:
               let SHIPPERH$(2)=FNGET_DOCUMENT$(1,8)  !Shipper # !:
               let SHIPPERH$(3)=""          !Invoice # !:
               let SHIPPERH$(4)=ORDERH$(3)  !Customer # !:
               mat SHIPPERH$(5:16)=ORDERH$(4:15)  !Addresses !:
               let SHIPPERH$(17)=""         !Bill of lading !:
               let SHIPPERH$(18)=""         !Master bill of lading
25675          let SHIPPERH$(19)=ORDERH$(18)  !Prepaid/collect   !:
               let SHIPPERH$(20)="00"       !Asn purpose code !:
               let SHIPPERH$(21)=ORDERH$(20)  !Loc id !:
               let SHIPPERH$(22)=ORDERH$(21)  !Loc qual !:
               let SHIPPERH$(23)=ORDERH$(22)  !Equip code !:
               let SHIPPERH$(24)=ORDERH$(23)  !Tran mode !:
               let SHIPPERH$(25)=BARHEADER$(3)  !Trailer !:
               let SHIPPERH$(26)=FNEITHER$(BARHEADER$(2),ORDERH$(26),BARHEADER$(2)<>NULL$)  !Carrier
25680 ! let SHIPPERH$(27)=ORDERH$(28)  ! ???         !:
               let SHIPPERH$(28)="N"        !Hazard material flag  !:
               let SHIPPERH$(29)=ORDERH$(29)  !Terms descr !:
               let SHIPPERH$(30)=BARHEADER$(4)  !Seal number !:
               let SHIPPERH$(31)=ORDERH$(31)  !Destination
25685          let SHIPPERH$(32)=ORDERH$(32)  !Terms code         !:
               let SHIPPERH$(33)=ORDERH$(33)  !Communication code !:
               let SHIPPERH$(34)=ORDERH$(34)  !Release #   !:
               let SHIPPERH$(35)=""         !Special ship code !:
               let SHIPPERH$(36)=""         !Pro #       !:
               let SHIPPERH$(37)=FNEITHER$(BARHEADER$(2),ORDERH$(27),BARHEADER$(2)<>NULL$)  !Carrier
25690 ! Shipper Header Numerics
25695          let SHIPPERH(1)=ORDERH(1)    !Terms % !:
               let SHIPPERH(2)=ORDERH(2)    !Term days !:
               let SHIPPERH(3)=DAYS(DATE)   !Shipper date !:
               let SHIPPERH(4)=0            !Due date   !:
               let SHIPPERH(5)=0            !Invoice date  !:
               let SHIPPERH(6)=DAYS(DATE)   !Shipment date !:
               let SHIPPERH(7)=0            !Arrival date
25700          let SHIPPERH(8)=0            !Shipment time   !:
               mat SHIPPERH(9:11)=(0)       !Arrival + xmit times !:
               mat SHIPPERH(12:14)=ORDERH(12:14)  !Tax stuff   !:
               let SHIPPERH(15)=1           !Shipper type !:
               let SHIPPERH(16)=VAL(WSID$)  !Wsid
25705          let SHIPPERH(17)=0           !Invoice posted flag !:
               mat SHIPPERH(18:20)=ORDERH(18:20)  !Sales taxes !:
               let SHIPPERH(21)=1           !Company     !:
               let SHIPPERH(22)=1           !Plant  !:
               let SHIPPERH(23)=0           !Sales type
25710          let SHIPPERH(24)=0           !Shipper printed flag !:
               let SHIPPERH(25)=0           !Freight taxable flag  !:
               let SHIPPERH(26)=0           !810 xmit flag !:
               let SHIPPERH(27)=0           !# Of shippers printed !:
               let SHIPPERH(28)=0           !Rel file update flag
25715          let SHIPPERH(29)=0           !Source code    !:
               let SHIPPERH(30)=ORDERH(30)  !Currency     code !:
               let SHIPPERH(31)=ORDERH(31)  !Currency rate invoiced !:
               mat SHIPPERH(32:41)=(0)      !Gross sales amt
25720          let SHIPPERH(42)=0           !Container 1       !:
               let SHIPPERH(43)=0           !Container 2        !:
               let SHIPPERH(44)=CONTROL(11)  !Gl acct           !:
               let SHIPPERH(45)=0           !Pointer
25725          let FNWRITE(SHIPPERH,FORM$(SHIPPERH_),MAT SHIPPERH$,MAT SHIPPERH,0)
25730          let FNCREATE_SHIPPER_HEADER$=SHIPPERH$(2)
25735       end if 
25780 _End_Create_Shipper_Headers: fnend 
26500 ! 
26520 Dock_Code_Lookups: ! ***** Dock Goes On The Help Lines
26540    def FNDOCK_CODE_LOOKUP$*90(SWITCH,MAT F$,MAT F)
26560       let FNDOCK_CODE_LOOKUP$=NULL$
26570       if SWITCH=SHIPPERL_ then !:
               let SKEY$=FNKEY$(SCHEDC_+.1,MAT F$,MAT F)(1:27)
26580       if SWITCH=BLANKETL_ then !:
               let SKEY$=FNKEY$(SCHEDC_+.2,MAT F$,MAT F)(1:27)
26620       if SWITCH=ORDERH_ then !:
               let SKEY$=FNKEY$(SCHEDC_+.3,MAT F$,MAT F)(1:8)
26700       if FNRESET(SCHEDC,SKEY$) then 
26720          do WHILE ((FNREAD_FILE(-SCHEDC,FORM$(SCHEDC_),NULL$,0,MAT SCHEDC$,MAT SCHEDC,SCHEDC_)) AND (SKEY$ = FNKEY$(SCHEDC_,MAT SCHEDC$,MAT SCHEDC)(1:LEN(SKEY$))))
26730             if TRIM$(SCHEDC$(20))>NULL$ then ! Dock code found !:
                     let FNDOCK_CODE_LOOKUP$=SCHEDC$(20) !:
                     exit do 
26733             let SCHEDC$(10)=NULL$     !Ran (kanban) number
26735          loop 
26738          mat SCHEDC$=(NULL$)          !Don't inadvertently select this schedc !:
               mat SCHEDC=(0)
26740       end if 
26980 _Dock_Code_Lookup: fnend 
27000 ! 
27010 Enter_Freight: ! ***** Enter Freight Charges
27020    let FNRESTORE_WINDOW(SCREENS,"SHIPLFRG",SFRGROW,SFRGCOLUMN,SFRGROWS,SFRGCOLUMNS,MAT SFRGW$,MAT SFRGSPEC$,MAT DUMBGS$,MAT WORK$) !:
         let FNPUSH_WINDOW(WINDEX,MAT SFRGW$,SFRGROW,SFRGCOLUMN,SFRGROWS,SFRGCOLUMNS,NULL$,NULL$,NULL$) !:
         let F(SHIPPED_SL)=1 !:
         if F$(DESC_SL)=NULL$ then !:
            let F$(DESC_SL)="Freight Charges" !:
            let F$(CUSTOMER_PART_SL)="Freight Charges"
27040    do  !:
            let FNENTER(WINDEX,SHIPLFRG_,MAT SFRGSPEC$,MAT H$,MAT SHIPPERL$,MAT SHIPPERL,3,"100","        HF",MAT WAIT) !:
         loop UNTIL (CMDKEY>8)
27045    if CMDKEY<>9 then !:
            let F(EXTENSION_SL)=F(UNIT_PRICE_SL)
27050    let FNPOP_WINDOW(WINDEX,1,OFF)
27480    return 
27500 ! 
27520 Octal_Digit: ! ***** Generate Octal Digit
27540    def FNOCTAL_DIGIT(_1$*1,_2$*1,_3$*1;OCTAL)
27560       let OCTAL=4*(_1$=="Y")          !High order binary digit !:
            let OCTAL+= 2*(_2$=="Y")        !Middle binary digit !:
            let OCTAL+= (_3$=="Y")          !Low order binary digit !:
            let FNOCTAL_DIGIT=OCTAL         !Return octal (0-7) value
27580 _End_Octal_Digit: fnend 
27600 ! 
27620 Calc_Tax: ! ***** Calculate Tax (Unrounded)
27640    def FNCALC_TAX(AMOUNT,PERCENT1,PERCENT2,PERCENT3;FREIGHT,TAX,DUMMY)
27660       let AMOUNT/= 100                !Move decimal point !:
            if (NOT (FREIGHT)) then !  Calculate compound only
27680          let TAX=AMOUNT*ABS(PERCENT1) !:
               let TAX+= FNEITHER(AMOUNT,AMOUNT+TAX,(PERCENT2>0))*ABS(PERCENT2) !:
               let TAX+= FNEITHER(AMOUNT,AMOUNT+TAX,(PERCENT3>0))*ABS(PERCENT3)
27700       else !  Calculating freight tax using octal digit
27720          let TAX=AMOUNT*ABS(PERCENT1)*(DUMMY:= (FREIGHT>3)) !:
               let FREIGHT-= 4*(DUMMY)      !Drop high order bit !:
               let TAX+= FNEITHER(AMOUNT,AMOUNT+TAX,(PERCENT2>0))*ABS(PERCENT2)*(DUMMY:= (FREIGHT>1)) !:
               let FREIGHT-= 2*(DUMMY)      !Drop middle bit !:
               let TAX+= FNEITHER(AMOUNT,AMOUNT+TAX,(PERCENT3>0))*ABS(PERCENT3)*(FREIGHT)
27740       end if 
27760       let FNCALC_TAX=TAX              !Return calculated tax
27780 _End_Calc_Tax: fnend 
27800 ! 
27805 Find_Unique_Case: ! ***** Find Unique Key Fields - Case Version - Special
27810    def FNFIND_UNIQUE_CASE(SWITCH,FILENO,KEY$*64,&FORM$,MAT F$,MAT F,MAT K$,MAT L$)
27815       let FNFIND_UNIQUE_CASE=_FIND_UNIQUE_CASE=0  !Assume none !:
            if FNRESET(FILENO,KEY$) then 
27820          let WORK=LEN(FNKEY$(IP(SWITCH),MAT F$,MAT F)) !:
               let DUMMY=LEN(FNMAKE_LINE$(SWITCH,MAT F$,MAT F)) !:
               let DUMMY=IP(55000/MAX(WORK,DUMMY)) !:
               mat K$(DUMMY)                !Maximum size !:
               mat L$(DUMMY)                !Maximum size !:
               mat BLANK$(MIN(1000,DUMMY)) !:
               if LWRC$(LTRM$(FORM$(1:5)))="form " then !:
                  let FORM$=CFORM$(FORM$)
27825          let _FIND_UNIQUE_CASE=1      !Prime !:
               do WHILE (FNREAD_FILE(-ABS(FILENO),FORM$,NULL$,0,MAT F$,MAT F,SWITCH))
27830             let L$(_FIND_UNIQUE_CASE)=DUMMY$=FNMAKE_LINE$(SWITCH,MAT F$,MAT F) !:
                  let WORK$=K$(_FIND_UNIQUE_CASE)=FNKEY$(IP(SWITCH),MAT F$,MAT F) !:
                  if FP(SWITCH) then !:
                     let WORK$=K$(_FIND_UNIQUE_CASE)=FNKEY$(SWITCH,MAT F$,MAT F)
27835             let DUMMY$=FNNEXT_KEY$(WORK$)  !Next key !:
                  if SWITCH=ORDERH_ AND (F(TYPE_H)~=1 AND F(TYPE_H)~=7) then !:
                     let L$(_FIND_UNIQUE_CASE)=NULL$ !:
                     let _FIND_UNIQUE_CASE-=1
27837 !   if SWITCH=43 then pause
27840          loop UNTIL (KEY$><WORK$(1:LEN(KEY$)) OR (_FIND_UNIQUE_CASE+=1)>UDIM(L$) OR (NOT FNRESTORE(FILENO,DUMMY$) AND SWITCH ~= BLANKETL_))
27845 ! 
27850 _Exit_Find_Unique_Case: ! ***** Exit
27855          mat K$(MAX(1,_FIND_UNIQUE_CASE-=1))  !Size !:
               mat L$(MAX(1,_FIND_UNIQUE_CASE))  !Size !:
               mat BLANK$(UDIM(L$))         !Size !:
               let FNFIND_UNIQUE_CASE=_FIND_UNIQUE_CASE  !Success
27860       end if 
27865 _End_Find_Unique_Case: fnend 
28000 ! 
28100 Invt_Inquiry: ! ****** Display Inquiry
28120    def FNINVT_INQUIRY(_PART$*16)
28140       let FNINVT_INQUIRY = FALSE !:
            if FNRESET(INVENT,_PART$) then 
28180          mat INQ_LIST$(1)=(NULL$) !:
               let _PART$ = _PART$(2:LEN(_PART$)) !:
               let FNBLURB("Reading Inventory Records. Please Wait...") !:
               let MAX_ARRAY=IP(55000 / LEN(FNMAKE_LINE$(INVTQTY_,MAT QTY$,MAT QTY)))
28200          do WHILE FNREAD_FILE(-INVENT,FORM$(INVENT_),NULL$,0,MAT INV$,MAT INV,0) AND INV$(2)(1:LEN(_PART$))=_PART$ !:
                  let QTY_KEY$=FNKEY$(INVENT_,MAT INV$,MAT INV) !:
                  if FNRESET(INVTQTY,QTY_KEY$) then 
28240                do WHILE FNREAD_FILE(-INVTQTY,FORM$(INVTQTY_),NULL$,0,MAT QTY$,MAT QTY,INVTQTY_) AND QTY_KEY$=FNKEY$(INVENT_,MAT QTY$,MAT QTY) !:
                        let FNAPPENDS(MAT INQ_LIST$,FNMAKE_LINE$(INVTQTY_,MAT QTY$,MAT QTY)) !:
                     loop 
28260             end if 
28280          loop UNTIL UDIM(INQ_LIST$) >= MAX_ARRAY
28300          let FNBLURB("Use Page-Up or Page-Down. F9 to end.") !:
               if INQ_LIST$(1) > NULL$ then !  At least 1 found
28308             if GUI_MODE then 
28309                let CUR_FUNCTION$=FUNCTION$ !:
                     let FUNCTION$="        H "
28310                let CUR_LEAVE=LEAVE_WIN !:
                     let CUR_SHOW=SHOW_ZOOM_ONLY !:
                     let LEAVE_WIN=SHOW_ZOOM_ONLY=0 !:
                     let FNPAS((WIN_TEMP:=0),MAT INQ_LIST$,MAT J$,MAT K$,1,3,2,10,COLUMNS,80,"Inventory Inquiry",FUNCTION$,SREP$("Part Number    ~Description        ~Plnt ~On Hand~Commit~  Quaran~Out Proc~"&NORMAL$,1,"~",ULHL$),NULL$,MAT WAIT) !:
                     let FNINVT_INQUIRY=TRUE !:
                     let FNBLURB(NULL$)
28312                let LEAVE_WIN=CUR_LEAVE !:
                     let SHOW_ZOOM_ONLY=CUR_SHOW !:
                     let FUNCTION$=CUR_FUNCTION$
28313             end if 
28320             if NOT GUI_MODE then !:
                     mat PAS_SPEC$(1)=(NULL$) !:
                     let FNSHOW(WINDEX,MAT INQ_LIST$,MAT PAS_SPEC$,MAT BLANK$,1,2,3,0,1,74,"Inventory Inquiry","        H ",SREP$("~Part Number    ~Description        ~Plnt ~On Hand~Commit~  Quaran~Out Proc"&NORMAL$,1,"~",ULHL$),NULL$,MAT WAIT) !:
                     let FNINVT_INQUIRY=TRUE !:
                     let FNBLURB(NULL$)
28340          end if  !:
            end if 
28360 _End_Invt_Inquiry: fnend 
28370 ! 
28372 Get_Eq_Descs: ! *****
28374    def FNGET_EQ_DESC$(MAT EQ_DESC$)
28376       for I=1 to 127
28378          if FILE(I)==-1 then !:
                  let EQ_FL=I !:
                  let I=128
28380       next I
28382       open #EQ_FL: "name=oed\eqtm,kfname=oed\eqtm.ky2,shr",internal,input,keyed  !:
            restore #EQ_FL,search="EQ": !:
            mat EQ_DESC$(DUMMY:=1) !:
            do 
28384          read #EQ_FL,using FORM$(EQTM_): MAT EQTM$,MAT EQTM
28386          if EQTM$(2)=="EQ" then !:
                  let EQ_DESC$(DUMMY)=RPAD$(EQTM$(4),2)&EQTM$(6) !:
               else !:
                  exit do 
28388          mat EQ_DESC$(DUMMY+=1)
28390       loop 
28392       mat EQTM_DESC$(DUMMY-1)
28394       close #EQ_FL: 
28396 _End_Get_Eq_Descs: fnend 
28398 ! 
28400 Zoom_Eqtm: ! 
28402    mat EQTM_PAS$(1)=(NULL$) !:
         mat EQTM_PAS_SPEC$(1)=(NULL$)
28404    if TRIM$(SHIPPERH$(COMMUN_SH))==NULL$ then !:
            let TRADING_PARTNER$=FORMAT_CODE$="AN" !:
         else !:
            let TRADING_PARTNER$=SHIPPERH$(COMMUN_SH)(1:2) !:
            let FNREAD_NAME(COMMUN,SHIPPERH$(COMMUN_SH),0,112,2,FORMAT_CODE$)
28406    if TRIM$(FORMAT_CODE$)==NULL$ then !:
            let TRADING_PARTNER$=FORMAT_CODE$="AN"
28408    if NOT FNRESET(EQTM2,RPAD$(TRADING_PARTNER$,2)(1:2)&FORMAT_CODE$) then !:
            let TRADING_PARTNER$=FORMAT_CODE$="AN" !:
            let FNRESET(EQTM2,TRADING_PARTNER$&FORMAT_CODE$)
28410    do WHILE FNREAD_FILE(EQTM2,FORM$(EQTM_),NULL$,0,MAT EQTM$,MAT EQTM,0) AND EQTM$(2)==TRADING_PARTNER$ AND EQTM$(3)==FORMAT_CODE$
28412       let EQ$=EQTM$(4) !:
            let TM$=EQTM$(5) !:
            let TM_DESC$=EQTM$(6)
28414       let EQ_DESC$=NULL$ !:
            for DUMMY=1 to UDIM(EQ_DESC$) !:
               if EQ_DESC$(DUMMY)(1:2)==EQ$ then !:
                  let EQ_DESC$=EQ_DESC$(DUMMY)(3:LEN(EQ_DESC$(DUMMY))) !:
                  let DUMMY=UDIM(EQ_DESC$)+1
28416       next DUMMY
28418       let FNAPPENDS(MAT EQTM_PAS$,(RPAD$(EQ$,2)&_C$&RPAD$(EQ_DESC$,25)&_C$&RPAD$(TM$,2)&_C$&RPAD$(TM_DESC$,24)&_C$))
28420    loop 
28422    let DUMMY$=FNEITHER$(" ANSI "," "&SHIPPERH$(COMMUN_SH)&" ",TRADING_PARTNER$&FORMAT_CODE$=="ANAN")
28424    let DUMMY=FNPAS(WINDEX,MAT EQTM_PAS$,MAT EQTM_PAS_SPEC$,MAT LHLP$,CURRENT:=1,3,10,10,1,60,DUMMY$&" Equipment / Transportation Codes ","        H "," EC"&_C$&"Description              "&_C$&"TM"&_C$&"Description"&_C$,FRAME$,MAT WAIT) !:
         if CMDKEY~=9 then !:
            let SHIPPERH$(23)=EQTM_PAS$(DUMMY)(1:2) !:
            let SHIPPERH$(24)=EQTM_PAS$(DUMMY)(30:31) !:
            let FNZOOM=TRUE
28426    return 
28428 ! 
28430 Verify_Rc: ! *****
28432    def FNVERIFY_RC
28434       mat RC_DETAIL$(1)=(NULL$) !:
            let FNVERIFY_RC=TRUE !:
            let J=0 !:
            for I=1 to UDIM(LIST$)
28436          let PART$=RPAD$(LIST$(I)(1:15),15) !:
               let REV$=RPAD$(LIST$(I)(17:20),4) !:
               let PART_REV$=PART$&REV$ !:
               mat RC_DETAIL$(J+=1)
28438          if TRIM$(PART$)<>NULL$ AND TRIM$(PART$)<>"F" then ! Comments and freight
28440             let BLANKET_KEY$=RPAD$(CUSTOMER$,8)&RPAD$(DESTINATION$,9)&PART_REV$
28442             let FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),BLANKET_KEY$,0,MAT BLANKETL_TMP$,MAT BLANKETL_TMP,BLANKETL_)
28444             if BLANKETL_TMP$(2)(1:3)<>"RTN" then !:
                     let RC_DETAIL$(J)=PART_REV$&CNVRT$("pic(##)",BLANKETL_TMP(30))  !30 is rc group code in line item of order !:
                  else !:
                     let RC_DETAIL$(J)=PART_REV$&LIST$(I)(4:5)  !4:5 is rc group code
28446             let FNREAD_NAME(INVENT,STR$(SHIPPERH(21))&PART_REV$,0,111,2,UOM$) !:
                  let RC_DETAIL$(J)=RC_DETAIL$(J)&UOM$ !:
                  if RC_DETAIL$(J)(1:3)=="RTN" then !:
                     let RC_DETAIL$(J)=RC_DETAIL$(J)&" "&LIST$(I)(56:63)  !Uom and number of containers !:
                  else !:
                     let RC_DETAIL$(J)=RC_DETAIL$(J)&" "&LIST$(I)(65:72)  !Uom and number of container 1's
28448          else 
28450             let RC_DETAIL$(J)=FNEITHER$(LPAD$("C",21),LPAD$("F",21),(TRIM$(PART$)==NULL$))  !Make entry for comment or freight
28452          end if 
28454       next I
28456       mat RC_DETAIL(UDIM(RC_DETAIL$))
28458       if (FNVERIFY_RC:=FNCHECK_FRGHT_COMMENTS(MAT RC_DETAIL$,MAT RC_DETAIL))<>0 then !:
               let FNVERIFY_RC=FNCHECK_RC_SEQUENCE(MAT RC_DETAIL$,MAT RC_DETAIL)
28460    fnend 
28462 ! 
28464 Check_Frght_Comments: ! 
28466    def FNCHECK_FRGHT_COMMENTS(MAT RC_DETAIL$,MAT RC_DETAIL)
28468       let FNCHECK_FRGHT_COMMENTS=TRUE
28470       for I = UDIM(RC_DETAIL$) to 2 step -1
28472          if (POS_FC:=FNFIND_IN_MAT(MAT RC_DETAIL$,RPT$(" ",19),MAT RC_DETAIL,1)) then 
28474             for J=POS_FC to UDIM(RC_DETAIL$)
28476                if TRIM$(RC_DETAIL$(J)(1:19))<>NULL$ then 
28478                   if FNLINE_INPUT$(WINDEX,10,10,1,"Freight and Comments Should Be At End. Do You Want to Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:
                           let FNCHECK_FRGHT_COMMENTS=FALSE !:
                           let J=UDIM(RC_DETAIL$)+1 !:
                           let I=0 !:
                        else !:
                           let FNCHECK_FRGHT_COMMENTS=TRUE !:
                           let J=UDIM(RC_DETAIL$)+1 !:
                           let I=0
28480                end if 
28482             next J
28484          end if 
28486       next I
28488    fnend  !:
         ! 
28490 Check_Rc_Sequence: ! 
28492    def FNCHECK_RC_SEQUENCE(MAT RC_DETAIL$,MAT RC_DETAIL)
28494       let PREV_RC$=CUR_RC$=NULL$ !:
            let FNCHECK_RC_SEQUENCE=TRUE
28496       if RC_DETAIL$(1)(1:3)<>"RTN" AND (NOT POS("RCEX",RC_DETAIL$(1)(22:23))) then 
28498          rem if FNLINE_INPUT$(WINDEX,10,10,1,"First Entry Should Be a Container. Do You Want to Return to Detail?","Y",NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:                                                                              let FNCHECK_RC_SEQUENCE=FALSE
28500       else 
28502          let CUR_RC=VAL(RC_DETAIL$(1)(20:21)) !:
               let PREV_DETAIL_A_PART=FALSE !:
               let RC_COUNT=VAL(RC_DETAIL$(I)(24:32)) !:
               let PART_RC_COUNTS=0
28504          for I=2 to UDIM(RC_DETAIL$)
28505             if RC_DETAIL$(I)(20:21)=="00" then ! Ignore parts with 0 in rc code field!:
                     goto 28538
28506             if TRIM$(RC_DETAIL$(I)(1:19))==NULL$ then ! Comments and freight at end already verified  !:
                     let I=UDIM(RC_DETAIL$)+1 !:
                     goto 28538
28508             if RC_DETAIL$(I)(1:3)<>"RTN" then 
28510                let PREV_DETAIL_A_PART=TRUE !:
                     let PART_RC_COUNTS+=VAL(RC_DETAIL$(I)(24:32)) !:
                     if (VAL(RC_DETAIL$(I)(20:21)) <> CUR_RC) AND FNLINE_INPUT$(WINDEX,10,10,1,RC_DETAIL$(I)(1:15)&"Does Not Belong to Previous Container. Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:
                        let FNCHECK_RC_SEQUENCE=FALSE !:
                        let I=UDIM(RC_DETAIL$)+1
28511                if (I==UDIM(RC_DETAIL$)) AND (RC_COUNT<>PART_RC_COUNTS) AND FNLINE_INPUT$(WINDEX,10,10,1,"Container Quantities Do Not Match. Do You Want to Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:
                        let FNCHECK_RC_SEQUENCE=FALSE !:
                        let I=UDIM(RC_DETAIL$)+1 !:
                        !:
                        goto 28522
28512             else 
28514                if POS("RCEX",RC_DETAIL$(I)(22:23)) then 
28516                   if (PREV_DETAIL_A_PART=FALSE) AND FNLINE_INPUT$(WINDEX,10,10,1,"RC Group Error or Parts Missing for Container.  Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:
                           let FNCHECK_RC_SEQUENCE=FALSE !:
                           let I=UDIM(RC_DETAIL$)+1 !:
                           goto 28522
28518                   if RC_COUNT<>PART_RC_COUNTS AND FNLINE_INPUT$(WINDEX,10,10,1,"Container Quantities Do Not Match. Do You Want to Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:
                           let FNCHECK_RC_SEQUENCE=FALSE !:
                           let I=UDIM(RC_DETAIL$)+1 !:
                           !:
                           goto 28522
28520                   let CUR_RC=VAL(RC_DETAIL$(I)(20:21)) !:
                        let PREV_DETAIL_A_PART=FALSE !:
                        let RC_COUNT=VAL(RC_DETAIL$(I)(24:32)) !:
                        let PART_RC_COUNTS=0
28522                else 
28524                   let PART_RC=VAL(RC_DETAIL$(I)(20:21)) !:
                        if PART_RC AND (PART_RC<>CUR_RC) AND FNLINE_INPUT$(WINDEX,10,10,1,"Ret. Cntr. Accs. Out of Sequence. Do You Want to Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then 
28526                      let FNCHECK_RC_SEQUENCE=FALSE !:
                           let I=UDIM(RC_DETAIL$)+1
28528                   else 
28530                      if (PREV_DETAIL_A_PART=FALSE) AND FNLINE_INPUT$(WINDEX,10,10,1,"Parts Missing for Container. Do You Want to Return to Detail?",NULL$,NULL$,NULL$,"Warning: ","        H ",MAT WAIT)=="Y" then !:
                              let FNCHECK_RC_SEQUENCE=FALSE !:
                              let I=UDIM(RC_DETAIL$)+1
28532                   end if 
28534                end if 
28536             end if 
28538          next I
28540       end if 
28542    fnend  !:
         ! 
29050 ! 
29052 Availables: ! ***** Determine Avaible Fm Functions Per Security
29054    def FNAVAILABLE$*20(A$*20,USER$*8,LEVEL)
29056       let FNAVAILABLE$=A$             !Default !:
            if USER$><"root" then 
29058          do  !:
                  on LEVEL goto 29060,29062,29064,29066,29068,29070,29072 !:
                  exit do 
29060             exit do                   !Backup level
29062             let A$(1:1)=A$(2:2)=A$(3:3)=A$(4:4)=A$(6:6)=A$(7:7)=A$(8:8)=" " !:
                  exit do                   !Inquire level
29064             let A$(1:1)=A$(2:2)=A$(3:3)=A$(4:4)=A$(7:7)=A$(8:8)=" " !:
                  exit do                   !List level
29066             let A$(2:2)=A$(3:3)=A$(4:4)=A$(7:7)=A$(8:8)=" " !:
                  exit do                   !Add level
29068             let A$(2:2)=A$(4:4)=A$(7:7)=A$(8:8)=" " !:
                  exit do                   !Change level
29070             exit do                   !Delete level
29072             let A$(1:1)=A$(2:2)=A$(4:4)=A$(7:7)=A$(8:8)=" " !:
                  exit do                   !Change only level
29074          loop 
29076          let FNAVAILABLE$=A$
29078       end if 
29080 _End_Availables: fnend 
29082 ! 
29083 Match_Orderl_To_Shipperl: ! *****
29085    def FNMATCH_ORDERL_TO_SHIPPERL(ORDER_FILE,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,&ORDERL_REC)
29087       let FNMATCH_ORDERL_TO_SHIPPERL=FALSE !:
            let ORDERL_REC=0
29089       let DUMMY$=RPAD$(SHIPPERL$(PART_SL),15)&RPAD$(SHIPPERL$(REV_SL),4)&RPAD$(SHIPPERL$(ORDER_SL),8) !:
            if FNRESET(ORDERL2,DUMMY$) then 
29091          do WHILE FNREAD_FILE(ORDERL2,FORM$(ORDERL_),NULL$,0,MAT ORDERL$,MAT ORDERL,0) AND RPAD$(ORDERL$(PART_L),15)&RPAD$(ORDERL$(REV_L),4)&RPAD$(ORDERL$(ORDER_L),8)==DUMMY$
29093             if ORDERL(DATE_ADDED_L)==SHIPPERL(DATE_ADDED_SL) AND ORDERL(TIME_ADDED_L)==SHIPPERL(TIME_ADDED_SL) then !:
                     let FNMATCH_ORDERL_TO_SHIPPERL=TRUE !:
                     let ORDERL_REC=REC(ORDER_FILE) !:
                     exit do 
29095          loop 
29097       end if 
29099    fnend  !:
         ! 
29100 Write: ! ***** Write Master File Record
29120    def FNWRITE(FILENO,&FORM$,MAT F$,MAT F,SWITCH)
29140       let FNWRITE=DUMMY=(NOT SWITCH) OR FNPACK(SWITCH,MAT F$,MAT F)  !Return !:
            if DUMMY then !:
               write #FILENO,using FORM$: MAT F$,MAT F
29160       if SWITCH then !:
               let FNUNPACK(SWITCH+.1,MAT F$,MAT F)
29180 _End_Write: fnend  !:
         ! 
29200 Verify_Carr_Comm_Eqtm: ! 
29202    do                                 !Edit carrier,comm code, eq and tm
29203       let CARRIER1$=TRIM$(F$(PICKUP_SH)) : let CARR1_FLD=20 !:
            let CARRIER2$=TRIM$(F$(CARRIER_SH)) : let CARR2_FLD=21 !:
            let COMMCODE$=TRIM$(F$(COMMUN_SH)) : let COMM_FLD=19 !:
            let TP$=TRIM$(F$(COMMUN_SH)(1:2)) !:
            let EQ$=TRIM$(F$(EQUIP_SH)) : let EQTM_FLD=27 !:
            let TM$=TRIM$(F$(MODE_SH))
29205 ! 
29206       if COMMCODE$<>NULL$ AND NOT FNRESET(COMMUN,COMMCODE$) then !:
               let FNEDIT=~FNEDIT_SET(COMM_FLD,MAT H$,MASK$,"1;CommCode is Not in the Commun File;") !:
               exit do 
29207       if COMMCODE$<>NULL$ AND COMMCODE$(1:2)<>SHIPPERH$(CUSTOMER_SH)(1:2) then !:
               let FNMESSAGE(WINDEX,10,5,"CommCode Trading Partner Does Not Match Customer.","Warning") !:
               let CMDKEY(10)               !Only get here by f10 and message is resetting it. !:
               ! 
29208       if CARRIER1$==NULL$ then !:
               let FNEDIT=~FNEDIT_SET(CARR1_FLD,MAT H$,MASK$,"1;Pickup Carrier Code Required.;") !:
               exit do  !:
            else !:
               if NOT FNRESET(CARRIER,CARRIER1$) then !:
                  let FNEDIT=~FNEDIT_SET(CARR1_FLD,MAT H$,MASK$,"1;Pickup Carrier is Not in the Carrier File;") !:
                  exit do 
29210       if CARRIER2$==NULL$ then !:
               let FNEDIT=~FNEDIT_SET(CARR2_FLD,MAT H$,MASK$,"1;Delivery Carrier Code Required.;") !:
               exit do  !:
            else !:
               if NOT FNRESET(CARRIER,CARRIER2$) then !:
                  let FNEDIT=~FNEDIT_SET(CARR2_FLD,MAT H$,MASK$,"1;Delivery Carrier is Not in the Carrier File;") !:
                  exit do  !:
                  ! 
29236       if NOT FNRESET(CARRIER,RPAD$(CARRIER2$,4)&TP$) then !:
               let FNEDIT=~FNEDIT_SET(CARR2_FLD,MAT H$,MASK$,"1;Carrier/Trading Partner Combo is Not in the Carrier File;") !:
               exit do 
29241 ! 
29242       if COMMCODE$<>NULL$ then !:
               let FNREAD_NAME(COMMUN,COMMCODE$,0,112,2,FC$) !:
            else !:
               let TP$=FC$="AN"
29243       if TRIM$(FC$)==NULL$ then !:
               let TP$=FC$="AN"
29246       if NOT FNRESET(EQTM2,RPAD$(TP$,2)&FC$) then !:
               let FNRESET(EQTM2,"ANAN") !:
               let TP$=FC$="AN"
29248       let FOUND_EQTM=FALSE !:
            do WHILE FNREAD_FILE(EQTM2,FORM$(EQTM_),NULL$,0,MAT EQTM$,MAT EQTM,0) AND TRIM$(EQTM$(2))==TP$ AND TRIM$(EQTM$(3))==FC$
29250          if TRIM$(EQTM$(4))==EQ$ AND TRIM$(EQTM$(5))==TM$ then !:
                  let FOUND_EQTM=TRUE !:
                  exit do 
29252       loop 
29254       if COMMCODE$<>NULL$ AND FOUND_EQTM==FALSE then !:
               let FNEDIT=~FNEDIT_SET(EQTM_FLD,MAT H$,MASK$,"1;Eq/Tm Not Found in the EQTM File.;") !:
               exit do 
29258       exit do 
29260    loop 
29262    return  !:
         ! 
29500 ! 
29600 Rewrite: ! ***** Rewrite Master File Record
29620    def FNREWRITE(FILENO,&FORM$,KEY$*64,RECORD,MAT F$,MAT F,SWITCH)
29640       let FNREWRITE=0                 !Assume error !:
            if (NOT SWITCH) OR FNPACK(SWITCH,MAT F$,MAT F) then !                               Pack data
29660          if KEY$>NULL$ then !:
                  rewrite #FILENO,using FORM$,key=RPAD$(KEY$,KLN(FILENO)): MAT F$,MAT F error _End_Rewrite !:
               else !:
                  if RECORD then !:
                     rewrite #FILENO,using FORM$,rec=RECORD: MAT F$,MAT F error _End_Rewrite !:
                  else !:
                     rewrite #FILENO,using FORM$: MAT F$,MAT F error _End_Rewrite
29680          if SWITCH then !:
                  let FNUNPACK(SWITCH+.1,MAT F$,MAT F)
29700          let FNREWRITE=SWITCH+(SWITCH==0)  !Success !:
            end if 
29720 _End_Rewrite: fnend 
29800 ! 
29802 Delete2: ! ***** Special Delete Function
29804    def FNDELETE2(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,KEY_$*64,FUNCTION$*20,SWITCH,PRINTER,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
29806       let FNDELETE2=FALSE             !Assume cancel !:
            do  !:
               if KEY_$><"*" then !                               Special key
29808             let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                  let FNSPLIT_KEY(SWITCH,KEY_$,MAT F$,MAT F) !:
                  do  !:
                     let _KEY$=KEY_$        !Default !:
                     if LEN(_KEY$)<KLN(FILENO) AND KEY_$><"*" then !:
                        let _KEY$=FNPROMPT$(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,4,"  Z     HF",SWITCH,MAT MASK$,MAT WAIT)
29810                let WORK=(FNREAD_FILE(FILENO,FORM$,_KEY$,0,MAT F$,MAT F,SWITCH))  !Boolean !:
                     if (NOT WORK) AND _KEY$>NULL$ then !:
                        let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' not on file.") !:
                     else !:
                        if (NOT WORK) then !:
                           let FNBLURB("End of file.")
29812             loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR WORK)
29814          end if 
29816          let DUMMY=((LEN(KEY_$)==KLN(FILENO))) !:
               if ((NOT DUMMY) AND CMDKEY><9) OR (DUMMY AND WORK) OR KEY_$="*" then 
29820 ! 
29822 _Delete2_Loop: ! ***** Main Driver
29824             do  !:
                     let FNDISPLAY(WINDOW,SWITCH,MAT SPEC$,MAT F$,MAT F)
29826                let _DELETE$=FNREAD$("Delete This Shipper (Inventory not affected):","N","Enter Yes to Delete Shipper or No to Leave Shipper on File.",NULL$,COMMENTR,COMMENTC,1,FUNCTION$,MAT WAIT) !:
                     if CMDKEY><9 AND CMDKEY AND FNCMDKEY(FUNCTION$,CMDKEY) then !:
                        let FNADDENDA(SWITCH,2)  !Inquire addenda !:
                        let CMDKEY(0)       !Clear !:
                        let _DELETE$=NULL$  !Clear
29828             loop UNTIL (((NOT CMDKEY) AND POS("YN",_DELETE$,1)) OR CMDKEY=9)
29830             let FNBLURB(NULL$) !:
                  if CMDKEY><9 then 
29832                if _DELETE$="Y" then 
29836                   if FNADDENDA(SWITCH,2) then !:
                           let KEY$=FNKEY$(SWITCH,MAT F$,MAT F) !:
                           delete #FILENO,key=KEY$: !:
                           let FNBLURB("Shipper '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' deleted.") !:
                           let FNDELETE2=TRUE !:
                        else !:
                           let FNADDENDA(SWITCH,-2)
29838                else 
29840                   reread #FILENO,release: 
29842                end if 
29844             else 
29846                reread #FILENO,release: 
29848                let FNBLURB("Deletion of shipper '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' cancelled.") !:
                     if NOT (LEN(KEY_$)=KLN(FILENO) AND KEY_$="*") then !:
                        let CMDKEY(0)       !Continue do
29850             end if 
29852          end if 
29854       loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR KEY_$="*")
29856       let FNADDENDA(SWITCH,10.4)      !Final addenda
29858 _End_Delete2: fnend 
30600 ! 
30602 Append: ! ***** Add Element To Array
30604    def FNAPPEND(MAT F,ARGUMENT)
30606       let FNAPPEND=0                  !Default
30608       let DUMMY=UDIM(F)               !Current size !:
            if DUMMY=1 AND F(1)=0 then !:
               let F(1)=ARGUMENT            !Start empty array !:
            else !:
               let DUMMY+=1                 !Increment !:
               mat F(DUMMY)                 !New size !:
               let F(DUMMY)=ARGUMENT        !Add element
30610       let FNAPPEND=DUMMY              !New size
30612 _End_Append: fnend 
30700 ! 
30702 Append_Mat: ! ***** Append Numeric Arrays
30704    def FNAPPEND_MAT(MAT F,MAT G)
30706       let FNAPPEND_MAT=TRUE           !Assume success !:
            let WORK=UDIM(F)                !Original size !:
            let DUMMY=UDIM(G)               !Added size !:
            mat F(WORK+DUMMY)               !Resize !:
            mat F(WORK+1:WORK+DUMMY)=G      !Copy
30708 _End_Append_Mat: fnend 
30800 ! 
30802 Append_Mats: ! ***** Append String Arrays
30804    def FNAPPEND_MATS(MAT F$,MAT G$)
30806       let FNAPPEND_MATS=TRUE          !Assume success !:
            let WORK=UDIM(F$)               !Original size !:
            let DUMMY=UDIM(G$)              !Added size !:
            mat F$(WORK+DUMMY)              !Resize !:
            mat F$(WORK+1:WORK+DUMMY)=G$    !Copy
30808 _End_Append_Mats: fnend 
30900 ! 
30902 Appends: ! ***** Add Element To String Array
30904    def FNAPPENDS(MAT F$,STRING$*256)
30906       let FNAPPENDS=0                 !Default
30908       let DUMMY=UDIM(F$)              !Current size !:
            if DUMMY=1 AND F$(1)=NULL$ then !:
               let F$(1)=STRING$            !Start empty array !:
            else !:
               let DUMMY+=1                 !Increment !:
               mat F$(DUMMY)                !New size !:
               let F$(DUMMY)=STRING$        !Add element
30910       let FNAPPENDS=DUMMY             !New size
30912 _End_Appends: fnend 
31900 ! 
31902 Blank: ! ***** Blank Screen Data
31904    def FNBLANK(_SWITCH,MAT F$,MAT F,_COMMENT,_BLURB,_FUNCTION)
31906       let FNBLANK=TRUE                !Assume success
31908       if _SWITCH then !:
               let FNCLEAR(_SWITCH,MAT F$,MAT F)
31910       if _COMMENT then !:
               let FNBLURB(NULL$)
31912       if _BLURB then !:
               let FNERROR(NULL$)
31914       if _FUNCTION then !:
               let FNFUNCTION("          ")
31916 _End_Blank: fnend 
32000 ! 
32002 Blurb: ! ***** Display Error Message
32004    def FNBLURB(TEXT$*80)
32006       let FNBLURB=TRUE                !Success !:
            print #125,fields FNFIELD_G$(1,1,COMMENTL,"H"): TEXT$(1:COMMENTL)
32008 _End_Blurb: fnend 
33100 ! 
33102 Captions: ! ***** Return Filled Caption
33104    def FNCAPTION$*512(CAPTION$*256,STRING$*256)
33106       let FNCAPTION$=(CAPTION$&STRING$)(1:9999*(STRING$>NULL$))
33108 _End_Captions: fnend 
33500 ! 
33502 Cmdkey: ! ***** Verify Command Key
33504    def FNCMDKEY(FUNCTION$*20,CMD_KEY)=(FUNCTION$(CMD_KEY:CMD_KEY)>" ")
33600 ! 
33602 Compare: ! ***** Compare Strings For Search
33604    def FNCOMPARE(STRING$*80,FIND$*80)
33606       let FNCOMPARE=FALSE             !Assume no match !:
            let DUMMY=LEN(FIND$)            !Search string length
33608       if FIND$(1:1)="'" then !:
               let FNCOMPARE=(POS(STRING$,FIND$(2:99),1)>0)  !Partial match !:
            else !:
               let FNCOMPARE=(STRING$(1:DUMMY)==FIND$)  !Match
33610 _End_Compare: fnend 
33700 ! 
33702 Compress_Mat: ! ***** Compress Out Mat Elements
33704    def FNCOMPRESS_MAT(MAT G,MAT F)
33706       let FNCOMPRESS_MAT=FALSE        !Assume error !:
            if UDIM(F)><UDIM(G) OR NOT SUM(F) then 
33708          mat G(1)=(0)                 !Null array
33710       else 
33712          let DUMMY=0                  !Set pointer !:
               for __=1 to UDIM(G) !:
                  if F(__) then !:
                     let G(DUMMY+=1)=G(__)  !Increment and save
33714          next __ !:
               mat G(DUMMY)                 !Resize !:
               let FNCOMPRESS_MAT=DUMMY     !Return value
33716       end if 
33718 _End_Compress_Mat: fnend 
33800 ! 
33802 Compress_Mats: ! ***** Compress Out Mat Elements
33804    def FNCOMPRESS_MATS(MAT F$,MAT F)
33806       let FNCOMPRESS_MATS=FALSE       !Assume error !:
            if UDIM(F)><UDIM(F$) OR NOT SUM(F) then 
33808          mat F$(1)=(NULL$)            !Null array
33810       else 
33812          let DUMMY=0                  !Set pointer !:
               for __=1 to UDIM(F$) !:
                  if F(__) then !:
                     let F$(DUMMY+=1)=F$(__)  !Increment and save
33814          next __ !:
               mat F$(DUMMY)                !Resize !:
               let FNCOMPRESS_MATS=DUMMY    !Return value
33816       end if 
33818 _End_Compress_Mats: fnend 
34800 ! 
34802 Delete: ! ***** Delete Function
34804    def FNDELETE(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,KEY_$*64,FUNCTION$*20,SWITCH,PRINTER,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
34806       let FNDELETE=FALSE              !Assume cancel !:
            do  !:
               if KEY_$><"*" then !                               Special key
34808             let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                  let FNSPLIT_KEY(SWITCH,KEY_$,MAT F$,MAT F) !:
                  do  !:
                     let _KEY$=KEY_$        !Default !:
                     if LEN(_KEY$)<KLN(FILENO) AND KEY_$><"*" then !:
                        let _KEY$=FNPROMPT$(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,4,"  Z     HF",SWITCH,MAT MASK$,MAT WAIT)
34810                let WORK=(FNREAD_FILE(FILENO,FORM$,_KEY$,0,MAT F$,MAT F,SWITCH))  !Boolean !:
                     if (NOT WORK) AND _KEY$>NULL$ then !:
                        let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' not on file.") !:
                     else !:
                        if (NOT WORK) then !:
                           let FNBLURB("End of file.")
34812             loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR WORK)
34814          end if 
34816          let DUMMY=((LEN(KEY_$)==KLN(FILENO))) !:
               if ((NOT DUMMY) AND CMDKEY><9) OR (DUMMY AND WORK) OR KEY_$="*" then 
34818             if AUDIT(SWITCH) then !:
                     print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' selected for delete. "&TIME$&" **",1,"'' ",NULL$),TAB(2) !:
                     let FNDETAIL(SWITCH,PRINTER,MAT F$,MAT F,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT)
34820 ! 
34822 _Delete_Loop: ! ***** Main Driver
34824             do  !:
                     let FNDISPLAY(WINDOW,SWITCH,MAT SPEC$,MAT F$,MAT F)
34826                if SWITCH=1 AND F(ASN_DATE_SH) then !:
                        let FNBLURB(BLINK$&"WARNING:"&NORMAL$&" ASN has been transmitted. Press F9 to abandon delete.") !:
                        let FNSELECT("        HC") !:
                        let FNBLURB(NULL$) !:
                        on CMDKEY==9 goto 34830
34827                if SWITCH=1 AND F(PRINTED_SH) then !:
                        let FNBLURB(BLINK$&"WARNING:"&NORMAL$&" Shipper has been printed.") !:
                        let FNSELECT("        HC") !:
                        let FNBLURB(NULL$) !:
                        on CMDKEY==9 goto 34830
34828                let _DELETE$=FNREAD$("Delete This Record:","N","Enter Yes to Delete Record or No to Leave Record on File.",NULL$,COMMENTR,COMMENTC,1,FUNCTION$,MAT WAIT) !:
                     if CMDKEY><9 AND CMDKEY AND FNCMDKEY(FUNCTION$,CMDKEY) then !:
                        let FNADDENDA(SWITCH,5)  !Inquire addenda !:
                        let CMDKEY(0)       !Clear !:
                        let _DELETE$=NULL$  !Clear
34830             loop UNTIL (((NOT CMDKEY) AND POS("YN",_DELETE$,1)) OR CMDKEY=9)
34831             let FNBLURB(NULL$) !:
                  if CMDKEY><9 then 
34832                if _DELETE$="Y" then 
34834                   if AUDIT(SWITCH) then !:
                           print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' deleted. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
34836                   if FNADDENDA(SWITCH,4) then !:
                           let KEY$=FNKEY$(SWITCH,MAT F$,MAT F) !:
                           delete #FILENO,key=KEY$: !:
                           let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' deleted.") !:
                           let FNDELETE=TRUE !:
                        else !:
                           let FNADDENDA(SWITCH,-4)
34838                else 
34840                   reread #FILENO,release: !:
                        if AUDIT(SWITCH) then !:
                           print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' NOT deleted. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
34842                end if 
34844             else 
34846                reread #FILENO,release: !:
                     if AUDIT(SWITCH) then !:
                        print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' NOT deleted. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
34848                let FNBLURB("Deletion of record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' cancelled.") !:
                     if NOT (LEN(KEY_$)=KLN(FILENO) AND KEY_$="*") then !:
                        let CMDKEY(0)       !Continue do
34850             end if 
34852          end if 
34854       loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR KEY_$="*")
34856       let FNADDENDA(SWITCH,10.4)      !Final addenda
34858 _End_Delete: fnend 
34900 ! 
34902 Delete_Key: ! ***** Delete Keyed Records
34904    def FNDELETE_KEY(FILENO,KEY$*64)
34906       let FNDELETE_KEY=FALSE          !Assume error
34908       if FNRESET(FILENO,KEY$) then !:
               do  !:
                  read #FILENO: error _End_Delete_Key  !Lock record !:
                  delete #FILENO:           !Delete it !:
                  let FNDELETE_KEY=TRUE     !Success !:
               loop UNTIL (NOT FNRESET(FILENO,KEY$))
34910 _End_Delete_Key: fnend 
35000 ! 
35002 Delimit: ! ***** Point To Next Delimiter
35004    def FNDELIMIT(&F$,DELIMITER$*1,QUOTE$*8,UNQUOTE$*8)
35006       let FNDELIMIT=-1                !Assume error !:
            if LEN(QUOTE$)><LEN(UNQUOTE$) then !:
               let UNQUOTE$=QUOTE$          !Default unquotes
35008       if DELIMITER$=" " then !   Special delimiter !:
               let DUMMY$=F$                !Work copy !:
            else !:
               let DUMMY$=LTRM$(F$)         !Work copy
35010       do WHILE (DUMMY:= POS(QUOTE$,DUMMY$(1:1),1)) !:
               let DUMMY=POS(DUMMY$,UNQUOTE$(DUMMY:DUMMY),2)  !Find unquote !:
               if DUMMY then !:
                  let DUMMY$(1:DUMMY)=NULL$  !Whittle quoted !:
               else !:
                  exit do                   !Unbalanced quotes
35012          if DELIMITER$=" " then !   Special delimiter !:
                  let DUMMY$=LTRM$(DUMMY$)  !Drop leading blanks
35014       loop 
35016       let DUMMY=LEN(F$)-LEN(DUMMY$)+1  !Calculate offset !:
            let FNDELIMIT=POS(F$,DELIMITER$,DUMMY)  !Delimiter past quote
35018 _End_Delimit: fnend 
35100 ! 
35102 Dir_Mat: ! ***** Make Directory List
35104    def FNDIR_MAT(FILENO,PATH$*32,MASK$*18,MAT F$)
35106       let FNDIR_MAT=0                 !Assume none !:
            let DUMMY$=PATH$&"\"&MASK$ !:
            execute "Dir "&DUMMY$&" >X."&WSID$&" -N" error _End_Dir_Mat !:
            open #FILENO: "Name= X.[WSID]",display,input  !:
            linput #FILENO: DUMMY$          !Skip header !:
            let DUMMY=0                     !Clear counter
35108       do  !:
               linput #FILENO: DUMMY$ eof _Exit_Dir_Mat !:
               if DUMMY$>NULL$ AND NOT POS(DUMMY$,"<DIR>",14) then !:
                  let DUMMY+=1              !Increment !:
                  let F$(DUMMY)=RTRM$(RTRM$(DUMMY$(1:8))&"."&DUMMY$(11:13)) !:
                  let F$(DUMMY)=SREP$(F$(DUMMY),LEN(F$(DUMMY)),".",NULL$)
35110       loop UNTIL (DUMMY>=UDIM(F$))
35112 ! 
35114 _Exit_Dir_Mat: ! ***** Exit
35116       mat F$(MAX(1,DUMMY-1))          !Final size !:
            close #FILENO,free:             !Remove work file !:
            let FNDIR_MAT=UDIM(F$)
35118 _End_Dir_Mat: fnend 
35200 ! 
35202 Display_Window: ! ***** Display And Leave Window
35204    def FNDISPLAY_WINDOW(&WINDOW,ROW,COLUMN,MESSAGE$*512,TITLE$*64)
35206       let FNDISPLAY_WINDOW=TRUE       !Assume success !:
            let DUMMY=MAX(LEN(MESSAGE$)+2,LEN(TITLE$)+2) !:
            let FNMAKE_FRAME(MAT DUMMY$,5,DUMMY+2,"ɼ",TITLE$) !:
            let DUMMY$(3)(2:LEN(MESSAGE$)+3)=HEX$("E4")&MESSAGE$&HEX$("E0")
35208       let FNPUSH_WINDOW(WINDOW,MAT DUMMY$,ROW,COLUMN,5,LEN(DUMMY$(1)),NULL$,NULL$,NULL$)
35210 _End_Display_Window: fnend 
35300 ! 
35302 Dissect: ! ***** Dissect String
35304    def FNDISSECT(STRING$*512,MAT F$,DELIMITER$*1,QUOTE$*8,UNQUOTE$*8)
35306       let FNDISSECT=0 !:
            if UDIM(F$)=1 then !:
               mat F$(IP(LEN(STRING$)/2)+1)=(NULL$)  !Approximate size
35308       let STRING$=STRING$&DELIMITER$  !Final delimiter !:
            let WORK=0                      !Clear counter !:
            do WHILE ((WORK+=1)<=UDIM(F$)) !:
               let F$(WORK)=FNTAKE$(STRING$,FNDELIMIT(STRING$,DELIMITER$,QUOTE$,UNQUOTE$)-1) !:
               let STRING$(1:1)=NULL$       !Drop delimiter !:
            loop UNTIL (STRING$=NULL$)
35310       let FNDISSECT=MIN(WORK,UDIM(F$))  !Return value
35312 _End_Dissect: fnend 
35500 ! 
35502 Drop_Same: ! ***** Remove Duplicate Elements
35504    def FNDROP_SAME(MAT F$)
35506       let FNDROP_SAME=FALSE           !Assume no change !:
            if FNSAME_ELEMENTS(MAT F$,MAT DUMMY) then ! Search for dupes !:
               let FNNOT_MAT(MAT DUMMY)     !Flip logic !:
               let FNCOMPRESS_MATS(MAT F$,MAT DUMMY)  !Drop same !:
               mat DUMMY(1)                 !Save memory !:
               let FNDROP_SAME=TRUE         !Array changed
35508 _End_Drop_Same: fnend 
36200 ! 
36202 Edit_Time: ! ***** Edit Time Data
36204    def FNEDIT_TIME(HHMMSS)
36206       let FNEDIT_TIME=FALSE           !Assume error !:
            if HHMMSS>=0 OR HHMMSS<=240000 then 
36208          if IP(FP(HHMMSS/1E4)*100)<60 AND IP(FP(HHMMSS/100)*100)<60 then !:
                  let FNEDIT_TIME=TRUE      !Success
36210       end if 
36212 _End_Edit_Time: fnend 
36300 ! 
36302 Edit_Set: ! ***** Set Edit Error Conditions
36304    def FNEDIT_SET(FIELD,MAT H$,&MASK$,MESSAGE$*1024)
36306       let FNEDIT_SET=TRUE             !Assume success !:
            let CURFLD(FIELD) !:
            let H$(FIELD)=MESSAGE$ !:
            let MASK$(FIELD:FIELD)=SREP$(MASK$(FIELD:FIELD),1,"1","0")
36307       let CURRENT_=FIELD
36308 _End_Edit_Set: fnend 
36500 ! 
36502 Either: ! ***** Return Either Or
36504    def FNEITHER(TRUE,FALSE,BOOLEAN)=TRUE*(BOOLEAN><0)+FALSE*(~BOOLEAN)
36506 _End_Either: ! C91 Mwr
36600 ! 
36602 Eithers: ! ***** Return Either Or
36604    def FNEITHER$*256(TRUE$*256,FALSE$*256,BOOLEAN)
36606       let FNEITHER$=TRUE$(1:999*(BOOLEAN))&FALSE$(1:999*(~BOOLEAN))
36608 _End_Eithers: fnend 
36700 ! 
36702 Enter_Other: ! ***** Alternate Window
36704    def FNENTER_OTHER(&WINDOW,SWITCH,FILENO,SCREEN$*8,&ROW,&COLUMN,&ROWS,&COLUMNS,MAT F$,MAT F,MAT A$,MAT B$,MAT C$,MAT D$,MASK$*99,FUNCTION$*20)
36706       let FNENTER_OTHER=FALSE         !Assume error !:
            let FNRESTORE_WINDOW(FILENO,SCREEN$,ROW,COLUMN,ROWS,COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$) !:
            let FNPUSH_WINDOW(WINDOW,MAT A$,ROW,COLUMN,ROWS,COLUMNS,NULL$,NULL$,NULL$)
36708       do  !:
               let FNENTER(WINDOW,SWITCH,MAT B$,MAT D$,MAT F$,MAT F,MAX(1,EDI_CURSOR),MASK$,FUNCTION$,MAT WAIT) !:
               let WORK=(CMDKEY==9) OR FNEDIT(SWITCH,MAT F$,MAT F,MAT D$,MASK$) !:
            loop UNTIL (WORK AND FNCMDKEY(FUNCTION$,CMDKEY))
36710       let FNPOP_WINDOW(WINDOW,1,OFF) !:
            let FNENTER_OTHER=TRUE          !Success
36712 _End_Enter_Other: fnend 
36800 ! 
36802 Error: ! ***** Display Error Message
36804    def FNERROR(TEXT$*80)
36806       let FNERROR=TRUE                !Success !:
            print #127,fields FNFIELD_G$(1,1,COMMENTL,"H"): TEXT$(1:COMMENTL)
36808 _End_Error: fnend 
36900 ! 
36902 Expands: ! ***** Expand Number
36904    def FNEXPAND$*15(STRING$*15,_LEN)
36906       let STRING$=LTRM$(RTRM$(STRING$))  !Condition !:
            let FNEXPAND$=STRING$           !Default !:
            if LEN(STRING$)<_LEN then 
36908          for ____=LEN(STRING$) to 1 step -1 !:
                  let DUMMY$=STRING$(____:____)  !Current character !:
                  if DUMMY$<"0" OR DUMMY$>"9" then !:
                     let DUMMY$=STRING$(1:____)  !Base !:
                     let DUMMY=VAL(STRING$(____+1:9999))  !Number !:
                     let DUMMY$(9999:0)=CNVRT$("ZD "&STR$(_LEN-____),DUMMY) !:
                     let FNEXPAND$=DUMMY$ !:
                     goto _End_Expands
36910          next ____ !:
               let FNEXPAND$=RPT$("0",_LEN-LEN(STRING$))&STRING$
36912       end if 
36914 _End_Expands: fnend 
37000 ! 
37002 Expand_Mat: ! ***** Expand Mat Elements
37004    def FNEXPAND_MAT(MAT G,MAT F,ZERO)
37006       let FNEXPAND_MAT=FALSE          !Assume error !:
            if UDIM(F)>=UDIM(G) AND SUM(F)=UDIM(G) then 
37008          mat DUMMY(UDIM(F))=(ZERO) !:
               let DUMMY=0                  !Clear pointer !:
               for WORK=1 to UDIM(DUMMY) !:
                  if F(WORK) then !:
                     let DUMMY(WORK)=G(DUMMY+=1)  !Increment and save
37010          next WORK !:
               mat G(UDIM(DUMMY))=DUMMY     !Resize !:
               let FNEXPAND_MAT=UDIM(G)
37012       end if 
37014 _End_Expand_Mat: fnend 
37100 ! 
37102 Expand_Mats: ! ***** Expand Mat Elements
37104    def FNEXPAND_MATS(MAT F$,MAT F,&NULL$)
37106       let FNEXPAND_MATS=0             !Assume error !:
            if UDIM(F)>=UDIM(F$) AND SUM(F)=UDIM(F$) then 
37108          mat DUMMY$(UDIM(F))=(NULL$) !:
               let DUMMY=0                  !Clear pointer !:
               for WORK=1 to UDIM(DUMMY$) !:
                  if F(WORK) then !:
                     let DUMMY$(WORK)=F$(DUMMY+=1)  !Increment and save
37110          next WORK !:
               mat F$(UDIM(DUMMY$))=DUMMY$  !Resize !:
               let FNEXPAND_MATS=UDIM(F$)
37112       end if 
37114 _End_Expand_Mats: fnend 
37200 ! 
37202 Extracts: ! ***** Extract String
37204    def FNEXTRACT$*255(STRING$*255,LENGTH,POSITION)
37206       let DUMMY=(POSITION-1)*LENGTH+1 !:
            let FNEXTRACT$=STRING$(DUMMY:DUMMY+LENGTH-1)
37208 _End_Extracts: fnend 
37300 ! 
37302 Execute: ! ***** Execute Single Command
37304    def FNEXECUTE(COMMAND$*1024)
37306       let FNEXECUTE=FALSE             !Assume error !:
            do  !:
               execute COMMAND$ error _Exit_Execute !:
               let FNEXECUTE=TRUE           !Success !:
               exit do 
37308 ! 
37310 _Exit_Execute: ! ***** Exit
37312          let FNEXECUTE=-ERR           !Return error !:
               exit do 
37314       loop 
37316 _End_Execute: fnend 
38000 ! 
38002 Fields: ! ***** Create Fields String
38004    def FNFIELD$*18(ROW,COLUMN,LENGTH,SPEC$*10)
38006       let SPEC$=FNEITHER$(","&SPEC$,",N",(SPEC$>NULL$)) !:
            let FNFIELD$=CNVRT$("N 2",ROW)&","&CNVRT$("N 2",COLUMN)&",VU "&CNVRT$("N 2",LENGTH)&SPEC$
38008 _End_Fields: fnend 
38100 ! 
38102 Field_Count: ! ***** Count Fields To Enter
38104    def FNFIELD_COUNT(MASK$*128,MAXIMUM)
38106       let FNFIELD_COUNT=0             !Default !:
            let MASK$=SREP$(RPAD$(MASK$,MAXIMUM),1," ","0") !:
            let MASK$=SREP$(MASK$,1,"1",NULL$) !:
            let MASK$=SREP$(MASK$,1,"0","1") !:
            if FNVERIFY(MASK$) then !:
               let FNFIELD_COUNT=LEN(MASK$)  !Fields
38108 _End_Field_Count: fnend 
38200 ! 
38202 Field_Gs: ! ***** Build Generic Field Spec
38204    def FNFIELD_G$*32(ROW,COLUMN,LENGTH,ATTRIBUTE$*18)
38206       let FNFIELD_G$=NULL$            !Default !:
            let DUMMY$=(","&ATTRIBUTE$)(1:99*(ATTRIBUTE$>NULL$)) !:
            let DUMMY$(1:0)=",G "&CNVRT$("N 5.1",LENGTH) !:
            let DUMMY$(1:0)=CNVRT$("ZD 2",COLUMN) !:
            let DUMMY$(1:0)=CNVRT$("Pic(##,)",ROW) !:
            let FNFIELD_G$=DUMMY$
38208 _End_Field_Gs: fnend 
38400 ! 
38402 Find_All: ! ***** Find Data For Matching Key
38404    def FNFIND_ALL(FILENO,KEY$*64,POSITION,LENGTH,MAT F$)
38406       let FIND_ALL=0                  !Assume none !:
            if FNRESET(FILENO,KEY$) then 
38408          let DUMMY=KPS(FILENO)        !Cform$ follows !:
               let WORK=MAX(1,LEN(KEY$))    !Cform$ follows !:
               let WORK$=CFORM$("form POS POSITION,G LENGTH,POS "&STR$(DUMMY)&",G "&STR$(WORK))
38410          let WORK=0                   !Prime counter !:
               do WHILE ((WORK+=1)<=UDIM(F$)) !:
                  read #FILENO,using WORK$,release: F$(WORK),DUMMY$ eof _Exit_Find_All !:
               loop UNTIL (KEY$>NULL$ AND DUMMY$><KEY$)
38412 ! 
38414 _Exit_Find_All: ! ***** Exit
38416          mat F$(MAX(1,WORK-=1))       !Size !:
               let FNFIND_ALL=WORK          !Success
38418       end if 
38420 _End_Find_All: fnend 
38700 ! 
38702 Find_All_Rec: ! ***** Find Data For Relative Records
38704    def FNFIND_ALL_REC(FILENO,START,END,POSITION,LENGTH,MAT F$)
38706       let FIND_ALL_REC=0              !Assume error !:
            let START=MAX(1,START) !:
            if NOT END then !:
               let END=LREC(FILENO)
38708       let WORK=LEN(STR$(END))         !Key length !:
            restore #FILENO,rec=START: norec _End_Find_All_Rec !:
            mat F$(END-START+1) !:
            for LOOP__=START to END !:
               let DUMMY=LOOP__-START+1 !:
               read #FILENO,using 38712,release: F$(DUMMY) eof _Exit_Find_All_Rec
38710          let F$(DUMMY)(1:0)=LPAD$(STR$(LOOP__),WORK)&FNEITHER$(_C$,": ",GUI_MODE) !:
               let F$(DUMMY)=F$(DUMMY)&FNEITHER$(_C$,"",GUI_MODE) !:
            next LOOP__
38712       form POS POSITION,C LENGTH
38714 ! 
38716 _Exit_Find_All_Rec: ! ***** Exit
38718       let DUMMY=LOOP__-START !:
            mat F$(MAX(1,DUMMY)) !:
            let FNFIND_ALL_REC=DUMMY
38720 _End_Find_All_Rec: fnend 
39300 ! 
39302 Fm: ! ***** Maintenance Driver  (Note: Audit And List Removed)
39304    def FNFM(&WINDOW,SWITCH,FILENO,&FORM$,MAT F$,MAT F,SCREENFILE,SCREEN$*8,&ROW,&COLUMN,&ROWS,&COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$,MAT H$,MAT MASK$,_KEY_$*64,_FUNCTION,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
39306       let FNFM=FALSE                  !Assume error !:
            if SWITCH>0 then !                               No push flag !:
               let FNRESTORE_WINDOW(SCREENFILE,SCREEN$,ROW,COLUMN,ROWS,COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$) !:
               let FNPUSH_WINDOW(WINDOW,MAT A$,ROW,COLUMN,ROWS,COLUMNS,NULL$,NULL$,NULL$)
39308 ! 
39310 _Fm_Loop: ! ***** Main Driver
39312       let SWITCH=ABS(SWITCH)          !Remove any flag !:
            do  !:
               do 
39314             let MSG$(NULL$) !:
                  let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                  if _KEY_$>NULL$ then !:
                     let FNSPLIT_KEY(SWITCH,_KEY_$,MAT F$,MAT F)
39316             let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
                  let FNDISPLAY(WINDOW,SWITCH,MAT B$,MAT F$,MAT F) !:
                  if NOT _FUNCTION then 
39318                let FNBLURB("Press the Desired Function Key.") !:
                     let FNSELECT(FUNCTIONS$(SWITCH,1)) !:
                     if CMDKEY<9 then !:
                        on CMDKEY gosub _Fm_Add,_Fm_Audit,_Fm_Change,_Fm_Delete,_Fm_Inquire,_Fm_List,_Fm_Special_1,_Fm_Special_2 !:
                        let CMDKEY(0)       !Clear cmdkey
39320             else 
39322                on _FUNCTION gosub _Fm_Add,_Fm_Audit,_Fm_Change,_Fm_Delete,_Fm_Inquire,_Fm_List,_Fm_Special_1,_Fm_Special_2
39324             end if 
39326          loop UNTIL (_FUNCTION OR CMDKEY>8)
39328          exit do 
39330 ! 
39332 _Fm_Add: ! ***** Invoke Add Function
39334          let WORK$=HILITE$&"Add Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNADD(WINDOW,ABS(FILENO),FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,_KEY_$,FUNCTIONS$(SWITCH,2),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
39336 ! 
39338 _Fm_Audit: ! ***** Use This For Special Delete
39340          let WORK$=HILITE$&"Spec. Delete Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNDELETE2(WINDOW,ABS(FILENO),FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,_KEY_$,FUNCTIONS$(SWITCH,4),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
39342 ! 
39344 _Fm_Change: ! ***** Invoke Change Function
39346          let WORK$=HILITE$&"Change Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNCHANGE(WINDOW,ABS(FILENO),FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,_KEY_$,FUNCTIONS$(SWITCH,3),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
39348 ! 
39350 _Fm_Delete: ! ***** Invoke Delete Function
39352          let WORK$=HILITE$&"Delete Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNDELETE(WINDOW,ABS(FILENO),FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,_KEY_$,FUNCTIONS$(SWITCH,4),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
39354 ! 
39356 _Fm_Inquire: ! ***** Invoke Inquire Function
39358          let WORK$=HILITE$&"Display Records" !:
               let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
               let MSG$(WORK$) !:
               let FNINQUIRE(WINDOW,ABS(FILENO),FORM$,MAT F$,MAT F,MAT B$,MAT H$,MAT MASK$,_KEY_$,FUNCTIONS$(SWITCH,5),SWITCH,PRINTER,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let FNPOP_STRING$(_FM,MAT _FM$) !:
               return 
39360 ! 
39362 _Fm_List: ! ***** Invoke List Function (Removed)
39364          return 
39366 ! 
39368 _Fm_Special_1: ! ***** Special Option
39370          let FNFM_SPECIAL_1(SWITCH) !:
               return 
39372 ! 
39374 _Fm_Special_2: ! ***** Special Option
39376          let FNFM_SPECIAL_2(SWITCH) !:
               return 
39378 ! 
39380 _Exit_Fm: ! ***** Exit
39382       loop 
39384       if FILENO>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
39386       if _FM>0 then !:
               let MSG$(_FM$(_FM)) !:
            else !:
               let MSG$(NULL$)
39388 _End_Fm: fnend 
39700 ! 
39702 Function: ! ***** Display Functions Available
39704    def FNFUNCTION(FUNCTION$*20)
39706       let FNFUNCTION=FALSE            !Assume error !:
            mat DUMMY$(UDIM(SPECFN$))=(NULL$)  !Clear !:
            for ____=1 to UDIM(SPECFN$) !:
               let DUMMY=POS(LEGEND$,FUNCTION$(____:____),1) !:
               if DUMMY then !:
                  let DUMMY$(____)=FUNCTION$(DUMMY+1)(1:10)&NORMAL$ !:
                  let DUMMY$(____)(1:0)="F"&STR$(____)&":"&HILITE$
39708       next ____ !:
            print #FUNCTION,fields MAT SPECFN$: MAT DUMMY$ !:
            mat DUMMY$(1)=(NULL$)           !Resize !:
            let FNFUNCTION=TRUE             !Success
39710 _End_Function: fnend 
41800 ! 
41802 Import: ! ***** Import Data
41804    def FNIMPORT(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,SWITCH,MAT WAIT)
41806       let SAVEKEY$=FNKEY$(SWITCH,MAT F$,MAT F)  !Save current key !:
            mat S$(UDIM(F$))=F$             !Save current data !:
            mat S(UDIM(F))=F !:
            let FNSPLIT_KEY(SWITCH,NULL$,MAT F$,MAT F)
41808 ! 
41810 _Import_Loop: ! ***** Main Driver
41812       let KEY$=FNPROMPT$(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,2,"  Z J   HF",SWITCH,MAT MASK$,MAT WAIT)
41814       if CMDKEY=9 then 
41816          mat F$=S$                    !Restore !:
               mat F=S !:
               let FNSPLIT_KEY(SWITCH,SAVEKEY$,MAT F$,MAT F)
41818       else 
41820          if NOT FNREAD_FILE(FILENO,FORM$,KEY$,0,MAT F$,MAT F,SWITCH) then !:
                  let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' Not on file.") !:
                  goto _Import_Loop
41822          let FNADDENDA(SWITCH,9) !:
               let FNBLURB("Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' Imported.")
41824       end if 
41826 ! 
41828 _Exit_Import: ! ***** Exit
41830       let FNSPLIT_KEY(SWITCH,SAVEKEY$,MAT F$,MAT F)  !Restore key !:
            mat S$(1)                       !Recover memory !:
            mat S(1)
41832 _End_Import: fnend 
41900 ! 
41902 Inquire: ! ***** Inquire Function
41904    def FNINQUIRE(&WINDOW,FILENO,&FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,MAT MASK$,KEY_$*64,FUNCTION$*20,SWITCH,PRINTER,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
41906       let FNINQUIRE=FALSE             !Assume cancel !:
            do  !:
               if KEY_$><"*" then !                               Special key
41908             let FNCLEAR(SWITCH,MAT F$,MAT F) !:
                  let FNSPLIT_KEY(SWITCH,KEY_$,MAT F$,MAT F) !:
                  do  !:
                     let _KEY$=KEY_$        !Default !:
                     if LEN(_KEY$)<KLN(FILENO) AND KEY_$><"*" then !:
                        let _KEY$=FNPROMPT$(WINDOW,FILENO,FORM$,MAT F$,MAT F,MAT SPEC$,MAT H$,5,"  Z J   HF",SWITCH,MAT MASK$,MAT WAIT)
41910                let FNRESTORE(FILENO,RTRM$(_KEY$)) !:
                     let WORK=FNREAD_FILE(-FILENO,FORM$,NULL$,0,MAT F$,MAT F,SWITCH)  !Boolean !:
                     if (NOT WORK) OR (KEY_$><"*" AND FNKEY$(SWITCH,MAT F$,MAT F)(1:LEN(KEY_$))>KEY_$) then !:
                        let FNBLURB("End of file.")
41912             loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR WORK)
41914          end if 
41916          let DUMMY=((LEN(KEY_$)==KLN(FILENO)))  !Defined key !:
               if KEY_$="*" OR (DUMMY AND WORK) OR ((NOT DUMMY) AND CMDKEY><9 AND FNKEY$(SWITCH,MAT F$,MAT F)(1:LEN(KEY_$))=KEY_$) then 
41918 ! 
41920 _Inquire_Loop: ! ***** Main Driver
41922             do  !:
                     let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
                     let FNDISPLAY(WINDOW,SWITCH,MAT SPEC$,MAT F$,MAT F) !:
                     reread #FILENO,release: error 41924
41924                do  !:
                        if LEN(KEY_$)<KLN(FILENO) AND KEY_$><"*" then !:
                           let _INQUIRE$=FNREAD$("Display next record:","Y","Enter Yes to show next record, P for Prior Record or No.","AEUH",COMMENTR,COMMENTC,1,FUNCTION$,MAT WAIT) !:
                        else !:
                           let FNBLURB("Press the desired function key.") !:
                           let FNSELECT(FUNCTION$)
41926                   if CMDKEY<9 AND FNCMDKEY(FUNCTION$,CMDKEY) then !:
                           let FNADDENDA(SWITCH,5)  !Inquire addenda !:
                           goto _Inquire_Loop  !Continue do
41928                loop UNTIL ((NOT CMDKEY) AND POS("YNP",_INQUIRE$,1) OR CMDKEY>8)
41930                if AUDIT(SWITCH) then !:
                        let FNDETAIL(SWITCH,PRINTER,MAT F$,MAT F,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT) !:
                        print #PRINTER: SREP$("** Record '"&FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&"' displayed to screen. "&TIME$&" **",1,"'' ",NULL$),TAB(2)
41932                if CMDKEY<9 then 
41934                   if _INQUIRE$="Y" then 
41936                      let WORK=FNREAD_FILE(-FILENO,FORM$,NULL$,0,MAT F$,MAT F,SWITCH) !:
                           let FNBLURB(NULL$) !:
                           if (NOT WORK) OR (KEY_$><"*" AND FNKEY$(SWITCH,MAT F$,MAT F)(1:LEN(KEY_$))><KEY_$) then !:
                              let FNMESSAGE(WINDOW,10,33,"End of File.","Inquire") !:
                              let FNBLURB("End of file.") !:
                              exit do 
41938                   end if 
41940                   if _INQUIRE$="P" then 
41942                      let WORK=FNREAD_PRIOR(-FILENO,FORM$,MAT F$,MAT F,SWITCH) !:
                           let FNBLURB(NULL$) !:
                           if (NOT WORK) OR (KEY_$><"*" AND FNKEY$(SWITCH,MAT F$,MAT F)(1:LEN(KEY_$))><KEY_$) then !:
                              let FNMESSAGE(WINDOW,10,33,"Beginning of File.","Inquire") !:
                              let FNBLURB("End of file.") !:
                              exit do 
41944                   end if 
41946                else 
41948                   let FNBLURB(NULL$) !:
                        let _INQUIRE$="N"   !Force no !:
                        if NOT (LEN(KEY_$)=KLN(FILENO) AND KEY_$="*") then !:
                           let CMDKEY(0)    !Clear cmdkey
41950                end if 
41952             loop UNTIL (_INQUIRE$="N")
41954          end if 
41956       loop UNTIL (CMDKEY=9 OR LEN(KEY_$)=KLN(FILENO) OR KEY_$="*")
41958       let FNADDENDA(SWITCH,10.5)      !Final addenda
41960 _End_Inquire: fnend 
42200 ! 
42202 Iota: ! ***** Generate Vector
42204    def FNIOTA(NUMBER,MAT F)
42206       let FNIOTA=-1                   !Assume error !:
            mat F(1)=(0)                    !Ditto !:
            if NUMBER>0 AND NUMBER=IP(NUMBER) then 
42208          mat F(NUMBER)                !Resize !:
               for DUMMY=1 to NUMBER !:
                  let F(DUMMY)=DUMMY !:
               next DUMMY !:
               let FNIOTA=NUMBER            !Success
42210       end if 
42212 _End_Iota: fnend 
43400 ! 
43402 Klns: ! **** Return Key Length String
43404    def FNKLN$*32(FILENO)
43406       let DUMMY$=NULL$                !Clear !:
            let DUMMY=0                     !Clear counter !:
            do WHILE (WORK:= MAX(0,KLN(FILENO,(DUMMY+=1)))) !:
               let DUMMY$(99:0)="/"&STR$(WORK)  !Add clause !:
            loop 
43408       let FNKLN$=DUMMY$(2:99)         !Return value
43410 _End_Klns: fnend 
43500 ! 
43502 Kpss: ! **** Return Key Position String
43504    def FNKPS$*32(FILENO)
43506       let DUMMY$=NULL$                !Clear !:
            let DUMMY=0                     !Clear counter !:
            do WHILE (WORK:= MAX(0,KPS(FILENO,(DUMMY+=1)))) !:
               let DUMMY$(99:0)="/"&STR$(WORK)  !Add clause !:
            loop 
43508       let FNKPS$=DUMMY$(2:99)         !Return value
43510 _End_Kpss: fnend 
44200 ! 
44202 Last_Record: ! ***** Return Last Record Number
44204    def FNLAST_RECORD(FILENO,FILENAME$*64)
44206       let FNLAST_RECORD=FALSE         !Assume none !:
            open #FILENO: "Name= "&FILENAME$&", Shr",internal,input,relative ioerr _End_Last_Record !:
            let FNLAST_RECORD=LREC(FILENO) !:
            close #FILENO: 
44208 _End_Last_Record: fnend 
44400 ! 
44402 Line_Inputs: ! ***** Single Line Entry
44404    def FNLINE_INPUT$*64(&WINDOW,ROW,COLUMN,LENGTH,PROMPT$*80,DEFAULT$*80,MESSAGE$*80,_HELP$*80,TITLE$*64,FUNCTION$*20,MAT WAIT)
44406       let FNLINE_INPUT$=NULL$         !Assume error !:
            let DUMMY=LEN(PROMPT$)+ABS(LENGTH)+5 !:
            let FNMAKE_FRAME(MAT DUMMY$,3,DUMMY,"",TITLE$) !:
            let DUMMY$(2)(3:LEN(PROMPT$)+2)=PROMPT$ !:
            if ROW>0 then !:
               let FNPUSH_WINDOW(WINDOW,MAT DUMMY$,ROW,ABS(COLUMN),3,LEN(DUMMY$(1)),NULL$,NULL$,NULL$)
44408       let FNFUNCTION(FUNCTION$) !:
            if MESSAGE$>NULL$ then !:
               let FNBLURB(MESSAGE$)
44410       if LENGTH>0 then !:
               let DUMMY$=FNFIELD$(2,LEN(PROMPT$)+4,LENGTH,"UH")  !Uppercase !:
            else !:
               let DUMMY$=FNFIELD_G$(2,LEN(PROMPT$)+4,-LENGTH,"UH")  !Lower
44412       do  !:
               rinput #WINDOW,fields DUMMY$,attr "R",help _HELP$: DEFAULT$ !:
            loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
44414       if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
44416       let FNLINE_INPUT$=DEFAULT$
44418 _End_Line_Inputs: fnend 
46100 ! 
46102 Make_Frame: ! ***** Make Window Frame
46104    def FNMAKE_FRAME(MAT F$,ROWS,COLUMNS,FRAME$*256,TITLE$*80)
46106       let FNMAKE_FRAME=TRUE           !Assume success !:
            mat F$(ROWS)                    !Size !:
            if FRAME$=NULL$ then !:
               let FRAME$=""              !Default
46108       if LEN(FRAME$)><2 AND LEN(FRAME$)><8 then 
46110          let DUMMY=COLUMNS*2+(ROWS-2)*2 !:
               let FRAME$=RPAD$(FRAME$(1:DUMMY),DUMMY) !:
               let F$(1)=FRAME$(1:COLUMNS) !:
               let F$(ROWS)=FRAME$(LEN(FRAME$)-COLUMNS+1:999) !:
               for ____=2 to ROWS-1 !:
                  let DUMMY=COLUMNS+(____-1)*2-1 !:
                  let F$(____)=FRAME$(DUMMY:DUMMY)&RPT$(" ",COLUMNS-2)&FRAME$(DUMMY+1:DUMMY+1) !:
               next ____
46112       else 
46114          mat WORK$(8)                 !Size !:
               if LEN(FRAME$)=2 then 
46116             let DUMMY=MAX(1,SRCH(SFRAME$,FRAME$,1)) !:
                  for ____=1 to 8 !:
                     let WORK$(____)=FRAME$(DUMMY,____) !:
                  next ____
46118          else 
46120             for ____=1 to 8 !:
                     let WORK$(____)=FRAME$(____:____) !:
                  next ____
46122          end if 
46124          mat F$=(WORK$(8)&RPT$(" ",COLUMNS-2)&WORK$(4)) !:
               let F$(1)=WORK$(1)&RPT$(WORK$(2),COLUMNS-2)&WORK$(3) !:
               let F$(ROWS)=WORK$(7)&RPT$(WORK$(6),COLUMNS-2)&WORK$(5) !:
               mat WORK$(1)                 !Resize
46126       end if 
46128       if TITLE$>NULL$ then !:
               let TITLE$=TITLE$(1:MIN(LEN(TITLE$),COLUMNS-4)) !:
               let F$(1)(2:LEN(TITLE$)+3)=HEX$("E4")&TITLE$&HEX$("E0")
46130 _End_Make_Frame: fnend 
46300 ! 
46302 Make_Calendar_Pas: ! ***** Make Six Month Calendar Point And Shoot
46304    def FNMAKE_CALENDAR_PAS(ROW,COLUMN,ROWS,COLUMNS,&CURRENT,_DATE,_FLAG_DATE,_DATE1,_DATE2,MONTHS,MASK$*18,EXCLUDE$*7,MAT WINDOW$,MAT SPEC$,MAT F$,MAT F,TITLE$*80)
46306       let FNMAKE_CALENDAR_PAS=TRUE    !Assume success !:
            if MASK$=NULL$ then !:
               let MASK$="MDY"              !Default
46308       let WORK=11+10*(ROWS>1)         !Rows !:
            let DUMMY=MAX(5+25*COLUMNS,80*(ROWS>1))  !Columns !:
            let FNMAKE_FRAME(MAT WINDOW$,WORK,DUMMY,NULL$,TITLE$) !:
            mat SPEC$(0) !:
            mat F$(0) !:
            mat F(0)
46310       let _MAKE_CALENDAR_PAS=0        !Local counter !:
            for __=0 to ROWS-1 !:
               for ___=0 to COLUMNS-1
46312             if (MONTHS-=1)=>0 then !:
                     let FNMAKE_MONTH_PAS(_DATE,_FLAG_DATE,_DATE1,_DATE2,MASK$,EXCLUDE$,__*9+ROW+1,___*25+COLUMN+3,CURRENT,(_MAKE_CALENDAR_PAS+=1),MAT DUMMY$,MAT WORK$,MAT TEMP$,MAT DUMMY) !:
                     let DUMMY=___*25+4     !Column !:
                     for ____=1 to 9 !:
                        let WINDOW$(__*9+____+1)(DUMMY:DUMMY+23)=DUMMY$(____) !:
                     next ____
46314             let FNAPPEND_MATS(MAT SPEC$,MAT WORK$)  !Accumulate !:
                  let FNAPPEND_MATS(MAT F$,MAT TEMP$)  !Accumulate !:
                  let FNAPPEND_MAT(MAT F,MAT DUMMY)  !Accumulate !:
                  let DUMMY=DAYS(_DATE,MASK$) !:
                  let _DATE=DATE(DUMMY-DATE(DUMMY,"D")+32,MASK$)  !New month !:
               next ___ !:
            next __
46316 _End_Make_Calendar_Pas: fnend 
46400 ! 
46402 Make_Ll_Pas: ! ***** Make Pas From Linked List
46404    def FNMAKE_LL_PAS(FILENO,SWITCH,&FORM$,MAT F$,MAT F,MAT L$,MAT L,SEED,VECTOR)
46406       let FNMAKE_LL_PAS=FALSE         !Assume null list !:
            mat L(0)                        !Size down !:
            mat L$(0) !:
            let F(VECTOR)=SEED              !Prime the loop
46408       do WHILE (F(VECTOR)) AND FNREAD_FILE(-FILENO,FORM$,NULL$,F(VECTOR),MAT F$,MAT F,SWITCH) !:
               let FNAPPENDS(MAT L$,FNMAKE_LINE$(SWITCH,MAT F$,MAT F)) !:
               let FNAPPEND(MAT L,REC(FILENO)) !:
            loop UNTIL (SRCH(L,REC(FILENO))<UDIM(L))
46410       let FNMAKE_LL_PAS=UDIM(L)
46412 _End_Make_Ll_Pas: fnend 
46600 ! 
46602 Make_Month_Frame: ! ***** Make Month Calendar Frame
46604    def FNMAKE_MONTH_FRAME(MAT F$,FRAME$*256,TITLE$*80)
46606       let FNMAKE_MONTH_FRAME=TRUE     !Assume success !:
            if FRAME$=NULL$ then !:
               let FRAME$=""              !Default
46608       let FNMAKE_FRAME(MAT F$,9,24,FRAME$,TITLE$) !:
            let F$(2)=".Su.Mo.Tu.We.Th.Fr.Sa," !:
            let F$(2)=SREP$(F$(2),2,".",HEX$("E1")) !:
            let F$(2)=SREP$(F$(2),2,",",HEX$("E0"))
46610 _End_Make_Month_Frame: fnend 
46700 ! 
46702 Make_Month_Pas: ! ***** Make Monthly Calendar Point And Shoot Data
46704    def FNMAKE_MONTH_PAS(_DATE,_FLAG_DATE,_DATE1,_DATE2,MASK$*18,EXCLUDE$*7,ROW,COLUMN,&CURRENT,OFFSET,MAT WINDOW$,MAT SPEC$,MAT F$,MAT F)
46706       let FNMAKE_MONTH_PAS=TRUE       !Assume success !:
            if MASK$=NULL$ then !:
               let MASK$="MDY"              !Default
46708       let _DATE1=DAYS(_DATE1,MASK$)   !Start range !:
            let _DATE2=DAYS(_DATE2,MASK$)   !End range !:
            if NOT _DATE2 OR _DATE2<_DATE1 then !:
               let _DATE2=999999            !High values
46710       let _DATE=DAYS(_DATE,MASK$)     !Convert to days !:
            let _FLAG_DATE=DAYS(_FLAG_DATE,MASK$)  !Ditto
46712       let DUMMY$="JanFebMarAprMayJunJulAugSepOctNovDec"  !Months !:
            let DUMMY$=FNEXTRACT$(DUMMY$,3,DATE(_DATE,"M"))  !3 letters !:
            let DUMMY$(99:0)=DATE$(_DATE," CCYY")  !Add century/year !:
            let EXCLUDE$=RPAD$(EXCLUDE$,7)  !Condition !:
            let FNMAKE_MONTH_FRAME(MAT WINDOW$,NULL$,DUMMY$) !:
            let FNMATRIX_SPEC(MAT SPEC$,"NP",ROW+2,COLUMN+2,6,7,2,1) !:
            mat F$(42)=(NULL$)              !Clear days !:
            mat F(42)=(0)                   !Clear dates
46714       let DUMMY=_DATE-DATE(_DATE,"D")+1  !First day of month !:
            let WORK=REM(DUMMY,7)           !Inital index !:
            do  !:
               for ____=1 to 31             !Days of month !:
                  let WORK+=1               !Bump index !:
                  let F$(WORK)=CNVRT$("G 2",DATE(DUMMY,"D"))  !Date !:
                  let F(WORK)=DUMMY         !Selection date !:
                  if _DATE1<=DUMMY AND DUMMY<=_DATE2 then !                               Verify range
46716                let TEMP=REM(WORK-1,7)+1  !Day of week !:
                     if EXCLUDE$(TEMP:TEMP)=" " then !                               Not excluded day !:
                        let SPEC$(WORK)=SREP$(SPEC$(WORK),12,"NP","H")
46718             end if 
46720             if _FLAG_DATE=DUMMY then !:
                     let CURRENT=WORK+(OFFSET-1)*42  !Cursor position
46722             let DUMMY+=1              !Next day !:
                  if DATE(DUMMY,"M")><DATE(_DATE,"M") then !:
                     exit do                !End of month
46724          next ____ !:
            loop UNTIL (TRUE)
46726 _End_Make_Month_Pas: fnend 
47400 ! 
47402 Mat_Srep: ! ***** Array String Replace
47404    def FNMAT_SREP(MAT F$,POSITION,OLD$*18,NEW$*18)
47406       let FNMAT_SREP=TRUE             !Assume success !:
            for ___=1 to UDIM(F$) !:
               let F$(___)=SREP$(F$(___),POSITION,OLD$,NEW$) !:
            next ___
47408 _End_Mat_Srep: fnend 
47500 ! 
47502 Mat_Substring: ! ***** Resize Array Into Substrings Of Itself
47504    def FNMAT_SUBSTRING(MAT F$,FIRST,LAST)
47506       let FNMAT_SUBSTRING=TRUE
47508       for DUMMY=1 to UDIM(F$) !:
               let F$(DUMMY)=F$(DUMMY)(FIRST:LAST) !:
            next DUMMY
47510 _End_Mat_Substring: fnend 
47600 ! 
47602 Matrix_Spec: ! ***** Build Matrix Field Spec
47604    def FNMATRIX_SPEC(MAT F$,ATTRIBUTE$*18,ROW,COLUMN,ROWS,COLUMNS,WIDTH,SPACE)
47606       let FNMATRIX_SPEC=TRUE          !Assume success !:
            let DUMMY$=RPAD$(",G  "&CNVRT$("ZD 2",WIDTH),8) !:
            let DUMMY$(99:0)=FNCAPTION$(",",ATTRIBUTE$) !:
            mat F$(ROWS*COLUMNS)=(DUMMY$) !:
            let DUMMY=0                     !Reset index
47608       for _____=ROW to ROW+ROWS-1 !:
               for ____=0 to COLUMNS-1 !:
                  let DUMMY=DUMMY+1         !Increment index !:
                  let WORK=____*(WIDTH+SPACE)+COLUMN !:
                  let F$(DUMMY)(1:0)=CNVRT$("ZD 2",WORK)  !Column !:
                  let F$(DUMMY)(1:0)=CNVRT$("PIC(##,)",_____)  !Row !:
               next ____ !:
            next _____
47610 _End_Matrix_Spec: fnend 
47900 ! 
47902 Message: ! ***** Display Message
47904    def FNMESSAGE(&WINDOW,ROW,COLUMN,MESSAGE$*512,TITLE$*64)
47906       let FNMESSAGE=TRUE              !Assume success !:
            let FNDISPLAY_WINDOW(WINDOW,ROW,COLUMN,MESSAGE$,TITLE$) !:
            let FNBLURB("Press RETURN to Continue.") !:
            let FNSELECT("          ")      !Wait for return !:
            let FNPOP_WINDOW(WINDOW,1,OFF)  !Remove window
47908 _End_Message: fnend 
48900 ! 
48902 Next_Channel: ! ***** Look For Next Open File Channel
48904    def FNNEXT_CHANNEL(START,END)
48906       let FNNEXT_CHANNEL=0            !Assume failure !:
            do WHILE ((WORK:= (FILE(START)>=0)) AND (START<=END)) !:
               let START+=1 !:
            loop 
48908       let FNNEXT_CHANNEL=START*(NOT WORK)  !Return channel
48910 _End_Next_Channel: fnend 
49100 ! 
49102 Next_Keys: ! ***** Calculate Next Higher Key Value
49104    def FNNEXT_KEY$*64(KEY$*64)
49106       let FNNEXT_KEY$=NULL$           !Default !:
            let _NEXT_KEYS=LEN(KEY$)        !Key length !:
            do  !:
               let DUMMY=REM((ORD(KEY$(_NEXT_KEYS:_NEXT_KEYS))+1),256) !:
               let KEY$(_NEXT_KEYS:_NEXT_KEYS)=CHR$(DUMMY)  !Bump byte !:
            loop UNTIL ((DUMMY) OR (NOT (_NEXT_KEYS-=1)))
49108       let FNNEXT_KEY$=KEY$            !Return value
49110 _End_Next_Keys: fnend 
49300 ! 
49302 Not_Mat: ! ***** Toggle Boolean Matrix
49304    def FNNOT_MAT(MAT F)
49306       let FNNOT_MAT=TRUE              !Success !:
            mat F=(-1)+F                    !Toggle !:
            mat F=(-1)*F                    !Absolute value
49308 _End_Not_Mat: fnend 
49900 ! 
49902 Open_Keyedb: ! ***** Open Internal File And All Its Keys, Btree Version
49904    def FNOPEN_KEYEDB(FILENO,FILENAME$*8,PATH$*64)
49906       let FNOPEN_KEYEDB=FALSE !:
            let FILENAME$=RTRM$(LTRM$(FILENAME$)) !:
            let WORK$="Name= "&FILENAME$&"/"&PATH$&", KfName= "&FILENAME$&".KEY/"&PATH$&", Btree, Shr" !:
            let DUMMY$="let "&FILENAME$&"="&STR$(ABS(FILENO))
49908       if FILENO > 0 then !                               Outin
49910          open #FILENO: WORK$ ,internal,outin,keyed error _End_Open_Keyedb !:
               for LOOP__=FILENO+1 to FILENO+9 !:
                  let DUMMY=LOOP__-FILENO+1 !:
                  open #LOOP__: SREP$(WORK$,17,".KEY",".KY"&STR$(DUMMY)) ,internal,outin,keyed error _Exit_Open_Keyedb !:
                  let DUMMY$(9999:0)=":"&FILENAME$&STR$(DUMMY)&"="&STR$(LOOP__) !:
               next LOOP__
49912       else 
49914          open #ABS(FILENO): WORK$ ,internal,input,keyed error _End_Open_Keyedb
49916       end if 
49918 ! 
49920 _Exit_Open_Keyedb: ! ***** Aw Done
49922       let FNOPEN_KEYEDB=LOOP__-1 !:
            execute DUMMY$ error _End_Open_Keyedb
49924 _End_Open_Keyedb: fnend 
50100 ! 
50102 Ofs: ! ***** Page X Of Y
50104    def FNOF$*9(CURRENT,PER_PAGE,TOTAL)
50106       let FNOF$=NULL$                 !Assume error !:
            let DUMMY$=CNVRT$("N 3",CURRENT)&" of" !:
            let DUMMY$(9:0)=CNVRT$("N 3",CEIL(TOTAL/PER_PAGE)) zdiv _End_Ofs !:
            let FNOF$=DUMMY$
50108 _End_Ofs: fnend 
50200 ! 
50202 Open_Keyed: ! ***** Open Internal File And All Its Keys
50204    def FNOPEN_KEYED(FILENO,FILENAME$*8,PATH$*64)
50206       let FNOPEN_KEYED=FALSE !:
            let FILENAME$=RTRM$(LTRM$(FILENAME$)) !:
            let WORK$="Name= "&FILENAME$&"/"&PATH$&", KfName= "&FILENAME$&".KEY/"&PATH$&", Isam, Shr" !:
            let DUMMY$="let "&FILENAME$&"="&STR$(ABS(FILENO))
50208       if FILENO > 0 then !                               Outin
50210          open #FILENO: WORK$ ,internal,outin,keyed error _End_Open_Keyed !:
               for LOOP__=FILENO+1 to FILENO+9 !:
                  let DUMMY=LOOP__-FILENO+1 !:
                  open #LOOP__: SREP$(WORK$,17,".KEY",".KY"&STR$(DUMMY)) ,internal,outin,keyed error _Exit_Open_Keyed !:
                  let DUMMY$(9999:0)=":"&FILENAME$&STR$(DUMMY)&"="&STR$(LOOP__) !:
               next LOOP__
50212       else 
50214          open #ABS(FILENO): WORK$ ,internal,input,keyed error _End_Open_Keyed
50216       end if 
50218 ! 
50220 _Exit_Open_Keyed: ! ***** Aw Done
50222       let FNOPEN_KEYED=LOOP__-1 !:
            execute DUMMY$ error _End_Open_Keyed
50224 _End_Open_Keyed: fnend 
50300 ! 
50302 Open_Window: ! ***** Open Specified Window
50304    def FNOPEN_WINDOW(WINDOW,ROW,COLUMN,ROWS,COLUMNS,TITLE$*80,FRAME$*512,ATTRIBUTE$*18)
50306       let FNOPEN_WINDOW=FALSE         !Assume error !:
            let DUMMY$=FNWINDOW$(ROW,COLUMN,ROWS,COLUMNS)  !Open string !:
            let DUMMY$(9999:0)=FNCAPTION$(", Border=",FRAME$) !:
            let DUMMY$(9999:0)=FNCAPTION$(", N=",ATTRIBUTE$) !:
            let DUMMY$(9999:0)=FNCAPTION$(", Caption=",TITLE$)
50308       open #WINDOW: DUMMY$,display,outin error _End_Open_Window !:
            let FNOPEN_WINDOW=TRUE          !Success
50310 _End_Open_Window: fnend 
50400 ! 
50402 Open_Proc: ! ***** Background Procedure Available?
50404    def FNOPEN_PROC(FILENO,&WSID)
50406       let FNOPEN_PROC=FALSE           !Assume foreground !:
            let DUMMY=3                     !Set counter !:
            do WHILE ((DUMMY+=1)<20)        !For 3 to 19
50408          let DUMMY$="PROC"&STR$(DUMMY)&".$$$"  !Proc name !:
               if NOT EXISTS(DUMMY$) then !:
                  open #FILENO: "Name= "&DUMMY$&", Replace",display,output  !:
                  let WSID=DUMMY            !Wsid assigned !:
                  let FNOPEN_PROC=TRUE      !Procedure file open!:
                  exit do 
50410       loop 
50412 Endopen_Proc: fnend 
51400 ! 
51402 Pas_Many_Enter: ! ***** Pas Many With Optional Enter
51404    def FNPAS_MANY_ENTER(&WINDOW,MAT F$,MAT F,MAT SPEC$,MAT H$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,FUNCTION$*20,HEADING$*80,FRAME$*256,MAT WAIT,SWITCH,MAT ENT_SPEC$,MAT ENT_H$,MAT ENT$,MAT ENT,ENT_CURRENT,ENT_MASK$*99,ENT_FUNCTION$*20,SET)
51406       let FNPAS_MANY_ENTER=0          !Default !:
            do  !:
               let CURRENT=FNPAS_MANY(WINDOW,MAT F$,MAT F,MAT SPEC$,MAT H$,CURRENT,ROW,-ABS(COLUMN),ROWS,COLUMNS,WIDTH,TITLE$,FUNCTION$,HEADING$,FRAME$,MAT WAIT) !:
               let ROW=-ABS(ROW)            !No more pushes !:
               if CMDKEY AND CMDKEY<9 then !                               Special enter
51407             if SWITCH=ORDERL_+.1 then !:
                     let ENT_CURRENT=CURRENT
51408             let DUMMY$=CNVRT$("ZD 2",_CURROW)  !New row !:
                  mat WORK$(UDIM(ENT_SPEC$))=ENT_SPEC$  !Work copy !:
                  for WORK=1 to UDIM(WORK$) !:
                     let WORK$(WORK)(1:2)=DUMMY$  !Alter spec !:
                     let DUMMY=VAL(WORK$(WORK)(4:5))+_CURCOL-1  !New column !:
                     let WORK$(WORK)(4:5)=CNVRT$("ZD 2",DUMMY) !:
                     let WORK$(WORK)(99:0)=FNEITHER$("UR","UH",F(CURRENT)) !:
                  next WORK
51410             let FNXREF_FIELDS(SWITCH,MAT ENT$,MAT ENT) !:
                  let _INPUT_SWITCH=0       !Clear last !:
                  let FNENTER(WINDOW,SWITCH,MAT WORK$,MAT ENT_H$,MAT ENT$,MAT ENT,ENT_CURRENT,ENT_MASK$,ENT_FUNCTION$,MAT WAIT) !:
                  if CMDKEY><9 then !                               Approved !:
                     let F$(CURRENT)=FNMAKE_LINE$(SWITCH,MAT ENT$,MAT ENT) !:
                     let F(CURRENT)=SGN(F(CURRENT)+SET)  !Turn it on
51412             let CMDKEY(0)             !Clear cmdkey
51414          end if 
51416       loop UNTIL (CMDKEY>8)
51418       if COLUMN>0 then !                               Optional pop !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
51420 _End_Pas_Many_Enter: fnend 
51600 ! 
51602 Pas: ! ***** Point And Shoot Data
51604    def FNPAS(&WINDOW,MAT F$,MAT SPEC$,MAT H$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,FUNCTION$*20,HEADING$*80,FRAME$*256,MAT WAIT)
51605       if GUI_MODE then !:
               let FNFUNCTION(FUNCTION$) !:
               let FNPAS=FNGUI_PAS(WINDOW,TITLE$,HEADING$,ROW,COLUMN,ROWS,WIDTH,MAT F$,CURRENT,LEAVE_WIN,SHOW_ZOOM_ONLY,MULTIPLE_ENTRIES,MAT SELECTED,FORCE_ROWS,0,FUNCTION$) !:
               goto _End_Pas
51606       let FNPAS=0                     !Default !:
            let _PER_PAGE=UDIM(SPEC$)       !Default !:
            if ROW>0 then !:
               let FNPAS_PRE(WINDOW,MAT F$,MAT SPEC$,ROW,COLUMN,ROWS,COLUMNS,WIDTH,_PER_PAGE,TITLE$,HEADING$,FRAME$)
51608       let FNFUNCTION(FUNCTION$) !:
            let _PAGES=CEIL(UDIM(F$)/_PER_PAGE)  !Total pages !:
            let _LAST_PAGE=REM(UDIM(F$),_PER_PAGE)  !Last page count !:
            let _PAGE=CEIL(CURRENT/_PER_PAGE)  !Current page !:
            let CURRENT=REM(CURRENT-1,_PER_PAGE)+1  !Current on page
51610 ! 
51612 _Pas_Loop: ! ***** Main Driver
51614       do  !:
               let WORK$=FNFIELD_G$(ABS(ROWS),(WIDTH+1)*COLUMNS-7,10,NULL$) !:
               if _PAGES>1 then !:
                  print #WINDOW,fields WORK$: FNOF$(_PAGE,_PER_PAGE,UDIM(F$)) !:
               else !:
                  print #WINDOW,fields WORK$: RPT$("",10)
51616          if _PAGE=_PAGES AND _LAST_PAGE then !:
                  let WORK=UDIM(F$)         !Real size !:
                  mat F$(_PER_PAGE*_PAGES)  !Full size !:
                  let DUMMY=UDIM(F$)-_PER_PAGE+1  !Start !:
                  print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY:UDIM(F$)) !:
                  mat F$(WORK)              !Restore size !:
                  let CURRENT=MIN(CURRENT,_LAST_PAGE)  !Set cursor
51618          let CURFLD(CURRENT,FKEY) !:
               let DUMMY=(_PAGE-1)*_PER_PAGE !:
               if UDIM(H$) then !:
                  rinput #WINDOW,select MAT SPEC$,attr "R",help MAT H$(MIN(UDIM(H$),DUMMY+1):MIN(UDIM(H$),DUMMY+_PER_PAGE)): MAT F$(DUMMY+1:MIN(UDIM(F$),DUMMY+_PER_PAGE)) !:
               else !:
                  rinput #WINDOW,select MAT SPEC$,attr "R": MAT F$(DUMMY+1:MIN(UDIM(F$),DUMMY+_PER_PAGE))
51620          let _CURROW=CURROW           !Special save !:
               let _CURCOL=CURCOL           !Ditto !:
               let CURRENT=CURFLD !:
               if (FKEY=91 OR (_PAGE<_PAGES AND CURRENT=_PER_PAGE AND FKEY=106)) then !:
                  let _PAGE=MIN(_PAGE+1,_PAGES)  !Page down
51622          if FKEY=90 OR (_PAGE>1 AND CURRENT=1 AND FKEY=105) then !:
                  let _PAGE=MAX(_PAGE-1,1)  !Page up
51624          if FKEY=112 then !                               Home key !:
                  let _PAGE=1
51626          if FKEY=113 then !                               End key !:
                  let _PAGE=_PAGES
51628       loop UNTIL ((NOT FKEY) OR FNCMDKEY(FUNCTION$,CMDKEY))
51630 ! 
51632 _Exit_Pas: ! ***** Exit Function
51634       let CURRENT+=(_PAGE-1)*_PER_PAGE  !Absolute current !:
            let FNPAS=CURRENT !:
            if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
51636 _End_Pas: fnend 
51700 ! 
51702 Pas_Cases: ! ***** Point And Shoot From File
51704    def FNPAS_CASE$*64(&WINDOW,SWITCH,FILENO,KEY$*64,&FORM$,MAT F$,MAT F,MAT K$,MAT L$,MAT M$,MAT N$,&CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,FUNCTION$*20,HEADING$*80,FRAME$*256,MESSAGE$*80,MAT WAIT)
51706       let FNPAS_CASE$=NULL$           !Assume cancel !:
            do  !:
               if UDIM(L$)=1 then 
51708             let FNBLURB("Now Reading Records.  Please Wait...") !:
                  if NOT FP(SWITCH) then !:
                     let DUMMY=FNFIND_UNIQUE_CASE(SWITCH,FILENO,KEY$,FORM$,MAT F$,MAT F,MAT K$,MAT L$) !:
                  else !:
                     let DUMMY=FNFIND_ALL_CASE(SWITCH,FILENO,KEY$,FORM$,MAT F$,MAT F,MAT K$,MAT L$)
51710             if NOT DUMMY then !:
                     exit do 
51712          end if 
51714          let FNBLURB(MESSAGE$) !:
               let CURRENT=FNPAS(WINDOW,MAT L$,MAT M$,MAT N$,MAX(1,CURRENT),ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$,FUNCTION$,HEADING$,FRAME$,MAT WAIT) !:
               let FNPAS_CASE$=K$(CURRENT)  !Return key !:
            loop UNTIL (TRUE)
51716       let FNBLURB(NULL$)
51718 _End_Pas_Cases: fnend 
51800 ! 
51802 Pas_Fm_Cases: ! ***** Point And Shoot Fm Simple
51804    def FNPAS_FM_CASE$*64(&WINDOW,&_SGN,MAT K$,MAT L$,MAT M$,MAT N$,&CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,HEADING$*80,FRAME$*256,MESSAGE$*80,SWITCH,FILENO,FILENO2,&FORM$,MAT F$,MAT F,SCREENFILE,SCREEN$*8,&_ROW,&_COLUMN,&_ROWS,&_COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$,MAT H$,MAT MASK$,KEY$*64,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
51806       let FNPAS_FM_CASE$=NULL$        !Default !:
            let _SGN=1                      !Set !:
            let FILENO2+=(FILENO*(~FILENO2))  !Alternate file
51808       do  !:
               let WORK$=FNPAS_CASE$(WINDOW,SWITCH,FILENO2,KEY$,FORM$,MAT F$,MAT F,MAT K$,MAT L$,MAT M$,MAT N$,CURRENT,ROW*_SGN,-ABS(COLUMN),ROWS,COLUMNS,WIDTH,TITLE$,FUNCTIONS$(SWITCH,1),HEADING$,FRAME$,MESSAGE$,MAT WAIT) !:
               let _SGN=-1**((WORK$>NULL$) OR (_SGN==-1))  !Reset !:
               let ROW=ABS(ROW)             !Reset !:
               if WORK$=NULL$ OR (CMDKEY AND CMDKEY<8) then 
51810             if WORK$=NULL$ then !:
                     let CMDKEY(1) !:
                     let FNBLURB("No existing records found.  'Add Records' assumed.")
51812             if CMDKEY=1 then !:
                     let WORK$=KEY$(1:99*(~FP(SWITCH)))
51814             let FNFM(WINDOW,IP(SWITCH),FILENO,FORM$,MAT F$,MAT F,SCREENFILE,SCREEN$,_ROW,_COLUMN,_ROWS,_COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$,MAT H$,MAT MASK$,WORK$,CMDKEY,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
51816             mat L$(1)=(NULL$) !:
                  restore #FILENO2: !:
                  let DUMMY=FNREAD_FILE(FILENO2,FORM$,KEY$,0,MAT F$,MAT F,SWITCH)
51818             if DUMMY then !:
                     let CMDKEY(0)
51820          else 
51822             let FNPAS_FM_CASE$=WORK$  !Return value !:
                  exit do 
51824          end if 
51826       loop UNTIL (CMDKEY>8)
51828       if _SGN<0 AND COLUMN>0 AND NOT GUI_MODE then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
51830 _End_Pas_Fm_Cases: fnend 
52000 ! 
52002 Pas_Fm_Simples: ! ***** Point And Shoot Fm Simple
52004    def FNPAS_FM_SIMPLE$*64(&WINDOW,&_SGN,MAT L$,MAT M$,MAT N$,&CURRENT,ROW,COLUMN,ROWS,COLUMNS,LENGTH,TITLE$*80,HEADING$*80,FRAME$*256,MESSAGE$*80,SWITCH,FILENO,KEY$*64,&FORM$,MAT F$,MAT F,SCREENFILE,SCREEN$*8,&_ROW,&_COLUMN,&_ROWS,&_COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$,MAT H$,MAT MASK$,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT)
52006       let FNPAS_FM_SIMPLE$=NULL$      !Default !:
            let _SGN=1                      !Set !:
            do  !:
               let WORK$=FNPAS_SIMPLE$(WINDOW,FILENO,LENGTH,KEY$,MAT L$,MAT M$,MAT N$,CURRENT,ROW*_SGN,-ABS(COLUMN),ROWS,COLUMNS,TITLE$,FUNCTIONS$(SWITCH,1),HEADING$,FRAME$,MESSAGE$,MAT WAIT) !:
               let _SGN=-1**((WORK$>NULL$) OR (_SGN==-1))  !Reset !:
               if WORK$=NULL$ OR (CMDKEY AND CMDKEY<8) then 
52008             if WORK$=NULL$ then !:
                     let CMDKEY(1)
52010             if CMDKEY=1 then !:
                     let WORK$=KEY$
52012             let FNFM(WINDOW,SWITCH,FILENO,FORM$,MAT F$,MAT F,SCREENFILE,SCREEN$,_ROW,_COLUMN,_ROWS,_COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$,MAT H$,MAT MASK$,WORK$,CMDKEY,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
                  restore #FILENO: !:
                  mat L$(1)=(NULL$) !:
                  let DUMMY=FNREAD_FILE(FILENO,FORM$,KEY$,0,MAT F$,MAT F,SWITCH) !:
                  if DUMMY then !:
                     let CMDKEY(0)
52014          else 
52016             let FNPAS_FM_SIMPLE$=WORK$  !Return value !:
                  exit do 
52018          end if 
52020       loop UNTIL (CMDKEY>8)
52022       mat L$(1)=(NULL$) !:
            mat M$(1)=(NULL$) !:
            mat N$(1)=(NULL$) !:
            if _SGN<0 AND COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
52024 _End_Pas_Fm_Simples: fnend 
52100 ! 
52102 Pas_Calendar: ! ***** Point And Shoot Calendar
52104    def FNPAS_CALENDAR(&WINDOW,ROW,COLUMN,ROWS,COLUMNS,&CURRENT,_DATE,_FLAG_DATE,_DATE1,_DATE2,MONTHS,MASK$*18,EXCLUDE$*7,MAT WINDOW$,MAT SPEC$,MAT F$,MAT F,MAT H$,TITLE$*80,FUNCTION$*20,MAT WAIT)
52106       let FNPAS_CALENDAR=0            !Default !:
            if MASK$=NULL$ then !:
               let MASK$="MDY"              !Default
52108       if ROW>0 OR (SPEC$(1)=NULL$ OR UDIM(SPEC$)=1) then !:
               let FNMAKE_CALENDAR_PAS(ROW,ABS(COLUMN),ROWS,COLUMNS,CURRENT,_DATE,_FLAG_DATE,_DATE1,_DATE2,MONTHS,MASK$,EXCLUDE$,MAT WINDOW$,MAT SPEC$,MAT F$,MAT F,TITLE$) !:
               let FNPUSH_WINDOW(WINDOW,MAT WINDOW$,ROW,ABS(COLUMN),UDIM(WINDOW$),LEN(WINDOW$(1)),NULL$,NULL$,NULL$)
52110       let DUMMY$="Select a Date and Press ENTER." !:
            if RTRM$(FUNCTION$)>NULL$ then !:
               let DUMMY$(LEN(DUMMY$):0)=" or Press the Desired Function Key"
52112       let FNBLURB(DUMMY$) !:
            let FNFUNCTION(FUNCTION$) !:
            if CURRENT then !:
               let CURFLD(CURRENT)
52114       do  !:
               rinput #WINDOW,select MAT SPEC$,attr "R",help MAT H$: MAT F$ !:
               let CURFLD(CURRENT:= CURFLD) !:
            loop UNTIL ((NOT CMDKEY) OR FNCMDKEY(FUNCTION$,CMDKEY))
52116       let FNPAS_CALENDAR=DATE(F(CURRENT),MASK$)  !Return date !:
            let FNBLURB(NULL$) !:
            if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
52118 _End_Pas_Calendar: fnend 
52200 ! 
52202 Pas_Many: ! ***** Point And Shoot Multiple Fields
52204    def FNPAS_MANY(&WINDOW,MAT F$,MAT F,MAT SPEC$,MAT H$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,FUNCTION$*20,HEADING$*80,FRAME$*256,MAT WAIT)
52206       let FNPAS_MANY=0                !Default !:
            let _PER_PAGE=UDIM(SPEC$)       !Default !:
            if ROW>0 then !:
               let FNPAS_PRE(WINDOW,MAT F$,MAT SPEC$,ROW,COLUMN,ROWS,COLUMNS,WIDTH,_PER_PAGE,TITLE$,HEADING$,FRAME$)
52208       let FNFUNCTION(FUNCTION$) !:
            let _PAGES=CEIL(UDIM(F$)/_PER_PAGE)  !Total pages !:
            let _LAST_PAGE=REM(UDIM(F$),_PER_PAGE)  !Last page count !:
            let _PAGE=CEIL(CURRENT/_PER_PAGE)  !Current page !:
            let CURRENT=REM(CURRENT-1,_PER_PAGE)+1  !Current on page
52210       mat WORK$(UDIM(F$))=("B") !:
            if UDIM(F$)><UDIM(F) then 
52212          mat F(UDIM(F$))=(0)          !Size and clear
52214       else 
52216          for __=1 to UDIM(WORK$) !:
                  let WORK=MAX(0,SRCH(F,TRUE,__)) !:
                  if WORK then !:
                     let WORK$(WORK)="HR" !:
                     let __=WORK
52218          next __
52220       end if 
52222       let FNPAS_SPEC(MAT SPEC$,MAT F,_PAGE,_PER_PAGE)
52224 ! 
52226 _Pas_Many_Loop: ! ***** Main Driver
52228       do  !:
               if _PAGES>1 then !:
                  print #WINDOW,fields FNFIELD_G$(ROWS,(WIDTH+1)*COLUMNS-7,10,NULL$): FNOF$(_PAGE,_PER_PAGE,UDIM(F$))
52230          if _PAGE=_PAGES AND _LAST_PAGE then !:
                  let WORK=UDIM(F$)         !Real size !:
                  mat F$(_PER_PAGE*_PAGES)  !Full size !:
                  let DUMMY=UDIM(F$)-_PER_PAGE+1  !Start !:
                  print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY:UDIM(F$)) !:
                  mat F$(WORK)              !Restore size !:
                  let CURRENT=MIN(CURRENT,_LAST_PAGE)  !Set cursor
52232          let CURFLD(CURRENT,FKEY) !:
               let DUMMY=(_PAGE-1)*_PER_PAGE+1  !Start !:
               let WORK=MIN(UDIM(F$),DUMMY+_PER_PAGE-1)  !Stop
52234          if UDIM(H$) then !:
                  rinput #WINDOW,select MAT SPEC$,attr MAT WORK$(DUMMY:WORK),help MAT H$(MIN(UDIM(H$),DUMMY):MIN(UDIM(H$),WORK)): MAT F$(DUMMY:WORK) !:
               else !:
                  rinput #WINDOW,select MAT SPEC$,attr MAT WORK$(DUMMY:WORK): MAT F$(DUMMY:WORK)
52236          let _CURROW=CURROW           !Special save !:
               let _CURCOL=CURCOL           !Ditto !:
               let CURRENT=CURFLD !:
               if NOT FKEY then 
52238             let WORK=CURRENT+(_PAGE-1)*_PER_PAGE !:
                  if F(WORK) then !:
                     let SPEC$(CURRENT)=SREP$(SPEC$(CURRENT),11,"R","H") !:
                     let WORK$(WORK)="B" !:
                  else !:
                     let SPEC$(CURRENT)=SREP$(SPEC$(CURRENT),11,"H","R") !:
                     let WORK$(WORK)="HR"
52240             let F(WORK)=~F(WORK) !:
                  let FKEY(104)
52242          end if 
52244          if FKEY=91 OR (_PAGE<_PAGES AND CURRENT=_PER_PAGE AND (FKEY=106 OR FKEY=104)) then !:
                  let _PAGE=MIN(_PAGE+1,_PAGES)  !Page down
52246          if FKEY=90 OR (_PAGE>1 AND CURRENT=1 AND (FKEY=105 OR FKEY=102)) then !:
                  let _PAGE=MAX(_PAGE-1,1)  !Page up
52248          if FKEY=112 then !          Home key !:
                  let _PAGE=1
52250          if FKEY=113 then !          End key !:
                  let _PAGE=_PAGES
52252          let FNPAS_SPEC(MAT SPEC$,MAT F,_PAGE,_PER_PAGE)
52254 !         end if
52256       loop UNTIL (FNCMDKEY(FUNCTION$,CMDKEY))
52258 ! 
52260 _Exit_Pas_Many: ! ***** Exit Function
52262       let DUMMY=(_PAGE-1)*_PER_PAGE+1 !:
            print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY:MIN(UDIM(F$),DUMMY+_PER_PAGE-1)) !:
            let CURRENT+=(_PAGE-1)*_PER_PAGE  !Absolute current !:
            let FNPAS_MANY=CURRENT !:
            if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
52264 _End_Pas_Many: fnend 
52700 ! 
52702 Pas_Pre: ! ***** Point And Shoot Pre Processing
52704    def FNPAS_PRE(&WINDOW,MAT F$,MAT SPEC$,ROW,COLUMN,&ROWS,&COLUMNS,WIDTH,&_PER_PAGE,TITLE$*80,HEADING$*80,FRAME$*256)
52706       let FNPAS_PRE=TRUE              !Assume success !:
            if NOT COLUMNS then !:
               let COLUMNS=MIN(UDIM(F$),IP(76/(WIDTH+1)))
52708       let WORK=(HEADING$>NULL$)       !Headings boolean !:
            if NOT ROWS then !:
               let ROWS=MIN(21-ABS(ROW)-WORK,IP(UDIM(F$)/COLUMNS+2.999+WORK))
52710       let DUMMY=(WIDTH+1)*COLUMNS+3   !Character columns !:
            let FNMAKE_FRAME(MAT DUMMY$,ROWS,DUMMY,FRAME$,TITLE$) !:
            if WORK then !:
               let HEADING$=RPT$(RPAD$(HEADING$,WIDTH+1),COLUMNS) !:
               let HEADING$((WIDTH+1)*COLUMNS+1:99)=HEX$("E0") !:
               let DUMMY$(2)(2:LEN(HEADING$)+1)=HEADING$
52712       let _PER_PAGE=MIN(UDIM(F$),((ROWS-2-WORK)*COLUMNS))  !Items/page !:
            if SPEC$(1)=NULL$ then !:
               let FNMATRIX_SPEC(MAT SPEC$,"H",WORK+2,3,ROWS-WORK-2,COLUMNS,WIDTH,1)  !Make new spec !:
               let SPEC$(1)(99:0)=SPEC$(UDIM(SPEC$))(99:0)="X"
52714       if ROW>0 then !:
               let FNPUSH_WINDOW(WINDOW,MAT DUMMY$,ROW,ABS(COLUMN),ROWS,LEN(DUMMY$(1)),NULL$,NULL$,NULL$)
52716 _End_Pas_Pre: fnend 
52900 ! 
52902 Pas_Simple: ! ***** Point And Shoot From File (Record Version)
52904    def FNPAS_SIMPLE(&WINDOW,FILENO,LENGTH,MAT F$,MAT SPEC$,MAT H$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,TITLE$*80,FUNCTION$*20,HEADING$*80,MESSAGE$*80,MAT WAIT)
52906       let FNPAS_SIMPLE=0              !Assume cancel !:
            if UDIM(F$)=1 then 
52908          let FNBLURB("Now Reading Records.  Please Wait...") !:
               if NOT FNFIND_ALL_REC(FILENO,0,0,1,LENGTH,MAT F$) then !:
                  goto _End_Pas_Simple      !Exit
52910       end if 
52912       let FNBLURB(MESSAGE$) !:
            let DUMMY=FNPAS(WINDOW,MAT F$,MAT SPEC$,MAT H$,MAX(1,CURRENT),ROW,COLUMN,ROWS,COLUMNS,LENGTH+6,TITLE$,FUNCTION$,HEADING$,NULL$,WAIT) !:
            let FNPAS_SIMPLE=VAL(F$(DUMMY)(1:POS(F$(DUMMY),":")-1))
52914 _End_Pas_Simple: fnend 
53100 ! 
53102 Pas_Spec: ! ***** Condition Point And Shoot Spec
53104    def FNPAS_SPEC(MAT SPEC$,MAT F,_PAGE,_PER_PAGE)
53106       let FNPAS_SPEC=TRUE             !Assume success !:
            let WORK=(_PAGE-1)*_PER_PAGE    !Base index !:
            for ___=1 to UDIM(SPEC$) !:
               if (UDIM(F)>=WORK+___) AND F(WORK+___) then !:
                  let SPEC$(___)=SREP$(SPEC$(___),11,"H","R")  !Selected !:
               else !:
                  let SPEC$(___)=SREP$(SPEC$(___),11,"R","H")  !Not selected
53108       next ___
53110 _End_Pas_Spec: fnend 
53600 ! 
53602 Pop_Value: ! ***** Pop Value From Stack
53604    def FNPOP_VALUE(&STACK,MAT STACK)
53606       let FNPOP_VALUE=-INF            !Flag error !:
            if STACK>0 then !:
               let FNPOP_VALUE=STACK(STACK)  !Return !:
               mat STACK(STACK-=1)          !Resize
53608 _End_Pop_Value: fnend 
53700 ! 
53702 Pop_Window: ! ***** Pop Window(S) From Screen
53704    def FNPOP_WINDOW(&WINDOW,TIMES,FREE)
53706       let FNPOP_WINDOW=FALSE          !Assume error !:
            if MAX(0,WINDOW-100) then 
53708          for _=1 to MIN(TIMES,WINDOW-100) !:
                  if FREE then !:
                     close #WINDOW,free:    !Window remains !:
                  else !:
                     close #WINDOW:         !Pop window
53710             let WINDOW-=1             !Decrement !:
               next _
53712          let FNPOP_WINDOW=TRUE        !Success
53714       end if 
53716 _End_Pop_Window: fnend 
54100 ! 
54102 Push_Value: ! ***** Push Value On Stack
54104    def FNPUSH_VALUE(NUMERIC,&STACK,MAT STACK)
54106       let FNPUSH_VALUE=TRUE           !Assume success !:
            mat STACK(STACK+=1)             !Resize !:
            let STACK(STACK)=NUMERIC        !Save
54108 _End_Push_Value: fnend 
54200 ! 
54202 Push_Window: ! ***** Push Window Onto Screen
54204    def FNPUSH_WINDOW(&WINDOW,MAT F$,ROW,COLUMN,ROWS,COLUMNS,TITLE$*80,FRAME$*512,ATTRIBUTE$*18)
54206       let FNPUSH_WINDOW=FALSE         !Assume error !:
            let ROW=MAX(1,MIN(20-ROWS,ROW))  !No screen wrap !:
            let COLUMN=MAX(1,MIN(80-COLUMNS,COLUMN))  !Ditto !:
            let WINDOW=MAX(101,WINDOW+1)    !Window number !:
            if ATTRIBUTE$=NULL$ then !:
               let ATTRIBUTE$="N"           !Default
54208       if FNOPEN_WINDOW(WINDOW,ROW,COLUMN,ROWS,COLUMNS,TITLE$,FRAME$,ATTRIBUTE$) then !:
               let FNVECTOR_SPEC(MAT WORK$,ATTRIBUTE$,1,1,ROWS,COLUMNS) !:
               print #WINDOW,fields MAT WORK$: MAT F$  !Paint !:
               let FNPUSH_WINDOW=TRUE       !Success
54210 _End_Push_Window: fnend 
54500 ! 
54502 Push_String: ! ***** Push String On Stack
54504    def FNPUSH_STRING(STRING$*512,&STACK,MAT STACK$)
54506       let FNPUSH_STRING=FALSE         !Assume error !:
            if (STACK+=1)>UDIM(STACK$) then !:
               mat STACK$(STACK)            !Resize
54508       let STACK$(STACK)=STRING$ error _End_Push_String !:
            let FNPUSH_STRING=TRUE          !Success
54510 _End_Push_String: fnend 
54600 ! 
54602 Pop_Strings: ! ***** Pop String From Stack
54604    def FNPOP_STRING$*512(&STACK,MAT STACK$)
54606       let FNPOP_STRING$=NULL$         !Default !:
            if STACK>0 then !:
               let FNPOP_STRING$=STACK$(STACK)  !Return value !:
               let STACK-=1                 !Resize
54608 _End_Pop_Strings: fnend 
55900 ! 
55902 Reads: ! ***** Prompt To And Read Character Data From Screen
55904    def FNREAD$*80(PROMPT$*80,DEFAULT$*80,MESSAGE$*80,ATTRIBUTE$*18,ROW,COLUMN,LENGTH,FUNCTION$*20,MAT WAIT)
55906       if RTRM$(ATTRIBUTE$)=NULL$ then !:
               let ATTRIBUTE$="UH"          !Default attribute
55908       if MESSAGE$>NULL$ then !:
               let MESSAGE$(1:0)="1127;" !:
               let MESSAGE$(99:0)=";"
55910       let FNFUNCTION(FUNCTION$) !:
            print #125,fields FNFIELD$(1,COLUMN,LEN(PROMPT$),"N"): PROMPT$
55912       do  !:
               rinput #125,fields FNFIELD$(1,COLUMN+LEN(PROMPT$)+1,LENGTH,ATTRIBUTE$),attr "R",help MESSAGE$: DEFAULT$  !Read data !:
            loop UNTIL ((NOT CMDKEY) OR FNCMDKEY(FUNCTION$,CMDKEY))
55914       let FNREAD$=DEFAULT$            !Return value
55916 _End_Reads: fnend 
56000 ! 
56002 Read_Control: ! ***** Read Control File Data
56004    def FNREAD_CONTROL(FILENO,FILENAME$*32,MAT F$,MAT F)
56006       let FNREAD_CONTROL=FALSE !:
            open #FILENO: "Name= "&FILENAME$&", Shr",internal,input,relative  !:
            read #FILENO,using Control_,rec=1: MAT F$,MAT F !:
            close #FILENO: !:
            let FNREAD_CONTROL=TRUE
56008 _End_Read_Control: fnend 
56102 Read_Display: ! ***** Read Display File Contents
56104    def FNREAD_DISPLAY(FILENO,FILENAME$*64,MAT F$,LIMIT)
56106       let FNREAD_DISPLAY=FALSE !:
            open #FILENO: "Name= "&FILENAME$,display,input error _End_Read_Display
56108       if LIMIT then !:
               mat F$(LIMIT)=(NULL$)
56110       for ___LOOP=1 to UDIM(F$) !:
               linput #FILENO: F$(___LOOP) eof _Exit_Read_Display !:
            next ___LOOP !:
            linput #FILENO: DUMMY$ eof _Exit_Read_Display !:
            let ___LOOP=-(UDIM(F$)+1)
56112 ! 
56114 _Exit_Read_Display: ! ***** Exit
56116       close #FILENO: !:
            mat F$(ABS(___LOOP)-1) !:
            let FNREAD_DISPLAY=___LOOP-1
56118 _End_Read_Display: fnend 
56200 ! 
56202 Read_Field: ! ***** Read A Numeric Field
56204    def FNREAD_FIELD(FILENO,KEY$*64,RECORD,&FORM$,&FIELD)
56206       let FNREAD_FIELD=FALSE          !Assume error !:
            if LWRC$(FORM$(1:4))="form" then !:
               let FORM$=CFORM$(FORM$)      !Compile form
56208       if KEY$>NULL$ then !:
               restore #FILENO,search=KEY$: nokey _End_Read_Field !:
            else !:
               if RECORD then !:
                  restore #FILENO,rec=RECORD: norec _End_Read_Field
56210       read #FILENO,using FORM$,release: FIELD error _End_Read_Field !:
            let FNREAD_FIELD=TRUE           !Success
56212 _End_Read_Field: fnend 
56300 ! 
56302 Read_File: ! ***** Read Master File
56304    def FNREAD_FILE(FILENO,&FORM$,KEY$*64,RECORD,MAT F$,MAT F,SWITCH)
56306       let FNREAD_FILE=0               !Assume error !:
            if FILENO>0 then 
56308          if KEY$>NULL$ then !:
                  read #FILENO,using FORM$,search=KEY$: MAT F$,MAT F nokey _End_Read_File !:
               else !:
                  if RECORD then !:
                     read #FILENO,using FORM$,rec=RECORD: MAT F$,MAT F norec _End_Read_File !:
                  else !:
                     read #FILENO,using FORM$: MAT F$,MAT F eof _End_Read_File
56310       else 
56312          if KEY$>NULL$ then !:
                  read #ABS(FILENO),using FORM$,search=KEY$,release: MAT F$,MAT F nokey _End_Read_File !:
               else !:
                  if RECORD then !:
                     read #ABS(FILENO),using FORM$,rec=RECORD,release: MAT F$,MAT F norec _End_Read_File !:
                  else !:
                     read #ABS(FILENO),using FORM$,release: MAT F$,MAT F eof _End_Read_File
56314       end if 
56316       let FNREAD_FILE=(NOT SWITCH) OR FNUNPACK(SWITCH,MAT F$,MAT F)
56318 _End_Read_File: fnend 
56500 ! 
56502 Read_Name: ! ***** Read Record Description
56504    def FNREAD_NAME(FILENO,KEY$*40,RECORD,POSITION,LENGTH,&NAME$)
56506       let FNREAD_NAME=FALSE           !Assume error !:
            if KEY$>NULL$ then !:
               read #FILENO,using 56510,search=KEY$,release: NAME$ nokey _End_Read_Name !:
            else !:
               read #FILENO,using 56510,rec=RECORD,release: NAME$ norec _End_Read_Name
56508       let FNREAD_NAME=TRUE            !Success
56510       form POS POSITION,V LENGTH
56512 _End_Read_Name: fnend 
56600 ! 
56602 Read_Prior: ! ***** Read File In Reverse
56604    def FNREAD_PRIOR(FILENO,&FORM$,MAT F$,MAT F,SWITCH)
56606       let FNREAD_PRIOR=0 !:
            if FILENO>0 then !:
               read #FILENO,using FORM$,PRIOR: MAT F$,MAT F error _End_Read_Prior !:
            else !:
               read #ABS(FILENO),using FORM$,PRIOR,release: MAT F$,MAT F error _End_Read_Prior
56608       let FNREAD_PRIOR=(NOT SWITCH) OR FNUNPACK(SWITCH,MAT F$,MAT F)
56610 _End_Read_Prior: fnend 
56700 ! 
56702 Read_Window: ! ***** Read Window Record
56704    def FNREAD_WINDOW(FILENO,KEY$*8,&ROW,&COLUMN,&ROWS,&COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$)
56705 ! Read_Window, New Gui, Old Tools, Version 1
56706       let FNREAD_WINDOW=FALSE         !Assume error !:
            read #FILENO,key=RPAD$(KEY$,KLN(FILENO)): DUMMY$,ROWS,COLUMNS,ROW,COLUMN,DUMMY nokey _End_Read_Window !:
            let DUMMY=MAX(1,DUMMY)          !Screen fields
56708       mat A$(ROWS)                    !Window !:
            mat B$(DUMMY)                   !Window specs !:
            mat C$(DUMMY/DUMMY)             !Groups !:
            mat WORK$(ROWS)                 !Temporary
56710       reread #FILENO: KEY$,ROWS,COLUMNS,ROW,COLUMN,DUMMY,CONTEXTS,MAT A$,MAT B$,MAT WORK$,MAT WORK$,MAT C$ !:
            let FNREAD_WINDOW=TRUE          !Success
56712       for SPEC_INX=1 to UDIM(B$)      !Adjust rows for newgui
56714          let FIRST_COMMA=POS(B$(SPEC_INX),',',1) !:
               let WINDOW_SPEC_ROW_VAL=VAL(B$(SPEC_INX)(1:FIRST_COMMA-1))-(ROW-1) !:
               let B$(SPEC_INX)(1:FIRST_COMMA-1)=CNVRT$("pic(##)",WINDOW_SPEC_ROW_VAL)
56716       next SPEC_INX
56718       for SPEC_INX=1 to UDIM(B$)      !Adjust columns for newgui
56720          let FIRST_COMMA=POS(B$(SPEC_INX),',',1) !:
               let SECOND_COMMA=POS(B$(SPEC_INX),',',FIRST_COMMA+1) !:
               let WINDOW_SPEC_COL_VAL=VAL(B$(SPEC_INX)(FIRST_COMMA+1:SECOND_COMMA-1))-(COLUMN-1) !:
               let B$(SPEC_INX)(FIRST_COMMA+1:SECOND_COMMA-1)=CNVRT$("pic(##)",WINDOW_SPEC_COL_VAL)
56722       next SPEC_INX
56723       for SCREEN_ROW_INX=1 to UDIM(A$)  !Avoid label overwrites !:
               for SCREEN_COL_INX=1 to LEN(A$(SCREEN_ROW_INX)) !:
                  if A$(SCREEN_ROW_INX)(SCREEN_COL_INX:SCREEN_COL_INX)=="_" then !:
                     let A$(SCREEN_ROW_INX)(SCREEN_COL_INX:SCREEN_COL_INX)=" "
56724          next SCREEN_COL_INX !:
            next SCREEN_ROW_INX
56725       if ROWS>20 then !:
               let A$(ROWS-1)=A$(ROWS) !:
               let ROWS-=1 !:
               mat A$(ROWS)
56727 _End_Read_Window: fnend 
56900 ! 
56902 Resequence: ! ***** Resequence Mat Against Index
56904    def FNRESEQUENCE(MAT F,MAT INDEX)
56906       let FNRESEQUENCE=FALSE          !Assume error !:
            if UDIM(F)=UDIM(INDEX) then !:
               mat DUMMY(UDIM(F)) !:
               for LOOP__=1 to UDIM(F) !:
                  let DUMMY(LOOP__)=F(INDEX(LOOP__))  !Build array !:
               next LOOP__ !:
               mat F=DUMMY !:
               mat DUMMY(1)=(0) !:
               let FNRESEQUENCE=TRUE        !Success
56908 _End_Resequence: fnend 
57000 ! 
57002 Resequences: ! ***** Resequences Mat Against Index
57004    def FNRESEQUENCES(MAT F$,MAT INDEX)
57006       let FNRESEQUENCES=FALSE         !Assume error !:
            if UDIM(F$)=UDIM(INDEX) then !:
               mat DUMMY$(UDIM(F$)) !:
               for LOOP__=1 to UDIM(F$) !:
                  let DUMMY$(LOOP__)=F$(INDEX(LOOP__))  !Build sorted array !:
               next LOOP__ !:
               mat F$=DUMMY$ !:
               mat DUMMY$(1) !:
               let FNRESEQUENCES=TRUE
57008 _End_Resequences: fnend 
57100 ! 
57102 Reset: ! ***** Reset File To Key
57104    def FNRESET(FILENO,KEY$*64)
57106       let FNRESET=FALSE               !Assume error !:
            restore #FILENO,search=KEY$: nokey _End_Reset !:
            let FNRESET=TRUE                !Success
57108 _End_Reset: fnend 
57200 ! 
57202 Restore: ! ***** Restore File To Key
57204    def FNRESTORE(FILENO,KEY$*64)
57206       let FNRESTORE=FALSE             !Assume error !:
            restore #FILENO,search>=KEY$: nokey _End_Restore !:
            let FNRESTORE=TRUE              !Success
57208 _End_Restore: fnend 
57300 ! 
57302 Restore_Window: ! ***** Restore Window Data
57304    def FNRESTORE_WINDOW(FILENO,SCREEN$*8,&ROW,&COLUMN,&ROWS,&COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$)
57306       let FNRESTORE_WINDOW=TRUE       !Assume success !:
            if A$(1)=NULL$ then !:
               let FNREAD_WINDOW(FILENO,SCREEN$,ROW,COLUMN,ROWS,COLUMNS,MAT A$,MAT B$,MAT C$,MAT D$) !:
               let FNUNPACK(0,MAT B$,MAT DUMMY)
57308       rem WINDOW$(UDIM(A$))=A$ !:                                                     mat WINDOWSPEC$(UDIM(B$))=B$ !:                                                 mat GROUP$(UDIM(C$))=C$ !:                                                      mat HELPLEVEL$(UDIM(D$))=D$
57310 Endrestore_Window: fnend 
57800 ! 
57802 Rewrite_Rec: ! ***** Rewrite By Record Number
57804    def FNREWRITE_REC(FILENO,&FORM$,RECORD,MAT F$,MAT F,SWITCH)
57806       let FNREWRITE_REC=0 !:
            let SWITCH=FNPACK(SWITCH,MAT F$,MAT F) !:
            rewrite #FILENO,using FORM$,rec=RECORD: MAT F$,MAT F error _End_Rewrite_Rec !:
            let FNREWRITE_REC=SWITCH
57808 _End_Rewrite_Rec: fnend 
58100 ! 
58102 Restore_Last: ! ***** Restore File To Last Record
58104    def FNRESTORE_LAST(FILENO)
58106       let FNRESTORE_LAST=0 !:
            restore #FILENO,LAST: error _End_Restore_Last !:
            let FNRESTORE_LAST=1
58108 _End_Restore_Last: fnend 
58600 ! 
58602 Root_Alike: ! ***** Return Root For Allowed Users
58604    def FNROOT_ALIKE(FILENO,FILENAME$*32,USER$*18;MAT WORK$)
58606       let FNROOT_ALIKE=FALSE          !Assume the worst !:
            let FNREAD_DISPLAY(FILENO,FILENAME$,MAT WORK$,30)  !Get names !:
            let FNROOT_ALIKE=SGN(MAX(0,SRCH(WORK$,USER$)))  !Take a look !:
            mat WORK$(1)                    !Reclaim memory
58608 _End_Root_Alike: fnend 
58700 ! 
58702 Same_Elements: ! ***** Identify Duplicate Mat Elements
58704    def FNSAME_ELEMENTS(MAT F$,MAT F)
58706       let FNSAME_ELEMENTS=0           !Assume none !:
            mat F(UDIM(F$))=(FALSE)         !Prime !:
            for __LOOP=1 to UDIM(F$)-1 !:
               let WORK=__LOOP+1            !Work pointer !:
               if NOT F(__LOOP) then 
58708             do  !:
                     let DUMMY=MAX(0,SRCH(F$,F$(__LOOP),WORK)) !:
                     if DUMMY then !:
                        let F(DUMMY)=ON     !Flag duplicate !:
                        let WORK=DUMMY+1    !Adjust pointer
58710             loop UNTIL (NOT DUMMY)
58712          end if 
58714       next __LOOP !:
            let FNSAME_ELEMENTS=SUM(F)
58716 _End_Same_Elements: fnend 
58800 ! 
58802 Searchs: ! ***** Search Master File Data
58804    def FNSEARCH$*64(&WINDOW,FILENO,&FORM$,KEY$*64,MAT SPEC$,MAT H$,MAT F$,MAT F,MASK$*99,SWITCH,FUNCTION$*20,MAT WAIT)
58806       let FNSEARCH$=NULL$             !Default !:
            mat POINT(UDIM(F$)+UDIM(F)) !:
            mat _F$(UDIM(F$))=(NULL$) !:
            mat _F(UDIM(F))=(0) !:
            let CURFLD(1)
58808       do  !:
               let FNFUNCTION(FUNCTION$) !:
               let FNBLURB("Enter data for fields for which to Search.") !:
               let FNINPUT(WINDOW,SWITCH,MAT SPEC$,MAT H$,MAT _F$,MAT _F,MASK$,MAT WAIT) !:
               let CURFLD(CURFLD,FKEY+104*(FKEY==0)) !:
            loop UNTIL (FNCMDKEY(FUNCTION$,CMDKEY))
58810       if CMDKEY><9 then 
58812          let DUMMY$=RTRM$(FNKEY$(SWITCH,MAT _F$,MAT _F)) !:
               restore #FILENO,search>=DUMMY$,release: error 58820 !:
               let FNSPLIT_KEY(SWITCH,NULL$,MAT _F$,MAT _F) !:
               let WORK=0                   !Field counter !:
               for __LOOP=1 to MAX(UDIM(_F$),UDIM(_F))
58814             if __LOOP<=UDIM(_F$) AND LEN(TRIM$(_F$(__LOOP))) then !:
                     let _F$(__LOOP)=UPRC$(_F$(__LOOP)) !:
                     let POINT(WORK+=1)=__LOOP  !String candidate
58816             if __LOOP<=UDIM(_F) AND _F(__LOOP) then !:
                     let POINT(WORK+=1)=-__LOOP  !Numeric candidate
58818          next __LOOP !:
               mat POINT(WORK)              !Size array
58820          let FNBLANK(SWITCH,MAT F$,MAT F,0,1,1) !:
               let FNBLURB("Now Searching File. Press '*' to Interrupt Search.")
58822 ! 
58824 _Search_Loop: ! ***** Find Matching Records
58826          do WHILE (FNREAD_FILE(-FILENO,FORM$,NULL$,0,MAT F$,MAT F,SWITCH))
58828             mat FOUND(UDIM(POINT))=(0) !:
                  for __=1 to UDIM(POINT) !:
                     let WORK=ABS(POINT(__)) !:
                     if POINT(__)>0 AND FNCOMPARE(UPRC$(F$(WORK)),_F$(WORK)) then !:
                        let FOUND(__)=1
58830                if POINT(__)<0 AND F(WORK)=_F(WORK) then !:
                        let FOUND(__)=1
58832             next __ !:
                  if SUM(FOUND)<UDIM(FOUND) then !:
                     goto _Search_Loop
58834             let FNDISPLAY(WINDOW,SWITCH,MAT SPEC$,MAT F$,MAT F) !:
                  let FNBLURB(NULL$)
58836             do  !:
                     let _SEARCH$=FNREAD$("Is this the correct record:","N","Enter Yes to Accept this Record or No to Continue Searching.",NULL$,COMMENTR,COMMENTC,1,FUNCTION$,MAT WAIT) !:
                  loop UNTIL (((NOT CMDKEY) AND POS("YN",_SEARCH$,1)) OR FNCMDKEY(FUNCTION$,CMDKEY))
58838             let FNBLANK(0,MAT F$,MAT F,1,1,1) !:
                  let FNBLURB("Now Searching File. Press '*' to Interrupt Search.")
58840          loop UNTIL (_SEARCH$="Y" OR CMDKEY=9 OR "*"=(_SEARCH$:= KSTAT$))
58842          if _SEARCH$="*" OR CMDKEY=9 then !:
                  let FNBLANK(SWITCH,MAT F$,MAT F,1,1,1) !:
                  let FNMESSAGE(WINDOW,10,39,"Search Cancelled by Operator","Search")
58844          if _SEARCH$><"Y" AND SEARCH$><"*" AND NOT CMDKEY then !:
                  let FNBLANK(SWITCH,MAT F$,MAT F,1,1,1) !:
                  let FNMESSAGE(WINDOW,10,39,"End of File.","Search") !:
                  let CMDKEY(9)
58846          if _SEARCH$="Y" then !:
                  let FNSEARCH$=FNKEY$(SWITCH,MAT F$,MAT F)
58848          let FNBLANK(0,MAT F$,MAT F,1,1,0)
58850       end if 
58852 _End_Searchs: fnend 
58900 ! 
58902 Second: ! ***** Convert H:M:S To Seconds
58904    def FNSECOND(HHMMSS)
58906       let FNSECOND=0                  !Default !:
            if FNEDIT_TIME(HHMMSS) then !:
               let FNSECOND=(3600*IP(HHMMSS/1E4))+(60*IP(FP(HHMMSS/1E4)*100))+FP(HHMMSS/100)*100
58908 _End_Second: fnend 
59000 ! 
59002 Select: ! ***** Get Selection (Or Wait For Response)
59004    def FNSELECT(FUNCTION$*10)
59006       let FNSELECT=0                  !Default !:
            let FNFUNCTION(FUNCTION$)       !Show functions !:
            let FUNCTION$=RTRM$(FUNCTION$)  !Condition string
59008       do  !:
               let DUMMY$=NULL$ !:
               rinput fields "24,80,V 1,A,N": DUMMY$
59010       loop UNTIL ((NOT CMDKEY AND FUNCTION$=NULL$) OR (CMDKEY AND CMDKEY<11 AND RTRM$(FUNCTION$(CMDKEY:CMDKEY))>NULL$))
59012       let FNSELECT=CMDKEY             !Return value
59014 _End_Select: fnend 
59100 ! 
59102 Selects: ! ***** Point And Shoot From Scalar String
59104    def FNSELECT$*1(&WINDOW,MAT F$,MAT SPEC$,MAT H$,&CURRENT,ROW,COLUMN,ROWS,COLUMNS,STRING$*80,TITLE$*64,FUNCTION$,HEADING$*64,FRAME$*256,MAT WAIT)
59106       let FNSELECT$=NULL$             !Default !:
            mat F$(LEN(STRING$)) !:
            for ____=1 to LEN(STRING$) !:
               let F$(____)=" "&STRING$(____:____) !:
            next ____ !:
            let DUMMY=FNPAS(WINDOW,MAT F$,MAT SPEC$,MAT H$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,3,TITLE$,FUNCTION$,HEADING$,FRAME$,MAT WAIT) !:
            let FNSELECT$=STRING$(DUMMY:DUMMY)
59108 _End_Selects: fnend 
59400 ! 
59402 Show_List: ! ***** Like Pas But Without Pas
59404    def FNSHOW_LIST(&WINDOW,MAT F$,MAT SPEC$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,HEADING$*80,FRAME$*256)
59406       let FNSHOW_LIST=0               !Default !:
            let _PER_PAGE=UDIM(SPEC$)       !Default !:
            if ROW>0 then !:
               let FNPAS_PRE(WINDOW,MAT F$,MAT SPEC$,ROW,COLUMN,ROWS,COLUMNS,WIDTH,_PER_PAGE,TITLE$,HEADING$,FRAME$)
59408       let _PAGES=CEIL(UDIM(F$)/_PER_PAGE)  !Total pages !:
            let _LAST_PAGE=REM(UDIM(F$),_PER_PAGE)  !Last page count !:
            let _PAGE=CEIL(CURRENT/_PER_PAGE)  !Current page
59410       if _PAGES>1 then !:
               print #WINDOW,fields FNFIELD_G$(ROWS,(WIDTH+1)*COLUMNS-7,10,NULL$): FNOF$(_PAGE,_PER_PAGE,UDIM(F$))
59412       if _PAGE=_PAGES AND _LAST_PAGE then !:
               let WORK=UDIM(F$)            !Real size !:
               mat F$(_PER_PAGE*_PAGES)     !Full size !:
               let DUMMY=UDIM(F$)-_PER_PAGE+1  !Start !:
               print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY:UDIM(F$)) !:
               mat F$(WORK)
59414       let DUMMY=(_PAGE-1)*_PER_PAGE !:
            print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY+1:MIN(UDIM(F$),DUMMY+_PER_PAGE))
59416       let FNSHOW_LIST=TRUE !:
            if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
59418 _End_Show_List: fnend 
59900 ! 
59902 Show: ! ***** Display Like Point And Shoot, But No Selection
59904    def FNSHOW(&WINDOW,MAT F$,MAT SPEC$,MAT H$,CURRENT,ROW,COLUMN,ROWS,COLUMNS,WIDTH,TITLE$*80,FUNCTION$*20,HEADING$*80,FRAME$*256,MAT WAIT)
59906       let FNSHOW=0                    !Default !:
            let _PER_PAGE=UDIM(SPEC$)       !Default !:
            if ROW>0 then !:
               let FNPAS_PRE(WINDOW,MAT F$,MAT SPEC$,ROW,COLUMN,ROWS,COLUMNS,WIDTH,_PER_PAGE,TITLE$,HEADING$,FRAME$)
59908       let FNFUNCTION(FUNCTION$) !:
            let _PAGES=CEIL(UDIM(F$)/_PER_PAGE)  !Total pages !:
            let _LAST_PAGE=REM(UDIM(F$),_PER_PAGE)  !Last page count !:
            let _PAGE=CEIL(CURRENT/_PER_PAGE)  !Current page !:
            let CURRENT=REM(CURRENT-1,_PER_PAGE)+1  !Current on page
59910 ! 
59912 _Show_Loop: ! ***** Main Driver
59914       do  !:
               let WORK$=FNFIELD_G$(ABS(ROWS),(WIDTH+1)*COLUMNS-7,10,NULL$) !:
               if _PAGES>1 then !:
                  print #WINDOW,fields WORK$: FNOF$(_PAGE,_PER_PAGE,UDIM(F$)) !:
               else !:
                  print #WINDOW,fields WORK$: RPT$("",10)
59916          if _PAGE=_PAGES AND _LAST_PAGE then !:
                  let WORK=UDIM(F$)         !Real size !:
                  mat F$(_PER_PAGE*_PAGES)  !Full size !:
                  let DUMMY=UDIM(F$)-_PER_PAGE+1  !Start !:
                  print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY:UDIM(F$)) !:
                  mat F$(WORK)              !Restore size !:
                  let CURRENT=MIN(CURRENT,_LAST_PAGE)  !Set cursor
59918          let CURFLD(CURRENT,FKEY) !:
               let DUMMY=(_PAGE-1)*_PER_PAGE !:
               print #WINDOW,fields MAT SPEC$: MAT F$(DUMMY+1:MIN(UDIM(F$),DUMMY+_PER_PAGE))(1:56) !:
               do  !:
                  let DUMMY$ = NULL$ !:
                  rinput fields "24,80,G 1,IXA" : DUMMY$ !:
               loop UNTIL CMDKEY = 9 OR FKEY = 90 OR FKEY = 91 OR FKEY=112 OR FKEY=113
59920          let CURRENT=CURFLD !:
               if (FKEY=91 OR (_PAGE<_PAGES AND CURRENT=_PER_PAGE AND FKEY=106)) then !:
                  let _PAGE=MIN(_PAGE+1,_PAGES)  !Page down
59922          if FKEY=90 OR (_PAGE>1 AND CURRENT=1 AND FKEY=105) then !:
                  let _PAGE=MAX(_PAGE-1,1)  !Page up
59924          if FKEY=112 then !                               Home key !:
                  let _PAGE=1
59926          if FKEY=113 then !                               End key !:
                  let _PAGE=_PAGES
59928       loop UNTIL ((NOT FKEY) OR FNCMDKEY(FUNCTION$,CMDKEY))
59930 ! 
59932 _Exit_Show: ! ***** Exit Function
59934       if COLUMN>0 then !:
               let FNPOP_WINDOW(WINDOW,1,OFF)
59936 _End_Show: fnend 
60800 ! 
60802 Takes: ! ***** Take String
60804    def FNTAKE$*1024(&STRING$,LENGTH)
60806       let FNTAKE$=NULL$ !:
            if LENGTH>0 then !:
               let FNTAKE$=STRING$(1:LENGTH) !:
               let STRING$(1:LENGTH)=NULL$
60808       if LENGTH<0 then !:
               let DUMMY=LEN(STRING$) !:
               let FNTAKE$=STRING$(DUMMY+LENGTH+1:DUMMY) !:
               let STRING$(DUMMY+LENGTH+1:DUMMY)=NULL$
60810 _End_Takes: fnend 
61200 ! 
61202 Total_Mats: ! ***** Accumulate Keyed Totals
61204    def FNTOTAL_MATS(MAT F$,MAT F,KEY$*64,AMOUNT)
61206       let FNTOTAL_MATS=0              !Assume error !:
            if KEY$>NULL$ then 
61208          if F$(1)=NULL$ AND UDIM(F$)<2 then !:
                  mat F$(1)=(KEY$)          !Prime !:
                  mat F(1)=(0)              !Ditto
61210          let DUMMY=SRCH(F$,KEY$)      !Find key !:
               if DUMMY<1 then !                               New key !:
                  let DUMMY=UDIM(F$)+1      !New size !:
                  mat F$(DUMMY)             !Resize !:
                  mat F(DUMMY) !:
                  let F$(DUMMY)=KEY$        !Set key
61212          let F(DUMMY)+=AMOUNT         !Increment !:
               let FNTOTAL_MATS=DUMMY       !Success
61214       end if 
61216 _End_Total_Mats: fnend 
62300 ! 
62302 Vector_Spec: ! ***** Build Vector Field Spec
62304    def FNVECTOR_SPEC(MAT F$,ATTRIBUTE$*18,ROW,COLUMN,ROWS,WIDTH)
62306       let FNVECTOR_SPEC=TRUE          !Assume success !:
            let DUMMY$=","&CNVRT$("ZD 2",COLUMN)&",G  "&CNVRT$("ZD 2",WIDTH) !:
            let DUMMY$=RPAD$(DUMMY$,11)&FNCAPTION$(",",ATTRIBUTE$) !:
            mat F$(ROWS)=(DUMMY$) !:
            for ___LOOP=ROW to ROW+ROWS-1 !:
               let F$(___LOOP-ROW+1)(1:0)=CNVRT$("ZD 2",___LOOP)  !Row !:
            next ___LOOP
62308 _End_Vector_Spec: fnend 
62400 ! 
62402 Verify: ! ***** Verify Numeric
62404    def FNVERIFY(NUMERIC$*128)
62406       let FNVERIFY=FALSE              !Assume error !:
            let NUMERIC=VAL(NUMERIC$) conv _End_Verify  !Convert !:
            let FNVERIFY=TRUE               !Success
62408 _End_Verify: fnend 
62700 ! 
62702 Wb_File_Names: ! ***** Build Wb File Name
62704    def FNWB_FILE_NAME$*60(FILENAME$*20,PATH$*20,DRIVE$*20)
62706       let FILENAME$=LTRM$(RTRM$(FILENAME$)) !:
            let PATH$=LTRM$(RTRM$(PATH$)) !:
            let DRIVE$=LTRM$(DRIVE$) !:
            let FNWB_FILE_NAME$=FILENAME$ !:
            if LEN(PATH$) AND NOT LEN(DRIVE$) then !:
               let FNWB_FILE_NAME$=FILENAME$&"/"&PATH$
62708       if NOT LEN(PATH$) AND LEN(DRIVE$) then !:
               let FNWB_FILE_NAME$=FILENAME$&"//"&DRIVE$
62710       if LEN(PATH$) AND LEN(DRIVE$) then !:
               let FNWB_FILE_NAME$=RTRM$(FILENAME$&"/"&PATH$&"/"&DRIVE$)
62712 _End_Wb_File_Names: fnend 
63100 ! 
63102 Windows: ! ***** Build Window String
63104    def FNWINDOW$*64(ROW,COLUMN,ROWS,COLUMNS)
63106       let FNWINDOW$=NULL$             !Assume error !:
            let ROWS+=ROW-1                 !Ending row !:
            let COLUMNS+=COLUMN-1           !Ending column !:
            let DUMMY$="Srow= "&STR$(ROW) !:
            let DUMMY$(99:0)=", Scol= "&STR$(COLUMN) !:
            let DUMMY$(99:0)=", Erow= "&STR$(ROWS) !:
            let DUMMY$(99:0)=", Ecol= "&STR$(COLUMNS) !:
            let FNWINDOW$=DUMMY$            !Success
63108 _End_Windows: fnend 
65000 ! 
65100 Addenda: ! ***** Addenda Processing To Fm Functions
65110    def FNADDENDA(SWITCH,_FUNCTION)
65120       let FNADDENDA=FALSE             !Assume error !:
            do  !:
               on IP(SWITCH) gosub _Addenda1,_Addenda2,_End_Addenda,_End_Addenda,_Addenda5,_Addenda6 !:
               goto _End_Addenda            !Exit do
65130 ! 
65140 _Addenda1: ! ***** Shipper Header Addenda
65150          if _FUNCTION=9 then gosub _Addenda1_Import
65160          if IP(_FUNCTION)=10 then gosub _Addenda1_Finished
65170          on _FUNCTION gosub _Addenda1_Add,_Addenda1_Delete2,_Addenda1_Change,_Addenda1_Delete,_Addenda1_Inquire
65180          return 
65190 ! 
65200 _Addenda1_Add: ! ***** Addenda 1 Add
65210          if CMDKEY><9 then 
65220             if TAXABLE$ = "Y" AND FNREAD_FILE(TAXMAST,FORM$(TAXMAST_),STR$(F(COMPANY_SH))&CNVRT$("zd 3",F(TAX_JUR_SH)),0,MAT TAX$,MAT TAX,0) then !:
                     let F(FRT_TAXABLE_SH)=FNOCTAL_DIGIT(TAX$(4),TAX$(5),TAX$(6)) !:
                     let F(PERCENT1_SH)=TAX(1)*(-1**(TAX$(10)=="Y")) !:
                     let F(PERCENT2_SH)=TAX(2)*(-1**(TAX$(11)=="Y")) !:
                     let F(PERCENT3_SH)=TAX(3)*(-1**(TAX$(12)=="Y"))
65230             let DUMMY2=FNPROCESS_DETAIL(_FUNCTION)
65232          else 
65235             let DUMMY2=8
65240          end if 
65250          if DUMMY2=8 then !                                Cancel order !:
                  let FNADDENDA=TRUE        !Operation success !:
                  let CMDKEY(9)             !But patient died !:
                  let FNADDENDA(SWITCH+.1,4)  !Delete list !:
                  return 
65260          if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"BT",19),0,MAT CUS$,MAT CUS,0) then !:
                  let CUS(CURRENT_ORDERS_U)+=SHIPPERH(INVOICE_TOTAL_SH) !:
                  let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65270          if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"ST"&RPAD$(SHIPPERH$(DEST_SH),9),0,MAT CUS$,MAT CUS,0) then !:
                  let CUS(CURRENT_ORDERS_U)+=SHIPPERH(INVOICE_TOTAL_SH) !:
                  let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65280          if DUMMY2=7 then !:
                  let FIRST_SHIPPER$=SHIPPERH$(SHIPPER_SH) !:
                  let CMDKEY(10)
65290          return 
65300 ! 
65310 _Addenda1_Delete2: ! ***** Addenda 1 For Special Edit
65311          let FNREAD_FILE(SHIPPERH,FORM$(SHIPPERH_),F$(SHIPPER_SH),0,MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_)
65312          let CONVERTED_ORDER=0 !:
               if TRIM$(SHIPPERH$(ORDER_SH))<>NULL$ AND FNREAD_FILE(ORDERH,FORM$(ORDERH_),SHIPPERH$(ORDER_SH),0,MAT ORH$,MAT ORH,ORDERH_) then !:
                  let CONVERTED_ORDER=(ORH(15)<=2)
65313          mat SHIPDELH$ = SHIPPERH$    !Copy arrays to del hist !:
               mat SHIPDELH = SHIPPERH
65314          let SHIPDELL(POINTER_SL) = SHIPDELH(POINTER_SH) !:
               mat SP_LIST(1)=(0)
65315          do WHILE SHIPDELL(POINTER_SL) AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,SHIPDELL(POINTER_SL),MAT SHIPDELL$,MAT SHIPDELL,SHIPPERL_)
65316             let FNWRITE(SHIPDELL,FORM$(SHIPPERL_),MAT SHIPDELL$,MAT SHIPDELL,SHIPPERL_) !:
                  let FNAPPEND(MAT SP_LIST,REC(SHIPDELL))
65317          loop 
65318          let SHIPDELH(POINTER_H)=FNREWRITE_LL(SHIPDELL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPDELL$,MAT SHIPDELL,MAT SP_LIST,POINTER_SL) !:
               let FNWRITE(SHIPDELH,FORM$(SHIPPERH_),MAT SHIPDELH$,MAT SHIPDELH,SHIPPERH_)
65319          let SHIPPERL(POINTER_SL) = SHIPPERH(POINTER_SH) !:
               mat SP_LIST(1)=(0)
65320          if FNMAKE_LL_PAS(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST$,MAT LIST,SHIPPERH(POINTER_SH),POINTER_SL) then 
65330             for _=1 to UDIM(LIST) !:
                     if LIST(_) AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,LIST(_),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_) then 
65332                   delete #SHIPPERL,key=FNKEY$(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL): error Ignore
65334                   if CONVERTED_ORDER AND FNMATCH_ORDERL_TO_SHIPPERL(ORDERL2,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,ORDERL_REC) then !:
                           let ORDERL(SHIP_TO_DATE_L)=ORDERL(SHIP_TO_DATE_L)-SHIPPERL(SHIPPED_SL) !:
                           let ORDERL(BACK_L)=FNEITHER(0,ORDERL(ORDERED_L)-ORDERL(SHIP_TO_DATE_L),ORDERL(SHIP_TO_DATE_L)==0) !:
                           let FNREWRITE(ORDERL2,FORM$(ORDERL_),NULL$,ORDERL_REC,MAT ORDERL$,MAT ORDERL,0)
65336                end if 
65340             next _
65350             if FNRESET(SHIPPERH,SHIPPERH$(SHIPPER_SH)) then 
65360                if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"BT",19),0,MAT CUS$,MAT CUS,0) then !:
                        let CUS(CURRENT_ORDERS_U)+=SHIPPERH(INVOICE_TOTAL_SH) !:
                        let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65370                if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"ST"&RPAD$(SHIPPERH$(DEST_SH),9),0,MAT CUS$,MAT CUS,0) then !:
                        let CUS(CURRENT_ORDERS_U)+=SHIPPERH(INVOICE_TOTAL_SH) !:
                        let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65380                let FNPUT_DOCUMENT(F(COMPANY_SH),8,F$(SHIPPER_SH))
65390             end if  !:
               end if 
65400          let FNADDENDA = TRUE !:
               return 
65410 ! 
65420 _Addenda1_Change: ! ***** Addenda 1 Change
65430          if CMDKEY=9 then 
65440             let WORK=SHIPPERH(POINTER_SH) !:
                  if FNREAD_FILE(SHIPPERH,FORM$(SHIPPERH_),FNKEY$(SHIPPERH_,MAT SHIPPERH$,MAT SHIPPERH),0,MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_) then !:
                     let SHIPPERH(POINTER_SH)=WORK !:
                     let FNREWRITE(SHIPPERH,FORM$(SHIPPERH_),FNKEY$(SHIPPERH_,MAT SHIPPERH$,MAT SHIPPERH),0,MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_)
65450          else 
65460             let DUMMY2=FNPROCESS_DETAIL(_FUNCTION)
65470             if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"BT",19),0,MAT CUS$,MAT CUS,0) then !:
                     let CUS(CURRENT_ORDERS_U)+=(SHIPPERH(INVOICE_TOTAL_SH) -OLD_INVOICE_TOTAL) !:
                     let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65480             if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"ST"&RPAD$(SHIPPERH$(DEST_SH),9),0,MAT CUS$,MAT CUS,0) then !:
                     let CUS(CURRENT_ORDERS_U)+=(SHIPPERH(INVOICE_TOTAL_SH) -OLD_INVOICE_TOTAL) !:
                     let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65490             if DUMMY2=7 then !:
                     let FIRST_SHIPPER$=SHIPPERH$(SHIPPER_SH) !:
                     let CMDKEY(10)
65500          end if 
65510          return 
65520 ! 
65522 _Addenda1_Delete: ! ***** Addenda 1 Delete
65524          let FNREAD_FILE(SHIPPERH,FORM$(SHIPPERH_),F$(SHIPPER_SH),0,MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_)
65525          let CONVERTED_ORDER=0 !:
               if TRIM$(SHIPPERH$(ORDER_SH))<>NULL$ AND FNREAD_FILE(ORDERH,FORM$(ORDERH_),SHIPPERH$(ORDER_SH),0,MAT ORH$,MAT ORH,ORDERH_) then !:
                  let CONVERTED_ORDER=(ORH(15)<=2)
65526          if NOT FP(SWITCH) then !  Don't write if rejected under add
65528             mat SHIPDELH$= SHIPPERH$ !:
                  mat SHIPDELH = SHIPPERH !:
                  let SHIPDELL(POINTER_SL) = SHIPDELH(POINTER_SH) !:
                  mat SP_LIST(1)=(0)
65530             do WHILE SHIPDELL(POINTER_SL) AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,SHIPDELL(POINTER_SL),MAT SHIPDELL$,MAT SHIPDELL,SHIPPERL_)
65532                let FNWRITE(SHIPDELL,FORM$(SHIPPERL_),MAT SHIPDELL$,MAT SHIPDELL,SHIPPERL_) !:
                     let FNAPPEND(MAT SP_LIST,REC(SHIPDELL))
65534             loop 
65536             let SHIPDELH(POINTER_H)=FNREWRITE_LL(SHIPDELL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPDELL$,MAT SHIPDELL,MAT SP_LIST,POINTER_SL) !:
                  let FNWRITE(SHIPDELH,FORM$(SHIPPERH_),MAT SHIPDELH$,MAT SHIPDELH,SHIPPERH_)
65538          end if 
65540          let SHIPPERL(POINTER_SL) = SHIPPERH(POINTER_SH) !:
               mat SP_LIST(1)=(0) !:
               if FNMAKE_LL_PAS(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST$,MAT LIST,SHIPPERH(POINTER_SH),POINTER_SL) OR NOT SHIPPERH(POINTER_SH) then 
65550             for _X_=1 to UDIM(LIST) !:
                     if LIST(_X_) AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,LIST(_X_),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_) then !:
                        let FNMAKE_COMMITTED(MAT SHIPPERL$,MAT SHIPPERL,MAT OLD_LOT$,MAT OLD_LOT,-1) !:
                        delete #SHIPPERL,key=FNKEY$(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL): error Ignore
65552                if CONVERTED_ORDER AND FNMATCH_ORDERL_TO_SHIPPERL(ORDERL2,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,ORDERL_REC) then !:
                        let ORDERL(SHIP_TO_DATE_L)=ORDERL(SHIP_TO_DATE_L)-SHIPPERL(SHIPPED_SL) !:
                        let ORDERL(BACK_L)=FNEITHER(0,ORDERL(ORDERED_L)-ORDERL(SHIP_TO_DATE_L),ORDERL(SHIP_TO_DATE_L)==0) !:
                        let FNREWRITE(ORDERL2,FORM$(ORDERL_),NULL$,ORDERL_REC,MAT ORDERL$,MAT ORDERL,0)
65560             next _X_
65570             let FNDELETE_KEY(LABEL,SHIPPERH$(SHIPPER_SH)) !:
                  let FNDELETE_KEY(SHIPLOT,SHIPPERH$(SHIPPER_SH))
65580             if FNRESET(SHIPPERH,SHIPPERH$(SHIPPER_SH)) then 
65590                if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"BT",19),0,MAT CUS$,MAT CUS,0) then !:
                        let CUS(CURRENT_ORDERS_U)+=SHIPPERH(INVOICE_TOTAL_SH) !:
                        let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65600                if FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"ST"&RPAD$(SHIPPERH$(DEST_SH),9),0,MAT CUS$,MAT CUS,0) then !:
                        let CUS(CURRENT_ORDERS_U)+=SHIPPERH(INVOICE_TOTAL_SH) !:
                        let FNREWRITE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$,0,MAT CUS$,MAT CUS,0)
65605             end if  !:
               end if 
65610          let FNPUT_DOCUMENT(F(COMPANY_SH),8,F$(SHIPPER_SH)) !:
               let FNADDENDA=TRUE
65630          return 
65640 ! 
65650 _Addenda1_Inquire: ! ***** Shipper Header Inquire
65660          if CMDKEY = 1 then 
65670             let FNRESTORE_WINDOW(SCREENS,"SHIPHADD",ADHROW,ADHCOLUMN,ADHROWS,ADHCOLUMNS,MAT ADHW$,MAT ADHSPEC$,MAT DUMBGS$,MAT WORK$)
65680             let FNPUSH_WINDOW(WINDOW,MAT ADHW$,ADHROW,ADHCOLUMN,ADHROWS,ADHCOLUMNS,NULL$,NULL$,NULL$)
65690             print #WINDOW,fields MAT ADHSPEC$ : SHIPPERH$(MASTER_BOL_SH),SHIPPERH$(LOC_ID_SH),SHIPPERH$(LOC_QUAL_SH),SHIPPERH$(ALT_ORD_SH),SHIPPERH(SHIPPER_DATE_SH),SHIPPERH(ASN_DATE_SH),SHIPPERH$(HAZARDOUS_SH),TAXABLE$,SHIPPERH(TAX_JUR_SH),SHIPPERH(COMPANY_SH),SHIPPERH(CURRENCY_SH),SHIPPERH(WSID_SH) conv 65700 !:
                  let FNSELECT("        H ")
65700             let FNPOP_WINDOW(WINDOW,1,OFF) !:
                  let FNADDENDA=TRUE !:
                  return 
65710          end if 
65720          let DUMMY=FNPROCESS_DETAIL(_FUNCTION) !:
               let FNADDENDA=TRUE !:
               return 
65730 ! 
65740 _Addenda1_Import: ! ***** Import Other Record
65750          mat LIST(0) !:
               let SHIPPERL(POINTER_SL)=SHIPPERH(POINTER_SH)
65760          do WHILE SHIPPERL(POINTER_SL) AND FNREAD_FILE(SHIPPERL,FORM$(SHIPPERL_),NULL$,SHIPPERL(POINTER_SL),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_) !:
                  let SHIPPERL$(SHIPPER_SL)=SHIPPERH$(SHIPPER_SH) !:
                  let SHIPPERL(DATE_ADDED_SL)=DATE !:
                  let SHIPPERL(TIME_ADDED_SL)=UDIM(LIST) !:
                  let FNWRITE(SHIPPERL,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_) !:
                  let FNAPPEND(MAT LIST,REC(SHIPPERL))
65770          loop 
65780          let SHIPPERH(POINTER_SH)=FNREWRITE_LL(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT LIST,POINTER_SL)
65790          return 
65800 ! 
65810 _Addenda1_Finished: ! ***** Conclusion Routine
65820          return 
65830 ! 
65840 _Addenda2: ! ***** Addenda 2 Controller
65850          if IP(_FUNCTION)=10 then gosub _Addenda2_Finished
65860          on _FUNCTION gosub _Addenda2_Add,_End_Addenda,_Addenda2_Change,_Addenda2_Delete,_Addenda2_Inquire
65870          return 
65880 ! 
65885 _Addenda2_Add: ! ***** Shipper Line Addenda
65890          if CMDKEY=9 then return 
65895          if CMDKEY=8 then !                               Finish !:
                  let CMDKEY(9) !:
                  let OUT=TRUE              !Force exit !:
                  mat INV$=(NULL$) !:
                  mat INV=(0) !:
                  let FNADDENDA=TRUE !:
                  return 
65900 ! 
65905          let _INDEX = 0 !:
               let FNDELETE_KEY(SHIPLOT,RPAD$(SHIPPERL$(SHIPPER_SL),8)&RPAD$(SHIPPERL$(PART_SL),15))
65910          do WHILE _INDEX<=29 AND LOT_$(_INDEX+=1) > NULL$ !:
                  let FNXREF_FIELDS(SHIPLOT_,MAT SHIPLOT$,MAT SHIPLOT) !:
                  let FNWRITE(SHIPLOT,FORM$(SHIPLOT_),MAT SHIPLOT$,MAT SHIPLOT,0) !:
               loop 
65915 ! 
65975          if SHIPPERL$(PART_SL)="T" then !                               Standard comment
65980             let FNREAD_FILE(COMMENT,FORM$(COMMENT_),RPAD$(UPRC$(SHIPPERL$(DESC_SL)),10),0,MAT COM$,MAT COM,COMMENT_) !:
                  let _COMMENTS=6           !Find last line !:
                  do  !:
                     let _COMMENTS-=1 !:
                  loop UNTIL (_COMMENTS=1 OR COM$(_COMMENTS)>NULL$)
65985             if _INSERT_FLAG AND _COMMENTS>2 then !:
                     let _LINES_TO_ADD=_COMMENTS-2 !:
                     mat WORK(UDIM(L$)+_LINES_TO_ADD)=(1) !:
                     mat WORK(CURRENT:CURRENT+_LINES_TO_ADD-1)=(0) !:
                     let FNEXPAND_MATS(MAT L$,MAT WORK,NULL$) !:
                     let FNEXPAND_MAT(MAT L,MAT WORK,0)
65990             for _=2 to _COMMENTS-1 !:
                     let FNDEFAULT(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL) !:
                     let SHIPPERL(TIME_ADDED_SL)=TIME_ADDED_X-=1  !Special key !:
                     let SHIPPERL$(PART_SL)="C" !:
                     let SHIPPERL$(DESC_SL)=COM$(_) !:
                     let FNWRITE(SHIPPERL,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_)
65995                if _INSERT_FLAG then !:
                        let L$(CURRENT)=FNMAKE_LINE$(SWITCH,MAT SHIPPERL$,MAT SHIPPERL) !:
                        let L(CURRENT)=REC(SHIPPERL) !:
                        let CURRENT+=1 !:
                     else !:
                        let FNAPPENDS(MAT L$,FNMAKE_LINE$(SWITCH,MAT SHIPPERL$,MAT SHIPPERL)) !:
                        let FNAPPEND(MAT L,REC(SHIPPERL))
66000             next _
66005             let SHIPPERL$(PART_SL)="C"  !Last line !:
                  let SHIPPERL$(DESC_SL)=COM$(_)  !Is done by listfm !:
                  let SHIPPERL(TIME_ADDED_SL)=TIME_ADDED_X-=1  !Special key !:
                  mat INV$=(NULL$) !:
                  mat INV=(0) !:
                  let FNADDENDA=TRUE !:
                  return 
66010          end if 
66015 ! 
66020          if NOT POS("CT",SHIPPERL$(PART_SL)) then !                    Line item
66025             if SHIPPERL$(PART_SL)><"F" then 
66030                let SHIPPERL(ITYPE_SL)=POS("QV",ITYPE$) !:
                     let FNMAKE_COMMITTED(MAT SHIPPERL$,MAT SHIPPERL,MAT LOT_$,MAT LOT_,1)
66040             else 
66045                let SHIPPERL(CREDIT_SL)=FNEITHER(CONTROL(21),FRT_ACCT(SHIPPERL(PLANT_SL)),(CONTROL$(34)><"C"))
66050             end if 
66055          end if 
66060          let FNADDENDA=TRUE !:
               return 
66180 ! 
66190 _Addenda2_Change: ! ***** Shipper Line Addenda
66200          if CMDKEY=9 then !:
                  return 
66210          if OSHIPL$(PART_SL)><"F" then 
66215             let OSHIPL(ITYPE_SL)=POS("QV",OITYPE$)
66220             if OSHIPL(SHIPPED_SL)<>SHIPPERL(SHIPPED_SL) OR NOT FNCOMPARE_MATS(MAT OLD_LOT$,MAT LOT_$) OR NOT FNCOMPARE_MAT(MAT OLD_LOT,MAT LOT_) then !:
                     let FNMAKE_COMMITTED(MAT OSHIPL$,MAT OSHIPL,MAT OLD_LOT$,MAT OLD_LOT,-1)
66225             let FNDELETE_KEY(SHIPLOT,FNKEY$(SHIPLOT_,MAT OSHIPL$,MAT OSHIPL))
66227             if CONVERTED_ORDER AND FNMATCH_ORDERL_TO_SHIPPERL(ORDERL2,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,ORDERL_REC) then !:
                     let ORDERL(SHIP_TO_DATE_L)=ORDERL(SHIP_TO_DATE_L)-OSHIPL(SHIPPED_SL)+SHIPPERL(SHIPPED_SL) !:
                     let ORDERL(BACK_L)=FNEITHER(0,ORDERL(ORDERED_L)-ORDERL(SHIP_TO_DATE_L),ORDERL(SHIP_TO_DATE_L)==0) !:
                     let ORDERL$(CUSTOMER_PART_L)=SHIPPERL$(CUSTOMER_PART_SL) !:
                     let FNREWRITE(ORDERL2,FORM$(ORDERL_),NULL$,ORDERL_REC,MAT ORDERL$,MAT ORDERL,0)
66320          end if 
66325          if SHIPPERL$(PART_SL)><"F" then 
66330             let SHIPPERL(ITYPE_SL)=POS("QV",ITYPE$) !:
                  if OSHIPL(SHIPPED_SL)<>SHIPPERL(SHIPPED_SL) OR NOT FNCOMPARE_MATS(MAT OLD_LOT$,MAT LOT_$) OR NOT FNCOMPARE_MAT(MAT OLD_LOT,MAT LOT_) then !:
                     let FNMAKE_COMMITTED(MAT SHIPPERL$,MAT SHIPPERL,MAT LOT_$,MAT LOT_,1)
66335          end if 
66360          if SHIPPERL$(PART_SL)><"F" then 
66420             let _INDEX=0 !:
                  if FNRESET(SHIPLOT,DUMMY$:=RPAD$(SHIPPERL$(SHIPPER_SL),8)&RPAD$(SHIPPERL$(PART_SL),15)) then 
66430                do WHILE FNREAD_FILE(SHIPLOT,FORM$(SHIPLOT_),NULL$,0,MAT SHIPLOT$,MAT SHIPLOT,0) AND DUMMY$=FNKEY$(SHIPLOT_,MAT SHIPLOT$,MAT SHIPLOT)(1:23) !:
                        delete #SHIPLOT,key=FNKEY$(SHIPLOT_,MAT SHIPLOT$,MAT SHIPLOT): !:
                     loop 
66440             end if 
66450             do WHILE _INDEX<=29 AND LOT_$(_INDEX+=1) > NULL$ !:
                     let FNXREF_FIELDS(SHIPLOT_,MAT SHIPLOT$,MAT SHIPLOT) !:
                     let FNWRITE(SHIPLOT,FORM$(SHIPLOT_),MAT SHIPLOT$,MAT SHIPLOT,0) !:
                  loop 
66460          end if 
66500          let FNADDENDA=TRUE !:
               return 
66510 ! 
66520 _Addenda2_Delete: ! ***** Shipper Line Addenda
66530          if NOT POS("CT",SHIPPERL$(PART_SL)) then !                               Line item
66540             if SHIPPERL$(PART_SL)><"F" then 
66550                let SHIPPERL(ITYPE_SL)=POS("QV",ITYPE$) !:
                     let FNMAKE_COMMITTED(MAT OSHIPL$,MAT OSHIPL,MAT OLD_LOT$,MAT OLD_LOT,-1) !:
                     let FNDELETE_KEY(SHIPLOT,FNKEY$(SHIPLOT_,MAT SHIPPERL$,MAT SHIPPERL))
66660                if FNRESET(LABEL,DUMMY$:=FNKEY$(LABEL_,MAT SHIPPERL$,MAT SHIPPERL)) then 
66670                   do WHILE FNREAD_FILE(LABEL,FORM$(LABEL_),NULL$,0,MAT _SERIAL$,MAT _SERIAL,0) AND DUMMY$=FNKEY$(LABEL_+.1,MAT _SERIAL$,MAT _SERIAL) !:
                           delete #LABEL,key=FNKEY$(LABEL_+.1,MAT _SERIAL$,MAT _SERIAL): !:
                        loop 
66680                end if 
66690                if FNRESET(SHIPLOT,DUMMY$:=RPAD$(SHIPPERL$(SHIPPER_SL),8)&RPAD$(SHIPPERL$(PART_SL),15)) then 
66700                   do WHILE FNREAD_FILE(SHIPLOT,FORM$(SHIPLOT_),NULL$,0,MAT SHIPLOT$,MAT SHIPLOT,0) AND DUMMY$=FNKEY$(SHIPLOT_,MAT SHIPLOT$,MAT SHIPLOT)(1:23) !:
                           delete #SHIPLOT,key=FNKEY$(SHIPLOT_,MAT SHIPLOT$,MAT SHIPLOT): !:
                        loop 
66710                end if 
66720                let DUMMY$=RPAD$(SHIPPERL$(PART_SL),15)&RPAD$(SHIPPERL$(REV_SL),4)&RPAD$(SHIPPERL$(ORDER_SL),8) !:
                     if FNRESET(ORDERL2,DUMMY$) then 
66722                   do WHILE FNREAD_FILE(ORDERL2,FORM$(ORDERL_),NULL$,0,MAT ORDERL$,MAT ORDERL,0) AND RPAD$(ORDERL$(PART_L),15)&RPAD$(ORDERL$(REV_L),4)&RPAD$(ORDERL$(ORDER_L),8)==DUMMY$
66723                      if ORDERL(DATE_ADDED_L)==SHIPPERL(DATE_ADDED_SL) AND ORDERL(TIME_ADDED_L)==SHIPPERL(TIME_ADDED_SL) then !:
                              let ORDERL(SHIP_TO_DATE_L)-=SHIPPERL(SHIPPED_SL) !:
                              let ORDERL(BACK_L)=FNEITHER(0,ORDERL(ORDERED_L)-ORDERL(SHIP_TO_DATE_L),ORDERL(SHIP_TO_DATE_L)==0) !:
                              let FNREWRITE(ORDERL2,FORM$(ORDERL_),NULL$,0,MAT ORDERL$,MAT ORDERL,0)
66724                   loop 
66725                end if 
66730             end if 
66760          end if 
66770          let FNADDENDA=TRUE !:
               return 
66780 ! 
66790 _Addenda2_Inquire: ! ***** Auxilliary Functions
66795          if CMDKEY=6 AND FNREAD_NAME(BLANKETL2,RPAD$(SHIPPERL$(CUSTOMER_SL),8)&RPAD$(SHIPPERL$(DEST_SL),9)&RPAD$(SHIPPERL$(PART_SL),15),0,1,8,SHIPPERL$(ORDER_SL)) AND FNRESET(SCHEDC,SKEY$:=FNKEY$(SCHEDC_+.1,MAT SHIPPERL$,MAT F)) then 
66800             let FNRESTORE_WINDOW(SCREENS,"SCHEDULE",SCHROW,SCHCOLUMN,SCHROWS,SCHCOLUMNS,MAT SCHW$,MAT SCHSPEC$,MAT SCHG$,MAT WORK$) !:
                  let FNPUSH_WINDOW(WINDOW,MAT SCHW$,SCHROW,SCHCOLUMN,SCHROWS,SCHCOLUMNS,NULL$,NULL$,NULL$)
66805             mat SQTY=(0) !:
                  mat SDATE=(0) !:
                  mat STIME=(0) !:
                  let _ELEMENT=0
66810             do WHILE FNREAD_FILE(SCHEDC,FORM$(SCHEDC_),NULL$,0,MAT SCHEDC$,MAT SCHEDC,SCHEDC_) AND SKEY$ = FNKEY$(SCHEDC_,MAT SCHEDC$,MAT SCHEDC)(1:27) AND _ELEMENT < 16 !:
                     let SQTY(_ELEMENT+=1)=SCHEDC(3) !:
                     let STIME(_ELEMENT)=SCHEDC(2) !:
                     let SDATE(_ELEMENT)=SCHEDC(1) !:
                  loop 
66815             print #WINDOW,fields MAT SCHSPEC$: (MAT SQTY,MAT SDATE,MAT STIME) !:
                  let FNSELECT("        H ") !:
                  let FNPOP_WINDOW(WINDOW,1,0)
66820          end if 
66825          if CMDKEY = 5 AND LEN(SHIPPERL$(PART_SL)) > 1 then !                               History inquiry !:
                  let FNSHHIST_INQUIRY(SHIPPERL$(CUSTOMER_SL),SHIPPERL$(DEST_SL),SHIPPERL$(PART_SL))
66830          if CMDKEY = 1 AND SHIPPERL$(PART_SL) > NULL$ then 
66835             let FNRESTORE_WINDOW(SCREENS,"SHIPLADD",ADLROW,ADLCOLUMN,ADLROWS,ADLCOLUMNS,MAT ADLW$,MAT ADLSPEC$,MAT DUMBGS$,MAT WORK$)
66840             let ADLW$(3)(3:16)="Release Number"
66845             let FNPUSH_WINDOW(WINDOW,MAT ADLW$,ADLROW,ADLCOLUMN,ADLROWS,ADLCOLUMNS,NULL$,NULL$,NULL$) !:
                  let FNDISPLAY(WINDOW,SHIPPERLA_,MAT ADLSPEC$,MAT SHIPPERL$,MAT SHIPPERL)
66850             let FNSELECT("        F ") !:
                  let FNPOP_WINDOW(WINDOW,1,OFF)
66855          end if 
66860          let FNADDENDA=TRUE !:
               return 
66865 ! 
66870 _Addenda2_Finished: ! ***** Conclusion Of Shipper Line
66872          if FP(_FUNCTION)*10>3 AND F$(PART_SL)="C" then !:
                  let FNPOP_WINDOW(WINDOW,1,OFF)
66873          let SURCHARGE_REC=0
66874          if CMDKEY=10 AND _FUNCTION=10.1 then 
66876             if FNREAD_FILE(-BLANKETL,FORM$(BLANKETL_),RPAD$(F$(ORDER_SL),8)&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9),0,MAT BLANKETL$,MAT BLANKETL,0) AND BLANKETL$(SURCHARGE_TYPE_B)>NULL$ then 
66878                let APPLY_SURCHARGE$=FNLINE_INPUT$(WINDEX,15,6,1,"Do you want to apply the surcharge from the order for this part?",NULL$,NULL$,NULL$,"Apply Surcharge","        H ",MAT WAIT)
66880                if APPLY_SURCHARGE$="Y" then ! Apply surcharge
66882                   let FNDEFAULT(SHIPPERL_,MAT _SHIPPERL$,MAT _SHIPPERL) !:
                        let _SHIPPERL(TIME_ADDED_SL)=TIME_ADDED_X-=1  !Special key !:
                        let _SHIPPERL$(PART_SL)="SURCHARGE "&BLANKETL$(SURCHARGE_PART_B)
66884                   if FNREAD_FILE(-INVENT,FORM$(INVENT_),STR$(BLANKETL(COMPANY_B))&RPAD$("SURCHARGE "&BLANKETL$(SURCHARGE_PART_B),19),0,MAT INV$,MAT INV,INVENT_) then !:
                           let FNXREF_FIELDS(INVENT_,MAT _SHIPPERL$,MAT _SHIPPERL) !:
                        else !:
                           mat INV = (0) : mat INV$ = ("")
66885                   let _SHIPPERL(SHIPPED_SL)=SHIPPERL(3)
66886                   if BLANKETL$(20)="A" then ! Per piece, dollars   !:
                           let SURCHARGE_AMOUNT=BLANKETL(36)
66888                   if BLANKETL$(20)="B" then ! Per piece, percentage !:
                           let SURCHARGE_AMOUNT=BLANKETL(36)/100
66890                   if BLANKETL$(20)="C" then ! Per lines, dollars !:
                           let _SHIPPERL(SHIPPED_SL)=1 !:
                           let SURCHARGE_AMOUNT=BLANKETL(36)
66892                   if BLANKETL$(20)="D" then ! Per line, percentage !:
                           let SURCHARGE_AMOUNT=SHIPPERL(16)*(BLANKETL(36)/100)
66894                   let _SHIPPERL(UNIT_PRICE_SL)=SURCHARGE_AMOUNT
66896                   let FNWRITE(SHIPPERL,FORM$(SHIPPERL_),MAT _SHIPPERL$,MAT _SHIPPERL,SHIPPERL_)
66898                   let SURCHARGE_REC=REC(SHIPPERL)
66900                end if 
66902             end if 
66904          end if 
66918          return 
66920 ! 
66925 _Addenda5: ! ***** Customer File
66930          let FNADDENDA=TRUE !:
               return 
66935 ! 
66940 _Addenda6: ! ***** Inventory File
66945          on _FUNCTION gosub _Addenda6_Add
66950          let FNADDENDA=TRUE !:
               return 
66955 ! 
66960 _Addenda6_Add: ! ***** Quantity File
66965          mat QTY$ = INV$(1:3) !:
               mat QTY=(0) !:
               let QTY(1) = MAX(1,SHIPPERL(PLANT_SL)) !:
               let FNWRITE(INVTQTY,FORM$(INVTQTY_),MAT QTY$,MAT QTY,INVTQTY_) !:
               return 
66970 ! 
66975 _Exit_Addenda: ! ***** Exit
66980       loop 
66985 _End_Addenda: fnend 
68000 ! 
68100 Clear: ! ***** Clear Screen Data
68120    def FNCLEAR(SWITCH,MAT F$,MAT F)
68140       let FNCLEAR=0                   !No data cleared !:
            do  !:
               on IP(SWITCH) goto _Clear1,_Clear2,_End_Clear,_End_Clear,_Clear5,_Clear6,_Clear7,_Clear8 none _End_Clear
68160 ! 
68180 _Clear1: ! ***** Clear Shipper Header Record
68200          mat F$=(NULL$) !:
               mat F=(0) !:
               mat LIST$(1)=(NULL$) !:
               mat LIST(1)=(0) !:
               mat SHIP_DESC$=(NULL$) !:
               let OLD_INVOICE_TOTAL = 0 !:
               let ERROR_23=0 !:
               let TAXABLE$=NULL$ !:
               let SHHW$(2)(25:33) = "Customer" & NORMAL$ !:
               print #WINDOW,fields "02,01,C 80" : SHHW$(2)
68220          let FNCLEAR=SWITCH           !Switch cleared !:
               exit do 
68240 ! 
68260 _Clear2: ! ***** Shipper Detail
68280          mat F$=(NULL$) !:
               mat F=(0) !:
               let PO_FLAG=0 !:
               let REV_FLAG=0 !:
               let DOCK_WARNING=0 !:
               let COMMISSION_WARNING_SHOWN=0
68300          exit do 
68320 ! 
68340 _Clear5: ! ***** Vendor
68360          mat F$=(NULL$) !:
               mat F=(0) !:
               let F$(VENDOR_V)=INV$(VENDOR_I)
68380          let FNCLEAR=SWITCH !:
               exit do 
68400 ! 
68420 _Clear6: ! ***** Inventory
68440          mat F$=(NULL$) !:
               mat F=(0) !:
               let F$(COMPANY_I)=STR$(SHIPPERL(COMPANY_SL)) !:
               let F$(PART_I)=SHIPPERL$(PART_SL) !:
               let F$(REVISION_I)=SHIPPERL$(REV_SL) !:
               let FNCLEAR=SWITCH
68460          exit do 
68480 ! 
68500 _Clear7: ! ***** Customer
68520          mat F$=(NULL$) !:
               mat F=(0)
68540          if (SHIPPERH$(CUSTOMER_SH) > NULL$ AND FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"BT",19),0,MAT DES$,MAT DES,0)) OR _DEST_FLAG then !:
                  let F$(CUSTOMER_TYPE_U)="ST" !:
               else !:
                  let F$(CUSTOMER_TYPE_U)="BT"
68560          let F$(CUSTOMER_NO_U)=SHIPPERH$(CUSTOMER_SH) !:
               let FNCLEAR=SWITCH
68580          exit do 
68600 ! 
68620 _Clear8: ! ***** Clear Blanket Detail
68660          mat F$=(NULL$) !:
               mat F=(0) !:
               let FNCLEAR=SWITCH !:
               exit do 
68680 ! 
68700 _Exit_Clear: ! ***** Clear Performed
68720       loop 
68740 _End_Clear: fnend 
70000 ! 
70100 Default: ! ***** Set Default Values
70110    def FNDEFAULT(SWITCH,MAT F$,MAT F)
70120       let FNDEFAULT=0                 !No defaults taken
70130       do  !:
               on IP(SWITCH)-40 goto _Default9 !:
               on IP(SWITCH) goto _Default1,_Default2,_End_Default,_End_Default,_Default5,_Default6,_Default7,_Default8 none _End_Default
70140 ! 
70150 _Default1: ! ***** Shipper Header Defaults
70160          if TRIM$(F$(SHIPPER_SH))>NULL$ then !:
                  let F$(SHIPPER_SH)=FNEXPAND$(F$(SHIPPER_SH),8)
70165          let F(TYPE_SH)=MAX(1,F(TYPE_SH)) !:
               let F(PLANT_SH)=MAX(1,_PLANTNO) !:
               let F(SOURCE_SH)=0 !:
               let F(SHIPPER_DATE_SH)=F(SHIPMENT_DATE_SH)=DATE !:
               let TAXABLE$ = F$(HAZARDOUS_SH) = "N" !:
               let F$(PC_SH) = "P" !:
               mat LOCQUAL$(1) = (NULL$) !:
               mat LOC_QUAL$(1)=(NULL$) !:
               let F$(ASN_CODE_SH) = "00"
70180          if F(SALES_TYPE_SH) then !:
                  let FNXREF_FIELDS(VENDOR_,MAT SHIPPERH$,MAT SHIPPERH) !:
               else !:
                  let FNXREF_FIELDS(CUSTOMER_,MAT SHIPPERH$,MAT SHIPPERH) !:
                  let FNXREF_FIELDS(SHIPPERH_,MAT SHIPPERH$,MAT SHIPPERH)
70185          if RTRM$(SREP$(F$(SHIPPER_SH),1,"0",NULL$))=NULL$ then !:
                  let F$(SHIPPER_SH)=FNGET_DOCUMENT$(F(COMPANY_SH),8)
70190          if FNRESET(ORDERH3,RPAD$(F$(DEST_SH),9)&RPAD$(F$(CUSTOMER_SH),8)) then 
70195             mat ORDERH$=(NULL$)       !Get info from orderh file !:
                  mat ORDERH=(0) !:
                  do WHILE FNREAD_FILE(-ORDERH3,FORM$(ORDERH_),NULL$,0,MAT ORDERH$,MAT ORDERH,0) AND RPAD$(F$(DEST_SH),9)&RPAD$(F$(CUSTOMER_SH),8)=RPAD$(ORDERH$(DEST_H),9)&RPAD$(ORDERH$(CUSTOMER_H),8)
70200                if (NOT EXISTS("OAD\ALLPLANT")) OR _PLANTNO=ORDERH(PLANT_H) then ! Find the order with the correct plant - note if someone has allplant authority it shouldn't apply here
70202                   gosub Address_Pull
70205                   let FNCOPY_SUBS(MAT ORDERH$,PC_H,PC_H,MAT F$,PC_SH) !:
                        let FNCOPY_SUBS(MAT ORDERH$,LOC_ID_H,MODE_H,MAT F$,LOC_ID_SH) !:
                        let FNCOPY_SUBS(MAT ORDERH$,DOCK_H,DOCK_H,MAT F$,DOCK_SH) !:
                        let FNCOPY_SUBS(MAT ORDERH$,TERMS_DESC_H,TERMS_DESC_H,MAT F$,TERMS_DESC_SH)
70210                   let FNCOPY_SUBS(MAT ORDERH$,DEST_H,ALT_ORD_H,MAT F$,DEST_SH) !:
                        let FNCOPY_SUB(MAT ORDERH,PERCENT_H,DAYS_H,MAT F,PERCENT_SH) !:
                        let FNCOPY_SUB(MAT ORDERH,TAX_JUR_H,SALESMAN_H,MAT F,TAX_JUR_SH) !:
                        let FNCOPY_SUB(MAT ORDERH,PERCENT1_H,ASN_XMIT_H,MAT F,PERCENT1_SH)
70215                   let FNCOPY_SUB(MAT ORDERH,FRT_TAXABLE_H,FRT_TAXABLE_H,MAT F,FRT_TAXABLE_SH) !:
                        let FNCOPY_SUB(MAT ORDERH,CURRENCY_H,CURRENCY_H,MAT F,CURRENCY_SH) !:
                        let FNCOPY_SUB(MAT ORDERH,DEBIT_H,DEBIT_H,MAT F,DEBIT_SH)
70218                   if (DOCK$:=FNDOCK_CODE_LOOKUP$(ORDERH_,MAT ORDERH$,MAT ORDERH) > NULL$) then !:
                           let F$(DOCK_SH)=DOCK$ !:
                           ! 
70219                   let SHIPPERH$(COMMUN_SH)=ORDERH$(COMMUN_H) !:
                        if TRIM$(SHIPPERH$(COMMUN_H))==NULL$ then !:
                           let SHIPPERH$(COMMUN_SH)=CUS$(COMM_CODE_U)  !From xref_fields
70220                   let SHIPPERH$(PICKUP_SH)=FNEITHER$(ORDERH$(CARRIER2_H),ORDERH$(CARRIER_H),TRIM$(ORDERH$(CARRIER2_H))>NULL$) !:
                        if TRIM$(SHIPPERH$(PICKUP_SH))==NULL$ then !:
                           let F$(PICKUP_SH)=CUS$(CARRIER_U)  !From xref_fields
70225                   let SHIPPERH$(CARRIER_SH)=ORDERH$(CARRIER_H) !:
                        if TRIM$(SHIPPERH$(CARRIER_SH))==NULL$ then !:
                           let F$(CARRIER_SH)=CUS$(CARRIER_U)  !From xref_fields
70240                   exit do 
70245                end if 
70250             loop 
70255          end if 
70265          if POS("CA CH FD FX",F$(COMMUN_SH)(1:2)) then !:
                  mat LOCQUAL$(2) = LOC2$ !:
                  mat LOC_QUAL$(2) !:
                  let LOC_QUAL$(1)=LOCQUAL$(1)(1:2) !:
                  let LOC_QUAL$(2)=LOCQUAL$(2)(1:2)
70285          if CONTROL$(10) = "Y" then !:
                  let F$(BOL_SH) = F$(SHIPPER_SH)(3:8)
70290          if F$(COMMUN_SH)(1:2)="HA" then ! Honda use whole thing !:
                  let F$(BOL_SH) = F$(SHIPPER_SH)
70295          let DUMMY$=NULL$ !:
               if FNREAD_NAME(SCHEDC,RPAD$(F$(CUSTOMER_SH),8)&RPAD$(F$(DEST_SH),9),0,246,15,DUMMY$) AND DUMMY$>NULL$ then !:
                  let F$(DOCK_SH)=DUMMY$
70300          let _LOTLEN=8                !Default !:
               let FNREAD_FIELD(COMPANY,NULL$,F(COMPANY_SH),DUMMY$:="Form Pos 167,BH 2",_LOTLEN)
70301          mat HW$(UDIM(SHHH$))=SHHH$ !:
               let CARRIER_ZOOM=0 !:
               let FNREAD_DESCRIPTION(SHIPPERH_,MAT F$,MAT F) !:
               let F(WSID_SH)=VAL(WSID$)
70302          if F(CURRENCY_SH)==1 then 
70303             let F(DEBIT_SH)=CONTROL(11+5*F(SALES_TYPE_SH))  !Arbook or payable acct
70304          else 
70307             let F(DEBIT_SH)=FOREIGN_CURRENCY(F(CURRENCY_SH)-1) !:
                  let CURRENCY_FL=FNNEXT_CHANNEL(1,127) !:
                  open #CURRENCY_FL: "name=cnd\currency,shr",internal,input,relative  !:
                  let FNREAD_NUM(CURRENCY,NULL$,F(CURRENCY_SH),DUMMY$:="form pos 16,bh 3.4",F(RATE_SH)) !:
                  close #CURRENCY_FL: 
70308          end if 
70310          let FNDEFAULT=SWITCH !:
               exit do 
70315 ! 
70330 _Default2: ! ***** Shipper Detail Defaults
70340          mat F$ = (NULL$) !:
               mat F = (0) !:
               mat INVENT$ = (NULL$) !:
               mat INVENT = (0) !:
               mat QTY$ = (NULL$) !:
               mat QTY = (0) !:
               mat INV = (0)
70350          mat _SER$ = (NULL$) !:
               mat _SER = (0) !:
               mat LOT_$ = (NULL$) !:
               mat LOT_ = (0)
70360          let OLDPART$=ITYPE$=NULL$ !:
               let F$(ORDER_SL)=SHIPPERH$(ORDER_SH) !:
               let F$(SHIPPER_SL)=SHIPPERH$(SHIPPER_SH) !:
               let F(DATE_ADDED_SL)=DAYS(DATE) !:
               let F(TIME_ADDED_SL)=FNSECOND(VAL(SREP$(TIME$,1,":",""))) !:
               let F$(CUSTOMER_SL)=SHIPPERH$(CUSTOMER_SH) !:
               let F(COMPANY_SL)=SHIPPERH(COMPANY_SH) !:
               let F(PLANT_SL)=SHIPPERH(PLANT_SH) !:
               let F(TYPE_SL)=SHIPPERH(TYPE_SH) !:
               let F(SALESMAN_SL)=SHIPPERH(SALESMAN_SH)
70370          if F(TYPE_SL)=7 OR F(TYPE_SL)=8 then !:
                  let ITYPE$="Q"
70380          let F(SOURCE_SL)=0 !:
               let F(DATE_SHIPPED_SL)=SHIPPERH(SHIPMENT_DATE_SH) !:
               let F$(DEST_SL)=SHIPPERH$(DEST_SH) !:
               let OLDQUANTITY=0 !:
               let F(TAXABLE_SL)=MAX(0,POS("NY",TAXABLE$)-1) !:
               let FNDEFAULT=SWITCH !:
               let COMMISSION_WARNING_SHOWN=DOCK_WARNING=0 !:
               exit do 
70390 ! 
70400 _Default5: ! ***** Vendor Defaults
70410          let F(COMPANY_V)=SHIPPERH(COMPANY_SH) !:
               let F(CURRENCY_V)=SHIPPERH(CURRENCY_SH) !:
               let F$(TERMS_V)="A" !:
               let F$(MINORITY_V)="N" !:
               let FNREAD_DESCRIPTION(VENDOR_,MAT F$,MAT F) !:
               let FNDEFAULT=SWITCH !:
               exit do 
70420 ! 
70430 _Default6: ! ***** Inventory
70440          let F$(LOT_REQ_I)="N" !:
               let F$(TAXABLE_I)="N" !:
               let F$(COMMISSION_CODE_I)="A" !:
               let F(CONVERSION_I)=F(BREAK1_I)=F(PLANT_I)=1 !:
               let F(DATE_CREATED_I) = DATE !:
               let F(PROD_CLASS_I)=DEFAULT_CLASS
70450          let F$(UOM1_I)=F$(UOM2_I)=DEFAULT_UOM$ !:
               let F$(COMMOD_I)=COMMODITY$(1) !:
               let FNDEFAULT=SWITCH !:
               exit do 
70460 ! 
70470 _Default7: ! ***** Customer Screen
70480          mat F$(4:23)=(NULL$) !:
               mat F=(0) !:
               let F$(TERMS_CODE_U)="A" !:
               let F$(TAX_STATUS_U)=F$(LATE_CHARGE_U)="N" !:
               let F$(STATEMENTS_U)="Y" !:
               let F$(SHIP_PAY_U)="C" !:
               let F(CLASS_CODE_U)=F(PRICE_CODE_U)=F(COMPANY_U)=F(CURRENCY_CODE_U)=1 !:
               let F$(TRANSIT_U)="00:00:00"
70490          if SHIPPERH$(CUSTOMER_SH) > NULL$ AND FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(RPAD$(SHIPPERH$(CUSTOMER_SH),8)&"BT",19),0,MAT DES$,MAT DES,0) then 
70500             mat F$(CUSTOMER_NAME_U:SHIP_PAY_U)=DES$(CUSTOMER_NAME_U:SHIP_PAY_U) !:
                  mat F(CLASS_CODE_U:CREDIT_LIMIT_U)=DES(CLASS_CODE_U:CREDIT_LIMIT_U)
70510             mat F$(COMM_CODE_U:SHIP_PAY_U)=DES$(COMM_CODE_U:SHIP_PAY_U) !:
                  mat F(CLASS_CODE_U:CREDIT_LIMIT_U)=DES(CLASS_CODE_U:CREDIT_LIMIT_U) !:
                  let F$(TRANSIT_U)=CNVRT$("pic(##:##:##)",VAL(F$(TRANSIT_U))) error Ignore
70520          end if 
70550          let FNREAD_DESCRIPTION(CUSTOMER_,MAT F$,MAT F) !:
               let FNDEFAULT=SWITCH !:
               exit do 
70560 ! 
70570 _Default8: ! ***** Blanket Orders
70580          mat F$(PART_B:CUSTOMER_PART_B)=(NULL$) !:
               mat F$(CLAUSE_B:HWM_FAB_RELEASE_B)=(NULL$) !:
               mat F(1:34) = (0) !:
               let F(DATE_ADDED_B)=DAYS(DATE) !:
               let F(TIME_ADDED_B)=FNSECOND(VAL(SREP$(TIME$,1,":",""))) !:
               let F(COMPANY_B)=SHIPPERH(COMPANY_SH) !:
               let F(PLANT_B)=SHIPPERH(PLANT_SH) !:
               let F(SALESMAN_B)=SHIPPERH(SALESMAN_SH) !:
               let F$(CUM_TYPE_B) = "A" !:
               let SCODE$=NULL$
70590          if SHIPPERL$(PART_SL) > NULL$ AND FNREAD_FILE(-INVENT,FORM$(INVENT_),STR$(F(COMPANY_B))&RPAD$(SHIPPERL$(PART_SL),15)&RPAD$(SHIPPERL$(REV_SL),4),0,MAT INV$,MAT INV,0) then 
70600             let F$(PART_B) = INV$(PART_I) !:
                  let F$(REV_B) = INV$(REVISION_I) !:
                  let F$(CONTAINER_B) = INV$(CONTAINER1_I) !:
                  let F(GROUP_B) = INV(GROUP_NO_I) !:
                  let F(CLASS_B) = INV(PROD_CLASS_I) !:
                  let F(UNIT_PRICE_B) = FNPRICE_BREAK(MAT INV(PRICE1_I:PRICE6_I),MAT INV(BREAK1_I:BREAK6_I),1,CUS(PRICE_CODE_U)) !:
                  let F(STD_PACK_B) = INV(STD_PACK_I) !:
                  let F(COMMISSION_B) = POS("ABCDEFGHIJ",INV$(COMMISSION_CODE_I))
70610             mat DUMMY(7) = INV(STD_MATERIAL_I:STD_FUTURE_I) !:
                  let F(UNIT_COST_B)=SUM(DUMMY) !:
                  let FNBLURB(INV$(DESCR1_INV_I))
70620          end if 
70630          let FNDEFAULT=SWITCH !:
               exit do 
70640 ! 
70645 _Default9: ! ***** Edi Document Information
70650          if RTRM$(F$(EDI_SOURCE_SL))=NULL$ then 
70655             if SHIPPERH$(COMMUN_SH)(1:2)="GM" then !:
                     let F$(EDI_SOURCE_SL)="F" !:
                  else if POS("FC_CH",SHIPPERH$(COMMUN_SH)(1:2)) then !:
                     let F$(EDI_SOURCE_SL)="R"
70660          if SHIPPERH$(DEST_SH)="SHPDIRECT" then !:
                  let F$(EDI_SOURCE_SL)="J"  !APO ship direct
70670       end if 
70685       if RTRM$(F$(EDI_SOURCE_SL))<>NULL$ then !:
               let EDI_CURSOR=2
70690       let COMMA$=NULL$ : !:
            exit do 
70800 _Exit_Default: ! ***** Values Set
70810    loop 
70820 _End_Default: fnend 
71000 ! 
71020 Detail: ! ***** Detail Print
71040 def FNDETAIL(SWITCH,FILENO,MAT F$,MAT F,COMPANY$*80,MAT HEADING$,MAT PAGE,MAT AUDIT)
71060    let FNDETAIL=FALSE !:
         do  !:
            on IP(SWITCH) goto _Detail1 !:
            exit do 
71080 ! 
71100 _Detail1: ! ***** Detail 1
71140       print #FILENO: 
71160       let FNDETAIL=SWITCH !:
            exit do                         !End case
71960    loop 
71980 _End_Detail: fnend 
72000 ! 
72100 Display: ! ***** Display Data
72120 def FNDISPLAY(&WINDOW,SWITCH,MAT SPEC$,MAT F$,MAT F)
72140    let FNDISPLAY=0                    !No display !:
         do  !:
            on IP(SWITCH) goto _Display1,_Display2,_End_Display,_End_Display,_Display5,_Display6,_Display7,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_End_Display,_Display23,_End_Display,_Display25,_Display26,_End_Display,_End_Display,_Display29,_End_Display,_Display31 none _End_Display
72160 ! 
72180 _Display1: ! ***** Display Shipper Header
72200       print #WINDOW,fields MAT SPEC$: F$(SHIPPER_SH),F$(CUSTOMER_SH),F$(DEST_SH),F(TYPE_SH),MAT F$(B_NAME_SH:S_ZIP_SH),F$(TERMS_SH),F(SALESMAN_SH),F$(COMMUN_SH),F$(PICKUP_SH),F$(CARRIER_SH),F(PLANT_SH),F$(BOL_SH),F$(DOCK_SH),F$(TRAILER_SH),F$(SEAL_SH),F$(EQUIP_SH),F$(MODE_SH),F$(PC_SH),F(SHIPMENT_DATE_SH),F(SHIP_TIME_SH),F(ARRIVAL_DATE_SH),F(ARRIVAL_TIME_SH),F$(TERMS_DESC_SH),MAT SHIP_DESC$,F$(ORDER_SH) conv _Conversion
72220       let FNDISPLAY=SWITCH !:
            exit do 
72240 ! 
72260 _Display2: ! ***** Shipper Detail
72280       if F$(PART_SL)="C" then !:
               let FNRESTORE_WINDOW(SCREENS,"COMMENT",COMROW,COMCOLUMN,COMROWS,COMCOLUMNS,MAT COMW$,MAT COMSPEC$,MAT COMG$,MAT WORK$) !:
               let FNPUSH_WINDOW(WINDOW,MAT COMW$,COMROW,COMCOLUMN,COMROWS,COMCOLUMNS,NULL$,NULL$,NULL$) !:
               let FNDISPLAY(WINDOW,SHIPPER_COMMENT_,MAT COMSPEC$,MAT F$,MAT F) !:
               exit do 
72300       print #WINDOW,fields MAT SPEC$: F$(PART_SL),F$(REV_SL),F(SHIPPED_SL),F(BACK_SL),F(CUM_SL),F$(CUSTOMER_PART_SL),ITYPE$,F$(DESC_SL),F(UNIT_WT_SL),F(TARE_SL),F$(CONTAINER1_SL),F(CONT1_QTY_SL),F$(CONTAINER2_SL),F(CONT2_QTY_SL) conv _Conversion !:
            let FNDISPLAY=SWITCH
72320       exit do 
72340 ! 
72360 _Display5: ! ***** Vendor Display
72380       print #WINDOW,fields MAT SPEC$: MAT F$(VENDOR_V:FAX_V),F$(CARRIER_V),F$(FRT_TERMS_V),F$(FOB_V),F$(CONTACT_V),F$(TERMS_V),F$(BUYER_V),F$(TYPE_V),F$(MINORITY_V),F(COMPANY_V),F(CURRENCY_V),F(GL_V),F(MIN_ORDER_V),F(MIN_WT_V),F(LAST_PAY_V),F(LAST_INV_V),MAT DESC_V$ conv _Conversion !:
            let FNDISPLAY=SWITCH !:
            exit do 
72400 ! 
72420 _Display6: ! ***** Inventory
72440       print #WINDOW,fields MAT SPEC$: F$(PART_I),F$(REVISION_I),F$(COMPANY_I),F$(DESCR1_INV_I),F$(DESCR2_INV_I),F$(DESCR_PO_I),F$(UOM1_I),F$(UOM2_I),F$(TYPE_I),F(SIZE_I),F(TOLERANCE_I),F(WIDTH_I),F$(COMMISSION_CODE_I),F$(TAXABLE_I),F$(LOT_REQ_I),F$(CONTAINER1_I),F$(CONTAINER2_I),F$(VENDOR_I),F(SCRAP_FACTOR_I),F$(PART_TYPE_I),F(GROUP_NO_I),F(PROD_CLASS_I),F(LEAD_TIME_I),F(CONVERSION_I),F(WEIGHT_NET_I),F$(COMMOD_I),F(STD_PACK_I),F(ECONOMIC_I),F$(DRAWING_NO_I),F(COST_LAST_I),F(COMMISSION_I),F(PLANT_I),F(DATE_CHANGED_I) conv _Conversion
72460       let FNDISPLAY=SWITCH !:
            exit do 
72480 ! 
72500 _Display7: ! ***** Customer Screen
72520       print #WINDOW,fields MAT SPEC$: MAT F$(CUSTOMER_NO_U:SUFFIX_U),F$(CONTACT_NAME_U),F$(TERMS_CODE_U),F(PRICE_CODE_U),F(CLASS_CODE_U),F$(STATEMENTS_U),F$(TERRITORY_U),F$(LATE_CHARGE_U),F$(TAX_STATUS_U),F(TAX_JURIS_U),F(COMPANY_U),F(CURRENCY_CODE_U),F(SALESMAN_NO_U),F$(PRN_INVOICE_U),F$(SHIP_PAY_U),F$(CARRIER_U),F$(COMM_CODE_U),F$(TRANSIT_U),F(CREDIT_LIMIT_U),F(INVOICE_DATE_U),F(ORDER_DATE_U),F(PAYMENT_DATE_U),F(CURRENT_BALANCE_U),F(CURRENT_ORDERS_U),F(ORDERS_MTD_U),F(SALES_MTD_U),F(ORDERS_YTD_U),F(SALES_YTD_U),F(PROFIT_YTD_U),DESC_U$(1),DESC_U$(3) conv _Conversion !:
            let FNDISPLAY=SWITCH !:
            exit do 
72540 ! 
72560 _Display23: ! ***** 862 Shipping Schedules
72580       print #WINDOW,fields MAT SPEC$: (MAT SQTY,MAT SDATE) conv _Conversion !:
            let FNDISPLAY=SWITCH !:
            exit do 
72600 ! 
72620 _Display25: ! ***** Shipper Comment Display
72640       print #WINDOW,fields MAT SPEC$: F$(PART_SL),F$(REV_SL),F$(DESC_SL) conv _Conversion !:
            let FNDISPLAY=SWITCH !:
            exit do 
72660 ! 
72680 _Display26: ! ***** Shipper Total Display
72700       print #WINDOW,fields MAT SPEC$: MAT TOTAL,F(WEIGHT_SH),F(TAX_SH),F(FREIGHT_SH),F(GROSS_SH)*(CONTROL$(12)=="N"),F(CARTONS_SH),F(PALLETS_SH) conv _Conversion !:
            let FNDISPLAY=SWITCH !:
            exit do 
72720 ! 
72740 _Display29: ! ***** Additional Data Display
72750       if CONTROL$(12)="Y" then !:
               let F(UNIT_COST_SL)=F(UNIT_PRICE_SL)=0
72755       let TAXABLE_SL$="NY"(MIN(2,F(TAXABLE_SL)+1):MIN(2,F(TAXABLE_SL)+1))
72760       let DUMMY = MAX(1,MIN(10,F(COMMISSION_SL))) !:
            let COMM_CODE$ = "ABCDEFGHIJ"(DUMMY:DUMMY) !:
            print #WINDOW,fields MAT SPEC$: F$(ORDER_SL),F$(RELEASE_SL),F$(LOT_SL),F$(CUSTPO_SL),F$(RAN_NO_SL),F(ORDERED_SL),F$(POLINE_SL),F$(PART_EXTEND_SL),F(UNIT_COST_SL),F(UNIT_PRICE_SL),COMM_CODE$,F(COMM_AMT_SL),F(CREDIT_SL),F(GROUP_SL),F(CLASS_SL),F$(EDI_DOC_SL),F$(UM_SL),F$(COMMOD_SL),F$(MODEL_YEAR_SL),F(STD_PACK_SL),F(CONV2_SL),TAXABLE_SL$,F(SALESMAN_SL),F$(CLAUSE_SL) conv _Conversion
72762       let FNDISPLAY=SWITCH !:
            exit do 
72765 ! 
72770 _Display31: ! ***** Freight
72772       print #WINDOW,fields MAT SPEC$: F$(PART_SL),F$(DESC_SL),F(UNIT_PRICE_SL) !:
            let FNDISPLAY=SWITCH !:
            exit do 
72780 ! 
72800 _Conversion: ! ***** Conversion Error Detected
72820       let FNMESSAGE(WINDOW,10,39,"An Error has Occurred Trying to Display Data.","Display Error") !:
            mat F$=(NULL$) !:
            mat F=(0) !:
            goto 72140                      !Continue do
72840    loop 
72860 ! 
72880 _End_Display: fnend 
74000 ! 
74100 Edit: ! ***** Edit Screen Data
74105 def FNEDIT(SWITCH,MAT F$,MAT F,MAT H$,&MASK$)
74110    let FNEDIT=TRUE                    !Assume success
74115    do  !:
            on IP(SWITCH) == LABEL_ goto _Edit17 !:
            on IP(SWITCH) == SHIPLOT_ goto _Edit18 !:
            on IP(SWITCH) == SHIPPERHA_ goto _Edit28 !:
            on IP(SWITCH) == SHIPPERLA_ goto _Edit29 !:
            on IP(SWITCH) goto _Edit1,_Edit2,_End_Edit,_End_Edit,_Edit5,_Edit6,_Edit7,_Edit8 none _End_Edit
74120 ! 
74122 _Edit1: ! ***** Edit Shipper Header
74124       if F(ARRIVAL_TIME_SH) AND NOT FNVALID_TIME(F(ARRIVAL_TIME_SH)) then !:
               let FNEDIT=~FNEDIT_SET(33,MAT H$,MASK$,"1;Invalid arrival time.;")
74126       if F(ARRIVAL_DATE_SH) AND NOT DAYS(F(ARRIVAL_DATE_SH)) then !:
               let FNEDIT=~FNEDIT_SET(32,MAT H$,MASK$,"1;Enter a Valid Date in the form MM/DD/YY.;")
74128       if F(SHIP_TIME_SH) AND NOT FNVALID_TIME(F(SHIP_TIME_SH)) then !:
               let FNEDIT=~FNEDIT_SET(31,MAT H$,MASK$,"1;Invalid shipment time.;")
74130       if F(SHIPMENT_DATE_SH) AND NOT DAYS(F(SHIPMENT_DATE_SH)) then !:
               let FNEDIT=~FNEDIT_SET(30,MAT H$,MASK$,"1;Enter a Valid Date in the form MM/DD/YY.;")
74132       if NOT POS("PCI",F$(PC_SH)) then !:
               let FNEDIT=~FNEDIT_SET(29,MAT H$,MASK$,"1;Valid entries are (P)repaid, (C)ollect, or Prepay and (I)nvoice.;")
74144       gosub Verify_Carr_Comm_Eqtm
74148       if F(TYPE_SH)=1 AND FNRESET(DOCKS,FNKEY$(DOCK_+.1,MAT F$,MAT F)) AND NOT FNRESET(DOCKS,FNKEY$(DOCK_+.1,MAT F$,MAT F)&RPAD$(F$(DOCK_SH),15)) then !:
               let FNEDIT=~FNEDIT_SET(24,MAT H$,MASK$,"1;Valid dock code is required.;")
74150       if (RESTRICT_PLANTS) AND (F(PLANT_SH)<>_PLANTNO) then !:
               let FNEDIT=~FNEDIT_SET(22,MAT H$,MASK$,"1;Invalid Plant, must use Plant "&STR$(_PLANTNO)&".;")
74152       if F(PLANT_SH) < 1 OR F(PLANT_SH) > PLANTS then !:
               let FNEDIT=~FNEDIT_SET(22,MAT H$,MASK$,"1;Invalid Plant.;")
74158       if F$(PICKUP_SH)>NULL$ AND FNRESET(CARRIER,F$(PICKUP_SH)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(19,MAT H$,MASK$,"1;Enter a Valid Pickup Carrier SCAC code or Zoom for choices.;")
74160       if F$(COMMUN_SH)>NULL$ AND F$(PICKUP_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(20,MAT H$,MASK$,"1;Pickup Carrier is required.;")
74162       if F(SALESMAN_SH)>0 AND SRCH(SALESMAN$,CNVRT$("ZD 3",F(SALESMAN_SH))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(18,MAT H$,MASK$,"1;Enter a Valid Salesman code or Zoom for choices.;")
74164       if (F(TYPE_SH)<>7) AND (NOT (FNRESET(TERMS,RPAD$(F$(TERMS_SH),2)))) then !:
               let FNEDIT=~FNEDIT_SET(17,MAT H$,MASK$,"1;Enter a valid Terms code or Zoom for choices.;")
74166       let DSTAR=(F$(COMMUN_SH)(1:2)=="CH" AND (FNREAD_NAME(COMMUN,RPAD$(F$(COMMUN_SH),4),0,113,1,XCODE$)>0) AND XCODE$=="Q")
74167       if (ADD_FLAG) then 
74168          let SHIPPER_KEY$=FNKEY$(SHIPPERH_,MAT F$,MAT F)
74170          if TRIM$(SHIPPER_KEY$)>NULL$ AND FNRESET(SHIPPERH,SHIPPER_KEY$) then !:
                  let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number already on file.;")
74172          if TRIM$(SHIPPER_KEY$)>NULL$ AND FNRESET(INVOICEH,SHIPPER_KEY$) then !:
                  let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number already used as an open invoice.;")
74174          if TRIM$(SHIPPER_KEY$)>NULL$ AND FNRESET(IHISTH,SHIPPER_KEY$) then !:
                  let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number is already\na previously posted invoice.;")
74176          if TRIM$(SHIPPER_KEY$)>NULL$ AND FNRESET(OPENITEM4,SHIPPER_KEY$) then !:
                  let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number is already in the Openitem File.;")
74178       end if 
74180       if F$(B_NAME_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(5,MAT H$,MASK$,"1;Enter the Customer Name.;")
74182       if F$(B_CITY_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(8,MAT H$,MASK$,"1;Enter the City.;")
74184       if F$(B_STATE_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(9,MAT H$,MASK$,"1;Enter the customer's State.;")
74186       if F$(S_NAME_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(11,MAT H$,MASK$,"1;Enter the Customer Ship-To Name.;")
74188       if F$(S_CITY_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(14,MAT H$,MASK$,"1;Enter the Ship-To City.;")
74190       if F$(S_STATE_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(15,MAT H$,MASK$,"1;Enter the customer's Ship-To State.;")
74192       if F$(BOL_SH)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(22,MAT H$,MASK$,"1;Enter the Bill of Lading or Airbill number.;")
74208       exit do 
74210 ! 
74215 _Edit2: ! ***** Shipper Detail
74217       if F$(PART_SL) = "F" then exit do 
74220       if GLMASTER AND F(UNIT_PRICE_SL) AND CONTROL$(27)="Y" AND NOT FNRESET(GLMASTER,STR$(F(COMPANY_SL))&CNVRT$("zd 9",F(CREDIT_SL))) then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;The product class for this part\ndoes not have a valid G/L account.;")
74225       let WORK$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)
74230       if WORK$><OLDPART$ then 
74235          if FNREAD_FILE(-INVENT,FORM$(INVENT_),WORK$,0,MAT INV$,MAT INV,INVENT_) then 
74236             mat QTY$ = (NULL$) : mat QTY = (0) !:
                  let FNREAD_FILE(-INVTQTY,FORM$(INVTQTY_),WORK$&CHR$(F(PLANT_SL)),0,MAT QTY$,MAT QTY,0) !:
                  let FNXREF_FIELDS(INVENT_,MAT F$,MAT F) !:
                  let OLDPART$=WORK$
74237             if TRIM$(F$(ORDER_SL))=="" then 
74238                let BLANKET_KEY$=RPAD$(SHIPPERH$(CUSTOMER_SH),8)&RPAD$(SHIPPERH$(DEST_SH),9)&RPAD$(F$(PART_SL),15)&F$(REV_SL) !:
                     if FNRESET(BLANKETL2,BLANKET_KEY$) then 
74239                   let BL_READ_COUNT=0 !:
                        do WHILE FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),NULL$,0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) AND BLANKET_KEY$=RPAD$(BLANKETL$(CUSTOMER_B),8)&RPAD$(BLANKETL$(DEST_B),9)&RPAD$(BLANKETL$(PART_B),15)
74240                      mat BLANKETL_TMP$=BLANKETL$ !:
                           mat BLANKETL_TMP=BLANKETL !:
                           if (BL_READ_COUNT+=1)>1 then !:
                              let FNBLURB("Multiple blanket records for this part. Unable to select.") !:
                              exit do 
74241                   loop 
74242                   if BL_READ_COUNT==1 then !:
                           mat BLANKETL$=BLANKETL_TMP$ !:
                           mat BLANKETL=BLANKETL_TMP !:
                           let FNXREF_FIELDS(BLANKETL_,MAT F$,MAT F)
74244                else 
74245                   let FNBLURB("No blanket records for this part.")
74246                end if 
74247             else 
74248                let BLANKET_KEY$=RPAD$(F$(ORDER_SL),8)&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&RPAD$(F$(CUSTOMER_SL),8)&F$(DEST_SL)
74249                if FNRESET(BLANKETL,BLANKET_KEY$) then 
74250                   do WHILE FNREAD_FILE(-BLANKETL,FORM$(BLANKETL_),NULL$,0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) AND BLANKET_KEY$=RPAD$(BLANKETL$(ORDER_B),8)&RPAD$(BLANKETL$(PART_B),15)&RPAD$(BLANKETL$(REV_B),4)&RPAD$(BLANKETL$(CUSTOMER_B),8)&BLANKETL$(DEST_B) !:
                           if BLANKETL(MODEL_YEAR_B)=VAL(F$(MODEL_YEAR_SL)) AND F$(CUSTPO_SL)=BLANKETL$(CUSTPO_B) then !:
                              let FNXREF_FIELDS(BLANKETL_,MAT F$,MAT F) !:
                              exit do 
74255                   loop 
74260                end if  !:
                  end if 
74265          else 
74270             if WORK$(2:2)<>"*" then ! Inventory part !:
                     let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;No part on file.;") !:
                  else !:
                     if F(CLASS_SL)==0 then !:
                        let F(CLASS_SL)=99  !Force product class 99 for non-inventory items !:
                        let FNREAD_NUM(PRODCLAS,"99",0,DUMMY$:="form pos 28,bh 4",F(CREDIT_SL))
74275          end if  !:
            end if 
74280       if NOT POS(" QV",RPAD$(ITYPE$,1)) then !:
               let FNEDIT=~FNEDIT_SET(7,MAT H$,MASK$,"1;Valid entries are 'Q', 'V' or Blank.;")
74285       if ABS(F(UNIT_WT_SL)*F(SHIPPED_SL))>1000000 then !:
               let FNEDIT=~FNEDIT_SET(9,MAT H$,MASK$,"1;Maximum weight exceeded.\nModify unit weight or quantity.;")
74290       if TRIM$(F$(CONTAINER1_SL)) > NULL$ AND SRCH(CONT$,TRIM$(F$(CONTAINER1_SL))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(11,MAT H$,MASK$,"1;Enter a valid container\ntype or Press F3.;")
74295       if (TRIM$(F$(CONTAINER1_SL)) > NULL$ AND F(CONT1_QTY_SL) = 0) OR (TRIM$(F$(CONTAINER1_SL)) = NULL$ AND F(CONT1_QTY_SL)) then !:
               let FNEDIT=~FNEDIT_SET(12,MAT H$,MASK$,"1;If container is listed,\nquantity is required.;")
74300       if TRIM$(F$(CONTAINER2_SL)) > NULL$ AND SRCH(CONT$,TRIM$(F$(CONTAINER2_SL))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(13,MAT H$,MASK$,"1;Enter a valid container\ntype or Press F3.;")
74305       if (TRIM$(F$(CONTAINER2_SL)) > NULL$ AND F(CONT2_QTY_SL) = 0) OR (TRIM$(F$(CONTAINER2_SL)) = NULL$ AND F(CONT2_QTY_SL)) then !:
               let FNEDIT=~FNEDIT_SET(14,MAT H$,MASK$,"1;If container is listed,\nquantity is required.;")
74310       if ABS(F(EXTENSION_SL):=FNEXTENSION(MAT F)) > MAX_EXT then !:
               let FNEDIT=~FNEDIT_SET(3,MAT H$,MASK$,"1;Price extension over limits.\nChange quantity.;")
74315       if CONTROL$(54)="Y" AND LOT_$(1)=NULL$ AND FNREAD_NAME(INVENT,STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4),0,134,1,LOTREQ$) AND LOTREQ$="Y" then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;This part requires a lot\nnumber. Press Shift-F2 to edit.;")
74318       if (SUM(LOT_) AND SUM(LOT_)~=F(SHIPPED_SL)) then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;Part qty must equal lot qty. Press Shift-F2 to edit.;")
74320       if DSTAR AND F$(RAN_NO_SL)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;This part requires a RAN\nnumber. Press F1 to edit.;")
74325       if F$(PART_SL)=NULL$ then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;No part number entered.;")
74326       let SALESMAN_FORM$="form pos 30,b 1" !:
            if F(28) AND FNREAD_FIELD(SALESMAN,CNVRT$("ZD 3",F(29)),0,SALESMAN_FORM$,COMMISSION_TYPE) then 
74327          rem if COMMISSION_TYPE<>3 AND NOT COMMISSION_WARNING_SHOWN then !:                     let FNMESSAGE(WINDEX,10,5,"Order Line Per Piece Amount is Ignored for Commission TYPE A or B.","Warning") !:                                                    let COMMISSION_WARNING_SHOWN=1
74328       end if 
74330       if CONTROL$(84)="Y" AND (EDIT_DOCK$:=FNDOCK_CODE_LOOKUP$(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL) > NULL$) AND RPAD$(EDIT_DOCK$,15)<>RPAD$(SHIPPERH$(DOCK_SH),15) then !:
               let FNLINE_INPUT$(WINDEX,15,4,1,"Shipper Dock: "&SHIPPERH$(DOCK_SH)&" not equal to Sched Dock: "&EDIT_DOCK$,NULL$,NULL$,NULL$,"Dock Code Mismatch on Part "&SHIPPERL$(4),MAIN_FUNC$,MAT WAIT) !:
               let DOCK_WARNING=1
74332       if CONVERTED_ORDER AND NOT FNRESET(ORDERL2,RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&RPAD$(F$(ORDER_SL),8)) then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;Part Not on Order.;")
74334       exit do 
74335 ! 
74340 _Edit5: ! ***** Edit Vendor Data
74345       if F(LAST_INV_V) AND NOT DAYS(F(LAST_INV_V)) then !:
               let FNEDIT=~FNEDIT_SET(29,MAT H$,MASK$,"1;Enter the date of the last invoice for this Vendor.;")
74350       if F(LAST_PAY_V) AND NOT DAYS(F(LAST_PAY_V)) then !:
               let FNEDIT=~FNEDIT_SET(28,MAT H$,MASK$,"1;Enter the date of the last payment from this Vendor.;")
74355       if GLMASTER AND F(GL_V) AND NOT FNRESET(GLMASTER,STR$(F(COMPANY_V))&CNVRT$("ZD 9",F(GL_V))) then !:
               let FNEDIT=~FNEDIT_SET(25,MAT H$,MASK$,"1;Enter a valid General Ledger Account or press F3 to zoom.;")
74360       if F(CURRENCY_V)<1 OR F(CURRENCY_V)>CURRENCIES then !:
               let FNEDIT=~FNEDIT_SET(24,MAT H$,MASK$,"1;Enter a valid Currency code or press F3 to zoom.;")
74365       if F(COMPANY_V)<1 OR F(COMPANY_V)>COMPANIES then !:
               let FNEDIT=~FNEDIT_SET(23,MAT H$,MASK$,"1;Enter a Company code from 1 to "&STR$(COMPANIES)&" or press F3 to zoom.;")
74375       if F$(BUYER_V) > NULL$ AND SRCH(BUYERS$,F$(BUYER_V)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(20,MAT H$,MASK$,"1;Invalid buyer code. Press F3 for selection.;")
74380       if F$(TERMS_V)>NULL$ AND NOT FNRESET(TERMS,RPAD$(F$(TERMS_V),1)) then !:
               let FNEDIT=~FNEDIT_SET(19,MAT H$,MASK$,"1;Enter a valid Terms Code or press F3 to zoom.;")
74385       if NOT POS("PCI",RPAD$(F$(FRT_TERMS_V),1)) then !:
               let FNEDIT=~FNEDIT_SET(16,MAT H$,MASK$,"1;Valid responses are 'P' and 'C'.;")
74395       exit do 
74400 ! 
74405 _Edit6: ! ***** Inventory
74407       if F(PLANT_I)<1 OR F(PLANT_I)>PLANTS then !:
               let FNEDIT=~FNEDIT_SET(30,MAT H$,MASK$,"1;Enter a valid plant number.;")
74410       if F$(COMMOD_I) > NULL$ AND SRCH(COMMODITY$,F$(COMMOD_I)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(24,MAT H$,MASK$,"1;Enter a valid commodity code.;")
74415       if NOT FNRESET(PRODCLAS,CNVRT$("zd 2",F(PROD_CLASS_I))) then !:
               let FNEDIT=~FNEDIT_SET(20,MAT H$,MASK$,"1;Enter a valid product class.;")
74420       if VENDOR AND F$(VENDOR_I) > NULL$ AND NOT FNRESET(VENDOR,F$(VENDOR_I)) then !:
               let FNEDIT=~FNEDIT_SET(16,MAT H$,MASK$,"1;Enter a valid vendor number.;")
74425       if TRIM$(F$(CONTAINER2_I)) > NULL$ AND SRCH(CONT$,TRIM$(F$(CONTAINER2_I))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(15,MAT H$,MASK$,"1;Enter a valid container code.;")
74430       if TRIM$(F$(CONTAINER1_I)) > NULL$ AND SRCH(CONT$,TRIM$(F$(CONTAINER1_I))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(14,MAT H$,MASK$,"1;Enter a valid container code.;")
74435       if F$(UOM1_I) > NULL$ AND SRCH(UM$,F$(UOM1_I)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(8,MAT H$,MASK$,"1;Enter a valid unit of measure.;")
74440       if F$(UOM2_I) > NULL$ AND SRCH(UM$,F$(UOM2_I)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(7,MAT H$,MASK$,"1;Enter a valid unit of measure.;")
74442       if TRIM$(F$(DESCR1_INV_I)&F$(DESCR2_INV_I)&F$(DESCR_PO_I))=NULL$ then ! Missing description !:
               let FNEDIT=~FNEDIT_SET(4,MAT H$,MASK$,"1; A part description must be entered for this part. ;")
74445       exit do 
74450 ! 
74455 _Edit7: ! ***** Customer File
74460       if F(CREDIT_LIMIT_U)<0 then !:
               let FNEDIT=~FNEDIT_SET(30,MAT H$,MASK$,"1;Credit limit cannot be negative.;")
74475       if NOT POS("PCI",F$(SHIP_PAY_U)) then !:
               let FNEDIT=~FNEDIT_SET(26,MAT H$,MASK$,"1;Valid entries are (P)repaid, (C)ollect, or Prepay and (I)nvoice.;")
74480       if F(SALESMAN_NO_U) AND SRCH(SALESMAN$,CNVRT$("ZD 3",F(SALESMAN_NO_U))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(24,MAT H$,MASK$,"1;Enter a Valid Salesman code or Zoom for choices.;")
74485       if F(CURRENCY_CODE_U) < 1 OR F(CURRENCY_CODE_U) > CURRENCIES then !:
               let FNEDIT=~FNEDIT_SET(23,MAT H$,MASK$,"1;Enter a valid Currency Code or press F3 to zoom.;")
74490       if F(COMPANY_U) < 1 OR F(COMPANY_U) > COMPANIES then !:
               let FNEDIT=~FNEDIT_SET(22,MAT H$,MASK$,"1;Enter a valid Company Number or press F3 to zoom.;")
74495       if F(TAX_JURIS_U) AND NOT FNRESET(TAXMAST,STR$(F(COMPANY_U))&CNVRT$("zd 3",F(TAX_JURIS_U))) then !:
               let FNEDIT=~FNEDIT_SET(21,MAT H$,MASK$,"1;Enter a valid sales tax jurisdiction.;")
74500       if NOT POS("YN",F$(TAX_STATUS_U)) then !:
               let FNEDIT=~FNEDIT_SET(20,MAT H$,MASK$,"1;Valid choice are (Y)es or (N)o.;")
74505       if NOT POS("YN",F$(LATE_CHARGE_U)) then !:
               let FNEDIT=~FNEDIT_SET(19,MAT H$,MASK$,"1;Valid choice are (Y)es or (N)o.;")
74510       if NOT POS("YN",F$(STATEMENTS_U)) then !:
               let FNEDIT=~FNEDIT_SET(17,MAT H$,MASK$,"1;Valid choice are (Y)es or (N)o.;")
74515       if F(PRICE_CODE_U) < 1 OR F(PRICE_CODE_U) > 6 then !:
               let FNEDIT=~FNEDIT_SET(15,MAT H$,MASK$,"1;Valid Price Codes are 1 to 6.;")
74520       if F$(TERMS_CODE_U)>NULL$ AND NOT FNRESET(TERMS,RPAD$(F$(TERMS_CODE_U),1)) then !:
               let FNEDIT=~FNEDIT_SET(14,MAT H$,MASK$,"1;Enter a valid Terms Code or press F3 to zoom.;")
74525       exit do 
74530 ! 
74535 _Edit8: ! ***** Edit Blanket Order Input
74540       if F(SALESMAN_B) AND SRCH(SALESMAN$,CNVRT$("ZD 3",F(SALESMAN_B))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(16,MAT H$,MASK$,"1;Enter a Valid Salesman code or Zoom for choices.;")
74545       if F(UNIT_PRICE_B)<0 then !:
               let FNEDIT=~FNEDIT_SET(13,MAT H$,MASK$,"1;Unit Price cannot be less than zero.;")
74550       if F(UNIT_COST_B)<0 then !:
               let FNEDIT=~FNEDIT_SET(12,MAT H$,MASK$,"1;Unit Cost cannot be less than zero.;")
74555       if F(CUM_TOT_B)<0 then !:
               let DUMMY$="127"(1:(CMDKEY><10)*3) !:
               let FNEDIT=~FNEDIT_SET(11,MAT H$,MASK$,"1"&DUMMY$&";Cumulative Quantity cannot be negative.;")
74560       if F(ORDERED_B)<0 then !:
               let DUMMY$="127"(1:(CMDKEY><10)*3) !:
               let FNEDIT=~FNEDIT_SET(10,MAT H$,MASK$,"1"&DUMMY$&";Quantity cannot be negative.;")
74565       if NOT POS("ABFGIJ",F$(CUM_TYPE_B)) then !:
               let FNEDIT=~FNEDIT_SET(7,MAT H$,MASK$,"1;Invalid accum update method.\nPress F3 to Zoom.;")
74570       if TRIM$(F$(CONTAINER_B)) > NULL$ AND SRCH(CONT$,TRIM$(F$(CONTAINER_B))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(5,MAT H$,MASK$,"1;Enter a valid container code.;")
74575       if LEN(F$(PART_B)) < 2 then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;Part number must be at least two characters.;")
74580       let WORK$=STR$(SHIPPERH(COMPANY_SH))&RPAD$(F$(PART_B),15)&RPAD$(F$(REV_B),4) !:
            if NOT FNRESET(INVENT,WORK$) then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;Part number not found.;")
74582       if SHIPPERL$(PART_SL)>NULL$ AND TRIM$(SHIPPERL$(CUSTOMER_PART_SL))=NULL$ then !                         If empty fill with this !:
               let SHIPPERL$(CUSTOMER_PART_SL)=F$(CUSTOMER_PART_B)
74585       exit do 
74590 ! 
74595 _Edit17: ! ***** Edit Serial Numbers
74600       let SERIAL_TOTAL=0
74605       for SER___ = 1 to UDIM(F)
74608          if F$(SER___)>NULL$ AND FNREAD_NAME(BCODE,RPAD$(F$(SER___),9),0,10,15,DUMMY$) AND RTRM$(DUMMY$)~=SHIPPERL$(PART_SL) then !:
                  let FNEDIT=~FNEDIT_SET(2*SER___-1,MAT H$,MASK$,"1;Not a valid serial number\nfor this part.;")
74610          if (F(SER___) AND F$(SER___)=NULL$) OR (NOT F(SER___) AND F$(SER___) > NULL$) then !:
                  let FNEDIT=~FNEDIT_SET(2*SER___,MAT H$,MASK$,"1;There must be both serial number data and a quantity for each label.;") !:
                  exit do 
74612          if F(SER___)>0 then !:
                  let SERIAL_TOTAL+=F(SER___)
74615       next SER___
74618       let H$(1)="1127;** Enter a bar code serial number.;" !:
            if SERIAL_TOTAL ~= SHIPPERL(SHIPPED_SL) then !:
               let FNEDIT=~FNEDIT_SET(1,MAT H$,MASK$,"1;Total of carton labels ("&STR$(SERIAL_TOTAL)&") must equal " & STR$(SHIPPERL(SHIPPED_SL)) & ".;") !:
               ! 
74620       mat SS(UDIM(F$)) = AIDX(F$)     !Sort no longer used !:
            mat DUMMY$(UDIM(F$)) = (NULL$) !:
            mat DUMMY(UDIM(F)) = (0) !:
            let _INDEX = 0 !:
            for SER__ = 1 to UDIM(F$)       !Compress
74625          if F$(SER__) > NULL$ then !:
                  let DUMMY$(_INDEX+=1)=F$(SER__) !:
                  let DUMMY(_INDEX)=F(SER__)
74630       next SER__ !:
            mat F$=DUMMY$ !:
            mat F=DUMMY
74635       for SER__ = 1 to _INDEX !:
               for SUB1 = 1 to _INDEX !:
                  if SUB1 <> SER__ AND F$(SER__) = F$(SUB1) then !:
                     let FNEDIT=~FNEDIT_SET((2*SER__) -1,MAT H$,MASK$,"1;Duplicate serial numbers not permitted.;")
74640          next SUB1 !:
            next SER__
74645       exit do 
74650 ! 
74655 _Edit18: ! ***** Edit Lot Numbers
74660       if SUM(F) ~= SHIPPERL(SHIPPED_SL) then !:
               let FNEDIT=~FNEDIT_SET(2,MAT H$,MASK$,"1;Total must equal " & STR$(SHIPPERL(SHIPPED_SL)) & ".;")
74665       for LOT___ = 1 to UDIM(F) !:
               if F(LOT___) < 0 then !:
                  let FNEDIT=~FNEDIT_SET(2*LOT___,MAT H$,MASK$,"1;Negative quantities not permitted.;") !:
                  exit do 
74670          if (F(LOT___) AND F$(LOT___)=NULL$) OR (F(LOT___) = 0 AND F$(LOT___) > NULL$) then !:
                  let FNEDIT=~FNEDIT_SET(2*LOT___,MAT H$,MASK$,"1;There must be both lot number data and a quantity for each entry.;") !:
                  exit do 
74675       next LOT___
74680       mat SS(UDIM(F$)) = AIDX(F$) !:
            mat DUMMY$(UDIM(F$)) = (NULL$) !:
            mat DUMMY(UDIM(F)) = (0) !:
            let _INDEX = 0 !:
            for LOT__ = 1 to UDIM(SS)
74685          if F$(SS(LOT__)) > NULL$ then !:
                  let DUMMY$(_INDEX+=1)=F$(SS(LOT__)) !:
                  let DUMMY(_INDEX)=F(SS(LOT__))
74690       next LOT__ !:
            mat F$=DUMMY$ !:
            mat F=DUMMY
74695       for LOT__ = 2 to _INDEX !:
               if F$(LOT__) = F$(LOT__-1) then !:
                  let FNEDIT=~FNEDIT_SET(2*LOT__-1,MAT H$,MASK$,"1;Duplicate lot numbers not permitted.;")
74700       next LOT__
74705       exit do 
74710 ! 
74715 _Edit28: ! ***** Edit Additional Shipper Header Input
74717       if F$(COMMUN_SH)(1:2)="FD" AND F$(EQUIP_SH)="AF" then !:
               let F$(LOC_QUAL_SH)="OR"
74720       if F$(LOC_QUAL_SH) > NULL$ AND SRCH(LOC_QUAL$,F$(LOC_QUAL_SH)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(3,MAT H$,MASK$,"1;Invalid Location Qualifier.\nPress F3 for Selection.;")
74725       if F$(LOC_QUAL_SH) = NULL$ AND F$(LOC_ID_SH) > NULL$ then !:
               let FNEDIT=~FNEDIT_SET(3,MAT H$,MASK$,"1;Location Qualifier Required.;")
74730       if F$(COMMUN_SH)(1:2)="FD" AND F$(EQUIP_SH)<>"AF" AND F$(LOC_QUAL_SH)="OR" then !:
               let FNEDIT=~FNEDIT_SET(3,MAT H$,MASK$,"1;Equipment Code is not AF, required if OR is used for Loc Qual.;")
74732       if F$(LOC_QUAL_SH) > NULL$ AND F$(LOC_ID_SH) = NULL$ then !:
               let FNEDIT=~FNEDIT_SET(2,MAT H$,MASK$,"1;Location ID Required.;")
74733       if TRIM$(F$(ALT_ORD_SH))<>NULL$ AND (NOT FNREAD_FILE(-BLANKETL,FORM$(BLANKETL_),F$(ALT_ORD_SH),0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) OR BLANKETL$(CUSTOMER_B)<>SHIPPERH$(CUSTOMER_SH) OR BLANKETL$(DEST_B)<>SHIPPERH$(DEST_SH)) then !:
               let FNEDIT=~FNEDIT_SET(4,MAT H$,MASK$,"1;Invalid Alt Order #.;")
74735       exit do 
74740 ! 
74745 _Edit29: ! ***** Edit Additional Shipper Detail Input
74750       if F(SALESMAN_SL) AND SRCH(SALESMAN$,CNVRT$("ZD 3",F(SALESMAN_SL))) < 1 then !:
               let FNEDIT=~FNEDIT_SET(24,MAT H$,MASK$,"1;Enter a Valid Salesman code or Zoom for choices.;")
74755       if F(CONV2_SL) < 0 OR F(CONV2_SL)>F(CONT1_QTY_SL) then !:
               let FNEDIT=~FNEDIT_SET(22,MAT H$,MASK$,"1;Invalid quantity of loose containers.;")
74760       if F$(COMMOD_SL) > NULL$ AND SRCH(COMMODITY$,F$(COMMOD_SL)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(19,MAT H$,MASK$,"1;Invalid commodity code.\nPress F3 for selection.;")
74765       if F$(UM_SL) = NULL$ OR SRCH(UM$,F$(UM_SL)) < 1 then !:
               let FNEDIT=~FNEDIT_SET(18,MAT H$,MASK$,"1;Invalid unit of measure.\nPress F3 for selection.;")
74770       if (F$(PART_SL)(1:1)<>"*" AND F(CLASS_SL)<>99) AND NOT FNRESET(PRODCLAS,CNVRT$("ZD 2",F(CLASS_SL))) then !:
               let FNEDIT=~FNEDIT_SET(15,MAT H$,MASK$,"1;Enter a valid product class.;")
74775       if GLMASTER AND (SHIPPERH(DEBIT_SH) OR F(CREDIT_SL)) AND NOT FNRESET(GLMASTER,STR$(F(COMPANY_SL))&CNVRT$("zd 9",F(CREDIT_SL))) then !:
               let FNEDIT=~FNEDIT_SET(13,MAT H$,MASK$,"1;Invalid General Ledger Account.\nPress F3 for selection.;")
74777       if COMM_CODE$ > NULL$ AND NOT POS("ABCDEFGHIJ",COMM_CODE$) then !:
               let FNEDIT=~FNEDIT_SET(11,MAT H$,MASK$,"1;Valid commission codes are\nA, B, C, D, E, F, G, H, I, J.;")
74780       if NOT REV_FLAG AND SHIPPERH$(COMMUN_SH)(1:2)="HA" AND NOT FNRESET(BLANKETL5,RPAD$(F$(CUSTOMER_PART_SL),26)&RPAD$(F$(PART_EXTEND_SL),14)&RPAD$(F$(DEST_SL),9)) then !:
               let FNEDIT=~FNEDIT_SET(8,MAT H$,MASK$,"1;WARNING:  This is not the Customer Revision number in the order.;") !:
               let REV_FLAG=1
74781       let BL_KEY$=RPAD$(F$(ORDER_SL),8)&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9)
74782       if NOT (PO_FLAG) AND FNREAD_FILE(-BLANKETL,FORM$(BLANKETL_),BL_KEY$,0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) then 
74783          if POS("AB",BLANKETL$(CUM_TYPE_B)) AND F$(CUSTPO_SL)<>BLANKETL$(CUSTPO_B) then !:
                  let PO_FLAG=1 !:
                  let FNEDIT=~FNEDIT_SET(4,MAT H$,MASK$,"1;PO Number does not match Blanket PO #: "&TRIM$(BLANKETL$(CUSTPO_B))&".;")
74784       end if 
74785       exit do 
74790 ! 
74795 _Exit_Edit: ! ***** Error Detection Finished
74800    loop 
74805 _End_Edit: fnend 
75000 ! 
75010 Edit_Key: ! ***** Edit Key Information
75020 def FNEDIT_KEY(SWITCH,MAT F$,MAT F,MAT H$,&MASK$,&KEY$,_FUNCTION)
75030    let FNEDIT_KEY=TRUE                !Assume success !:
         do  !:
            on SWITCH goto _Edit_Key1,_End_Edit_Key,_End_Edit_Key,_End_Edit_Key,_Edit_Key5,_Edit_Key6,_Edit_Key7 none _End_Edit_Key
75040 ! 
75050 _Edit_Key1: ! ***** Edit Shipper Header Key
75060       if TRIM$(F$(SHIPPER_SH))>NULL$ then !:
               let F$(SHIPPER_SH)=FNEXPAND$(F$(SHIPPER_SH),8)
75065       let ADD_FLAG=(FALSE)
75070       if _FUNCTION=1 then 
75075          let ADD_FLAG=(TRUE)
75080          if NOT POS(VALID_TYPES$,STR$(F(TYPE_SH))) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(4,MAT H$,MASK$,"1;Enter a Valid Shipper Type.\nPress F3 for Selection.;")
75090          if F$(CUSTOMER_SH)=NULL$ then !       No customer defined !:
                  let FNREAD_NAME(CUSTOMER4,RPAD$(F$(DEST_SH),4),0,1,8,F$(CUSTOMER_SH))  !Customer by destination
75100          if (F(TYPE_SH)=1 OR F(TYPE_SH)=8) AND NOT FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(F$(CUSTOMER_SH),8)&"BT",0,MAT CUS$,MAT CUS,CUSTOMER_) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(2,MAT H$,MASK$,"1;Enter a valid Customer Code or Zoom for Selection.;")
75110          if (F(TYPE_SH)=7 OR F(TYPE_SH)=9) AND VENDOR AND NOT FNREAD_FILE(-VENDOR,FORM$(VENDOR_),RPAD$(F$(CUSTOMER_SH),8),0,MAT VEN$,MAT VEN,0) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(2,MAT H$,MASK$,"1;Enter a valid Vendor Code or Zoom for Selection.;")
75120          let F(SALES_TYPE_SH) = (F(TYPE_SH)==7 OR F(TYPE_SH)==9) !:
               if F(SALES_TYPE_SH) then !:
                  let F$(DEST_SH)=NULL$
75140          if NOT F(SALES_TYPE_SH) then 
75150             if F$(DEST_SH)=NULL$ then 
75155                if (RESTRICT_PLANTS) then 
75158                   if FNRESET(ORDERH2,RPAD$(F$(CUSTOMER_SH),8)) then 
75160                      do WHILE FNREAD_FILE(-ORDERH2,FORM$(ORDERH_),NULL$,0,MAT ORDERH$,MAT ORDERH,0) AND RPAD$(F$(CUSTOMER_SH),8)=RPAD$(ORDERH$(CUSTOMER_H),8)
75161                         if _PLANTNO=ORDERH(PLANT_H) then ! Plants match? !:
                                 let F$(DEST_SH)=ORDERH$(DEST_H) !:
                                 exit do 
75162                      loop 
75163                   end if 
75164                else 
75165                   if NOT FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(F$(CUSTOMER_SH),8)&"ST",0,MAT DES$,MAT DES,CUSTOMER_) then !:
                           let FNEDIT_KEY=~FNEDIT_SET(3,MAT H$,MASK$,"1;No destination code\non file for customer " & F$(CUSTOMER_SH)&".;") !:
                        else !:
                           let F$(DEST_SH)=DES$(SHIP_TO_CODE_U)
75168                end if 
75170             else 
75180                if NOT FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(F$(CUSTOMER_SH),8)&"ST"&F$(DEST_SH),0,MAT DES$,MAT DES,CUSTOMER_) then !:
                        let FNEDIT_KEY=~FNEDIT_SET(3,MAT H$,MASK$,"1;Invalid destination\ncode for customer " & F$(CUSTOMER_SH)&".;") !:
                     else !:
                        let F$(DEST_SH)=DES$(SHIP_TO_CODE_U)
75190             end if  !:
               end if 
75200          let KEY$=FNKEY$(SHIPPERH_,MAT F$,MAT F)
75210          if TRIM$(KEY$)>NULL$ AND FNRESET(SHIPPERH,KEY$) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number already on file.;")
75215          if TRIM$(KEY$)>NULL$ AND FNRESET(INVOICEH,KEY$) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number already used as an open invoice.;")
75220          if TRIM$(KEY$)>NULL$ AND FNRESET(IHISTH,KEY$) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number is already\na previously posted invoice.;")
75225          if TRIM$(KEY$)>NULL$ AND FNRESET(OPENITEM4,KEY$) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(1,MAT H$,MASK$,"1;This Shipper Number is already in the Openitem File.;")
75230          if (RESTRICT_PLANTS) AND F(TYPE_SH)=1 then ! Test customer
75240             let ORDER_FOUND=(FALSE)   !Assume not found
75250             if FNRESET(ORDERH3,RPAD$(F$(DEST_SH),9)&RPAD$(F$(CUSTOMER_SH),8)) then 
75260                do WHILE FNREAD_FILE(-ORDERH3,FORM$(ORDERH_),NULL$,0,MAT ORDERH$,MAT ORDERH,0) AND RPAD$(F$(DEST_SH),9)&RPAD$(F$(CUSTOMER_SH),8)=RPAD$(ORDERH$(DEST_H),9)&RPAD$(ORDERH$(CUSTOMER_H),8)
75270                   if _PLANTNO=ORDERH(PLANT_H) then ! Plants match? !:
                           let ORDER_FOUND=(TRUE)  !Success !:
                           exit do 
75280                loop 
75290             end if 
75300             if NOT (ORDER_FOUND) then ! Plants don't match !:
                     let FNEDIT_KEY=~FNEDIT_SET(2,MAT H$,MASK$,"1;The Order for this Customer and Destination not found for Plant "&STR$(_PLANTNO)&".;")
75310          end if 
75322       else 
75324          if (RESTRICT_PLANTS) AND NOT FNREAD_FILE(SHIPPERH,FORM$(SHIPPERH_),F$(SHIPPER_SH),0,MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_) OR ((RESTRICT_PLANTS) AND SHIPPERH(PLANT_SH)<>_PLANTNO) then !:
                  let FNEDIT_KEY=~FNEDIT_SET(1,MAT H$,MASK$,"1;Invalid Shipper Number for Plant "&STR$(_PLANTNO)&".;")
75330       end if 
75340       exit do 
75350 ! 
75360 _Edit_Key5: ! ***** Vendor
75370       let FNEDIT_KEY=F$(VENDOR_V)>NULL$ !:
            exit do 
75380 ! 
75390 _Edit_Key6: ! ***** Inventory
75400       let FNEDIT_KEY=(F$(PART_I)>NULL$ AND F$(COMPANY_I)>"0" AND F$(COMPANY_I)<=STR$(COMPANIES)) !:
            exit do 
75410 ! 
75420 _Edit_Key7: ! ***** Customer
75430       if F$(CUSTOMER_NO_U) = NULL$ then !:
               let FNEDIT_KEY=FALSE !:
               exit do 
75440       if F$(CUSTOMER_TYPE_U)="BT" AND F$(SHIP_TO_CODE_U)>NULL$ then !:
               let FNEDIT_KEY=~FNEDIT_SET(3,MAT H$,MASK$,"1;Bill-To Customers must have destination blank.;")
75450       if F$(CUSTOMER_TYPE_U)="ST" AND F$(SHIP_TO_CODE_U)=NULL$ then !:
               let FNEDIT_KEY=~FNEDIT_SET(3,MAT H$,MASK$,"1;Ship-To Customers must have destination code.;")
75460       if F$(CUSTOMER_TYPE_U)~="BT" AND F$(CUSTOMER_TYPE_U)~="ST" then !:
               let FNEDIT_KEY=~FNEDIT_SET(2,MAT H$,MASK$,"1;You must specify either a BT or ST type record.;")
75470       exit do 
75480 ! 
75490 _Exit_Edit_Key: ! ***** Key Edited
75500    loop 
75510 _End_Edit_Key: fnend 
76000 ! 
76100 Enter: ! ***** Enter Screen Information
76105 def FNENTER(&WINDOW,SWITCH,MAT SPEC$,MAT H$,MAT F$,MAT F,CURRENT,MASK$*99,FUNCTION$*10,MAT WAIT)
76110    if SWITCH=1 AND CURRENT=1 then !                               Patch for order !:
            let CURRENT=17
76115    let EDI_CURSOR=0 !:
         let FNENTER=FALSE                  !Assume cancel !:
         let CURFLD(CURRENT)                !Set cursor !:
         let CURRENT=FNFIELD_COUNT(MASK$,UDIM(SPEC$))  !Get field count !:
         mat HW$(UDIM(H$))=H$               !Copy help
76120    do  !:
            on IP(SWITCH)-40 goto _Enter3 !:
            on IP(SWITCH) goto _Enter1,_Enter2,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter17,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter25,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3,_Enter3 none _End_Enter
76125 ! 
76130 _Enter1: ! ***** Enter Shipper Header
76135       if F(POINTER_SH) OR LIST(1) then !                               Protect if detail !:
               let MASK$=SHIP_MASK$(4)
76140       if F(TYPE_SH)=8 then !                               Return to customer !:
               let MASK$(17:18)="11" !:
               let MASK$(23:27)="11111"
76145       if POS(F$(MODE_SH),"A") OR F$(MODE_SH)(1:1)="E" then ! Air or extruck
76150          if F$(COMMUN_SH)(1:2)="FD" AND POS(F$(MODE_SH),"A") then !:
                  let F$(LOC_QUAL_SH)="OR"
76151          if POS(F$(MODE_SH),"A") then !                         Air !:
                  print #WINDOW,fields "17,4,c 14": "Air Bill No.  "
76155       else 
76160          print #WINDOW,fields "17,4,c 14": "Bill of Lading" !:
               if F$(LOC_QUAL_SH)="OR" then !:
                  let F$(LOC_QUAL_SH)=NULL$
76165       end if 
76170       if F(SALES_TYPE_SH) then !                               Return to vendor !:
               let MASK$(17:18)=MASK$(23:24)=MASK$(25:26)=MASK$(26:27)="11" !:
               let SHHW$(2)(25:33) = "Vendor" & NORMAL$ & "" !:
            else !:
               let SHHW$(2)(25:33) = "Customer" & NORMAL$
76175       print #WINDOW,fields "02,01,C 80" : SHHW$(2) !:
            if NOT F(DEBIT_SH) AND GLMASTER then !:
               let FNBLURB("No A/R account number defined. This shipper cannot create a postable invoice." & CHR$(7))
76180       do  !:
               let FNFUNCTION(FUNCTION$) !:
               let FNINPUT(WINDOW,SWITCH,MAT SPEC$,MAT HW$,MAT F$,MAT F,MASK$,MAT WAIT) !:
               let CURFLD(CURFLD) !:
               let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
            loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
76182       let CUSTOMER$=F$(4) !:
            let DESTINATION$=F$(31)
76185       if CMDKEY=9 AND NOT FNRESET(SHIPPERH,F$(SHIPPER_SH)) then !:
               let FNPUT_DOCUMENT(F(COMPANY_SH),8,F$(SHIPPER_SH))
76190       if CMDKEY=9 then !:
               goto _End_Enter              !Exit loop
76195       if CMDKEY=3 then !:
               let CURFLD(CURFLD,104*FNZOOM(SWITCH,CURFLD)) !:
               mat HW$(UDIM(H$))=H$ !:
               goto _Enter1                 !Continue do
76212       if CMDKEY = 1 then 
76214          let FNRESTORE_WINDOW(SCREENS,"SHIPHADD",ADHROW,ADHCOLUMN,ADHROWS,ADHCOLUMNS,MAT ADHW$,MAT ADHSPEC$,MAT DUMBGS$,MAT WORK$)
76215          if POS("CA CH FD FX",SHIPPERH$(33)(1:2)) then !:
                  mat LOCQUAL$(2) = LOC2$ !:
                  mat LOC_QUAL$(2) !:
                  let LOC_QUAL$(1)=LOCQUAL$(1)(1:2) !:
                  let LOC_QUAL$(2)=LOCQUAL$(2)(1:2)
76216          let FNPUSH_WINDOW(WINDOW,MAT ADHW$,ADHROW,ADHCOLUMN,ADHROWS,ADHCOLUMNS,NULL$,NULL$,NULL$) !:
               let FNENTER(WINDOW,SHIPPERHA_,MAT ADHSPEC$,MAT ADHH$,MAT SHIPPERH$,MAT SHIPPERH,1,ADHMASK$,"  Z      F",MAT WAIT)
76218          let FNPOP_WINDOW(WINDOW,1,OFF) !:
               mat HW$(UDIM(H$))=H$ !:
               goto _Enter1
76220       end if 
76222       if CMDKEY = 2 then 
76224          let FNRESTORE_WINDOW(SCREENS,"SHIPAED",EDHROW,EDHCOLUMN,EDHROWS,EDHCOLUMNS,MAT EDHW$,MAT EDHSPEC$,MAT DUMBGS$,MAT WORK$)
76226          let FNPUSH_WINDOW(WINDEX,MAT EDHW$,EDHROW,EDHCOLUMN,EDHROWS,EDHCOLUMNS,NULL$,NULL$,NULL$)
76228          mat EDIFACT_SAVE$=SHIPPERH$(38:43)
76230          let FNENTER(WINDEX,EDIFACT_DATA_,MAT EDHSPEC$,MAT EDIFACT_HELP$,MAT SHIPPERH$,MAT SHIPPERH,1,EDHMASK$,"  Z     HF",MAT WAIT)
76232          if CMDKEY=9 then mat SHIPPERH$(38:43)=EDIFACT_SAVE$
76236          let FNPOP_WINDOW(WINDOW,1,OFF) !:
               mat HW$(UDIM(H$))=H$ !:
               goto _Enter1
76238       end if 
76240       if NOT CMDKEY AND CURRENT>1 then !:
               let CURFLD(CURFLD,FKEY+(104*(NOT FKEY))) !:
               goto _Enter1                 !Continue do
76245       goto _Exit_Enter                !Continue loop
76250 ! 
76255 _Enter2: ! *****  Shipper Detail Entry
76256       mat ORDERH$=(NULL$)             !Get info from orderh file !:
            mat ORDERH=(0)
76257       let CONVERTED_ORDER=0 !:
            if TRIM$(SHIPPERH$(ORDER_SH))<>NULL$ AND FNREAD_NUM(ORDERH,RPAD$(SHIPPERH$(ORDER_SH),8),0,DUMMY$:="form pos 414,b 1",DUMMY) then !:
               let CONVERTED_ORDER=(DUMMY<=2)
76264       if F(TYPE_SL)>6 then !:
               let FUNCTION$(2:2)=FUNCTION$(4:4)=FUNCTION$(5:5)=" "
76265       do 
76270          if F$(PART_SL)><"C" then 
76272             let MASK$=SHIPL_MASK$(2)
76274             if CONVERTED_ORDER then !:
                     let MASK$=SHIPL_MASK$(4)
76276             if F$(PART_SL)="T" then !:
                     let MASK$=SHIPL_MASK$(3)
76277             if F$(PART_SL)="F" then !:
                     gosub Enter_Freight !:
                     goto _End_Enter
76278             let FNFUNCTION(FUNCTION$)
76280             let _ENTER_PART$=F$(PART_SL) !:
                  let FNINPUT(WINDOW,SWITCH,MAT SPEC$,MAT HW$,MAT F$,MAT F,MASK$,MAT WAIT) !:
                  let CURFLD(CURFLD)
76284             let S_PACK=FALSE !:
                  if CURFLD = 3 AND F$(UM_SL) <> "LB" AND F(STD_PACK_SL) >0 AND FP(F(SHIPPED_SL)/F(STD_PACK_SL)) then !:
                     let S_PACK=TRUE !:
                     let STNDPACK$=STR$(F(STD_PACK_SL)) !:
                     let SHIPPACK$=STR$(F(SHIPPED_SL)) !:
                     let FNBLURB("Standard Pack= "&STNDPACK$&"  Entered= "&SHIPPACK$&"  To continue use DOWN ARROW")
76285             if CONTROL$(84)="N" AND (EDIT_DOCK$:=FNDOCK_CODE_LOOKUP$(SHIPPERL_,MAT SHIPPERL$,MAT SHIPPERL) > NULL$) AND RPAD$(EDIT_DOCK$,15)<>RPAD$(SHIPPERH$(DOCK_SH),15) AND NOT (DOCK_WARNING) then !:
                     let FNLINE_INPUT$(WINDEX,15,4,1,"Shipper Dock: "&SHIPPERH$(DOCK_SH)&" not equal to Sched Dock: "&EDIT_DOCK$,NULL$,NULL$,NULL$,"Dock Code Mismatch on Part "&SHIPPERL$(4),MAIN_FUNC$,MAT WAIT) !:
                     let DOCK_WARNING=1
76286             if F$(UM_SL)<>"RC" AND CURFLD = 3 AND NOT F(UNIT_PRICE_SL) then 
76288                let F(UNIT_PRICE_SL)=FNPRICE_BREAK(MAT INV(PRICE1_I:PRICE6_I),MAT INV(BREAK1_I:BREAK6_I),F(SHIPPED_SL),CUS(PRICE_CODE_U))
76289             end if 
76290             if (NOT CONVERTED_ORDER) AND CMDKEY = 4 AND F$(UM_SL)~="RC" AND F(TYPE_SL) = 1 AND FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),FNKEY$(BLANKETL_+.1,MAT F$,MAT F)(1:17),0,MAT BLANKETL$,MAT BLANKETL,0) AND NOT FNRESET(BLANKETL2,FNKEY$(BLANKETL_+.1,MAT F$,MAT F)) then 
76295                let FNPUSH_STRING(FUNCTION$,_FM,MAT _FM$) !:
                     let FNDEFAULT(BLANKETL_,MAT BLANKETL$,MAT BLANKETL) !:
                     let FNENTER_OTHER(WINDEX,BLANKETL_,SCREENS,"BLANKETL",BLANKETROW,BLANKETCOL,BLANKETROWS,BLANKETCOLS,MAT BLANKETL$,MAT BLANKETL,MAT BLLW$,MAT BLLSPEC$,MAT BLLG$,MAT BLLH$,BLL_MASK$(2),"  Z     HF") !:
                     if CMDKEY ~= 9 then !:
                        let FNWRITE(BLANKETL,FORM$(BLANKETL_),MAT BLANKETL$,MAT BLANKETL,BLANKETL_)
76300                let CMDKEY(0) !:
                     let CURFLD(3) !:
                     let FUNCTION$=FNPOP_STRING$(_FM,MAT _FM$) !:
                     mat HW$(UDIM(H$))=H$ !:
                     goto _Enter2
76305             end if 
76310             if F$(PART_SL) > NULL$ AND (CURFLD=3 OR (OLDPART$>NULL$ AND F$(PART_SL)~=TRIM$(OLDPART$(2:16)))) then 
76314                if F$(PART_SL) > NULL$ AND (F$(PART_SL) ~= INV$(PART_I) OR F$(REV_SL) ~= INV$(REVISION_I)) OR INV(PROD_CLASS_I)=0 then !:
                        mat INV = (0) : mat INV$ = ("") !:
                        let DUMMY$ = STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
                        let FNREAD_FILE(-INVENT,FORM$(INVENT_),DUMMY$,0,MAT INV$,MAT INV,INVENT_)
76315                if (NOT CONVERTED_ORDER) then 
76316                   let _BLANKETL_FOUND=(FALSE)
76318                   let BLANKET_KEY$=FNKEY$(BLANKETL_+.1,MAT F$,MAT F)
76319                   if FNRESET(BLANKETL2,BLANKET_KEY$) then 
76320                      do WHILE FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),NULL$,0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) AND BLANKET_KEY$=RPAD$(BLANKETL$(CUSTOMER_B),8)&RPAD$(BLANKETL$(DEST_B),9)&RPAD$(BLANKETL$(PART_B),15)&RPAD$(BLANKETL$(REV_B),4)
76322                         if SHIPPERH(PLANT_SH)=BLANKETL(PLANT_B) AND TRIM$(F$(CUSTPO_SL))=NULL$ OR (TRIM$(F$(CUSTPO_SL))>NULL$ AND (BLANKETL(MODEL_YEAR_B)=(FNVERIFY(F$(MODEL_YEAR_SL))*NUMERIC) AND ((TRIM$(F$(CUSTPO_SL))=TRIM$(BLANKETL$(CUSTPO_B))))) OR (CONVERTED_ORDER AND SHIPPERH$(ALT_ORD_H)<>NULL$)) then !:
                                 let FNXREF_FIELDS(BLANKETL_,MAT F$,MAT F) !:
                                 let _BLANKETL_FOUND=(TRUE) !:
                                 exit do 
76324                      loop 
76326                   end if 
76335                   if F$(PART_SL)(1:9)<>"SURCHARGE" AND NOT (_BLANKETL_FOUND) then 
76340                      if F$(PART_SL)=INV$(PART_I) AND F(TYPE_L)==3 OR F(TYPE_L)==4 AND FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),FNKEY$(BLANKETL_+.1,MAT F$,MAT F)(1:17),0,MAT BLANKETL$,MAT BLANKETL,0) then 
76345                         let FNBLURB("Blanket order not found for this part. Press F4 to add to blanket order."&CHR$(7)) !:
                              let FNSELECT(FUNCTION$) !:
                              if (NOT CONVERTED_ORDER) AND CMDKEY = 4 then 
76350                            let FNPUSH_STRING(FUNCTION$,_FM,MAT _FM$) !:
                                 let FNDEFAULT(BLANKETL_,MAT BLANKETL$,MAT BLANKETL) !:
                                 let FNENTER_OTHER(WINDEX,BLANKETL_,SCREENS,"BLANKETL",BLANKETROW,BLANKETCOL,BLANKETROWS,BLANKETCOLS,MAT BLANKETL$,MAT BLANKETL,MAT BLLW$,MAT BLLSPEC$,MAT BLLG$,MAT BLLH$,BLL_MASK$(2),"  Z     HF") !:
                                 if CMDKEY ~= 9 then !:
                                    let FNWRITE(BLANKETL,FORM$(BLANKETL_),MAT BLANKETL$,MAT BLANKETL,BLANKETL_)
76355                            let CMDKEY(0) !:
                                 let CURFLD(3) !:
                                 let FUNCTION$=FNPOP_STRING$(_FM,MAT _FM$) !:
                                 mat HW$(UDIM(H$))=H$ !:
                                 goto _Enter2
76360                         end if 
76365                      else 
76370                         if F(TYPE_L)==3 OR F(TYPE_L)==4 AND F$(PART_SL)=INV$(PART_I) then !:
                                 let FNBLURB("Blanket order not found for this customer. Accums cannot be updated."&CHR$(7))
76375                      end if  !:
                        end if  !:
                     end if  !:
                  end if 
76380             if F$(PART_L)<>NULL$ AND CURFLD = 1 AND CMDKEY<>3 then 
76382                if FNRESTORE(ORDERL2,RPAD$(F$(PART_L),15)&F$(REV_L)) then 
76384                   do WHILE FNREAD_FILE(-ORDERL2,FORM$(ORDERL_),NULL$,0,MAT ORL$,MAT ORL,ORDERL_) AND RPAD$(F$(PART_SL),15)&F$(REV_SL)==RPAD$(ORL$(PART_L),15)&ORL$(REV_L)
76386                      if ORDERL(22)<=DAYS(DATE_+1) then !:
                              let FNMESSAGE(WINDEX,5,5,"Part "&F$(PART_SL)&F$(REV_SL)&" exists on discrete order "&ORL$(1)," Warning ") !:
                              exit do 
76388                   loop 
76390                end if  !:
                  end if 
76420             let F(EXTENSION_SL)=FNEXTENSION(MAT F) !:
                  let FNCONTAINER(MAT F$,MAT F)
76425             if CMDKEY = 7 then 
76430                if F$(PART_SL) > NULL$ then !:
                        let FNINVT_INQUIRY(STR$(F(COMPANY_SL))&F$(PART_SL))
76435                goto _Enter2
76440             end if 
76445             if CMDKEY=6 AND NOT CONVERTED_ORDER AND FNREAD_NAME(BLANKETL2,RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9)&RPAD$(F$(PART_SL),15),0,1,8,F$(ORDER_SL)) AND FNRESET(SCHEDC,SKEY$:=FNKEY$(SCHEDC_+.1,MAT F$,MAT F)) then 
76450                let FNRESTORE_WINDOW(SCREENS,"SCHEDULE",SCHROW,SCHCOLUMN,SCHROWS,SCHCOLUMNS,MAT SCHW$,MAT SCHSPEC$,MAT SCHG$,MAT WORK$) !:
                     let FNPUSH_WINDOW(WINDOW,MAT SCHW$,SCHROW,SCHCOLUMN,SCHROWS,SCHCOLUMNS,NULL$,NULL$,NULL$)
76455                mat SQTY=(0) !:
                     mat SDATE=(0) !:
                     mat STIME=(0) !:
                     let _ELEMENT=0
76460                do WHILE FNREAD_FILE(SCHEDC,FORM$(SCHEDC_),NULL$,0,MAT SCHEDC$,MAT SCHEDC,SCHEDC_) AND SKEY$ = FNKEY$(SCHEDC_,MAT SCHEDC$,MAT SCHEDC)(1:27) AND _ELEMENT < 16 !:
                        let SQTY(_ELEMENT+=1)=SCHEDC(3) !:
                        let STIME(_ELEMENT)=SCHEDC(2) !:
                        let SDATE(_ELEMENT)=SCHEDC(1) !:
                     loop 
76465                print #WINDOW,fields MAT SCHSPEC$: (MAT SQTY,MAT SDATE,MAT STIME) !:
                     let FNSELECT("        H ") !:
                     let FNPOP_WINDOW(WINDOW,1,0) !:
                     goto _Enter2
76470             end if 
76475             if CMDKEY = 5 AND LEN(F$(PART_SL)) > 1 then !                               History inquiry !:
                     let FNSHHIST_INQUIRY(F$(CUSTOMER_SL),F$(DEST_SL),F$(PART_SL)) !:
                     goto _Enter2
76480             if CMDKEY=99 then 
76485                let FNPUSH_WINDOW(WINDOW,MAT SHHW$,SHHROW,SHHCOLUMN,SHHROWS,SHHCOLUMNS,NULL$,NULL$,NULL$) !:
                     let FNENTER(WINDOW,SHIPPERH_,MAT SHHSPEC$,MAT SHHH$,MAT SHIPPERH$,MAT SHIPPERH,18,SHIP_MASK$(4),"K Z      L",MAT WAIT)
76490                let FNPOP_WINDOW(WINDOW,1,OFF) !:
                     mat HW$(UDIM(H$))=H$ !:
                     goto _Enter2
76495             end if  !:
               end if 
76500          if CMDKEY = 1 AND F$(PART_SL) > NULL$ AND (F$(PART_SL)=INV$(PART_I) OR F$(PART_SL)(1:1)="*") then 
76505             let FNRESTORE_WINDOW(SCREENS,"SHIPLADD",ADLROW,ADLCOLUMN,ADLROWS,ADLCOLUMNS,MAT ADLW$,MAT ADLSPEC$,MAT DUMBGS$,MAT WORK$)
76510             if F(TYPE_SL) = 7 OR F(TYPE_SL) = 8 then !:
                     let ADLW$(3)(3:16)="NCM Number    " !:
                  else !:
                     let ADLW$(3)(3:16)="Release Number"
76515             let FNPUSH_WINDOW(WINDOW,MAT ADLW$,ADLROW,ADLCOLUMN,ADLROWS,ADLCOLUMNS,NULL$,NULL$,NULL$) !:
                  let FNENTER(WINDOW,SHIPPERLA_,MAT ADLSPEC$,MAT ADLH$,MAT SHIPPERL$,MAT SHIPPERL,1,ADLMASK$,"  Z   r HF",MAT WAIT)
76520             let FNPOP_WINDOW(WINDOW,1,OFF) !:
                  mat HW$(UDIM(H$))=H$ !:
                  goto _Enter2
76525          end if 
76530          if CMDKEY = 2 AND LEN(F$(PART_SL)) > 1 AND F$(PART_SL)=INV$(PART_I) then 
76535             let FNENTER_SERIALS(WINDOW,LABEL,FORM$(LABEL_),FNKEY$(LABEL_,MAT SHIPPERL$,MAT SHIPPERL) ,MAT SER_SPEC$,MAT _SER$,MAT _SER,0,"        HF")
76560          end if 
76565          if CMDKEY=12 AND LEN(F$(PART_SL)) > 1 AND F$(PART_SL)=INV$(PART_I) then !                               Shift f2
76570             if LOTSPEC$(1) = NULL$ then 
76575                mat LOTSPEC$(60) !:
                     for LOOP___ = 1 to 15 !:
                        let LOTSPEC$(2*LOOP___-1)=CNVRT$("zd 2",LOOP___+2)&",05,GU 15,UHE" !:
                        let LOTSPEC$(2*LOOP___) = CNVRT$("zd 2",LOOP___+2)&",22,NZ 7,UH" !:
                        let LOTSPEC$(2*LOOP___-1+30)=CNVRT$("zd 2",LOOP___+2)&",32,GU 15,UHE" !:
                        let LOTSPEC$(2*LOOP___+30) = CNVRT$("zd 2",LOOP___+2)&",49,NZ 7,UH" !:
                     next LOOP___
76580                mat LOTH$(60)=("1127;Enter a lot number.;") !:
                     for LOOP__ = 2 to 60 step 2 !:
                        let LOTH$(LOOP__) = "1127;Enter the quantity of pieces for this lot number.;" !:
                     next LOOP__
76585             end if 
76590             let FNMAKE_FRAME(MAT LOTW$,19,59,NULL$,"Lot Numbers For Part " &F$(PART_SL)) !:
                  let FNPUSH_WINDOW(WINDOW,MAT LOTW$,2,2,19,59,NULL$,NULL$,NULL$) !:
                  let FNENTER(WINDOW,SHIPLOT_,MAT LOTSPEC$,MAT LOTH$,MAT LOT_$,MAT LOT_,1,NULL$,"  Z     HF",MAT WAIT) !:
                  let FNPOP_WINDOW(WINDOW,1,OFF) !:
                  mat HW$(UDIM(H$))=H$ !:
                  goto _Enter2
76595          end if 
76600          if F$(PART_SL)="C" AND (CMDKEY~=3 OR F$(DESC_SL) > NULL$) then 
76605             let FNRESTORE_WINDOW(SCREENS,"COMMENT",COMROW,COMCOLUMN,COMROWS,COMCOLUMNS,MAT COMW$,MAT COMSPEC$,MAT COMG$,MAT WORK$) !:
                  let FNPUSH_WINDOW(WINDOW,MAT COMW$,COMROW,COMCOLUMN,COMROWS,COMCOLUMNS,NULL$,NULL$,NULL$)
76610             let F$(CUSTOMER_PART_SL)= NULL$ !:
                  let FNENTER(WINDOW,SHIPPER_COMMENT_,MAT COMSPEC$,MAT BLANK$,MAT F$,MAT F,2,NULL$,"        HF",MAT WAIT) !:
                  let FNPOP_WINDOW(WINDOW,1,OFF) !:
                  mat HW$(UDIM(H$))=H$ !:
                  if CMDKEY=9 then !:
                     let F$(PART_SL)=F$(REV_SL)=F$(DESC_SL)=NULL$ !:
                     let CMDKEY(0) !:
                     let CURFLD(1) !:
                     goto _Enter2
76615             on (F$(PART_SL) == "C") goto _End_Enter !:
                  let F$(DESC_SL)=F$(DESC_SL)(1:30) !:
                  goto _Enter2
76620          end if 
76625          if F$(PART_SL)="T" AND (CMDKEY~=3 OR F$(DESC_SL) > NULL$) then 
76630             let FNRESTORE_WINDOW(SCREENS,"COMMENT",COMROW,COMCOLUMN,COMROWS,COMCOLUMNS,MAT COMW$,MAT COMSPEC$,MAT COMG$,MAT WORK$) !:
                  let FNPUSH_WINDOW(WINDOW,MAT COMW$,COMROW,COMCOLUMN,COMROWS,COMCOLUMNS,NULL$,NULL$,NULL$) !:
                  mat BLANK$(2) !:
                  let BLANK$(2)="1127;Enter a standard comment code or press F3.;" !:
                  let COMSPEC$(2)=SREP$(COMSPEC$(2),7,"V 58,UH","VU 15,UH") !:
                  print #WINDOW,fields "2,35,c 44,n": NULL$
76635             let F$(CUSTOMER_PART_SL)= NULL$ !:
                  let FNENTER(WINDOW,SHIPPER_COMMENT_,MAT COMSPEC$,MAT BLANK$,MAT F$,MAT F,2,NULL$,"  Z     HF",MAT WAIT)
76640             if F$(PART_SL)="T" AND CMDKEY~=9 AND NOT FNRESET(COMMENT,RPAD$(UPRC$(F$(DESC_SL)(1:15)),15)) then !:
                     let BLANK$(2)= "1;Enter a valid Standard Comment Code.;" !:
                     let CURFLD(2) !:
                     goto 76635
76645             let FNPOP_WINDOW(WINDOW,1,OFF) !:
                  let COMSPEC$(2)=SREP$(COMSPEC$(2),1,"VU 15,UH","V 58,UH ") !:
                  mat BLANK$(1)=(NULL$) !:
                  if CMDKEY=9 then !:
                     let F$(PART_SL)=F$(DESC_SL)=NULL$ !:
                     let CMDKEY(0) !:
                     let CURFLD(1) !:
                     goto _Enter2
76650             on (F$(PART_SL) == "T") goto _End_Enter !:
                  let F$(DESC_SL)=F$(DESC_SL)(1:30) !:
                  goto _Enter2
76655          end if 
76660          if CMDKEY=0 then 
76665             if CURFLD = 3 OR CURFLD > 9 then !:
                     let FNCONTAINER(MAT F$,MAT F)
76670             mat HW$(UDIM(H$))=H$ !:
                  let FNEDIT(SWITCH,MAT F$,MAT F,MAT HW$,MASK$)
76675          end if 
76680       loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
76685       if CMDKEY=9 then !:
               goto _End_Enter              !Exit loop
76690       if CMDKEY=3 AND FKEY><102 then 
76691          let SAVE_CURFLD=CURFLD !:
               let SUCCESS=FNZOOM(SWITCH,CURFLD) !:
               mat HW$(UDIM(H$))=H$ !:
               if SUCCESS then !:
                  let CURFLD(SAVE_CURFLD+2)
76692          if CURFLD==1 AND FNRESTORE(ORDERL2,RPAD$(F$(PART_SL),15)&F$(REV_SL)) then 
76693             do WHILE FNREAD_FILE(ORDERL2,FORM$(ORDERL_),NULL$,0,MAT ORL$,MAT ORL,ORDERL_) AND RPAD$(F$(PART_SL),15)&TRIM$(F$(REV_SL))==RPAD$(ORL$(PART_L),15)&TRIM$(ORL$(REV_L))
76694                if ORDERL(22)<=DAYS(DATE_+1) then !:
                        let FNMESSAGE(WINDEX,5,5,"Part "&F$(PART_SL)&F$(REV_SL)&" exists on discrete order "&ORL$(1)," Warning ") !:
                        exit do 
76695             loop 
76696          end if 
76697          goto _Enter2                 !Continue do
76698       end if 
76699       if NOT CMDKEY AND CURRENT>1 then 
76700          if CURFLD = 3 then !:
                  let F(CONT1_QTY_SL)=F(CONT2_QTY_SL)=0 !:
                  let FNCONTAINER(MAT F$,MAT F)
76705          if CURFLD > 9 then !:
                  let FNCONTAINER(MAT F$,MAT F)
76710          if (NOT F(ASN_SL)) AND ( CURFLD = 3 OR (CURFLD>3 AND CONTROL$(46)="N") ) then ! If >3 and cannot override
76715             let WORK$=FNKEY$(BLANKETL_+.1,MAT F$,MAT F) !:
                  if FNRESET(BLANKETL2,WORK$) then 
76750             end if  !:
               end if 
76755          let CURFLD(CURFLD,FKEY+(104*(NOT FKEY))) !:
               goto _Enter2                 !Continue do
76760       end if 
76765       goto _Exit_Enter                !Continue loop
76770 ! 
76775 _Enter3: ! ***** Enter Others
76777       if IP(SWITCH)=SHIPLFRG_ then 
76778          do  !:
                  let FNFUNCTION(FUNCTION$) !:
                  let FNINPUT(WINDOW,SWITCH,MAT SPEC$,MAT HW$,MAT F$,MAT F,MASK$,MAT WAIT) !:
                  let CURFLD(CURFLD) !:
                  let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F)
76779          loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
76780          goto _End_Enter !:
            end if 
76782       if IP(SWITCH)=ORDERL_ AND CMDKEY=2 then !:
               let SEL_LIST(ENT_CURRENT)=1 !:
               let F(2)=F(1) !:
               let F(3)=0 !:
               let CMDKEY(10) !:
               goto _Exit_Enter
76785       if IP(SWITCH)=ORDERL_ AND CMDKEY=1 then !:
               mat SEL_LIST=(1) !:
               for __LIST = 1 to UDIM(LIST$) !:
                  let LIST$(__LIST)(56:64)=LIST$(__LIST)(47:55) !:
                  let LIST$(__LIST)(65:73)="         " !:
                  let F(2)=F(1) !:
                  let F(3)=0 !:
               next __LIST !:
               let CMDKEY(10) !:
               goto _Exit_Enter
76790       if IP(SWITCH)=ORDERL_ AND TRIM$(F$(1))=NULL$ then !:
               let CMDKEY(10) !:
               goto _Exit_Enter
76795       if IP(SWITCH) = CUSTOMER_ AND MASK$(1:1) = "1" then 
76800          if F$(CUSTOMER_TYPE_U)="BT" then !:
                  let MASK$(28:28) = "1" !:
               else !:
                  let MASK$(14:14)=MASK$(17:17)=MASK$(18:18)=MASK$(21:21)=MASK$(22:22)=MASK$(16:16)="1"
76805       end if 
76808       if IP(SWITCH)=SHIPPERLA_ AND SHIPPERH$(COMMUN_SH)(1:2)="TO" then !:
               let HW$(5)="1127;Enter a Kanban Number, if Applicable.;" !:
               print #WINDOW,fields "6,3,c 15" : "Kanban #       "
76809       if EDI_CURSOR then let CURFLD(EDI_CURSOR)
76810       do  !:
               let FNFUNCTION(FUNCTION$) !:
               let FNINPUT(WINDOW,SWITCH,MAT SPEC$,MAT HW$,MAT F$,MAT F,MASK$,MAT WAIT) !:
               let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F)
76811       loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
76812       if CMDKEY=7 then 
76813          let FNPUSH_VALUE(CURFLD,_STACK,MAT _STACK) !:
               let FNDEFAULT(EDI_,MAT F$,MAT F) !:
               let FNENTER_OTHER(WINDEX,EDI_,SCREENS,"INVCEDI",EDIROW,EDICOLUMN,EDIROWS,EDICOLUMNS,MAT F$,MAT F,MAT EDIW$,MAT EDISPEC$,MAT DUMBGS$,MAT EDIH$,"00","  Z     HF") !:
               let CMDKEY(0) !:
               let CURFLD(FNPOP_VALUE(_STACK,MAT _STACK)) !:
               mat HW$(UDIM(H$))=H$
76814       end if 
76820       if CMDKEY=1 OR CMDKEY=9 then goto _End_Enter  !Exit loop
76825       if CMDKEY=3 then !:
               let CURFLD(CURFLD,104*FNZOOM(SWITCH,CURFLD)) !:
               mat HW$(UDIM(H$))=H$ !:
               goto _Enter3                 !Continue do
76830       if (IP(SWITCH)=SHIPPERLA_) AND (CURFLD=11 OR CURFLD=23) then !:
               let FNCOMMISSION(MAT F$,MAT F)
76835       if IP(SWITCH) = INVENT_ AND CMDKEY=5 then 
76845          let FNENTER_OTHER(WINDEX,PRICES_,SCREENSI,"PRICES",PRICEROW,PRICECOL,PRICEROWS,PRICECOLS,MAT F$,MAT F,MAT PRICEW$,MAT PRICESPEC$,MAT PRICEG$,MAT PRICEH$,NULL$,"         F") !:
               let CMDKEY(0) !:
               mat HW$(UDIM(H$))=H$
76850       end if 
76855       if NOT CMDKEY AND CURRENT>1 then !:
               let CURFLD(CURFLD,FKEY+(104*(NOT FKEY))) !:
               goto _Enter3                 !Continue do
76860       goto _Exit_Enter                !Continue loop
76865 ! 
76870 _Enter17: ! ******** Serial Numbers
76872       do  !:
               do  !:
                  let FNBLURB("Enter serial numbers for shipper "&SHIPPERH$(2)&".") !:
                  let FNFUNCTION(FUNCTION$) !:
                  print #124,fields "1,4,C;2,4,C": "For Pallet Serials- specify any negative quantity.","Pallet Serials must precede their container serials." !:
                  let FNINPUT(WINDOW,17,MAT SPEC$,MAT HW$,MAT F$,MAT F,MASK$,MAT WAIT) !:
               loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
76874          if CMDKEY><9 then 
76876             if NOT CMDKEY AND CURRENT>1 then !:
                     let CURFLD(CURFLD,FKEY+(104*(NOT FKEY)))
76878             if CMDKEY=3 then !:
                     let CURFLD(CURFLD,104*FNZOOM(SWITCH,CURFLD)) !:
                     mat HW$(UDIM(H$))=H$
76880          end if 
76882       loop UNTIL (CMDKEY=1) OR (CMDKEY>4)
76884       mat HW$(UDIM(H$))=H$
76886       goto _End_Enter
76910 ! 
76920 _Enter25: ! ***** Standard Comment For Shipper Detail
76925       do  !:
               do  !:
                  let FNFUNCTION(FUNCTION$) !:
                  let FNINPUT(WINDOW,SWITCH,MAT COMSPEC$,MAT HW$,MAT F$,MAT F,MASK$,MAT WAIT) !:
                  let CURFLD(CURFLD) !:
                  let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
               loop UNTIL ((NOT CMDKEY) OR (FNCMDKEY(FUNCTION$,CMDKEY)))
76930          if CMDKEY><9 then 
76935             if NOT CMDKEY AND CURRENT>1 then !:
                     let CURFLD(CURFLD,FKEY+(104*(NOT FKEY)))
76940             if CMDKEY=3 then !:
                     let CURFLD(CURFLD,104*FNZOOM(SWITCH,CURFLD)) !:
                     mat HW$(UDIM(H$))=H$
76945          end if 
76950       loop UNTIL (CMDKEY>8 OR (F$(PART_SL)><"F") AND (F$(PART_SL)><"C") AND F$(PART_SL)><"T")
76955       goto _End_Enter
76960 ! 
76965 _Exit_Enter: ! ***** Exit
76970       mat HW$(UDIM(H$))=H$            !Restore help !:
            let WORK=FNEDIT(SWITCH,MAT F$,MAT F,MAT HW$,MASK$)
76972    loop UNTIL (((CMDKEY=10) OR ((NOT CMDKEY) AND CURRENT=1)) AND WORK) OR ((SWITCH=2 OR SWITCH=6) AND CMDKEY=8)
76975    let FNBLURB(NULL$) !:
         mat HW$(1) !:
         let FNENTER=SWITCH                 !Success
76980 _End_Enter: fnend 
77000 ! 
77100 Fm_Special_1: ! ***** Convert From Order To Shipper
77110 ! Convert Order To Shipper
77120 def FNFM_SPECIAL_1(NULL)
77140    let FNFM_SPECIAL_1=FALSE           !Assume failure
77160    let _FUNCTION = 7 !:
         let WORK$=HILITE$&"Convert Order to Shipper" !:
         let FNPUSH_STRING(WORK$,_FM,MAT _FM$) !:
         let MSG$(WORK$) !:
         do 
77180       let FNCLEAR(ORDERH_,MAT ORH$,MAT ORH) !:
            let FNCLEAR(SHIPPERH_,MAT SHIPPERH$,MAT SHIPPERH) !:
            let _ORDER$=NULL$
77200       let _ORDER$=FNEXPAND$(FNPROMPT$(WINDEX,ORDERH,FORM$(ORDERH_),MAT ORH$,MAT ORH,MAT SHHSPEC$,MAT SHHH$,_FUNCTION,"  Z     HF",ORDERH_,MAT SHIPH_MASK$,MAT WAIT),8)
77220       if CMDKEY><9 then 
77240          let WORK=(FNREAD_FILE(ORDERH,FORM$(ORDERH_),_ORDER$,0,MAT ORH$,MAT ORH,ORDERH_) AND (ORH(TYPE_H) == 1 OR ORH(TYPE_H) == 7)) !:
               if (NOT WORK) AND _ORDER$>NULL$ then !:
                  let FNBLURB("Order '"&FNSHOW_KEY$(1.1,MAT ORH$,MAT ORH)&"' not on file.") !:
               else !:
                  if (NOT WORK) then !:
                     let FNBLURB("End of file.")
77260          if WORK then 
77280             let WORK = (ORH(POINTER_H) ~= 0)
77300             if NOT WORK then !:
                     let FNBLURB("Order selected has no detail line items. Conversion not permitted.")
77320          end if  !:
            end if 
77340    loop UNTIL (CMDKEY=9 OR WORK)
77360    if CMDKEY><9 then 
77380       let FNXREF_FIELDS(ORDERH_,MAT SHIPPERH$,MAT SHIPPERH) !:
            let FNREAD_DESCRIPTION(SHIPPERH_,MAT SHIPPERH$,MAT SHIPPERH) !:
            let FNDISPLAY(WINDOW,SHIPPERH_,MAT SHHSPEC$,MAT SHIPPERH$,MAT SHIPPERH)
77400       do  !:
               let _CONVERT$=FNREAD$("Convert This Order:","Y","Enter Yes to Convert Order or No to Leave Order On File.",NULL$,COMMENTR,COMMENTC,1,"        H ",MAT WAIT) !:
            loop UNTIL CMDKEY = 9 OR POS("YN",_CONVERT$)
77420       if _CONVERT$="Y" AND CMDKEY ~= 9 then 
77440          mat SHIPPERH(GROSS_SH:NET_WEIGHT_SH) = (0) !:
               let SHIPPERH$(SHIPPER_SH) = FNGET_DOCUMENT$(SHIPPERH(COMPANY_SH),8) !:
               let SHIPPERH(SHIPPER_DATE_SH)=DATE
77450          if CONTROL$(10) = "Y" then !:
                  let SHIPPERH$(BOL_SH) = SHIPPERH$(SHIPPER_SH)(3:8)
77460          mat LIST(1) = (0) !:
               mat SLIST(1) = (0) !:
               mat OLIST(1) =(0) !:
               mat LIST$(1) = (NULL$) !:
               mat SEL_LIST(1) = (0)
77480          let SHIPPERL(POINTER_SL) = SHIPPERH(POINTER_SH) !:
               let FNMAKE_LL_PAS(ORDERL,ORDERL_,FORM$(ORDERL_),MAT ORL$,MAT ORL,MAT LIST$,MAT LIST,ORH(POINTER_H),POINTER_L) !:
               mat SEL_LIST(UDIM(LIST$))=(0) !:
               if UDIM(LIST$) then 
77490             if INDUSTRY_CODE$=="D" then !:
                     mat SEL_LIST=(1) !:
                     let FUNCTION_TMP$="dh      HF" !:
                  else !:
                     let FUNCTION_TMP$="dhe     HF"
77492             if GUI_MODE then 
77493                open #(WGUI:=FNNEXT_CHANNEL(1,127)): "srow=2,scol=2,erow=20,ecol=79",display,outin 
77494                do 
77495                   let FNFUNCTION("        HF") !:
                        let GUI_CURRENT=FNGUI_GRID(WGUI,"Convert to Shipper",SREP$("^Part Number    ^Rev ^Due Date^P.O. No.        ^Cur Ord.^ Shipped^BckOrder"&NORMAL$,1,"^",ULHL$),2,2,12,60,MAT LIST$,CURCELL,LEAVE_WIN:=1,SHOW_ZOOM_ONLY:=0,MULTIPLE_ENTRIES:=1,MAT SEL_LIST,FORCE_ROWS:=10,CURCELL,"0010111")
77496                loop UNTIL CMDKEY>=9
77497                close #WGUI: !:
                     let WGUI=0 !:
                     let LEAVE_WIN=0
77498             else 
77500                let FNPAS_MANY_ENTER(WINDEX,MAT LIST$,MAT SEL_LIST,MAT CONV_SPEC$,MAT CONV_HELP$,CONV_CURRENT:=1,3,3,18,1,76,"Convert to Shipper",FUNCTION_TMP$,SREP$("^Part Number    ^Rev ^Due Date^P.O. No.        ^Cur Ord.^ Shipped^BckOrder"&NORMAL$,1,"^",ULHL$),NULL$,MAT WAIT,ORDERL_+.1,MAT ENT_SPEC$,MAT ENT_HELP$,MAT ENT$,MAT ENT,ENT_CURRENT:=1,"01","        HF",ON)
77502             end if 
77520             if CMDKEY ~= 9 then 
77530                if INDUSTRY_CODE$=="D" then !:
                        mat SEL_LIST=(1)
77540                let _VECTOR = 0
77560                do WHILE (_VECTOR+=1) <= UDIM(LIST$)
77580                   let SHIPPED = 0 !:
                        if LEN(RTRM$(LIST$(_VECTOR)(1:15))) > 1 then !:
                           let SHIPPED = VAL(LIST$(_VECTOR)(56:64)) conv Ignore
77600                   if FNREAD_FILE(ORDERL,FORM$(ORDERL_),NULL$,LIST(_VECTOR),MAT ORL$,MAT ORL,ORDERL_) then 
77670                      let DUMMY$ = STR$(ORH(COMPANY_H))&RPAD$(ORL$(PART_L),15)&RPAD$(ORL$(REV_L),4) !:
                           if NOT FNREAD_FILE(-INVENT,FORM$(INVENT_),DUMMY$,0,MAT INV$,MAT INV,INVENT_) then !:
                              mat INV = (0) : mat INV$ = ("")
77680                      let FNXREF_FIELDS(ORDERL_,MAT SHIPPERL$,MAT SHIPPERL)
77700                      if GLMASTER AND SHIPPERL(UNIT_PRICE_SL) AND CONTROL$(27)="Y" AND NOT FNRESET(GLMASTER,STR$(SHIPPERL(COMPANY_SL))&CNVRT$("zd 9",SHIPPERL(CREDIT_SL))) then !:
                              let SEL_LIST(_VECTOR)=0 !:
                              let FNBLURB("Cannot transfer Part "&TRIM$(SHIPPERL$(PART_SL))&". G/L account not defined."&CHR$(7)) !:
                              let SLEEP(1) !:
                              let SEL_LIST(_VECTOR)=0 !:
                              goto 77880    !Loop back to read orderl
77719                      let FNCOMMISSION(MAT SHIPPERL$,MAT SHIPPERL)
77720                      let ORL(SHIP_TO_DATE_L)+=SHIPPED !:
                           let ORL(BACK_L)=FNEITHER(0,ORL(ORDERED_L)-ORL(SHIP_TO_DATE_L),ORL(SHIP_TO_DATE_L)==0) !:
                           let ORL(SHIPPED_L) = 0 !:
                           let SHIPPERL(SHIPPED_SL) = SHIPPED !:
                           let SHIPPERL(CUM_SL)=ORL(SHIP_TO_DATE_L) !:
                           let SHIPPERL(BACK_L)=ORL(BACK_L)
77740                      let SHIPPERL(DATE_SHIPPED_SL)=SHIPPERH(SHIPMENT_DATE_SH) !:
                           let FNCONTAINER(MAT SHIPPERL$,MAT SHIPPERL)
77760                      let F(TAXABLE_SL) = 0 !:
                           if SHIPPERL(PERCENT1_SL) then !:
                              let F(TAXABLE_SL) = (TRUE)
77780                      let SHIPPERL(EXTENSION_SL)= FNEXTENSION(MAT SHIPPERL) !:
                           let FNWRITE(SHIPPERL,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,SHIPPERL_) !:
                           if (COATING) then !:
                              let FNMAKE_COMMITTED(MAT SHIPPERL$,MAT SHIPPERL,MAT LOT_$,MAT LOT_,1)
77800                      let FNAPPEND(MAT SLIST,REC(SHIPPERL)) !:
                           let FNINCREMENT(MAT SHIPPERL$,MAT SHIPPERL,MAT SHIPPERH)
77820                      let FNDECREMENT(MAT ORL$,MAT ORL,MAT ORH)
77840                      let FNREWRITE(ORDERL,FORM$(ORDERL_),NULL$,LIST(_VECTOR),MAT ORL$,MAT ORL,ORDERL_) !:
                           let FNAPPEND(MAT OLIST,LIST(_VECTOR))
77860                   end if 
77880                loop 
77900                let SHIPPERH(POINTER_SH) = FNREWRITE_LL(SHIPPERL,SHIPPERL_,FORM$(SHIPPERL_),MAT SHIPPERL$,MAT SHIPPERL,MAT SLIST,POINTER_SL) !:
                     let FNWRITE(SHIPPERH,FORM$(SHIPPERH_),MAT SHIPPERH$,MAT SHIPPERH,SHIPPERH_) !:
                     let FNBLURB("Order " & ORH$(ORDER_H) & " converted to Shipper " & SHIPPERH$(SHIPPER_SH)) !:
                     let SLEEP(4) !:
                     let FNFM_SPECIAL_1 = TRUE
77940                let FNREWRITE(ORDERH,FORM$(ORDERH_),_ORDER$,0,MAT ORH$,MAT ORH,ORDERH_) !:
                     mat DUMMY(UDIM(ORH_PAS$))=(1) !:
                     let DUMMY(MAX(1,MIN(UDIM(DUMMY),ORD_CURRENT)))=0 !:
                     let FNCOMPRESS_MATS(MAT ORH_PAS$,MAT DUMMY)
77945                if ORH(GROSS_H)=0 then !:
                        let FNDELETE_KEY(ORDERL,ORH$(1)) !:
                        let FNDELETE_KEY(ORDERH,ORH$(1))
77950             end if  !:
               end if  !:
            end if 
77955 ! Let Fnsort_Shl(Shipperh$(2))
77960       goto 77140
77970    end if 
77980    let FNPOP_STRING$(_FM,MAT _FM$) !:
         let _FUNCTION = 0
77982    if GUI_MODE AND WGUI then !:
            close #WGUI: !:
            let WGUI=0
77990 _End_Fm_Special_1: fnend 
78000 ! 
78100 Fm_Special_2: ! ***** Inventory Inquiry
78120 def FNFM_SPECIAL_2(SWITCH)
78140    let FNFM_SPECIAL_2=0
78160    let INQ_PART$=FNLINE_INPUT$(WINDEX,15,6,15,"Enter a part number",NULL$,NULL$,NULL$,"Inventory Inquiry","        H ",MAT WAIT) !:
         if CMDKEY ~= 9 AND INQ_PART$ > NULL$ AND NOT FNINVT_INQUIRY("1" & INQ_PART$) then !:
            let FNBLURB(INQ_PART$ & " not found. Press [RETURN].") !:
            let FNSELECT("          ")
78380 _End_Fm_Special_2: fnend 
81000 ! 
81100 Input: ! ***** Enter Screen Data
81110 def FNINPUT(&WINDOW,SWITCH,MAT SPEC$,MAT H$,MAT F$,MAT F,MASK$*99,MAT WAIT)
81120    let FNINPUT=SWITCH                 !Assume success !:
         if SWITCH><_INPUT_SWITCH OR MASK$><_INPUT_MASK$ then 
81130       mat SPECW$(UDIM(SPEC$))=SPEC$   !Work copy !:
            for LOOP_=1 to MIN(UDIM(SPEC$),LEN(MASK$))  !Apply mask !:
               if MASK$(LOOP_:LOOP_)="1" AND NOT POS(UPRC$(SPECW$(LOOP_)),"P",11) then let SPECW$(LOOP_)=SREP$(UPRC$(SPECW$(LOOP_))&"p",11,"U",NULL$)
81140       next LOOP_
81150       let _INPUT_SWITCH=SWITCH !:
            let _INPUT_MASK$=MASK$
81160    end if 
81170    do  !:
            on IP(SWITCH)-40 goto _Input_Edi !:
            on IP(SWITCH) goto _Input1,_Input2,_Input3,_Input4,_Input5,_Input6,_Input7,_Input8,_End_Input,_End_Input,_End_Input,_End_Input,_End_Input,_End_Input,_End_Input,_End_Input,_Input17,_Input18,_End_Input,_End_Input,_End_Input,_End_Input,_End_Input,_End_Input,_Input25,_End_Input,_Input27,_Input28,_Input29,_End_Input,_Input31,_Input32 none _End_Input
81180 ! 
81190 _Input1: ! ***** Shipper Header Screen
81200       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(SHIPPER_SH),F$(CUSTOMER_SH),F$(DEST_SH),F(TYPE_SH),MAT F$(B_NAME_SH:S_ZIP_SH),F$(TERMS_SH),F(SALESMAN_SH),F$(COMMUN_SH),F$(PICKUP_SH),F$(CARRIER_SH),F(PLANT_SH),F$(BOL_SH),F$(DOCK_SH),F$(TRAILER_SH),F$(SEAL_SH),F$(EQUIP_SH),F$(MODE_SH),F$(PC_SH),F(SHIPMENT_DATE_SH),F(SHIP_TIME_SH),F(ARRIVAL_DATE_SH),F(ARRIVAL_TIME_SH),F$(TERMS_DESC_SH),MAT SHIP_DESC$,F$(ORDER_SH) conv _Exit_Input
81205       if CURFLD==4 AND NOT CMDKEY then !:
               let CMDKEY(10)
81207       exit do 
81210 ! 
81220 _Input2: ! ***** Shipper Detail
81225       if S_PACK then !:
               let FNEDIT_SET(3,MAT HW$,MASK$,"1B;Shipped quantity is NOT a Full Pack quantity.;") !:
               let S_PACK =0
81230       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(PART_SL),F$(REV_SL),F(SHIPPED_SL),F(BACK_SL),NULL,F$(CUSTOMER_PART_SL),ITYPE$,F$(DESC_SL),F(UNIT_WT_SL),F(TARE_SL),F$(CONTAINER1_SL),F(CONT1_QTY_SL),F$(CONTAINER2_SL),F(CONT2_QTY_SL) conv _Exit_Input !:
            exit do 
81240 ! 
81250 _Input3: ! ***** Convert From Order To Shipper
81260       rinput #WINDOW,fields MAT SPECW$,attr "R",help "1127;Enter a valid order number or press F3.;" : _ORDER$ !:
            exit do 
81270 ! 
81280 _Input4: ! ***** Conversion From Order
81287       rem let R$=CNVRT$("pic(##)",CURROW+1) !:                                            let SPECW$(1)(1:2)=R$ !:                                                        let SPECW$(2)(1:2)=R$
81290       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: MAT F(2:3) conv _Exit_Input
81292       exit do 
81300 ! 
81310 _Input5: ! ***** Vendor Screen
81320       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: MAT F$(VENDOR_V:FAX_V),F$(CARRIER_V),F$(FRT_TERMS_V),F$(FOB_V),F$(CONTACT_V),F$(TERMS_V),F$(BUYER_V),F$(TYPE_V),F$(MINORITY_V),F(COMPANY_V),F(CURRENCY_V),F(GL_V),F(MIN_ORDER_V),F(MIN_WT_V),F(LAST_PAY_V),F(LAST_INV_V),MAT DESC_V$ conv _Exit_Input !:
            exit do 
81330 ! 
81340 _Input6: ! ***** Inventory
81350       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(PART_I),F$(REVISION_I),F$(COMPANY_I),F$(DESCR1_INV_I),F$(DESCR2_INV_I),F$(DESCR_PO_I),F$(UOM1_I),F$(UOM2_I),F$(TYPE_I),F(SIZE_I),F(TOLERANCE_I),F(WIDTH_I),F$(COMMISSION_CODE_I),F$(TAXABLE_I),F$(LOT_REQ_I),F$(CONTAINER1_I),F$(CONTAINER2_I),F$(VENDOR_I),F(SCRAP_FACTOR_I),F(PART_TYPE_I),F(GROUP_NO_I),F(PROD_CLASS_I),F(LEAD_TIME_I),F(CONVERSION_I),F(WEIGHT_NET_I),F$(COMMOD_I),F(STD_PACK_I),F(ECONOMIC_I),F$(DRAWING_NO_I),F(COST_LAST_I),F(COMMISSION_I),F(PLANT_I),F(DATE_CHANGED_I) conv _Exit_Input
81351       exit do 
81360 ! 
81370 _Input7: ! ***** Customer
81380       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: MAT F$(CUSTOMER_NO_U:SUFFIX_U),F$(CONTACT_NAME_U),F$(TERMS_CODE_U),F(PRICE_CODE_U),F(CLASS_CODE_U),F$(STATEMENTS_U),F$(TERRITORY_U),F$(LATE_CHARGE_U),F$(TAX_STATUS_U),F(TAX_JURIS_U),F(COMPANY_U),F(CURRENCY_CODE_U),F(SALESMAN_NO_U),F$(PRN_INVOICE_U),F$(SHIP_PAY_U),F$(CARRIER_U),F$(COMM_CODE_U),F$(TRANSIT_U),F(CREDIT_LIMIT_U),F(INVOICE_DATE_U),F(ORDER_DATE_U),F(PAYMENT_DATE_U),F(CURRENT_BALANCE_U),F(CURRENT_ORDERS_U),F(ORDERS_MTD_U),F(SALES_MTD_U),F(ORDERS_YTD_U),F(SALES_YTD_U),F(PROFIT_YTD_U),DESC_U$(1),DESC_U$(3) conv _Exit_Input !:
            exit do 
81390 ! 
81400 _Input8: ! ***** Blanket Order Input
81410       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(PART_B),F$(REV_B),F$(CUSTOMER_PART_B),F$(CUSTPO_B),SCODE$,F$(CONTAINER_B),F$(CUM_TYPE_B),F(MODEL_YEAR_B),F(STD_PACK_B),F(ORDERED_B),F(CUM_TOT_B),F(UNIT_COST_B),F(UNIT_PRICE_B),F$(LAST_REL_B),F(LAST_REL_DATE_B),F(SALESMAN_B),F(COMMISSION_B) conv _Exit_Input !:
            exit do 
81420 ! 
81430 _Input17: ! ***** Serial Numbers
81440       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: (MAT F$,MAT F) conv _Exit_Input !:
            exit do 
81450 ! 
81460 _Input18: ! ***** Lot Numbers
81470       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: (MAT F$,MAT F) conv _Exit_Input !:
            exit do 
81480 ! 
81490 _Input25: ! ***** Order Comment
81500       let TMP1$=F$(PART_SL)(1:1) !:
            let TMP2$=F$(REV_SL)(1:1) !:
            rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: TMP1$,TMP2$,F$(DESC_SL) conv _Exit_Input !:
            let F$(PART_SL)=TMP1$ !:
            let F$(REV_SL)=TMP2$ !:
            exit do 
81510 ! 
81520 _Input27: ! ***** Prices For Inventory Screen Pricing
81530       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F(BREAK1_I),F(PRICE1_I),F(BREAK2_I),F(PRICE2_I),F(BREAK3_I),F(PRICE3_I),F(BREAK4_I),F(PRICE4_I),F(BREAK5_I),F(PRICE5_I),F(BREAK6_I),F(PRICE6_I) conv _Exit_Input !:
            exit do 
81540 ! 
81550 _Input28: ! ***** Additional Entry Shipper Header
81560       rinput #WINDOW,fields MAT SPECW$, attr "R",help MAT H$: F$(MASTER_BOL_SH),F$(LOC_ID_SH),F$(LOC_QUAL_SH),F$(ALT_ORD_SH),F(SHIPPER_DATE_SH),F(ASN_DATE_SH),F$(HAZARDOUS_SH),TAXABLE$,F(TAX_JUR_SH),F(COMPANY_SH),F(CURRENCY_SH),F(WSID_SH) conv _Exit_Input !:
            exit do 
81570 ! 
81580 _Input29: ! ***** Additional Entry Shipper Detail
81590       if CONTROL$(12)="Y" then !:
               let _PSAVE=F(UNIT_PRICE_SL) !:
               let _CSAVE=F(UNIT_COST_SL) !:
               let F(UNIT_PRICE_SL)=F(UNIT_COST_SL)=0
81595       let TAXABLE_SL$="NY"(MIN(2,F(TAXABLE_SL)+1):MIN(2,F(TAXABLE_SL)+1))
81600       let DUMMY = MAX(1,MIN(10,F(COMMISSION_SL))) !:
            let COMM_CODE$ = "ABCDEFGHIJ"(DUMMY:DUMMY) !:
            rinput #WINDOW,fields MAT SPECW$, attr "R",help MAT H$: F$(ORDER_SL),F$(RELEASE_SL),F$(LOT_SL),F$(CUSTPO_SL),F$(RAN_NO_SL),F(ORDERED_SL),F$(POLINE_SL),F$(PART_EXTEND_SL),F(UNIT_COST_SL),F(UNIT_PRICE_SL),COMM_CODE$,F(COMM_AMT_SL),F(CREDIT_SL),F(GROUP_SL),F(CLASS_SL),F$(EDI_DOC_SL),F$(UM_SL),F$(COMMOD_SL),F$(MODEL_YEAR_SL),F(STD_PACK_SL),F(CONV2_SL),TAXABLE_SL$,F(SALESMAN_SL),F$(CLAUSE_SL) conv _Exit_Input
81601       let DUMMY$ = MAX$("A",MIN$("J",COMM_CODE$))  !Condition code !:
            let F(COMMISSION_SL) = POS("ABCDEFGHIJ",DUMMY$)  !Apply
81605       let F(TAXABLE_SL)=(TAXABLE_SL$=="Y")
81610       if CONTROL$(12)="Y" then !:
               let F(UNIT_PRICE_SL)=_PSAVE !:
               let F(UNIT_COST_SL)=_CSAVE
81611       exit do 
81612 ! 
81614 _Input31: ! ***** Freight
81615       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(PART_SL),F$(DESC_SL),F(UNIT_PRICE_SL) conv _Exit_Input !:
            exit do 
81618 ! 
81620 _Input32: ! ***** Edifact Data
81622       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(EXCESS_REASON_SH),F$(RESPON_SH),F$(AUTH_SH),F$(CONVEY_SH),F$(ULTIMATE_CUST_SH) conv _Exit_Input !:
            exit do  !:
            ! 
81624 _Input_Edi: ! ***** Edi Info Window
81625       if GUI_MODE then !:
               let SPECW$(1)="02,34,C 2/1,UH"
81626       rinput #WINDOW,fields MAT SPECW$,attr "R",help MAT H$: F$(EDI_SOURCE_SL),F$(EDI_DOC_SL),F(EDI_LIN_NUM_SL) conv _Exit_Input !:
            exit do 
81627 ! 
81800 _Exit_Input: ! ***** Check For Conversion Errors
81810       let WORK=CNT+1 !:
            if WORK<=UDIM(SPEC$) then !:
               let CURFLD(WORK) !:
               let FNERROR("The Number Indicated has Been Entered Incorrectly.")
81820    loop UNTIL (WORK>FIELD)
81830    let FNBLANK(0,MAT F$,MAT F,1,0,0)
81840 _End_Input: fnend 
82000 ! 
82100 Keys: ! ***** Build Key
82110 def FNKEY$*64(SWITCH,MAT F$,MAT F)
82120    let FNKEY$=NULL$                   !Default !:
         do  !:
            on IP(SWITCH)==CARRIER_ goto _Key_Carrier !:
            on IP(SWITCH)==COMMUN_ goto _Key_Commun !:
            on IP(SWITCH)==EDIDOC_ goto _Key_Edidoc !:
            on IP(SWITCH) goto _Key1,_Key2,_Key3,_Key4,_Key5,_Key6,_Key7,_Key8,_End_Keys,_End_Keys,_End_Keys,_Key12,_End_Keys,_Key14,_End_Keys,_End_Keys,_Key17,_Key18,_Key19,_End_Keys,_Key21,_Key22,_Key23,_End_Keys,_End_Keys,_End_Keys,_End_Keys,_End_Keys,_End_Keys,_Key30 none _End_Keys
82130 ! 
82140 _Key1: ! ***** Shipper Header
82150       let FNKEY$=RPAD$(F$(SHIPPER_SH),8) !:
            exit do 
82160 ! 
82170 _Key2: ! ***** Shipper Detail
82180       let FNKEY$=RPAD$(F$(SHIPPER_SL),8)&CNVRT$("BH 3",F(DATE_ADDED_SL))&CNVRT$("BH 3",F(TIME_ADDED_SL)) !:
            exit do 
82190 ! 
82200 _Key3: ! ***** Order Header
82210       if FP(SWITCH) then !:
               let FNKEY$=RPAD$(F$(CUSTOMER_H),8) !:
            else !:
               let FNKEY$=RPAD$(F$(ORDER_H),8)
82215       exit do 
82220 ! 
82230 _Key4: ! ***** Order Detail
82240       let FNKEY$=RPAD$(F$(ORDER_L),8)&CNVRT$("BH 3",F(DATE_ADDED_L))&CNVRT$("BH 3",F(TIME_ADDED_L)) !:
            exit do 
82250 ! 
82260 _Key5: ! ***** Vendor
82270       if POS(SHIPPERH$(CUSTOMER_SH),"??") OR POS(INV$(VENDOR_I),"?") then !:
               let FNKEY$=UPRC$(RPAD$(F$(NAME_V)(1:8),8)) !:
               exit do 
82280       let FNKEY$=RPAD$(F$(VENDOR_V),8) !:
            exit do 
82290 ! 
82300 _Key6: ! ***** Inventory
82310       if POS(SHIPPERL$(PART_SL),"?") then !:
               let FNKEY$=UPRC$(F$(COMPANY_I)&F$(DESCR1_INV_I)(1:8)) !:
               exit do 
82320       if FP(SWITCH) then !:
               let FNKEY$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
            else !:
               let FNKEY$=RPAD$(F$(COMPANY_I),1)&RPAD$(F$(PART_I),15)&RPAD$(F$(REVISION_I),4)
82330       exit do 
82340 ! 
82350 _Key7: ! ***** Customer
82360       if POS(SHIPPERH$(CUSTOMER_SH),"?") then !:
               let FNKEY$=UPRC$(RPAD$(F$(CUSTOMER_TYPE_U),2)&F$(CUSTOMER_NAME_U)(1:8)) !:
               exit do 
82370       let FNKEY$=UPRC$(RPAD$(F$(CUSTOMER_NO_U),8)&RPAD$(F$(CUSTOMER_TYPE_U),2)&RPAD$(F$(SHIP_TO_CODE_U),9)) !:
            exit do 
82380 ! 
82390 _Key8: ! ***** Blanket Order
82392       if FP(SWITCH)==.4 then !:
               let FNKEY$=RPAD$(F$(ORDER_B),8) !:
               exit do 
82400       if FP(SWITCH) then !:
               let FNKEY$=RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9)&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
            else !:
               let FNKEY$=RPAD$(F$(CUSTOMER_B),8)&RPAD$(F$(DEST_B),9)&RPAD$(F$(PART_B),15)&RPAD$(F$(REV_B),4)&CNVRT$("BH 3",F(DATE_ADDED_B))&CNVRT$("BH 3",F(TIME_ADDED_B))
82410       exit do 
82420 ! 
82430 _Key12: ! ***** General Ledger
82440       let FNKEY$=RPAD$(F$(1),1)&RPAD$(F$(2),3)&RPAD$(F$(3),5)&RPAD$(F$(4),1) !:
            exit do 
82450 ! 
82460 _Key14: ! ***** Sales Tax
82470       let FNKEY$=RPAD$(F$(1),1)&RPAD$(F$(2),3) !:
            exit do 
82480 ! 
82490 _Key17: ! ***** Serial Number
82500       if FP(SWITCH) then !:
               let FNKEY$=RPAD$(F$(1),8)&RPAD$(F$(2),26)&CNVRT$("BH 3",F(9))&CNVRT$("BH 3",F(10)) !:
               exit do 
82510       let FNKEY$ = RPAD$(F$(SHIPPER_SL),8) & RPAD$(F$(CUSTOMER_PART_SL),26) & CNVRT$("BH 3",F(DATE_ADDED_SL)) & CNVRT$("BH 3",F(TIME_ADDED_SL)) !:
            exit do 
82520 ! 
82530 _Key18: ! ***** Shipper Lot Numbers
82540       let FNKEY$=RPAD$(F$(1),8)&RPAD$(F$(2),15)&RPAD$(F$(3),15)&CNVRT$("BH 3",F(2))&CNVRT$("BH 3",F(3)) !:
            exit do 
82560 ! 
82570 _Key19: ! ***** Audit Trail
82580       if FP(SWITCH) then !:
               let FNKEY$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&CHR$(F(PLANT_SL))&CNVRT$("BH 3",DAYS(F(DATE_SHIPPED_SL))) !:
               exit do 
82590       let FNKEY$=STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&CHR$(F(PLANT_SL))&CNVRT$("BH 3",F(DATE_SHIPPED_SL)) !:
            exit do 
82600 ! 
82610 _Key21: ! ***** Lot Number
82620       let FNKEY$=RPAD$(F$(1),15)&RPAD$(F$(2),4)&RPAD$(F$(3),15) !:
            exit do 
82630 ! 
82640 _Key22: ! ***** Dock Code
82650       if FP(SWITCH) then !:
               let FNKEY$=RPAD$(F$(CUSTOMER_SH),8)&RPAD$(F$(DEST_SH),9) !:
            else !:
               let FNKEY$=RPAD$(F$(1),8)&RPAD$(F$(2),9)&RPAD$(F$(10),8)
82655       exit do 
82660 ! 
82670 _Key23: ! ***** 862 Shipping Schedules
82672       if FP(SWITCH)=.1 then ! Shipperl !:
               let FNKEY$=RPAD$(F$(ORDER_SL),8)&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
               exit do 
82674       if FP(SWITCH)=.2 then ! Blanket order !:
               let FNKEY$=RPAD$(F$(ORDER_B),8)&RPAD$(F$(PART_B),15)&RPAD$(F$(REV_B),4) !:
               exit do 
82676       if FP(SWITCH)=.3 then ! Order header  !:
               let FNKEY$=RPAD$(F$(ORDER_H),8) !:
               exit do 
82680       let FNKEY$=RPAD$(F$(1),8)&RPAD$(F$(2),15)&RPAD$(F$(3),4)&CNVRT$("BH 3",DAYS(F(1)))  !Schedc
82690       exit do 
82691 ! 
82692 _Key30: ! ***** Shipper-Destination
82694       let FNKEY$=RPAD$(F$(31),9)&RPAD$(F$(2),8) !:
            exit do 
82696 ! 
82700 _Key_Carrier: ! *****
82710       let FNKEY$=CARRIER$(2) !:
            exit do 
82712 ! 
82714 _Key_Eqtm: ! *****
82716       let FNKEY$="B" !:
            exit do 
82718 ! 
82720 _Key_Commun: ! *****
82722       let FNKEY$=COMM$(1)(1:2) !:
            exit do 
82724 ! 
82725 _Key_Edidoc: ! *****  Support Ky2
82726       let FNKEY$=RPAD$(F$(1),2)&RPAD$(F$(2),15)&CNVRT$("BH 3",F(3))&CNVRT$("BH 3",F(4)) !:
            exit do 
82810 _Exit_Keys: ! ***** Key Built
82820    loop 
82830 _End_Keys: fnend 
84000 ! 
84100 List_Fm_Special: ! ***** Special Processes For Listfm
84120 def FNLIST_FM_SPECIAL(SWITCH)
84140    let FNLIST_FM_SPECIAL=FALSE        !Assume failure
84160    do  !:
            on SWITCH goto _List_Fm_Special_1,_List_Fm_Special_2 none _End_List_Fm_Special
84180 ! 
84200 _List_Fm_Special_1: ! ***** Not Used
84220       exit do 
84240 ! 
84260 _List_Fm_Special_2: ! ***** Shipper Line Detail
84280       exit do 
84300 ! 
84320 _Exit_List_Fm_Special: ! *****
84340    loop 
84360 _End_List_Fm_Special: fnend 
85000 ! 
85100 Make_Lines: ! ***** Make Display Line
85120 def FNMAKE_LINE$*80(SWITCH,MAT F$,MAT F)
85140    let FNMAKE_LINE$=NULL$             !Assume failure
85160    do  !:
            on IP(SWITCH)==CARRIER_ goto _Make_Carrier !:
            on IP(SWITCH)==EQTM_ goto _Make_Eqtm !:
            on IP(SWITCH)==COMMUN_ goto _Make_Commun !:
            on IP(SWITCH)==EDIDOC_ goto _Make_Edidoc
85170       on IP(SWITCH) goto _Make_Line1,_Make_Line2,_Make_Line3,_Make_Line4,_Make_Line5,_Make_Line6,_Make_Line7,_Make_Line8,_End_Make_Lines,_Make_Line10,_End_Make_Lines,_Make_Line12,_End_Make_Lines,_Make_Line14,_End_Make_Lines,_Make_Line16,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_Make_Line21,_Make_Line22,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_End_Make_Lines,_Make_Line30 none _End_Make_Lines
85180 ! 
85200 _Make_Line1: ! ***** Shipment Header - Length 46
85220       let FNMAKE_LINE$=RPAD$(F$(SHIPPER_SH),8)&_C$&CNVRT$("pic(##/##/##)",F(SHIPMENT_DATE_SH))&_C$&RPAD$(F$(CUSTOMER_SH),8)&_C$&RPAD$(F$(DEST_SH),10)&_C$&RPAD$(F$(CARRIER_SH),4) !:
            exit do 
85240 ! 
85260 _Make_Line2: ! ***** Shipper Detail - Length 74
85280       if F$(PART_SL)="C" then 
85282          let FNMAKE_LINE$=(RPT$(" ",16)&RPAD$(F$(DESC_SL)(1:30),30)&RPAD$(F$(CUSTOMER_PART_SL),26)&RPAD$(F$(UM_SL),2))(1:73)
85283       else 
85284          if CONVERTED_ORDER AND FNMATCH_ORDERL_TO_SHIPPERL(ORDERL2,MAT SHIPPERL$,MAT SHIPPERL,MAT ORDERL$,MAT ORDERL,ORDERL_REC) then !:
                  let F(CUM_SL)=ORDERL(SHIP_TO_DATE_L) !:
                  let F(BACK_SL)=ORDERL(BACK_L)
85287          let FNMAKE_LINE$=RPAD$(F$(PART_SL),15)&_C$&RPAD$(F$(REV_SL),5)&_C$&RPAD$(F$(CUSTOMER_PART_SL)(1:21),21)&_C$&CNVRT$("NZ 8",F(CUM_SL))&_C$&CNVRT$("N 9",F(SHIPPED_SL))&_C$&CNVRT$("n 8",F(CONT1_QTY_SL)+F(CONT2_QTY_SL))&FNEITHER$("",LPAD$(ITYPE$,2),GUI_MODE)
85289       end if 
85300       exit do 
85320 ! 
85340 _Make_Line3: ! ***** Order Header For Conversion - Length 56
85350       mat CUS$=(NULL$) : mat CUS=(0)
85360       if FP(SWITCH)=.1 then !:
               let FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(RPAD$(F$(CUSTOMER_H),8)&"BT",19),0,MAT CUS$,MAT CUS,0) !:
               let FNMAKE_LINE$=(RPAD$(CNVRT$("G 2",F(PLANT_H)),2)&_C$&RPAD$(F$(CUSTOMER_H),9)&_C$&RPAD$(CUS$(CUSTOMER_NAME_U),30))(1:41) !:
               exit do 
85365       if FP(SWITCH)=.2 then !:
               let FNREAD_FILE(CUSTOMER,FORM$(CUSTOMER_),DUMMY$:=RPAD$(RPAD$(F$(CUSTOMER_H),8)&"ST"&F$(DEST_H),9),0,MAT CUS$,MAT CUS,0) !:
               let FNMAKE_LINE$=(RPAD$(CNVRT$("G 2",F(PLANT_H)),2)&_C$&RPAD$(F$(DEST_H),10)&_C$&RPAD$(CUS$(CUSTOMER_NAME_U),30))(1:41) !:
               exit do 
85370       if NOT FP(SWITCH) then !:
               let FNMAKE_LINE$=RPAD$(F$(ORDER_H),9)&_C$&CNVRT$("pic(##/##/##b)",F(SHIP_DATE_H))&_C$&RPAD$(F$(CUSTOMER_H),9)&_C$&RPAD$(F$(PO_H),14)&_C$&CNVRT$("n 10.2",MAX(-99999.99,MIN(9999999.99,F(INVOICE_TOTAL_H))))&_C$&CNVRT$("n 5",F(TYPE_H)) !:
               exit do 
85390       exit do 
85395 ! 
85400 _Make_Line4: ! ***** Order Detail For Conversion
85420       if FP(SWITCH) then 
85440          if LEN(TRIM$(F$(1))) = 0 then !:
                  let FNMAKE_LINE$=RPAD$(" ",15)&_C$&RPAD$(F$(2),56) !:
               else !:
                  let FNMAKE_LINE$=RPAD$(F$(1),15)&_C$&RPAD$(F$(2),29)(1:29)&_C$&CNVRT$("nz 8",F(1))&_C$&CNVRT$("nz 8",F(2))&_C$&CNVRT$("nz 9",F(3))
85460       else 
85480          if F$(PART_L)="C" then 
85481             let FNMAKE_LINE$=RPT$(" ",16)&_C$&RPAD$(F$(DESC_L)(1:30),30)&_C$&RPAD$(F$(CUSTOMER_PART_L),26)&_C$&RPAD$(F$(UM_L)(1:1),1)
85482          else 
85483             let FNMAKE_LINE$=RPAD$(F$(PART_L),15)&_C$&RPAD$(F$(REV_L),4)&_C$&CNVRT$("PIC(##/##/##)",F(DATE_SHIPPED_L))&_C$&RPAD$(F$(CUSTPO_L),14)&_C$&CNVRT$("NZ 9",F(ORDERED_L)-F(SHIP_TO_DATE_L))&_C$&CNVRT$("nz 9",F(SHIPPED_L))&_C$&CNVRT$("nz 8",F(BACK_L))
85484          end if 
85500       end if 
85520       exit do 
85540 ! 
85560 _Make_Line5: ! ***** Vendor File - Length 40
85580       let FNMAKE_LINE$=RPAD$(F$(VENDOR_V),10)&_C$&RPAD$(F$(NAME_V),29) !:
            exit do 
85600 ! 
85620 _Make_Line6: ! ***** Inventory - Length 51
85640       let FNMAKE_LINE$=(RPAD$(F$(PART_I),16)&_C$&RPAD$(F$(REVISION_I),5)&_C$&RPAD$(F$(DESCR1_INV_I),30))(1:50) !:
            exit do 
85660 ! 
85680 _Make_Line7: ! ***** Customer
85690       if FP(SWITCH)=.1 then !:
               let FNMAKE_LINE$=RPAD$(F$(CUSTOMER_NO_U),9)&_C$&RPAD$(F$(CUSTOMER_NAME_U),29) !:
               exit do 
85700       let FNMAKE_LINE$=RPAD$(F$(SHIP_TO_CODE_U),10)&_C$&RPAD$(F$(CUSTOMER_NAME_U)(1:29),29) !:
            exit do 
85710 ! 
85720 _Make_Line8: ! ***** Blanket Order Detail
85725       let DUMMY$=NULL$ !:
            let FNREAD_NAME(INVENT,STR$(F(COMPANY_B))&RPAD$(F$(PART_B),15)&RPAD$(F$(REV_B),4),0,21,30,DUMMY$)
85730       if _FIND_UNIQUE_CASE then !:
               let DOCK$=FNDOCK_CODE_LOOKUP$(BLANKETL_,MAT BLANKETL$,MAT BLANKETL) !:
               let BLANK$(_FIND_UNIQUE_CASE)=("1127;Blanket Order: "&F$(ORDER_B)&"   Dock: "&TRIM$(DOCK$)&"    Descr: "&SREP$(DUMMY$,";",""))(1:78)&";"
85731       if _FIND_ALL_CASE then !:
               let DOCK$=FNDOCK_CODE_LOOKUP$(BLANKETL_,MAT BLANKETL$,MAT BLANKETL) !:
               let BLANK$(_FIND_ALL_CASE)=("1127;Blanket Order: "&F$(ORDER_B)&"   Dock: "&TRIM$(DOCK$)&"    Descr: "&SREP$(DUMMY$,";",""))(1:78)&";"
85732       let FNMAKE_LINE$=RPAD$(CNVRT$("G 2",F(PLANT_B)),2)&_C$&RPAD$(F$(PART_B),15)&_C$&RPAD$(F$(REV_B),4)&_C$&RPAD$(F$(CUSTOMER_PART_B)(1:24),24)&_C$&RPAD$(F$(CUSTPO_B),14)&_C$&CNVRT$("n 10",F(CUM_TOT_B))&_C$
85734       let FNAPPENDS(MAT ORDER_NUM$,BLANKETL$(ORDER_B))
85735       exit do 
85740 ! 
85750 _Make_Line10: ! ***** Inventory Quantity
85760       let FNMAKE_LINE$=(RPAD$(F$(2),16)&_C$&RPAD$(INV$(4)(1:17),15)&_C$&CNVRT$("n 3",F(1))&_C$&CNVRT$("nz 10",F(10))&_C$&CNVRT$("nz 7",F(14))&_C$&CNVRT$("nz 9",F(12))&_C$&CNVRT$("nz 9",F(11)))(1:77) !:
            exit do 
85770 ! 
85780 _Make_Line12: ! ***** General Ledger
85790       let FNMAKE_LINE$=RPAD$(FNSHOW_KEY$(SWITCH,MAT F$,MAT F)&FNEITHER$(_C$,": ",GUI_MODE)&F$(5),43) !:
            exit do 
85800 ! 
85810 _Make_Line14: ! ***** Sales Tax
85820       let FNMAKE_LINE$=RPAD$(F$(2),3)&FNEITHER$(_C$,": ",GUI_MODE)&RPAD$(F$(3),20) !:
            exit do 
85830 ! 
85840 _Make_Line16: ! ***** Shipment History Inquiry
85850       let FNMAKE_LINE$=RPAD$(F$(REV_SL),4)&_C$&CNVRT$("n 9",F(SHIPPED_SL))&_C$&CNVRT$("N 10",F(CUM_SL))&_C$&RPAD$(F$(INVOICE_SL),8)&_C$&CNVRT$("pic(##/##/##)",F(DATE_SHIPPED_SL))&_C$&CNVRT$("n 12."&STR$(PRICE_),F(UNIT_PRICE_SL)) !:
            exit do 
85860 ! 
85870 _Make_Line21: ! ***** Lot Number Zoom
85880       let FNMAKE_LINE$=RPAD$(F$(3),16)&_C$&RPAD$(F$(4),8)&_C$&CNVRT$("Pic(##/##/##)",F(2))&_C$&CNVRT$("N 7",F(1)) !:
            exit do 
85890 ! 
85900 _Make_Line22: ! ***** Dock Codes
85910       let FNMAKE_LINE$=RPAD$(F$(10),8)&CHR$(5) !:
            exit do 
85912 ! 
85914 _Make_Line30: ! ***** Shipperh-Dest
85916       let FNMAKE_LINE$=RPAD$(CNVRT$("G 2",F(PLANT_SH)),2)&_C$&RPAD$(F$(DEST_SH),10)&_C$&RPAD$(F$(CUSTOMER_SH),9)&_C$&RPAD$(F$(S_ADDRESS1_SH),31)&_C$&RPAD$(F$(SHIPPER_SH),9)&_C$&CNVRT$("pic(##/##/##)",F(SHIPMENT_DATE_SH)) !:
            exit do 
85918 ! 
85919 _Make_Carrier: ! *****
85925       let FNMAKE_LINE$=(RPAD$(CARRIER$(1),7)&_C$&RPAD$(CARRIER$(3),24)&_C$&RPAD$(CARRIER$(2),6)&_C$&RPAD$(CARRIER$(4),4)&_C$&CARRIER$(5))(1:49)
85927       exit do 
85928 ! 
85930 _Make_Eqtm: ! *****
85932       if CARRIER_TYPE=CARRIER_SH OR FP(SWITCH)==.1 then !:
               let FNMAKE_LINE$=RPAD$(F$(1),8)&_C$&RPAD$(F$(3),24)&_C$&RPAD$(F$(2),6)&_C$&RPAD$(F$(4),4)&_C$&F$(5) !:
            else !:
               let FNMAKE_LINE$=RPAD$(F$(1),8)&_C$&RPAD$(F$(3),23)
85934       exit do 
85936 ! 
85937 _Make_Commun: ! 
85938       let FNMAKE_LINE$=RPAD$(COMM$(1),7)&_C$&RPAD$(COMM$(2),31) !:
            exit do  !:
            ! 
85940 ! 
85945 _Make_Edidoc: ! Make Line For Edi Document Pas
85947       let DUMMY=IP(F(4))              !Time used by doc pas line below !:
            if DUMMY>9999 then !      If seconds included !:
               let DUMMY=IP(DUMMY/100)
85949       if FP(SWITCH) then ! Format lin segments
85951          if COMMA$=NULL$ AND LEN(F$(3))>2 then ! St or unh !:
                  let DUMMY2=3+SGN(POS("JF",F$(1))) !:
                  let COMMA$=F$(3)(DUMMY2:DUMMY2)
85953          if F$(3)(1:3)="LIN" AND DUMMY2:=FNDISSECT(F$(3),MAT DUMMY$,COMMA$,"","") then 
85955             let LIN_NUMBER+=1 !:
                  mat DUMMY$(DUMMY2) !:
                  let N1_ST_FOUND=FALSE !:
                  let CONTRACT_NUMBER$=NULL$ !:
                  let WORK$=LPAD$(STR$(LIN_NUMBER),3)&"  " !:
                  if (DUMMY:=SRCH(DUMMY$,"BP"))<1 OR DUMMY$(DUMMY+1)<>SHIPPERL$(6) then !:
                     exit do                !Wrong part number - sanity test !:
                  else if (DUMMY:=SRCH(DUMMY$,"CR"))>0 then let CONTRACT_NUMBER$=DUMMY$(DUMMY+1)&" "
85963 !           Get The Shipment Address Associated With The Lin
85965          do  !:
                  read #EDIDOC_CHANNEL,using FORM$(EDI_): MAT EDIDOC_DATA2$,MAT EDIDOC_DATA2 !:
                  if EDIDOC_DATA2$(3)(1:3)="LIN" then !:
                     restore #EDIDOC_CHANNEL,PRIOR: !:
                     exit do 
85967             if SGN(POS("JF",F$(1))) then ! Edifact
85969                if EDIDOC_DATA2$(3)(1:3)="UNT" then !:
                        exit do  !:
                     else if EDIDOC_DATA2$(3)(1:3)="NAD" AND DUMMY2:=FNDISSECT(EDIDOC_DATA2$(3),MAT DUMMY2$,COMMA$,"","") then !:
                        let X
85971          else ! Ansi
85972 !   Print Edidoc_Data2$(3)
85973             if EDIDOC_DATA2$(3)(1:2)="SE" then !:
                     exit do  !:
                  else if EDIDOC_DATA2$(3)(1:2)="N1" AND DUMMY2:=FNDISSECT(EDIDOC_DATA2$(3),MAT DUMMY2$,COMMA$,"","") AND DUMMY2$(2)="ST" then !:
                     let N1_ST_FOUND=TRUE !:
                     let WORK$(INF:0)=DUMMY2$(DUMMY2)  !Append dealer number !:
                  else if N1_ST_FOUND AND EDIDOC_DATA2$(3)(1:2)="N4" AND DUMMY2:=FNDISSECT(EDIDOC_DATA2$(3),MAT DUMMY2$,COMMA$,"","") then !:
                     let FNMAKE_LINE$=(WORK$&"  "&CONTRACT_NUMBER$&EDIDOC_DATA2$(3))(1:40)
85975    end if 
85977 loop 
85979 end if                                !End if lin encountered
85981 exit do 
85983 else ! Format doc number line !:
      let FNMAKE_LINE$=RPAD$(F$(1),8)&CHR$(5)&RPAD$(F$(2),16)&CHR$(5)&CNVRT$("Pic(##/##/##B)",DATE(F(3)))&CHR$(5)&CNVRT$("Pic(##:##)",DUMMY) !:
      exit do  !:
      ! 
86002 _Exit_Make_Lines: ! ***** Line Formed
86003 loop 
86004 _End_Make_Lines: fnend 
86006 ! 
87000 ! 
87100 Pack: ! ***** Pack Data
87120 def FNPACK(SWITCH,MAT F$,MAT F)
87140    let FNPACK=FALSE                   !Assume error !:
         do  !:
            on IP(SWITCH) goto _Pack1,_Pack2,_Pack3,_Pack4,_Pack5,_Pack6,_Pack7,_Pack8,_End_Pack,_Pack10,_End_Pack,_End_Pack,_End_Pack,_End_Pack,_End_Pack,_End_Pack,_Pack17,_Pack18 none _End_Pack
87160 ! 
87180 _Pack1: ! ***** Pack Shipper Header
87200       for _LOOP = SHIPPER_DATE_SH to ARRIVAL_DATE_SH !:
               let F(_LOOP)=DAYS(F(_LOOP)) !:
            next _LOOP !:
            let F(ASN_DATE_SH)=DAYS(F(ASN_DATE_SH)) !:
            let F(TAX_JUR_SH) = (TAXABLE$=="Y") !:
            if NOT F(WSID_SH) then !:
               let F(WSID_SH) = VAL(WSID$)
87220       if FNREAD_FILE(-TERMS,FORM$(TERMS_),RPAD$(F$(TERMS_H),2),0,MAT TERMS$,MAT TERMS,0) then !:
               mat F(PERCENT_H:DAYS_H)=TERMS(1:2)
87240       let FNPACK=SWITCH !:
            exit do 
87260 ! 
87280 _Pack2: ! ***** Shipper Detail
87300       if F$(PART_SL)="C" then !:
               let F$(DESC_SL)=RPAD$(F$(DESC_SL),58) !:
               let F$(CUSTOMER_PART_SL)=F$(DESC_SL)(31:56) !:
               let F$(UM_SL)=F$(DESC_SL)(57:58) !:
               let F$(DESC_SL)=F$(DESC_SL)(1:30) !:
               mat F(GROUP_SL:COMMISSION_SL)=(0) !:
               let F(CREDIT_SL)=0
87320       if LEN(F$(PART_SL))<2 AND F(TIME_ADDED_SL)>0 then !:
               let F(TIME_ADDED_SL)=(TIME_ADDED_X-=1)
87340       let F(ITYPE_SL)=POS("QV",ITYPE$) !:
            let F(DATE_SHIPPED_SL)=DAYS(F(DATE_SHIPPED_SL)) !:
            let F(GB_DATE_SL)=DAYS(F(GB_DATE_SL)) !:
            if F(TAXABLE_SL) then !:
               mat F(PERCENT1_SL:PERCENT3_SL)=SHIPPERH(PERCENT1_SH:PERCENT3_SH)
87360       if F$(UM_SL)="RC" then !:
               let F(TARE_SL)=INV(WEIGHT_NET_I)*F(SHIPPED_SL)
87380       let FNPACK=SWITCH !:
            exit do 
87400 ! 
87420 _Pack3: ! ***** Order Header
87440       let F(ORDER_DATE_H)=DAYS(F(ORDER_DATE_H)) !:
            let F(DUE_DATE_H)=DAYS(F(DUE_DATE_H)) !:
            let F(INV_DATE_H)=DAYS(F(INV_DATE_H)) !:
            let F(SHIP_DATE_H)=DAYS(F(SHIP_DATE_H)) !:
            let F(PO_REQ_DATE_H)=DAYS(F(PO_REQ_DATE_H)) !:
            let FNPACK=SWITCH !:
            exit do 
87460 ! 
87480 _Pack4: ! ***** Pack The Order Detail File
87490       if F$(PART_L)="C" then !:
               let F$(DESC_L)=RPAD$(F$(DESC_L),58) !:
               let F$(CUSTOMER_PART_L)=F$(DESC_L)(31:56) !:
               let F$(UM_L)=F$(DESC_L)(57:58) !:
               let F$(DESC_L)=F$(DESC_L)(1:30)
87500       if LEN(F$(PART_L))<2 AND F(TIME_ADDED_L)>0 then !:
               let F(TIME_ADDED_L)=(TIME_ADDED_X-=1)
87510       let F(DATE_SHIPPED_L)=DAYS(F(DATE_SHIPPED_L)) !:
            mat F(PERCENT1_L:PERCENT3_L)=ORH(PERCENT1_H:PERCENT3_H)
87520       if F$(UM_L)="RC" then !:
               let F(TARE_L)=INV(WEIGHT_NET_I)*F(SHIPPED_L)
87530       let FNPACK=SWITCH !:
            exit do 
87540 ! 
87550 _Pack5: ! ***** Vendor File
87560       for _LOOP = LAST_PAY_V to LAST_INV_V !:
               let F(_LOOP)=DAYS(F(_LOOP)) !:
            next _LOOP !:
            let FNPACK=SWITCH !:
            exit do 
87570 ! 
87580 _Pack6: ! ***** Inventory
87590       let F(DATE_CREATED_I)=DAYS(F(DATE_CREATED_I)) !:
            let F(DATE_CHANGED_I)=DAYS(F(DATE_CHANGED_I)) !:
            let FNPACK=SWITCH !:
            exit do 
87600 ! 
87610 _Pack7: ! ***** Customer
87620       for _LOOP = INVOICE_DATE_U to LAST_TRANSMIT_U !:
               let F(_LOOP)=DAYS(F(_LOOP)) !:
            next _LOOP !:
            let F$(TRANSIT_U)=SREP$(TRIM$(F$(TRANSIT_U)),1,":","") !:
            let FNPACK=SWITCH !:
            exit do 
87630 ! 
87640 _Pack8: ! ***** Blanket Orders
87650       for _LOOP = LAST_REL_DATE_B to DATE_LAST_SHIP_B !:
               let F(_LOOP) = DAYS(F(_LOOP)) !:
            next _LOOP !:
            let F(30)=POS("ABCDEFGHIJKLMNOPQRSTUVWXYZ",SCODE$) !:
            let FNPACK=SWITCH !:
            exit do 
87660 ! 
87670 _Pack10: ! ***** Pack Inventory Quantity
87680       for _LOOP = 2 to 5 !:
               let F(_LOOP)=DAYS(F(_LOOP)) !:
            next _LOOP !:
            let FNPACK=SWITCH !:
            exit do 
87690 ! 
87700 _Pack17: ! ***** Pack Serial Number File
87710       let FNPACK=SWITCH !:
            exit do 
87720 ! 
87730 _Pack18: ! ***** Pack Ship Lot Number File
87740       let FNPACK=SWITCH !:
            exit do 
87750 ! 
87760 _Exit_Pack: ! ***** Exit
87770    loop 
87780 _End_Pack: fnend 
89000 ! 
89100 Read_Description: ! ***** Pull Reference Fields
89120 def FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F)
89140    let FNREAD_DESCRIPTION=FALSE       !Assume error !:
         do  !:
            on IP(SWITCH)==SHIPLOT_ goto _Description18 !:
            on IP(SWITCH) goto _Description1,_End_Read_Description,_End_Read_Description,_End_Read_Description,_Description5,_End_Read_Description,_Description7 none _End_Read_Description
89160 ! 
89180 _Description1: ! ***** Shipper Header
89200       mat SHIP_DESC$=(NULL$)
89220       if F(PLANT_SH) then !:
               let FNREAD_NAME(PLANT,NULL$,F(PLANT_SH),1,20,SHIP_DESC$(2))
89240       if F(SALES_TYPE_SH) then 
89260          let F$(TERMS_DESC_SH)="RETURN FOR CREDIT" !:
               if F(TYPE_SH)=9 then !:
                  let F$(TERMS_DESC_SH)="OUTSIDE PROCESSING"
89280       else 
89300          let F$(TERMS_DESC_SH)=NULL$ !:
               let FNREAD_NAME(TERMS,RPAD$(F$(TERMS_SH),2),0,3,20,F$(TERMS_DESC_SH))
89320       end if 
89540       if (DUMMY:= SRCH(SALESMAN$,CNVRT$("zd 3",F(SALESMAN_H)))) > 0 then !:
               let SHIP_DESC$(1) = SALES_CODE$(DUMMY)(6:25)
89550       let FNREAD_NAME(COMMUN,F$(COMMUN_SH),0,112,2,FORMAT_CODE$)
89560       exit do 
89580 ! 
89600 _Description5: ! ***** Vendor Description Fields
89620       mat DESC_V$(5)=(NULL$)
89660       let FNREAD_NAME(TERMS,F$(TERMS_V),0,3,20,DESC_V$(2))
89680       if (DUMMY := SRCH(BUYERS$,F$(BUYER_V))) > 0 then !:
               let DESC_V$(3) = BUYER_CODE$(DUMMY)(6:25)
89700       let FNREAD_NAME(COMPANY,NULL$,F(COMPANY_V),1,20,DESC_V$(4))
89720       if FILE(CURRENCY) > 0 then !:
               let FNREAD_NAME(CURRENCY,NULL$,F(CURRENCY_V),1,15,DESC_V$(5))
89740       exit do 
89760 ! 
89780 _Description7: ! ***** Customer
89790       mat DESC_U$(3)=(NULL$)
89810       let FNREAD_NAME(TERMS,F$(TERMS_CODE_U),0,3,20,DESC_U$(1))
89820       if (DUMMY:= SRCH(SALESMAN$,CNVRT$("zd 3",F(SALESMAN_NO_U)))) > 0 then !:
               let DESC_U$(2) = SALES_CODE$(DUMMY)(6:26)
89830       exit do 
89840 ! 
89850 _Description18: ! ***** Shiplot
89860       for __=1 to UDIM(F$) !:
               if F$(__)>NULL$ then !:
                  let F$(__)=FNEXPAND$(F$(__),_LOTLEN)
89870       next __
89880       exit do 
89890 ! 
89900 _Exit_Read_Description: ! ***** Exit
89910    loop 
89920 _End_Read_Description: fnend 
90000 ! 
90100 Read_Subscript: ! ***** Read Subscripts
90120 def FNREAD_SUBSCRIPT(FILENO,FILENAME$*64)
90140    let FNREAD_SUBSCRIPT=FALSE         !Assume error
90160    open #FILENO: "Name= "&FILENAME$&", Shr",internal,input,relative ioerr _End_Read_Subscript
90180    read #FILENO,using Subscript_: SHIPPERH_,SHIPPERL_,ORDERH_,ORDERL_,VENDOR_,INVENT_,CUSTOMER_,BLANKETL_,TERMS_,INVTQTY_,COMMENT_,GLMASTER_,PRODCLAS_,TAXMAST_,COMPANY_,IHISTL_,LABEL_,SHIPLOT_,AUDIT_,SALESMAN_,LOTNO_,DOCK_,SCHEDC_,LOCATE_,SHIPPER_COMMENT_,SHIPPER_TOTAL_,PRICES_,SHIPPERHA_,SHIPPERLA_,DEST_,SHIPLFRG_,EDIFACT_DATA_,BOML_,LOTLOGH_,BCODE_,CARRIER_,COMMUN_,EQTM_,_PRICE_,CURRENCY_,EDI_,KANBAN_,EDIDOC_
90200    reread #FILENO,using Subscript_: ORDER_SH,SHIPPER_SH,INVOICE_SH,CUSTOMER_SH,B_NAME_SH,B_ADDRESS1_SH,B_ADDRESS2_SH,B_CITY_SH,B_STATE_SH,B_ZIP_SH,S_NAME_SH,S_ADDRESS1_SH,S_ADDRESS2_SH,S_CITY_SH,S_STATE_SH,S_ZIP_SH,BOL_SH,MASTER_BOL_SH,PC_SH,ASN_CODE_SH,LOC_ID_SH,LOC_QUAL_SH,EQUIP_SH,MODE_SH,TRAILER_SH,CARRIER_SH,DUMMY,HAZARDOUS_SH,TERMS_DESC_SH,SEAL_SH,DEST_SH,TERMS_SH,COMMUN_SH,ALT_ORD_SH,SCODE_SH,PRO_SH,PICKUP_SH,EXCESS_REASON_SH,RESPON_SH,AUTH_SH,CONVEY_SH,DOCK_SH,ULTIMATE_CUST_SH,SCAN_FLAG_SH  !Shipper strings
90220    reread #FILENO,using Subscript_: PERCENT_SH,DAYS_SH,SHIPPER_DATE_SH,DUE_DATE_SH,INV_DATE_SH,SHIPMENT_DATE_SH,ARRIVAL_DATE_SH,SHIP_TIME_SH,ARRIVAL_TIME_SH,ASN_DATE_SH,ASN_TIME_SH,TAX_JUR_SH,TAX_STATUS_SH,SALESMAN_SH,TYPE_SH,WSID_SH,POSTED_SH,PERCENT1_SH,PERCENT2_SH,PERCENT3_SH,COMPANY_SH,PLANT_SH,SALES_TYPE_SH,PRINTED_SH,FRT_TAXABLE_SH,INVOICE_XMIT_SH,SHIPPERS_SH,REL_UPD_SH,SOURCE_SH,CURRENCY_SH,RATE_SH,GROSS_SH,INVOICE_TOTAL_SH,COST_SH,FREIGHT_SH,RETURNABLE_SH,TAX_SH,TAXABLE_SALES_SH,COMM_SH,WEIGHT_SH,NET_WEIGHT_SH,CARTONS_SH,PALLETS_SH,DEBIT_SH,POINTER_SH  !Shipper numericsnput
90240    reread #FILENO,using Subscript_: ORDER_SL,SHIPPER_SL,INVOICE_SL,PART_SL,REV_SL,CUSTOMER_PART_SL,DESC_SL,UM_SL,CLAUSE_SL,DUMMY,CUSTPO_SL,CUSTOMER_SL,DEST_SL,COMMOD_SL,CONTAINER1_SL,CONTAINER2_SL,POLINE_SL,MODEL_YEAR_SL,HEAT_SL,LOT_SL,RAN_NO_SL,RELEASE_SL,DUMMY,PART_EXTEND_SL,EDI_SOURCE_SL,EDI_DOC_SL  !Shipper line strings
90260    reread #FILENO,using Subscript_: GROUP_SL,CLASS_SL,SHIPPED_SL,SCANNED_SL,CUM_SL,BACK_SL,ORDERED_SL,CONT1_QTY_SL,CONT2_QTY_SL,STD_PACK_SL,ITYPE_SL,CONV2_SL,TARE_SL,UNIT_WT_SL,UNIT_COST_SL,UNIT_PRICE_SL,EXTENSION_SL,PERCENT1_SL,PERCENT2_SL,PERCENT3_SL,COMMISSION_SL,SOURCE_SL,PLANT_SL,DATE_SHIPPED_SL,QTY862_SL,TYPE_SL,CREDIT_SL,COMM_AMT_SL,SALESMAN_SL,POST_SL,ASN_SL,REL_SL,COMPANY_SL,DATE_ADDED_SL,TIME_ADDED_SL,POINTER_SL,AR_WSID_SL,AR_AMT_SL,TAXABLE_SL,GB_AMT_SL,GB_DATE_SL,GB_TIME_SL,EDI_LIN_NUM_SL  !Shipper line numerics
90280    reread #FILENO,using Subscript_: ORDER_H,INVOICE_H,CUSTOMER_H,B_NAME_H,B_ADDRESS1_H,B_ADDRESS2_H,B_CITY_H,B_STATE_H,B_ZIP_H,S_NAME_H,S_ADDRESS1_H,S_ADDRESS2_H,S_CITY_H,S_STATE_H,S_ZIP_H,PO_H,BOL_H,PC_H,CONTAINER_H,LOC_ID_H,LOC_QUAL_H,EQUIP_H,MODE_H,REF_H,TRAILER_H,CARRIER_H,CARRIER2_H,DUMMY,TERMS_DESC_H,SEAL_H,DEST_H,TERMS_H,COMMUN_H,ALT_ORD_H,DOCK_H,HOME_H,EDI_DOC_H  !Order strings
90300    reread #FILENO,using Subscript_: PERCENT_H,DAYS_H,ORDER_DATE_H,DUE_DATE_H,INV_DATE_H,SHIP_DATE_H,PO_REQ_DATE_H,UNUSED_H,SHIP_TIME_H,ARRIVE_TIME_H,ASN_TIME_H,TAX_JUR_H,TAX_STATUS_H,SALESMAN_H,TYPE_H,WSID_H,POSTED_H,PERCENT1_H,PERCENT2_H,PERCENT3_H,COMPANY_H,PLANT_H,ASN_XMIT_H,PRINTED_H,FRT_TAXABLE_H,INVOICE_XMIT_H,SHIPPERS_H,JOB_H,SOURCE_H,CURRENCY_H,RATE_H,GROSS_H,INVOICE_TOTAL_H,COST_H,FREIGHT_H,RETURNABLE_H,TAX_H,TAXABLE_SALES_H,COMM_H,WEIGHT_H,NET_WEIGHT_H,CARTONS_H,PALLETS_H,DEBIT_H,POINTER_H  !Order numerics
90320    reread #FILENO,using Subscript_: ORDER_L,PART_L,REV_L,CUSTOMER_PART_L,DESC_L,UM_L,PO_L,VENDOR_L,CUSTPO_L,CUSTOMER_L,DEST_L,COMMOD_L,CONTAINER_L,BIN_L  !Order line strings
90340    reread #FILENO,using Subscript_: GROUP_L,CLASS_L,ORDERED_L,SHIP_TO_DATE_L,SHIPPED_L,BACK_L,CONT1_QTY_L,CONT2_QTY_L,DATE_RECEIVED_L,STD_PACK_L,TARE_L,UNIT_WT_L,UNIT_COST_L,UNIT_PRICE_L,EXTENSION_L,PERCENT1_L,PERCENT2_L,PERCENT3_L,COMMISSION_L,SOURCE_L,PLANT_L,DATE_SHIPPED_L,TYPE_L,CREDIT_L,COMM_AMT_L,SALESMAN_L,POST_L,ASN_L,RELEASE_L,COMPANY_L,DATE_ADDED_L,TIME_ADDED_L,POINTER_L,EDI_LIN_NUM_L  !Order line numerics
90360    reread #FILENO,using Subscript_: ORDER_B,PART_B,REV_B,CUSTOMER_PART_B,CUSTOMER_B,DEST_B,CLAUSE_B,CL_CONT_B,CONT_PRICE_B,CUSTPO_B,CUM_TYPE_B,CONTAINER_B,LAST_REL_B,HWM_QTY_RELEASE_B,HWM_RAW_RELEASE_B,HWM_FAB_RELEASE_B,PROJECT_B,PART_EXTEND_B,SDP_862_B,SURCHARGE_TYPE_B,SURCHARGE_PART_B  !Blanket strings
90380    reread #FILENO,using Subscript_: MODEL_YEAR_B,GROUP_B,CLASS_B,ORDERED_B,RAW_QTY_B,FAB_QTY_B,CUM_REV_B,CUM_TOT_B,CUM_CUST_B,UNIT_COST_B,UNIT_PRICE_B,STD_PACK_B,COMMISSION_B,SALESMAN_B,COMPANY_B,PLANT_B,HWM_QTY_B,HWM_RAW_B,HWM_FAB_B,LAST_REL_DATE_B,HWM_QTY_DATE_B,HWM_RAW_DATE_B,HWM_FAB_DATE_B,DATE_LAST_SHIP_B,DATE_ADDED_B,TIME_ADDED_B,SHIPPED_TODAY_B,INTERNAL_B,COMMISSION_B,SCODE_B,OVERSHIPPED_B,REL_LOAD_B,APNAT_B,CUM_PREVREL_B,TIME_862_B,SURCHARGE_AMT_B  !Blanket numerics
90400    reread #FILENO,using Subscript_: CUSTOMER_NO_U,CUSTOMER_TYPE_U,SHIP_TO_CODE_U,CUSTOMER_NAME_U,ADDRESS_1_U,ADDRESS_2_U,CITY_U,STATE_U,ZIP_CODE_U,AREA_CODE_U,EXCHANGE_U,SUFFIX_U,COMM_CODE_U,TERRITORY_U,CONTACT_NAME_U,TERMS_CODE_U,TAX_STATUS_U,STATEMENTS_U,LATE_CHARGE_U,CARRIER_U,TRANSIT_U,SHIP_PAY_U,PRN_INVOICE_U  !Customer string
90420    reread #FILENO,using Subscript_: CLASS_CODE_U,PRICE_CODE_U,SALESMAN_NO_U,COMPANY_U,TAX_JURIS_U,CURRENCY_CODE_U,CREDIT_LIMIT_U,DISCOUNT_U,INVOICE_DATE_U,ORDER_DATE_U,PAYMENT_DATE_U,LAST_TRANSMIT_U,CURRENT_BALANCE_U,CURRENT_ORDERS_U,SALES_MTD_U,SALES_YTD_U,PROFIT_YTD_U,ORDERS_MTD_U,ORDERS_YTD_U  !Customer numeric
90440    reread #FILENO,using Subscript_: COMPANY_I,PART_I,REVISION_I,DESCR1_INV_I,DESCR2_INV_I,DESCR_PO_I,UOM1_I,UOM2_I,VENDOR_I,DRAWING_NO_I,PART_TYPE_I,LOT_REQ_I,COMMISSION_CODE_I,TAXABLE_I,TYPE_I,COMMOD_I,CONTAINER1_I,CONTAINER2_I  !Invt string
90460    reread #FILENO,using Subscript_: SIZE_I,GROUP_NO_I,PROD_CLASS_I,PLANT_I,LEAD_TIME_I,CONVERSION_I,WEIGHT_NET_I,COST_STD_I,COST_LAST_I,FSTD_MATERIAL_I,FSTD_LABOR_I,FSTD_BURDEN_V_I,FSTD_BURDEN_F_I,FSTD_OUTSIDE_I,FSTD_SETUP_I,FSTD_FUTURE_I,STD_MATERIAL_I,STD_LABOR_I,STD_BURDEN_V_I,STD_BURDEN_F_I,STD_OUTSIDE_I,STD_SETUP_I,STD_FUTURE_I,ACT_MATERIAL_I,ACT_LABOR_I,ACT_BURDEN_V_I,ACT_BURDEN_F_I,ACT_OUTSIDE_I,ACT_SETUP_I,ACT_FUTURE_I,COMMISSION_I,PRICE1_I,PRICE2_I,PRICE3_I,PRICE4_I,PRICE5_I,PRICE6_I,BREAK1_I,BREAK2_I,BREAK3_I,BREAK4_I,BREAK5_I,BREAK6_I,STD_PACK_I,ECONOMIC_I,DATE_CREATED_I,DATE_CHANGED_I,SCRAP_FACTOR_I,LOW_LEVEL_I,TOLERANCE_I,WIDTH_I  !Invt numerics
90480    reread #FILENO,using Subscript_: VENDOR_V,NAME_V,R_ADDRESS1_V,R_ADDRESS2_V,R_CITY_V,R_STATE_V,R_ZIP_V,PHONE_V,P_ADDRESS1_V,P_ADDRESS2_V,P_CITY_V,P_STATE_V,P_ZIP_V,FAX_V,CONTACT_V,BUYER_V,TERMS_V,CARRIER_V,COMM_V,FOB_V,MINORITY_V,FRT_TERMS_V,TYPE_V  !String
90500    reread #FILENO,using Subscript_: COMPANY_V,CURRENCY_V,GL_V,MIN_ORDER_V,MIN_WT_V,LAST_PAY_V,LAST_INV_V,PURCH_YTD_V,PURCH_PRIOR_V,PURCH_CUM_V,DISC_YTD_V,DISC_PRIOR_V,LOST_YTD_V,LOST_PRIOR_V  !Numerics
90502    reread #FILENO,using Subscript_: ORDER_S,PART_S,REV_S,CUST_S,DEST_S,MYR_S,S862_S,UNUSED_S,LFEED_S,DRAN_S,ROUTE_S,KANBAN_S,PS11Z_S,PS12Z_S,PS13Z_S,PS14Z_S,PS15Z_S,PS16Z_S,PS17Z_S,DOCK_S,EDI_SOURCE_S,EDI_DOC_S,CUST_PO_S,PO_LINE_S  !Schedc string !:
         reread #FILENO,using Subscript_: SHDATE_S,SHTIME_S,SHQTY_S,SQPACK_S,QSHIP_S,SPLANT_S,STKANBAN_S,SEKANBAN_S,DOC_DATE_S,EDI_LIN_NUM_S  !Schedc numeric
90520    close #FILENO: !:
         let FNREAD_SUBSCRIPT=TRUE          !Success
90540 _End_Read_Subscript: fnend 
92000 ! 
92100 Save: ! ***** Save Default Values
92120 def FNSAVE(SWITCH,MAT F$,MAT F)
92140    let FNSAVE=0                       !Nothing saved !:
         do  !:
            on IP(SWITCH) goto _Save1,_Save2,_End_Save,_End_Save,_Save5,_Save6,_Save7,_Save8 none _End_Save
92160 ! 
92180 _Save1: ! ***** Save Shipper Header Defaults
92200       let FNSAVE=SWITCH !:
            exit do 
92220 ! 
92240 _Save2: ! ***** Shipper Detail
92260       mat G$(UDIM(F$))=F$ !:
            mat G(UDIM(F))=F
92280       exit do 
92300 ! 
92320 _Save5: ! ***** Save Vendor
92340       mat VENDOR_PAS$(1)=(NULL$) !:
            let FNSAVE=SWITCH !:
            exit do 
92360 ! 
92380 _Save6: ! ***** Inventory
92400       let FNSAVE=SWITCH
92420       exit do 
92440 ! 
92460 _Save7: ! ***** Customer
92480       let FNSAVE=SWITCH
92500       exit do 
92520 ! 
92540 _Save8: ! ***** Blanket Order Detail
92560       let FNSAVE=SWITCH !:
            exit do 
92580 ! 
92600 _Exit_Save: ! ***** Save Finished
92620    loop 
92640 _End_Save: fnend 
93000 ! 
93100 Show_Keys: ! ***** Make Display Key
93120 def FNSHOW_KEY$*64(SWITCH,MAT F$,MAT F)
93140    let FNSHOW_KEY$=NULL$              !Default !:
         do  !:
            on IP(SWITCH) == 12 goto _Show_Key12 !:
            on IP(SWITCH) goto _Show_Key1,_Show_Key2,_End_Show_Keys,_End_Show_Keys,_Show_Key5,_Show_Key6,_Show_Key7 none _End_Show_Keys
93160 ! 
93180 _Show_Key1: ! ***** Shipper Header
93200       let FNSHOW_KEY$=RTRM$(F$(SHIPPER_SH)) !:
            exit do 
93220 ! 
93240 _Show_Key2: ! ***** Shipper Detail
93260       let FNSHOW_KEY$=RTRM$(F$(PART_SL))
93280       exit do 
93300 ! 
93320 _Show_Key5: ! ***** Vendor File
93340       let FNSHOW_KEY$=RTRM$(F$(VENDOR_V)) !:
            exit do 
93360 ! 
93380 _Show_Key6: ! ***** Inventory
93400       let FNSHOW_KEY$=RTRM$(F$(COMPANY_I))&"-"&RTRM$(F$(PART_I))&"-"&RTRM$(F$(REVISION_I))
93420       exit do 
93440 ! 
93460 _Show_Key7: ! ***** Customer
93480       let FNSHOW_KEY$=RTRM$(F$(CUSTOMER_NO_U))&"-"&RTRM$(F$(CUSTOMER_TYPE_U))&"-"&RTRM$(F$(SHIP_TO_CODE_U))
93500       exit do 
93520 ! 
93540 _Show_Key12: ! ***** General Ledger
93560       let FNSHOW_KEY$=RPAD$(F$(2),3) & "-" & RPAD$(F$(3),5) & "-" & RPAD$(F$(4),1) !:
            exit do 
93580 ! 
93600 _Exit_Show_Keys: ! ***** Exit
93620    loop 
93640 _End_Show_Keys: fnend 
94000 ! 
94100 Split_Key: ! ***** Split Out Key Data
94120 def FNSPLIT_KEY(SWITCH,KEY$*64,MAT F$,MAT F)
94140    let FNSPLIT_KEY=0                  !Default !:
         do  !:
            on IP(SWITCH) goto _Split_Key1,_Split_Key2,_End_Split_Key,_End_Split_Key,_Split_Key5,_Split_Key6,_Split_Key7,_Split_Key8 none _End_Split_Key
94160 ! 
94180 _Split_Key1: ! ***** Split Shipper Header Key
94200       if KEY$>NULL$ then !:
               let F$(SHIPPER_SH)=KEY$(1:8)
94220       let FNSPLIT_KEY=SWITCH !:
            exit do 
94240 ! 
94260 _Split_Key2: ! ***** Shipper Detail
94280       exit do 
94300 ! 
94320 _Split_Key5: ! ***** Vendor File
94340       if KEY$>NULL$ then !:
               let F$(VENDOR_V)=KEY$(1:8)
94360       let FNSPLIT_KEY=SWITCH !:
            exit do 
94380 ! 
94400 _Split_Key6: ! ***** Inventory
94420       let FNSPLIT_KEY=SWITCH
94440       exit do 
94460 ! 
94480 _Split_Key7: ! ***** Customer
94500       if SWITCH><IP(SWITCH) then !:
               let F$(CUSTOMER_TYPE_U)=KEY$(1:2) !:
               exit do 
94520       let F$(CUSTOMER_NO_U)=KEY$(1:8) !:
            let F$(CUSTOMER_TYPE_U)=KEY$(9:10) !:
            let F$(SHIP_TO_CODE_U)=KEY$(11:19)
94540       exit do 
94560 ! 
94580 _Split_Key8: ! ***** Blanket Order Detail
94600       exit do 
94620 ! 
94640 _Exit_Split_Key: ! ***** Key Split
94660    loop 
94680 _End_Split_Key: fnend 
97000 ! 
97100 Unpack: ! ***** Unpack Record
97110 def FNUNPACK(SWITCH,MAT F$,MAT F)
97120    let FNUNPACK=FALSE                 !Assume error !:
         do  !:
            on IP(SWITCH+1)==PICKUP_SH goto _Unpack_Carrier !:
            on IP(SWITCH+1)==CARRIER_SH goto _Unpack_Carrier !:
            on IP(SWITCH)==COMMUN_ goto _Unpack_Commun !:
            on IP(SWITCH)==EDIDOC_ goto _Unpack_Edidoc
97125       on IP(SWITCH+1) goto _Unpack0,_Unpack1,_Unpack2,_Unpack3,_Unpack4,_Unpack5,_Unpack6,_Unpack7,_Unpack8,_Unpack9,_Unpack10,_Unpack11,_Unpack12,_End_Unpack,_Unpack14,_Unpack15,_Unpack16,_Unpack17,_Unpack18,_End_Unpack,_End_Unpack,_Unpack21,_Unpack22,_Unpack23,_End_Unpack,_End_Unpack,_End_Unpack,_End_Unpack,_End_Unpack,_End_Unpack,_Unpack30,_End_Unpack,_End_Unpack,_End_Unpack,_Unpack34 none _End_Unpack
97130 ! 
97140 _Unpack0: ! ***** Unpack Windows
97150       let FNMAT_SREP(MAT F$,10,"QUANTITY_",STR$(QUANTITY_)) !:
            let FNMAT_SREP(MAT F$,10,"PRICE_",STR$(PRICE_)) !:
            let FNMAT_SREP(MAT F$,10,"WEIGHT_",STR$(WEIGHT_)) !:
            let FNUNPACK = SWITCH !:
            exit do 
97160 ! 
97170 _Unpack1: ! ***** Unpack Shipper Header
97180       for _LOOP = SHIPPER_DATE_SH to ARRIVAL_DATE_SH !:
               let F(_LOOP)=DATE(F(_LOOP)) !:
            next _LOOP !:
            let F(ASN_DATE_SH)=DATE(F(ASN_DATE_SH)) !:
            let DUMMY = MAX(1,MIN(2,F(TAX_STATUS_SH)+1)) !:
            let TAXABLE$="NY"(DUMMY:DUMMY) !:
            let OLD_INVOICE_TOTAL=F(INVOICE_TOTAL_SH)
97210       mat LOCQUAL$(1)=(NULL$) !:
            mat LOC_QUAL$(1)=(NULL$)
97230       if POS("CA CH FD FX",DUMMY$) then !:
               mat LOCQUAL$(2) = LOC2$ !:
               mat LOC_QUAL$(2) !:
               let LOC_QUAL$(1)=LOCQUAL$(1)(1:2) !:
               let LOC_QUAL$(2)=LOCQUAL$(2)(1:2)
97252       if (FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(F$(CUSTOMER_SH),8)&"ST"&RPAD$(F$(DEST_SH),9),0,MAT DES$,MAT DES,CUSTOMER_)) OR (FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(F$(CUSTOMER_SH),8)&RPAD$("BT",11),0,MAT DES$,MAT DES,CUSTOMER_)) then !                            Ship to or bill to !:
               let F(TAX_JUR_SH)=DES(TAX_JURIS_U) !:
               let F(TAX_STATUS_SH)=MAX(0,MIN(1,POS("NY",DES$(TAX_STATUS_U))-1)) !:
               let DUMMY=F(TAX_STATUS_SH)+1 !:
               let TAXABLE$="NY"(DUMMY:DUMMY)
97260       let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
            let FNUNPACK=SWITCH !:
            exit do 
97270 ! 
97280 _Unpack2: ! ***** Shipper Detail
97285       mat LOT_$=(NULL$) !:
            mat LOT_=(0)
97290       let F(DATE_SHIPPED_SL)=DATE(F(DATE_SHIPPED_SL)) !:
            let F(GB_DATE_SL)=DATE(F(GB_DATE_SL)) !:
            mat OSHIPL$=F$ !:
            mat OSHIPL=F !:
            let DUMMY=OSHIPL(ITYPE_SL)+1 !:
            let OITYPE$=" QV"(DUMMY:DUMMY)
97320       if NOT FP(SWITCH) AND FNRESET(SHIPLOT,RPAD$(F$(SHIPPER_SL),8)&RPAD$(F$(PART_SL),15)) then 
97330          let _INDEX = 0 !:
               do WHILE FNREAD_FILE(SHIPLOT,FORM$(SHIPLOT_),NULL$,0,MAT SHIPLOT$,MAT SHIPLOT,0) AND SHIPLOT$(1)=F$(SHIPPER_SL) AND SHIPLOT$(2)=F$(PART_SL) AND SHIPLOT(3)=F(TIME_ADDED_SL) !:
                  let LOT_$(_INDEX+=1)=SHIPLOT$(3) !:
                  let LOT_(_INDEX)=SHIPLOT(1) !:
               loop UNTIL _INDEX=30
97340       end if 
97345       mat OLD_LOT$=LOT_$ !:
            mat OLD_LOT=LOT_
97350       if F$(PART_SL)="C" then !                               Comment      !:
               let F$(DESC_SL)=RPAD$(F$(DESC_SL),30)&RPAD$(F$(CUSTOMER_PART_SL),26)&RPAD$(F$(UM_SL),2) !:
               let FNUNPACK=SWITCH !:
               exit do 
97360       let OLDPART$=STR$(SHIPPERH(COMPANY_SH))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)  !For comparison in edit
97370       let OLDQUANTITY=F(SHIPPED_SL) !:
            let INV$(PART_I)=F$(PART_SL) !:
            let DUMMY=F(ITYPE_SL)+1 !:
            let ITYPE$=" QV"(DUMMY:DUMMY)
97375       let _LOTLEN=8                   !Default !:
            let FNREAD_FIELD(COMPANY,NULL$,SHIPPERH(COMPANY_SH),DUMMY$:="Form Pos 167,BH 2",_LOTLEN)
97380       let FNUNPACK=SWITCH !:
            exit do 
97390 ! 
97400 _Unpack3: ! ***** Order Header
97410       let F(ORDER_DATE_H)=DATE(F(ORDER_DATE_H)) !:
            let F(DUE_DATE_H)=DATE(F(DUE_DATE_H)) !:
            let F(INV_DATE_H)=DATE(F(INV_DATE_H)) !:
            let F(SHIP_DATE_H)=DATE(F(SHIP_DATE_H)) !:
            let F(PO_REQ_DATE_H)=DATE(F(PO_REQ_DATE_H)) !:
            let FNUNPACK=SWITCH !:
            exit do 
97420 ! 
97430 _Unpack4: ! ***** Order Detail
97440       if F$(PART_L)="C" then !                               Comment      !:
               let F$(DESC_L)=RPAD$(F$(DESC_L),30)&RPAD$(F$(CUSTOMER_PART_L),26)&RPAD$(F$(UM_L),2)
97450       let F(DATE_SHIPPED_L)=DATE(F(DATE_SHIPPED_L)) !:
            let F(DATE_RECEIVED_L)=DATE(F(DATE_RECEIVED_L)) !:
            let FNUNPACK=SWITCH !:
            exit do 
97460 ! 
97470 _Unpack5: ! ***** Unpack Vendor File
97480       for _LOOP = LAST_PAY_V to LAST_INV_V !:
               let F(_LOOP)=DATE(F(_LOOP)) !:
            next _LOOP !:
            let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
            let FNUNPACK=SWITCH !:
            exit do 
97490 ! 
97500 _Unpack6: ! ***** Unpack Inventory
97510       let F(DATE_CREATED_I)=DATE(F(DATE_CREATED_I)) !:
            let F(DATE_CHANGED_I)=DATE(F(DATE_CHANGED_I)) !:
            let FNUNPACK=SWITCH !:
            exit do 
97520 ! 
97530 _Unpack7: ! ***** Unpack Customer
97540       for _LOOP = INVOICE_DATE_U to LAST_TRANSMIT_U !:
               let F(_LOOP)=DATE(F(_LOOP)) !:
            next _LOOP !:
            let F$(TRANSIT_U)=CNVRT$("pic(##:##:##)",VAL(F$(TRANSIT_U))) error Ignore
97550       let FNREAD_DESCRIPTION(SWITCH,MAT F$,MAT F) !:
            let FNUNPACK=SWITCH !:
            exit do 
97560 ! 
97570 _Unpack8: ! ***** Unpack Blanket Order Detail
97580       for _LOOP = LAST_REL_DATE_B to DATE_LAST_SHIP_B !:
               let F(_LOOP) = DATE(F(_LOOP)) !:
            next _LOOP !:
            let FNUNPACK=SWITCH !:
            exit do 
97590 ! 
97600 _Unpack9: ! ***** Unpack Order Header
97610       let FNUNPACK=SWITCH !:
            exit do 
97620 ! 
97630 _Unpack10: ! ***** Unpack Inventory Quantity
97640       for _LOOP = 2 to 5 !:
               let F(_LOOP)=DATE(F(_LOOP)) !:
            next _LOOP !:
            let FNUNPACK=SWITCH !:
            exit do 
97650 ! 
97660 _Unpack11: ! ***** Unpack Plants
97670       let FNUNPACK=SWITCH !:
            exit do 
97680 ! 
97690 _Unpack12: ! ***** Unpack Terms
97700       let FNUNPACK=SWITCH !:
            exit do 
97710 ! 
97720 _Unpack14: ! ***** Unpack Sales Tax
97730       let FNUNPACK=SWITCH !:
            exit do 
97740 ! 
97750 _Unpack15: ! ***** Unpack Company File
97760       let FNUNPACK=SWITCH !:
            exit do 
97770 ! 
97780 _Unpack16: ! ***** Unpack Shipment History
97790       let F(DATE_SHIPPED_SL)=DATE(F(DATE_SHIPPED_SL)) !:
            let FNUNPACK=SWITCH !:
            exit do 
97800 ! 
97810 _Unpack17: ! ***** Unpack Serial Number File
97820       let FNUNPACK=SWITCH !:
            exit do 
97830 ! 
97840 _Unpack18: ! ***** Unpack Shipper Lot Numbers
97850       let FNUNPACK=SWITCH !:
            exit do 
97860 ! 
97870 _Unpack21: ! ***** Unpack Lot Number File
97880       let F(2)=DATE(F(2)) !:
            let FNUNPACK=SWITCH !:
            exit do 
97890 ! 
97900 _Unpack22: ! ***** Unpack Dock Codes
97910       let FNUNPACK=SWITCH !:
            exit do 
97920 ! 
97930 _Unpack23: ! ***** Unpack 862 Shipping Schedules
97940       let F(1)=DATE(F(1)) !:
            let FNUNPACK=SWITCH !:
            exit do 
97942 ! 
97944 _Unpack30: ! ***** Unpack Shipperh-Dest
97945       for _LOOP = SHIPPER_DATE_SH to ARRIVAL_DATE_SH !:
               let F(_LOOP)=DATE(F(_LOOP)) !:
            next _LOOP !:
            let F(ASN_DATE_SH)=DATE(F(ASN_DATE_SH))
97946       let FNUNPACK=SWITCH !:
            exit do 
97950 ! 
97954 _Unpack34: ! ***** Unpack Lotlogh
97956       let FNUNPACK=SWITCH !:
            exit do 
97958 ! 
97968 _Unpack_Carrier: ! *****
97970       let FNUNPACK=SWITCH !:
            exit do  !:
            ! 
97971 _Unpack_Commun: ! *****
97972       let FNUNPACK=SWITCH !:
            exit do  !:
            ! 
97973 _Unpack_Edidoc: ! *****
97974       let FNUNPACK=SWITCH !:
            exit do  !:
            ! 
97976 Exit_Unpack: ! ***** Exit
97978    loop 
97980 _End_Unpack: fnend 
98000 ! 
98100 Xref_Fields: ! ***** Pull Ancillary Data
98110 def FNXREF_FIELDS(SWITCH,MAT F$,MAT F)
98120    let FNXREF_FIELDS=FALSE            !Assume error !:
         do  !:
            on IP(SWITCH) == LABEL_ goto _Xref17 !:
            on IP(SWITCH) == SHIPLOT_ goto _Xref18 !:
            on IP(SWITCH) goto _Xref1,_End_Xref_Fields,_Xref3,_Xref4,_Xref5,_Xref6,_Xref7,_Xref8 none _End_Xref_Fields
98130 ! 
98140 _Xref1: ! ***** Pull Ship To Info Into Header
98150       if FNREAD_FILE(-CUSTOMER,FORM$(CUSTOMER_),RPAD$(F$(CUSTOMER_SH),8)&"ST"&RPAD$(F$(DEST_SH),9),0,MAT DES$,MAT DES,CUSTOMER_) then 
98160          mat F$(S_NAME_SH:S_ZIP_SH)=DES$(CUSTOMER_NAME_U:ZIP_CODE_U) !:
               let F$(PICKUP_SH)=F$(CARRIER_SH)=DES$(CARRIER_U) !:
               let F(TAX_JUR_SH)=DES(TAX_JURIS_U) !:
               if DES$(COMM_CODE_U) > NULL$ then !:
                  let F$(COMMUN_SH)=DES$(COMM_CODE_U)
98170          if POS("PCI",DES$(SHIP_PAY_U)(1:1)) then !:
                  let F$(PC_SH)=DES$(SHIP_PAY_U)(1:1)
98180          let F(TAX_STATUS_SH)=MAX(0,MIN(1,POS("NY",DES$(TAX_STATUS_U))-1)) !:
               let DUMMY=F(TAX_STATUS_SH)+1 !:
               let TAXABLE$="NY"(DUMMY:DUMMY)
98190       else 
98200          mat F$(S_NAME_SH:S_ZIP_SH)=F$(B_NAME_SH:B_ZIP_SH)
98210       end if 
98220       let FNXREF_FIELDS=SWITCH !:
            exit do 
98230 ! 
98240 _Xref3: ! ***** Conversion Of Order Header To Shipper Header
98250       mat F$ = (NULL$) !:
            let F$(ORDER_SH)=ORH$(ORDER_H) !:
            mat F$(INVOICE_SH:S_ZIP_SH) = ORH$(INVOICE_H:S_ZIP_H) !:
            let F$(PRO_SH) = ORH$(PO_H) !:
            let F$(BOL_SH) = ORH$(BOL_H) !:
            let F$(PC_SH) = ORH$(PC_H) !:
            mat F$(LOC_ID_SH:MODE_SH) = ORH$(LOC_ID_H:MODE_H) !:
            let F$(PICKUP_SH)=F$(CARRIER_SH) = ORH$(CARRIER_H) !:
            let F$(DOCK_SH) = ORH$(DOCK_H) !:
            mat F$(TERMS_DESC_SH:COMMUN_SH) = ORH$(TERMS_DESC_H:COMMUN_H)
98251       let F$(PRO_SH)=ORH$(PO_H)
98252       let F$(ALT_ORD_SH)=ORH$(ALT_ORD_H)
98255       if TRIM$(ORH$(CARRIER2_H))>NULL$ then let F$(PICKUP_SH)=ORH$(CARRIER2_H)  !Pickup carrier
98260       mat F = (0) !:
            mat F(PERCENT_SH:SHIPMENT_DATE_SH) = ORH(PERCENT_H:SHIP_DATE_H) !:
            mat F(TAX_JUR_SH:DEBIT_SH) = ORH(TAX_JUR_H:DEBIT_H) !:
            let F(WSID_SH) = VAL(WSID$) !:
            let FNREAD_DESCRIPTION(SHIPPERH_,MAT F$,MAT F) !:
            if NOT F(SHIPMENT_DATE_SH) then !:
               let F(SHIPMENT_DATE_SH)=DATE
98270       let FNXREF_FIELDS=SWITCH !:
            exit do 
98280 ! 
98290 _Xref4: ! ***** Conversion Of Order Detail For Shipper Detail
98300       if FP(SWITCH) then 
98310          if LEN(RTRM$(LIST$(CURRENT)(1:15))) = 0 then !:
                  let ENT$(1) = LIST$(CURRENT)(1:15) !:
                  let ENT$(2) = LIST$(CURRENT)(16:73) !:
                  mat ENT = (0) !:
                  let FNXREF_FIELDS=SWITCH !:
                  exit do 
98320          let ENT$(1) = LIST$(CURRENT)(1:15) !:
               let ENT$(2) = LIST$(CURRENT)(17:46) !:
               let ENT(1) = VAL(LIST$(CURRENT)(48:55)) !:
               let ENT(2) = VAL(LIST$(CURRENT)(57:64)) !:
               let ENT(3) = VAL(LIST$(CURRENT)(66:73)) !:
               let FNXREF_FIELDS=SWITCH !:
               exit do 
98330       else 
98340          mat F$ = (NULL$) !:
               let F$(ORDER_SL) = ORL$(ORDER_L) !:
               let F$(SHIPPER_SL)=SHIPPERH$(SHIPPER_SH) !:
               mat F$(PART_SL:CONTAINER1_SL) = ORL$(PART_L:CONTAINER_L) !:
               let F$(POLINE_SL) = ORL$(BIN_L)
98350          mat F = (0) !:
               mat F(GROUP_SL:CLASS_SL) = ORL(GROUP_L:CLASS_L) !:
               let F(ORDERED_SL)=ORL(ORDERED_L) !:
               let F(STD_PACK_SL)=MAX(1,MIN(32767,ORL(STD_PACK_L))) !:
               mat F(TARE_SL:UNIT_PRICE_SL) = ORL(TARE_L:UNIT_PRICE_L) !:
               mat F(PERCENT1_SL:PLANT_SL) = ORL(PERCENT1_L:PLANT_L) !:
               mat F(TYPE_SL:COMPANY_SL) = ORL(TYPE_L:COMPANY_L) !:
               let F(DATE_ADDED_SL)=ORL(DATE_ADDED_L) !:
               let F(TIME_ADDED_SL)=ORL(TIME_ADDED_L) !:
               let F(CREDIT_SL)=ORL(CREDIT_L)
98352          let F(GB_DATE_SL)=ORL(DATE_SHIPPED_L)
98355          let F$(EDI_SOURCE_SL)="P"    !Purchase order file !:
               let F$(EDI_DOC_SL)=ORH$(EDI_DOC_H) !:
               let F(EDI_LIN_NUM_SL)=ORL(EDI_LIN_NUM_L)
98360          if FNREAD_FILE(-BLANKETL2,FORM$(BLANKETL_),RPAD$(ORL$(CUSTOMER_L),8)&RPAD$(ORL$(DEST_L),9)&RPAD$(ORL$(PART_L),15)&ORL$(REV_L),0,MAT BLANKETL$,MAT BLANKETL,0) then 
98361             if TRIM$(SHIPPERH$(ALT_ORD_SH))==NULL$ then !:
                     let SHIPPERH$(ALT_ORD_SH)=BLANKETL$(ORDER_H)
98362             let F$(PART_EXTEND_SL)=FNEITHER$(F$(PART_EXTEND_SL),BLANKETL$(PART_EXTEND_B),(F$(PART_EXTEND_SL)>NULL$)) !:
                  let F$(RAN_NO_SL)=FNEITHER$(BLANKETL$(PROJECT_B),F$(RAN_NO_SL),BLANKETL$(PROJECT_B)>NULL$ AND POS("HA_TO_RI",SHIPPERH$(COMMUN_SH)(1:2))) !:
                  let F$(RAN_NO_SL)=FNEITHER$(SCHEDC$(DRAN_S),F$(RAN_NO_SL),TRIM$(SCHEDC$(DRAN_S))>NULL$) !:
                  let F$(RAN_NO_SL)(10:100)=NULL$  !Trim of any excess
98364             let F$(CUSTOMER_PART_SL)=BLANKETL$(CUSTOMER_PART_B) !:
                  let F$(MODEL_YEAR_SL) = STR$(BLANKETL(MODEL_YEAR_B))(1:1)
98370             if F$(CONTAINER1_SL) = NULL$ then !:
                     let F$(CONTAINER1_SL)=BLANKETL$(CONTAINER_B)
98372             if F$(CUSTPO_SL)=NULL$ then !:
                     let F$(CUSTPO_SL)=BLANKETL$(CUSTPO_B)
98375             if ORH$(PO_H)>NULL$ AND F$(CUSTPO_SL)=NULL$ then !:
                     let F$(CUSTPO_SL)=ORH$(PO_H)
98385             mat DUMMY(7) = INV(STD_MATERIAL_I:STD_FUTURE_I) !:
                  let F(UNIT_COST_SL) = SUM(DUMMY)
98400             if F(UNIT_PRICE_SL) = 0 then !:
                     let F(UNIT_PRICE_SL)=BLANKETL(UNIT_PRICE_B)
98410             if BLANKETL(STD_PACK_B) then !:
                     let F(STD_PACK_SL)=MAX(1,MIN(32767,BLANKETL(STD_PACK_B)))
98420             if NOT F(SALESMAN_SL) then !:
                     let F(SALESMAN_SL)=BLANKETL(SALESMAN_B)
98430             if BLANKETL(COMMISSION_B) then !:
                     let F(COMM_AMT_SL)=BLANKETL(COMMISSION_B)
98435             if ORL$(CUSTOMER_L)(1:2)=="HA" then !:
                     let F$(RELEASE_SL)="P-"&ORL$(CUSTPO_L) !:
                  else !:
                     let F$(RELEASE_SL)=BLANKETL$(LAST_REL_B)
98436             let DUMMY$=NULL$
98440          end if 
98450          let FNCOMMISSION(MAT F$,MAT F)  !Compute commission
98460          if F$(PART_SL)~="C" AND F$(CUSTOMER_PART_SL) = NULL$ AND LEN(F$(PART_SL)) > 1 then !:
                  let F$(CUSTOMER_PART_SL) = F$(PART_SL)
98470          if F$(CUSTPO_SL) = NULL$ then !:
                  let F$(CUSTPO_SL) = ORH$(PO_H)
98480          let FNXREF_FIELDS=SWITCH !:
               exit do 
98490       end if 
98500 ! 
98510 _Xref5: ! ***** Vendor File To Header For Debit Memo Or Op
98520       mat F$(B_NAME_SH:B_ZIP_SH)=VEN$(NAME_V:R_ZIP_V) !:
            let F$(S_NAME_SH)=F$(B_NAME_SH) !:
            mat F$(S_ADDRESS1_SH:S_ZIP_SH)=VEN$(P_ADDRESS1_V:P_ZIP_V) !:
            let F$(PICKUP_SH)=F$(CARRIER_SH)=VEN$(CARRIER_V) !:
            let F(COMPANY_SH)=VEN(COMPANY_V) !:
            let F$(TERMS_DESC_SH) = "RETURN FOR CREDIT" !:
            if F(TYPE_SH)=9 then !:
               let F$(TERMS_DESC_SH)="OUTSIDE PROCESSING"
98530       let FNXREF_FIELDS=SWITCH !:
            exit do 
98540 ! 
98550 _Xref6: ! ***** Pull Inventory Into Shipper Detail
98560       mat DUMMY(7) = INV(STD_MATERIAL_I:STD_FUTURE_I) !:
            let INV(COST_STD_I)=SUM(DUMMY) !:
            let F$(COMMOD_SL)=INV$(COMMOD_I) !:
            let F$(CONTAINER2_SL)=INV$(CONTAINER2_I) !:
            let F$(CONTAINER1_SL)=INV$(CONTAINER1_I) !:
            let F(COMMISSION_SL)=POS("ABCDEFGHIJ",INV$(COMMISSION_CODE_I)) !:
            let F(COMM_AMT_SL)=INV(COMMISSION_I)
98570       let F$(DESC_SL)=INV$(DESCR1_INV_I) !:
            let F$(UM_SL)=INV$(UOM1_I) !:
            let F(UNIT_WT_SL)=INV(WEIGHT_NET_I)*(INV$(UOM1_I)~="RC") !:
            let F(GROUP_SL)=INV(GROUP_NO_I) !:
            let F(CLASS_SL)=INV(PROD_CLASS_I)
98580       if F$(CONTAINER1_SL)=NULL$ then !:
               let F$(CONTAINER1_SL)=INV$(CONTAINER1_I)
98590       if NOT F(UNIT_COST_SL) then !:
               let F(UNIT_COST_SL)=(CONTROL$(36)=="A")*(QTY(30)+(INV(COST_STD_I)*(QTY(30)==0)))+(CONTROL$(36)=="S")*(INV(COST_STD_I))
98600       if NOT F(STD_PACK_SL) then !:
               let F(STD_PACK_SL)=INV(STD_PACK_I)
98610       if TAXABLE$ = "Y" AND POS("YN",INV$(TAXABLE_I)) then !:
               let F(TAXABLE_SL) = (INV$(TAXABLE_I)=="Y")
98620       if OLDPART$~=STR$(SHIPPERH(COMPANY_SH))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) then !:
               let F(CREDIT_SL)=0
98630       if NOT F(CREDIT_SL) AND FNREAD_FILE(PRODCLAS,FORM$(PRODCLAS_),CNVRT$("zd 2",INV(PROD_CLASS_I)),0,MAT CLASS$,MAT CLASS,0) then !:
               let F(CREDIT_SL)=CLASS(1+5*SHIPPERH(SALES_TYPE_SH))
98635       if F(SHIPPED_SL) then 
98640          let F(UNIT_PRICE_SL)=FNPRICE_BREAK(MAT INV(PRICE1_I:PRICE6_I),MAT INV(BREAK1_I:BREAK6_I),1,CUS(PRICE_CODE_U))
98645       end if 
98650       let FNXREF_FIELDS=SWITCH !:
            exit do 
98660 ! 
98670 _Xref7: ! ***** Pull Bill To Into Shipper Header
98680       mat F$(B_NAME_SH:B_ZIP_SH)=CUS$(CUSTOMER_NAME_U:ZIP_CODE_U) !:
            let F$(TERMS_SH)=CUS$(TERMS_CODE_U) !:
            let F(CURRENCY_SH)=CUS(CURRENCY_CODE_U) !:
            let F$(CARRIER_SH)=CUS$(CARRIER_U) !:
            let F(SALESMAN_SH)=CUS(SALESMAN_NO_U) !:
            let F(COMPANY_SH)=CUS(COMPANY_U) !:
            let F$(COMMUN_SH)=CUS$(COMM_CODE_U)
98690       if POS("PCI",CUS$(SHIP_PAY_U)(1:1)) then !:
               let F$(PC_SH)=CUS$(SHIP_PAY_U)(1:1)
98700       let F(TAX_STATUS_SH)=MAX(0,MIN(1,POS("NY",CUS$(TAX_STATUS_U))-1)) !:
            let DUMMY=F(TAX_STATUS_SH)+1 !:
            let TAXABLE$="NY"(DUMMY:DUMMY)
98710       let F(TAX_JUR_SH)=CUS(TAX_JURIS_U) !:
            if F(TYPE_SH)=8 then !:
               rem F$(TERMS_SH)=NULL$ !:                                                       let F$(TERMS_DESC_SH)="RETURN TO CUSTOMER"
98720       let FNXREF_FIELDS=SWITCH !:
            exit do 
98730 ! 
98740 _Xref8: ! ***** Pull Blanket Order Data Into Shipper Detail
98745       if FP(SWITCH) then 
98750          let F$(PART_B) = INV$(PART_I) !:
               let F$(REV_B) = INV$(REVISION_I) !:
               let F$(CONTAINER_B) = INV$(CONTAINER1_I) !:
               let F(GROUP_B) = INV(GROUP_NO_I) !:
               let F(CLASS_B) = INV(PROD_CLASS_I) !:
               let F(UNIT_PRICE_B) = FNPRICE_BREAK(MAT INV(PRICE1_I:PRICE6_I),MAT INV(BREAK1_I:BREAK6_I),1,CUS(PRICE_CODE_U)) !:
               let F(STD_PACK_B) = INV(STD_PACK_I) !:
               let F(COMMISSION_B) = POS("ABCDEFGHIJ",INV$(COMMISSION_CODE_I))
98755          mat DUMMY(7) = INV(STD_MATERIAL_I:STD_FUTURE_I) !:
               let F(UNIT_COST_B)=SUM(DUMMY) !:
               let FNBLURB(INV$(DESCR1_INV_I))
98760          let FNXREF_FIELDS=SWITCH !:
               exit do 
98762       end if 
98765       let F$(PART_EXTEND_SL)=FNEITHER$(F$(PART_EXTEND_SL),BLANKETL$(PART_EXTEND_B),(F$(PART_EXTEND_SL)>NULL$)) !:
            let F$(RAN_NO_SL)=FNEITHER$(BLANKETL$(PROJECT_B),F$(RAN_NO_SL),BLANKETL$(PROJECT_B)>NULL$ AND POS("HA_TO_RI",SHIPPERH$(COMMUN_SH)(1:2))) !:
            let F$(RAN_NO_SL)=FNEITHER$(SCHEDC$(DRAN_S),F$(RAN_NO_SL),TRIM$(SCHEDC$(DRAN_S))>NULL$) !:
            let F$(RAN_NO_SL)(10:100)=NULL$  !Trim off any excess
98766       if TRIM$(F$(RELEASE_SL))==NULL$ then !:
               let F$(RELEASE_SL)=BLANKETL$(LAST_REL_B)  !Release number !:
               let F$(RELEASE_SL)=FNGET_SCHEDULE$(SCHEDC,BLANKETL$(ORDER_B),BLANKETL$(PART_B),BLANKETL$(REV_B),F$(RELEASE_SL),FALSE)  !Ship schedule number  !:
               let DUMMY$=NULL$ !:
               let F$(EDI_DOC_SL)=FNGET_SCHEDULE$(SCHEDC,BLANKETL$(ORDER_B),BLANKETL$(PART_B),BLANKETL$(REV_B),DUMMY$,TRUE)  !Edi document key
98767       if (NOT CONVERTED_ORDER) then 
98768          let F$(ORDER_SL)=BLANKETL$(ORDER_B) !:
               let F$(CUSTOMER_PART_SL)=BLANKETL$(CUSTOMER_PART_B) !:
               let F$(MODEL_YEAR_SL) = STR$(BLANKETL(MODEL_YEAR_B))(1:1)
98769          if F$(CUSTPO_SL)==NULL$ then !:
                  let F$(CUSTPO_SL)=BLANKETL$(CUSTPO_B)
98770          if F$(POLINE_SL)==NULL$ then !:
                  let F$(POLINE_SL)=BLANKETL$(CLAUSE_B)
98771       end if 
98772       if BLANKETL$(CONTAINER_B) > NULL$ then !:
               let F$(CONTAINER1_SL)=BLANKETL$(CONTAINER_B)
98775       rem if F$(RAN_NO_SL)==NULL$ then !:                                                    let FNREAD_NAME(SCHEDC,FNKEY$(SCHEDC_+.1,MAT F$,MAT F),0,70,10,F$(RAN_NO_SL)) !:                                                                                ! Ran number no longer flows through schedc - use kanban
98780       let F(CUM_SL)=BLANKETL(CUM_TOT_B) + F(SHIPPED_SL) !:
            let F(CUM_SL) = BLANKETL(8) + F(SHIPPED_SL) * (BLANKETL$(CUM_TYPE_B) == "A" OR BLANKETL$(CUM_TYPE_B)=="F" OR BLANKETL$(CUM_TYPE_B)=="I") - BLANKETL(SHIPPED_TODAY_B) * (BLANKETL$(CUM_TYPE_B) == "B" OR BLANKETL$(CUM_TYPE_B)=="G" OR BLANKETL$(CUM_TYPE_B)=="J")*(DAYS(BLANKETL(DATE_LAST_SHIP_B))==DAYS(F(DATE_SHIPPED_SL)))
98783       mat DUMMY(7) = INV(STD_MATERIAL_I:STD_FUTURE_I) !:
            let F(UNIT_COST_SL) = SUM(DUMMY)
98790       if BLANKETL(UNIT_PRICE_B) then !:
               let F(UNIT_PRICE_SL)=BLANKETL(UNIT_PRICE_B)
98795       if BLANKETL(STD_PACK_B) then !:
               let F(STD_PACK_SL)=BLANKETL(STD_PACK_B)
98800       if BLANKETL(SALESMAN_B) then !:
               let F(SALESMAN_SL)=BLANKETL(SALESMAN_B)
98805       if BLANKETL(COMMISSION_B) then !:
               let F(COMM_AMT_SL)=BLANKETL(COMMISSION_B)
98810       let FNCOMMISSION(MAT F$,MAT F)  !Compute commission
98815       let FNXREF_FIELDS=SWITCH !:
            exit do 
98820 ! 
98825 _Xref17: ! ***** Bar Code Serial Numbers
98830       let F$(1)=SHIPPERL$(SHIPPER_SL) !:
            let F$(2)=SHIPPERL$(CUSTOMER_PART_SL) !:
            let F(9)=SHIPPERL(DATE_ADDED_SL) !:
            let F(10)=SHIPPERL(TIME_ADDED_SL)
98835       let FNXREF_FIELDS=SWITCH !:
            exit do 
98840 ! 
98845 _Xref18: ! ***** Shipper Lot Number File
98850       let F$(1)=SHIPPERL$(SHIPPER_SL) !:
            let F$(2)=SHIPPERL$(PART_SL) !:
            let F$(3)=LOT_$(_INDEX) !:
            let F(1)=LOT_(_INDEX) !:
            let F(2)=SHIPPERL(DATE_ADDED_SL) !:
            let F(3)=SHIPPERL(TIME_ADDED_SL)
98855       let FNXREF_FIELDS=SWITCH !:
            exit do 
98860 ! 
98865 _Exit_Xref_Fields: ! ***** Exit
98870    loop 
98875 _End_Xref_Fields: fnend 
98900 ! 
98902 _Zoomedi_Document_Lin: ! ***** Zoom On Edi Doc Lin
98903 if TRIM$(F$(EDI_SOURCE_SL))<>NULL$ AND (EDI_FILE_SUB:=POS(EDIDOC_LEGEND$,F$(EDI_SOURCE_SL)))>0 then 
98904    if FILE(EDIDOC_CHANNEL)<1 AND TRIM$(F$(EDI_DOC_SL))>NULL$ then !:
            open #EDIDOC_CHANNEL: "name="&EDIDOC_FILE$(EDI_FILE_SUB)&"/cod,kfname="&EDIDOC_FILE$(EDI_FILE_SUB)&".ky2/cod,shri",internal,input,keyed 
98906    if FILE(EDIDOC_CHANNEL)>=0 AND TRIM$(F$(EDI_DOC_SL))>NULL$ then 
98908       let EDIDOC_HEADING$=SREP$("^LIN ^Dealer Contract  City St Zip        ",1,"^",ULHL$)&NORMAL$ !:
            restore #EDIDOC_CHANNEL, search=F$(EDI_DOC_SL): nokey 98920
98910       mat EDIDOC_DATA$=(NULL$) !:
            mat EDIDOC_DATA=(0) !:
            mat EDIDOC_KEY$(1)=(NULL$) !:
            mat EDIDOC_PAS$(1)=(NULL$) !:
            mat EDIDOC_SPEC$(1)=(NULL$) !:
            let LIN_NUMBER=0
98912       let WORK$=FNPAS_CASE$(WINDEX,EDIDOC_+.1,EDIDOC_CHANNEL,SHIPPERL$(EDI_DOC_SL),FORM$(EDI_),MAT EDIDOC_DATA$,MAT EDIDOC_DATA,MAT EDIDOC_KEY$,MAT EDIDOC_PAS$,MAT EDIDOC_SPEC$,MAT BLANK$,EDIDOC_CURRENT:=1,2,20,10,1,41,EDIDOC_TITLE$(EDI_FILE_SUB),"        H ",EDIDOC_HEADING$,NULL$,"Select a LIN Segment",MAT WAIT)
98914       if WORK$>NULL$ AND CMDKEY<>9 then !:
               let F(EDI_LIN_NUM_SL)=VAL(EDIDOC_PAS$(EDIDOC_CURRENT)(1:4))
98916       if F$(EDI_DOC_SL)>NULL$ then !:
               let EDI_CURSOR=0 !:
            else !:
               let EDI_CURSOR=2
98918       if CMDKEY<>9 AND WORK$=NULL$ then !:
               let FNMESSAGE(MESSAGE_WIN,5,5,"There are no matching LINs for this part number."," Warning ") !:
               let EDI_CURSOR=2
98920    else !:
         let FNMESSAGE(MESSAGE_WIN,5,5,"You must select a document before expanding this field."," Warning ") !:
         let EDI_CURSOR=2
98921 else !:
      let FNMESSAGE(MESSAGE_WIN,5,5,"You must select document type before expanding this field."," Warning ")
98922 let FNZOOM=TRUE !:
      let CMDKEY(0) !:
      return 
99000 ! 
99010 Zoom: ! ***** Expand Field
99012 def FNZOOM(SWITCH,FIELD)
99013    let WINDEX_HOLD=WINDEX !:
         if GUI_MODE then !:
            let WINDEX=0
99014    let FNZOOM=FALSE !:
         do  !:
            on (IP(SWITCH)==18) gosub _Zoom18 !:
            on (IP(SWITCH)==25) gosub _Zoom25 !:
            on (IP(SWITCH)==28) gosub _Zoom28 !:
            on (IP(SWITCH)==29) gosub _Zoom29 !:
            on (IP(SWITCH)==32) gosub _Zoom32 !:
            on (IP(SWITCH)==EDI_) gosub _Zoom_Edi !:
            on IP(SWITCH) gosub _Zoom1,_Zoom2,_Zoom3,_No_Zoom,_No_Zoom,_Zoom6,_Zoom7,_Zoom8 none _No_Zoom
99016       exit do 
99018 ! 
99020 _Zoom1: ! ***** Zooms For Shipper Header
99022       if FIELD>4 AND FIELD<17 then gosub _No_Zoom
99024       on FIELD-16 gosub _Zoom1_Terms,_Zoom1_Salesman,_Zoom1_Commun,_Zoom1_Carrier,_Zoom1_Carrier,_Zoom1_Plant,_No_Zoom,_Zoom1_Dock,_No_Zoom,_No_Zoom,_Zoom1_Eqtm,_Zoom1_Eqtm,_Zoom1_Prepaid,_Zoom1_Sdate,_No_Zoom,_Zoom1_Adate,_No_Zoom
99026       on FIELD gosub _Zoom1_Shipper,_Zoom1_Customer,_Zoom1_Dest,_Zoom1_Type
99028       return 
99040 ! 
99042 _Zoom1_Shipper: ! ***** Returns Shipper Number
99044       mat PAS_SPEC$(1)=(NULL$) !:
            mat SHH_PAS$(1)=(NULL$) !:
            let SHP_CURRENT=1 !:
            if _FUNCTION = 1 then !:
               goto _No_Zoom
99046       let FNRESET(SHIPPERH,F$(SHIPPER_SH))
99048       do WHILE FNREAD_FILE(-SHIPPERH,FORM$(SHIPPERH_),NULL$,0,MAT _SHH$,MAT _SHH,SHIPPERH_)
99050          if NOT (RESTRICT_PLANTS) OR ((RESTRICT_PLANTS) AND _PLANTNO=_SHH(PLANT_SH)) then !:
                  let FNAPPENDS(MAT SHH_PAS$,FNMAKE_LINE$(SHIPPERH_,MAT _SHH$,MAT _SHH))
99052       loop 
99054       let DUMMY=FNPAS(WINDEX,MAT SHH_PAS$,MAT PAS_SPEC$,MAT BLANK$,SHP_CURRENT:=1,2,32,0,1,44,"Open Shippers for "&FNEITHER$("Plant "&STR$(_PLANTNO),"All Plants",(RESTRICT_PLANTS)),"        H ",SREP$(SREP$("^Shipper ^    Date^Customer^Destin.  ^Carrier`",1,"^",ULHL$),1,"`",NORMAL$),NULL$,MAT WAIT)
99056       if DUMMY$ = NULL$ OR CMDKEY=9 then !:
               let FNZOOM=FALSE !:
               let FNBLURB("No shippers found.") !:
               let CMDKEY(0) !:
               mat SHIP_DESC$ = (NULL$) !:
               return 
99058       if CMDKEY ~= 9 then !:
               let F$(SHIPPER_SH)=SHH_PAS$(DUMMY)(1:8) !:
               let FNZOOM=TRUE !:
               let CMDKEY(10) !:
               return 
99062 ! 
99064 _Zoom1_Customer: ! ***** Zoom On Customer Number
99066       mat CUST$(1)=(NULL$) !:
            mat CUST_KEY$(1)=(NULL$) !:
            mat CUST_SPEC$(1)=(NULL$) !:
            mat CUSTOMER_KEY$(1)=(NULL$) !:
            mat CUSTOMER_LIST$(1)=(NULL$)
99068       if (F(TYPE_SH)=7 OR F(TYPE_SH)=9) AND VENDOR then 
99070          mat VEND$(1)=(NULL$) !:
               mat PAS_SPEC$(1)=(NULL$) !:
               let DUMMY$=FNPAS_SIMPLE$(WINDEX,VENDOR,38,F$(CUSTOMER_SH),MAT VEND$,MAT PAS_SPEC$,MAT BLANK$,VENDOR_PAS:= 1,2,36,18,1,"Vendor Selection","        H ",NULL$,NULL$,"Select a vendor record and press "&RETURN$&" or press the desired function key.",MAT WAIT)
99072          if CMDKEY><9 then !:
                  let F$(CUSTOMER_SH)=VEND$(VENDOR_PAS)(1:8) !:
                  let FNZOOM=TRUE
99074       else 
99076          if (_ZOOM_WORK:=(POS(F$(CUSTOMER_SH),"?") > 0)) then !:
                  let WORK$="BT"&SREP$(F$(CUSTOMER_SH),1,"?","")  !Alternate !:
               else !:
                  let WORK$=F$(CUSTOMER_SH)  !Standard key
99078          mat CUSTOMER_LIST$(1)=(NULL$)
99080          if (RESTRICT_PLANTS) then ! Restrict plant
99082             let FNFIND_ALL_CASE(ORDERH_+.1,ORDERH2,WORK$,FORM$(ORDERH_),MAT ORDERH$,MAT ORDERH,MAT CUSTOMER_KEY$,MAT CUSTOMER_LIST$) !:
                  let FNDROP_SAME(MAT CUSTOMER_LIST$)  !Clear dups        !:
                  mat WORK(UDIM(CUSTOMER_LIST$))  !Resize for compress !:
                  for _LOOP = 1 to UDIM(CUSTOMER_LIST$)  !Test each cust   !:
                     let WORK(_LOOP)=VAL(CUSTOMER_LIST$(_LOOP)(1:2))==_PLANTNO !:
                  next _LOOP
99084             let FNMAT_SUBSTRING(MAT CUSTOMER_LIST$,4,42)  !Rm plant !:
                  mat SAVE_WORK(UDIM(WORK))=WORK  !Save for 2nd compress!:
                  let FNCOMPRESS_MATS(MAT CUSTOMER_LIST$,MAT WORK) !:
                  let FNCOMPRESS_MATS(MAT CUSTOMER_KEY$,MAT SAVE_WORK)
99086             let DUMMY=FNPAS(WINDEX,MAT CUSTOMER_LIST$,MAT CUST_SPEC$,MAT BLANK$,CURRENT_CUST:=1,2,37,18,1,39,"Customers for Plant "&STR$(_PLANTNO),"        H ",SREP$(RPAD$("\Number  \Name",39),1,"\",ULHL$),NULL$,MAT WAIT)
99088             if CMDKEY><9 then !:
                     let F$(CUSTOMER_SH)=CUSTOMER_LIST$(DUMMY)(1:8) !:
                     let FNZOOM=TRUE
99090          else 
99092             let DUMMY$=FNPAS_FM_CASE$(WINDEX,CUST_SGN,MAT CUST_KEY$,MAT CUST$,MAT CUST_SPEC$,MAT BLANK$,CURRENT_CUST:= 1,2,37,18,1,41,"Customers for All Plants",SREP$(RPAD$("\Number  \Name",41),1,"\",ULHL$),NULL$,NULL$,CUSTOMER_+.1,CUSTOMER,CUSTOMER3*_ZOOM_WORK,FORM$(CUSTOMER_),MAT CUS$,MAT CUS,SCREENSA,"CUSTOMEA",_CUSROW,_CUSCOLUMN,_CUSROWS,_CUSCOLUMNS,MAT CUSW$,MAT CUSSPEC$,MAT DUMBGS$,MAT DUMUS$,MAT CUSH$,MAT CUS_MASK$,WORK$,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
                  if GUI_MODE then close #WINDEX: 
99094             if CMDKEY><9 then 
99096                if NOT _ZOOM_WORK then ! Standard key used !:
                        let F$(CUSTOMER_SH)=DUMMY$(1:8)  !Selected key !:
                     else ! Alternate key used !:
                        let F$(CUSTOMER_SH)=CUSTOMER_LIST$(CURRENT_CUST)(1:8)  !Standrd key
99098                let FNZOOM=TRUE        !Success
99100             end if 
99102          end if 
99104       end if 
99106       let CMDKEY(0) !:
            return 
99108 ! 
99110 _Zoom1_Dest: ! ***** Zoom On Destination
99112       if F$(CUSTOMER_SH)=NULL$ AND _FUNCTION<>1 then 
99114          if FNFIND_ALL_CASE(DEST_+.2,SHIPPERH2,F$(DEST_SH),FORM$(SHIPPERH_),MAT _SPH$,MAT _SPH,MAT S_DESTK$,MAT S_DEST$) then 
99116             if (RESTRICT_PLANTS) then ! Show only your plant
99118                let FNDROP_SAME(MAT S_DEST$)  !Clear dups !:
                     mat WORK(UDIM(S_DEST$))  !Resize for compress !:
                     for _LOOP = 1 to UDIM(S_DEST$)  !Test each dest !:
                        let WORK(_LOOP)=VAL(S_DEST$(_LOOP)(1:2))==_PLANTNO !:
                     next _LOOP
99120                mat SAVE_WORK(UDIM(WORK))=WORK  !Save for 2nd comp !:
                     let FNCOMPRESS_MATS(MAT S_DEST$,MAT WORK) !:
                     mat DUMMY(UDIM(S_DEST$))=AIDX(S_DEST$) !:
                     let FNRESEQUENCES(MAT S_DEST$,MAT DUMMY)
99122             end if 
99124             let FNMAT_SUBSTRING(MAT S_DEST$,4,75)  !Remove plant
99127             mat PAS_SPEC$(1)=(NULL$) !:
                  let FNBLURB("Select the Shipper by Destination") !:
                  let WORK=FNPAS(WINDEX,MAT S_DEST$,MAT PAS_SPEC$,MAT BLANK$,1,2,2,19,1,72,"Select the Shipper by Destination for "&FNEITHER$("Plant "&STR$(_PLANTNO),"All Plants",(RESTRICT_PLANTS)),"        H ",SREP$("^Destin    ^Customer ^Description                    ^Shipper  ^Date^    ",1,"^",ULHL$),NULL$,MAT WAIT)
99128             if CMDKEY><9 then ! No cancel     !:
                     let SHIPPERH$(2)=S_DEST$(WORK)(54:61)  !Shipper !:
                     mat S_DEST$(1)         !Reclaim memory !:
                     mat S_DESTK$(1)        !Ditto !:
                     let CMDKEY(10)         !Force select
99130          end if 
99132       else if _FUNCTION=1 AND F$(CUSTOMER_SH)>NULL$ then 
99134          if F(TYPE_SH)=7 OR F(TYPE_SH)=9 then !:
                  goto _No_Zoom
99136          mat DUMMY_MASK$(3)=CUS_MASK$ !:
               let DUMMY_MASK$(1)(1:3)="000" !:
               let DUMMY_MASK$(2)(14:14) = "1" !:
               let DUMMY_MASK$(2)(17:18) = "11" !:
               let DUMMY_MASK$(2)(21:22)="11" !:
               mat DEST$(1)=(NULL$) !:
               mat DEST_SPEC$(1)=(NULL$) !:
               mat DEST_KEY$(1)=(NULL$) !:
               let _DEST_FLAG=1
99138          if CMDKEY~=9 then 
99140             if (RESTRICT_PLANTS) then ! Restrict the destinations
99142                if FNFIND_ALL_CASE(ORDERH_+.2,ORDERH2,F$(CUSTOMER_SH),FORM$(ORDERH_),MAT ORDERH$,MAT ORDERH,MAT DEST_KEY$,MAT DEST_LIST$) then 
99144                   let FNDROP_SAME(MAT DEST_LIST$)  !Clear dups !:
                        mat WORK(UDIM(DEST_LIST$))  !Resize for compress !:
                        for _LOOP = 1 to UDIM(DEST_LIST$)  !Test each dest !:
                           let WORK(_LOOP)=VAL(DEST_LIST$(_LOOP)(1:2))==_PLANTNO !:
                        next _LOOP
99146                   let FNMAT_SUBSTRING(MAT DEST_LIST$,4,42)  !Rm plt !:
                        mat SAVE_WORK(UDIM(WORK))=WORK  !Save for 2nd comp !:
                        let FNCOMPRESS_MATS(MAT DEST_LIST$,MAT WORK) !:
                        let FNCOMPRESS_MATS(MAT DEST_KEY$,MAT SAVE_WORK) !:
                        mat DUMMY(UDIM(DEST_LIST$))=AIDX(DEST_LIST$) !:
                        let FNRESEQUENCES(MAT DEST_LIST$,MAT DUMMY)
99148                   mat PAS_SPEC$(1)=(NULL$) !:
                        let FNBLURB("Select the Shipper by Destination") !:
                        let WORK=FNPAS(WINDEX,MAT DEST_LIST$,MAT PAS_SPEC$,MAT BLANK$,1,2,21,8,1,39,"Destinations for Customer "&F$(CUSTOMER_SH),"        H ",SREP$(RPAD$("\Destin.  \Name",39),1,"\",ULHL$),NULL$,MAT WAIT)
99150                   if CMDKEY><9 then !     No cancel     !:
                           let F$(DEST_SH)=DEST_LIST$(WORK)(1:9)  !Destin !:
                           mat DEST_LIST$(1)  !Reclaim memory !:
                           mat DEST_KEY$(1)  !Ditto !:
                           let CMDKEY(10)   !Force select
99152                end if 
99154             else 
99156                let DUMMY$=FNPAS_FM_CASE$(WINDEX,DEST_SGN,MAT DEST_KEY$,MAT DEST$,MAT DEST_SPEC$,MAT BLANK$,CURRENT_DEST:=1,2,21,8,1,41,"Destinations for Customer "&F$(CUSTOMER_SH),SREP$(RPAD$("\Destin.  \Name",41),1,"\",ULHL$),NULL$,NULL$,CUSTOMER_,CUSTOMER,CUSTOMER,FORM$(CUSTOMER_),MAT CUS$,MAT CUS,SCREENSA,"CUSTOMEA",_CUSROW,_CUSCOLUMN,_CUSROWS,_CUSCOLUMNS,MAT CUSW$,MAT CUSSPEC$,MAT DUMBGS$,MAT DUMUS$,MAT CUSH$,MAT DUMMY_MASK$,RPAD$(F$(CUSTOMER_SH),8)&"ST"&F$(DEST_SH),MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
                     if GUI_MODE then close #WINDEX: 
99158                if CMDKEY><9 then !:
                        let F$(DEST_SH)=DUMMY$(11:19)
99160             end if 
99162          end if 
99164          let _DEST_FLAG=0 !:
               let CMDKEY(0)
99166       end if 
99168       return 
99170 ! 
99172 _Zoom1_Plant: ! ***** Zoom On Plant Number
99174       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS_SIMPLE(WINDEX,PLANT,30,MAT PLANT_PAS$,MAT PAS_SPEC$,MAT BLANK$,PLANT_PAS:=1,6,41,0,1,"Plants","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 AND DUMMY>0 AND DUMMY><F(PLANT_H) then !:
               let F(PLANT_SH)=PLANT_PAS=DUMMY !:
               let FNREAD_NAME(PLANT,NULL$,F(PLANT_SH),1,19,SHIP_DESC$(2)) !:
               let FNZOOM=TRUE
99176       let CMDKEY(0) !:
            return 
99178 ! 
99180 _Zoom1_Dock: ! ***** Zoom On Dock Code
99182       mat PAS_SPEC$(1) = (NULL$) !:
            let DUMMY$=FNPAS_CASE$(WINDEX,DOCK_,DOCKS,RPAD$(F$(CUSTOMER_SH),8)&RPAD$(F$(DEST_SH),9),FORM$(DOCK_),MAT DOCK$,MAT DOCK,MAT DOCK_KEY$,MAT DOCK_PAS$,MAT PAS_SPEC$,MAT BLANK$,DOCK_CURRENT :=1,12,32,0,1,16,"Dock Codes","        H ",NULL$,NULL$,NULL$,MAT WAIT) !:
            mat DOCK_KEY$(1)=(NULL$) !:
            mat DOCK_PAS$(1)=(NULL$)
99184       if CMDKEY><9 then 
99186          if SWITCH=1 then !:
                  let DOCK$=F$(DOCK_SH)=DUMMY$(18:32)  !Let fnzoom = true !:
               else !:
                  let DOCK$=F$(DOCK_SH)=DUMMY$(18:32)  !Let fnzoom = true !:
                  let F$(DOCK_SH)=NULL$
99188          mat DOCK$=(NULL$) !:
               mat DOCK=(0) !:
               let FNREAD_FILE(DOCKS,FORM$(DOCK_),FNKEY$(DOCK_+.1,MAT F$,MAT F)&RPAD$(DOCK$,8),0,MAT DOCK$,MAT DOCK,0)
99190          if TRIM$(DOCK$(4))>NULL$ then ! Check dock name
99192             let ADDRESS_OVERRIDE$=FNLINE_INPUT$(WINDEX_HOLD,15,6,1,"Do you want to override the address with dock code address?",NULL$,NULL$,NULL$,"Address Override","        H ",MAT WAIT)
99194             if ADDRESS_OVERRIDE$="Y" then ! Fill in shipto address !:
                     let F$(S_NAME_SH)=DOCK$(4) !:
                     let F$(S_ADDRESS1_SH)=DOCK$(5) !:
                     let F$(S_ADDRESS2_SH)=DOCK$(6) !:
                     let F$(S_CITY_SH)=DOCK$(7) !:
                     let F$(S_STATE_SH)=DOCK$(8) !:
                     let F$(S_ZIP_SH)=DOCK$(9)
99196          end if  !:
            end if 
99198       let CMDKEY(0) !:
            return 
99200 ! 
99202 _Zoom1_Type: ! ***** Zoom On Shipper Type
99204       let DUMMY=FNPAS(WINDOW,MAT SHIPPER_TYPE$,MAT SHIPPERPANDS$,MAT BLANK$,1,2,35,5,1,25,"Shipper Type","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(TYPE_SH)=DUMMY + 5 * (DUMMY > 1) !:
               let FNZOOM=TRUE
99206       let CMDKEY(0) !:
            return 
99208 ! 
99210 _Zoom1_Terms: ! ***** Zoom On Terms File
99212       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY$=FNPAS_SIMPLE$(WINDOW,TERMS,22,NULL$,MAT TERMS_PAS$,MAT PAS_SPEC$,MAT BLANK$,TERMS_PAS:=1,3,41,0,1,"Terms","        H ",NULL$,NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(TERMS_SH)=DUMMY$ !:
               let TERMS_PAS=DUMMY !:
               let FNREAD_NAME(TERMS,RPAD$(F$(TERMS_SH),2),0,3,20,F$(TERMS_DESC_SH)) !:
               let FNZOOM=TRUE
99214       let CMDKEY(0) !:
            return 
99216 ! 
99218 _Zoom1_Carrier: ! ***** Zoom On Carrier Field
99220       mat COMCAR_PAS$(1)=(NULL$) !:
            mat COMCAR_KEY$(1)=(NULL$) !:
            mat COMCAR_SPEC$(1)=(NULL$) !:
            let CARR_ZOOM_HEADINGS$=SREP$("^Carrier^Description             ^Comm  ^EQ  ^TM  "&NORMAL$,1,"^",ULHL$)
99221       if CURFLD==20 then !:
               let CARRIER_TYPE=PICKUP_SH !:
               !:
            else !:
               let CARRIER_TYPE=CARRIER_SH
99222       if TRIM$(SHIPPERH$(COMMUN_SH))<>NULL$ then !:
               let WORK$=FNPAS_CASE$(WINDEX,CARRIER_+.1,CARRIER2,SHIPPERH$(COMMUN_SH)(1:2),FORM$(CARRIER_),MAT CARRIER$,MAT CARRIER,MAT COMCAR_KEY$,MAT COMCAR_PAS$,MAT COMCAR_SPEC$,MAT BLANK$,COMCAR_CURRENT:=1,2,20,20,1,50,NULL$,"        H ",CARR_ZOOM_HEADINGS$,NULL$,"Select a Carrier Code",MAT WAIT) !:
            else !:
               let WORK$=FNPAS_CASE$(WINDEX,CARRIER_+.1,CARRIER,NULL$,FORM$(CARRIER_),MAT CARRIER$,MAT CARRIER,MAT COMCAR_KEY$,MAT COMCAR_PAS$,MAT COMCAR_SPEC$,MAT BLANK$,COMCAR_CURRENT:=1,2,20,20,1,50,NULL$,"        H ",CARR_ZOOM_HEADINGS$,NULL$,"Select a Carrier Code",MAT WAIT)
99223       if TRIM$(COMCAR_PAS$(1))<>NULL$ then 
99224          if CMDKEY ~= 9 then 
99225             let F$(CARRIER_TYPE)=COMCAR_PAS$(COMCAR_CURRENT)(1:4)
99226             if CARRIER_TYPE==CARRIER_SH then ! Delivery carrier !:
                     let F$(EQUIP_SH)=COMCAR_PAS$(COMCAR_CURRENT)(39:40) !:
                     let F$(MODE_SH)=COMCAR_PAS$(COMCAR_CURRENT)(43:44)
99227          end if 
99228       else 
99229          let FNMESSAGE(WINDEX,10,5,"No Carriers Exist For This CommCode."," Warning! ")
99230       end if 
99231       mat CARRIER$=(NULL$) !:
            mat CARRIER=(0)
99232       let FNZOOM=TRUE !:
            return 
99233 ! 
99234 _Zoom1_Salesman: ! ***** Zoom On Salesman Code
99236       mat PAS_SPEC$(1)=(NULL$) !:
            let SALESMAN_PAS=MAX(1,SALESMAN_PAS) !:
            let DUMMY=FNPAS(WINDOW,MAT SALES_CODE$,MAT PAS_SPEC$,MAT BLANK$,SALESMAN_PAS,5,41,0,1,32,"Salesmen","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(SALESMAN_H)=VAL(SALESMAN$(DUMMY)) !:
               let SALESMAN_PAS=DUMMY !:
               let SHIP_DESC$(1) = SALES_CODE$(DUMMY)(6:25) !:
               let FNZOOM=TRUE
99238       let CMDKEY(0) !:
            return 
99240 ! 
99242 _Zoom1_Commun: ! ***** Zoom On Communications Codes
99243       mat COMCAR_PAS$(1)=(NULL$) !:
            mat COMCAR_KEY$(1)=(NULL$) !:
            mat COMCAR_SPEC$(1)=(NULL$)
99244       let COMM_ZOOM=TRUE
99245       let COMMUN_ZOOM_HEADINGS$=SREP$("^Comm. ^Description                 "&NORMAL$,1,"^",ULHL$)
99246       let WORK$=FNPAS_CASE$(WINDEX,COMMUN_+.1,COMMUN,SHIPPERH$(COMMUN_SH)(1:2),FORM$(COMMUN_),MAT COMM$,MAT COMM,MAT COMCAR_KEY$,MAT COMCAR_PAS$,MAT COMCAR_SPEC$,MAT BLANK$,COMCAR_CURRENT:=1,2,20,20,1,50,NULL$,"        H ",COMMUN_ZOOM_HEADINGS$,NULL$,"Select a Communications Code",MAT WAIT)
99247       if CMDKEY ~= 9 then 
99248          let SHIPPERH$(COMMUN_SH)=COMCAR_PAS$(COMCAR_CURRENT)(1:4) !:
               let FNZOOM=TRUE
99249       end if 
99250       mat CARRIER$=(NULL$) !:
            mat CARRIER=(0) !:
            let CMDKEY(0) !:
            return 
99253 ! 
99254 _Zoom1_Eqtm: ! ***** Zoom On Equipment Code / Transportation Mode
99256       gosub Zoom_Eqtm
99267       let CMDKEY(0) !:
            let PAS_SPEC$(1)=(NULL$) !:
            return 
99270 ! 
99272 _Zoom1_Locqual: ! ***** Zoom On Location Qualifier
99274       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT LOCQUAL$,MAT PAS_SPEC$,MAT BLANK$,1,6,2,0,1,36,"Location Qualifiers","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(LOC_QUAL_SH)=LOCQUAL$(DUMMY)(1:2) !:
               let FNZOOM=TRUE
99276       let CMDKEY(0) !:
            return 
99278 ! 
99280 _Zoom1_Prepaid: ! ***** Zoom On Prepaid/Collect
99282       let DUMMY=FNPAS(WINDOW,MAT PC$,MAT PCPANDS$,MAT BLANK$,2,13,41,0,1,18,NULL$,"        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(PC_SH)=PC$(DUMMY)(1:1) !:
               let FNZOOM=TRUE
99284       let CMDKEY(0) !:
            return 
99286 ! 
99288 _Zoom1_Sdate: ! ***** Zoom On Shipment Date
99290       mat CAL_SPEC$(1)=(NULL$) !:
            let XXXX=F(SHIPMENT_DATE_SH) + DATE*(F(SHIPMENT_DATE_SH)==0) !:
            let DUMMY=DAYS(XXXX,"mdy") !:
            let WORK=DATE(DUMMY-DATE(DUMMY,"d"),"mdy")
99291       let WINDEX=WINDEX_HOLD
99292       let WINDEX=WINDEX_HOLD !:
            let DUMMY=FNPAS_CALENDAR(WINDEX,1,1,2,3,CAL:=0,WORK,XXXX,0,0,6,NULL$,NULL$,MAT CALW$,MAT CAL_SPEC$,MAT CAL$,MAT CAL,MAT CALH$,"Shipment Date","        H ",MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F(SHIPMENT_DATE_SH)=DUMMY !:
               let FNZOOM=TRUE
99294       let CMDKEY(0) !:
            return 
99296 ! 
99298 _Zoom1_Adate: ! ***** Zoom On Arrival Date
99300       mat CAL_SPEC$(1)=(NULL$) !:
            let XXXX=DATE(MAX(DAYS(F(ARRIVAL_DATE_SH)),DAYS(F(SHIPMENT_DATE_SH)))) !:
            let XXXX+=DATE*(XXXX==0) !:
            let DUMMY=DAYS(XXXX,"mdy") !:
            let WORK=DATE(DUMMY-DATE(DUMMY,"d"),"mdy")
99301       let WINDEX=WINDEX_HOLD
99302       let WINDEX=WINDEX_HOLD !:
            let DUMMY=FNPAS_CALENDAR(WINDEX,1,1,2,3,CAL:=0,WORK,XXXX,0,0,6,NULL$,NULL$,MAT CALW$,MAT CAL_SPEC$,MAT CAL$,MAT CAL,MAT CALH$,"Arrival Date","        H ",MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F(ARRIVAL_DATE_SH)=DUMMY !:
               let FNZOOM=TRUE
99304       let CMDKEY(0) !:
            return 
99306 ! 
99308 _Zoom1_Juris: ! ***** Zoom On Tax Jurisdiction
99310       mat PAS_SPEC$(1) = (NULL$) !:
            let DUMMY$=FNPAS_CASE$(WINDEX,TAXMAST_,TAXMAST,STR$(F(COMPANY_H)),FORM$(TAXMAST_),MAT _TAX$,MAT _TAX,MAT TAX_KEY$,MAT TAX_PAS$,MAT PAS_SPEC$,MAT BLANK$,TAX_CURRENT :=1,12,32,0,1,25,NULL$,"        H ",NULL$,NULL$,"Select a Tax Jurisdiction",MAT WAIT) !:
            mat TAX_KEY$(1)=(NULL$) !:
            mat TAX_PAS$(1)=(NULL$)
99312       if CMDKEY><9 then !:
               let F(TAX_JUR_H)=VAL((DUMMY$)(2:4)) !:
               let TAX_PAS=DUMMY !:
               let FNZOOM = TRUE
99314       let CMDKEY(0) !:
            return 
99316 ! 
99326 _Zoom2: ! ***** Zooms For Shipper Detail Screen
99329       on FIELD gosub _Zoom2_Part,_No_Zoom,_Zoom2_Kanban,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_Zoom2_Container,_No_Zoom,_Zoom2_Container !:
            return 
99332 ! 
99334 _Zoom2_Part: ! ***** Zoom On  Parts
99336       if F(TYPE_SL) > 6 OR NOT FNRESET(BLANKETL2,RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9)&RTRM$(F$(PART_SL))) then !                Returns
99338          mat INVT$(1)=(NULL$) !:
               mat INVT_KEY$(1) = (NULL$) !:
               mat INVT_SPEC$(1) = (NULL$) !:
               mat BLANK$(1)=(NULL$)
99340          if (_ZOOM_WORK:=(POS(F$(PART_L),"?") > 0)) then !:
                  let WORK$=(STR$(SHIPPERH(COMPANY_SH))&SREP$(F$(PART_SL),1,"?",""))(1:9)  !Alternate !:
               else !:
                  let WORK$=STR$(SHIPPERH(COMPANY_SH))&F$(PART_SL)  !Standard key
99342          let SHOW_ZOOM_ONLY_HOLD=SHOW_ZOOM_ONLY !:
               let SHOW_ZOOM_ONLY=0 !:
               let DUMMY$=FNPAS_FM_CASE$(WINDEX,INVT_SGN,MAT INVT_KEY$,MAT INVT$,MAT INVT_SPEC$,MAT BLANK$,CURRENT_INVT:= 1,5,26,16,1,51,"Parts from Inventory Selection",SREP$(RPAD$("\Number         \Rev \Description",50),1,"\",ULHL$),NULL$,NULL$,INVENT_+.1,INVENT,INVENT3*_ZOOM_WORK,FORM$(INVENT_),MAT INV$,MAT INV,SCREENSI,"INVENTOR",_INVROW,_INVCOLUMN,_INVROWS,_INVCOLUMNS,MAT INVW$,MAT INVSPEC$,MAT DUMBGS$,MAT DUMUS$,MAT INVH$,MAT INV_MASK$,WORK$,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
               let SHOW_ZOOM_ONLY=SHOW_ZOOM_ONLY_HOLD !:
               if GUI_MODE then close #WINDEX: 
99344          if CMDKEY><9 then 
99346             if NOT _ZOOM_WORK then !:
                     let F$(PART_SL) = DUMMY$(2:16) !:
                     let F$(REV_SL)=DUMMY$(17:20) !:
                  else !:
                     let F$(PART_SL) = INVT$(CURRENT_INVT)(1:15) !:
                     let F$(REV_SL)=INVT$(CURRENT_INVT)(17:20)
99348             let WORK$=STR$(SHIPPERH(COMPANY_SH))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
                  let FNZOOM = TRUE
99350             if FNREAD_FILE(-INVENT,FORM$(INVENT_),WORK$,0,MAT INV$,MAT INV,INVENT_) then !:
                     let FNXREF_FIELDS(INVENT_,MAT F$,MAT F) !:
                     let OLDPART$=WORK$ !:
                  else !:
                     let F$(PART_SL) = NULL$
99352          end if 
99354       else 
99356          mat BLL_KEY$(1)=(NULL$) !:
               mat BLL_PAS$(1)=(NULL$) !:
               mat BLL_SPEC$(1) = (NULL$) !:
               mat BLANK$(1)=(NULL$) !:
               mat ORDER_NUM$(1)=(NULL$) !:
               let _FIND_UNIQUE_CASE=_FIND_ALL_CASE=0
99358          if 1 OR TRIM$(SHIPPERH$(ORDER_SH))==NULL$ then !:
                  let FNFIND_UNIQUE_CASE(BLANKETL_,BLANKETL2,RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9)&TRIM$(RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)),FORM$(BLANKETL_),MAT BLANKETL$,MAT BLANKETL,MAT BLL_KEY$,MAT BLL_PAS$) !:
               else !:
                  let FNFIND_ALL_CASE(BLANKETL_+.4,BLANKETL,RPAD$(SHIPPERH$(ORDER_SH),8),FORM$(BLANKETL_),MAT BLANKETL$,MAT BLANKETL,MAT BLL_KEY$,MAT BLL_PAS$)
99360          if (RESTRICT_PLANTS) then ! Get parts for our plant only
99362             mat WORK(UDIM(BLL_PAS$))  !Resize to compress later !:
                  for _LOOP = 1 to UDIM(BLL_PAS$)  !Test the plants !:
                     let WORK(_LOOP)=VAL(BLL_PAS$(_LOOP)(1:2))==_PLANTNO !:
                  next _LOOP
99364             let FNCOMPRESS_MATS(MAT BLL_PAS$,MAT WORK) !:
                  let FNCOMPRESS_MATS(MAT BLL_KEY$,MAT WORK) !:
                  let FNCOMPRESS_MATS(MAT BLANK$,MAT WORK) !:
                  mat ORDER_NUM$(UDIM(WORK)) !:
                  let FNCOMPRESS_MATS(MAT ORDER_NUM$,MAT WORK)
99366          end if 
99367          if UDIM(BLL_PAS$)>0 AND TRIM$(BLL_PAS$(1))>NULL$ then 
99368             let FNMAT_SUBSTRING(MAT BLL_PAS$,4,75)  !Remove plant info
99369             let PAS_TITLE$="Available Blanket Orders"&FNEITHER$("   Shipper Dock: "&SHIPPERH$(DOCK_SH),NULL$,SHIPPERH$(DOCK_SH)>NULL$)
99370             let DUMMY=FNPAS(WINDEX,MAT BLL_PAS$,MAT BLL_SPEC$,MAT BLANK$,BLL_CURRENT:=1,2,3,0,1,72,PAS_TITLE$,"        H ","Part           "&_C$&"Rev."&_C$&"Customer Part             "&_C$&"Customer PO  "&_C$&"MY  "&_C$&"Accum"&NORMAL$,NULL$,MAT WAIT) !:
                  if DUMMY >0 then let DUMMY$=BLL_PAS$(DUMMY) !:
                  else let DUMMY$ = NULL$
99372             if DUMMY$ = NULL$ then !:
                     let FNZOOM=FALSE !:
                     let FNBLURB("No parts found for this destination.") !:
                     let CMDKEY(0) !:
                     mat BLANK$(1)=(NULL$) !:
                     return 
99374             if CMDKEY=9 then !:
                     let FNZOOM=FALSE !:
                     let FNBLURB(NULL$) !:
                     let CMDKEY(0) !:
                     mat BLANK$(1)=(NULL$) !:
                     return 
99376             if CMDKEY ~= 9 then 
99377                let DUMMY$ = BLL_PAS$(DUMMY) !:
                     let F$(PART_SL)=BLL_PAS$(DUMMY)(1:15) !:
                     let F$(REV_SL)=BLL_PAS$(DUMMY)(17:20) !:
                     let F$(CUSTPO_SL)=RTRM$(BLL_PAS$(DUMMY)(47:60)) !:
                     let DUMMY$=BLL_PAS$(DUMMY) !:
                     let _MODEL_YEAR=VAL(BLL_PAS$(DUMMY)(62:63)) !:
                     let BLANKET_KEY$=BLANK$(DUMMY)(21:28)&DUMMY$(1:15)&DUMMY$(17:20)&RPAD$(F$(CUSTOMER_SL),8)&F$(DEST_SL) !:
                     let FNZOOM=TRUE !:
                     let CMDKEY(10)
99378                if TRIM$(SHIPPERH$(ORDER_SH))==NULL$ then !:
                        let SHIPPERH$(ORDER_SH)=ORDER_NUM$(DUMMY)
99379                let CONVERTED_ORDER=0 !:
                     if (TRIM$(SHIPPERH$(ORDER_SH))<>NULL$) AND FNREAD_NUM(ORDERH,RPAD$(SHIPPERH$(ORDER_SH),8),0,DUMMY$:="form pos 414,b 1",DUMMY) then !:
                        let CONVERTED_ORDER=(DUMMY<=2)
99381                let DUMMY$ = STR$(F(COMPANY_SL))&RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4) !:
                     if FNREAD_FILE(-INVENT,FORM$(INVENT_),DUMMY$,0,MAT INV$,MAT INV,INVENT_) then !:
                        let FNXREF_FIELDS(INVENT_,MAT F$,MAT F) !:
                     else !:
                        mat INV = (0) : mat INV$ = ("")
99382                if FNRESET(BLANKETL,BLANKET_KEY$) then 
99384                   do WHILE FNREAD_FILE(-BLANKETL,FORM$(BLANKETL_),NULL$,0,MAT BLANKETL$,MAT BLANKETL,BLANKETL_) AND BLANKET_KEY$=RPAD$(BLANKETL$(ORDER_B),8)&RPAD$(BLANKETL$(PART_B),15)&RPAD$(BLANKETL$(REV_B),4)&RPAD$(BLANKETL$(CUSTOMER_B),8)&BLANKETL$(DEST_B) !:
                           if BLANKETL(MODEL_YEAR_B)=_MODEL_YEAR AND F$(CUSTPO_SL)=BLANKETL$(CUSTPO_B) then !:
                              let FNXREF_FIELDS(BLANKETL_,MAT F$,MAT F) !:
                              exit do 
99386                   loop 
99388                end if 
99389                mat BLANK$(1)=(NULL$) !:
                     let _FIND_UNIQUE_CASE=0 !:
                     return 
99393             end if 
99394          else 
99395             let FNZOOM=FALSE !:
                  let FNMESSAGE(WINDEX,14,26,"No parts found for this dock.","") !:
                  let CMDKEY(0) !:
                  mat BLANK$(1)=(NULL$) !:
                  return 
99396          end if  !:
            end if 
99398       mat BLL_KEY$(1)=(NULL$) !:
            mat BLL_PAS$(1)=(NULL$) !:
            let CMDKEY(0) !:
            let FNBLURB("Enter data for the record to be Added.") !:
            let MSG$(NULL$) !:
            return 
99400 ! 
99402 _Zoom2_Kanban: ! ***** Zoom On Available Kanban Records
99404       let KB_WORK$=RPAD$(F$(PART_SL),15)&RPAD$(F$(REV_SL),4)&" "&RPAD$(F$(CUSTOMER_SL),8)&RPAD$(F$(DEST_SL),9)  !mat Kb_line$ search key !:
            mat KB_LINE2$(UDIM(KB_LINE$))=(NULL$) !:
            let KB_SUB=KB_SUB2=0            !Mat kb_line$ -> mat kb_line2$ !:
            do WHILE (KB_SUB+=1) <= UDIM(KB_LINE$) !:
               if KB_WORK$=KB_LINE$(KB_SUB)(1:37) AND ( TRIM$(KB_LINE$(KB_SUB)(65:72))=NULL$ OR KB_LINE$(KB_SUB)(65:72)=SHIPPERL$(SHIPPER_SL)) then !:
                  let KB_LINE2$(KB_SUB2+=1)=KB_LINE$(KB_SUB)(1:64)
99405       loop 
99406       if KANBAN_WARNING_PART$<>F$(SHIPPER_SL)&F$(PART_SL) AND TRIM$(F$(RAN_NO_SL))>NULL$ then !:
               let FNMESSAGE(WINDOW,5,5,"Kanban "&F$(RAN_NO_SL)&" already assigned to this line"," Warning ") !:
               let KANBAN_WARNING_PART$=F$(SHIPPER_SL)&F$(PART_SL) !:
               return 
99407       mat KB_LINE2$(KB_SUB2) !:
            if KB_SUB2=0 then !:
               let FNMESSAGE(WINDOW,5,5,"No Matching Kanban Records Available"," Warning ") !:
               return  !:
            else !:
               mat PAS_SPEC$(1)=(NULL$) !:
               let DUMMY=FNPAS(WINDOW,MAT KB_LINE2$,MAT PAS_SPEC$,MAT BLANK$,1,2,2,0,1,65,"Kanban Records","        H ",NULL$,NULL$,MAT WAIT)
99408       if CMDKEY<>9 then 
99409          let DUMMY$=F$(RAN_NO_SL)     !Previously assigned kanban !:
               let WORK=VAL(DUMMY$) conv Ignore !:
               if (WORK1:=POS(DUMMY$,"."))>0 then !:
                  let WORK=VAL(DUMMY$(1:WORK1-1))*1000+VAL(DUMMY$(WORK1+1:INF))  !Allow for 9999.999 format
99410          let WORK$=KB_LINE2$(DUMMY)   !Selected pas line !:
               let KB_WORK$(1:0)=WORK$(56:63)  !Prepare kanban key !:
               let KB_WORK$(28:INF)=WORK$(64:64)&CNVRT$("BH 3",WORK) !:
               if TRIM$(F$(RAN_NO_SL))>NULL$ then rewrite #KANBAN,using Kanban_Shipper,key=KB_WORK$(1:28)&CNVRT$("bh 3",WORK): NULL$  !Clear previous assignment
99411          let DUMMY$=WORK$(40:46)      !selected Kanban number !:
               let WORK=VAL(DUMMY$) conv Ignore !:
               if (WORK1:=POS(DUMMY$,"."))>0 then !:
                  let WORK=VAL(DUMMY$(1:WORK1-1))*1000+VAL(DUMMY$(WORK1+1:INF))  !Allow for 9999.999 format
99412          let KB_WORK$(28:INF)=WORK$(64:64)&CNVRT$("BH 3",WORK) !:
               rewrite #KANBAN,using Kanban_Shipper,key=KB_WORK$: F$(SHIPPER_SL) !:
               let F$(RAN_NO_SL)=KB_LINE2$(DUMMY)(40:46)
99414       end if 
99415       return 
99416 ! 
99418 _Zoom2_Container: ! ***** Zoom On Container Type
99420       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT CONTAIN_CODE$,MAT PAS_SPEC$,MAT BLANK$,1,2,2,0,1,32,"Container Codes","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(CONTAINER1_SL+(FIELD==13))=CONT$(DUMMY) !:
               let FNCONTAINER(MAT F$,MAT F) !:
               let FNZOOM=TRUE
99422       let CMDKEY(0) !:
            return 
99424 ! 
99425 _Zoom3: ! ***** Zoom On Orders For Conversion
99428       on FIELD gosub _Zoom3_Order !:
            return 
99431 ! 
99434 _Zoom3_Order: ! ***** Convert From Orders
99437       mat PAS_SPEC$(1)=(NULL$) !:
            let ORD_CURRENT=1
99438       mat ORH_KEY$(1)=(NULL$) !:
            mat ORH_PAS$(1)=(NULL$) !:
            mat PAS_SPEC$(1)=(NULL$)
99439       let FNRESET(ORDERH,NULL$)
99440       do WHILE FNREAD_FILE(ORDERH,FORM$(ORDERH_),NULL$,0,MAT ORH$,MAT ORH,ORDERH_)
99441          if ORH(TYPE_H) < 3 AND (NOT (RESTRICT_PLANTS) OR ((RESTRICT_PLANTS) AND _PLANTNO=ORH(PLANT_H))) AND (ORH(29)<>5) then !:
                  let FNAPPENDS(MAT ORH_PAS$,FNMAKE_LINE$(ORDERH_,MAT ORH$,MAT ORH))
99442       loop 
99443       if TRIM$(ORH_PAS$(1))==NULL$ then !:
               let MSG_WINDEX=FNNEXT_CHANNEL(102,127) !:
               open #MSG_WINDEX: "srow=9,scol=9,erow=14,ecol=54",display,outin  !:
               let FNMESSAGE(MSG_WINDEX,10,10,"No Orders Available for Conversion.","") !:
               close #MSG_WINDEX: !:
               return 
99444       let DUMMY=FNPAS(WINDEX,MAT ORH_PAS$,MAT PAS_SPEC$,MAT BLANK$,ORD_CURRENT:=1,2,17,0,1,62,"Open Orders for "&FNEITHER$("Plant "&STR$(_PLANTNO),"All Plants",(RESTRICT_PLANTS)),"        H ",SREP$(SREP$("^Order No^    Date^Customer^P.O. Number   ^       Amount^Type",1,"^",ULHL$),1,"`",NORMAL$),NULL$,MAT WAIT)
99445       if DUMMY$ = NULL$ OR CMDKEY=9 then !:
               let FNZOOM=FALSE !:
               let FNBLURB("No orders found.") !:
               let CMDKEY(0) !:
               return 
99446       if CMDKEY ~= 9 then !:
               let _ORDER$=ORH_PAS$(DUMMY)(1:8) !:
               let FNZOOM=TRUE !:
               let CMDKEY(10) !:
               return 
99449 ! 
99452 _Zoom6: ! ***** Zooms For Inventory Screen
99455       on FIELD==7 gosub _Zoom6_Uom !:
            on FIELD==8 gosub _Zoom6_Uom !:
            on FIELD==11 gosub _Zoom6_Commission !:
            on FIELD==14 gosub _Zoom6_Container !:
            on FIELD==15 gosub _Zoom6_Container !:
            on FIELD==16 gosub _Zoom6_Vendor !:
            on FIELD==19 gosub _Zoom6_Class !:
            on FIELD==23 gosub _Zoom6_Commod
99458       return 
99461 ! 
99464 _Zoom6_Uom: ! ***** Zoom On Unit Of Measure
99467       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT UOM_CODE$,MAT PAS_SPEC$,MAT BLANK$,UOM_PAS:=1,2,47,0,1,13,"Units of Measure","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F$(UOM1_I + (FIELD==8))=UM$(DUMMY) !:
               let FNZOOM=TRUE
99470       let CMDKEY(0) !:
            return 
99473 ! 
99476 _Zoom6_Container: ! ***** Zoom On Container Type
99479       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT CONTAIN_CODE$,MAT PAS_SPEC$,MAT BLANK$,1,2,3,0,1,32,"Container Codes","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(CONTAINER1_I+(FIELD==15))=CONT$(DUMMY) !:
               let FNZOOM=TRUE
99482       let CMDKEY(0) !:
            return 
99485 ! 
99488 _Zoom6_Vendor: ! ***** Zoom Vendor
99491       mat VEND$(1)=(NULL$) !:
            mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY$=FNPAS_SIMPLE$(WINDEX,VENDOR,38,F$(VENDOR_I),MAT VEND$,MAT PAS_SPEC$,MAT BLANK$,VENDOR_PAS:= 1,2,25,18,1,"Vendor Selection","        H ",NULL$,NULL$,"Select a vendor record and press "&RETURN$&" or press the desired function key.",MAT WAIT)
99494       if CMDKEY><9 then !:
               let F$(VENDOR_I)=DUMMY$(1:8) !:
               let FNZOOM=TRUE
99497       let CMDKEY(0) !:
            return 
99500 ! 
99503 _Zoom6_Class: ! ***** Product Class
99506       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY$=FNPAS_SIMPLE$(WINDOW,PRODCLAS,27,NULL$,MAT PRODCLAS_PAS$,MAT PAS_SPEC$,MAT BLANK$,PRODCLAS_PAS:=1,3,3,0,1,"Product Class","        H ",NULL$,NULL$,NULL$,MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F(PROD_CLASS_I)=VAL(DUMMY$) !:
               let FNZOOM=TRUE
99509       let CMDKEY(0) !:
            return 
99512 ! 
99515 _Zoom6_Commod: ! ***** Zoom On Commodity Code
99518       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT COMMOD_CODE$,MAT PAS_SPEC$,MAT BLANK$,COMMOD_PAS:=1,2,3,0,1,40,"Commodity Codes","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F$(COMMOD_I)=COMMODITY$(DUMMY) !:
               let FNZOOM=TRUE
99521       let CMDKEY(0) !:
            return 
99524 ! 
99527 _Zoom6_Commission: ! ***** Comission Code
99530       let WORK=MAX(1,POS("ABCDEFGHIJ",F$(COMMISSION_CODE_I))) !:
            mat PAS_SPEC$(1)=(NULL$) !:
            let FNBLURB("Select the commission code.") !:
            let WORK$=FNSELECT$(WINDEX,MAT PAS$,MAT PAS_SPEC$,MAT BLANK$,WORK,CURROW-1,21,5,4,"ABCDEFGHIJ","Commission Code","        H ",NULL$,NULL$,MAT WAIT) !:
            if NOT CMDKEY then !:
               let F$(COMMISSION_CODE_I)=WORK$ !:
               let FNZOOM=TRUE              !Success
99533       mat PAS_SPEC$(1)=(NULL$) !:
            let CMDKEY(0) !:
            return 
99536 ! 
99539 _Zoom7: ! ***** Customer
99542       on (FIELD == 14) gosub _Zoom7_Terms !:
            on (FIELD == 24) gosub _Zoom7_Salesman !:
            on (FIELD == 22) gosub _Zoom7_Company !:
            on (FIELD == 21) gosub _Zoom7_Juris !:
            on (FIELD == 27) gosub _Zoom7_Carrier !:
            on (FIELD == 23 AND FILE(CURRENCY) > 0) gosub _Zoom7_Currency
99545       return 
99548 ! 
99551 _Zoom7_Terms: ! ***** Terms
99554       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY$=FNPAS_SIMPLE$(WINDOW,TERMS,22,NULL$,MAT TERMS_PAS$,MAT PAS_SPEC$,MAT BLANK$,TERMS_PAS,3,41,0,1,"Terms","        H ",NULL$,NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(TERMS_CODE_U)=DUMMY$ !:
               let FNREAD_NAME(TERMS,RPAD$(F$(TERMS_CODE_U),1),0,3,18,DESC_U$(1)) !:
               let TERMS_PAS=DUMMY !:
               let FNZOOM=TRUE
99557       let CMDKEY(0) !:
            return 
99560 ! 
99563 _Zoom7_Salesman: ! ***** Salesman
99566       mat PAS_SPEC$(1)=(NULL$) !:
            let SALESMAN_PAS=MAX(1,SALESMAN_PAS) !:
            let DUMMY=FNPAS(WINDOW,MAT SALES_CODE$,MAT PAS_SPEC$,MAT BLANK$,SALESMAN_PAS,2,37,0,1,32,"Salesmen","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(SALESMAN_NO_U)=VAL(SALESMAN$(DUMMY)) !:
               let SALESMAN_PAS=DUMMY !:
               let DESC_U$(2) = SALES_CODE$(DUMMY)(6:26) !:
               let FNZOOM=TRUE
99569       let CMDKEY(0) !:
            return 
99572 ! 
99575 _Zoom7_Company: ! ***** Company Number
99578       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS_SIMPLE(WINDOW,COMPANY,30,MAT COMPANY_PAS$,MAT PAS_SPEC$,MAT BLANK$,COMPANY_PAS,15,41,0,1,"Company","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(COMPANY_U)=COMPANY_PAS=DUMMY !:
               let FNZOOM=TRUE
99581       let CMDKEY(0) !:
            return 
99584 ! 
99587 _Zoom7_Currency: ! ***** Currency
99590       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS_SIMPLE(WINDOW,CURRENCY,15,MAT CURRENCY_PAS$,MAT PAS_SPEC$,MAT BLANK$,CURRENCY_PAS,3,41,0,1,"Currencies","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(CURRENCY_CODE_U)=CURRENCY_PAS=DUMMY !:
               let FNZOOM=TRUE
99593       let CMDKEY(0) !:
            return 
99596 ! 
99599 _Zoom7_Juris: ! ***** Zoom On Tax Jurisdiction
99602       mat PAS_SPEC$(1) = (NULL$) !:
            let DUMMY$=FNPAS_CASE$(WINDEX,TAXMAST_,TAXMAST,STR$(F(COMPANY_U)),FORM$(TAXMAST_),MAT _TAX$,MAT _TAX,MAT TAX_KEY$,MAT TAX_PAS$,MAT PAS_SPEC$,MAT BLANK$,TAX_CURRENT :=1,12,37,0,1,25,NULL$,"        H ",NULL$,NULL$,"Select a Tax Jurisdiction",MAT WAIT) !:
            mat TAX_KEY$(1)=(NULL$) !:
            mat TAX_PAS$(1)=(NULL$)
99605       if CMDKEY><9 then !:
               let F(TAX_JURIS_U)=VAL((DUMMY$)(2:4)) !:
               let TAX_PAS=DUMMY !:
               let FNZOOM = TRUE
99608       let CMDKEY(0) !:
            return 
99609 ! 
99610 _Zoom7_Carrier: ! *****
99611       mat COMCAR_PAS$(1)=(NULL$) !:
            mat COMCAR_KEY$(1)=(NULL$) !:
            mat COMCAR_SPEC$(1)=(NULL$)
99613       let CARR_ZOOM_HEADINGS$=SREP$("^Carrier^Description            ^Comm ^EQ ^TM"&NORMAL$,1,"^",ULHL$) !:
            let CARRIER_TYPE=CARRIER_U
99615       let WORK$=FNPAS_CASE$(WINDEX,CARRIER_,CARRIER,F$(CARRIER_U),FORM$(CARRIER_),MAT CARRIER$,MAT CARRIER,MAT COMCAR_KEY$,MAT COMCAR_PAS$,MAT COMCAR_SPEC$,MAT BLANK$,COMCAR_CURRENT:=1,2,20,20,1,50,NULL$,"        H ",CARR_ZOOM_HEADINGS$,NULL$,"Select a Carrier Code",MAT WAIT)
99617       if CMDKEY ~= 9 then 
99619          let F$(CARRIER_U)=COMCAR_PAS$(COMCAR_CURRENT)(1:4) !:
               let F$(COMM_CODE_U)=COMCAR_PAS$(COMCAR_CURRENT)(33:36)
99623       end if 
99625       mat CARRIER$=(NULL$) !:
            mat CARRIER=(0)
99627       let FNZOOM=TRUE !:
            return 
99635 ! 
99638 _Zoom8: ! ***** Blanket Order Zooms
99641       on FIELD gosub _Zoom8_Part,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_Zoom8_Container,_Zoom8_Cum,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_No_Zoom,_Zoom8_Salesman !:
            return 
99644 ! 
99647 _Zoom8_Part: ! ***** Zoom On Inventory Part
99650       mat INVT$(1)=(NULL$) !:
            mat INVT_KEY$(1) = (NULL$) !:
            mat INVT_SPEC$(1) = (NULL$)
99653       if (_ZOOM_WORK:=(POS(F$(PART_B),"?") > 0)) then !:
               let WORK$=(STR$(SHIPPERH(COMPANY_SH))&SREP$(F$(PART_B),1,"?",""))(1:9)  !Alternate !:
            else !:
               let WORK$=STR$(SHIPPERH(COMPANY_SH))&F$(PART_B)  !Standard key
99656       let DUMMY$=FNPAS_FM_CASE$(WINDEX,INVT_SGN,MAT INVT_KEY$,MAT INVT$,MAT INVT_SPEC$,MAT BLANK$,CURRENT_INVT:= 1,5,2,10,1,51,"Parts",SREP$(RPAD$("\Number         \Rev \Description",50),1,"\",ULHL$),NULL$,NULL$,INVENT_+.1,INVENT,INVENT3*_ZOOM_WORK,FORM$(INVENT_),MAT INV$,MAT INV,SCREENSI,"INVENTOR",_INVROW,_INVCOLUMN,_INVROWS,_INVCOLUMNS,MAT INVW$,MAT INVSPEC$,MAT DUMBGS$,MAT DUMUS$,MAT INVH$,MAT INV_MASK$,WORK$,MAT FUNCTIONS$,PRINTER,CLASS,COMPANY$,MAT HEADING$,MAT PAGE,MAT AUDIT,MAT WAIT) !:
            if GUI_MODE then close #WINDEX: 
99659       if CMDKEY><9 then 
99662          if NOT _ZOOM_WORK then !:
                  let F$(PART_B) = DUMMY$(2:16) !:
               else !:
                  let F$(PART_B) = INVT$(CURRENT_INVT)(1:15)
99665          let WORK$=STR$(SHIPPERH(COMPANY_SH))&RPAD$(F$(PART_B),15)&RPAD$(F$(REV_B),4) !:
               let FNZOOM = TRUE
99668          if FNREAD_FILE(-INVENT,FORM$(INVENT_),WORK$,0,MAT INV$,MAT INV,INVENT_) then !:
                  let FNXREF_FIELDS(BLANKETL_+.1,MAT F$,MAT F) !:
                  let OLDPART$=WORK$ !:
               else !:
                  let F$(PART_B) = NULL$
99671       end if 
99674       let CMDKEY(0) !:
            return 
99677 ! 
99680 _Zoom8_Cum: ! ***** Zoom On Cum Type
99683       let DUMMY=FNPAS(WINDOW,MAT CUM_TYPE$,MAT CUM_TYPE_PAS$,MAT BLANK$,1,2,24,8,1,54,"Accum Update Method","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(CUM_TYPE_B)="ABFGIJ"(DUMMY:DUMMY) !:
               let FNZOOM=TRUE
99686       let CMDKEY(0) !:
            return 
99689 ! 
99692 _Zoom8_Salesman: ! ***** Zoom On Salesman Number
99695       mat PAS_SPEC$(1)=(NULL$) !:
            let SALESMAN_PAS=MAX(1,SALESMAN_PAS) !:
            let DUMMY=FNPAS(WINDOW,MAT SALES_CODE$,MAT PAS_SPEC$,MAT BLANK$,SALESMAN_PAS,2,37,0,1,32,"Salesmen","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(SALESMAN_B)=VAL(SALESMAN$(DUMMY)) !:
               let SALESMAN_PAS=DUMMY !:
               let FNZOOM=TRUE
99698       let CMDKEY(0) !:
            return 
99701 ! 
99704 _Zoom8_Container: ! ***** Zoom On Container Code
99707       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT CONTAIN_CODE$,MAT PAS_SPEC$,MAT BLANK$,1,2,45,0,1,32,"Container Codes","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(CONTAINER_B)=CONT$(DUMMY) !:
               let FNZOOM=TRUE
99710       let CMDKEY(0) !:
            return 
99713 ! 
99716 _Zoom18: ! ***** Zoom For Lot Numbers
99719       on (REM(FIELD,2)==1) gosub _Zoom18_Lot !:
            return 
99722 ! 
99725 _Zoom18_Lot: ! ***** Zoom On Lot Number
99728       mat PAS_SPEC$(1) = (NULL$) !:
            let DUMMY$=FNPAS_CASE$(WINDEX,LOTNO_,LOTNO,RPAD$(SHIPPERL$(PART_SL),15)&RPAD$(SHIPPERL$(REV_SL),4),FORM$(LOTNO_),MAT LOTNO$,MAT LOTNO,MAT LOT_KEY$,MAT LOT_PAS$,MAT PAS_SPEC$,MAT BLANK$,LOT_CURRENT :=1,3,29,0,1,42,"Lot No. for Part "&SHIPPERL$(PART_SL),"        H ",SREP$("^Lot Number     ^Heat No.^Produced^ On Hand"&NORMAL$,1,"^",ULHL$),NULL$,"Select a Lot Number",MAT WAIT) !:
            let DUMMY$=LOT_PAS$(LOT_CURRENT) !:
            mat LOT_KEY$(1)=(NULL$) !:
            mat LOT_PAS$(1)=(NULL$)
99731       if CMDKEY><9 then !:
               let F$((FIELD+1)/2)=DUMMY$(1:15) !:
               let FNZOOM = TRUE
99734       let CMDKEY(0) !:
            return 
99737 ! 
99740 _Zoom25: ! ***** Zoom For Standard Comment
99743       on (FIELD == 2) gosub _Zoom25_Comment !:
            return 
99746 ! 
99749 _Zoom25_Comment: ! ***** Standard Comment
99752       if F$(PART_SL)><"T" then !:
               gosub _No_Zoom !:
               return 
99755       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY$=FNPAS_SIMPLE$(WINDOW,COMMENT,73,NULL$,MAT COMMENT_PAS$,MAT PAS_SPEC$,MAT BLANK$,COMMENT_PAS,5,4,9,1,"Standard Comments","        H ","Code "&CHR$(5)&"Desc.",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F$(DESC_SL)=DUMMY$ !:
               let COMMENT_PAS=DUMMY !:
               let FNZOOM=TRUE
99758       let CMDKEY(0) !:
            return 
99760 ! 
99762 _Zoom29: ! ***** Zoom On Detail Additional Data Screen
99764       on (FIELD == 13) gosub _Zoom29_Account !:
            on (FIELD == 15) gosub _Zoom29_Class !:
            on (FIELD == 17) gosub _Zoom29_Uom !:
            on (FIELD == 18) gosub _Zoom29_Commod !:
            on (FIELD == 23) gosub _Zoom29_Salesman !:
            on (FIELD == 24) gosub _Zoom29_Clause !:
            return 
99766 ! 
99768 _Zoom29_Account: ! ***** Zoom On G/L Account
99770       let WORK$=RPT$("",37)&RPT$("",32)&RPT$("",37)  !Frame !:
            let WORK$(1:1)="" !:
            let WORK$(37:37)="" !:
            let WORK$(41:41)=WORK$(43:43)=WORK$(53:53)="" !:
            let WORK$(63:63)=WORK$(65:65)="" !:
            let WORK$(70:70)="" !:
            let WORK$(106:106)=""
99772       mat PAS_SPEC$(1)=(NULL$) !:
            let FNZOOM=FNGL_ACCOUNT(F(CREDIT_SL),STR$(F(COMPANY_SL)),2,2,18,1,WORK$) !:
            let CMDKEY(0) !:
            return 
99774 ! 
99776 _Zoom29_Class: ! ***** Zoom On Product Class
99778       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY$=FNPAS_SIMPLE$(WINDOW,PRODCLAS,27,NULL$,MAT PRODCLAS_PAS$,MAT PAS_SPEC$,MAT BLANK$,PRODCLAS_PAS:=1,3,3,0,1,"Product Class","        H ",NULL$,NULL$,NULL$,MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F(CLASS_SL)=VAL(DUMMY$) !:
               let FNZOOM=TRUE
99780       let CMDKEY(0) !:
            return 
99782 ! 
99784 _Zoom29_Uom: ! ***** Zoom On Unit Of Measure
99786       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT UOM_CODE$,MAT PAS_SPEC$,MAT BLANK$,UOM_PAS:=1,2,2,0,1,13,"Units of Measure","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F$(UM_SL)=UM$(DUMMY) !:
               let FNZOOM=TRUE
99788       let CMDKEY(0) !:
            return 
99790 ! 
99792 _Zoom29_Commod: ! ***** Zoom On Commodity Code
99794       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDOW,MAT COMMOD_CODE$,MAT PAS_SPEC$,MAT BLANK$,COMMOD_PAS:=1,2,2,0,1,40,"Commodity Codes","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY~=9 then !:
               let F$(COMMOD_SL)=COMMODITY$(DUMMY) !:
               let FNZOOM=TRUE
99796       let CMDKEY(0) !:
            return 
99798 ! 
99800 _Zoom29_Salesman: ! ***** Zoom On Salesman
99802       mat PAS_SPEC$(1)=(NULL$) !:
            let SALESMAN_PAS=MAX(1,SALESMAN_PAS) !:
            let DUMMY=FNPAS(WINDOW,MAT SALES_CODE$,MAT PAS_SPEC$,MAT BLANK$,SALESMAN_PAS,2,2,0,1,32,"Salesmen","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then !:
               let F(SALESMAN_SL)=VAL(SALESMAN$(DUMMY)) !:
               let FNCOMMISSION(MAT F$,MAT F) !:
               let SALESMAN_PAS=DUMMY !:
               let FNZOOM=TRUE
99804       let CMDKEY(0) !:
            return 
99806 ! 
99808 _Zoom29_Clause: ! ***** Clause
99810       if SHIPPERH$(COMMUN_SH)(1:2)="CH" then 
99812          mat PAS_SPEC$(1)=(NULL$) !:
               let CLAUSE_PAS=MAX(1,SRCH(MAT CLAUSE_SRCH$,RPAD$(F$(CLAUSE_SL),4))) !:
               let DUMMY=FNPAS(WINDOW,MAT CLAUSE_LST$,MAT PAS_SPEC$,MAT BLANK$,CLAUSE_PAS,5,2,10,3,24,"Clauses","        H ",NULL$,"³ó",MAT WAIT) !:
               if CMDKEY><9 then !:
                  let F$(CLAUSE_SL)=CLAUSE_LST$(DUMMY)(1:4) !:
                  let CLAUSE_PAS=DUMMY !:
                  let FNZOOM=TRUE
99814          let CMDKEY(0)
99816       end if 
99818       return 
99820 ! 
99822 _Zoom28: ! ***** Zoom On Shipper Header Additional Fields
99824       on FIELD==3 gosub _Zoom28_Locqual !:
            return 
99826 ! 
99828 _Zoom28_Locqual: ! ***** Display Message
99829       if POS("CA CH FD FX",SHIPPERH$(33)(1:2)) then !:
               mat LOCQUAL$(2) = LOC2$ !:
               mat LOC_QUAL$(2) !:
               let LOC_QUAL$(1)=LOCQUAL$(1)(1:2) !:
               let LOC_QUAL$(2)=LOCQUAL$(2)(1:2)
99830       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDEX,MAT LOCQUAL$,MAT PAS_SPEC$,MAT PAS_H$,1,8,5,0,1,19,"Location Ids","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY<>9 then !:
               let F$(LOC_QUAL_SH)=LOCQUAL$(DUMMY)(1:2) !:
               let FNZOOM=TRUE !:
            else !:
               let CMDKEY(0)
99832       return 
99834 ! 
99836 _Zoom32: ! ***** Zoom On Edifact Data
99838       on FIELD gosub _Zoom32_Reason_Code,_Zoom32_Respon_Code,_No_Zoom,_No_Zoom,_Zoom1_Dock !:
            return 
99840 ! 
99842 _Zoom32_Reason_Code: ! ***** Display Message
99844       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDEX,MAT EDIFACT_REASON$,MAT PAS_SPEC$,MAT PAS_H$,MAX(1,SRCH(EDIFACT_REASON$,F$(EXCESS_REASON_SH))),3,9,0,1,62,"Excess Reason Code","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY<>9 then !:
               let F$(EXCESS_REASON_SH)=EDIFACT_REASON$(DUMMY)(1:1) !:
               let FNZOOM=TRUE !:
            else !:
               let CMDKEY(0)
99846       return 
99848 ! 
99850 _Zoom32_Respon_Code: ! ***** Display Message
99852       mat PAS_SPEC$(1)=(NULL$) !:
            let DUMMY=FNPAS(WINDEX,MAT EDIFACT_RESPON$,MAT PAS_SPEC$,MAT PAS_H$,MAX(1,SRCH(EDIFACT_RESPON$,F$(RESPON_SH))),6,19,0,1,42,"Excess Responsibility","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY<>9 then !:
               let F$(RESPON_SH)=EDIFACT_RESPON$(DUMMY)(1:1) !:
               let FNZOOM=TRUE !:
            else !:
               let CMDKEY(0)
99854       return 
99855 ! 
99856 _Zoom_Edi: ! ***** Zoom On Edi Info
99857 !         Let Fnblurb(Null$) !:
            on FIELD gosub _Zoomedi_Source_Code,_Zoomedi_Document_Number,_Zoomedi_Document_Lin !:
            !         Let fnblurb("This field cannot be expanded.") !:
            return 
99858 ! 
99859 _Zoomedi_Source_Code: ! ***** Zoom On Source Code
99860       let DUMMY=FNPAS(WINDOW,MAT EDIDOC_SOURCE$,MAT INVOICEPANDS$,MAT BLANK$,MAX(POS(EDIDOC_LEGEND$,F$(EDI_SOURCE_SL)),1),2,46,7,1,29,"EDI Source","        H ",NULL$,NULL$,MAT WAIT) !:
            if CMDKEY><9 then 
99861          if EDIDOC_SOURCE$(DUMMY)(1:1)<>F$(EDI_SOURCE_SL) then !:
                  let F$(EDI_SOURCE_SL)=EDIDOC_SOURCE$(DUMMY)(1:1) !:
                  let F$(EDI_DOC_SL)=NULL$
99862          let FNZOOM=TRUE !:
               let EDI_CURSOR=2 !:
            end if 
99863       let CMDKEY(0) !:
            return 
99864 ! 
99865 _Zoomedi_Document_Number: ! ***** Zoom On Edi Doc Num
99866       close #EDIDOC_CHANNEL: ioerr Ignore
99867       if TRIM$(F$(EDI_SOURCE_SL))<>NULL$ AND (EDI_FILE_SUB:=POS(EDIDOC_LEGEND$,F$(EDI_SOURCE_SL)))>0 then 
99868          let EDIDOC_HEADING$=SREP$("^Partner ^Document #      ^    Date ^ Time",1,"^",ULHL$)&NORMAL$
99869          mat EDIDOC_DATA$=(NULL$) !:
               mat EDIDOC_DATA=(0) !:
               mat EDIDOC_KEY$(1)=(NULL$) !:
               mat EDIDOC_PAS$(1)=(NULL$) !:
               close #EDIDOC_CHANNEL: ioerr Ignore !:
               open #EDIDOC_CHANNEL: "name="&EDIDOC_FILE$(EDI_FILE_SUB)&"/cod,kfname="&EDIDOC_FILE$(EDI_FILE_SUB)&".ky2/cod,shri",internal,input,keyed 
99870          let WORK$=FNPAS_CASE$(WINDEX,EDIDOC_,EDIDOC_CHANNEL,F$(CUSTOMER_SL)(1:2),FORM$(EDI_),MAT EDIDOC_DATA$,MAT EDIDOC_DATA,MAT EDIDOC_KEY$,MAT EDIDOC_PAS$,MAT EDIDOC_SPEC$,MAT BLANK$,EDIDOC_CURRENT:=1,2,20,10,1,41,EDIDOC_TITLE$(EDI_FILE_SUB),"        H ",EDIDOC_HEADING$,NULL$,"Select a Document",MAT WAIT)
99871          if CMDKEY<>9 then !:
                  let F$(EDI_DOC_SL)=WORK$(1:17) !:
                  let CURFLD(3)
99872          if CMDKEY<>9 AND WORK$=NULL$ then !:
                  let FNMESSAGE(MESSAGE_WIN,5,5,"There are no documents for this customer and document type."," Warning ")
99874       else !:
            let FNMESSAGE(MESSAGE_WIN,5,5,"You must select document type before expanding this field."," Warning ")
99875       let FNZOOM=TRUE !:
            let EDI_CURSOR=3 !:
            let CMDKEY(0) !:
            return 
99890 ! 
99891 _No_Zoom: ! ***** Display Message
99892       let FNZOOM=FALSE !:
            let FNBLURB("This field cannot be expanded.") !:
            return 
99893 ! 
99894 _Exit_Zoom: ! ***** Exit
99895    loop 
99896    if GUI_MODE then !:
            let WINDEX=WINDEX_HOLD
99897 _End_Zoom: fnend 
99900 ! 
99902 Trap: ! ***** Error Processing    !:
      ! Copyright 1987 - 2002 Application Development Systems !:
      on error goto _Err_2 !:
      ! 
99905 if ERR = 5 then ! Help key pressed !:
         let HELP$("HELP_KEYWORD") !:
         on error goto Trap !:
         retry  !:
         ! 
99910 dim _OPTION$(5)*20, _FLD_SPEC$(5)*30, _LINPUT$*800, __USR$*80
99915 let _ERR$ = CNVRT$("pic(####)",ERR)   !Save system variables !:
      let _LINE$ = STR$(LINE) !:
      let _CNT$ = STR$(CNT) !:
      mat _OPTION$(5) !:
      let _COL = 12 !:
      print BELL; !:
      let CURFLD(3) !:
      ! 
99920 execute "Status >CND\ERROR[WSID]"     !Update error log !:
      execute "List "& _LINE$ &" "& _LINE$ &" >>CND\ERROR[WSID]" error 99925
99925 open #121: "Name= CND\ERROR[WSID]", display, output  !:
      print #121: TAB(2);TAB(1);"Variable= ";VARIABLE$;"   Last Good Element= ";_CNT$;"   File=";FILENUM;"  ";FILE$(FILENUM);TAB(1) !:
      close #121: !:
      if EXISTS("CND\ERROR.LOG") then !:
         execute "Type CND\ERROR[WSID] >>CND\ERROR.LOG" !:
         execute "Status Stacks >>CND\ERROR.LOG" !:
         open #121: "Name=CND\ERROR.LOG", display, output  !:
         print #121: RPT$("=",60) !:
         close #121: 
99926 if POS("0061_4148",_ERR$) then 
99927    execute "Status locks >CND\ERTMP[WSID]" !:
         open #121: "NAME=CND\ERTMP[WSID]",display,input  !:
         do WHILE __USR$(1:1)<>"-" !:
            linput #121: __USR$ eof 99929 !:
         loop 
99928    do  !:
            linput #121: __USR$ error 99929 !:
         loop WHILE (__USR$(1:1)<>"O") OR (LTRM$(__USR$(11:14))==LTRM$(WSID$))
99929    let __USR$=__USR$(26:36) !:
         close #121: !:
      end if 
99930 let _OPTION$(5)=" Continue "          !Setup window !:
      let _OPTION$(4)=" Goto Menu (Abort) " !:
      let _OPTION$(3)=" Retry " !:
      let _OPTION$(2)=" Error Info " !:
      let _OPTION$(1)=" Technical Info " !:
      for _CURFLD = 1 to 5 !:
         let _FLD_SPEC$(_CURFLD) = "3,"&STR$(_COL)&",C ,AEN/HRGB:R" !:
         let _COL = _COL+LEN(_OPTION$(_CURFLD)) !:
      next _CURFLD
99935 _Select: ! ***** Select Action To Be Taken !:
      open #121: "SROW=21,SCOL=2,EROW=23,ECOL=79,BORDER=D/RGB:R,N=R/HRGB:R",display,outin  !:
      print #121: NEWPAGE !:
      print #121,fields "1,22,C 60,/HRGB:R": "Error "& _ERR$ &" occurred at line "& _LINE$ !:
      if NOT POS("0002_0004_0058_0726",_ERR$) then !:
         mat _OPTION$(4)
99937 if POS("0061_4148",_ERR$) then !:
         print #121, fields "2,16,C 50,/HRGB:R": "Sharing Violation encountered with user "& __USR$
99940 if KSTAT$ > "" then goto 99940        !Empty typeahead buffer
99945 print #121, fields "3,3,C ,/HRGB:R": "Select: " !:
      rinput #121, select MAT _FLD_SPEC$, attr "N/R:RGB": MAT _OPTION$ !:
      on CMDKEY > 0 goto 99945 !:
      on CURFLD goto _Techinfo, 99960 !:
      close #121: !:
      on error goto Trap !:
      on CURFLD -2 goto 99955, 99950 !:
      continue 
99950 chain "Menu" !:
      ! 
99955 retry 
99960 let HELP$("ERR"& _ERR$ &",WBCMD.WBH") !:
      let CURFLD(CURFLD) !:
      goto 99945 !:
      ! 
99965 _Techinfo: open #122: "SROW=1,SCOL=1,EROW=24,ECOL=80,N=/HRGB:HB",display,outin  !:
      print #122: NEWPAGE
99970 execute "TYPE CND\ERROR[WSID]"
99975 print #122: TAB(20);TAB(10);"Press any key to Exit..." !:
      let KSTAT$(1) !:
      close #122: !:
      let CURFLD(CURFLD) !:
      goto 99945 !:
      ! 
99980 _Err_2: ! ***** Error During Error Processing  !:
      print #WINDOW,fields "1,10,C 60,/HRGB:RB": "     Error "& _ERR$ &" occurred at line "& _LINE$ !:
      print #WINDOW,fields "2,10,C 60,B/HRGB:RB": "     Error "& STR$(ERR) &" also occurred at line "& STR$(LINE) !:
      print #WINDOW,fields "3,10,C 60,/HRGB:RB": "     Please call your Dealer for assistance" !:
      pause : execute "Clear Proc"
