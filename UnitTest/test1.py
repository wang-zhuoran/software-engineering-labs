import unittest, random

# Test Class
class MyClass(object):

    @classmethod
    def sum(self, a, b):
        return a + b

    @classmethod
    def div(self, a, b):
        return a / b

    @classmethod
    def retrun_None(self):
        return None


# Unit Test Class
class MyTest(unittest.TestCase):
    # assertEqual()
    def test_assertEqual(self):
        # test if a+b equals sum or not
        try:
            a, b = 1, 2
            sum = 3
            self.assertEqual(a + b, sum, 'assert failed!，%s + %s != %s' % (a, b, sum))
        except AssertionError as e:
            print(e)

    # assertNotEqual()
    def test_assertNotEqual(self):
        # fix missing three lines of codes below ‘try’, test if b-a equals res or not
        try:
            a, b = 1, 2
            res = 0
            self.assertNotEqual((b - a), (res), 'assert failed!，%s - %s != %s' % (b, a, res))
        except AssertionError as e:
            print(e)

    # assertTrue()
    def test_assertTrue(self):
        try:
            self.assertTrue(1 == 1, "False expression")
        except AssertionError as e:
            print(e)

    # assertFalse()
    def test_assertFalse(self):
        # fix missing codes below ‘try’, only a line of codes needed
        try:
            self.assertFalse(1 != 1, "False expression")
        except AssertionError as e:
            print(e)

    # assertIs()
    def test_assertIs(self):
        # test a and b are totally same
        try:
            a = 12
            b = a
            self.assertIs(a, b, "%s and %s are not same" % (a, b))
        except AssertionError as e:
            print(e)

    # assertIsInstance()
    def test_assertIsInstance(self):
        # fix missing codes below ‘y=object’ to test type(x) != y, only a line of codes needed
        try:
            x = MyClass
            y = object
            self.assertIsInstance(type(x), y, "Not an Instance")
        except AssertionError as e:
            print(e)

if __name__ == '__main__':
    # run unittest
    unittest.main()


