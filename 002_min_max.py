def getMinMax( a, n):
    s = []
    min = a[0];
    max = a[0];
    for i in range(0,n):
        if(a[i] < min):
            min = a[i]
        if(a[i] > max):
            max = a[i]
    s.append(min)
    s.append(max)
    return s