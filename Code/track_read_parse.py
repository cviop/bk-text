def getNewData(self):
    try:
        new_data = self.handler.readline().decode(encoding="UTF-8")
    except UnicodeDecodeError:
        print("Couldn't parse new data")
        return None
    if new_data == "\n":
        return None

    parsed = []*24
    parsed = new_data.split(sep=";")