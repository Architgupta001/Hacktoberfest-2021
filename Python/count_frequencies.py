"""
Run using python count_frequencies.py

Count the frequencies in a list
"""

def freq_count(lst):
    f = dict()
    for each in lst:
        if each in f:
            f[each] = f[each] + 1
        else:
            f[each] = 1

if __name__ == "__main__":
    lst = [1,2,3,3,4,3,6,7,7,7,0,7]
    print(freq_count(lst))
