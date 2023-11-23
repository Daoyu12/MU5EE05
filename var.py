def var(tab):
    if not tab:
        return None

    moyenne = sum(tab)/len(tab)

    variance = 0

    for x in tab:
        variance = variance + (x-moyenne)*(x-moyenne)/(len(tab)-1)


    return variance