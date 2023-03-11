def set_val(a, b):
    a = b
    return a

def set_val_list(a, b):
    a[0] = b
    return a

hoge = 1
fuga = 2
hogefuga = set_val(hoge, fuga)

print(f'hoge = {hoge}')
print(f'fuga = {fuga}')
print(f'hogefuga = {hogefuga}')

hoge = [1]
fuga = 2
hogefuga = set_val_list(hoge, fuga)

print(f'hoge = {hoge}')
print(f'fuga = {fuga}')
print(f'hogefuga = {hogefuga}')