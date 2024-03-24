#include <string>
#include <vector>
#include <stack>

using namespace std;
// moves는 '열'의 값
int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	stack<int> stack;
	for (int i = 0; i < moves.size(); i++) {
		for (int j = 0;j < board.size();j++) {
			if (board[j][moves[i]-1] != 0) {
				if (!stack.empty() && board[j][moves[i] - 1] == stack.top()) {
					stack.pop();
					answer+=2;
				}
				else 
					stack.push(board[j][moves[i] - 1]);
				board[j][moves[i] - 1] = 0;
				break;
			}
		}
	}
	return answer;
}