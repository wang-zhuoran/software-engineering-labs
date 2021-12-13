# encoding=utf-8

import unittest
from Calc import Calc


class MyTest(unittest.TestCase):
    @classmethod
    def setUpClass(self):
        print("init Calc before unittest")
        self.c = Calc()

    # rename the four methods bellow, make sure print queue will be :

    # P.S.: test case must starts with ‘test’
    def test_a_add(self):
        print("run add()")
        self.assertEqual(self.c.add(1, 2, 12), 15, 'test add fail')

    def test_b_sub(self):
        print("run sub()")
        self.assertEqual(self.c.sub(2, 1, 3), -2, 'test sub fail')

    def test_c_mul(self):
        print("run mul()")
        self.assertEqual(Calc.mul(self,2, 3, 5), 30, 'test mul fail')

    def test_d_div(self):
        print("run div()")
        self.assertEqual(Calc.div(self,8, 2, 4), 1, 'test div fail')


if __name__ == '__main__':
    unittest.main()
