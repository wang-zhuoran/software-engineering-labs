class Calc(object):

    def add(self, *d):
        #
        result = 0
        for i in d:
            result += i
        return result

    def mul(self, *d):
        #
        result = 1
        for i in d:
            result = result * i
        return result


    def sub(self, a, *d):
    #
        result = a
        for i in d:
            result = result - i
        return result


    def div(self, a, *d):
    #
        result = a
        for i in d:
            result = result / i
        return result
