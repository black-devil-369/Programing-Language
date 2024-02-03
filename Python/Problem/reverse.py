class NUM:
    def reverse(n):
        rev = 0
        while(n>0):
            ld = n%10
            rev = (rev*10)+ld
            n = n/10
        print(rev)
obj  = NUM()
obj.reverse(897)