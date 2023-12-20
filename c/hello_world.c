void require(int cond); // external host api describes an equal constraint.
unsigned long long wasm_input(int); // external host api for fetching user inputs.

char* string = "hello-world\0";

void zkmain() {
  int sum = wasm_input(1);
  for (int i = 0; string[i] != '\0'; i++) {
    sum -= 1;
  }
  require(sum == 0);
}