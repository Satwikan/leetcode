class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        num1 = num1.split('+')
        num2 = num2.split('+')
        r1 = int(num1[0])
        r2 = int(num2[0])
        i1 = int(num1[1][:-1])
        i2 = int(num2[1][:-1])
        real = r1*r2 - i1*i2;
        img = r1*i2 + r2*i1;
        
        return str(real) + '+' + str(img) + 'i'