#include "ParsedError_dict.h"

AFun PERR_afun39;
AFun PERR_afun17;
AFun PERR_afun22;
AFun PERR_afun3;
AFun PERR_afun9;
AFun PERR_afun34;
AFun PERR_afun19;
AFun PERR_afun26;
AFun PERR_afun37;
AFun PERR_afun2;
AFun PERR_afun41;
AFun PERR_afun12;
AFun PERR_afun42;
AFun PERR_afun15;
AFun PERR_afun25;
AFun PERR_afun18;
AFun PERR_afun20;
AFun PERR_afun31;
AFun PERR_afun8;
AFun PERR_afun28;
AFun PERR_afun21;
AFun PERR_afun32;
AFun PERR_afun0;
AFun PERR_afun11;
AFun PERR_afun5;
AFun PERR_afun27;
AFun PERR_afun33;
AFun PERR_afun38;
AFun PERR_afun16;
AFun PERR_afun10;
AFun PERR_afun13;
AFun PERR_afun4;
AFun PERR_afun14;
AFun PERR_afun40;
AFun PERR_afun23;
AFun PERR_afun30;
AFun PERR_afun7;
AFun PERR_afun36;
AFun PERR_afun24;
AFun PERR_afun35;
AFun PERR_afun29;
AFun PERR_afun1;
AFun PERR_afun6;

ATerm PERR_patternOptLayoutPresent = NULL;
ATerm PERR_patternOptLayoutAbsent = NULL;
ATerm PERR_patternStartStrCon = NULL;
ATerm PERR_patternStartNormal = NULL;
ATerm PERR_patternStartEscaped = NULL;
ATerm PERR_patternStartNatCon = NULL;
ATerm PERR_patternStartSummary = NULL;
ATerm PERR_patternStartError = NULL;
ATerm PERR_patternStartSubject = NULL;
ATerm PERR_patternStartLocation = NULL;
ATerm PERR_patternStartArea = NULL;
ATerm PERR_patternAreaArea = NULL;
ATerm PERR_patternLocationAreaInFile = NULL;
ATerm PERR_patternLocationFile = NULL;
ATerm PERR_patternErrorListMany = NULL;
ATerm PERR_patternErrorListSingle = NULL;
ATerm PERR_patternErrorListEmpty = NULL;
ATerm PERR_patternSummarySummary = NULL;
ATerm PERR_patternSubjectListMany = NULL;
ATerm PERR_patternSubjectListSingle = NULL;
ATerm PERR_patternSubjectListEmpty = NULL;
ATerm PERR_patternErrorFatal = NULL;
ATerm PERR_patternErrorError = NULL;
ATerm PERR_patternErrorWarning = NULL;
ATerm PERR_patternErrorInfo = NULL;
ATerm PERR_patternSubjectLocalized = NULL;
ATerm PERR_patternSubjectSubject = NULL;
ATerm PERR_patternNatConDefault = NULL;
ATerm PERR_patternStrConDefault = NULL;
ATerm PERR_patternEscapedOctal = NULL;
ATerm PERR_patternEscapedSpecialCharacter = NULL;
ATerm PERR_patternNormalDefault = NULL;

/*
 * PERR_afun39 = "area-in-file"
 * PERR_afun17 = layout
 * PERR_afun22 = term(x)
 * PERR_afun3 = sort(x)
 * PERR_afun9 = char-class(x)
 * PERR_afun34 = "fatal"
 * PERR_afun19 = "subject"
 * PERR_afun26 = "localized"
 * PERR_afun37 = "file"
 * PERR_afun2 = lex(x)
 * PERR_afun41 = parsetree(x,x)
 * PERR_afun12 = "StrCon"
 * PERR_afun42 = "<START>"
 * PERR_afun15 = ")"
 * PERR_afun25 = ","
 * PERR_afun18 = "("
 * PERR_afun20 = "Subject"
 * PERR_afun31 = "Error"
 * PERR_afun8 = iter-star(x)
 * PERR_afun28 = iter-star-sep(x,x)
 * PERR_afun21 = attrs(x)
 * PERR_afun32 = "warning"
 * PERR_afun0 = appl(x,x)
 * PERR_afun11 = "Escaped"
 * PERR_afun5 = cf(x)
 * PERR_afun27 = "]"
 * PERR_afun33 = "error"
 * PERR_afun38 = "Area"
 * PERR_afun16 = opt(x)
 * PERR_afun10 = range(x,x)
 * PERR_afun13 = "NatCon"
 * PERR_afun4 = "Normal"
 * PERR_afun14 = lit(x)
 * PERR_afun40 = "area"
 * PERR_afun23 = cons(x)
 * PERR_afun30 = "info"
 * PERR_afun7 = list(x)
 * PERR_afun36 = "Summary"
 * PERR_afun24 = "Location"
 * PERR_afun35 = "summary"
 * PERR_afun29 = "["
 * PERR_afun1 = prod(x,x,x)
 * PERR_afun6 = no-attrs
 *
 * PERR_patternOptLayoutPresent = appl(prod([cf(layout)],cf(opt(layout)),no-attrs),[<list>])
 * PERR_patternOptLayoutAbsent = appl(prod([],cf(opt(layout)),no-attrs),[])
 * PERR_patternStartStrCon = parsetree(appl(prod([cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartNormal = parsetree(appl(prod([cf(opt(layout)),cf(sort("Normal")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartEscaped = parsetree(appl(prod([cf(opt(layout)),cf(sort("Escaped")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartNatCon = parsetree(appl(prod([cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartSummary = parsetree(appl(prod([cf(opt(layout)),cf(sort("Summary")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartError = parsetree(appl(prod([cf(opt(layout)),cf(sort("Error")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartSubject = parsetree(appl(prod([cf(opt(layout)),cf(sort("Subject")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartLocation = parsetree(appl(prod([cf(opt(layout)),cf(sort("Location")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternStartArea = parsetree(appl(prod([cf(opt(layout)),cf(sort("Area")),cf(opt(layout))],sort("<START>"),no-attrs),[<term>,<term>,<term>]),<int>)
 * PERR_patternAreaArea = appl(prod([lit("area"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("NatCon")),cf(opt(layout)),lit(")")],cf(sort("Area")),attrs([term(cons("area"))])),[lit("area"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PERR_patternLocationAreaInFile = appl(prod([lit("area-in-file"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Area")),cf(opt(layout)),lit(")")],cf(sort("Location")),attrs([term(cons("area-in-file"))])),[lit("area-in-file"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PERR_patternLocationFile = appl(prod([lit("file"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(")")],cf(sort("Location")),attrs([term(cons("file"))])),[lit("file"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * PERR_patternErrorListMany = [<term>,<term>,lit(","),<term>,<list>]
 * PERR_patternErrorListSingle = [<term>]
 * PERR_patternErrorListEmpty = []
 * PERR_patternSummarySummary = appl(prod([lit("summary"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Error"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Summary")),attrs([term(cons("summary"))])),[lit("summary"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Error"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternSubjectListMany = [<term>,<term>,lit(","),<term>,<list>]
 * PERR_patternSubjectListSingle = [<term>]
 * PERR_patternSubjectListEmpty = []
 * PERR_patternErrorFatal = appl(prod([lit("fatal"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Error")),attrs([term(cons("fatal"))])),[lit("fatal"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternErrorError = appl(prod([lit("error"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Error")),attrs([term(cons("error"))])),[lit("error"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternErrorWarning = appl(prod([lit("warning"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Error")),attrs([term(cons("warning"))])),[lit("warning"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternErrorInfo = appl(prod([lit("info"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),lit("["),cf(opt(layout)),cf(iter-star-sep(sort("Subject"),lit(","))),cf(opt(layout)),lit("]"),cf(opt(layout)),lit(")")],cf(sort("Error")),attrs([term(cons("info"))])),[lit("info"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,lit("["),<term>,appl(list(cf(iter-star-sep(sort("Subject"),lit(",")))),<term>),<term>,lit("]"),<term>,lit(")")])
 * PERR_patternSubjectLocalized = appl(prod([lit("localized"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(","),cf(opt(layout)),cf(sort("Location")),cf(opt(layout)),lit(")")],cf(sort("Subject")),attrs([term(cons("localized"))])),[lit("localized"),<term>,lit("("),<term>,<term>,<term>,lit(","),<term>,<term>,<term>,lit(")")])
 * PERR_patternSubjectSubject = appl(prod([lit("subject"),cf(opt(layout)),lit("("),cf(opt(layout)),cf(sort("StrCon")),cf(opt(layout)),lit(")")],cf(sort("Subject")),attrs([term(cons("subject"))])),[lit("subject"),<term>,lit("("),<term>,<term>,<term>,lit(")")])
 * PERR_patternNatConDefault = appl(prod([lex(sort("NatCon"))],cf(sort("NatCon")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternStrConDefault = appl(prod([lex(sort("StrCon"))],cf(sort("StrCon")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternEscapedOctal = appl(prod([lex(sort("Escaped"))],cf(sort("Escaped")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternEscapedSpecialCharacter = appl(prod([lex(sort("Escaped"))],cf(sort("Escaped")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 * PERR_patternNormalDefault = appl(prod([lex(sort("Normal"))],cf(sort("Normal")),no-attrs),[appl(list(iter-star(char-class([range(0,255)]))),[<list>])])
 *
 */

static ATerm _ParsedError_dict = NULL;

#define _ParsedError_dict_LEN 1514

static char _ParsedError_dict_baf[_ParsedError_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x33,0x81,0xD0,0x05,0x3C,0x69,0x6E,0x74,0x3E,0x00,0x00,
0x02,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x03,0x03,0x04,0x06,0x05,0x05,0x5B,0x5F,0x2C,
0x5F,0x5D,0x02,0x00,0x81,0x0C,0x2E,0x02,0x03,0x01,0x07,0x08,0x0A,0x0B,0x0C,0x0D,
0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,
0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,
0x2E,0x2F,0x30,0x31,0x32,0x02,0x02,0x03,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,
0x6E,0x74,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,
0x72,0x6D,0x00,0x00,0x01,0x0C,0x61,0x72,0x65,0x61,0x2D,0x69,0x6E,0x2D,0x66,0x69,
0x6C,0x65,0x00,0x01,0x01,0x06,0x6C,0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x01,
0x78,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,0x0B,0x02,0x2A,0x09,0x04,
0x73,0x6F,0x72,0x74,0x01,0x00,0x0B,0x0B,0x23,0x2E,0x18,0x19,0x2D,0x26,0x1F,0x27,
0x14,0x13,0x09,0x0A,0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,0x61,0x73,0x73,0x01,0x00,
0x02,0x02,0x02,0x09,0x05,0x66,0x61,0x74,0x61,0x6C,0x00,0x01,0x01,0x07,0x73,0x75,
0x62,0x6A,0x65,0x63,0x74,0x00,0x01,0x01,0x09,0x6C,0x6F,0x63,0x61,0x6C,0x69,0x7A,
0x65,0x64,0x00,0x01,0x01,0x04,0x66,0x69,0x6C,0x65,0x00,0x01,0x01,0x03,0x6C,0x65,
0x78,0x01,0x00,0x05,0x02,0x0B,0x09,0x09,0x70,0x61,0x72,0x73,0x65,0x74,0x72,0x65,
0x65,0x02,0x00,0x0A,0x02,0x1E,0x09,0x02,0x01,0x09,0x06,0x53,0x74,0x72,0x43,0x6F,
0x6E,0x00,0x01,0x01,0x07,0x3C,0x53,0x54,0x41,0x52,0x54,0x3E,0x00,0x01,0x01,0x01,
0x29,0x00,0x01,0x01,0x01,0x2C,0x00,0x01,0x01,0x01,0x28,0x00,0x01,0x01,0x07,0x53,
0x75,0x62,0x6A,0x65,0x63,0x74,0x00,0x01,0x01,0x05,0x45,0x72,0x72,0x6F,0x72,0x00,
0x01,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x02,0x02,
0x0C,0x09,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,
0x02,0x00,0x03,0x02,0x0B,0x09,0x02,0x28,0x09,0x05,0x61,0x74,0x74,0x72,0x73,0x01,
0x00,0x0B,0x02,0x02,0x09,0x07,0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x00,0x01,0x01,
0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x1D,0x03,0x2C,0x31,0x09,0x04,0x01,0x03,0x02,
0x09,0x07,0x45,0x73,0x63,0x61,0x70,0x65,0x64,0x00,0x01,0x01,0x02,0x63,0x66,0x01,
0x00,0x0E,0x05,0x1B,0x0B,0x24,0x08,0x09,0x01,0x5D,0x00,0x01,0x01,0x05,0x65,0x72,
0x72,0x6F,0x72,0x00,0x01,0x01,0x04,0x41,0x72,0x65,0x61,0x00,0x01,0x01,0x03,0x6F,
0x70,0x74,0x01,0x00,0x02,0x02,0x08,0x09,0x05,0x72,0x61,0x6E,0x67,0x65,0x02,0x00,
0x02,0x02,0x00,0x09,0x02,0x00,0x09,0x06,0x4E,0x61,0x74,0x43,0x6F,0x6E,0x00,0x01,
0x01,0x06,0x4E,0x6F,0x72,0x6D,0x61,0x6C,0x00,0x01,0x01,0x03,0x6C,0x69,0x74,0x01,
0x00,0x10,0x10,0x0E,0x0F,0x2B,0x1D,0x22,0x0D,0x21,0x30,0x2F,0x10,0x07,0x15,0x16,
0x17,0x29,0x09,0x04,0x61,0x72,0x65,0x61,0x00,0x01,0x01,0x04,0x63,0x6F,0x6E,0x73,
0x01,0x00,0x0B,0x0B,0x0E,0x0F,0x2B,0x1D,0x22,0x0D,0x2F,0x10,0x07,0x29,0x09,0x04,
0x69,0x6E,0x66,0x6F,0x00,0x01,0x01,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,0x04,0x03,
0x1A,0x20,0x09,0x07,0x53,0x75,0x6D,0x6D,0x61,0x72,0x79,0x00,0x01,0x01,0x08,0x4C,
0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x07,0x73,0x75,0x6D,0x6D,0x61,
0x72,0x79,0x00,0x01,0x01,0x01,0x5B,0x00,0x01,0x01,0x04,0x70,0x72,0x6F,0x64,0x03,
0x00,0x1A,0x03,0x03,0x02,0x09,0x03,0x0B,0x20,0x09,0x03,0x1C,0x32,0x09,0x08,0x6E,
0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,0x00,0x00,0x01,0x02,0x01,0x51,0x81,0x28,0x20,
0x14,0x50,0x11,0xC8,0x60,0x14,0x64,0x70,0x45,0x20,0x40,0x91,0x21,0x88,0x50,0x44,
0x68,0x42,0x0C,0x10,0x08,0xB0,0x28,0xF8,0x38,0x3C,0x3C,0x2E,0x01,0x07,0x08,0x8D,
0x82,0x42,0xC3,0x22,0x60,0x50,0x30,0xA8,0x8E,0x83,0x45,0x0D,0x0E,0x82,0x2A,0x03,
0x05,0x09,0x80,0xE3,0x20,0xB0,0x90,0xD8,0x09,0x10,0x38,0x08,0x5C,0x78,0x1E,0x1C,
0x1F,0x11,0x60,0x04,0xA0,0xC1,0x09,0xA0,0x44,0x50,0x62,0x0F,0x12,0x02,0x41,0x05,
0x20,0xA7,0x01,0x91,0x81,0xC8,0x4A,0x00,0xA1,0x02,0x53,0x00,0xA8,0x80,0xD4,0x80,
0x1A,0x05,0x40,0x05,0xB0,0xA1,0x02,0x43,0x34,0x28,0x5A,0x8D,0xA3,0x52,0x28,0x91,
0xA1,0x01,0x81,0x0C,0xC8,0x90,0x49,0x43,0x83,0x64,0x18,0xB1,0x7A,0x36,0x41,0xD1,
0xB6,0x48,0x92,0xD1,0xB2,0x42,0x0C,0x93,0x08,0x51,0x18,0x42,0x03,0x08,0x50,0x83,
0x06,0xC4,0x09,0x12,0x2C,0x6C,0x86,0x63,0x62,0x99,0xC5,0xA0,0x49,0x26,0x04,0xA0,
0xD9,0x85,0x2A,0x4D,0x8D,0x90,0xAC,0x6D,0x50,0x98,0xB4,0x09,0x24,0xC0,0x84,0x1B,
0x08,0x64,0xC8,0x71,0xB2,0x1D,0x8D,0x9A,0x55,0x16,0x81,0x24,0x98,0x13,0x03,0x65,
0x1C,0xB9,0x2E,0x36,0x42,0x71,0xB7,0x46,0x22,0xD0,0x24,0x93,0x02,0x20,0x6C,0x60,
0x50,0xA3,0xC6,0xC8,0x6E,0x36,0x19,0xD8,0x5A,0x04,0x92,0x60,0x48,0x0D,0x9C,0x4A,
0x94,0xF8,0xD9,0x0B,0xC6,0xD3,0x05,0x0B,0x40,0x92,0x4C,0x08,0x01,0xB0,0x45,0x4A,
0x80,0x9B,0x21,0xF8,0xD9,0x64,0xC1,0x68,0x12,0x49,0x81,0x3F,0xD6,0x49,0xAB,0x52,
0x13,0x64,0x20,0x9B,0x6C,0x50,0x2D,0x02,0x49,0x30,0x23,0xFA,0x63,0x46,0xAE,0x98,
0xC1,0xC1,0xD3,0x64,0x36,0x98,0xA2,0xC2,0xD3,0x64,0x26,0x9B,0x30,0x34,0xD9,0x0E,
0xA6,0x38,0x30,0xD4,0xD9,0x0A,0xA6,0xCC,0x15,0x36,0x43,0x29,0x8E,0x04,0xA6,0xC8,
0x45,0x36,0x60,0x29,0xB2,0x1E,0x4C,0x70,0x39,0x36,0x42,0xC9,0xB3,0x06,0x4D,0x90,
0xD2,0x63,0x81,0x49,0xB2,0x12,0x4D,0x98,0x12,0x6C,0x87,0x13,0x1C,0x0C,0x4D,0x90,
0xA2,0x6C,0xC1,0x13,0x64,0x30,0x98,0x93,0x55,0xA4,0x0F,0x4A,0x20,0x89,0x90,0xF3,
0x18,0x1D,0xC4,0x21,0xB9,0x8A,0x0A,0xE2,0x10,0x5C,0x42,0x33,0x88,0x42,0x73,0x1C,
0x11,0xC4,0x20,0x38,0x84,0x7B,0x10,0x87,0x66,0x38,0x2D,0x88,0x41,0xB1,0x08,0xD6,
0x21,0x0A,0xCC,0x70,0x4B,0x10,0x81,0x62,0x11,0xCC,0x42,0x19,0x98,0xE0,0xA6,0x21,
0x04,0xC4,0x23,0x18,0x84,0x23,0x31,0xC1,0x0C,0x42,0x01,0x88,0x47,0xD1,0x08,0xC2,
0x17,0xE9,0xAD,0x5A,0x81,0x63,0x45,0x00,0x2D,0x90,0xFE,0x62,0x81,0xF9,0xB2,0x17,
0xCD,0xB0,0x3E,0x6C,0x86,0xF3,0x1C,0x0B,0xCD,0x90,0x9E,0x6D,0xA1,0x12,0x51,0x04,
0x15,0x08,0x20,0xCA,0x85,0x8D,0x02,0x12,0x11,0x82,0xC5,0x05,0x30,0x3F,0x4C,0xE9,
0xD2,0x8B,0x16,0x48,0x91,0x6C,0x80,0x8B,0x14,0x1C,0x2D,0x90,0x61,0x6D,0x81,0x12,
0x53,0x0D,0x15,0x18,0x67,0x49,0xC5,0x8B,0x0B,0x12,0x10,0x62,0xC5,0x04,0x30,0xDF,
0x00,0x92,0x42,0x22,0x48,0x40,0x4B,0x1C,0x1E,0x24,0x20,0xD0,0x2F,0x80,0x0C,0x13,
0xE8,0x01,0xF4,0xC1,0xBD,0x62,0xB1,0xE0,0x84,0x56,0xC8,0x42,0xB1,0x40,0x0A,0xD9,
0x0F,0x96,0xD8,0x3C,0xB6,0x42,0xE5,0x8E,0x03,0x96,0xC8,0x6C,0xB6,0xC1,0x65,0xB2,
0x13,0x2C,0x70,0x0C,0xB6,0x43,0xA5,0x88,0xB8,0x34,0xB6,0x42,0xA5,0xB1,0x88,0xE3,
0x01,0x4B,0x64,0x32,0x58,0xC9,0x81,0x12,0xE0,0x82,0x55,0x04,0x13,0x4A,0xB5,0x8F,
0x02,0xD2,0x11,0x9A,0xC5,0x02,0x69,0x08,0x8D,0x21,0x01,0xA4,0x23,0xD5,0x8E,0x07,
0x52,0x11,0x6A,0x42,0x0D,0x48,0x46,0xAB,0x1C,0x0A,0xA4,0x22,0x55,0x88,0x81,0x52,
0x11,0xCA,0x9B,0xC4,0x8C,0x43,0x29,0x08,0xA5,0x63,0x23,0xE8,0x77,0x80,0x49,0x0D,
0xE0,0x03,0x05,0x7A,0x00,0xBD,0x32,0x60,0xC0,0x6C,0x55,0x43,0xF5,0xB2,0x0F,0xAC,
0x50,0x5E,0xB6,0x40,0xF5,0xB6,0x1B,0xAD,0x90,0x5D,0x63,0x82,0x75,0xB2,0x03,0xAC,
0x44,0x76,0xB6,0x41,0xB5,0xB5,0x84,0x13,0x01,0x4A,0x12,0x88,0x35,0x14,0x55,0x48,
0xCD,0x8A,0x8D,0x32,0x10,0xA6,0xC5,0x04,0x99,0x08,0x13,0x21,0x1C,0x64,0x21,0x8D,
0x8E,0x0A,0x32,0x10,0x46,0xC4,0x46,0x19,0x08,0x43,0x4D,0x11,0x56,0x21,0x94,0x67,
0xA6,0xCD,0x1A,0xCD,0x8E,0x88,0x7E,0xA1,0x18,0x73,0x50,0xC3,0x14,0xBC,0xD8,0xE8,
0xD3,0x09,0xE9,0x8B,0x26,0x0B,0x62,0x6C,0x1F,0xA8,0x4E,0x22,0xD4,0x71,0xD9,0x24,
0xB6,0x26,0x34,0xC4,0x7A,0x6A,0xD9,0xB2,0xD8,0xD9,0x07,0xEA,0x10,0x42,0xB5,0x02,
0x0A,0x4A,0xAD,0x8D,0x8D,0x30,0x1E,0x99,0xB1,0x67,0xB6,0x2E,0x81,0x76,0xD9,0x03,
0xB6,0x28,0x36,0xDB,0x20,0xB6,0xDB,0x09,0xB6,0xC8,0x0D,0xB1,0xC1,0xD6,0xD9,0x06,
0xB6,0xCA,0x11,0x29,0x24,0xFB,0x51,0x24,0xC4,0x81,0xD8,0xB8,0x21,0x1E,0xE9,0xBB,
0x56,0x87,0x63,0xE0,0x12,0x2A,0x45,0x11,0xD4,0x28,0xA1,0x2C,0x76,0x3E,0x2C,0x43,
0xBA,0x69,0xCD,0x89,0xC6,0x42,0xA9,0xA4,0xCE,0x98,0x66,0x22,0x29,0xC0,0xC0,0x00,
0x00,0x00,0x00,0x5F,0xE0,0x00,0x00,0x12,0x34,0x45,0xBA,0x65,0xDD,0xB9,0xC6,0x22,
0x2B,0x24,0xCE,0x0D,0xD3,0x6E,0x1C,0x2E,0x33,0x05,0x55,0x26,0x71,0xAE,0x9B,0x62,
0xBA,0x63,0xD3,0xA5,0xC6,0x13,0x28,0xA4,0xCE,0xA0
};

void init_ParsedError_dict()
{
  ATermList afuns, terms;

  _ParsedError_dict = ATreadFromBinaryString(_ParsedError_dict_baf, _ParsedError_dict_LEN);

  ATprotect(&_ParsedError_dict);

  afuns = (ATermList)ATelementAt((ATermList)_ParsedError_dict, 0);

  PERR_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  PERR_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_ParsedError_dict, 1);

  PERR_patternOptLayoutPresent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternOptLayoutAbsent = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartStrCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartNormal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartEscaped = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartNatCon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartSummary = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartSubject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStartArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternAreaArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternLocationAreaInFile = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternLocationFile = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSummarySummary = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorFatal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorWarning = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternErrorInfo = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectLocalized = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternSubjectSubject = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternNatConDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternStrConDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternEscapedOctal = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternEscapedSpecialCharacter = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PERR_patternNormalDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
}