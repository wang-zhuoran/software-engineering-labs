# encoding=utf-8

import random, sys, unittest


class TestSeqFunctions(unittest.TestCase):
    a = 1

    def setUp(self):
        self.seq = list(range(20))

    @unittest.skip("skipping")  # skip this method anyway
    def test_shuffle(self):
        random.shuffle(self.seq)
        self.seq.sort()
        self.assertEqual(self.seq, list(range(20)))
        self.assertRaises(TypeError, random.shuffle, (1, 2, 3))

    # add a line of annotation that skip this method if a>5
    @unittest.skipIf(a > 5,"skip this method if a>5")
    def test_choice(self):
        element = random.choice(self.seq)
        self.assertTrue(element in self.seq)

    # add a line of annotation that skip if not in linux platform
    @unittest.skipIf(sys.platform!='linux', "Require for linux")
    def test_sample(self):
        with self.assertRaises(ValueError):
            random.sample(self.seq, 20)
        for element in random.sample(self.seq, 5):
            self.assertTrue(element in self.seq)


if __name__ == "__main__":
    # unittest.main()
    suite = unittest.TestLoader().loadTestsFromTestCase(TestSeqFunctions)
    suite = unittest.TestSuite(suite)
    unittest.TextTestRunner(verbosity=2).run(suite)
