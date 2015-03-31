%{
#include "cmd.tab.h"
%}

%%
"ls"        { return LS;    }
"mkdir"     { return MKDIR; }
"cd"        { return CD;    }
"exit"      { return EXIT;  }
"pwd"       { return PWD;   }
".."        { return PARENT;}
(?i:raise)  { return RAISE; }
(?i:fold)   { return FOLD;  }
(?i:check)  { return CHECK; }
"+"         { return ADD;   }
"-"         { return SUB;   }
"*"         { return MUL;   }
"/"         { return DIV;   }
"("         { return OP;    }
")"         { return CP;    }
\n          { return EOL;   }
[0-9]+      { yylval = atoi(yytext); return NUMBER; }
0x[a-f0-9]+ { yylval = strtol(yytext, NULL, 16); return NUMBER; }
.
%%
