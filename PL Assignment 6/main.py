def calcAddress(base, row_lb, col_lb, row_ub, col_up, element_size):

    print(
        "For array a[",
        row_lb,
        ":",
        row_ub,
        ",",
        col_lb,
        ":",
        col_up,
        "] with element size ",
        element_size,
    )

    # location(a[i, j]) = address of a[row_lb, col_lb] - (((row_lb * n) + col_lb) * element_size) + (((i * n) + j) * element_size)
    n = col_up - col_lb + 1

    for i in range(row_lb, row_ub + 1):  # 1,-1
        for j in range(col_lb, col_up + 1):

            field1 = ((row_lb * n) + col_lb) * element_size  # (-1*3)-1=-4*8

            field2 = ((i * n) + j) * element_size  # -8
            # Formula
            location = base - field1 + field2  # 100+32-8=124

            print("a[", i, ",", j, "] address = ", location)
            # print(field1,field2)


def main():

    print("calcAddress(1200,0,0,2,2,1)")
    calcAddress(1200, 0, 0, 2, 2, 1)

    print("calcAddress(100, 1,1,2,2,2);")
    calcAddress(100, 1, 1, 2, 2, 2)

    print("calcAddress(100, 2, 3, 4,5,4);")
    calcAddress(100, 2, 3, 4, 5, 4)

    print("calcAddress(100, -1, -1, 1, 2, 8);")
    calcAddress(100, -1, -1, 1, 2, 8)


if __name__ == "__main__":
    main()
