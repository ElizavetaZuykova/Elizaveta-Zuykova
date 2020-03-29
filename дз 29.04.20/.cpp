расстояние Левенштейна//
     
    declare int v0[n + 1]
    declare int v1[n + 1]
    for i from 0 to n:
        v0[i] = i
    for i from 0 to m-1:
        v1[0] = i + 1
        for j from 0 to n-1:  
            deletionCost := v0[j + 1] + 1
            insertionCost := v1[j] + 1
            if s[i] = t[j]:
                substitutionCost := v0[j]
            else:
                substitutionCost := v0[j] + 1;
            v1[j + 1] := minimum(deletionCost, insertionCost, substitutionCost)
        swap v0 with v1
    return v0[n]
