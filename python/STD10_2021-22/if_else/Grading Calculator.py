math=int(input('please enter the marks for math:'))
science=int(input('please enter the marks for science:'))
hindi=int(input('please enter the marks for hindi:'))
english=int(input('please enter the marks for english:'))
socialscience=int(input('please enter the marks for socialscience:'))
x=(math+english+science+socialscience+hindi)/500*100
print('your percentage are:',x)

if x>=95:
    print('you have score A+ in your examination')
elif x>=90:
    print('you have score A in your examination')
elif x>=80:
    print('you have score B in your examination')
elif x>=70:
    print('you have score C in your examination')
elif x>=60:
    print('you have score D in your examination')
elif x>=50:
    print('you have score E in your examination')
else:
    print('you have failed in your examination')
