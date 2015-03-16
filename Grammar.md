/**cnormStatements.cwp for****"C normalise"****Authors:****Lionel Auroux****Contributors:****Cedric Lemaire****David Giron****David Amsallem****see cnorm.cwp for details**/

/**INTERACTION WITH OTHER MODULE OF CNORM:****cnormDeclarations::init\_declarator -> compound\_statement****cnormExpressions::primary\_expression -> block\_item\_list**/

//----------------------------------------------------------------------------
//                              S T A T E M E N T S
//----------------------------------------------------------------------------

/**> The easiest part of the C grammar and describe how to write correct sentences in C**/
single\_statement ::=
> > compound\_statement
> > | labeled\_statement
> > | expression\_statement
;

/**> block between brace**/
compound\_statement ::=
> > '{'
> > block\_item\_list
> > '}'
;

/**> lines of C code**/
block\_item\_list ::=
> > [line\_of\_code ](.md)**;**

/**> item of a block**/
line\_of\_code ::=
[
> // declaration of variable
> [declaration ](.md)
> | // or code
// drop artefact in block\_ref hierarchy
> > [
> > single\_statement
> > ]
]
;

/**> classical statement of the language  and labels**/
labeled\_statement ::=
    1. eadIdentifier:sKeyword statement

&lt;sKeyword&gt;


;

/**> label
  * 
statement**

&lt;sKeyword&gt;

 ::= ':'
;

/**> extension only on GnuC**/
statement<"extension"> ::=
;

/**> case inside a switch**/
statement<"case"> ::=
> > range\_expression
> > ':'
;

/**> if else**/
statement<"if"> ::=
> > '('
> > expression
> > ')'
> > single\_statement
> > [
> > > "else"
> > > single\_statement

> > ]
;

/**> switch**/
statement<"switch"> ::=
> > '('
> > expression
> > ')'
> > compound\_statement
;

/**> while**/
statement<"while"> ::=
> > '('
> > expression
> > ')'
> > single\_statement
;

/**> do while**/
statement<"do"> ::=
> > single\_statement
> > "while"
> > '('
> > expression
> > ')'
> > ';'
;

/**> for**/
statement<"for"> ::=
> > '('
> > [line\_of\_code ](.md)?
> > [expression ](.md)? ';'
> > [expression ](.md)?
> > > ')'

> > single\_statement
;

/**continue**/
statement<"continue"> ::=

> ';'
;

/**break**/
statement<"break"> ::=
> ';'
;

/**goto**/
statement<"goto"> ::=
> expression
> ';'
;

/**return**/
statement<"return"> ::=
> [expression](expression.md)?
> ';'
;

/**C expression ended by ;**/
expression\_statement ::=
> [expression](expression.md)? ';'
;
/**cnormExpressions.cwp for****"C normalise"****Authors:****Lionel Auroux****Contributors:****Cedric Lemaire****David Giron****David Amsallem****see cnorm.cwp for details**/

/**INTERACTION WITH OTHER MODULE OF CNORM:****cnormDeclarations::struct\_bitfield -> constant\_expression****cnormDeclarations::enumerator -> constant\_expression****cnormDeclarations::designation -> constant\_expression****cnormDeclarations::designation -> range\_expression****cnormDeclarations::direct\_absolute\_declarator -> assignment\_expression****cnormDeclarations::initializer -> assignment\_expression****cnormStatements::statement**

&lt;if&gt;

 -> expression
 cnormStatements::statement

&lt;switch&gt;

 -> expression
 cnormStatements::statement

&lt;case&gt;

 -> range\_expression
 cnormStatements::statement

&lt;while&gt;

 -> expression
 cnormStatements::statement

&lt;do&gt;

 -> expression
 cnormStatements::statement

&lt;for&gt;

 -> expression
 cnormStatements::statement

&lt;goto&gt;

 -> constant\_expression
 cnormStatements::statement

&lt;return&gt;

 -> expression
 cnormStatements::expression\_statement -> expression

**/**

//----------------------------------------------------------------------------
//                            E X P R E S S I O N S
//----------------------------------------------------------------------------

// for asm chunks of code
dummy\_with\_paren ::=
[#!ignore
> ''
> | #readCString
> | #readCChar
> | #readChar:c #check
]
;

// for asm chunks of code
dummy\_with\_brace ::=
[#!ignore
> '{' [dummy\_with\_brace](dummy_with_brace.md)**'}'
> | #readCString
> | #readCChar
> | #readChar:c #check
]
;**

/**> Expression are described in priority order from low to high .**/
expression ::=
> > assignment\_expression
> > [
> > > ',':sOperator
> > > assignment\_expression

> > ]**;**

/**> lvalue are conditional\_expression, we recurs to the right for a = b = c = d;**/
assignment\_operator ::=
> '=' [!'='](#!ignore.md) /**not == only =**/
> | "**="
> | "/="
> | "%="
> | "+="
> | "-="
> | "<<="
> | ">>="
> | "&="
> | "^="
> | "|="
;
assignment\_expression ::=
> > conditional\_expression
> > [
> > > assignment\_operator:sOperator
> > > assignment\_expression

> > ]**
;

/**> a constant\_expression doesn't have side effect.**/
constant\_expression ::=
> > conditional\_expression
;

/**> ternary operator have lowest priority**/
conditional\_expression ::=
> > logical\_or\_expression
> > [
> > > '?':sOperator
> > > [expression ](.md)?
> > > ':'
> > > [conditional\_expression ](.md)?

> > ]?
;

/**> logical OR**/
logical\_or\_expression ::=
> > logical\_and\_expression
> > [
> > > "||":sOperator
> > > logical\_and\_expression

> > ]**;**

/**> logical AND**/
logical\_and\_expression ::=
> > inclusive\_or\_expression
> > [
> > > "&&":sOperator
> > > inclusive\_or\_expression

> > ]**;**

/**> binary inclusive OR**/
OR ::=
> > ['|' [!['|'|'='](#!ignore.md)]] // only one |
;
inclusive\_or\_expression ::=
> > exclusive\_or\_expression
> > [
> > > OR:sOperator
> > > exclusive\_or\_expression

> > ]**;**

/**> binary exclusive OR**/
XOR ::=
> > ['<sup>' [#!ignore !'=']] // only one </sup>
;
exclusive\_or\_expression ::=
> > and\_expression
> > [
> > > XOR:sOperator
> > > and\_expression

> > ]**;**

/**> binary AND**/
AND ::=
> > ['&' [!['&'|'='](#!ignore.md)]] // seulement &
;
and\_expression ::=
> > equality\_expression
> > [
> > > AND:sOperator
> > > equality\_expression

> > ]**;**

/**> egality operator before comparaison**/
EQ\_NEQ ::=
> > ["==" | "!="]:sOperator
;
equality\_expression ::=
> > relational\_expression
> > [
> > > EQ\_NEQ:sOperator
> > > relational\_expression

> > ]**;**

/**> comparaison operator <=,<,>,>=**/
CMP ::=
> > ["<=" | ">=" | '<' [!'<'](#!ignore.md) | '>' [!'>'](#!ignore.md) ]
;
relational\_expression ::=
> > shift\_expression
> > [
> > > CMP:sOperator
> > > shift\_expression

> > ]**;**

/**> binary shift**/
SHIFT ::=
> > ["<<" [!'='](#!ignore.md) | ">>" [!'='](#!ignore.md)]
;
shift\_expression ::=
> > additive\_expression
> > [
> > > SHIFT:sOperator
> > > additive\_expression

> > ]**;**

/**> binary + and -**/
PLUS ::=
> > ['+' [!['+'|'='](#!ignore.md)] | '-' [!['-'|'>'|'='](#!ignore.md)] ]
;
additive\_expression ::=
> > multiplicative\_expression
> > [
> > > PLUS:sOperator
> > > multiplicative\_expression

> > ]**;**

/**> binary** / %
**/
MUL ::=
> > [['**' | '/' | '%'] [!'='](#!ignore.md)]
;
multiplicative\_expression ::=
> > unary\_expression
> > [
> > > MUL:sOperator
> > > unary\_expression

> > ]**;**

/**> unary expression**/
unary\_operator ::=
> "++"
> | "--"
> | '&' [!['&'|'='](#!ignore.md)]     /**& once**/
> | '**' [!'='](#!ignore.md)           /** **once**/
> | '+' [!['+'|'='](#!ignore.md)]     /**+ once**/
> | '-' [!['-'|'>'|'='](#!ignore.md)] /**- once**/
> | '~' [!'='](#!ignore.md)           /**- once**/
> | '!' [!'='](#!ignore.md)           /**! once**/
> | "&&"
;
unary\_expression ::=
[
> > [
> > > [
> > > > unary\_operator:sOperator
> > > > |
> > > > // check some specific unary op like real or imag
        1. eadIdentifier:custom\_unary\_op

> > > ]
> > > unary\_expression

> > ]
> > |
> > [
      1. eadIdentifier:size\_of
> > > [
> > > > ''

> > > |
> > > > unary\_expression

> > > ]

> > ]
]
|
> > postfix\_expression
;

/**> we encapsulate a primary expression into postfix**/
postfix\_expression ::=
> > primary\_expression
> > [
> > > [
> > > > [
> > > > '['
> > > > expression
> > > > ']'
> > > > |
> > > > '('
> > > > [function\_call\_parameter\_list](function_call_parameter_list.md)?
> > > > ')'
> > > > ]

> > > ]

> > |
> > > [| "->"](dot.md):sOperator
> > > primary\_expression

> > |
> > > ["++" | "--"]:sOperator

> > ]**;**


/**> root of all expression**/
primary\_expression ::=
[
> > literal
|
> > identifier:id
|
// CAST
[       '('
> > type\_name:t
> > ')'
> > [
> > > // normal cast
> > > unary\_expression
> > > |// c99 compound literal
> > > '{' #continue
> > > [initializer\_list](initializer_list.md)? [',']?
> > > '}'

> > ]
]
|
// PRIORITY
// we clean artefact
> > '('
> > expression
> > ')'
|
// COMPOUND STATEMENT
> > '
> > block\_item\_list
> > '}' ')'
|
// GnuC builtin\_offsetof
> > "builtin\_offsetof"
> > '('
> > type\_name
> > ','
> > postfix\_expression
> > ')'
]
;

/**> list of parameter for function**/
function\_call\_parameter\_list ::=
> > assignment\_expression
> > [
> > > ','
> > > assignment\_expression

> > ]**;**

/**c99. only in initializers**/
range\_expression ::=

> constant\_expression
> [
> > "..."
> > constant\_expression

> ]?
;

/**> just an identifier**/
identifier ::=
> > rootidentifier:sId
;

// rule for one identifier easily overloadable
rootidentifier ::= #readIdentifier
;
/**cnormLiteral.cwp for****"C normalise"****Authors:****Lionel Auroux****Contributors:****Cedric Lemaire****David Giron****David Amsallem****see cnorm.cwp for details**/

/**INTERACTION AVEC AUTRE MODULE DU CNORM:****cnormExpressions::primary\_expression -> literal**/

//----------------------------------------------------------------------------
//                            l i t e r a l
//----------------------------------------------------------------------------

dot ::= '.' [!'.'](#!ignore.md)
;

// literal are parsed with no type information built in. type handling must do that.
literal ::=

> hexadecimal\_constant
> | octal\_constant
> | complex\_constant
> | decimal\_constant
> | string\_constant
> | character\_constant
;

hexadecimal\_prefix ::=  #!ignore '0' ['x'|'X']
;
hexadecimal\_digit ::= #!ignore ['0'..'9'|'a'..'f'|'A'..'F']
;
hexadecimal\_constant ::=
> [[hexadecimal\_digit](hexadecimal_prefix.md)+]:xValue
> [ // hex floating representation
> > [
      1. ignore dot #continue [hexadecimal\_digit](hexadecimal_digit.md)+
> > > [['p'|'P'](.md) #continue #readInteger ]?

> > ]
> > | // normal hex number
> > > [
> > > > unsigned\_suffix
> > > > |long\_suffix
> > > > ]0..3

> ]:xValueFl
;

unsigned\_suffix ::= #!ignore ['u' | 'U']
;
long\_suffix ::= #!ignore ['l' | 'L']
;
decimal\_constant ::=
> // decimal
  1. eadInteger:nValue !dot
> [
> > [=> nValueFlu = 'u';](unsigned_suffix.md)?
> > [=> nValueFll = nValueFll+ 'l';](long_suffix.md)**> ]
;**

octal\_prefix ::= #!ignore '0'
;
octal\_digit ::= #!ignore ['0'..'7']
;
octal\_constant ::=
> [
> > [[octal\_digit](octal_prefix.md)+]
> > [ // oct floating representation
> > > [
        1. ignore dot #continue [octal\_digit](octal_digit.md)+
> > > > [['p'|'P'](.md) #continue #readInteger ]?

> > > ]

> > ]?

> ]:val
;

exponent ::= #!ignore ['e'|'E'] ['+'|'-']? ['0'..'9']+
;
numeric\_constant ::= #!ignore [dot ['0'..'9'](#readInteger.md)**| dot ['0'..'9']+] [exponent](exponent.md)?
;
float\_suffix ::= #!ignore ['f'|'F']
;
complex\_suffix ::= #!ignore ['i'|'I'|'j'|'J']
;
complex\_constant ::=
> numeric\_constant:cValue
> [long\_suffix](long_suffix.md)?:cValueFll
> [float\_suffix](float_suffix.md)?:cValueFlf
> // c99 complex
> [=> cValueFli = 'i';](complex_suffix.md)?
;**

string\_constant ::=
> ['L'#!ignore]?:sPrefix // for wide string
> [=> sString += sV;](#readCString:sV.md)+ // auto concatenation
;

character\_constant ::=
> ['L'#!ignore]?:p // for wide char
> "'" #!ignore [['\\' '\''] | ~['\''] ]