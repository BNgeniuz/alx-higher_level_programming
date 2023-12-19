#!/usr/bin/python3
def safe_function(fct, *args):
    import sys
    try:
        output = fct(*args)
        return output
    except Except as errors:
        print("Exception: {}".format(errors), file=sys.stderr)
        return None
