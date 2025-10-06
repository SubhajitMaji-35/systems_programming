

# Python for loop example


def main():


    num = input("Enter a value: ")
    num = int(num)
    # make sure num is not negative
    if num < 0:
        num = -num


    for i in range(num):
        print("%d" % i)


# call the main function:
main()


