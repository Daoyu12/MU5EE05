def min(tab):
    if not tab:
        return None
    
    min = tab[0]

    for element in tab:
        if element < min:
            min = element

    return min