
def inputs():
    name = input('Enter the name of input - ')
    name+='.txt'
    file = open(name,'w')
    print('Input str -\n'+ 'Press Ctrl + W if you want end file')
    str = input()
    while(str!='\x17'):
        file.write(str+'\n')
        str = input()
    return name
    


def longestWord(str):
    a=str.split()
    c=0
    word=''
    for i in range(len(a)): 
        if len(a[i])>c: 
            c=len(a[i])
            word=a[i]
    return(word)

def display_data( file_name):
    with open(file_name) as file:
        for line in file:
            print(line, end = '')
    print()

def just_word(name1):
    file_1=open(name1,'a')
    file_in= open(name1,'r')
    count = 0
    for line in file_in:
        a=line.split()
        for i in range(len(a)):
            count +=1
    file_1.write(str(count))

def outputs(name1):
    name2=input('Enter output file - ')
    name2+='.txt'
    file_1 = open(name2,'w')
    file_in= open(name1,'r')
    with file_in as file:
        for line in file:
            longest = longestWord(line)
            file_1.write(longest+'\n')
    return name2