import sys
asset = int(sys.stdin.readline())

stock = list(map(int, sys.stdin.readline().split()))

jh_cash, jh_stock = asset, 0
sm_cash, sm_stock = asset, 0
up_count, down_count = 0, 0

for i in range(len(stock)):
    #준현
    if jh_cash >= stock[i]:
        jh_stock += jh_cash // stock[i]
        jh_cash %= stock[i]
    
    #성민
    if i > 0:
        if stock[i] < stock[i - 1]:
            down_count += 1
            up_count = 0
        elif stock[i] > stock[i - 1]:
            up_count += 1
            down_count = 0
        else:
            up_count = 0
            down_count = 0
            
        if down_count >= 3:
            sm_stock += sm_cash // stock[i]
            sm_cash %= stock[i]
        if up_count >= 3:
            sm_cash += stock[i] * sm_stock
            sm_stock = 0

jh_final = (jh_stock * stock[-1]) + jh_cash
sm_final = (sm_stock * stock[-1]) + sm_cash

if jh_final == sm_final:
    print("SAMESAME")

elif jh_final > sm_final:
    print("BNP")

else:
    print("TIMING")    
    
