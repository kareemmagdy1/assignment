number=0
sumtotal=0
print("welcome to the 100 game\nthe rules are simple :\n1-choose a number from (1-10)\n2-the player to get the number 100 wins")





char=input("press s to start : ")
while (char!='s'):
    char=input("press s to start : " )
num=int(input("for 1 player write 1 then press enter for 2 players write 2 then press enter key : "))
if (num==1):
    while (sumtotal!=100 | sumtotal>100):
            print("YOUR TURN")
            num1=int(input("choose a number (1-10)"))
            while (num1<=0 | num1>10):
                num1=input("INVALID NUMBER enter a new one (1-10)")
            sumtotal=sumtotal+num1
            print(sumtotal)
            if (sumtotal==100):
                print("YOU WIN")
                break
            print("pc turn")
            if(70-sum>10):
                pc=10
            elif(70-sumtotal<=10 & 70-sumtotal>0):
                pc=70-sumtotal
            elif(78-sumtotal<=10 & 78-sumtotal>0):
                pc=78-sumtotal
            elif(89-sumtotal<=10 & 89-sumtotal>0):
                pc=89-sumtotal
            elif(100-sumtotal<=10):
                pc=100-sumtotal
            sumtotal=sumtotal+pc
            print("sum = ",sumtotal)
            if (sumtotal==100):
                print("PC WINS")
                break
        
elif (num==2):
     while (sumtotal!=100 | sumtotal>100):
             print("FIRST PLAYER TURN")
             num1=int(input("choose a number (1-10)"))
             while (num1<=0 | num1>10):
                num1=input("INVALID NUMBER enter a new one (1-10)")
                sumtotal=sumtotal+num1
                print(sumtotal)
                if (sumtotal==100):
                    print("FIRST PLAYER WINS")
                    break
                print("SECOND PLAYER TURN")
             num1=int(input("choose a number (1-10)"))
             while (num1<=0 | num1>10):
                num1=input("INVALID NUMBER enter a new one (1-10)")
                sumtotal=sumtotal+num1
                print(sumtotal)
                if (sumtotal==100):
                    print("SECOND PLAYER WINS")
                    break
       
else:
    num=input("INVALID NUMBER enter a new one (1-10)")
        
                
            
           
           
             
        
            
            
            
    

    
            
