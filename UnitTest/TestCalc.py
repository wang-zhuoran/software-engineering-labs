import unittest
import random
from Calc import Calc

class TestCalcFunctions(unittest.TestCase):

    def setUp(self):
        self.c = Calc()
        print("setup completed!")

    def test_sum(self):
        self.assertTrue(self.c.add(1, 2, 3, 4) == 10)

    def test_sub(self):
    # fix a line of codes to test c.sub(self, a, *b) method
        self.assertTrue(self.c.sub(4, 1, 2, 3) == -2)
    def test_mul(self):
    # fix a line of codes to test c.mul(self, *b) method
        self.assertTrue(self.c.mul(3, 4) == 12)
    def test_div(self):
    # fix a line of codes to test c.div(self, a, *b) method
        self.assertTrue(self.c.div(4, 2) == 2)
    def tearDown(self):
        print("test completed!")

    def tearDown(self):
        print("tearDown completed")

if __name__ == '__main__':
    unittest.main()


