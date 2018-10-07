n=input()
if n%400==0:
    print "True"
else:
    if n%4==0 and n%100!=0:
        print "True"
    else:
        print "False"
    
