/*  Chapter 19
    Program 2
    Program to work with fractions - Objective-C version    */

#import <stdio.h>
#import <objc/Ojbect.h>

//------- @interface section -------

@interface Fraction: Object{
    int numerator;
    int denominator;
}
-(void) setNumerator: (int) n;
-(void) setDenominator: (int) d;
-(void) print;

@end

//------- @implementation section -------

@implementation Fraction;

// getters

-(int) numerator{
    return numerator;
}

-(int) denominator{
    return denominator;
}

// setters

-(void) setNumerator: (int) num {
    numerator = num;
}

-(void) setDenominator: (int) denom {
    denominator = denom;
}

// other

-(void) print{
    printf("The value of the fraction is %i/%i\n", numerator, denominator);
}

@end


//------- program section -------

int main(void){

    Fraction *myFract;

    myFract = [Fraction new];

    [myFract setNumerator: 1];
    [myFract setDenominator: 3];

    printf("The numerator is %i, and the denominator is%i\n", [myFract numerator], [myFract denominator]);

    [myFract print];

    return 0;
}