import string
import getch

def execute(str:string):

    stack=[]
    dict={}

    for i,x in enumerate(str):
        if (x=='['):
            stack.append(i)
        if (x==']'):
            start=stack.pop()
            dict[start]=i
            dict[i]=start
    # print(dict)

    cells=[0]
    val=0
    y=0

    while(y<len(str)):

        cmd=str[y]

        if(cmd=='>'):
            val=val+1
            # print('>')
            if(val==len(cells)):
                cells.append(0)
        
        if(cmd=='<'):
            # print("<")
            if(val<=0):
                val=0
            else:
                val=val-1

        
        if(cmd=='+'):
            # print("+")
            if(cells[val]<255):
                cells[val]=cells[val]+1
            else:
                cells[val]=0


        if(cmd=='-'):
            # print("-")
            if(cells[val]>0):
                cells[val]=cells[val]-1
            else:
                cells[val]=255

        if(cmd=='[' and cells[val]==0):
            # print("[")
            y=dict[y]
        
        if(cmd==']' and cells[val]!=0):
            # print("]")
            y=dict[y]

        if(cmd=='.'):
            # print(".")
            print(chr(cells[val]),end='')

        if(cmd==','):
            # print(",")
            cells[val]=ord(getch.getch())

        y=y+1


    # print(dict)

def main():
    input1=input()

    input_str=''
    
    inp_arr=['.', ',', '[', ']', '<', '>', '+', '-']

    for i in input1:
        # print(i)
        if(i in inp_arr):
            # print(i)
            input_str=input_str+(i)

    execute(input_str)

    # print(input_str)

if __name__=='__main__':main()