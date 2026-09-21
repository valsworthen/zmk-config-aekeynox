// QWERTY-Lafayette
// https://qwerty-lafayette.org

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(V)
#define X_REDO  &kp CMD(Y)

#define X_CTL_W &kp LC(W)
#define X_SAVE  &kp CMD(S)
#define X_ALL   &kp CMD(A)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
// ^<>$% @&*'`
#define S_CARET &kp CARET
// Use right alt (RA) to benefit from Kalamine mappings:
// in QWERTY-Lafayette, which is the keyboard setup defined at the software level,
// < and > are produced with RAlt W and RAlt E
#define S_LT    &kp RA(W)
#define S_GT    &kp RA(E)
#define S_DLLR  &kp DLLR
#define S_PRCNT &kp PRCNT
#define S_AT    &kp RA(Y)
#define S_AMPS  &kp AMPS
#define S_STAR  &kp STAR
#define S_SQT   &kp SQT
#define S_GRAVE &kp GRAVE

// second row
// {()}= \+-/"
#define S_LBRC  &kp LBRC
#define S_LPAR  &kp RA(S)
#define S_RPAR  &kp RA(D)
#define S_RBRC  &kp RBRC
#define S_EQUAL &kp EQUAL
#define S_BSLH  &kp BSLH
#define S_PLUS  &kp PLUS
#define S_MINUS &kp MINUS
#define S_FSLH  &kp FSLH
#define S_DQT   &kp DQT

// third row
// ~[]_# |!;:?
#define S_TILDE &kp TILDE
#define S_LBKT  &kp LBKT
#define S_RBKT  &kp RBKT
#define S_UNDER &kp UNDER
#define S_HASH  &kp RA(B)
#define S_PIPE  &kp PIPE
#define S_EXCL  &kp RA(M)
#define S_SEMI  &kp LS(COMMA)
#define S_COLON &kp LS(DOT)
#define S_QMARK &kp QMARK

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &euro

/ {
  behaviors {
    euro: euro {
      compatible = "zmk,behavior-macro";
      #binding-cells = <0>;
      tap-ms = <0>;
      wait-ms = <0>;
      bindings = <&kp O &kp N5>;
    };
  };
};

/**
 * Caps-Word
 */

#define CAPS_WORD_SHIFT_LIST \
    Q  W  E  R  T    Y  U  I  O  P \
    A  S  D  F  G    H  J  K  L \
    Z  X  C  V  B    N  M

#define CAPS_WORD_CONTINUE_LIST SEMI MINUS
