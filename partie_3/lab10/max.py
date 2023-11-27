def max(tab):
    if not tab:
        return None
    
    max = tab[0]

    for element in tab:
        if element > max:
            max = element

    return max