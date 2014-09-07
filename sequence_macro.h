'***********************************************
' function
'***********************************************
!definelong func(a,b,message)
	a -> b : message
	activate b
	a <-- b
	deactivate b
!enddefinelong

!definelong func_begin(a,b,message)
	a -> b : message
	activate b
!enddefinelong

!definelong func_end(a,b)
	a <-- b
	deactivate b
!enddefinelong

'***********************************************
' local_func
'***********************************************
!definelong local_func(a,message)
	a -> a : message
	activate a
	deactivate a
!enddefinelong

!definelong local_func_begin(a,message)
	a -> a : message
	activate a
!enddefinelong

!definelong local_func_end(a)
	deactivate a
!enddefinelong

'***********************************************
' message
'***********************************************
!definelong send_message(x,y,message)
	x -[#3333ff]>> y : <b> <i> message </i> </b>
!enddefinelong
