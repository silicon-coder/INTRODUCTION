
import random

def guess(x):#defining a function
    random_number= random.randint(1,x) #using a object/method from random library/class random
    guess=0
    while(guess!=random_number):
        guess=int(input(f'guess the number between 1 to {x}:'))#we need output in int format and input text is also given
        if(guess>random_number):
            print('too high go a little low')
        elif(guess<random_number):
            print('too low go a little high')

    print (f'yayyy you guessed it right {random_number} is your number')

guess(10)