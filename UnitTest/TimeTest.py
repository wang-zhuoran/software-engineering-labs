import sys
import time
import unittest
import timeout_decorator

class timeoutTest(unittest.TestCase):
    # set a time decorator(annotation) which will be triggered after 5s’ running
    @timeout_decorator.timeout(5)
    def testtimeout(self):
        print("Start")
        for i in range(1, 10):
            time.sleep(1)
            print("%d seconds have passed" % i)


if __name__ == "__main__":
    unittest.main()
