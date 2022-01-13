

def equationSum(N):

    sum = 0
    for X in range(1,N+1):
        sum=sum + ((((X+1)*(X+1))-((3*X)+1))+X)
    return sum


if __name__ == "__main__":
    
    data = equationSum(2)
    print(data)