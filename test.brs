form 1*g 1,G 2,N 3,NZ 4 !numeric_form_spec
form pd 8.precision ! float with variable precision
form skip 1, c 4, skip 2,c 3 !skip_form_spec
form pos 100, c 5 !pos_form_spec
form x 5 !x_form_spec
form c, CC, CR 5, CU 6,V 4,VL 4,VU 4  !string_form_spec
form B 1,BL 2,BH 3,PD 7,ZD !internal_form_spec
form 3*"literal", 'literal', `literal` !literal_string_form_spec
form D,S,L !floating_point_form_spec
form PIC(##/##/##), PIC($$$,$$$), PIC($********.**), 2*PIC(---),2*PIC(ZZZZZ-) !pic_form_spec
00010 FORM 3*(C 10,C 1,C 4)
00020 FORM A*C 5,C 10
00020 FORM "TYPE A", C 10
00510 nameform2: form pos 16,c 30,x 9,c 6,x 16,c 7,x 24,c 2,x 16,c 8, skip 3
00600 T1: FORM SKIP