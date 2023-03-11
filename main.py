def get_object_id(a):
    return id(a)

var = "hello world!"
print(id(var))
print(get_object_id(var))