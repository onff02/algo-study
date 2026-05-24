def solution(line):
    points = set()

    # 1. 교점 구하기
    for i in range(len(line)):
        for j in range(i + 1, len(line)):
            A, B, E = line[i]
            C, D, F = line[j]

            denom = A * D - B * C

            # 평행 또는 일치
            if denom == 0:
                continue

            x = (B * F - E * D) / denom
            y = (E * C - A * F) / denom

            # 정수 좌표만 저장
            if x.is_integer() and y.is_integer():
                points.add((int(x), int(y)))

    # 2. 좌표 범위 구하기
    xs = [x for x, y in points]
    ys = [y for x, y in points]

    min_x = min(xs)
    max_x = max(xs)

    min_y = min(ys)
    max_y = max(ys)

    # 3. 격자판 만들기
    width = max_x - min_x + 1
    height = max_y - min_y + 1

    board = [['.'] * width for _ in range(height)]

    # 4. 별 찍기
    for x, y in points:
        row = max_y - y
        col = x - min_x

        board[row][col] = '*'

    # 5. 문자열 변환
    answer = [''.join(row) for row in board]

    return answer