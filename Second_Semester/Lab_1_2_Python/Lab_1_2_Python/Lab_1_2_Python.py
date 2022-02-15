def inputs():
    str= ' '
    name = input('Enter the name of input - ')
    file = open(name,'w')
    print('Input str -\n'+ 'Press N if you want end file')
    while(str[0]!='N'):
        if str[0]!=' ':
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
    print(word)
    return(word)


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
    file_1 = open(name2,'w')
    file_in= open(name1,'r')
    with file_in as file:
        for line in file:
            longest = longestWord(line)
            file_1.write(longest+'\n')
    return name2






name1 = inputs()
name2 = outputs(name1)
just_word(name2)
