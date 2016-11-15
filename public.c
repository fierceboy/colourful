/* macro definition */

/* Remove the space and line break on the left side of string */
/* Param@1 string, Param@2 *string */
#define TRIPSPACE(var, pstr_val) \
{ \
    pstr_val = var; \
    while (pstr_val != '\0'){ \
        if (*pstr_val != ' ' && *pstr_val != '\r' && *pstr_val != '\n') \
        break; \
        pstr_val++; \
    } \
}while(0)

/* Remove the space and line break on the right side of string */
/* Param@1 string, Param@2 *string */
#define TRIPRIGHTSPECCHAR(var, varlen_) \
{\
    int varlen = varlen_; \
    if (varlen <= 0){\
        ;\
    }else{\
        varlen = varlen - 1;\
        while(*(var + varlen) == ' '  || *(var + varlen) == '\r' || *(var + varlen) == '\n'){\
            *(var + varlen)  = '\0';\
            if (varlen <= 0)\
            break;\
            else\
            varlen = varlen - 1;\
        }\
    }\
}while(0)

#define TRIPNONEALPHANUMERIC(var, pstr_val) \
{ \
    pstr_val = var; \
    while (pstr_val != NULL){ \
        if (isalpha(*pstr_val) || isdigit(*pstr_val)) \
        break; \
        pstr_val++; \
    } \
}while(0)
