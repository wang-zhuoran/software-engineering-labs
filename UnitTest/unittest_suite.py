import random
import unittest
from TestCalc import TestCalcFunctions


class TestSequenceFunctions(unittest.TestCase):
    def setUp(self):
        self.seq = list(range(10))

    def tearDown(self):
        pass

    def test_choice(self):
        # chose an element from seq randomly
        element = random.choice(self.seq)
        # check element is truly in the sequence
        self.assertTrue(element in self.seq)

    def test_sample(self):
        # if codes raise exception
        with self.assertRaises(ValueError):
            random.sample(self.seq, 20)

        for element in random.sample(self.seq, 5):
            self.assertTrue(element in self.seq)


class TestDictValueFormatFunctions(unittest.TestCase):
    def setUp(self):
        self.seq = list(range(10))

    def tearDown(self):
        pass

    def test_shuffle(self):
        # shuffle sequence
        random.shuffle(self.seq)
        self.seq.sort()
        self.assertEqual(self.seq, list(range(10)))
        # check TypeError exception
        self.assertRaises(TypeError, random.shuffle, (1, 2, 3))


if __name__ == '__main__':
    # get all test methods start with ‘test’ and return a suite
    suite1 = unittest.TestLoader().loadTestsFromTestCase(TestSequenceFunctions)
    # please fix another two suite, suite2 of TestCalcFunctions and suite3 of TestDictValueFormatFunctions
    suite2 = unittest.TestLoader().loadTestsFromTestCase(TestCalcFunctions)
    # put more test class into suite
    suite3 = unittest.TestLoader().loadTestsFromTestCase(TestDictValueFormatFunctions)
    # you can change suites’ order, like [suite1, suite2, suite3]
    suite = unittest.TestSuite([suite2, suite1, suite3])
    # set verbosity = 2 you could get more detailed information
    unittest.TextTestRunner(verbosity=2).run(suite)
