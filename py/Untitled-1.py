def test(self, *args):
    if len(args) !=0:
        i=args[0]
    if len(args) == 0 or i == -1:
        i = len(self) - 1
    if i >= 0 and i <= len(self) - 1:
        self.pop(i-1)
    else:
        return None
list = [1,2,3,4]
test(list, 3)
print(list)
    
