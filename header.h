// Type booléen
typedef enum{FALSE, TRUE} boolean;
// Les mots clés de notre langage
const char* keyword_token[] = {"program","const","var","Begin", "end", "then", "Do", "read", "write","if","else", "for", "while", "int", "float", "string"};
// Les symboles de notre langage
// 
const char* symbole_token[] = {'*', ',', ';', '{', '}', '(', ')', '=', '>', '<', '.'};
// Le monde des tokens
typedef enum{
	// keywrods tokens
	PROGRAM_TOKEN, CONST_TOKEN, VAR_TOKEN, BEGIN_TOKEN, END_TOKEN, THEN_TOKEN, DO_TOKEN, READ_TOKEN, WRITE_TOKEN, IF_TOKEN, ELSE_TOKEN, FOR_TOKEN, WHILE_TOKEN, INT_TOKEN, FLOAT_TOKEN, STRING_TOKEN,
	// Symbole tokens
	PLUS_TOKEN, MINUS_TOKEN, DIV_TOKEN, STAR_TOKEN, VIR_TOKEN, PV_TOKEN,
	OPEN_BRACE_TOKEN, CLOSE_BRACE_TOKEN, OPEN_PARENS_TOKEN, CLOSE_PARENS_TOKEN,
	EG_TOKEN, GT_TOKEN, LT_TOKEN, PT_TOKEN,OP_EQ_TOKEN, OP_GE_TOKEN, OP_LE_TOKEN,AFF_TOKEN,
	// Other tokens
	ID_TOKEN,
	VARCHAR_TOKEN,
	NUMBER_TOKEN,
	EOF_TOKEN,
	ERROR_TOKEN
} nameToken;

// structure d'un identificateur
typedef struct{
	char* name;
}idfToken;

// structure d'une variable texte
typedef struct{
	char c; // " ou '
	char* value;
}varcharToken;

// structure d'un nombre
typedef struct{
	boolean isInt; // entier ou flottant
	union{
		int n;
		float x;
	}value;
}numberToken;

// La structure d'un token
typedef struct{
	nameToken name; // Le nom du token
	union{
		idfToken idf; // les informations de l'identificateur (si le token est IDF_TOKEN)
		numberToken number; // les informations du nombre (si le token est NUMBER_TOKEN)
		varcharToken varchar; // les informations du texte (si le token est VARCHAR_TOKEN)
	}properties;
} token;

const char* tokens[] = {"PROGRAM_TOKEN", "CONST_TOKEN", "VAR_TOKEN", "BEGIN_TOKEN", "END_TOKEN", "THEN_TOKEN", "DO_TOKEN", "READ_TOKEN", "WRITE_TOKEN", "IF_TOKEN", "ELSE_TOKEN", "FOR_TOKEN", "WHILE_TOKEN", "INT_TOKEN", "FLOAT_TOKEN", "STRING_TOKEN",
                        "PLUS_TOKEN", "MINUS_TOKEN", "DIV_TOKEN", "STAR_TOKEN", "VIR_TOKEN", "PV_TOKEN", "OPEN_BRACE_TOKEN",
                        "CLOSE_BRACE_TOKEN", "OPEN_PARENS_TOKEN", "CLOSE_PARENS_TOKEN", "EG_TOKEN", "GT_TOKEN", "LT_TOKEN","PT_TOKEN",
                        "OP_EQ_TOKEN", "OP_GE_TOKEN", "OP_LE_TOKEN","AFF_TOKEN",
                        "ID_TOKEN",
                        "VARCHAR_TOKEN",
                        "NUMBER_TOKEN",
                        "EOF_TOKEN",
                        ""};