#include <stdio.h>


struct _complex {
  float real, imag;
};

typedef struct _complex Complex;


int get_n() {
  int n;
  scanf("%d", &n);

  return n;
}


Complex input_complex() {
  Complex r;
  scanf("%f %f", &r.real, &r.imag);

  return r;
}


void input_n_complex(int n, Complex c[n]) {
  for (int i=0; i<n; i++) {
    c[i] = input_complex();
  }
}


Complex add(Complex a, Complex b) {
  a.real += b.real;
  a.imag += b.imag;

  return a;
}


Complex add_n_complex(int n, Complex c[n]) {
  Complex r = {0, 0};
  for (int i=0; i<n; i++) {
    r.real += c[i].real;
    r.imag += c[i].imag;
  }

  return r;
}


void output(int n, Complex c[n], Complex rs) {
  for (int i=0; i<n; i++) {
    printf("%f + %fi\n", c[i].real, c[i].imag);
  }
  printf("is %f + %fi\n", rs.real, rs.imag);
}


int main() {
  int n = get_n();
  Complex cs[n];

  input_n_complex(n, cs);

  Complex rs = add_n_complex(n, cs);
  output(n, cs, rs);

  return 0;
}