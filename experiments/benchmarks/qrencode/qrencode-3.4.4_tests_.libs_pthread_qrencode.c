// #anon_enum$QR_ECLEVEL_L=0$QR_ECLEVEL_M=1$QR_ECLEVEL_Q=2$QR_ECLEVEL_H=3
// file ../qrencode.h line 124
enum anonymous$7 { QR_ECLEVEL_L=0, QR_ECLEVEL_M=1, QR_ECLEVEL_Q=2, QR_ECLEVEL_H=3 };

// #anon_enum$QR_MODE_NUL=-1$QR_MODE_NUM=0$QR_MODE_AN=1$QR_MODE_8=2$QR_MODE_KANJI=3$QR_MODE_STRUCTURE=4$QR_MODE_ECI=5$QR_MODE_FNC1FIRST=6$QR_MODE_FNC1SECOND=7
// file ../qrencode.h line 109
enum anonymous$8 { QR_MODE_NUL=-1, QR_MODE_NUM=0, QR_MODE_AN=1, QR_MODE_8=2, QR_MODE_KANJI=3, QR_MODE_STRUCTURE=4, QR_MODE_ECI=5, QR_MODE_FNC1FIRST=6, QR_MODE_FNC1SECOND=7 };

// tag-#anon#ST[S32'dataLength'||U32'$pad0'||*{U8}$U8$'data'||S32'eccLength'||U32'$pad1'||*{U8}$U8$'ecc'|]
// file qrencode.c line 43
struct anonymous$3;

// tag-#anon#ST[S32'length'||U32'$pad0'||*{U8}$U8$'data'|]
// file bitstream.h line 25
struct anonymous$9;

// tag-#anon#ST[S32'version'||S32'dataLength'||S32'eccLength'||U32'$pad0'||*{U8}$U8$'datacode'||*{U8}$U8$'ecccode'||*{SYM#tag-#anon#ST[S32'dataLength'||U32'$pad0'||*{U8}$U8$'data'||S32'eccLength'||U32'$pad1'||*{U8}$U8$'ecc'|]#}$SYM#tag-#anon#ST[S32'dataLength'||U32'$pad0'||*{U8}$U8$'data'||S32'eccLength'||U32'$pad1'||*{U8}$U8$'ecc'|]#$'rsblock'||S32'oddbits'||S32'count'|]
// file qrencode.c line 199
struct anonymous$5;

// tag-#anon#ST[S32'version'||S32'dataLength'||S32'eccLength'||U32'$pad0'||*{U8}$U8$'datacode'||*{U8}$U8$'ecccode'||S32'b1'||S32'blocks'||*{SYM#tag-#anon#ST[S32'dataLength'||U32'$pad0'||*{U8}$U8$'data'||S32'eccLength'||U32'$pad1'||*{U8}$U8$'ecc'|]#}$SYM#tag-#anon#ST[S32'dataLength'||U32'$pad0'||*{U8}$U8$'data'||S32'eccLength'||U32'$pad1'||*{U8}$U8$'ecc'|]#$'rsblock'||S32'count'||U32'$pad1'|]
// file qrencode.c line 50
struct anonymous$4;

// tag-#anon#ST[S32'version'||S32'width'||*{U8}$U8$'data'|]
// file ../qrencode.h line 375
struct anonymous$1;

// tag-#anon#ST[S32'width'||ARR4{S32}$S32$'ec'|]
// file mqrspec.c line 45
struct anonymous;

// tag-#anon#ST[S32'width'||S32'words'||S32'remainder'||ARR4{S32}$S32$'ec'|]
// file qrspec.c line 46
struct anonymous$2;

// tag-#anon#ST[S32'width'||U32'$pad0'||*{U8}$U8$'frame'||S32'x'||S32'y'||S32'dir'||S32'bit'||S32'mqr'||U32'$pad1'|]
// file qrencode.c line 290
struct anonymous$6;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_QRcode_List
// file qrencode.h line 385
struct _QRcode_List;

// tag-_QRinput
// file qrencode.h line 152
struct _QRinput;

// tag-_QRinput_InputList
// file qrinput.h line 59
struct _QRinput_InputList;

// tag-_QRinput_List
// file qrinput.h line 33
struct _QRinput_List;

// tag-_QRinput_Struct
// file qrencode.h line 280
struct _QRinput_Struct;

// tag-_RS
// file rscode.h line 34
struct _RS;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// BitStream_allocate
// file bitstream.c line 44
static signed int BitStream_allocate(struct anonymous$9 *bstream, signed int length);
// BitStream_append
// file bitstream.h line 31
extern signed int BitStream_append(struct anonymous$9 *bstream, struct anonymous$9 *arg);
// BitStream_appendBytes
// file bitstream.h line 33
extern signed int BitStream_appendBytes(struct anonymous$9 *bstream, signed int size, unsigned char *data);
// BitStream_appendNum
// file bitstream.h line 32
extern signed int BitStream_appendNum(struct anonymous$9 *bstream, signed int bits, unsigned int num);
// BitStream_free
// file bitstream.h line 36
extern void BitStream_free(struct anonymous$9 *bstream);
// BitStream_new
// file bitstream.h line 30
extern struct anonymous$9 * BitStream_new(void);
// BitStream_newFromBytes
// file bitstream.c line 96
static struct anonymous$9 * BitStream_newFromBytes(signed int size, unsigned char *data);
// BitStream_newFromNum
// file bitstream.c line 66
static struct anonymous$9 * BitStream_newFromNum(signed int bits, unsigned int num);
// BitStream_toByte
// file bitstream.h line 35
extern unsigned char * BitStream_toByte(struct anonymous$9 *bstream);
// FrameFiller_new
// file qrencode.c line 299
static struct anonymous$6 * FrameFiller_new(signed int width, unsigned char *frame, signed int mqr);
// FrameFiller_next
// file qrencode.c line 316
static unsigned char * FrameFiller_next(struct anonymous$6 *filler);
// FrameFiller_test
// file qrencode.c line 374
extern unsigned char * FrameFiller_test(signed int version);
// FrameFiller_testMQR
// file qrencode.c line 405
extern unsigned char * FrameFiller_testMQR(signed int version);
// MMask_evaluateSymbol
// file mmask.c line 128
extern signed int MMask_evaluateSymbol(signed int width, unsigned char *frame);
// MMask_makeMask
// file mmask.h line 25
extern unsigned char * MMask_makeMask(signed int version, unsigned char *frame, signed int mask, enum anonymous$7 level);
// MMask_makeMaskedFrame
// file mmask.c line 95
extern unsigned char * MMask_makeMaskedFrame(signed int width, unsigned char *frame, signed int mask);
// MMask_mask
// file mmask.h line 26
extern unsigned char * MMask_mask(signed int version, unsigned char *frame, enum anonymous$7 level);
// MMask_writeFormatInformation
// file mmask.c line 34
extern void MMask_writeFormatInformation(signed int version, signed int width, unsigned char *frame, signed int mask, enum anonymous$7 level);
// MQRraw_free
// file qrencode.c line 275
void MQRraw_free(struct anonymous$5 *raw);
// MQRraw_getCode
// file qrencode.c line 260
unsigned char MQRraw_getCode(struct anonymous$5 *raw);
// MQRraw_new
// file qrencode.c line 211
struct anonymous$5 * MQRraw_new(struct _QRinput *input);
// MQRspec_clearCache
// file mqrspec.h line 143
extern void MQRspec_clearCache(void);
// MQRspec_createFrame
// file mqrspec.c line 200
static unsigned char * MQRspec_createFrame(signed int version);
// MQRspec_getDataLength
// file mqrspec.h line 50
extern signed int MQRspec_getDataLength(signed int version, enum anonymous$7 level);
// MQRspec_getDataLengthBit
// file mqrspec.h line 42
extern signed int MQRspec_getDataLengthBit(signed int version, enum anonymous$7 level);
// MQRspec_getECCLength
// file mqrspec.h line 58
extern signed int MQRspec_getECCLength(signed int version, enum anonymous$7 level);
// MQRspec_getFormatInfo
// file mqrspec.c line 142
extern unsigned int MQRspec_getFormatInfo(signed int mask, signed int version, enum anonymous$7 level);
// MQRspec_getWidth
// file mqrspec.h line 73
extern signed int MQRspec_getWidth(signed int version);
// MQRspec_lengthIndicator
// file mqrspec.h line 92
extern signed int MQRspec_lengthIndicator(enum anonymous$8 mode, signed int version);
// MQRspec_maximumWords
// file mqrspec.c line 107
extern signed int MQRspec_maximumWords(enum anonymous$8 mode, signed int version);
// MQRspec_newFrame
// file mqrspec.h line 138
extern unsigned char * MQRspec_newFrame(signed int version);
// Mask_calcN1N3
// file mask.c line 188
extern signed int Mask_calcN1N3(signed int length, signed int *runLength);
// Mask_calcN2
// file mask.c line 221
extern signed int Mask_calcN2(signed int width, unsigned char *frame);
// Mask_calcRunLength
// file mask.c line 244
extern signed int Mask_calcRunLength(signed int width, unsigned char *frame, signed int dir, signed int *runLength);
// Mask_evaluateSymbol
// file mask.c line 274
extern signed int Mask_evaluateSymbol(signed int width, unsigned char *frame);
// Mask_makeMask
// file mask.h line 25
extern unsigned char * Mask_makeMask(signed int width, unsigned char *frame, signed int mask, enum anonymous$7 level);
// Mask_makeMaskedFrame
// file mask.c line 151
extern unsigned char * Mask_makeMaskedFrame(signed int width, unsigned char *frame, signed int mask);
// Mask_mask
// file mask.h line 26
extern unsigned char * Mask_mask(signed int width, unsigned char *frame, enum anonymous$7 level);
// Mask_mask0
// file mask.c line 103
static signed int Mask_mask0(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask0$link1
// file mmask.c line 68
static void Mask_mask0$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1);
// Mask_mask1
// file mask.c line 108
static signed int Mask_mask1(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask1$link1
// file mmask.c line 73
static void Mask_mask1$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1);
// Mask_mask2
// file mask.c line 113
static signed int Mask_mask2(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask2$link1
// file mmask.c line 78
static void Mask_mask2$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1);
// Mask_mask3
// file mask.c line 118
static signed int Mask_mask3(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask3$link1
// file mmask.c line 83
static void Mask_mask3$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1);
// Mask_mask4
// file mask.c line 123
static signed int Mask_mask4(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask5
// file mask.c line 128
static signed int Mask_mask5(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask6
// file mask.c line 133
static signed int Mask_mask6(signed int width, const unsigned char *s, unsigned char *d);
// Mask_mask7
// file mask.c line 138
static signed int Mask_mask7(signed int width, const unsigned char *s, unsigned char *d);
// Mask_writeFormatInformation
// file mask.c line 34
extern signed int Mask_writeFormatInformation(signed int width, unsigned char *frame, signed int mask, enum anonymous$7 level);
// QRcode_APIVersion
// file qrencode.c line 909
extern void QRcode_APIVersion(signed int *major_version, signed int *minor_version, signed int *micro_version);
// QRcode_APIVersionString
// file qrencode.c line 922
extern char * QRcode_APIVersionString(void);
// QRcode_List_free
// file qrencode.c line 764
extern void QRcode_List_free(struct _QRcode_List *qrlist);
// QRcode_List_freeEntry
// file qrencode.c line 756
static void QRcode_List_freeEntry(struct _QRcode_List *entry);
// QRcode_List_newEntry
// file qrencode.c line 743
static struct _QRcode_List * QRcode_List_newEntry(void);
// QRcode_List_size
// file qrencode.c line 775
extern signed int QRcode_List_size(struct _QRcode_List *qrlist);
// QRcode_clearCache
// file ../qrencode.h line 560
extern void QRcode_clearCache(void);
// QRcode_encodeData
// file qrencode.c line 710
extern struct anonymous$1 * QRcode_encodeData(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level);
// QRcode_encodeDataMQR
// file qrencode.c line 724
extern struct anonymous$1 * QRcode_encodeDataMQR(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level);
// QRcode_encodeDataReal
// file qrencode.c line 681
static struct anonymous$1 * QRcode_encodeDataReal(const unsigned char *data, signed int length, signed int version, enum anonymous$7 level, signed int mqr);
// QRcode_encodeDataStructured
// file qrencode.c line 884
extern struct _QRcode_List * QRcode_encodeDataStructured(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level);
// QRcode_encodeDataStructuredReal
// file qrencode.c line 848
static struct _QRcode_List * QRcode_encodeDataStructuredReal(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level, signed int eightbit, enum anonymous$8 hint, signed int casesensitive);
// QRcode_encodeInput
// file qrencode.c line 629
extern struct anonymous$1 * QRcode_encodeInput(struct _QRinput *input);
// QRcode_encodeInputStructured
// file qrencode.c line 802
extern struct _QRcode_List * QRcode_encodeInputStructured(struct _QRinput_Struct *s);
// QRcode_encodeInputToStructured
// file qrencode.c line 834
static struct _QRcode_List * QRcode_encodeInputToStructured(struct _QRinput *input);
// QRcode_encodeMask
// file qrencode.c line 463
struct anonymous$1 * QRcode_encodeMask(struct _QRinput *input, signed int mask);
// QRcode_encodeMaskMQR
// file qrencode.c line 547
struct anonymous$1 * QRcode_encodeMaskMQR(struct _QRinput *input, signed int mask);
// QRcode_encodeString
// file ../qrencode.h line 426
extern struct anonymous$1 * QRcode_encodeString(const char *string, signed int version, enum anonymous$7 level, enum anonymous$8 hint, signed int casesensitive);
// QRcode_encodeString8bit
// file qrencode.c line 715
extern struct anonymous$1 * QRcode_encodeString8bit(const char *string, signed int version, enum anonymous$7 level);
// QRcode_encodeString8bitMQR
// file qrencode.c line 729
extern struct anonymous$1 * QRcode_encodeString8bitMQR(const char *string, signed int version, enum anonymous$7 level);
// QRcode_encodeString8bitStructured
// file qrencode.c line 888
extern struct _QRcode_List * QRcode_encodeString8bitStructured(const char *string, signed int version, enum anonymous$7 level);
// QRcode_encodeStringMQR
// file qrencode.c line 676
extern struct anonymous$1 * QRcode_encodeStringMQR(const char *string, signed int version, enum anonymous$7 level, enum anonymous$8 hint, signed int casesensitive);
// QRcode_encodeStringReal
// file qrencode.c line 638
static struct anonymous$1 * QRcode_encodeStringReal(const char *string, signed int version, enum anonymous$7 level, signed int mqr, enum anonymous$8 hint, signed int casesensitive);
// QRcode_encodeStringStructured
// file qrencode.c line 896
extern struct _QRcode_List * QRcode_encodeStringStructured(const char *string, signed int version, enum anonymous$7 level, enum anonymous$8 hint, signed int casesensitive);
// QRcode_free
// file ../qrencode.h line 470
extern void QRcode_free(struct anonymous$1 *qrcode);
// QRcode_new
// file qrencode.c line 441
struct anonymous$1 * QRcode_new(signed int version, signed int width, unsigned char *data);
// QRinput_InputList_freeEntry
// file qrinput.c line 1458
static void QRinput_InputList_freeEntry(struct _QRinput_InputList *entry);
// QRinput_InputList_newEntry
// file qrinput.c line 1445
static struct _QRinput_InputList * QRinput_InputList_newEntry(struct _QRinput *input);
// QRinput_List_dup
// file qrinput.c line 85
static struct _QRinput_List * QRinput_List_dup(struct _QRinput_List *entry);
// QRinput_List_freeEntry
// file qrinput.c line 76
static void QRinput_List_freeEntry(struct _QRinput_List *entry);
// QRinput_List_newEntry
// file qrinput.c line 48
static struct _QRinput_List * QRinput_List_newEntry(enum anonymous$8 mode, signed int size, const unsigned char *data);
// QRinput_List_shrinkEntry
// file qrinput.c line 1541
static signed int QRinput_List_shrinkEntry(struct _QRinput_List *entry, signed int bytes);
// QRinput_Struct_appendInput
// file qrinput.c line 1486
extern signed int QRinput_Struct_appendInput(struct _QRinput_Struct *s, struct _QRinput *input);
// QRinput_Struct_calcParity
// file qrinput.c line 1525
static unsigned char QRinput_Struct_calcParity(struct _QRinput_Struct *s);
// QRinput_Struct_free
// file qrencode.h line 314
extern void QRinput_Struct_free(struct _QRinput_Struct *s);
// QRinput_Struct_insertStructuredAppendHeaders
// file qrinput.c line 1678
extern signed int QRinput_Struct_insertStructuredAppendHeaders(struct _QRinput_Struct *s);
// QRinput_Struct_new
// file qrinput.c line 1466
extern struct _QRinput_Struct * QRinput_Struct_new(void);
// QRinput_Struct_setParity
// file qrinput.c line 1481
extern void QRinput_Struct_setParity(struct _QRinput_Struct *s, unsigned char parity);
// QRinput_append
// file qrencode.h line 200
extern signed int QRinput_append(struct _QRinput *input, enum anonymous$8 mode, signed int size, const unsigned char *data);
// QRinput_appendECIheader
// file qrinput.c line 275
extern signed int QRinput_appendECIheader(struct _QRinput *input, unsigned int ecinum);
// QRinput_appendEntry
// file qrinput.c line 210
static void QRinput_appendEntry(struct _QRinput *input, struct _QRinput_List *entry);
// QRinput_appendPaddingBit
// file qrinput.c line 1191
static signed int QRinput_appendPaddingBit(struct anonymous$9 *bstream, struct _QRinput *input);
// QRinput_appendPaddingBitMQR
// file qrinput.c line 1256
static signed int QRinput_appendPaddingBitMQR(struct anonymous$9 *bstream, struct _QRinput *input);
// QRinput_calcParity
// file qrinput.c line 308
static unsigned char QRinput_calcParity(struct _QRinput *input);
// QRinput_check
// file qrinput.c line 864
extern signed int QRinput_check(enum anonymous$8 mode, signed int size, const unsigned char *data);
// QRinput_checkModeAn
// file qrinput.c line 482
static signed int QRinput_checkModeAn(signed int size, const char *data);
// QRinput_checkModeFNC1Second
// file qrinput.c line 765
static signed int QRinput_checkModeFNC1Second(signed int size, const unsigned char *data);
// QRinput_checkModeKanji
// file qrinput.c line 647
static signed int QRinput_checkModeKanji(signed int size, const unsigned char *data);
// QRinput_checkModeNum
// file qrinput.c line 363
static signed int QRinput_checkModeNum(signed int size, const char *data);
// QRinput_convertData
// file qrinput.c line 1154
static signed int QRinput_convertData(struct _QRinput *input);
// QRinput_createBitStream
// file qrinput.c line 1127
static signed int QRinput_createBitStream(struct _QRinput *input);
// QRinput_decodeECIfromByteArray
// file qrinput.c line 795
static unsigned int QRinput_decodeECIfromByteArray(unsigned char *data);
// QRinput_dup
// file qrinput.c line 327
extern struct _QRinput * QRinput_dup(struct _QRinput *input);
// QRinput_encodeBitStream
// file qrinput.c line 1053
static signed int QRinput_encodeBitStream(struct _QRinput_List *entry, signed int version, signed int mqr);
// QRinput_encodeMode8
// file qrinput.c line 593
static signed int QRinput_encodeMode8(struct _QRinput_List *entry, signed int version, signed int mqr);
// QRinput_encodeModeAn
// file qrinput.c line 523
static signed int QRinput_encodeModeAn(struct _QRinput_List *entry, signed int version, signed int mqr);
// QRinput_encodeModeECI
// file qrinput.c line 825
static signed int QRinput_encodeModeECI(struct _QRinput_List *entry, signed int version);
// QRinput_encodeModeFNC1Second
// file qrinput.c line 772
static signed int QRinput_encodeModeFNC1Second(struct _QRinput_List *entry, signed int version);
// QRinput_encodeModeKanji
// file qrinput.c line 675
static signed int QRinput_encodeModeKanji(struct _QRinput_List *entry, signed int version, signed int mqr);
// QRinput_encodeModeNum
// file qrinput.c line 410
static signed int QRinput_encodeModeNum(struct _QRinput_List *entry, signed int version, signed int mqr);
// QRinput_encodeModeStructure
// file qrinput.c line 734
static signed int QRinput_encodeModeStructure(struct _QRinput_List *entry, signed int mqr);
// QRinput_estimateBitStreamSize
// file qrinput.c line 958
extern signed int QRinput_estimateBitStreamSize(struct _QRinput *input, signed int version);
// QRinput_estimateBitStreamSizeOfEntry
// file qrinput.c line 903
static signed int QRinput_estimateBitStreamSizeOfEntry(struct _QRinput_List *entry, signed int version, signed int mqr);
// QRinput_estimateBitsMode8
// file qrinput.c line 579
extern signed int QRinput_estimateBitsMode8(signed int size);
// QRinput_estimateBitsModeAn
// file qrinput.c line 499
extern signed int QRinput_estimateBitsModeAn(signed int size);
// QRinput_estimateBitsModeECI
// file qrinput.c line 809
signed int QRinput_estimateBitsModeECI(unsigned char *data);
// QRinput_estimateBitsModeKanji
// file qrinput.c line 636
extern signed int QRinput_estimateBitsModeKanji(signed int size);
// QRinput_estimateBitsModeNum
// file qrinput.c line 380
extern signed int QRinput_estimateBitsModeNum(signed int size);
// QRinput_estimateVersion
// file qrinput.c line 977
static signed int QRinput_estimateVersion(struct _QRinput *input);
// QRinput_free
// file qrencode.h line 265
extern void QRinput_free(struct _QRinput *input);
// QRinput_getBitStream
// file qrinput.c line 1398
extern struct anonymous$9 * QRinput_getBitStream(struct _QRinput *input);
// QRinput_getByteStream
// file qrinput.h line 78
extern unsigned char * QRinput_getByteStream(struct _QRinput *input);
// QRinput_getErrorCorrectionLevel
// file qrinput.c line 173
extern enum anonymous$7 QRinput_getErrorCorrectionLevel(struct _QRinput *input);
// QRinput_getVersion
// file qrinput.c line 156
extern signed int QRinput_getVersion(struct _QRinput *input);
// QRinput_insertFNC1Header
// file qrinput.c line 1325
static signed int QRinput_insertFNC1Header(struct _QRinput *input);
// QRinput_insertStructuredAppendHeader
// file qrinput.c line 247
extern signed int QRinput_insertStructuredAppendHeader(struct _QRinput *input, signed int size, signed int number, unsigned char parity);
// QRinput_isSplittableMode
// file qrinput.c line 39
signed int QRinput_isSplittableMode(enum anonymous$8 mode);
// QRinput_lengthOfCode
// file qrinput.c line 1002
extern signed int QRinput_lengthOfCode(enum anonymous$8 mode, signed int version, signed int bits);
// QRinput_mergeBitStream
// file qrinput.c line 1355
extern struct anonymous$9 * QRinput_mergeBitStream(struct _QRinput *input);
// QRinput_new
// file qrinput.c line 110
extern struct _QRinput * QRinput_new(void);
// QRinput_new2
// file qrencode.h line 172
extern struct _QRinput * QRinput_new2(signed int version, enum anonymous$7 level);
// QRinput_newMQR
// file qrencode.h line 184
extern struct _QRinput * QRinput_newMQR(signed int version, enum anonymous$7 level);
// QRinput_setErrorCorrectionLevel
// file qrinput.c line 178
extern signed int QRinput_setErrorCorrectionLevel(struct _QRinput *input, enum anonymous$7 level);
// QRinput_setFNC1First
// file qrinput.c line 1706
extern signed int QRinput_setFNC1First(struct _QRinput *input);
// QRinput_setFNC1Second
// file qrinput.c line 1717
extern signed int QRinput_setFNC1Second(struct _QRinput *input, unsigned char appid);
// QRinput_setVersion
// file qrinput.c line 161
extern signed int QRinput_setVersion(struct _QRinput *input, signed int version);
// QRinput_setVersionAndErrorCorrectionLevel
// file qrinput.c line 190
extern signed int QRinput_setVersionAndErrorCorrectionLevel(struct _QRinput *input, signed int version, enum anonymous$7 level);
// QRinput_splitEntry
// file qrinput.c line 1556
extern signed int QRinput_splitEntry(struct _QRinput_List *entry, signed int bytes);
// QRinput_splitQRinputToStruct
// file qrencode.h line 328
extern struct _QRinput_Struct * QRinput_splitQRinputToStruct(struct _QRinput *input);
// QRraw_free
// file qrencode.c line 185
void QRraw_free(struct anonymous$4 *raw);
// QRraw_getCode
// file qrencode.c line 162
unsigned char QRraw_getCode(struct anonymous$4 *raw);
// QRraw_new
// file qrencode.c line 112
struct anonymous$4 * QRraw_new(struct _QRinput *input);
// QRspec_clearCache
// file qrspec.h line 162
extern void QRspec_clearCache(void);
// QRspec_createFrame
// file qrspec.c line 439
static unsigned char * QRspec_createFrame(signed int version);
// QRspec_getDataLength
// file qrspec.h line 42
extern signed int QRspec_getDataLength(signed int version, enum anonymous$7 level);
// QRspec_getECCLength
// file qrspec.h line 50
extern signed int QRspec_getECCLength(signed int version, enum anonymous$7 level);
// QRspec_getEccSpec
// file qrspec.h line 106
void QRspec_getEccSpec(signed int version, enum anonymous$7 level, signed int *spec);
// QRspec_getFormatInfo
// file qrspec.c line 386
extern unsigned int QRspec_getFormatInfo(signed int mask, enum anonymous$7 level);
// QRspec_getMinimumVersion
// file qrspec.h line 58
extern signed int QRspec_getMinimumVersion(signed int size, enum anonymous$7 level);
// QRspec_getRemainder
// file qrspec.h line 72
extern signed int QRspec_getRemainder(signed int version);
// QRspec_getVersionPattern
// file qrspec.c line 367
extern unsigned int QRspec_getVersionPattern(signed int version);
// QRspec_getWidth
// file qrspec.h line 65
extern signed int QRspec_getWidth(signed int version);
// QRspec_lengthIndicator
// file qrspec.h line 84
extern signed int QRspec_lengthIndicator(enum anonymous$8 mode, signed int version);
// QRspec_maximumWords
// file qrspec.h line 92
extern signed int QRspec_maximumWords(enum anonymous$8 mode, signed int version);
// QRspec_newFrame
// file qrspec.h line 157
extern unsigned char * QRspec_newFrame(signed int version);
// QRspec_putAlignmentMarker
// file qrspec.c line 290
static void QRspec_putAlignmentMarker(unsigned char *frame, signed int width, signed int ox, signed int oy);
// QRspec_putAlignmentPattern
// file qrspec.c line 313
static void QRspec_putAlignmentPattern(signed int version, unsigned char *frame, signed int width);
// RSblock_init
// file qrencode.c line 72
static signed int RSblock_init(struct anonymous$3 *blocks, signed int *spec, unsigned char *data, unsigned char *ecc);
// RSblock_initBlock
// file qrencode.c line 62
static void RSblock_initBlock(struct anonymous$3 *block, signed int dl, unsigned char *data, signed int el, unsigned char *ecc, struct _RS *rs);
// Split_eat8
// file split.c line 189
static signed int Split_eat8(const char *string, struct _QRinput *input, enum anonymous$8 hint);
// Split_eatAn
// file split.c line 123
static signed int Split_eatAn(const char *string, struct _QRinput *input, enum anonymous$8 hint);
// Split_eatKanji
// file split.c line 172
static signed int Split_eatKanji(const char *string, struct _QRinput *input, enum anonymous$8 hint);
// Split_eatNum
// file split.c line 83
static signed int Split_eatNum(const char *string, struct _QRinput *input, enum anonymous$8 hint);
// Split_identifyMode
// file split.c line 53
static enum anonymous$8 Split_identifyMode(const char *string, enum anonymous$8 hint);
// Split_splitString
// file split.c line 259
static signed int Split_splitString(const char *string, struct _QRinput *input, enum anonymous$8 hint);
// Split_splitStringToQRinput
// file split.h line 44
extern signed int Split_splitStringToQRinput(const char *string, struct _QRinput *input, enum anonymous$8 hint, signed int casesensitive);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// dupAndToUpper
// file split.c line 282
static char * dupAndToUpper(const char *str, enum anonymous$8 hint);
// encode_rs_char
// file rscode.h line 37
extern void encode_rs_char(struct _RS *rs, const unsigned char *data, unsigned char *parity);
// encode_ver1to10
// file pthread_qrencode.c line 29
void * encode_ver1to10(void *arg);
// encode_ver31to40
// file pthread_qrencode.c line 64
void * encode_ver31to40(void *arg);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_rs_cache
// file rscode.h line 39
extern void free_rs_cache(void);
// free_rs_char
// file rscode.c line 243
extern void free_rs_char(struct _RS *rs);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// init_rs
// file rscode.h line 36
extern struct _RS * init_rs(signed int symsize, signed int gfpoly, signed int fcr, signed int prim, signed int nroots, signed int pad);
// init_rs_char
// file rscode.c line 99
static struct _RS * init_rs_char(signed int symsize, signed int gfpoly, signed int fcr, signed int prim, signed int nroots, signed int pad);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// modnn
// file rscode.c line 67
static inline signed int modnn(struct _RS *rs, signed int x);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// prof_ver1to10
// file pthread_qrencode.c line 50
void prof_ver1to10(void);
// prof_ver31to40
// file pthread_qrencode.c line 85
void prof_ver31to40(void);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// putFinderPattern
// file qrspec.c line 413
static void putFinderPattern(unsigned char *frame, signed int width, signed int ox, signed int oy);
// putFinderPattern$link1
// file mqrspec.c line 175
static void putFinderPattern$link1(unsigned char *frame$link1, signed int width$link1, signed int ox$link1, signed int oy$link1);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// timerStart
// file pthread_qrencode.c line 14
void timerStart(const char *str);
// timerStop
// file pthread_qrencode.c line 20
void timerStop(void);

struct anonymous$3
{
  // dataLength
  signed int dataLength;
  // data
  unsigned char *data;
  // eccLength
  signed int eccLength;
  // ecc
  unsigned char *ecc;
};

struct anonymous$9
{
  // length
  signed int length;
  // data
  unsigned char *data;
};

struct anonymous$5
{
  // version
  signed int version;
  // dataLength
  signed int dataLength;
  // eccLength
  signed int eccLength;
  // datacode
  unsigned char *datacode;
  // ecccode
  unsigned char *ecccode;
  // rsblock
  struct anonymous$3 *rsblock;
  // oddbits
  signed int oddbits;
  // count
  signed int count;
};

struct anonymous$4
{
  // version
  signed int version;
  // dataLength
  signed int dataLength;
  // eccLength
  signed int eccLength;
  // datacode
  unsigned char *datacode;
  // ecccode
  unsigned char *ecccode;
  // b1
  signed int b1;
  // blocks
  signed int blocks;
  // rsblock
  struct anonymous$3 *rsblock;
  // count
  signed int count;
};

struct anonymous$1
{
  // version
  signed int version;
  // width
  signed int width;
  // data
  unsigned char *data;
};

struct anonymous
{
  // width
  signed int width;
  // ec
  signed int ec[4l];
};

struct anonymous$2
{
  // width
  signed int width;
  // words
  signed int words;
  // remainder
  signed int remainder;
  // ec
  signed int ec[4l];
};

struct anonymous$6
{
  // width
  signed int width;
  // frame
  unsigned char *frame;
  // x
  signed int x;
  // y
  signed int y;
  // dir
  signed int dir;
  // bit
  signed int bit;
  // mqr
  signed int mqr;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous$0
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct _QRcode_List
{
  // code
  struct anonymous$1 *code;
  // next
  struct _QRcode_List *next;
};

struct _QRinput
{
  // version
  signed int version;
  // level
  enum anonymous$7 level;
  // head
  struct _QRinput_List *head;
  // tail
  struct _QRinput_List *tail;
  // mqr
  signed int mqr;
  // fnc1
  signed int fnc1;
  // appid
  unsigned char appid;
};

struct _QRinput_InputList
{
  // input
  struct _QRinput *input;
  // next
  struct _QRinput_InputList *next;
};

struct _QRinput_List
{
  // mode
  enum anonymous$8 mode;
  // size
  signed int size;
  // data
  unsigned char *data;
  // bstream
  struct anonymous$9 *bstream;
  // next
  struct _QRinput_List *next;
};

struct _QRinput_Struct
{
  // size
  signed int size;
  // parity
  signed int parity;
  // head
  struct _QRinput_InputList *head;
  // tail
  struct _QRinput_InputList *tail;
};

struct _RS
{
  // mm
  signed int mm;
  // nn
  signed int nn;
  // alpha_to
  unsigned char *alpha_to;
  // index_of
  unsigned char *index_of;
  // genpoly
  unsigned char *genpoly;
  // nroots
  signed int nroots;
  // fcr
  signed int fcr;
  // prim
  signed int prim;
  // iprim
  signed int iprim;
  // pad
  signed int pad;
  // gfpoly
  signed int gfpoly;
  // next
  struct _RS *next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};


// QRinput_anTable
// file qrinput.c line 465
const signed char QRinput_anTable[128l] = { (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)36, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)37, (const signed char)38, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)39, (const signed char)40, (const signed char)-1, (const signed char)41, (const signed char)42, (const signed char)43, (const signed char)0, (const signed char)1, (const signed char)2, (const signed char)3, (const signed char)4, (const signed char)5, (const signed char)6, (const signed char)7, (const signed char)8, (const signed char)9, (const signed char)44, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)10, (const signed char)11, (const signed char)12, (const signed char)13, (const signed char)14, (const signed char)15, (const signed char)16, (const signed char)17, (const signed char)18, (const signed char)19, (const signed char)20, (const signed char)21, (const signed char)22, (const signed char)23, (const signed char)24, (const signed char)25, (const signed char)26, (const signed char)27, (const signed char)28, (const signed char)29, (const signed char)30, (const signed char)31, (const signed char)32, (const signed char)33, (const signed char)34, (const signed char)35, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1, (const signed char)-1 };
// alignmentPattern
// file qrspec.c line 272
static const signed int alignmentPattern[41l][2l] = { { 0, 0 }, { 0, 0 }, { 18, 0 }, { 22, 0 }, { 26, 0 }, { 30, 0 }, { 34, 0 }, { 22, 38 }, { 24, 42 }, { 26, 46 }, { 28, 50 }, { 30, 54 }, { 32, 58 }, { 34, 62 }, { 26, 46 }, { 26, 48 }, { 26, 50 }, { 30, 54 }, { 30, 56 }, { 30, 58 }, { 34, 62 }, { 28, 50 }, { 26, 50 }, { 30, 54 }, { 28, 54 }, { 32, 58 }, { 30, 58 }, { 34, 62 }, { 26, 50 }, { 30, 54 }, { 26, 52 }, { 30, 56 }, { 34, 60 }, { 30, 58 }, { 34, 62 }, { 30, 54 }, { 24, 50 }, { 28, 54 }, { 32, 58 }, { 26, 54 }, { 30, 58 } };
// eccTable
// file qrspec.c line 193
static const signed int eccTable[41l][4l][2l] = { { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } },
    { { 1, 0 }, { 1, 0 }, { 1, 0 }, { 1, 0 } },
    { { 1, 0 }, { 1, 0 }, { 1, 0 }, { 1, 0 } },
    { { 1, 0 }, { 1, 0 }, { 2, 0 }, { 2, 0 } },
    { { 1, 0 }, { 2, 0 }, { 2, 0 }, { 4, 0 } },
    { { 1, 0 }, { 2, 0 }, { 2, 2 }, { 2, 2 } },
    { { 2, 0 }, { 4, 0 }, { 4, 0 }, { 4, 0 } },
    { { 2, 0 }, { 4, 0 }, { 2, 4 }, { 4, 1 } },
    { { 2, 0 }, { 2, 2 }, { 4, 2 }, { 4, 2 } },
    { { 2, 0 }, { 3, 2 }, { 4, 4 }, { 4, 4 } },
    { { 2, 2 }, { 4, 1 }, { 6, 2 }, { 6, 2 } },
    { { 4, 0 }, { 1, 4 }, { 4, 4 }, { 3, 8 } },
    { { 2, 2 }, { 6, 2 }, { 4, 6 }, { 7, 4 } },
    { { 4, 0 }, { 8, 1 }, { 8, 4 }, { 12, 4 } },
    { { 3, 1 }, { 4, 5 }, { 11, 5 }, { 11, 5 } },
    { { 5, 1 }, { 5, 5 }, { 5, 7 }, { 11, 7 } },
    { { 5, 1 }, { 7, 3 }, { 15, 2 }, { 3, 13 } },
    { { 1, 5 }, { 10, 1 }, { 1, 15 }, { 2, 17 } },
    { { 5, 1 }, { 9, 4 }, { 17, 1 }, { 2, 19 } },
    { { 3, 4 }, { 3, 11 }, { 17, 4 }, { 9, 16 } },
    { { 3, 5 }, { 3, 13 }, { 15, 5 }, { 15, 10 } },
    { { 4, 4 }, { 17, 0 }, { 17, 6 }, { 19, 6 } },
    { { 2, 7 }, { 17, 0 }, { 7, 16 }, { 34, 0 } },
    { { 4, 5 }, { 4, 14 }, { 11, 14 }, { 16, 14 } },
    { { 6, 4 }, { 6, 14 }, { 11, 16 }, { 30, 2 } },
    { { 8, 4 }, { 8, 13 }, { 7, 22 }, { 22, 13 } },
    { { 10, 2 }, { 19, 4 }, { 28, 6 }, { 33, 4 } },
    { { 8, 4 }, { 22, 3 }, { 8, 26 }, { 12, 28 } },
    { { 3, 10 }, { 3, 23 }, { 4, 31 }, { 11, 31 } },
    { { 7, 7 }, { 21, 7 }, { 1, 37 }, { 19, 26 } },
    { { 5, 10 }, { 19, 10 }, { 15, 25 }, { 23, 25 } },
    { { 13, 3 }, { 2, 29 }, { 42, 1 }, { 23, 28 } },
    { { 17, 0 }, { 10, 23 }, { 10, 35 }, { 19, 35 } },
    { { 17, 1 }, { 14, 21 }, { 29, 19 }, { 11, 46 } },
    { { 13, 6 }, { 14, 23 }, { 44, 7 }, { 59, 1 } },
    { { 12, 7 }, { 12, 26 }, { 39, 14 }, { 22, 41 } },
    { { 6, 14 }, { 6, 34 }, { 46, 10 }, { 2, 64 } },
    { { 17, 4 }, { 29, 14 }, { 49, 10 }, { 24, 46 } },
    { { 4, 18 }, { 13, 32 }, { 48, 14 }, { 42, 32 } },
    { { 20, 4 }, { 40, 7 }, { 43, 22 }, { 10, 67 } },
    { { 19, 6 }, { 18, 31 }, { 34, 34 }, { 20, 61 } } };
// formatInfo
// file qrspec.c line 379
static const unsigned int formatInfo[4l][8l] = { { (const unsigned int)0x77c4, (const unsigned int)0x72f3, (const unsigned int)0x7daa, (const unsigned int)0x789d, (const unsigned int)0x662f, (const unsigned int)0x6318, (const unsigned int)0x6c41, (const unsigned int)0x6976 },
    { (const unsigned int)0x5412, (const unsigned int)0x5125, (const unsigned int)0x5e7c, (const unsigned int)0x5b4b, (const unsigned int)0x45f9, (const unsigned int)0x40ce, (const unsigned int)0x4f97, (const unsigned int)0x4aa0 },
    { (const unsigned int)0x355f, (const unsigned int)0x3068, (const unsigned int)0x3f31, (const unsigned int)0x3a06, (const unsigned int)0x24b4, (const unsigned int)0x2183, (const unsigned int)0x2eda, (const unsigned int)0x2bed },
    { (const unsigned int)0x1689, (const unsigned int)0x13be, (const unsigned int)0x1ce7, (const unsigned int)0x19d0, (const unsigned int)0x0762, (const unsigned int)0x0255, (const unsigned int)0x0d0c, (const unsigned int)0x083b } };
// formatInfo$link1
// file mqrspec.c line 126
static const unsigned int formatInfo$link1[4l][8l] = { { (const unsigned int)0x4445, (const unsigned int)0x55ae, (const unsigned int)0x6793, (const unsigned int)0x7678, (const unsigned int)0x06de, (const unsigned int)0x1735, (const unsigned int)0x2508, (const unsigned int)0x34e3 },
    { (const unsigned int)0x4172, (const unsigned int)0x5099, (const unsigned int)0x62a4, (const unsigned int)0x734f, (const unsigned int)0x03e9, (const unsigned int)0x1202, (const unsigned int)0x203f, (const unsigned int)0x31d4 },
    { (const unsigned int)0x4e2b, (const unsigned int)0x5fc0, (const unsigned int)0x6dfd, (const unsigned int)0x7c16, (const unsigned int)0x0cb0, (const unsigned int)0x1d5b, (const unsigned int)0x2f66, (const unsigned int)0x3e8d },
    { (const unsigned int)0x4b1c, (const unsigned int)0x5af7, (const unsigned int)0x68ca, (const unsigned int)0x7921, (const unsigned int)0x0987, (const unsigned int)0x186c, (const unsigned int)0x2a51, (const unsigned int)0x3bba } };
// frames
// file qrspec.c line 402
static unsigned char *frames[41l];
// frames$link1
// file mqrspec.c line 164
static unsigned char *frames$link1[5l];
// frames_mutex
// file qrspec.c line 404
static union anonymous$0 frames_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// frames_mutex$link1
// file mqrspec.c line 166
static union anonymous$0 frames_mutex$link1 = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// lengthTableBits
// file qrspec.c line 138
static const signed int lengthTableBits[4l][3l] = { { 10, 12, 14 }, { 9, 11, 13 }, { 8, 16, 16 }, { 8, 10, 12 } };
// lengthTableBits$link1
// file mqrspec.c line 95
static const signed int lengthTableBits$link1[4l][4l] = { { 3, 4, 5, 6 }, { 0, 3, 4, 5 }, { 0, 0, 4, 5 }, { 0, 0, 3, 4 } };
// maskMakers
// file mask.c line 145
static signed int (*maskMakers[8l])(signed int, const unsigned char *, unsigned char *);
// maskMakers
// file mask.c line 145
static signed int (*maskMakers[8l])(signed int, const unsigned char *, unsigned char *) = { Mask_mask0, Mask_mask1, Mask_mask2, Mask_mask3, Mask_mask4, Mask_mask5, Mask_mask6, Mask_mask7 };
// maskMakers$link1
// file mmask.c line 90
static void (*maskMakers$link1[4l])(signed int, const unsigned char *, unsigned char *);
// maskMakers$link1
// file mmask.c line 90
static void (*maskMakers$link1[4l])(signed int, const unsigned char *, unsigned char *) = { Mask_mask0$link1, Mask_mask1$link1, Mask_mask2$link1, Mask_mask3$link1 };
// mqrspecCapacity
// file mqrspec.c line 54
static const struct anonymous mqrspecCapacity[5l] = { { .width=0, .ec={ 0, 0, 0, 0 } }, { .width=11, .ec={ 2, 0, 0, 0 } }, { .width=13, .ec={ 5, 6, 0, 0 } }, { .width=15, .ec={ 6, 8, 0, 0 } }, { .width=17, .ec={ 8, 10, 14, 0 } } };
// qrspecCapacity
// file qrspec.c line 57
static const struct anonymous$2 qrspecCapacity[41l] = { { .width=0, .words=0, .remainder=0, .ec={ 0, 0, 0, 0 } },
    { .width=21, .words=26, .remainder=0, .ec={ 7, 10, 13, 17 } },
    { .width=25, .words=44, .remainder=7, .ec={ 10, 16, 22, 28 } },
    { .width=29, .words=70, .remainder=7, .ec={ 15, 26, 36, 44 } },
    { .width=33, .words=100, .remainder=7, .ec={ 20, 36, 52, 64 } },
    { .width=37, .words=134, .remainder=7, .ec={ 26, 48, 72, 88 } },
    { .width=41, .words=172, .remainder=7, .ec={ 36, 64, 96, 112 } },
    { .width=45, .words=196, .remainder=0, .ec={ 40, 72, 108, 130 } },
    { .width=49, .words=242, .remainder=0, .ec={ 48, 88, 132, 156 } },
    { .width=53, .words=292, .remainder=0, .ec={ 60, 110, 160, 192 } },
    { .width=57, .words=346, .remainder=0, .ec={ 72, 130, 192, 224 } },
    { .width=61, .words=404, .remainder=0, .ec={ 80, 150, 224, 264 } },
    { .width=65, .words=466, .remainder=0, .ec={ 96, 176, 260, 308 } },
    { .width=69, .words=532, .remainder=0, .ec={ 104, 198, 288, 352 } },
    { .width=73, .words=581, .remainder=3, .ec={ 120, 216, 320, 384 } },
    { .width=77, .words=655, .remainder=3, .ec={ 132, 240, 360, 432 } },
    { .width=81, .words=733, .remainder=3, .ec={ 144, 280, 408, 480 } },
    { .width=85, .words=815, .remainder=3, .ec={ 168, 308, 448, 532 } },
    { .width=89, .words=901, .remainder=3, .ec={ 180, 338, 504, 588 } },
    { .width=93, .words=991, .remainder=3, .ec={ 196, 364, 546, 650 } },
    { .width=97, .words=1085, .remainder=3, .ec={ 224, 416, 600, 700 } },
    { .width=101, .words=1156, .remainder=4, .ec={ 224, 442, 644, 750 } },
    { .width=105, .words=1258, .remainder=4, .ec={ 252, 476, 690, 816 } },
    { .width=109, .words=1364, .remainder=4, .ec={ 270, 504, 750, 900 } },
    { .width=113, .words=1474, .remainder=4, .ec={ 300, 560, 810, 960 } },
    { .width=117, .words=1588, .remainder=4, .ec={ 312, 588, 870, 1050 } },
    { .width=121, .words=1706, .remainder=4, .ec={ 336, 644, 952, 1110 } },
    { .width=125, .words=1828, .remainder=4, .ec={ 360, 700, 1020, 1200 } },
    { .width=129, .words=1921, .remainder=3, .ec={ 390, 728, 1050, 1260 } },
    { .width=133, .words=2051, .remainder=3, .ec={ 420, 784, 1140, 1350 } },
    { .width=137, .words=2185, .remainder=3, .ec={ 450, 812, 1200, 1440 } },
    { .width=141, .words=2323, .remainder=3, .ec={ 480, 868, 1290, 1530 } },
    { .width=145, .words=2465, .remainder=3, .ec={ 510, 924, 1350, 1620 } },
    { .width=149, .words=2611, .remainder=3, .ec={ 540, 980, 1440, 1710 } },
    { .width=153, .words=2761, .remainder=3, .ec={ 570, 1036, 1530, 1800 } },
    { .width=157, .words=2876, .remainder=0, .ec={ 570, 1064, 1590, 1890 } },
    { .width=161, .words=3034, .remainder=0, .ec={ 600, 1120, 1680, 1980 } },
    { .width=165, .words=3196, .remainder=0, .ec={ 630, 1204, 1770, 2100 } },
    { .width=169, .words=3362, .remainder=0, .ec={ 660, 1260, 1860, 2220 } },
    { .width=173, .words=3532, .remainder=0, .ec={ 720, 1316, 1950, 2310 } },
    { .width=177, .words=3706, .remainder=0, .ec={ 750, 1372, 2040, 2430 } } };
// rslist
// file rscode.c line 62
static struct _RS *rslist = (struct _RS *)(void *)0;
// rslist_mutex
// file rscode.c line 64
static union anonymous$0 rslist_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// threads
// file pthread_qrencode.c line 11
static unsigned long int threads[10l];
// tv
// file pthread_qrencode.c line 13
struct timeval tv;
// typeTable
// file mqrspec.c line 134
static const signed int typeTable[5l][3l] = { { -1, -1, -1 }, { 0, -1, -1 }, { 1, 2, -1 }, { 3, 4, -1 }, { 5, 6, 7 } };
// versionPattern
// file qrspec.c line 359
static const unsigned int versionPattern[34l] = { (const unsigned int)0x07c94, (const unsigned int)0x085bc, (const unsigned int)0x09a99, (const unsigned int)0x0a4d3, (const unsigned int)0x0bbf6, (const unsigned int)0x0c762, (const unsigned int)0x0d847, (const unsigned int)0x0e60d, (const unsigned int)0x0f928, (const unsigned int)0x10b78, (const unsigned int)0x1145d, (const unsigned int)0x12a17, (const unsigned int)0x13532, (const unsigned int)0x149a6, (const unsigned int)0x15683, (const unsigned int)0x168c9, (const unsigned int)0x177ec, (const unsigned int)0x18ec4, (const unsigned int)0x191e1, (const unsigned int)0x1afab, (const unsigned int)0x1b08e, (const unsigned int)0x1cc1a, (const unsigned int)0x1d33f, (const unsigned int)0x1ed75, (const unsigned int)0x1f250, (const unsigned int)0x209d5, (const unsigned int)0x216f0, (const unsigned int)0x228ba, (const unsigned int)0x2379f, (const unsigned int)0x24b0b, (const unsigned int)0x2542e, (const unsigned int)0x26a64, (const unsigned int)0x27541, (const unsigned int)0x28c69 };

// BitStream_allocate
// file bitstream.c line 44
static signed int BitStream_allocate(struct anonymous$9 *bstream, signed int length)
{
  unsigned char *data;
  if(bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)length);
    data = (unsigned char *)return_value_malloc$1;
    if(data == ((unsigned char *)NULL))
      return -1;

    else
    {
      if(!(bstream->data == ((unsigned char *)NULL)))
        free((void *)bstream->data);

      bstream->length = length;
      bstream->data = data;
      return 0;
    }
  }
}

// BitStream_append
// file bitstream.h line 31
extern signed int BitStream_append(struct anonymous$9 *bstream, struct anonymous$9 *arg)
{
  unsigned char *data;
  if(arg == ((struct anonymous$9 *)NULL))
    return -1;

  else
    if(arg->length == 0)
      return 0;

    else
    {
      if(bstream->length == 0)
      {
        signed int return_value_BitStream_allocate$1;
        return_value_BitStream_allocate$1=BitStream_allocate(bstream, arg->length);
        if(!(return_value_BitStream_allocate$1 == 0))
          return -1;

        memcpy((void *)bstream->data, (const void *)arg->data, (unsigned long int)arg->length);
        return 0;
      }

      void *return_value_malloc$2;
      return_value_malloc$2=malloc((unsigned long int)(bstream->length + arg->length));
      data = (unsigned char *)return_value_malloc$2;
      if(data == ((unsigned char *)NULL))
        return -1;

      else
      {
        memcpy((void *)data, (const void *)bstream->data, (unsigned long int)bstream->length);
        memcpy((void *)(data + (signed long int)bstream->length), (const void *)arg->data, (unsigned long int)arg->length);
        free((void *)bstream->data);
        bstream->length = bstream->length + arg->length;
        bstream->data = data;
        return 0;
      }
    }
}

// BitStream_appendBytes
// file bitstream.h line 33
extern signed int BitStream_appendBytes(struct anonymous$9 *bstream, signed int size, unsigned char *data)
{
  struct anonymous$9 *b;
  signed int ret;
  if(size == 0)
    return 0;

  else
  {
    b=BitStream_newFromBytes(size, data);
    if(b == ((struct anonymous$9 *)NULL))
      return -1;

    else
    {
      ret=BitStream_append(bstream, b);
      BitStream_free(b);
      return ret;
    }
  }
}

// BitStream_appendNum
// file bitstream.h line 32
extern signed int BitStream_appendNum(struct anonymous$9 *bstream, signed int bits, unsigned int num)
{
  struct anonymous$9 *b;
  signed int ret;
  if(bits == 0)
    return 0;

  else
  {
    b=BitStream_newFromNum(bits, num);
    if(b == ((struct anonymous$9 *)NULL))
      return -1;

    else
    {
      ret=BitStream_append(bstream, b);
      BitStream_free(b);
      return ret;
    }
  }
}

// BitStream_free
// file bitstream.h line 36
extern void BitStream_free(struct anonymous$9 *bstream)
{
  if(!(bstream == ((struct anonymous$9 *)NULL)))
  {
    free((void *)bstream->data);
    free((void *)bstream);
  }

}

// BitStream_new
// file bitstream.h line 30
extern struct anonymous$9 * BitStream_new(void)
{
  struct anonymous$9 *bstream;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$9) /*16ul*/ );
  bstream = (struct anonymous$9 *)return_value_malloc$1;
  if(bstream == ((struct anonymous$9 *)NULL))
    return (struct anonymous$9 *)(void *)0;

  else
  {
    bstream->length = 0;
    bstream->data = (unsigned char *)(void *)0;
    return bstream;
  }
}

// BitStream_newFromBytes
// file bitstream.c line 96
static struct anonymous$9 * BitStream_newFromBytes(signed int size, unsigned char *data)
{
  unsigned char mask;
  signed int i;
  signed int j;
  unsigned char *p;
  struct anonymous$9 *bstream;
  bstream=BitStream_new();
  if(bstream == ((struct anonymous$9 *)NULL))
    return (struct anonymous$9 *)(void *)0;

  else
  {
    signed int return_value_BitStream_allocate$1;
    return_value_BitStream_allocate$1=BitStream_allocate(bstream, size * 8);
    if(!(return_value_BitStream_allocate$1 == 0))
    {
      BitStream_free(bstream);
      return (struct anonymous$9 *)(void *)0;
    }

    else
    {
      p = bstream->data;
      i = 0;
      for( ; !(i >= size); i = i + 1)
      {
        mask = (unsigned char)0x80;
        j = 0;
        for( ; !(j >= 8); j = j + 1)
        {
          if(!(((signed int)data[(signed long int)i] & (signed int)mask) == 0))
            *p = (unsigned char)1;

          else
            *p = (unsigned char)0;
          p = p + 1l;
          mask = (unsigned char)((signed int)mask >> 1);
        }
      }
      return bstream;
    }
  }
}

// BitStream_newFromNum
// file bitstream.c line 66
static struct anonymous$9 * BitStream_newFromNum(signed int bits, unsigned int num)
{
  unsigned int mask;
  signed int i;
  unsigned char *p;
  struct anonymous$9 *bstream;
  bstream=BitStream_new();
  if(bstream == ((struct anonymous$9 *)NULL))
    return (struct anonymous$9 *)(void *)0;

  else
  {
    signed int return_value_BitStream_allocate$1;
    return_value_BitStream_allocate$1=BitStream_allocate(bstream, bits);
    if(!(return_value_BitStream_allocate$1 == 0))
    {
      BitStream_free(bstream);
      return (struct anonymous$9 *)(void *)0;
    }

    else
    {
      p = bstream->data;
      mask = (unsigned int)(1 << bits - 1);
      i = 0;
      for( ; !(i >= bits); i = i + 1)
      {
        if(!((mask & num) == 0u))
          *p = (unsigned char)1;

        else
          *p = (unsigned char)0;
        p = p + 1l;
        mask = mask >> 1;
      }
      return bstream;
    }
  }
}

// BitStream_toByte
// file bitstream.h line 35
extern unsigned char * BitStream_toByte(struct anonymous$9 *bstream)
{
  signed int i;
  signed int j;
  signed int size;
  signed int bytes;
  unsigned char *data;
  unsigned char v;
  unsigned char *p;
  size = bstream->length;
  if(size == 0)
    return (unsigned char *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)((size + 7) / 8));
    data = (unsigned char *)return_value_malloc$1;
    if(data == ((unsigned char *)NULL))
      return (unsigned char *)(void *)0;

    else
    {
      bytes = size / 8;
      p = bstream->data;
      i = 0;
      for( ; !(i >= bytes); i = i + 1)
      {
        v = (unsigned char)0;
        j = 0;
        for( ; !(j >= 8); j = j + 1)
        {
          v = (unsigned char)((signed int)v << 1);
          v = v | *p;
          p = p + 1l;
        }
        data[(signed long int)i] = v;
      }
      if(!((7 & size) == 0))
      {
        v = (unsigned char)0;
        j = 0;
        for( ; !(j >= (7 & size)); j = j + 1)
        {
          v = (unsigned char)((signed int)v << 1);
          v = v | *p;
          p = p + 1l;
        }
        data[(signed long int)bytes] = v;
      }

      return data;
    }
  }
}

// FrameFiller_new
// file qrencode.c line 299
static struct anonymous$6 * FrameFiller_new(signed int width, unsigned char *frame, signed int mqr)
{
  struct anonymous$6 *filler;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$6) /*40ul*/ );
  filler = (struct anonymous$6 *)return_value_malloc$1;
  if(filler == ((struct anonymous$6 *)NULL))
    return (struct anonymous$6 *)(void *)0;

  else
  {
    filler->width = width;
    filler->frame = frame;
    filler->x = width - 1;
    filler->y = width - 1;
    filler->dir = -1;
    filler->bit = -1;
    filler->mqr = mqr;
    return filler;
  }
}

// FrameFiller_next
// file qrencode.c line 316
static unsigned char * FrameFiller_next(struct anonymous$6 *filler)
{
  unsigned char *p;
  signed int x;
  signed int y;
  signed int w;
  if(filler->bit == -1)
  {
    filler->bit = 0;
    return filler->frame + (signed long int)(filler->y * filler->width) + (signed long int)filler->x;
  }

  else
  {
    x = filler->x;
    y = filler->y;
    p = filler->frame;
    w = filler->width;
    if(filler->bit == 0)
    {
      x = x - 1;
      filler->bit = filler->bit + 1;
    }

    else
    {
      x = x + 1;
      y = y + filler->dir;
      filler->bit = filler->bit - 1;
    }
    if(!(filler->dir >= 0))
    {
      if(!(y >= 0))
      {
        y = 0;
        x = x - 2;
        filler->dir = 1;
        if(filler->mqr == 0)
        {
          if(x == 6)
          {
            x = x - 1;
            y = 9;
          }

        }

      }

    }

    else
      if(y == w)
      {
        y = w - 1;
        x = x - 2;
        filler->dir = -1;
        if(filler->mqr == 0)
        {
          if(x == 6)
          {
            x = x - 1;
            y = y - 8;
          }

        }

      }

    if(!(x >= 0) || !(y >= 0))
      return (unsigned char *)(void *)0;

    else
    {
      filler->x = x;
      filler->y = y;
      if(!((0x80 & (signed int)p[(signed long int)(w * y + x)]) == 0))
      {
        unsigned char *return_value_FrameFiller_next$1;
        return_value_FrameFiller_next$1=FrameFiller_next(filler);
        return return_value_FrameFiller_next$1;
      }

      return &p[(signed long int)(y * w + x)];
    }
  }
}

// FrameFiller_test
// file qrencode.c line 374
extern unsigned char * FrameFiller_test(signed int version)
{
  signed int width;
  unsigned char *frame;
  unsigned char *p;
  struct anonymous$6 *filler;
  signed int i;
  signed int length;
  width=QRspec_getWidth(version);
  frame=QRspec_newFrame(version);
  if(frame == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    filler=FrameFiller_new(width, frame, 0);
    if(filler == ((struct anonymous$6 *)NULL))
    {
      free((void *)frame);
      return (unsigned char *)(void *)0;
    }

    else
    {
      signed int return_value_QRspec_getDataLength$1;
      return_value_QRspec_getDataLength$1=QRspec_getDataLength(version, (enum anonymous$7)QR_ECLEVEL_L);
      signed int return_value_QRspec_getECCLength$2;
      return_value_QRspec_getECCLength$2=QRspec_getECCLength(version, (enum anonymous$7)QR_ECLEVEL_L);
      signed int return_value_QRspec_getRemainder$3;
      return_value_QRspec_getRemainder$3=QRspec_getRemainder(version);
      length = return_value_QRspec_getDataLength$1 * 8 + return_value_QRspec_getECCLength$2 * 8 + return_value_QRspec_getRemainder$3;
      i = 0;
      for( ; !(i >= length); i = i + 1)
      {
        p=FrameFiller_next(filler);
        if(p == ((unsigned char *)NULL))
        {
          free((void *)filler);
          free((void *)frame);
          return (unsigned char *)(void *)0;
        }

        *p = (unsigned char)((signed int)(unsigned char)(i & 0x7f) | 0x80);
      }
      free((void *)filler);
      return frame;
    }
  }
}

// FrameFiller_testMQR
// file qrencode.c line 405
extern unsigned char * FrameFiller_testMQR(signed int version)
{
  signed int width;
  unsigned char *frame;
  unsigned char *p;
  struct anonymous$6 *filler;
  signed int i;
  signed int length;
  width=MQRspec_getWidth(version);
  frame=MQRspec_newFrame(version);
  if(frame == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    filler=FrameFiller_new(width, frame, 1);
    if(filler == ((struct anonymous$6 *)NULL))
    {
      free((void *)frame);
      return (unsigned char *)(void *)0;
    }

    else
    {
      signed int return_value_MQRspec_getDataLengthBit$1;
      return_value_MQRspec_getDataLengthBit$1=MQRspec_getDataLengthBit(version, (enum anonymous$7)QR_ECLEVEL_L);
      signed int return_value_MQRspec_getECCLength$2;
      return_value_MQRspec_getECCLength$2=MQRspec_getECCLength(version, (enum anonymous$7)QR_ECLEVEL_L);
      length = return_value_MQRspec_getDataLengthBit$1 + return_value_MQRspec_getECCLength$2 * 8;
      i = 0;
      for( ; !(i >= length); i = i + 1)
      {
        p=FrameFiller_next(filler);
        if(p == ((unsigned char *)NULL))
        {
          fprintf(stderr, "Frame filler run over the frame!\n");
          free((void *)filler);
          return frame;
        }

        *p = (unsigned char)((signed int)(unsigned char)(i & 0x7f) | 0x80);
      }
      free((void *)filler);
      return frame;
    }
  }
}

// MMask_evaluateSymbol
// file mmask.c line 128
extern signed int MMask_evaluateSymbol(signed int width, unsigned char *frame)
{
  signed int x;
  signed int y;
  unsigned char *p;
  signed int sum1 = 0;
  signed int sum2 = 0;
  p = frame + (signed long int)(width * (width - 1));
  x = 1;
  for( ; !(x >= width); x = x + 1)
    sum1 = sum1 + ((signed int)p[(signed long int)x] & 1);
  p = (frame + (signed long int)(width * 2)) - (signed long int)1;
  y = 1;
  for( ; !(y >= width); y = y + 1)
  {
    sum2 = sum2 + ((signed int)*p & 1);
    p = p + (signed long int)width;
  }
  return sum1 <= sum2 ? sum1 * 16 + sum2 : sum2 * 16 + sum1;
}

// MMask_makeMask
// file mmask.h line 25
extern unsigned char * MMask_makeMask(signed int version, unsigned char *frame, signed int mask, enum anonymous$7 level)
{
  unsigned char *masked;
  signed int width;
  if(mask >= 4 || !(mask >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (unsigned char *)(void *)0;
  }

  width=MQRspec_getWidth(version);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)(width * width));
  masked = (unsigned char *)return_value_malloc$2;
  if(masked == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    maskMakers$link1[(signed long int)mask](width, frame, masked);
    MMask_writeFormatInformation(version, width, masked, mask, level);
    return masked;
  }
}

// MMask_makeMaskedFrame
// file mmask.c line 95
extern unsigned char * MMask_makeMaskedFrame(signed int width, unsigned char *frame, signed int mask)
{
  unsigned char *masked;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(width * width));
  masked = (unsigned char *)return_value_malloc$1;
  if(masked == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    maskMakers$link1[(signed long int)mask](width, frame, masked);
    return masked;
  }
}

// MMask_mask
// file mmask.h line 26
extern unsigned char * MMask_mask(signed int version, unsigned char *frame, enum anonymous$7 level)
{
  signed int i;
  unsigned char *mask;
  unsigned char *bestMask;
  signed int maxScore = 0;
  signed int score;
  signed int width;
  width=MQRspec_getWidth(version);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(width * width));
  mask = (unsigned char *)return_value_malloc$1;
  if(mask == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    bestMask = (unsigned char *)(void *)0;
    i = 0;
    if(!(i >= 4))
    {
      score = 0;
      maskMakers$link1[(signed long int)i](width, frame, mask);
      MMask_writeFormatInformation(version, width, mask, i, level);
      score=MMask_evaluateSymbol(width, mask);
      if(!(maxScore >= score))
      {
        maxScore = score;
        free((void *)bestMask);
        bestMask = mask;
        void *return_value_malloc$2;
        return_value_malloc$2=malloc((unsigned long int)(width * width));
        mask = (unsigned char *)return_value_malloc$2;
      }

      i = i + 1;
    }

    free((void *)mask);
    return bestMask;
  }
}

// MMask_writeFormatInformation
// file mmask.c line 34
extern void MMask_writeFormatInformation(signed int version, signed int width, unsigned char *frame, signed int mask, enum anonymous$7 level)
{
  unsigned int format;
  unsigned char v;
  signed int i;
  format=MQRspec_getFormatInfo(mask, version, level);
  i = 0;
  for( ; !(i >= 8); i = i + 1)
  {
    v = (unsigned char)((unsigned int)0x84 | format & (unsigned int)1);
    frame[(signed long int)(width * (i + 1) + 8)] = v;
    format = format >> 1;
  }
  i = 0;
  for( ; !(i >= 7); i = i + 1)
  {
    v = (unsigned char)((unsigned int)0x84 | format & (unsigned int)1);
    frame[(signed long int)((width * 8 + 7) - i)] = v;
    format = format >> 1;
  }
}

// MQRraw_free
// file qrencode.c line 275
void MQRraw_free(struct anonymous$5 *raw)
{
  if(!(raw == ((struct anonymous$5 *)NULL)))
  {
    free((void *)raw->datacode);
    free((void *)raw->ecccode);
    free((void *)raw->rsblock);
    free((void *)raw);
  }

}

// MQRraw_getCode
// file qrencode.c line 260
unsigned char MQRraw_getCode(struct anonymous$5 *raw)
{
  unsigned char ret;
  if(!(raw->count >= raw->dataLength))
    ret = raw->datacode[(signed long int)raw->count];

  else
    if(!(raw->count >= raw->dataLength + raw->eccLength))
      ret = raw->ecccode[(signed long int)(raw->count - raw->dataLength)];

    else
      return (unsigned char)0;
  raw->count = raw->count + 1;
  return ret;
}

// MQRraw_new
// file qrencode.c line 211
struct anonymous$5 * MQRraw_new(struct _QRinput *input)
{
  struct anonymous$5 *raw;
  struct _RS *rs;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$5) /*48ul*/ );
  raw = (struct anonymous$5 *)return_value_malloc$1;
  if(raw == ((struct anonymous$5 *)NULL))
    return (struct anonymous$5 *)(void *)0;

  else
  {
    raw->version = input->version;
    raw->dataLength=MQRspec_getDataLength(input->version, input->level);
    raw->eccLength=MQRspec_getECCLength(input->version, input->level);
    signed int return_value_MQRspec_getDataLengthBit$2;
    return_value_MQRspec_getDataLengthBit$2=MQRspec_getDataLengthBit(input->version, input->level);
    raw->oddbits = raw->dataLength * 8 - return_value_MQRspec_getDataLengthBit$2;
    raw->datacode=QRinput_getByteStream(input);
    if(raw->datacode == ((unsigned char *)NULL))
    {
      free((void *)raw);
      return (struct anonymous$5 *)(void *)0;
    }

    else
    {
      void *return_value_malloc$3;
      return_value_malloc$3=malloc((unsigned long int)raw->eccLength);
      raw->ecccode = (unsigned char *)return_value_malloc$3;
      if(raw->ecccode == ((unsigned char *)NULL))
      {
        free((void *)raw->datacode);
        free((void *)raw);
        return (struct anonymous$5 *)(void *)0;
      }

      else
      {
        void *return_value_calloc$4;
        return_value_calloc$4=calloc((unsigned long int)1, sizeof(struct anonymous$3) /*32ul*/ );
        raw->rsblock = (struct anonymous$3 *)return_value_calloc$4;
        if(raw->rsblock == ((struct anonymous$3 *)NULL))
        {
          MQRraw_free(raw);
          return (struct anonymous$5 *)(void *)0;
        }

        else
        {
          rs=init_rs(8, 0x11d, 0, 1, raw->eccLength, (255 - raw->dataLength) - raw->eccLength);
          if(rs == ((struct _RS *)NULL))
          {
            MQRraw_free(raw);
            return (struct anonymous$5 *)(void *)0;
          }

          else
          {
            RSblock_initBlock(raw->rsblock, raw->dataLength, raw->datacode, raw->eccLength, raw->ecccode, rs);
            raw->count = 0;
            return raw;
          }
        }
      }
    }
  }
}

// MQRspec_clearCache
// file mqrspec.h line 143
extern void MQRspec_clearCache(void)
{
  signed int i;
  pthread_mutex_lock(&frames_mutex$link1);
  i = 1;
  for( ; !(i >= 5); i = i + 1)
  {
    free((void *)frames$link1[(signed long int)i]);
    frames$link1[(signed long int)i] = (unsigned char *)(void *)0;
  }
  pthread_mutex_unlock(&frames_mutex$link1);
}

// MQRspec_createFrame
// file mqrspec.c line 200
static unsigned char * MQRspec_createFrame(signed int version)
{
  unsigned char *frame;
  unsigned char *p;
  unsigned char *q;
  signed int width;
  signed int x;
  signed int y;
  width = mqrspecCapacity[(signed long int)version].width;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(width * width));
  frame = (unsigned char *)return_value_malloc$1;
  if(frame == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    memset((void *)frame, 0, (unsigned long int)(width * width));
    putFinderPattern$link1(frame, width, 0, 0);
    p = frame;
    y = 0;
    for( ; !(y >= 7); y = y + 1)
    {
      p[(signed long int)7] = (unsigned char)0xc0;
      p = p + (signed long int)width;
    }
    memset((void *)(frame + (signed long int)(width * 7)), 0xc0, (unsigned long int)8);
    memset((void *)(frame + (signed long int)(width * 8) + (signed long int)1), 0x84, (unsigned long int)8);
    p = frame + (signed long int)width + (signed long int)8;
    y = 0;
    for( ; !(y >= 7); y = y + 1)
    {
      *p = (unsigned char)0x84;
      p = p + (signed long int)width;
    }
    p = frame + (signed long int)8;
    q = frame + (signed long int)(width * 8);
    x = 1;
    for( ; !(x >= width + -7); x = x + 1)
    {
      *p = (unsigned char)(0x90 | x & 1);
      *q = (unsigned char)(0x90 | x & 1);
      p = p + 1l;
      q = q + (signed long int)width;
    }
    return frame;
  }
}

// MQRspec_getDataLength
// file mqrspec.h line 50
extern signed int MQRspec_getDataLength(signed int version, enum anonymous$7 level)
{
  signed int return_value_MQRspec_getDataLengthBit$1;
  return_value_MQRspec_getDataLengthBit$1=MQRspec_getDataLengthBit(version, level);
  return (return_value_MQRspec_getDataLengthBit$1 + 4) / 8;
}

// MQRspec_getDataLengthBit
// file mqrspec.h line 42
extern signed int MQRspec_getDataLengthBit(signed int version, enum anonymous$7 level)
{
  signed int w;
  signed int ecc;
  w = mqrspecCapacity[(signed long int)version].width - 1;
  ecc = mqrspecCapacity[(signed long int)version].ec[(signed long int)level];
  if(ecc == 0)
    return 0;

  else
    return (w * w - 64) - ecc * 8;
}

// MQRspec_getECCLength
// file mqrspec.h line 58
extern signed int MQRspec_getECCLength(signed int version, enum anonymous$7 level)
{
  return mqrspecCapacity[(signed long int)version].ec[(signed long int)level];
}

// MQRspec_getFormatInfo
// file mqrspec.c line 142
extern unsigned int MQRspec_getFormatInfo(signed int mask, signed int version, enum anonymous$7 level)
{
  signed int type;
  if(mask >= 4 || !(mask >= 0))
    return (unsigned int)0;

  else
    if(version >= 5 || !(version >= 1))
      return (unsigned int)0;

    else
      if((signed int)level == QR_ECLEVEL_H)
        return (unsigned int)0;

      else
      {
        type = typeTable[(signed long int)version][(signed long int)level];
        if(!(type >= 0))
          return (unsigned int)0;

        else
          return formatInfo$link1[(signed long int)mask][(signed long int)type];
      }
}

// MQRspec_getWidth
// file mqrspec.h line 73
extern signed int MQRspec_getWidth(signed int version)
{
  return mqrspecCapacity[(signed long int)version].width;
}

// MQRspec_lengthIndicator
// file mqrspec.h line 92
extern signed int MQRspec_lengthIndicator(enum anonymous$8 mode, signed int version)
{
  return lengthTableBits$link1[(signed long int)mode][(signed long int)(version - 1)];
}

// MQRspec_maximumWords
// file mqrspec.c line 107
extern signed int MQRspec_maximumWords(enum anonymous$8 mode, signed int version)
{
  signed int bits;
  signed int words;
  bits = lengthTableBits$link1[(signed long int)mode][(signed long int)(version - 1)];
  words = (1 << bits) - 1;
  if((signed int)mode == QR_MODE_KANJI)
    words = words * 2;

  return words;
}

// MQRspec_newFrame
// file mqrspec.h line 138
extern unsigned char * MQRspec_newFrame(signed int version)
{
  unsigned char *frame;
  signed int width;
  if(version >= 5 || !(version >= 1))
    return (unsigned char *)(void *)0;

  else
  {
    pthread_mutex_lock(&frames_mutex$link1);
    if(frames$link1[(signed long int)version] == ((unsigned char *)NULL))
      frames$link1[(signed long int)version]=MQRspec_createFrame(version);

    pthread_mutex_unlock(&frames_mutex$link1);
    if(frames$link1[(signed long int)version] == ((unsigned char *)NULL))
      return (unsigned char *)(void *)0;

    else
    {
      width = mqrspecCapacity[(signed long int)version].width;
      void *return_value_malloc$1;
      return_value_malloc$1=malloc((unsigned long int)(width * width));
      frame = (unsigned char *)return_value_malloc$1;
      if(frame == ((unsigned char *)NULL))
        return (unsigned char *)(void *)0;

      else
      {
        memcpy((void *)frame, (const void *)frames$link1[(signed long int)version], (unsigned long int)(width * width));
        return frame;
      }
    }
  }
}

// Mask_calcN1N3
// file mask.c line 188
extern signed int Mask_calcN1N3(signed int length, signed int *runLength)
{
  signed int i;
  signed int demerit = 0;
  signed int fact;
  i = 0;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$1;
  for( ; !(i >= length); i = i + 1)
  {
    if(runLength[(signed long int)i] >= 5)
      demerit = demerit + 3 + (runLength[(signed long int)i] - 5);

    if(!((1 & i) == 0))
    {
      if(i >= 3 && !(i >= length + -2))
      {
        if(runLength[(signed long int)i] % 3 == 0)
        {
          fact = runLength[(signed long int)i] / 3;
          if(runLength[(signed long int)(i + -2)] == fact)
          {
            if(runLength[(signed long int)(i + -1)] == fact)
            {
              if(runLength[(signed long int)(1 + i)] == fact)
              {
                if(runLength[(signed long int)(2 + i)] == fact)
                {
                  if(i == 3)
                    tmp_if_expr$2 = (_Bool)1;

                  else
                    tmp_if_expr$2 = runLength[(signed long int)(i - 3)] >= 4 * fact ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr$2)
                    demerit = demerit + 40;

                  else
                  {
                    if(4 + i >= length)
                      tmp_if_expr$1 = (_Bool)1;

                    else
                      tmp_if_expr$1 = runLength[(signed long int)(i + 3)] >= 4 * fact ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr$1)
                      demerit = demerit + 40;

                  }
                }

              }

            }

          }

        }

      }

    }

  }
  return demerit;
}

// Mask_calcN2
// file mask.c line 221
extern signed int Mask_calcN2(signed int width, unsigned char *frame)
{
  signed int x;
  signed int y;
  unsigned char *p;
  unsigned char b22;
  unsigned char w22;
  signed int demerit = 0;
  p = frame + (signed long int)width + (signed long int)1;
  y = 1;
  for( ; !(y >= width); y = y + 1)
  {
    x = 1;
    for( ; !(x >= width); x = x + 1)
    {
      b22 = (unsigned char)((signed int)p[(signed long int)0] & (signed int)p[(signed long int)-1] & (signed int)p[(signed long int)-width] & (signed int)p[(signed long int)(-width - 1)]);
      w22 = (unsigned char)((signed int)p[(signed long int)0] | (signed int)p[(signed long int)-1] | (signed int)p[(signed long int)-width] | (signed int)p[(signed long int)(-width - 1)]);
      if(!(((1 ^ (signed int)w22 | (signed int)b22) & 1) == 0))
        demerit = demerit + 3;

      p = p + 1l;
    }
    p = p + 1l;
  }
  return demerit;
}

// Mask_calcRunLength
// file mask.c line 244
extern signed int Mask_calcRunLength(signed int width, unsigned char *frame, signed int dir, signed int *runLength)
{
  signed int head;
  signed int i;
  unsigned char *p;
  signed int pitch = dir == 0 ? 1 : width;
  if(!((1 & (signed int)*frame) == 0))
  {
    runLength[(signed long int)0] = -1;
    head = 1;
  }

  else
    head = 0;
  runLength[(signed long int)head] = 1;
  p = frame + (signed long int)pitch;
  i = 1;
  for( ; !(i >= width); i = i + 1)
  {
    if(!((((signed int)p[(signed long int)-pitch] ^ (signed int)*p) & 1) == 0))
    {
      head = head + 1;
      runLength[(signed long int)head] = 1;
    }

    else
      runLength[(signed long int)head] = runLength[(signed long int)head] + 1;
    p = p + (signed long int)pitch;
  }
  return head + 1;
}

// Mask_evaluateSymbol
// file mask.c line 274
extern signed int Mask_evaluateSymbol(signed int width, unsigned char *frame)
{
  signed int x;
  signed int y;
  signed int demerit = 0;
  signed int runLength[178l];
  signed int length;
  signed int return_value_Mask_calcN2$1;
  return_value_Mask_calcN2$1=Mask_calcN2(width, frame);
  demerit = demerit + return_value_Mask_calcN2$1;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    length=Mask_calcRunLength(width, frame + (signed long int)(y * width), 0, runLength);
    signed int return_value_Mask_calcN1N3$2;
    return_value_Mask_calcN1N3$2=Mask_calcN1N3(length, runLength);
    demerit = demerit + return_value_Mask_calcN1N3$2;
  }
  x = 0;
  for( ; !(x >= width); x = x + 1)
  {
    length=Mask_calcRunLength(width, frame + (signed long int)x, 1, runLength);
    signed int return_value_Mask_calcN1N3$3;
    return_value_Mask_calcN1N3$3=Mask_calcN1N3(length, runLength);
    demerit = demerit + return_value_Mask_calcN1N3$3;
  }
  return demerit;
}

// Mask_makeMask
// file mask.h line 25
extern unsigned char * Mask_makeMask(signed int width, unsigned char *frame, signed int mask, enum anonymous$7 level)
{
  unsigned char *masked;
  if(mask >= 8 || !(mask >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (unsigned char *)(void *)0;
  }

  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)(width * width));
  masked = (unsigned char *)return_value_malloc$2;
  if(masked == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    maskMakers[(signed long int)mask](width, frame, masked);
    Mask_writeFormatInformation(width, masked, mask, level);
    return masked;
  }
}

// Mask_makeMaskedFrame
// file mask.c line 151
extern unsigned char * Mask_makeMaskedFrame(signed int width, unsigned char *frame, signed int mask)
{
  unsigned char *masked;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(width * width));
  masked = (unsigned char *)return_value_malloc$1;
  if(masked == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    maskMakers[(signed long int)mask](width, frame, masked);
    return masked;
  }
}

// Mask_mask
// file mask.h line 26
extern unsigned char * Mask_mask(signed int width, unsigned char *frame, enum anonymous$7 level)
{
  signed int i;
  unsigned char *mask;
  unsigned char *bestMask;
  signed int minDemerit = 0x7fffffff;
  signed int blacks;
  signed int bratio;
  signed int demerit;
  signed int w2 = width * width;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)w2);
  mask = (unsigned char *)return_value_malloc$1;
  if(mask == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    bestMask = (unsigned char *)(void *)0;
    i = 0;
    if(!(i >= 8))
    {
      demerit = 0;
      blacks=maskMakers[(signed long int)i](width, frame, mask);
      signed int return_value_Mask_writeFormatInformation$2;
      return_value_Mask_writeFormatInformation$2=Mask_writeFormatInformation(width, mask, i, level);
      blacks = blacks + return_value_Mask_writeFormatInformation$2;
      bratio = ((200 * blacks + w2) / w2) / 2;
      signed int return_value_abs$3;
      return_value_abs$3=abs(bratio - 50);
      demerit = (return_value_abs$3 / 5) * 10;
      signed int return_value_Mask_evaluateSymbol$4;
      return_value_Mask_evaluateSymbol$4=Mask_evaluateSymbol(width, mask);
      demerit = demerit + return_value_Mask_evaluateSymbol$4;
      if(!(demerit >= minDemerit))
      {
        minDemerit = demerit;
        free((void *)bestMask);
        bestMask = mask;
        void *return_value_malloc$5;
        return_value_malloc$5=malloc((unsigned long int)w2);
        mask = (unsigned char *)return_value_malloc$5;
      }

      i = i + 1;
    }

    free((void *)mask);
    return bestMask;
  }
}

// Mask_mask0
// file mask.c line 103
static signed int Mask_mask0(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)((x + y & 1) == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask0$link1
// file mmask.c line 68
static void Mask_mask0$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1)
{
  signed int x$link1;
  signed int y$link1 = 0;
  for( ; !(y$link1 >= width$link1); y$link1 = y$link1 + 1)
  {
    x$link1 = 0;
    for( ; !(x$link1 >= width$link1); x$link1 = x$link1 + 1)
    {
      if(!((0x80 & (signed int)*s$link1) == 0))
        *d$link1 = *s$link1;

      else
        *d$link1 = (unsigned char)((signed int)*s$link1 ^ (signed int)((y$link1 & 1) == 0));
      s$link1 = s$link1 + 1l;
      d$link1 = d$link1 + 1l;
    }
  }
}

// Mask_mask1
// file mask.c line 108
static signed int Mask_mask1(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)((y & 1) == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask1$link1
// file mmask.c line 73
static void Mask_mask1$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1)
{
  signed int x$link1;
  signed int y$link1 = 0;
  for( ; !(y$link1 >= width$link1); y$link1 = y$link1 + 1)
  {
    x$link1 = 0;
    for( ; !(x$link1 >= width$link1); x$link1 = x$link1 + 1)
    {
      if(!((0x80 & (signed int)*s$link1) == 0))
        *d$link1 = *s$link1;

      else
        *d$link1 = (unsigned char)((signed int)*s$link1 ^ (signed int)((y$link1 / 2 + x$link1 / 3 & 1) == 0));
      s$link1 = s$link1 + 1l;
      d$link1 = d$link1 + 1l;
    }
  }
}

// Mask_mask2
// file mask.c line 113
static signed int Mask_mask2(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)(x % 3 == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask2$link1
// file mmask.c line 78
static void Mask_mask2$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1)
{
  signed int x$link1;
  signed int y$link1 = 0;
  for( ; !(y$link1 >= width$link1); y$link1 = y$link1 + 1)
  {
    x$link1 = 0;
    for( ; !(x$link1 >= width$link1); x$link1 = x$link1 + 1)
    {
      if(!((0x80 & (signed int)*s$link1) == 0))
        *d$link1 = *s$link1;

      else
        *d$link1 = (unsigned char)((signed int)*s$link1 ^ (signed int)(((x$link1 * y$link1 & 1) + (x$link1 * y$link1) % 3 & 1) == 0));
      s$link1 = s$link1 + 1l;
      d$link1 = d$link1 + 1l;
    }
  }
}

// Mask_mask3
// file mask.c line 118
static signed int Mask_mask3(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)((x + y) % 3 == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask3$link1
// file mmask.c line 83
static void Mask_mask3$link1(signed int width$link1, const unsigned char *s$link1, unsigned char *d$link1)
{
  signed int x$link1;
  signed int y$link1 = 0;
  for( ; !(y$link1 >= width$link1); y$link1 = y$link1 + 1)
  {
    x$link1 = 0;
    for( ; !(x$link1 >= width$link1); x$link1 = x$link1 + 1)
    {
      if(!((0x80 & (signed int)*s$link1) == 0))
        *d$link1 = *s$link1;

      else
        *d$link1 = (unsigned char)((signed int)*s$link1 ^ (signed int)(((x$link1 + y$link1 & 1) + (x$link1 * y$link1) % 3 & 1) == 0));
      s$link1 = s$link1 + 1l;
      d$link1 = d$link1 + 1l;
    }
  }
}

// Mask_mask4
// file mask.c line 123
static signed int Mask_mask4(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)((y / 2 + x / 3 & 1) == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask5
// file mask.c line 128
static signed int Mask_mask5(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)((x * y & 1) + (x * y) % 3 == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask6
// file mask.c line 133
static signed int Mask_mask6(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)(((x * y & 1) + (x * y) % 3 & 1) == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_mask7
// file mask.c line 138
static signed int Mask_mask7(signed int width, const unsigned char *s, unsigned char *d)
{
  signed int x;
  signed int y;
  signed int b = 0;
  y = 0;
  for( ; !(y >= width); y = y + 1)
  {
    x = 0;
    for( ; !(x >= width); x = x + 1)
    {
      if(!((0x80 & (signed int)*s) == 0))
        *d = *s;

      else
        *d = (unsigned char)((signed int)*s ^ (signed int)(((x * y) % 3 + (x + y & 1) & 1) == 0));
      b = b + (signed int)((signed int)*d & 1);
      s = s + 1l;
      d = d + 1l;
    }
  }
  return b;
}

// Mask_writeFormatInformation
// file mask.c line 34
extern signed int Mask_writeFormatInformation(signed int width, unsigned char *frame, signed int mask, enum anonymous$7 level)
{
  unsigned int format;
  unsigned char v;
  signed int i;
  signed int blacks = 0;
  format=QRspec_getFormatInfo(mask, level);
  i = 0;
  for( ; !(i >= 8); i = i + 1)
  {
    if(!((1u & format) == 0u))
    {
      blacks = blacks + 2;
      v = (unsigned char)0x85;
    }

    else
      v = (unsigned char)0x84;
    frame[(signed long int)(((width * 8 + width) - 1) - i)] = v;
    if(!(i >= 6))
      frame[(signed long int)(width * i + 8)] = v;

    else
      frame[(signed long int)(width * (i + 1) + 8)] = v;
    format = format >> 1;
  }
  i = 0;
  for( ; !(i >= 7); i = i + 1)
  {
    if(!((1u & format) == 0u))
    {
      blacks = blacks + 2;
      v = (unsigned char)0x85;
    }

    else
      v = (unsigned char)0x84;
    frame[(signed long int)(width * ((width - 7) + i) + 8)] = v;
    if(i == 0)
      frame[(signed long int)(width * 8 + 7)] = v;

    else
      frame[(signed long int)((width * 8 + 6) - i)] = v;
    format = format >> 1;
  }
  return blacks;
}

// QRcode_APIVersion
// file qrencode.c line 909
extern void QRcode_APIVersion(signed int *major_version, signed int *minor_version, signed int *micro_version)
{
  if(!(major_version == ((signed int *)NULL)))
    *major_version = 3;

  if(!(minor_version == ((signed int *)NULL)))
    *minor_version = 4;

  if(!(micro_version == ((signed int *)NULL)))
    *micro_version = 4;

}

// QRcode_APIVersionString
// file qrencode.c line 922
extern char * QRcode_APIVersionString(void)
{
  return "3.4.4";
}

// QRcode_List_free
// file qrencode.c line 764
extern void QRcode_List_free(struct _QRcode_List *qrlist)
{
  struct _QRcode_List *list = qrlist;
  struct _QRcode_List *next;
  for( ; !(list == ((struct _QRcode_List *)NULL)); list = next)
  {
    next = list->next;
    QRcode_List_freeEntry(list);
  }
}

// QRcode_List_freeEntry
// file qrencode.c line 756
static void QRcode_List_freeEntry(struct _QRcode_List *entry)
{
  if(!(entry == ((struct _QRcode_List *)NULL)))
  {
    QRcode_free(entry->code);
    free((void *)entry);
  }

}

// QRcode_List_newEntry
// file qrencode.c line 743
static struct _QRcode_List * QRcode_List_newEntry(void)
{
  struct _QRcode_List *entry;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct _QRcode_List) /*16ul*/ );
  entry = (struct _QRcode_List *)return_value_malloc$1;
  if(entry == ((struct _QRcode_List *)NULL))
    return (struct _QRcode_List *)(void *)0;

  else
  {
    entry->next = (struct _QRcode_List *)(void *)0;
    entry->code = (struct anonymous$1 *)(void *)0;
    return entry;
  }
}

// QRcode_List_size
// file qrencode.c line 775
extern signed int QRcode_List_size(struct _QRcode_List *qrlist)
{
  struct _QRcode_List *list = qrlist;
  signed int size = 0;
  for( ; !(list == ((struct _QRcode_List *)NULL)); list = list->next)
    size = size + 1;
  return size;
}

// QRcode_clearCache
// file ../qrencode.h line 560
extern void QRcode_clearCache(void)
{
  QRspec_clearCache();
  MQRspec_clearCache();
  free_rs_cache();
}

// QRcode_encodeData
// file qrencode.c line 710
extern struct anonymous$1 * QRcode_encodeData(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level)
{
  struct anonymous$1 *return_value_QRcode_encodeDataReal$1;
  return_value_QRcode_encodeDataReal$1=QRcode_encodeDataReal(data, size, version, level, 0);
  return return_value_QRcode_encodeDataReal$1;
}

// QRcode_encodeDataMQR
// file qrencode.c line 724
extern struct anonymous$1 * QRcode_encodeDataMQR(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level)
{
  struct anonymous$1 *return_value_QRcode_encodeDataReal$1;
  return_value_QRcode_encodeDataReal$1=QRcode_encodeDataReal(data, size, version, level, 1);
  return return_value_QRcode_encodeDataReal$1;
}

// QRcode_encodeDataReal
// file qrencode.c line 681
static struct anonymous$1 * QRcode_encodeDataReal(const unsigned char *data, signed int length, signed int version, enum anonymous$7 level, signed int mqr)
{
  struct _QRinput *input;
  struct anonymous$1 *code;
  signed int ret;
  if(data == ((const unsigned char *)NULL) || length == 0)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  if(!(mqr == 0))
    input=QRinput_newMQR(version, level);

  else
    input=QRinput_new2(version, level);
  if(input == ((struct _QRinput *)NULL))
    return (struct anonymous$1 *)(void *)0;

  else
  {
    ret=QRinput_append(input, (enum anonymous$8)QR_MODE_8, length, data);
    if(!(ret >= 0))
    {
      QRinput_free(input);
      return (struct anonymous$1 *)(void *)0;
    }

    else
    {
      code=QRcode_encodeInput(input);
      QRinput_free(input);
      return code;
    }
  }
}

// QRcode_encodeDataStructured
// file qrencode.c line 884
extern struct _QRcode_List * QRcode_encodeDataStructured(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level)
{
  struct _QRcode_List *return_value_QRcode_encodeDataStructuredReal$1;
  return_value_QRcode_encodeDataStructuredReal$1=QRcode_encodeDataStructuredReal(size, data, version, level, 1, (enum anonymous$8)QR_MODE_NUL, 0);
  return return_value_QRcode_encodeDataStructuredReal$1;
}

// QRcode_encodeDataStructuredReal
// file qrencode.c line 848
static struct _QRcode_List * QRcode_encodeDataStructuredReal(signed int size, const unsigned char *data, signed int version, enum anonymous$7 level, signed int eightbit, enum anonymous$8 hint, signed int casesensitive)
{
  struct _QRinput *input;
  struct _QRcode_List *codes;
  signed int ret;
  if(!(version >= 1))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct _QRcode_List *)(void *)0;
  }

  if(eightbit == 0 && !((signed int)hint == QR_MODE_8) && !((signed int)hint == QR_MODE_KANJI))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 22;
    return (struct _QRcode_List *)(void *)0;
  }

  input=QRinput_new2(version, level);
  if(input == ((struct _QRinput *)NULL))
    return (struct _QRcode_List *)(void *)0;

  else
  {
    if(!(eightbit == 0))
      ret=QRinput_append(input, (enum anonymous$8)QR_MODE_8, size, data);

    else
      ret=Split_splitStringToQRinput((char *)data, input, hint, casesensitive);
    if(!(ret >= 0))
    {
      QRinput_free(input);
      return (struct _QRcode_List *)(void *)0;
    }

    else
    {
      codes=QRcode_encodeInputToStructured(input);
      QRinput_free(input);
      return codes;
    }
  }
}

// QRcode_encodeInput
// file qrencode.c line 629
extern struct anonymous$1 * QRcode_encodeInput(struct _QRinput *input)
{
  if(!(input->mqr == 0))
  {
    struct anonymous$1 *return_value_QRcode_encodeMaskMQR$1;
    return_value_QRcode_encodeMaskMQR$1=QRcode_encodeMaskMQR(input, -1);
    return return_value_QRcode_encodeMaskMQR$1;
  }

  else
  {
    struct anonymous$1 *return_value_QRcode_encodeMask$2;
    return_value_QRcode_encodeMask$2=QRcode_encodeMask(input, -1);
    return return_value_QRcode_encodeMask$2;
  }
}

// QRcode_encodeInputStructured
// file qrencode.c line 802
extern struct _QRcode_List * QRcode_encodeInputStructured(struct _QRinput_Struct *s)
{
  struct _QRcode_List *head = (struct _QRcode_List *)(void *)0;
  struct _QRcode_List *tail = (struct _QRcode_List *)(void *)0;
  struct _QRcode_List *entry;
  struct _QRinput_InputList *list = s->head;
  for( ; !(list == ((struct _QRinput_InputList *)NULL)); list = list->next)
  {
    if(head == ((struct _QRcode_List *)NULL))
    {
      entry=QRcode_List_newEntry();
      if(entry == ((struct _QRcode_List *)NULL))
        goto ABORT;

      head = entry;
      tail = head;
    }

    else
    {
      entry=QRcode_List_newEntry();
      if(entry == ((struct _QRcode_List *)NULL))
        goto ABORT;

      tail->next = entry;
      tail = tail->next;
    }
    tail->code=QRcode_encodeInput(list->input);
    if(tail->code == ((struct anonymous$1 *)NULL))
      goto ABORT;

  }
  return head;

ABORT:
  ;
  QRcode_List_free(head);
  return (struct _QRcode_List *)(void *)0;
}

// QRcode_encodeInputToStructured
// file qrencode.c line 834
static struct _QRcode_List * QRcode_encodeInputToStructured(struct _QRinput *input)
{
  struct _QRinput_Struct *s;
  struct _QRcode_List *codes;
  s=QRinput_splitQRinputToStruct(input);
  if(s == ((struct _QRinput_Struct *)NULL))
    return (struct _QRcode_List *)(void *)0;

  else
  {
    codes=QRcode_encodeInputStructured(s);
    QRinput_Struct_free(s);
    return codes;
  }
}

// QRcode_encodeMask
// file qrencode.c line 463
struct anonymous$1 * QRcode_encodeMask(struct _QRinput *input, signed int mask)
{
  signed int width;
  signed int version;
  struct anonymous$4 *raw;
  unsigned char *frame;
  unsigned char *masked;
  unsigned char *p;
  unsigned char code;
  unsigned char bit;
  struct anonymous$6 *filler;
  signed int i;
  signed int j;
  struct anonymous$1 *qrcode = (struct anonymous$1 *)(void *)0;
  if(!(input->mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  _Bool tmp_if_expr$3;
  if(!(input->version >= 0))
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = input->version > 40 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$3)
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  if((signed int)input->level >= 4)
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    *return_value___errno_location$4 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  raw=QRraw_new(input);
  if(raw == ((struct anonymous$4 *)NULL))
    return (struct anonymous$1 *)(void *)0;

  else
  {
    version = raw->version;
    width=QRspec_getWidth(version);
    frame=QRspec_newFrame(version);
    if(frame == ((unsigned char *)NULL))
    {
      QRraw_free(raw);
      return (struct anonymous$1 *)(void *)0;
    }

    else
    {
      filler=FrameFiller_new(width, frame, 0);
      if(filler == ((struct anonymous$6 *)NULL))
      {
        QRraw_free(raw);
        free((void *)frame);
        return (struct anonymous$1 *)(void *)0;
      }

      else
      {
        i = 0;
        for( ; !(i >= raw->dataLength + raw->eccLength); i = i + 1)
        {
          code=QRraw_getCode(raw);
          bit = (unsigned char)0x80;
          j = 0;
          for( ; !(j >= 8); j = j + 1)
          {
            p=FrameFiller_next(filler);
            if(p == ((unsigned char *)NULL))
              goto EXIT;

            *p = (unsigned char)(0x02 | (signed int)(((signed int)bit & (signed int)code) != 0));
            bit = (unsigned char)((signed int)bit >> 1);
          }
        }
        QRraw_free(raw);
        raw = (struct anonymous$4 *)(void *)0;
        j=QRspec_getRemainder(version);
        i = 0;
        for( ; !(i >= j); i = i + 1)
        {
          p=FrameFiller_next(filler);
          if(p == ((unsigned char *)NULL))
            goto EXIT;

          *p = (unsigned char)0x02;
        }
        if(mask == -2)
        {
          void *return_value_malloc$5;
          return_value_malloc$5=malloc((unsigned long int)(width * width));
          masked = (unsigned char *)return_value_malloc$5;
          memcpy((void *)masked, (const void *)frame, (unsigned long int)(width * width));
        }

        else
          if(!(mask >= 0))
            masked=Mask_mask(width, frame, input->level);

          else
            masked=Mask_makeMask(width, frame, mask, input->level);
        if(!(masked == ((unsigned char *)NULL)))
        {
          qrcode=QRcode_new(version, width, masked);
          if(qrcode == ((struct anonymous$1 *)NULL))
            free((void *)masked);

        }


      EXIT:
        ;
        QRraw_free(raw);
        free((void *)filler);
        free((void *)frame);
        return qrcode;
      }
    }
  }
}

// QRcode_encodeMaskMQR
// file qrencode.c line 547
struct anonymous$1 * QRcode_encodeMaskMQR(struct _QRinput *input, signed int mask)
{
  signed int width;
  signed int version;
  struct anonymous$5 *raw;
  unsigned char *frame;
  unsigned char *masked;
  unsigned char *p;
  unsigned char code;
  unsigned char bit;
  struct anonymous$6 *filler;
  signed int i;
  signed int j;
  struct anonymous$1 *qrcode = (struct anonymous$1 *)(void *)0;
  if(input->mqr == 0)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  _Bool tmp_if_expr$3;
  if(!(input->version >= 1))
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = input->version > 4 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$3)
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  if((signed int)input->level >= 3)
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    *return_value___errno_location$4 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  raw=MQRraw_new(input);
  _Bool tmp_if_expr$5;
  if(raw == ((struct anonymous$5 *)NULL))
    return (struct anonymous$1 *)(void *)0;

  else
  {
    version = raw->version;
    width=MQRspec_getWidth(version);
    frame=MQRspec_newFrame(version);
    if(frame == ((unsigned char *)NULL))
    {
      MQRraw_free(raw);
      return (struct anonymous$1 *)(void *)0;
    }

    else
    {
      filler=FrameFiller_new(width, frame, 1);
      if(filler == ((struct anonymous$6 *)NULL))
      {
        MQRraw_free(raw);
        free((void *)frame);
        return (struct anonymous$1 *)(void *)0;
      }

      else
      {
        i = 0;
        for( ; !(i >= raw->dataLength + raw->eccLength); i = i + 1)
        {
          code=MQRraw_getCode(raw);
          if(!(raw->oddbits == 0))
            tmp_if_expr$5 = i == raw->dataLength - 1 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$5 = (_Bool)0;
          if(tmp_if_expr$5)
          {
            bit = (unsigned char)(1 << raw->oddbits - 1);
            j = 0;
            for( ; !(j >= raw->oddbits); j = j + 1)
            {
              p=FrameFiller_next(filler);
              if(p == ((unsigned char *)NULL))
                goto EXIT;

              *p = (unsigned char)(0x02 | (signed int)(((signed int)bit & (signed int)code) != 0));
              bit = (unsigned char)((signed int)bit >> 1);
            }
          }

          else
          {
            bit = (unsigned char)0x80;
            j = 0;
            for( ; !(j >= 8); j = j + 1)
            {
              p=FrameFiller_next(filler);
              if(p == ((unsigned char *)NULL))
                goto EXIT;

              *p = (unsigned char)(0x02 | (signed int)(((signed int)bit & (signed int)code) != 0));
              bit = (unsigned char)((signed int)bit >> 1);
            }
          }
        }
        MQRraw_free(raw);
        raw = (struct anonymous$5 *)(void *)0;
        if(!(mask >= 0))
          masked=MMask_mask(version, frame, input->level);

        else
          masked=MMask_makeMask(version, frame, mask, input->level);
        if(!(masked == ((unsigned char *)NULL)))
          qrcode=QRcode_new(version, width, masked);


      EXIT:
        ;
        MQRraw_free(raw);
        free((void *)filler);
        free((void *)frame);
        return qrcode;
      }
    }
  }
}

// QRcode_encodeString
// file ../qrencode.h line 426
extern struct anonymous$1 * QRcode_encodeString(const char *string, signed int version, enum anonymous$7 level, enum anonymous$8 hint, signed int casesensitive)
{
  struct anonymous$1 *return_value_QRcode_encodeStringReal$1;
  return_value_QRcode_encodeStringReal$1=QRcode_encodeStringReal(string, version, level, 0, hint, casesensitive);
  return return_value_QRcode_encodeStringReal$1;
}

// QRcode_encodeString8bit
// file qrencode.c line 715
extern struct anonymous$1 * QRcode_encodeString8bit(const char *string, signed int version, enum anonymous$7 level)
{
  if(string == ((const char *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(string);
  struct anonymous$1 *return_value_QRcode_encodeDataReal$3;
  return_value_QRcode_encodeDataReal$3=QRcode_encodeDataReal((unsigned char *)string, (signed int)return_value_strlen$2, version, level, 0);
  return return_value_QRcode_encodeDataReal$3;
}

// QRcode_encodeString8bitMQR
// file qrencode.c line 729
extern struct anonymous$1 * QRcode_encodeString8bitMQR(const char *string, signed int version, enum anonymous$7 level)
{
  if(string == ((const char *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(string);
  struct anonymous$1 *return_value_QRcode_encodeDataReal$3;
  return_value_QRcode_encodeDataReal$3=QRcode_encodeDataReal((unsigned char *)string, (signed int)return_value_strlen$2, version, level, 1);
  return return_value_QRcode_encodeDataReal$3;
}

// QRcode_encodeString8bitStructured
// file qrencode.c line 888
extern struct _QRcode_List * QRcode_encodeString8bitStructured(const char *string, signed int version, enum anonymous$7 level)
{
  if(string == ((const char *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct _QRcode_List *)(void *)0;
  }

  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(string);
  struct _QRcode_List *return_value_QRcode_encodeDataStructured$3;
  return_value_QRcode_encodeDataStructured$3=QRcode_encodeDataStructured((signed int)return_value_strlen$2, (unsigned char *)string, version, level);
  return return_value_QRcode_encodeDataStructured$3;
}

// QRcode_encodeStringMQR
// file qrencode.c line 676
extern struct anonymous$1 * QRcode_encodeStringMQR(const char *string, signed int version, enum anonymous$7 level, enum anonymous$8 hint, signed int casesensitive)
{
  struct anonymous$1 *return_value_QRcode_encodeStringReal$1;
  return_value_QRcode_encodeStringReal$1=QRcode_encodeStringReal(string, version, level, 1, hint, casesensitive);
  return return_value_QRcode_encodeStringReal$1;
}

// QRcode_encodeStringReal
// file qrencode.c line 638
static struct anonymous$1 * QRcode_encodeStringReal(const char *string, signed int version, enum anonymous$7 level, signed int mqr, enum anonymous$8 hint, signed int casesensitive)
{
  struct _QRinput *input;
  struct anonymous$1 *code;
  signed int ret;
  if(string == ((const char *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  if(!((signed int)hint == QR_MODE_8) && !((signed int)hint == QR_MODE_KANJI))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 22;
    return (struct anonymous$1 *)(void *)0;
  }

  if(!(mqr == 0))
    input=QRinput_newMQR(version, level);

  else
    input=QRinput_new2(version, level);
  if(input == ((struct _QRinput *)NULL))
    return (struct anonymous$1 *)(void *)0;

  else
  {
    ret=Split_splitStringToQRinput(string, input, hint, casesensitive);
    if(!(ret >= 0))
    {
      QRinput_free(input);
      return (struct anonymous$1 *)(void *)0;
    }

    else
    {
      code=QRcode_encodeInput(input);
      QRinput_free(input);
      return code;
    }
  }
}

// QRcode_encodeStringStructured
// file qrencode.c line 896
extern struct _QRcode_List * QRcode_encodeStringStructured(const char *string, signed int version, enum anonymous$7 level, enum anonymous$8 hint, signed int casesensitive)
{
  if(string == ((const char *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct _QRcode_List *)(void *)0;
  }

  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(string);
  struct _QRcode_List *return_value_QRcode_encodeDataStructuredReal$3;
  return_value_QRcode_encodeDataStructuredReal$3=QRcode_encodeDataStructuredReal((signed int)return_value_strlen$2, (unsigned char *)string, version, level, 0, hint, casesensitive);
  return return_value_QRcode_encodeDataStructuredReal$3;
}

// QRcode_free
// file ../qrencode.h line 470
extern void QRcode_free(struct anonymous$1 *qrcode)
{
  if(!(qrcode == ((struct anonymous$1 *)NULL)))
  {
    free((void *)qrcode->data);
    free((void *)qrcode);
  }

}

// QRcode_new
// file qrencode.c line 441
struct anonymous$1 * QRcode_new(signed int version, signed int width, unsigned char *data)
{
  struct anonymous$1 *qrcode;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$1) /*16ul*/ );
  qrcode = (struct anonymous$1 *)return_value_malloc$1;
  if(qrcode == ((struct anonymous$1 *)NULL))
    return (struct anonymous$1 *)(void *)0;

  else
  {
    qrcode->version = version;
    qrcode->width = width;
    qrcode->data = data;
    return qrcode;
  }
}

// QRinput_InputList_freeEntry
// file qrinput.c line 1458
static void QRinput_InputList_freeEntry(struct _QRinput_InputList *entry)
{
  if(!(entry == ((struct _QRinput_InputList *)NULL)))
  {
    QRinput_free(entry->input);
    free((void *)entry);
  }

}

// QRinput_InputList_newEntry
// file qrinput.c line 1445
static struct _QRinput_InputList * QRinput_InputList_newEntry(struct _QRinput *input)
{
  struct _QRinput_InputList *entry;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct _QRinput_InputList) /*16ul*/ );
  entry = (struct _QRinput_InputList *)return_value_malloc$1;
  if(entry == ((struct _QRinput_InputList *)NULL))
    return (struct _QRinput_InputList *)(void *)0;

  else
  {
    entry->input = input;
    entry->next = (struct _QRinput_InputList *)(void *)0;
    return entry;
  }
}

// QRinput_List_dup
// file qrinput.c line 85
static struct _QRinput_List * QRinput_List_dup(struct _QRinput_List *entry)
{
  struct _QRinput_List *n;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct _QRinput_List) /*32ul*/ );
  n = (struct _QRinput_List *)return_value_malloc$1;
  if(n == ((struct _QRinput_List *)NULL))
    return (struct _QRinput_List *)(void *)0;

  else
  {
    n->mode = entry->mode;
    n->size = entry->size;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)n->size);
    n->data = (unsigned char *)return_value_malloc$2;
    if(n->data == ((unsigned char *)NULL))
    {
      free((void *)n);
      return (struct _QRinput_List *)(void *)0;
    }

    else
    {
      memcpy((void *)n->data, (const void *)entry->data, (unsigned long int)entry->size);
      n->bstream = (struct anonymous$9 *)(void *)0;
      n->next = (struct _QRinput_List *)(void *)0;
      return n;
    }
  }
}

// QRinput_List_freeEntry
// file qrinput.c line 76
static void QRinput_List_freeEntry(struct _QRinput_List *entry)
{
  if(!(entry == ((struct _QRinput_List *)NULL)))
  {
    free((void *)entry->data);
    BitStream_free(entry->bstream);
    free((void *)entry);
  }

}

// QRinput_List_newEntry
// file qrinput.c line 48
static struct _QRinput_List * QRinput_List_newEntry(enum anonymous$8 mode, signed int size, const unsigned char *data)
{
  struct _QRinput_List *entry;
  signed int return_value_QRinput_check$2;
  return_value_QRinput_check$2=QRinput_check(mode, size, data);
  if(!(return_value_QRinput_check$2 == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct _QRinput_List *)(void *)0;
  }

  void *return_value_malloc$3;
  return_value_malloc$3=malloc(sizeof(struct _QRinput_List) /*32ul*/ );
  entry = (struct _QRinput_List *)return_value_malloc$3;
  if(entry == ((struct _QRinput_List *)NULL))
    return (struct _QRinput_List *)(void *)0;

  else
  {
    entry->mode = mode;
    entry->size = size;
    if(size >= 1)
    {
      void *return_value_malloc$4;
      return_value_malloc$4=malloc((unsigned long int)size);
      entry->data = (unsigned char *)return_value_malloc$4;
      if(entry->data == ((unsigned char *)NULL))
      {
        free((void *)entry);
        return (struct _QRinput_List *)(void *)0;
      }

      memcpy((void *)entry->data, (const void *)data, (unsigned long int)size);
    }

    entry->bstream = (struct anonymous$9 *)(void *)0;
    entry->next = (struct _QRinput_List *)(void *)0;
    return entry;
  }
}

// QRinput_List_shrinkEntry
// file qrinput.c line 1541
static signed int QRinput_List_shrinkEntry(struct _QRinput_List *entry, signed int bytes)
{
  unsigned char *data;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)bytes);
  data = (unsigned char *)return_value_malloc$1;
  if(data == ((unsigned char *)NULL))
    return -1;

  else
  {
    memcpy((void *)data, (const void *)entry->data, (unsigned long int)bytes);
    free((void *)entry->data);
    entry->data = data;
    entry->size = bytes;
    return 0;
  }
}

// QRinput_Struct_appendInput
// file qrinput.c line 1486
extern signed int QRinput_Struct_appendInput(struct _QRinput_Struct *s, struct _QRinput *input)
{
  struct _QRinput_InputList *e;
  if(!(input->mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  e=QRinput_InputList_newEntry(input);
  if(e == ((struct _QRinput_InputList *)NULL))
    return -1;

  else
  {
    s->size = s->size + 1;
    if(s->tail == ((struct _QRinput_InputList *)NULL))
    {
      s->head = e;
      s->tail = e;
    }

    else
    {
      s->tail->next = e;
      s->tail = e;
    }
    return s->size;
  }
}

// QRinput_Struct_calcParity
// file qrinput.c line 1525
static unsigned char QRinput_Struct_calcParity(struct _QRinput_Struct *s)
{
  struct _QRinput_InputList *list;
  unsigned char parity = (unsigned char)0;
  list = s->head;
  while(!(list == ((struct _QRinput_InputList *)NULL)))
  {
    unsigned char return_value_QRinput_calcParity$1;
    return_value_QRinput_calcParity$1=QRinput_calcParity(list->input);
    parity = parity ^ return_value_QRinput_calcParity$1;
    list = list->next;
  }
  QRinput_Struct_setParity(s, parity);
  return parity;
}

// QRinput_Struct_free
// file qrencode.h line 314
extern void QRinput_Struct_free(struct _QRinput_Struct *s)
{
  struct _QRinput_InputList *list;
  struct _QRinput_InputList *next;
  if(!(s == ((struct _QRinput_Struct *)NULL)))
  {
    list = s->head;
    for( ; !(list == ((struct _QRinput_InputList *)NULL)); list = next)
    {
      next = list->next;
      QRinput_InputList_freeEntry(list);
    }
    free((void *)s);
  }

}

// QRinput_Struct_insertStructuredAppendHeaders
// file qrinput.c line 1678
extern signed int QRinput_Struct_insertStructuredAppendHeaders(struct _QRinput_Struct *s)
{
  signed int i;
  struct _QRinput_InputList *list;
  if(s->size == 1)
    return 0;

  else
  {
    if(!(s->parity >= 0))
      QRinput_Struct_calcParity(s);

    i = 1;
    list = s->head;
    while(!(list == ((struct _QRinput_InputList *)NULL)))
    {
      signed int return_value_QRinput_insertStructuredAppendHeader$1;
      return_value_QRinput_insertStructuredAppendHeader$1=QRinput_insertStructuredAppendHeader(list->input, s->size, i, (unsigned char)s->parity);
      if(!(return_value_QRinput_insertStructuredAppendHeader$1 == 0))
        return -1;

      i = i + 1;
      list = list->next;
    }
    return 0;
  }
}

// QRinput_Struct_new
// file qrinput.c line 1466
extern struct _QRinput_Struct * QRinput_Struct_new(void)
{
  struct _QRinput_Struct *s;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct _QRinput_Struct) /*24ul*/ );
  s = (struct _QRinput_Struct *)return_value_malloc$1;
  if(s == ((struct _QRinput_Struct *)NULL))
    return (struct _QRinput_Struct *)(void *)0;

  else
  {
    s->size = 0;
    s->parity = -1;
    s->head = (struct _QRinput_InputList *)(void *)0;
    s->tail = (struct _QRinput_InputList *)(void *)0;
    return s;
  }
}

// QRinput_Struct_setParity
// file qrinput.c line 1481
extern void QRinput_Struct_setParity(struct _QRinput_Struct *s, unsigned char parity)
{
  s->parity = (signed int)parity;
}

// QRinput_append
// file qrencode.h line 200
extern signed int QRinput_append(struct _QRinput *input, enum anonymous$8 mode, signed int size, const unsigned char *data)
{
  struct _QRinput_List *entry;
  entry=QRinput_List_newEntry(mode, size, data);
  if(entry == ((struct _QRinput_List *)NULL))
    return -1;

  else
  {
    QRinput_appendEntry(input, entry);
    return 0;
  }
}

// QRinput_appendECIheader
// file qrinput.c line 275
extern signed int QRinput_appendECIheader(struct _QRinput *input, unsigned int ecinum)
{
  unsigned char data[4l];
  if(ecinum >= 1000000u)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  data[(signed long int)0] = (unsigned char)(ecinum & (unsigned int)0xff);
  data[(signed long int)1] = (unsigned char)(ecinum >> 8 & (unsigned int)0xff);
  data[(signed long int)2] = (unsigned char)(ecinum >> 16 & (unsigned int)0xff);
  data[(signed long int)3] = (unsigned char)(ecinum >> 24 & (unsigned int)0xff);
  signed int return_value_QRinput_append$2;
  return_value_QRinput_append$2=QRinput_append(input, (enum anonymous$8)QR_MODE_ECI, 4, data);
  return return_value_QRinput_append$2;
}

// QRinput_appendEntry
// file qrinput.c line 210
static void QRinput_appendEntry(struct _QRinput *input, struct _QRinput_List *entry)
{
  if(input->tail == ((struct _QRinput_List *)NULL))
  {
    input->head = entry;
    input->tail = entry;
  }

  else
  {
    input->tail->next = entry;
    input->tail = entry;
  }
  entry->next = (struct _QRinput_List *)(void *)0;
}

// QRinput_appendPaddingBit
// file qrinput.c line 1191
static signed int QRinput_appendPaddingBit(struct anonymous$9 *bstream, struct _QRinput *input)
{
  signed int bits;
  signed int maxbits;
  signed int words;
  signed int maxwords;
  signed int i;
  signed int ret;
  struct anonymous$9 *padding = (struct anonymous$9 *)(void *)0;
  unsigned char *padbuf;
  signed int padlen;
  bits = bstream->length;
  maxwords=QRspec_getDataLength(input->version, input->level);
  maxbits = maxwords * 8;
  if(!(maxbits >= bits))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 34;
    return -1;
  }

  if(maxbits == bits)
    return 0;

  else
  {
    if(!(maxbits + -bits >= 5))
      ret=BitStream_appendNum(bstream, maxbits - bits, (unsigned int)0);

    else
    {
      words = (bits + 4 + 7) / 8;
      padding=BitStream_new();
      if(padding == ((struct anonymous$9 *)NULL))
        return -1;

      ret=BitStream_appendNum(padding, words * 8 - bits, (unsigned int)0);
      if(ret >= 0)
      {
        padlen = maxwords - words;
        if(padlen >= 1)
        {
          void *return_value_malloc$2;
          return_value_malloc$2=malloc((unsigned long int)padlen);
          padbuf = (unsigned char *)return_value_malloc$2;
          if(padbuf == ((unsigned char *)NULL))
          {
            ret = -1;
            goto DONE;
          }

          i = 0;
          for( ; !(i >= padlen); i = i + 1)
            padbuf[(signed long int)i] = (unsigned char)((i & 1) != 0 ? 0x11 : 0xec);
          ret=BitStream_appendBytes(padding, padlen, padbuf);
          free((void *)padbuf);
          if(!(ret >= 0))
            goto DONE;

        }

        ret=BitStream_append(bstream, padding);
      }

    }

  DONE:
    ;
    BitStream_free(padding);
    return ret;
  }
}

// QRinput_appendPaddingBitMQR
// file qrinput.c line 1256
static signed int QRinput_appendPaddingBitMQR(struct anonymous$9 *bstream, struct _QRinput *input)
{
  signed int bits;
  signed int maxbits;
  signed int words;
  signed int maxwords;
  signed int i;
  signed int ret;
  signed int termbits;
  struct anonymous$9 *padding = (struct anonymous$9 *)(void *)0;
  unsigned char *padbuf;
  signed int padlen;
  bits = bstream->length;
  maxbits=MQRspec_getDataLengthBit(input->version, input->level);
  maxwords = maxbits / 8;
  if(!(maxbits >= bits))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 34;
    return -1;
  }

  if(maxbits == bits)
    return 0;

  else
  {
    termbits = input->version * 2 + 1;
    if(termbits >= maxbits + -bits)
      ret=BitStream_appendNum(bstream, maxbits - bits, (unsigned int)0);

    else
    {
      bits = bits + termbits;
      words = (bits + 7) / 8;
      if(maxbits + -(8 * words) >= 1)
      {
        termbits = termbits + (words * 8 - bits);
        if(words == maxwords)
          termbits = termbits + (maxbits - words * 8);

      }

      else
        termbits = termbits + (words * 8 - bits);
      padding=BitStream_new();
      if(padding == ((struct anonymous$9 *)NULL))
        return -1;

      ret=BitStream_appendNum(padding, termbits, (unsigned int)0);
      if(ret >= 0)
      {
        padlen = maxwords - words;
        if(padlen >= 1)
        {
          void *return_value_malloc$2;
          return_value_malloc$2=malloc((unsigned long int)padlen);
          padbuf = (unsigned char *)return_value_malloc$2;
          if(padbuf == ((unsigned char *)NULL))
          {
            ret = -1;
            goto DONE;
          }

          i = 0;
          for( ; !(i >= padlen); i = i + 1)
            padbuf[(signed long int)i] = (unsigned char)((i & 1) != 0 ? 0x11 : 0xec);
          ret=BitStream_appendBytes(padding, padlen, padbuf);
          free((void *)padbuf);
          if(!(ret >= 0))
            goto DONE;

          termbits = maxbits - maxwords * 8;
          if(termbits >= 1)
          {
            ret=BitStream_appendNum(padding, termbits, (unsigned int)0);
            if(!(ret >= 0))
              goto DONE;

          }

        }

        ret=BitStream_append(bstream, padding);
      }

    }

  DONE:
    ;
    BitStream_free(padding);
    return ret;
  }
}

// QRinput_calcParity
// file qrinput.c line 308
static unsigned char QRinput_calcParity(struct _QRinput *input)
{
  unsigned char parity = (unsigned char)0;
  struct _QRinput_List *list;
  signed int i;
  list = input->head;
  for( ; !(list == ((struct _QRinput_List *)NULL)); list = list->next)
    if(!((signed int)list->mode == QR_MODE_STRUCTURE))
    {
      i = list->size - 1;
      for( ; i >= 0; i = i - 1)
        parity = parity ^ list->data[(signed long int)i];
    }

  return parity;
}

// QRinput_check
// file qrinput.c line 864
extern signed int QRinput_check(enum anonymous$8 mode, signed int size, const unsigned char *data)
{
  signed int return_value_QRinput_checkModeNum$1;
  signed int return_value_QRinput_checkModeAn$2;
  signed int return_value_QRinput_checkModeKanji$3;
  signed int return_value_QRinput_checkModeFNC1Second$4;
  if((signed int)mode == QR_MODE_FNC1FIRST && !(size >= 0) || !(size >= 1))
    return -1;

  else
    switch((signed int)mode)
    {
      case QR_MODE_NUM:
      {
        return_value_QRinput_checkModeNum$1=QRinput_checkModeNum(size, (const char *)data);
        return return_value_QRinput_checkModeNum$1;
      }
      case QR_MODE_AN:
      {
        return_value_QRinput_checkModeAn$2=QRinput_checkModeAn(size, (const char *)data);
        return return_value_QRinput_checkModeAn$2;
      }
      case QR_MODE_KANJI:
      {
        return_value_QRinput_checkModeKanji$3=QRinput_checkModeKanji(size, data);
        return return_value_QRinput_checkModeKanji$3;
      }
      case QR_MODE_8:
        return 0;
      case QR_MODE_STRUCTURE:
        return 0;
      case QR_MODE_ECI:
        return 0;
      case QR_MODE_FNC1FIRST:
        return 0;
      case QR_MODE_FNC1SECOND:
      {
        return_value_QRinput_checkModeFNC1Second$4=QRinput_checkModeFNC1Second(size, data);
        return return_value_QRinput_checkModeFNC1Second$4;
      }
      case QR_MODE_NUL:
        ;
      default:
        return -1;
    }
}

// QRinput_checkModeAn
// file qrinput.c line 482
static signed int QRinput_checkModeAn(signed int size, const char *data)
{
  signed int i = 0;
  signed int tmp_if_expr$1;
  for( ; !(i >= size); i = i + 1)
  {
    if(!((0x80 & (signed int)data[(signed long int)i]) == 0))
      tmp_if_expr$1 = -1;

    else
      tmp_if_expr$1 = (signed int)QRinput_anTable[(signed long int)(signed int)data[(signed long int)i]];
    if(!(tmp_if_expr$1 >= 0))
      return -1;

  }
  return 0;
}

// QRinput_checkModeFNC1Second
// file qrinput.c line 765
static signed int QRinput_checkModeFNC1Second(signed int size, const unsigned char *data)
{
  if(!(size == 1))
    return -1;

  else
    return 0;
}

// QRinput_checkModeKanji
// file qrinput.c line 647
static signed int QRinput_checkModeKanji(signed int size, const unsigned char *data)
{
  signed int i;
  unsigned int val;
  if(!((1 & size) == 0))
    return -1;

  else
  {
    i = 0;
    for( ; !(i >= size); i = i + 2)
    {
      val = (unsigned int)data[(signed long int)i] << 8 | (unsigned int)data[(signed long int)(i + 1)];
      if(val >= 60352u || val >= 40957u && !(val >= 57408u) || !(val >= 33088u))
        return -1;

    }
    return 0;
  }
}

// QRinput_checkModeNum
// file qrinput.c line 363
static signed int QRinput_checkModeNum(signed int size, const char *data)
{
  signed int i = 0;
  _Bool tmp_if_expr$1;
  for( ; !(i >= size); i = i + 1)
  {
    if(!((signed int)data[(signed long int)i] >= 48))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)data[(signed long int)i] > 57 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      return -1;

  }
  return 0;
}

// QRinput_convertData
// file qrinput.c line 1154
static signed int QRinput_convertData(struct _QRinput *input)
{
  signed int bits;
  signed int ver;
  ver=QRinput_estimateVersion(input);
  signed int return_value_QRinput_getVersion$1;
  return_value_QRinput_getVersion$1=QRinput_getVersion(input);
  if(!(return_value_QRinput_getVersion$1 >= ver))
    QRinput_setVersion(input, ver);

  signed int return_value_QRinput_getVersion$3;
  do
  {
    bits=QRinput_createBitStream(input);
    if(!(bits >= 0))
      return -1;

    ver=QRspec_getMinimumVersion((bits + 7) / 8, input->level);
    if(!(ver >= 0))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      *return_value___errno_location$2 = 34;
      return -1;
    }

    else
    {
      return_value_QRinput_getVersion$3=QRinput_getVersion(input);
      if(!(return_value_QRinput_getVersion$3 >= ver))
        QRinput_setVersion(input, ver);

      else
        break;
    }
  }
  while((_Bool)1);
  return 0;
}

// QRinput_createBitStream
// file qrinput.c line 1127
static signed int QRinput_createBitStream(struct _QRinput *input)
{
  struct _QRinput_List *list;
  signed int bits;
  signed int total = 0;
  list = input->head;
  for( ; !(list == ((struct _QRinput_List *)NULL)); list = list->next)
  {
    bits=QRinput_encodeBitStream(list, input->version, input->mqr);
    if(!(bits >= 0))
      return -1;

    total = total + bits;
  }
  return total;
}

// QRinput_decodeECIfromByteArray
// file qrinput.c line 795
static unsigned int QRinput_decodeECIfromByteArray(unsigned char *data)
{
  signed int i;
  unsigned int ecinum = (unsigned int)0;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    ecinum = ecinum << 8;
    ecinum = ecinum | (unsigned int)data[(signed long int)(3 - i)];
  }
  return ecinum;
}

// QRinput_dup
// file qrinput.c line 327
extern struct _QRinput * QRinput_dup(struct _QRinput *input)
{
  struct _QRinput *n;
  struct _QRinput_List *list;
  struct _QRinput_List *e;
  if(!(input->mqr == 0))
    n=QRinput_newMQR(input->version, input->level);

  else
    n=QRinput_new2(input->version, input->level);
  if(n == ((struct _QRinput *)NULL))
    return (struct _QRinput *)(void *)0;

  else
  {
    list = input->head;
    for( ; !(list == ((struct _QRinput_List *)NULL)); list = list->next)
    {
      e=QRinput_List_dup(list);
      if(e == ((struct _QRinput_List *)NULL))
      {
        QRinput_free(n);
        return (struct _QRinput *)(void *)0;
      }

      QRinput_appendEntry(n, e);
    }
    return n;
  }
}

// QRinput_encodeBitStream
// file qrinput.c line 1053
static signed int QRinput_encodeBitStream(struct _QRinput_List *entry, signed int version, signed int mqr)
{
  signed int words;
  signed int ret;
  struct _QRinput_List *st1 = (struct _QRinput_List *)(void *)0;
  struct _QRinput_List *st2 = (struct _QRinput_List *)(void *)0;
  if(!(entry->bstream == ((struct anonymous$9 *)NULL)))
  {
    BitStream_free(entry->bstream);
    entry->bstream = (struct anonymous$9 *)(void *)0;
  }

  words=QRspec_maximumWords(entry->mode, version);
  _Bool tmp_if_expr$1;
  if(!(words == 0))
    tmp_if_expr$1 = entry->size > words ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    st1=QRinput_List_newEntry(entry->mode, words, entry->data);
    if(st1 == ((struct _QRinput_List *)NULL))
      goto ABORT;

    st2=QRinput_List_newEntry(entry->mode, entry->size - words, &entry->data[(signed long int)words]);
    if(st2 == ((struct _QRinput_List *)NULL))
      goto ABORT;

    ret=QRinput_encodeBitStream(st1, version, mqr);
    if(!(ret >= 0))
      goto ABORT;

    ret=QRinput_encodeBitStream(st2, version, mqr);
    if(!(ret >= 0))
      goto ABORT;

    entry->bstream=BitStream_new();
    if(entry->bstream == ((struct anonymous$9 *)NULL))
      goto ABORT;

    ret=BitStream_append(entry->bstream, st1->bstream);
    if(!(ret >= 0))
      goto ABORT;

    ret=BitStream_append(entry->bstream, st2->bstream);
    if(!(ret >= 0))
      goto ABORT;

    QRinput_List_freeEntry(st1);
    QRinput_List_freeEntry(st2);
  }

  else
  {
    ret = 0;
    switch((signed int)entry->mode)
    {
      case QR_MODE_NUM:
      {
        ret=QRinput_encodeModeNum(entry, version, mqr);
        break;
      }
      case QR_MODE_AN:
      {
        ret=QRinput_encodeModeAn(entry, version, mqr);
        break;
      }
      case QR_MODE_8:
      {
        ret=QRinput_encodeMode8(entry, version, mqr);
        break;
      }
      case QR_MODE_KANJI:
      {
        ret=QRinput_encodeModeKanji(entry, version, mqr);
        break;
      }
      case QR_MODE_STRUCTURE:
      {
        ret=QRinput_encodeModeStructure(entry, mqr);
        break;
      }
      case QR_MODE_ECI:
      {
        ret=QRinput_encodeModeECI(entry, version);
        break;
      }
      case QR_MODE_FNC1SECOND:
        ret=QRinput_encodeModeFNC1Second(entry, version);
    }
    if(!(ret >= 0))
      return -1;

  }
  return entry->bstream->length;

ABORT:
  ;
  QRinput_List_freeEntry(st1);
  QRinput_List_freeEntry(st2);
  return -1;
}

// QRinput_encodeMode8
// file qrinput.c line 593
static signed int QRinput_encodeMode8(struct _QRinput_List *entry, signed int version, signed int mqr)
{
  signed int ret;
  entry->bstream=BitStream_new();
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    if(!(mqr == 0))
    {
      if(!(version >= 3))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        *return_value___errno_location$1 = 22;
        goto ABORT;
      }

      ret=BitStream_appendNum(entry->bstream, version - 1, (unsigned int)2);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_MQRspec_lengthIndicator$2;
      return_value_MQRspec_lengthIndicator$2=MQRspec_lengthIndicator((enum anonymous$8)QR_MODE_8, version);
      ret=BitStream_appendNum(entry->bstream, return_value_MQRspec_lengthIndicator$2, (unsigned int)entry->size);
      if(!(ret >= 0))
        goto ABORT;

    }

    else
    {
      ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)4);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_QRspec_lengthIndicator$3;
      return_value_QRspec_lengthIndicator$3=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_8, version);
      ret=BitStream_appendNum(entry->bstream, return_value_QRspec_lengthIndicator$3, (unsigned int)entry->size);
      if(!(ret >= 0))
        goto ABORT;

    }
    ret=BitStream_appendBytes(entry->bstream, entry->size, entry->data);
    if(ret >= 0)
      return 0;

    else
    {

    ABORT:
      ;
      BitStream_free(entry->bstream);
      entry->bstream = (struct anonymous$9 *)(void *)0;
      return -1;
    }
  }
}

// QRinput_encodeModeAn
// file qrinput.c line 523
static signed int QRinput_encodeModeAn(struct _QRinput_List *entry, signed int version, signed int mqr)
{
  signed int words;
  signed int i;
  signed int ret;
  unsigned int val;
  entry->bstream=BitStream_new();
  signed int tmp_if_expr$4;
  signed int tmp_if_expr$5;
  signed int tmp_if_expr$6;
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    if(!(mqr == 0))
    {
      if(!(version >= 2))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        *return_value___errno_location$1 = 22;
        goto ABORT;
      }

      ret=BitStream_appendNum(entry->bstream, version - 1, (unsigned int)1);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_MQRspec_lengthIndicator$2;
      return_value_MQRspec_lengthIndicator$2=MQRspec_lengthIndicator((enum anonymous$8)QR_MODE_AN, version);
      ret=BitStream_appendNum(entry->bstream, return_value_MQRspec_lengthIndicator$2, (unsigned int)entry->size);
      if(!(ret >= 0))
        goto ABORT;

    }

    else
    {
      ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)2);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_QRspec_lengthIndicator$3;
      return_value_QRspec_lengthIndicator$3=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_AN, version);
      ret=BitStream_appendNum(entry->bstream, return_value_QRspec_lengthIndicator$3, (unsigned int)entry->size);
      if(!(ret >= 0))
        goto ABORT;

    }
    words = entry->size / 2;
    i = 0;
    for( ; !(i >= words); i = i + 1)
    {
      if(!((0x80 & (signed int)entry->data[(signed long int)(2 * i)]) == 0))
        tmp_if_expr$4 = -1;

      else
        tmp_if_expr$4 = (signed int)QRinput_anTable[(signed long int)(signed int)entry->data[(signed long int)(i * 2)]];
      val = (unsigned int)tmp_if_expr$4 * (unsigned int)45;
      if(!((0x80 & (signed int)entry->data[(signed long int)(2 * i + 1)]) == 0))
        tmp_if_expr$5 = -1;

      else
        tmp_if_expr$5 = (signed int)QRinput_anTable[(signed long int)(signed int)entry->data[(signed long int)(i * 2 + 1)]];
      val = val + (unsigned int)tmp_if_expr$5;
      ret=BitStream_appendNum(entry->bstream, 11, val);
      if(!(ret >= 0))
        goto ABORT;

    }
    if(!((1 & entry->size) == 0))
    {
      if(!((0x80 & (signed int)entry->data[(signed long int)(2 * words)]) == 0))
        tmp_if_expr$6 = -1;

      else
        tmp_if_expr$6 = (signed int)QRinput_anTable[(signed long int)(signed int)entry->data[(signed long int)(words * 2)]];
      val = (unsigned int)tmp_if_expr$6;
      ret=BitStream_appendNum(entry->bstream, 6, val);
      if(!(ret >= 0))
        goto ABORT;

    }

    return 0;

  ABORT:
    ;
    BitStream_free(entry->bstream);
    entry->bstream = (struct anonymous$9 *)(void *)0;
    return -1;
  }
}

// QRinput_encodeModeECI
// file qrinput.c line 825
static signed int QRinput_encodeModeECI(struct _QRinput_List *entry, signed int version)
{
  signed int ret;
  signed int words;
  unsigned int ecinum;
  unsigned int code;
  entry->bstream=BitStream_new();
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    ecinum=QRinput_decodeECIfromByteArray(entry->data);
    if(!(ecinum >= 128u))
    {
      words = 1;
      code = ecinum;
    }

    else
      if(!(ecinum >= 16384u))
      {
        words = 2;
        code = (unsigned int)0x8000 + ecinum;
      }

      else
      {
        words = 3;
        code = (unsigned int)0xc0000 + ecinum;
      }
    ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)7);
    if(ret >= 0)
    {
      ret=BitStream_appendNum(entry->bstream, words * 8, code);
      if(!(ret >= 0))
        goto ABORT;

      return 0;
    }

    else
    {

    ABORT:
      ;
      BitStream_free(entry->bstream);
      entry->bstream = (struct anonymous$9 *)(void *)0;
      return -1;
    }
  }
}

// QRinput_encodeModeFNC1Second
// file qrinput.c line 772
static signed int QRinput_encodeModeFNC1Second(struct _QRinput_List *entry, signed int version)
{
  signed int ret;
  entry->bstream=BitStream_new();
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)9);
    if(ret >= 0)
    {
      ret=BitStream_appendBytes(entry->bstream, 1, entry->data);
      if(!(ret >= 0))
        goto ABORT;

      return 0;
    }

    else
    {

    ABORT:
      ;
      BitStream_free(entry->bstream);
      entry->bstream = (struct anonymous$9 *)(void *)0;
      return -1;
    }
  }
}

// QRinput_encodeModeKanji
// file qrinput.c line 675
static signed int QRinput_encodeModeKanji(struct _QRinput_List *entry, signed int version, signed int mqr)
{
  signed int ret;
  signed int i;
  unsigned int val;
  unsigned int h;
  entry->bstream=BitStream_new();
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    if(!(mqr == 0))
    {
      if(!(version >= 2))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        *return_value___errno_location$1 = 22;
        goto ABORT;
      }

      ret=BitStream_appendNum(entry->bstream, version - 1, (unsigned int)3);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_MQRspec_lengthIndicator$2;
      return_value_MQRspec_lengthIndicator$2=MQRspec_lengthIndicator((enum anonymous$8)QR_MODE_KANJI, version);
      ret=BitStream_appendNum(entry->bstream, return_value_MQRspec_lengthIndicator$2, (unsigned int)(entry->size / 2));
      if(!(ret >= 0))
        goto ABORT;

    }

    else
    {
      ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)8);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_QRspec_lengthIndicator$3;
      return_value_QRspec_lengthIndicator$3=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_KANJI, version);
      ret=BitStream_appendNum(entry->bstream, return_value_QRspec_lengthIndicator$3, (unsigned int)(entry->size / 2));
      if(!(ret >= 0))
        goto ABORT;

    }
    i = 0;
    for( ; !(i >= entry->size); i = i + 2)
    {
      val = (unsigned int)entry->data[(signed long int)i] << 8 | (unsigned int)entry->data[(signed long int)(i + 1)];
      if(!(val >= 40957u))
        val = val - (unsigned int)0x8140;

      else
        val = val - (unsigned int)0xc140;
      h = (val >> 8) * (unsigned int)0xc0;
      val = (val & (unsigned int)0xff) + h;
      ret=BitStream_appendNum(entry->bstream, 13, val);
      if(!(ret >= 0))
        goto ABORT;

    }
    return 0;

  ABORT:
    ;
    BitStream_free(entry->bstream);
    entry->bstream = (struct anonymous$9 *)(void *)0;
    return -1;
  }
}

// QRinput_encodeModeNum
// file qrinput.c line 410
static signed int QRinput_encodeModeNum(struct _QRinput_List *entry, signed int version, signed int mqr)
{
  signed int words;
  signed int i;
  signed int ret;
  unsigned int val;
  entry->bstream=BitStream_new();
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    if(!(mqr == 0))
    {
      if(version >= 2)
      {
        ret=BitStream_appendNum(entry->bstream, version - 1, (unsigned int)0);
        if(!(ret >= 0))
          goto ABORT;

      }

      signed int return_value_MQRspec_lengthIndicator$1;
      return_value_MQRspec_lengthIndicator$1=MQRspec_lengthIndicator((enum anonymous$8)QR_MODE_NUM, version);
      ret=BitStream_appendNum(entry->bstream, return_value_MQRspec_lengthIndicator$1, (unsigned int)entry->size);
      if(!(ret >= 0))
        goto ABORT;

    }

    else
    {
      ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)1);
      if(!(ret >= 0))
        goto ABORT;

      signed int return_value_QRspec_lengthIndicator$2;
      return_value_QRspec_lengthIndicator$2=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_NUM, version);
      ret=BitStream_appendNum(entry->bstream, return_value_QRspec_lengthIndicator$2, (unsigned int)entry->size);
      if(!(ret >= 0))
        goto ABORT;

    }
    words = entry->size / 3;
    i = 0;
    for( ; !(i >= words); i = i + 1)
    {
      val = (unsigned int)(((signed int)entry->data[(signed long int)(i * 3)] - 48) * 100);
      val = val + (unsigned int)(((signed int)entry->data[(signed long int)(i * 3 + 1)] - 48) * 10);
      val = val + (unsigned int)((signed int)entry->data[(signed long int)(i * 3 + 2)] - 48);
      ret=BitStream_appendNum(entry->bstream, 10, val);
      if(!(ret >= 0))
        goto ABORT;

    }
    if(entry->size + -(3 * words) == 1)
    {
      val = (unsigned int)((signed int)entry->data[(signed long int)(words * 3)] - 48);
      ret=BitStream_appendNum(entry->bstream, 4, val);
      if(!(ret >= 0))
        goto ABORT;

    }

    else
      if(entry->size + -(3 * words) == 2)
      {
        val = (unsigned int)(((signed int)entry->data[(signed long int)(words * 3)] - 48) * 10);
        val = val + (unsigned int)((signed int)entry->data[(signed long int)(words * 3 + 1)] - 48);
        BitStream_appendNum(entry->bstream, 7, val);
        if(!(ret >= 0))
          goto ABORT;

      }

    return 0;

  ABORT:
    ;
    BitStream_free(entry->bstream);
    entry->bstream = (struct anonymous$9 *)(void *)0;
    return -1;
  }
}

// QRinput_encodeModeStructure
// file qrinput.c line 734
static signed int QRinput_encodeModeStructure(struct _QRinput_List *entry, signed int mqr)
{
  signed int ret;
  if(!(mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  entry->bstream=BitStream_new();
  if(entry->bstream == ((struct anonymous$9 *)NULL))
    return -1;

  else
  {
    ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)3);
    if(ret >= 0)
    {
      ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)((signed int)entry->data[(signed long int)1] - 1));
      if(!(ret >= 0))
        goto ABORT;

      ret=BitStream_appendNum(entry->bstream, 4, (unsigned int)((signed int)entry->data[(signed long int)0] - 1));
      if(!(ret >= 0))
        goto ABORT;

      ret=BitStream_appendNum(entry->bstream, 8, (unsigned int)entry->data[(signed long int)2]);
      if(!(ret >= 0))
        goto ABORT;

      return 0;
    }

    else
    {

    ABORT:
      ;
      BitStream_free(entry->bstream);
      entry->bstream = (struct anonymous$9 *)(void *)0;
      return -1;
    }
  }
}

// QRinput_estimateBitStreamSize
// file qrinput.c line 958
extern signed int QRinput_estimateBitStreamSize(struct _QRinput *input, signed int version)
{
  struct _QRinput_List *list;
  signed int bits = 0;
  list = input->head;
  while(!(list == ((struct _QRinput_List *)NULL)))
  {
    signed int return_value_QRinput_estimateBitStreamSizeOfEntry$1;
    return_value_QRinput_estimateBitStreamSizeOfEntry$1=QRinput_estimateBitStreamSizeOfEntry(list, version, input->mqr);
    bits = bits + return_value_QRinput_estimateBitStreamSizeOfEntry$1;
    list = list->next;
  }
  return bits;
}

// QRinput_estimateBitStreamSizeOfEntry
// file qrinput.c line 903
static signed int QRinput_estimateBitStreamSizeOfEntry(struct _QRinput_List *entry, signed int version, signed int mqr)
{
  signed int bits = 0;
  signed int l;
  signed int m;
  signed int num;
  if(version == 0)
    version = 1;

  switch((signed int)entry->mode)
  {
    case QR_MODE_NUM:
    {
      bits=QRinput_estimateBitsModeNum(entry->size);
      break;
    }
    case QR_MODE_AN:
    {
      bits=QRinput_estimateBitsModeAn(entry->size);
      break;
    }
    case QR_MODE_8:
    {
      bits=QRinput_estimateBitsMode8(entry->size);
      break;
    }
    case QR_MODE_KANJI:
    {
      bits=QRinput_estimateBitsModeKanji(entry->size);
      break;
    }
    case QR_MODE_STRUCTURE:
      return 20;
    case QR_MODE_ECI:
    {
      bits=QRinput_estimateBitsModeECI(entry->data);
      break;
    }
    case QR_MODE_FNC1FIRST:
      return 4;
    case QR_MODE_FNC1SECOND:
      return 4 + 8;
    default:
      return 0;
  }
  if(!(mqr == 0))
  {
    l=QRspec_lengthIndicator(entry->mode, version);
    m = version - 1;
    bits = bits + l + m;
  }

  else
  {
    l=QRspec_lengthIndicator(entry->mode, version);
    m = 1 << l;
    num = ((entry->size + m) - 1) / m;
    bits = bits + num * (4 + l);
  }
  return bits;
}

// QRinput_estimateBitsMode8
// file qrinput.c line 579
extern signed int QRinput_estimateBitsMode8(signed int size)
{
  return size * 8;
}

// QRinput_estimateBitsModeAn
// file qrinput.c line 499
extern signed int QRinput_estimateBitsModeAn(signed int size)
{
  signed int w;
  signed int bits;
  w = size / 2;
  bits = w * 11;
  if(!((1 & size) == 0))
    bits = bits + 6;

  return bits;
}

// QRinput_estimateBitsModeECI
// file qrinput.c line 809
signed int QRinput_estimateBitsModeECI(unsigned char *data)
{
  unsigned int ecinum;
  ecinum=QRinput_decodeECIfromByteArray(data);
  if(!(ecinum >= 128u))
    return 4 + 8;

  else
    if(!(ecinum >= 16384u))
      return 4 + 16;

    else
      return 4 + 24;
}

// QRinput_estimateBitsModeKanji
// file qrinput.c line 636
extern signed int QRinput_estimateBitsModeKanji(signed int size)
{
  return (size / 2) * 13;
}

// QRinput_estimateBitsModeNum
// file qrinput.c line 380
extern signed int QRinput_estimateBitsModeNum(signed int size)
{
  signed int w;
  signed int bits;
  w = size / 3;
  bits = w * 10;
  switch(size - w * 3)
  {
    case 1:
    {
      bits = bits + 4;
      break;
    }
    case 2:
      bits = bits + 7;
  }
  return bits;
}

// QRinput_estimateVersion
// file qrinput.c line 977
static signed int QRinput_estimateVersion(struct _QRinput *input)
{
  signed int bits;
  signed int version;
  signed int prev;
  version = 0;
  do
  {
    prev = version;
    bits=QRinput_estimateBitStreamSize(input, prev);
    version=QRspec_getMinimumVersion((bits + 7) / 8, input->level);
    if(!(version >= 0))
      return -1;

  }
  while(!(prev >= version));
  return version;
}

// QRinput_free
// file qrencode.h line 265
extern void QRinput_free(struct _QRinput *input)
{
  struct _QRinput_List *list;
  struct _QRinput_List *next;
  if(!(input == ((struct _QRinput *)NULL)))
  {
    list = input->head;
    for( ; !(list == ((struct _QRinput_List *)NULL)); list = next)
    {
      next = list->next;
      QRinput_List_freeEntry(list);
    }
    free((void *)input);
  }

}

// QRinput_getBitStream
// file qrinput.c line 1398
extern struct anonymous$9 * QRinput_getBitStream(struct _QRinput *input)
{
  struct anonymous$9 *bstream;
  signed int ret;
  bstream=QRinput_mergeBitStream(input);
  if(bstream == ((struct anonymous$9 *)NULL))
    return (struct anonymous$9 *)(void *)0;

  else
  {
    if(!(input->mqr == 0))
      ret=QRinput_appendPaddingBitMQR(bstream, input);

    else
      ret=QRinput_appendPaddingBit(bstream, input);
    if(!(ret >= 0))
    {
      BitStream_free(bstream);
      return (struct anonymous$9 *)(void *)0;
    }

    else
      return bstream;
  }
}

// QRinput_getByteStream
// file qrinput.h line 78
extern unsigned char * QRinput_getByteStream(struct _QRinput *input)
{
  struct anonymous$9 *bstream;
  unsigned char *array;
  bstream=QRinput_getBitStream(input);
  if(bstream == ((struct anonymous$9 *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    array=BitStream_toByte(bstream);
    BitStream_free(bstream);
    return array;
  }
}

// QRinput_getErrorCorrectionLevel
// file qrinput.c line 173
extern enum anonymous$7 QRinput_getErrorCorrectionLevel(struct _QRinput *input)
{
  return input->level;
}

// QRinput_getVersion
// file qrinput.c line 156
extern signed int QRinput_getVersion(struct _QRinput *input)
{
  return input->version;
}

// QRinput_insertFNC1Header
// file qrinput.c line 1325
static signed int QRinput_insertFNC1Header(struct _QRinput *input)
{
  struct _QRinput_List *entry = (struct _QRinput_List *)(void *)0;
  if(input->fnc1 == 1)
    entry=QRinput_List_newEntry((enum anonymous$8)QR_MODE_FNC1FIRST, 0, (const unsigned char *)(void *)0);

  else
    if(input->fnc1 == 2)
      entry=QRinput_List_newEntry((enum anonymous$8)QR_MODE_FNC1SECOND, 1, &input->appid);

  _Bool tmp_if_expr$1;
  if(entry == ((struct _QRinput_List *)NULL))
    return -1;

  else
  {
    if(!((signed int)input->head->mode == QR_MODE_STRUCTURE))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)input->head->mode != QR_MODE_ECI ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      entry->next = input->head;
      input->head = entry;
    }

    else
    {
      entry->next = input->head->next;
      input->head->next = entry;
    }
    return 0;
  }
}

// QRinput_insertStructuredAppendHeader
// file qrinput.c line 247
extern signed int QRinput_insertStructuredAppendHeader(struct _QRinput *input, signed int size, signed int number, unsigned char parity)
{
  struct _QRinput_List *entry;
  unsigned char buf[3l];
  if(size >= 17)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  if(!(number >= 1) || !(size >= number))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 22;
    return -1;
  }

  buf[(signed long int)0] = (unsigned char)size;
  buf[(signed long int)1] = (unsigned char)number;
  buf[(signed long int)2] = parity;
  entry=QRinput_List_newEntry((enum anonymous$8)QR_MODE_STRUCTURE, 3, buf);
  if(entry == ((struct _QRinput_List *)NULL))
    return -1;

  else
  {
    entry->next = input->head;
    input->head = entry;
    return 0;
  }
}

// QRinput_isSplittableMode
// file qrinput.c line 39
signed int QRinput_isSplittableMode(enum anonymous$8 mode)
{
  return (signed int)((signed int)mode >= QR_MODE_NUM && (signed int)mode <= QR_MODE_KANJI);
}

// QRinput_lengthOfCode
// file qrinput.c line 1002
extern signed int QRinput_lengthOfCode(enum anonymous$8 mode, signed int version, signed int bits)
{
  signed int payload;
  signed int size;
  signed int chunks;
  signed int remain;
  signed int maxsize;
  signed int return_value_QRspec_lengthIndicator$1;
  return_value_QRspec_lengthIndicator$1=QRspec_lengthIndicator(mode, version);
  payload = (bits - 4) - return_value_QRspec_lengthIndicator$1;
  switch((signed int)mode)
  {
    case QR_MODE_NUM:
    {
      chunks = payload / 10;
      remain = payload - chunks * 10;
      size = chunks * 3;
      if(remain >= 7)
        size = size + 2;

      else
        if(remain >= 4)
          size = size + 1;

      break;
    }
    case QR_MODE_AN:
    {
      chunks = payload / 11;
      remain = payload - chunks * 11;
      size = chunks * 2;
      if(remain >= 6)
        size = size + 1;

      break;
    }
    case QR_MODE_8:
    {
      size = payload / 8;
      break;
    }
    case QR_MODE_KANJI:
    {
      size = (payload / 13) * 2;
      break;
    }
    case QR_MODE_STRUCTURE:
    {
      size = payload / 8;
      break;
    }
    default:
      size = 0;
  }
  maxsize=QRspec_maximumWords(mode, version);
  if(!(size >= 0))
    size = 0;

  if(maxsize >= 1 && !(maxsize >= size))
    size = maxsize;

  return size;
}

// QRinput_mergeBitStream
// file qrinput.c line 1355
extern struct anonymous$9 * QRinput_mergeBitStream(struct _QRinput *input)
{
  struct anonymous$9 *bstream;
  struct _QRinput_List *list;
  signed int ret;
  if(!(input->mqr == 0))
  {
    signed int return_value_QRinput_createBitStream$1;
    return_value_QRinput_createBitStream$1=QRinput_createBitStream(input);
    if(!(return_value_QRinput_createBitStream$1 >= 0))
      return (struct anonymous$9 *)(void *)0;

  }

  else
  {
    if(!(input->fnc1 == 0))
    {
      signed int return_value_QRinput_insertFNC1Header$2;
      return_value_QRinput_insertFNC1Header$2=QRinput_insertFNC1Header(input);
      if(!(return_value_QRinput_insertFNC1Header$2 >= 0))
        return (struct anonymous$9 *)(void *)0;

    }

    signed int return_value_QRinput_convertData$3;
    return_value_QRinput_convertData$3=QRinput_convertData(input);
    if(!(return_value_QRinput_convertData$3 >= 0))
      return (struct anonymous$9 *)(void *)0;

  }
  bstream=BitStream_new();
  if(bstream == ((struct anonymous$9 *)NULL))
    return (struct anonymous$9 *)(void *)0;

  else
  {
    list = input->head;
    for( ; !(list == ((struct _QRinput_List *)NULL)); list = list->next)
    {
      ret=BitStream_append(bstream, list->bstream);
      if(!(ret >= 0))
      {
        BitStream_free(bstream);
        return (struct anonymous$9 *)(void *)0;
      }

    }
    return bstream;
  }
}

// QRinput_new
// file qrinput.c line 110
extern struct _QRinput * QRinput_new(void)
{
  struct _QRinput *return_value_QRinput_new2$1;
  return_value_QRinput_new2$1=QRinput_new2(0, (enum anonymous$7)QR_ECLEVEL_L);
  return return_value_QRinput_new2$1;
}

// QRinput_new2
// file qrencode.h line 172
extern struct _QRinput * QRinput_new2(signed int version, enum anonymous$7 level)
{
  struct _QRinput *input;
  if(version >= 41 || (signed int)level >= 4 || !(version >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct _QRinput *)(void *)0;
  }

  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct _QRinput) /*40ul*/ );
  input = (struct _QRinput *)return_value_malloc$2;
  if(input == ((struct _QRinput *)NULL))
    return (struct _QRinput *)(void *)0;

  else
  {
    input->head = (struct _QRinput_List *)(void *)0;
    input->tail = (struct _QRinput_List *)(void *)0;
    input->version = version;
    input->level = level;
    input->mqr = 0;
    input->fnc1 = 0;
    return input;
  }
}

// QRinput_newMQR
// file qrencode.h line 184
extern struct _QRinput * QRinput_newMQR(signed int version, enum anonymous$7 level)
{
  struct _QRinput *input;
  signed int return_value_MQRspec_getECCLength$1;
  if(!(version >= 5) && version >= 1)
  {
    return_value_MQRspec_getECCLength$1=MQRspec_getECCLength(version, level);
    if(return_value_MQRspec_getECCLength$1 == 0)
      goto INVALID;

    input=QRinput_new2(version, level);
    if(input == ((struct _QRinput *)NULL))
      return (struct _QRinput *)(void *)0;

    input->mqr = 1;
    return input;
  }

  else
  {

  INVALID:
    ;
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 22;
    return (struct _QRinput *)(void *)0;
  }
}

// QRinput_setErrorCorrectionLevel
// file qrinput.c line 178
extern signed int QRinput_setErrorCorrectionLevel(struct _QRinput *input, enum anonymous$7 level)
{
  if((signed int)level >= 4 || !(input->mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  input->level = level;
  return 0;
}

// QRinput_setFNC1First
// file qrinput.c line 1706
extern signed int QRinput_setFNC1First(struct _QRinput *input)
{
  if(!(input->mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  input->fnc1 = 1;
  return 0;
}

// QRinput_setFNC1Second
// file qrinput.c line 1717
extern signed int QRinput_setFNC1Second(struct _QRinput *input, unsigned char appid)
{
  if(!(input->mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  input->fnc1 = 2;
  input->appid = appid;
  return 0;
}

// QRinput_setVersion
// file qrinput.c line 161
extern signed int QRinput_setVersion(struct _QRinput *input, signed int version)
{
  if(version >= 41 || !(input->mqr == 0) || !(version >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  input->version = version;
  return 0;
}

// QRinput_setVersionAndErrorCorrectionLevel
// file qrinput.c line 190
extern signed int QRinput_setVersionAndErrorCorrectionLevel(struct _QRinput *input, signed int version, enum anonymous$7 level)
{
  if(!(input->mqr == 0))
  {
    if(version >= 5 || !(version >= 1))
      goto INVALID;

    signed int return_value_MQRspec_getECCLength$1;
    return_value_MQRspec_getECCLength$1=MQRspec_getECCLength(version, level);
    if(return_value_MQRspec_getECCLength$1 == 0)
      goto INVALID;

  }

  else
  {
    if(version >= 41 || !(version >= 0))
      goto INVALID;

    if((signed int)level >= 4)
      goto INVALID;

  }
  input->version = version;
  input->level = level;
  return 0;

INVALID:
  ;
  signed int *return_value___errno_location$2;
  return_value___errno_location$2=__errno_location();
  *return_value___errno_location$2 = 22;
  return -1;
}

// QRinput_splitEntry
// file qrinput.c line 1556
extern signed int QRinput_splitEntry(struct _QRinput_List *entry, signed int bytes)
{
  struct _QRinput_List *e;
  signed int ret;
  e=QRinput_List_newEntry(entry->mode, entry->size - bytes, entry->data + (signed long int)bytes);
  if(e == ((struct _QRinput_List *)NULL))
    return -1;

  else
  {
    ret=QRinput_List_shrinkEntry(entry, bytes);
    if(!(ret >= 0))
    {
      QRinput_List_freeEntry(e);
      return -1;
    }

    else
    {
      e->next = entry->next;
      entry->next = e;
      return 0;
    }
  }
}

// QRinput_splitQRinputToStruct
// file qrencode.h line 328
extern struct _QRinput_Struct * QRinput_splitQRinputToStruct(struct _QRinput *input)
{
  struct _QRinput *p;
  struct _QRinput_Struct *s;
  signed int bits;
  signed int maxbits;
  signed int nextbits;
  signed int bytes;
  signed int ret;
  struct _QRinput_List *list;
  struct _QRinput_List *next;
  struct _QRinput_List *prev;
  if(!(input->mqr == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (struct _QRinput_Struct *)(void *)0;
  }

  s=QRinput_Struct_new();
  if(s == ((struct _QRinput_Struct *)NULL))
    return (struct _QRinput_Struct *)(void *)0;

  else
  {
    input=QRinput_dup(input);
    if(input == ((struct _QRinput *)NULL))
    {
      QRinput_Struct_free(s);
      return (struct _QRinput_Struct *)(void *)0;
    }

    else
    {
      unsigned char return_value_QRinput_calcParity$2;
      return_value_QRinput_calcParity$2=QRinput_calcParity(input);
      QRinput_Struct_setParity(s, return_value_QRinput_calcParity$2);
      signed int return_value_QRspec_getDataLength$3;
      return_value_QRspec_getDataLength$3=QRspec_getDataLength(input->version, input->level);
      maxbits = return_value_QRspec_getDataLength$3 * 8 - 20;
      if(!(maxbits >= 1))
      {
        QRinput_Struct_free(s);
        QRinput_free(input);
        return (struct _QRinput_Struct *)(void *)0;
      }

      else
      {
        bits = 0;
        list = input->head;
        prev = (struct _QRinput_List *)(void *)0;
        while(!(list == ((struct _QRinput_List *)NULL)))
        {
          nextbits=QRinput_estimateBitStreamSizeOfEntry(list, input->version, input->mqr);
          if(maxbits >= bits + nextbits)
          {
            ret=QRinput_encodeBitStream(list, input->version, input->mqr);
            if(!(ret >= 0))
              goto ABORT;

            bits = bits + ret;
            prev = list;
            list = list->next;
          }

          else
          {
            bytes=QRinput_lengthOfCode(list->mode, input->version, maxbits - bits);
            p=QRinput_new2(input->version, input->level);
            if(p == ((struct _QRinput *)NULL))
              goto ABORT;

            if(bytes >= 1)
            {
              ret=QRinput_splitEntry(list, bytes);
              if(!(ret >= 0))
              {
                QRinput_free(p);
                goto ABORT;
              }

              next = list->next;
              list->next = (struct _QRinput_List *)(void *)0;
              p->head = next;
              p->tail = input->tail;
              input->tail = list;
              prev = list;
              list = next;
            }

            else
            {
              prev->next = (struct _QRinput_List *)(void *)0;
              p->head = list;
              p->tail = input->tail;
              input->tail = prev;
            }
            ret=QRinput_Struct_appendInput(s, input);
            if(!(ret >= 0))
            {
              QRinput_free(p);
              goto ABORT;
            }

            input = p;
            bits = 0;
          }
        }
        ret=QRinput_Struct_appendInput(s, input);
        if(ret >= 0)
        {
          if(s->size >= 17)
          {
            QRinput_Struct_free(s);
            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            *return_value___errno_location$4 = 34;
            return (struct _QRinput_Struct *)(void *)0;
          }

          ret=QRinput_Struct_insertStructuredAppendHeaders(s);
          if(!(ret >= 0))
          {
            QRinput_Struct_free(s);
            return (struct _QRinput_Struct *)(void *)0;
          }

          return s;
        }

        else
        {

        ABORT:
          ;
          QRinput_free(input);
          QRinput_Struct_free(s);
          return (struct _QRinput_Struct *)(void *)0;
        }
      }
    }
  }
}

// QRraw_free
// file qrencode.c line 185
void QRraw_free(struct anonymous$4 *raw)
{
  if(!(raw == ((struct anonymous$4 *)NULL)))
  {
    free((void *)raw->datacode);
    free((void *)raw->ecccode);
    free((void *)raw->rsblock);
    free((void *)raw);
  }

}

// QRraw_getCode
// file qrencode.c line 162
unsigned char QRraw_getCode(struct anonymous$4 *raw)
{
  signed int col;
  signed int row;
  unsigned char ret;
  if(!(raw->count >= raw->dataLength))
  {
    row = raw->count % raw->blocks;
    col = raw->count / raw->blocks;
    if(col >= raw->rsblock->dataLength)
      row = row + raw->b1;

    ret = (raw->rsblock + (signed long int)row)->data[(signed long int)col];
  }

  else
    if(!(raw->count >= raw->dataLength + raw->eccLength))
    {
      row = (raw->count - raw->dataLength) % raw->blocks;
      col = (raw->count - raw->dataLength) / raw->blocks;
      ret = (raw->rsblock + (signed long int)row)->ecc[(signed long int)col];
    }

    else
      return (unsigned char)0;
  raw->count = raw->count + 1;
  return ret;
}

// QRraw_new
// file qrencode.c line 112
struct anonymous$4 * QRraw_new(struct _QRinput *input)
{
  struct anonymous$4 *raw;
  signed int spec[5l];
  signed int ret;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$4) /*56ul*/ );
  raw = (struct anonymous$4 *)return_value_malloc$1;
  if(raw == ((struct anonymous$4 *)NULL))
    return (struct anonymous$4 *)(void *)0;

  else
  {
    raw->datacode=QRinput_getByteStream(input);
    if(raw->datacode == ((unsigned char *)NULL))
    {
      free((void *)raw);
      return (struct anonymous$4 *)(void *)0;
    }

    else
    {
      QRspec_getEccSpec(input->version, input->level, spec);
      raw->version = input->version;
      raw->b1 = spec[(signed long int)0];
      raw->dataLength = spec[(signed long int)0] * spec[(signed long int)1] + spec[(signed long int)3] * spec[(signed long int)4];
      raw->eccLength = (spec[(signed long int)0] + spec[(signed long int)3]) * spec[(signed long int)2];
      void *return_value_malloc$2;
      return_value_malloc$2=malloc((unsigned long int)raw->eccLength);
      raw->ecccode = (unsigned char *)return_value_malloc$2;
      if(raw->ecccode == ((unsigned char *)NULL))
      {
        free((void *)raw->datacode);
        free((void *)raw);
        return (struct anonymous$4 *)(void *)0;
      }

      else
      {
        raw->blocks = spec[(signed long int)0] + spec[(signed long int)3];
        void *return_value_calloc$3;
        return_value_calloc$3=calloc((unsigned long int)raw->blocks, sizeof(struct anonymous$3) /*32ul*/ );
        raw->rsblock = (struct anonymous$3 *)return_value_calloc$3;
        if(raw->rsblock == ((struct anonymous$3 *)NULL))
        {
          QRraw_free(raw);
          return (struct anonymous$4 *)(void *)0;
        }

        else
        {
          ret=RSblock_init(raw->rsblock, spec, raw->datacode, raw->ecccode);
          if(!(ret >= 0))
          {
            QRraw_free(raw);
            return (struct anonymous$4 *)(void *)0;
          }

          else
          {
            raw->count = 0;
            return raw;
          }
        }
      }
    }
  }
}

// QRspec_clearCache
// file qrspec.h line 162
extern void QRspec_clearCache(void)
{
  signed int i;
  pthread_mutex_lock(&frames_mutex);
  i = 1;
  for( ; !(i >= 41); i = i + 1)
  {
    free((void *)frames[(signed long int)i]);
    frames[(signed long int)i] = (unsigned char *)(void *)0;
  }
  pthread_mutex_unlock(&frames_mutex);
}

// QRspec_createFrame
// file qrspec.c line 439
static unsigned char * QRspec_createFrame(signed int version)
{
  unsigned char *frame;
  unsigned char *p;
  unsigned char *q;
  signed int width;
  signed int x;
  signed int y;
  unsigned int verinfo;
  unsigned int v;
  width = qrspecCapacity[(signed long int)version].width;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)(width * width));
  frame = (unsigned char *)return_value_malloc$1;
  if(frame == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    memset((void *)frame, 0, (unsigned long int)(width * width));
    putFinderPattern(frame, width, 0, 0);
    putFinderPattern(frame, width, width - 7, 0);
    putFinderPattern(frame, width, 0, width - 7);
    p = frame;
    q = frame + (signed long int)(width * (width - 7));
    y = 0;
    for( ; !(y >= 7); y = y + 1)
    {
      p[(signed long int)7] = (unsigned char)0xc0;
      p[(signed long int)(width - 8)] = (unsigned char)0xc0;
      q[(signed long int)7] = (unsigned char)0xc0;
      p = p + (signed long int)width;
      q = q + (signed long int)width;
    }
    memset((void *)(frame + (signed long int)(width * 7)), 0xc0, (unsigned long int)8);
    memset((void *)((frame + (signed long int)(width * 8)) - (signed long int)8), 0xc0, (unsigned long int)8);
    memset((void *)(frame + (signed long int)(width * (width - 8))), 0xc0, (unsigned long int)8);
    memset((void *)(frame + (signed long int)(width * 8)), 0x84, (unsigned long int)9);
    memset((void *)((frame + (signed long int)(width * 9)) - (signed long int)8), 0x84, (unsigned long int)8);
    p = frame + (signed long int)8;
    y = 0;
    for( ; !(y >= 8); y = y + 1)
    {
      *p = (unsigned char)0x84;
      p = p + (signed long int)width;
    }
    p = frame + (signed long int)(width * (width - 7)) + (signed long int)8;
    y = 0;
    for( ; !(y >= 7); y = y + 1)
    {
      *p = (unsigned char)0x84;
      p = p + (signed long int)width;
    }
    p = frame + (signed long int)(width * 6) + (signed long int)8;
    q = frame + (signed long int)(width * 8) + (signed long int)6;
    x = 1;
    for( ; !(x >= width + -15); x = x + 1)
    {
      *p = (unsigned char)(0x90 | x & 1);
      *q = (unsigned char)(0x90 | x & 1);
      p = p + 1l;
      q = q + (signed long int)width;
    }
    QRspec_putAlignmentPattern(version, frame, width);
    if(version >= 7)
    {
      verinfo=QRspec_getVersionPattern(version);
      p = frame + (signed long int)(width * (width - 11));
      v = verinfo;
      x = 0;
      for( ; !(x >= 6); x = x + 1)
      {
        y = 0;
        for( ; !(y >= 3); y = y + 1)
        {
          p[(signed long int)(width * y + x)] = (unsigned char)((unsigned int)0x88 | v & (unsigned int)1);
          v = v >> 1;
        }
      }
      p = (frame + (signed long int)width) - (signed long int)11;
      v = verinfo;
      y = 0;
      for( ; !(y >= 6); y = y + 1)
      {
        x = 0;
        for( ; !(x >= 3); x = x + 1)
        {
          p[(signed long int)x] = (unsigned char)((unsigned int)0x88 | v & (unsigned int)1);
          v = v >> 1;
        }
        p = p + (signed long int)width;
      }
    }

    frame[(signed long int)(width * (width - 8) + 8)] = (unsigned char)0x81;
    return frame;
  }
}

// QRspec_getDataLength
// file qrspec.h line 42
extern signed int QRspec_getDataLength(signed int version, enum anonymous$7 level)
{
  return qrspecCapacity[(signed long int)version].words - qrspecCapacity[(signed long int)version].ec[(signed long int)level];
}

// QRspec_getECCLength
// file qrspec.h line 50
extern signed int QRspec_getECCLength(signed int version, enum anonymous$7 level)
{
  return qrspecCapacity[(signed long int)version].ec[(signed long int)level];
}

// QRspec_getEccSpec
// file qrspec.h line 106
void QRspec_getEccSpec(signed int version, enum anonymous$7 level, signed int *spec)
{
  signed int b1;
  signed int b2;
  signed int data;
  signed int ecc;
  b1 = eccTable[(signed long int)version][(signed long int)level][(signed long int)0];
  b2 = eccTable[(signed long int)version][(signed long int)level][(signed long int)1];
  data=QRspec_getDataLength(version, level);
  ecc=QRspec_getECCLength(version, level);
  if(b2 == 0)
  {
    spec[(signed long int)0] = b1;
    spec[(signed long int)1] = data / b1;
    spec[(signed long int)2] = ecc / b1;
    spec[(signed long int)4] = 0;
    spec[(signed long int)3] = spec[(signed long int)4];
  }

  else
  {
    spec[(signed long int)0] = b1;
    spec[(signed long int)1] = data / (b1 + b2);
    spec[(signed long int)2] = ecc / (b1 + b2);
    spec[(signed long int)3] = b2;
    spec[(signed long int)4] = spec[(signed long int)1] + 1;
  }
}

// QRspec_getFormatInfo
// file qrspec.c line 386
extern unsigned int QRspec_getFormatInfo(signed int mask, enum anonymous$7 level)
{
  if(mask >= 8 || !(mask >= 0))
    return (unsigned int)0;

  else
    return formatInfo[(signed long int)level][(signed long int)mask];
}

// QRspec_getMinimumVersion
// file qrspec.h line 58
extern signed int QRspec_getMinimumVersion(signed int size, enum anonymous$7 level)
{
  signed int i;
  signed int words;
  i = 1;
  for( ; !(i >= 41); i = i + 1)
  {
    words = qrspecCapacity[(signed long int)i].words - qrspecCapacity[(signed long int)i].ec[(signed long int)level];
    if(words >= size)
      return i;

  }
  return -1;
}

// QRspec_getRemainder
// file qrspec.h line 72
extern signed int QRspec_getRemainder(signed int version)
{
  return qrspecCapacity[(signed long int)version].remainder;
}

// QRspec_getVersionPattern
// file qrspec.c line 367
extern unsigned int QRspec_getVersionPattern(signed int version)
{
  if(version >= 41 || !(version >= 7))
    return (unsigned int)0;

  else
    return versionPattern[(signed long int)(version - 7)];
}

// QRspec_getWidth
// file qrspec.h line 65
extern signed int QRspec_getWidth(signed int version)
{
  return qrspecCapacity[(signed long int)version].width;
}

// QRspec_lengthIndicator
// file qrspec.h line 84
extern signed int QRspec_lengthIndicator(enum anonymous$8 mode, signed int version)
{
  signed int l;
  signed int return_value_QRinput_isSplittableMode$1;
  return_value_QRinput_isSplittableMode$1=QRinput_isSplittableMode(mode);
  if(return_value_QRinput_isSplittableMode$1 == 0)
    return 0;

  else
  {
    if(!(version >= 10))
      l = 0;

    else
      if(!(version >= 27))
        l = 1;

      else
        l = 2;
    return lengthTableBits[(signed long int)mode][(signed long int)l];
  }
}

// QRspec_maximumWords
// file qrspec.h line 92
extern signed int QRspec_maximumWords(enum anonymous$8 mode, signed int version)
{
  signed int l;
  signed int bits;
  signed int words;
  signed int return_value_QRinput_isSplittableMode$1;
  return_value_QRinput_isSplittableMode$1=QRinput_isSplittableMode(mode);
  if(return_value_QRinput_isSplittableMode$1 == 0)
    return 0;

  else
  {
    if(!(version >= 10))
      l = 0;

    else
      if(!(version >= 27))
        l = 1;

      else
        l = 2;
    bits = lengthTableBits[(signed long int)mode][(signed long int)l];
    words = (1 << bits) - 1;
    if((signed int)mode == QR_MODE_KANJI)
      words = words * 2;

    return words;
  }
}

// QRspec_newFrame
// file qrspec.h line 157
extern unsigned char * QRspec_newFrame(signed int version)
{
  unsigned char *frame;
  signed int width;
  if(version >= 41 || !(version >= 1))
    return (unsigned char *)(void *)0;

  else
  {
    pthread_mutex_lock(&frames_mutex);
    if(frames[(signed long int)version] == ((unsigned char *)NULL))
      frames[(signed long int)version]=QRspec_createFrame(version);

    pthread_mutex_unlock(&frames_mutex);
    if(frames[(signed long int)version] == ((unsigned char *)NULL))
      return (unsigned char *)(void *)0;

    else
    {
      width = qrspecCapacity[(signed long int)version].width;
      void *return_value_malloc$1;
      return_value_malloc$1=malloc((unsigned long int)(width * width));
      frame = (unsigned char *)return_value_malloc$1;
      if(frame == ((unsigned char *)NULL))
        return (unsigned char *)(void *)0;

      else
      {
        memcpy((void *)frame, (const void *)frames[(signed long int)version], (unsigned long int)(width * width));
        return frame;
      }
    }
  }
}

// QRspec_putAlignmentMarker
// file qrspec.c line 290
static void QRspec_putAlignmentMarker(unsigned char *frame, signed int width, signed int ox, signed int oy)
{
  signed int x;
  signed int y;
  const unsigned char *s;
  frame = frame + (signed long int)(((oy - 2) * width + ox) - 2);
  static const unsigned char finder[25l] = { (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa0, (const unsigned char)0xa0, (const unsigned char)0xa0, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa0, (const unsigned char)0xa1, (const unsigned char)0xa0, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa0, (const unsigned char)0xa0, (const unsigned char)0xa0, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1, (const unsigned char)0xa1 };
  s = finder;
  y = 0;
  for( ; !(y >= 5); y = y + 1)
  {
    x = 0;
    for( ; !(x >= 5); x = x + 1)
      frame[(signed long int)x] = s[(signed long int)x];
    frame = frame + (signed long int)width;
    s = s + (signed long int)5;
  }
}

// QRspec_putAlignmentPattern
// file qrspec.c line 313
static void QRspec_putAlignmentPattern(signed int version, unsigned char *frame, signed int width)
{
  signed int d;
  signed int w;
  signed int x;
  signed int y;
  signed int cx;
  signed int cy;
  if(version >= 2)
  {
    d = alignmentPattern[(signed long int)version][(signed long int)1] - alignmentPattern[(signed long int)version][(signed long int)0];
    if(!(d >= 0))
      w = 2;

    else
      w = (width - alignmentPattern[(signed long int)version][(signed long int)0]) / d + 2;
    if(w * w == 4)
    {
      x = alignmentPattern[(signed long int)version][(signed long int)0];
      y = alignmentPattern[(signed long int)version][(signed long int)0];
      QRspec_putAlignmentMarker(frame, width, x, y);
    }

    else
    {
      cx = alignmentPattern[(signed long int)version][(signed long int)0];
      x = 1;
      for( ; !(x >= w + -1); x = x + 1)
      {
        QRspec_putAlignmentMarker(frame, width, 6, cx);
        QRspec_putAlignmentMarker(frame, width, cx, 6);
        cx = cx + d;
      }
      cy = alignmentPattern[(signed long int)version][(signed long int)0];
      y = 0;
      for( ; !(y >= w + -1); y = y + 1)
      {
        cx = alignmentPattern[(signed long int)version][(signed long int)0];
        x = 0;
        for( ; !(x >= w + -1); x = x + 1)
        {
          QRspec_putAlignmentMarker(frame, width, cx, cy);
          cx = cx + d;
        }
        cy = cy + d;
      }
    }
  }

}

// RSblock_init
// file qrencode.c line 72
static signed int RSblock_init(struct anonymous$3 *blocks, signed int *spec, unsigned char *data, unsigned char *ecc)
{
  signed int i;
  struct anonymous$3 *block;
  unsigned char *dp;
  unsigned char *ep;
  struct _RS *rs;
  signed int el;
  signed int dl = spec[(signed long int)1];
  el = spec[(signed long int)2];
  rs=init_rs(8, 0x11d, 0, 1, el, (255 - dl) - el);
  if(rs == ((struct _RS *)NULL))
    return -1;

  else
  {
    block = blocks;
    dp = data;
    ep = ecc;
    i = 0;
    for( ; !(i >= *spec); i = i + 1)
    {
      RSblock_initBlock(block, dl, dp, el, ep, rs);
      dp = dp + (signed long int)dl;
      ep = ep + (signed long int)el;
      block = block + 1l;
    }
    if(spec[3l] == 0)
      return 0;

    else
    {
      dl = spec[(signed long int)4];
      el = spec[(signed long int)2];
      rs=init_rs(8, 0x11d, 0, 1, el, (255 - dl) - el);
      if(rs == ((struct _RS *)NULL))
        return -1;

      else
      {
        i = 0;
        for( ; !(i >= spec[3l]); i = i + 1)
        {
          RSblock_initBlock(block, dl, dp, el, ep, rs);
          dp = dp + (signed long int)dl;
          ep = ep + (signed long int)el;
          block = block + 1l;
        }
        return 0;
      }
    }
  }
}

// RSblock_initBlock
// file qrencode.c line 62
static void RSblock_initBlock(struct anonymous$3 *block, signed int dl, unsigned char *data, signed int el, unsigned char *ecc, struct _RS *rs)
{
  block->dataLength = dl;
  block->data = data;
  block->eccLength = el;
  block->ecc = ecc;
  encode_rs_char(rs, data, ecc);
}

// Split_eat8
// file split.c line 189
static signed int Split_eat8(const char *string, struct _QRinput *input, enum anonymous$8 hint)
{
  const char *p;
  const char *q;
  enum anonymous$8 mode;
  signed int ret;
  signed int run;
  signed int dif;
  signed int la;
  signed int ln;
  signed int l8;
  signed int swcost;
  la=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_AN, input->version);
  ln=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_NUM, input->version);
  l8=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_8, input->version);
  p = string + (signed long int)1;
  signed int tmp_if_expr$5;
  while(!((signed int)*p == 0))
  {
    mode=Split_identifyMode(p, hint);
    if((signed int)mode == QR_MODE_KANJI)
      break;

    if((signed int)mode == QR_MODE_NUM)
    {
      q = p;
      for( ; !((signed int)(208 + (unsigned char)(signed int)*q) >= 10); q = q + 1l)
        ;
      enum anonymous$8 return_value_Split_identifyMode$1;
      return_value_Split_identifyMode$1=Split_identifyMode(q, hint);
      if((signed int)return_value_Split_identifyMode$1 == QR_MODE_8)
        swcost = 4 + l8;

      else
        swcost = 0;
      signed int return_value_QRinput_estimateBitsMode8$2;
      return_value_QRinput_estimateBitsMode8$2=QRinput_estimateBitsMode8((signed int)(p - string));
      signed int return_value_QRinput_estimateBitsModeNum$3;
      return_value_QRinput_estimateBitsModeNum$3=QRinput_estimateBitsModeNum((signed int)(q - p));
      signed int return_value_QRinput_estimateBitsMode8$4;
      return_value_QRinput_estimateBitsMode8$4=QRinput_estimateBitsMode8((signed int)(q - string));
      dif = (return_value_QRinput_estimateBitsMode8$2 + return_value_QRinput_estimateBitsModeNum$3 + 4 + ln + swcost) - return_value_QRinput_estimateBitsMode8$4;
      if(!(dif >= 0))
        break;

      else
        p = q;
    }

    else
      if((signed int)mode == QR_MODE_AN)
      {
        q = p;
        do
        {
          if(!((0x80 & (signed int)*q) == 0))
            tmp_if_expr$5 = -1;

          else
            tmp_if_expr$5 = (signed int)QRinput_anTable[(signed long int)(signed int)*q];
          if(!(tmp_if_expr$5 >= 0))
            break;

          q = q + 1l;
        }
        while((_Bool)1);
        enum anonymous$8 return_value_Split_identifyMode$6;
        return_value_Split_identifyMode$6=Split_identifyMode(q, hint);
        if((signed int)return_value_Split_identifyMode$6 == QR_MODE_8)
          swcost = 4 + l8;

        else
          swcost = 0;
        signed int return_value_QRinput_estimateBitsMode8$7;
        return_value_QRinput_estimateBitsMode8$7=QRinput_estimateBitsMode8((signed int)(p - string));
        signed int return_value_QRinput_estimateBitsModeAn$8;
        return_value_QRinput_estimateBitsModeAn$8=QRinput_estimateBitsModeAn((signed int)(q - p));
        signed int return_value_QRinput_estimateBitsMode8$9;
        return_value_QRinput_estimateBitsMode8$9=QRinput_estimateBitsMode8((signed int)(q - string));
        dif = (return_value_QRinput_estimateBitsMode8$7 + return_value_QRinput_estimateBitsModeAn$8 + 4 + la + swcost) - return_value_QRinput_estimateBitsMode8$9;
        if(!(dif >= 0))
          break;

        else
          p = q;
      }

      else
        p = p + 1l;
  }
  run = (signed int)(p - string);
  ret=QRinput_append(input, (enum anonymous$8)QR_MODE_8, run, (unsigned char *)string);
  if(!(ret >= 0))
    return -1;

  else
    return run;
}

// Split_eatAn
// file split.c line 123
static signed int Split_eatAn(const char *string, struct _QRinput *input, enum anonymous$8 hint)
{
  const char *p;
  const char *q;
  signed int ret;
  signed int run;
  signed int dif;
  signed int la;
  signed int ln;
  la=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_AN, input->version);
  ln=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_NUM, input->version);
  p = string;
  signed int tmp_if_expr$1;
  signed int tmp_if_expr$4;
  do
  {
    if(!((0x80 & (signed int)*p) == 0))
      tmp_if_expr$1 = -1;

    else
      tmp_if_expr$1 = (signed int)QRinput_anTable[(signed long int)(signed int)*p];
    if(!(tmp_if_expr$1 >= 0))
      break;

    if(!((signed int)(208 + (unsigned char)(signed int)*p) >= 10))
    {
      q = p;
      for( ; !((signed int)(208 + (unsigned char)(signed int)*q) >= 10); q = q + 1l)
        ;
      signed int return_value_QRinput_estimateBitsModeAn$2;
      return_value_QRinput_estimateBitsModeAn$2=QRinput_estimateBitsModeAn((signed int)(p - string));
      signed int return_value_QRinput_estimateBitsModeNum$3;
      return_value_QRinput_estimateBitsModeNum$3=QRinput_estimateBitsModeNum((signed int)(q - p));
      if(!((0x80 & (signed int)*q) == 0))
        tmp_if_expr$4 = -1;

      else
        tmp_if_expr$4 = (signed int)QRinput_anTable[(signed long int)(signed int)*q];
      signed int return_value_QRinput_estimateBitsModeAn$5;
      return_value_QRinput_estimateBitsModeAn$5=QRinput_estimateBitsModeAn((signed int)(q - string));
      dif = (return_value_QRinput_estimateBitsModeAn$2 + return_value_QRinput_estimateBitsModeNum$3 + 4 + ln + (tmp_if_expr$4 >= 0 ? 4 + ln : 0)) - return_value_QRinput_estimateBitsModeAn$5;
      if(!(dif >= 0))
        break;

      else
        p = q;
    }

    else
      p = p + 1l;
  }
  while((_Bool)1);
  run = (signed int)(p - string);
  signed int tmp_if_expr$10;
  if(!(*p == 0))
  {
    if(!((0x80 & (signed int)*p) == 0))
      tmp_if_expr$10 = -1;

    else
      tmp_if_expr$10 = (signed int)QRinput_anTable[(signed long int)(signed int)*p];
    if(!(tmp_if_expr$10 >= 0))
    {
      signed int return_value_QRinput_estimateBitsModeAn$6;
      return_value_QRinput_estimateBitsModeAn$6=QRinput_estimateBitsModeAn(run);
      signed int return_value_QRinput_estimateBitsMode8$7;
      return_value_QRinput_estimateBitsMode8$7=QRinput_estimateBitsMode8(1);
      signed int return_value_QRinput_estimateBitsMode8$8;
      return_value_QRinput_estimateBitsMode8$8=QRinput_estimateBitsMode8(run + 1);
      dif = (return_value_QRinput_estimateBitsModeAn$6 + 4 + la + return_value_QRinput_estimateBitsMode8$7) - return_value_QRinput_estimateBitsMode8$8;
      if(dif >= 1)
      {
        signed int return_value_Split_eat8$9;
        return_value_Split_eat8$9=Split_eat8(string, input, hint);
        return return_value_Split_eat8$9;
      }

    }

  }

  ret=QRinput_append(input, (enum anonymous$8)QR_MODE_AN, run, (unsigned char *)string);
  if(!(ret >= 0))
    return -1;

  else
    return run;
}

// Split_eatKanji
// file split.c line 172
static signed int Split_eatKanji(const char *string, struct _QRinput *input, enum anonymous$8 hint)
{
  const char *p;
  signed int ret;
  signed int run;
  p = string;
  enum anonymous$8 return_value_Split_identifyMode$1;
  do
  {
    return_value_Split_identifyMode$1=Split_identifyMode(p, hint);
    if(!((signed int)return_value_Split_identifyMode$1 == QR_MODE_KANJI))
      break;

    p = p + (signed long int)2;
  }
  while((_Bool)1);
  run = (signed int)(p - string);
  ret=QRinput_append(input, (enum anonymous$8)QR_MODE_KANJI, run, (unsigned char *)string);
  if(!(ret >= 0))
    return -1;

  else
    return run;
}

// Split_eatNum
// file split.c line 83
static signed int Split_eatNum(const char *string, struct _QRinput *input, enum anonymous$8 hint)
{
  const char *p;
  signed int ret;
  signed int run;
  signed int dif;
  signed int ln;
  enum anonymous$8 mode;
  ln=QRspec_lengthIndicator((enum anonymous$8)QR_MODE_NUM, input->version);
  p = string;
  for( ; !((signed int)(208 + (unsigned char)(signed int)*p) >= 10); p = p + 1l)
    ;
  run = (signed int)(p - string);
  mode=Split_identifyMode(p, hint);
  if((signed int)mode == QR_MODE_8)
  {
    signed int return_value_QRinput_estimateBitsModeNum$1;
    return_value_QRinput_estimateBitsModeNum$1=QRinput_estimateBitsModeNum(run);
    signed int return_value_QRinput_estimateBitsMode8$2;
    return_value_QRinput_estimateBitsMode8$2=QRinput_estimateBitsMode8(1);
    signed int return_value_QRinput_estimateBitsMode8$3;
    return_value_QRinput_estimateBitsMode8$3=QRinput_estimateBitsMode8(run + 1);
    dif = (return_value_QRinput_estimateBitsModeNum$1 + 4 + ln + return_value_QRinput_estimateBitsMode8$2) - return_value_QRinput_estimateBitsMode8$3;
    if(dif >= 1)
    {
      signed int return_value_Split_eat8$4;
      return_value_Split_eat8$4=Split_eat8(string, input, hint);
      return return_value_Split_eat8$4;
    }

  }

  if((signed int)mode == QR_MODE_AN)
  {
    signed int return_value_QRinput_estimateBitsModeNum$5;
    return_value_QRinput_estimateBitsModeNum$5=QRinput_estimateBitsModeNum(run);
    signed int return_value_QRinput_estimateBitsModeAn$6;
    return_value_QRinput_estimateBitsModeAn$6=QRinput_estimateBitsModeAn(1);
    signed int return_value_QRinput_estimateBitsModeAn$7;
    return_value_QRinput_estimateBitsModeAn$7=QRinput_estimateBitsModeAn(run + 1);
    dif = (return_value_QRinput_estimateBitsModeNum$5 + 4 + ln + return_value_QRinput_estimateBitsModeAn$6) - return_value_QRinput_estimateBitsModeAn$7;
    if(dif >= 1)
    {
      signed int return_value_Split_eatAn$8;
      return_value_Split_eatAn$8=Split_eatAn(string, input, hint);
      return return_value_Split_eatAn$8;
    }

  }

  ret=QRinput_append(input, (enum anonymous$8)QR_MODE_NUM, run, (unsigned char *)string);
  if(!(ret >= 0))
    return -1;

  else
    return run;
}

// Split_identifyMode
// file split.c line 53
static enum anonymous$8 Split_identifyMode(const char *string, enum anonymous$8 hint)
{
  unsigned char c;
  unsigned char d;
  unsigned int word;
  c = (unsigned char)string[(signed long int)0];
  signed int tmp_if_expr$1;
  if((signed int)c == 0)
    return (enum anonymous$8)QR_MODE_NUL;

  else
  {
    if(!((signed int)(208 + (unsigned char)(signed int)(signed char)c) >= 10))
      return (enum anonymous$8)QR_MODE_NUM;

    else
    {
      if(!((0x80 & (signed int)c) == 0))
        tmp_if_expr$1 = -1;

      else
        tmp_if_expr$1 = (signed int)QRinput_anTable[(signed long int)(signed int)c];
      if(tmp_if_expr$1 >= 0)
        return (enum anonymous$8)QR_MODE_AN;

      else
        if((signed int)hint == QR_MODE_KANJI)
        {
          d = (unsigned char)string[(signed long int)1];
          if(!((signed int)d == 0))
          {
            word = (unsigned int)c << 8 | (unsigned int)d;
            if(word >= 33088u && !(word >= 40957u) || word >= 57408u && !(word >= 60352u))
              return (enum anonymous$8)QR_MODE_KANJI;

          }

        }

    }
    return (enum anonymous$8)QR_MODE_8;
  }
}

// Split_splitString
// file split.c line 259
static signed int Split_splitString(const char *string, struct _QRinput *input, enum anonymous$8 hint)
{
  signed int length;
  enum anonymous$8 mode;
  if((signed int)*string == 0)
    return 0;

  else
  {
    mode=Split_identifyMode(string, hint);
    if((signed int)mode == QR_MODE_NUM)
      length=Split_eatNum(string, input, hint);

    else
      if((signed int)mode == QR_MODE_AN)
        length=Split_eatAn(string, input, hint);

      else
        if((signed int)mode == QR_MODE_KANJI && (signed int)hint == QR_MODE_KANJI)
          length=Split_eatKanji(string, input, hint);

        else
          length=Split_eat8(string, input, hint);
    if(length == 0)
      return 0;

    else
      if(!(length >= 0))
        return -1;

      else
      {
        signed int return_value_Split_splitString$1;
        return_value_Split_splitString$1=Split_splitString(&string[(signed long int)length], input, hint);
        return return_value_Split_splitString$1;
      }
  }
}

// Split_splitStringToQRinput
// file split.h line 44
extern signed int Split_splitStringToQRinput(const char *string, struct _QRinput *input, enum anonymous$8 hint, signed int casesensitive)
{
  char *newstr;
  signed int ret;
  _Bool tmp_if_expr$2;
  if(string == ((const char *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (signed int)*string == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$2)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -1;
  }

  if(casesensitive == 0)
  {
    newstr=dupAndToUpper(string, hint);
    if(newstr == ((char *)NULL))
      return -1;

    ret=Split_splitString(newstr, input, hint);
    free((void *)newstr);
  }

  else
    ret=Split_splitString(string, input, hint);
  return ret;
}

// dupAndToUpper
// file split.c line 282
static char * dupAndToUpper(const char *str, enum anonymous$8 hint)
{
  char *newstr;
  char *p;
  enum anonymous$8 mode;
  newstr=strdup(str);
  if(newstr == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    p = newstr;
    while(!((signed int)*p == 0))
    {
      mode=Split_identifyMode(p, hint);
      if((signed int)mode == QR_MODE_KANJI)
        p = p + (signed long int)2;

      else
      {
        if((signed int)*p >= 97)
        {
          if(!((signed int)*p >= 123))
            *p = (char)((signed int)*p - 32);

        }

        p = p + 1l;
      }
    }
    return newstr;
  }
}

// encode_rs_char
// file rscode.h line 37
extern void encode_rs_char(struct _RS *rs, const unsigned char *data, unsigned char *parity)
{
  signed int i;
  signed int j;
  unsigned char feedback;
  memset((void *)parity, 0, (unsigned long int)rs->nroots * sizeof(unsigned char) /*1ul*/ );
  i = 0;
  signed int return_value_modnn$1;
  signed int return_value_modnn$2;
  for( ; !(i >= rs->nn + -rs->nroots + -rs->pad); i = i + 1)
  {
    feedback = rs->index_of[(signed long int)((signed int)data[(signed long int)i] ^ (signed int)parity[(signed long int)0])];
    if(!((signed int)feedback == rs->nn))
    {
      j = 1;
      for( ; !(j >= rs->nroots); j = j + 1)
      {
        return_value_modnn$1=modnn(rs, (signed int)feedback + (signed int)rs->genpoly[(signed long int)(rs->nroots - j)]);
        parity[(signed long int)j] = parity[(signed long int)j] ^ rs->alpha_to[(signed long int)return_value_modnn$1];
      }
    }

    memmove((void *)&parity[(signed long int)0], (const void *)&parity[(signed long int)1], sizeof(unsigned char) /*1ul*/  * (unsigned long int)(rs->nroots - 1));
    if(!((signed int)feedback == rs->nn))
    {
      return_value_modnn$2=modnn(rs, (signed int)feedback + (signed int)rs->genpoly[(signed long int)0]);
      parity[(signed long int)(rs->nroots - 1)] = rs->alpha_to[(signed long int)return_value_modnn$2];
    }

    else
      parity[(signed long int)(rs->nroots - 1)] = (unsigned char)0;
  }
}

// encode_ver1to10
// file pthread_qrencode.c line 29
void * encode_ver1to10(void *arg)
{
  struct anonymous$1 *code;
  signed int i;
  signed int version;
  i = 0;
  for( ; !(i >= 500); i = i + 1)
  {
    version = 0;
    for( ; !(version >= 11); version = version + 1)
    {
      static const char *data = "This is test.";
      code=QRcode_encodeString(data, version, (enum anonymous$7)QR_ECLEVEL_L, (enum anonymous$8)QR_MODE_8, 0);
      if(code == ((struct anonymous$1 *)NULL))
        perror("Failed to encode:");

      else
        QRcode_free(code);
    }
  }
  return (void *)0;
}

// encode_ver31to40
// file pthread_qrencode.c line 64
void * encode_ver31to40(void *arg)
{
  struct anonymous$1 *code;
  signed int i;
  signed int version;
  i = 0;
  for( ; !(i >= 50); i = i + 1)
  {
    version = 31;
    for( ; !(version >= 41); version = version + 1)
    {
      static const char *data = "This is test.";
      code=QRcode_encodeString(data, version, (enum anonymous$7)QR_ECLEVEL_L, (enum anonymous$8)QR_MODE_8, 0);
      if(code == ((struct anonymous$1 *)NULL))
        perror("Failed to encode:");

      else
        QRcode_free(code);
    }
  }
  return (void *)0;
}

// free_rs_cache
// file rscode.h line 39
extern void free_rs_cache(void)
{
  struct _RS *rs;
  struct _RS *next;
  pthread_mutex_lock(&rslist_mutex);
  rs = rslist;
  for( ; !(rs == ((struct _RS *)NULL)); rs = next)
  {
    next = rs->next;
    free_rs_char(rs);
  }
  rslist = (struct _RS *)(void *)0;
  pthread_mutex_unlock(&rslist_mutex);
}

// free_rs_char
// file rscode.c line 243
extern void free_rs_char(struct _RS *rs)
{
  free((void *)rs->alpha_to);
  free((void *)rs->index_of);
  free((void *)rs->genpoly);
  free((void *)rs);
}

// init_rs
// file rscode.h line 36
extern struct _RS * init_rs(signed int symsize, signed int gfpoly, signed int fcr, signed int prim, signed int nroots, signed int pad)
{
  struct _RS *rs;
  pthread_mutex_lock(&rslist_mutex);
  rs = rslist;
  for( ; !(rs == ((struct _RS *)NULL)); rs = rs->next)
    if(rs->pad == pad)
    {
      if(rs->nroots == nroots)
      {
        if(rs->mm == symsize)
        {
          if(rs->gfpoly == gfpoly)
          {
            if(rs->fcr == fcr)
            {
              if(rs->prim == prim)
                goto DONE;

            }

          }

        }

      }

    }

  rs=init_rs_char(symsize, gfpoly, fcr, prim, nroots, pad);
  if(!(rs == ((struct _RS *)NULL)))
  {
    rs->next = rslist;
    rslist = rs;
  }


DONE:
  ;
  pthread_mutex_unlock(&rslist_mutex);
  return rs;
}

// init_rs_char
// file rscode.c line 99
static struct _RS * init_rs_char(signed int symsize, signed int gfpoly, signed int fcr, signed int prim, signed int nroots, signed int pad)
{
  struct _RS *rs;
  signed int i;
  signed int j;
  signed int sr;
  signed int root;
  signed int iprim;
  rs = (struct _RS *)(void *)0;
  void *return_value_calloc$1;
  void *return_value_malloc$2;
  void *return_value_malloc$3;
  void *return_value_malloc$4;
  signed int return_value_modnn$5;
  if(!(symsize >= 9) && symsize >= 0)
  {
    if(!(fcr >= 1 << symsize) && fcr >= 0)
    {
      if(!(prim >= 1 << symsize) && prim >= 1)
      {
        if(!(nroots >= 1 << symsize) && nroots >= 0)
        {
          if(!(pad >= (1 << symsize) + -1 + -nroots) && pad >= 0)
          {
            return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct _RS) /*64ul*/ );
            rs = (struct _RS *)return_value_calloc$1;
            if(!(rs == ((struct _RS *)NULL)))
            {
              rs->mm = symsize;
              rs->nn = (1 << symsize) - 1;
              rs->pad = pad;
              return_value_malloc$2=malloc(sizeof(unsigned char) /*1ul*/  * (unsigned long int)(rs->nn + 1));
              rs->alpha_to = (unsigned char *)return_value_malloc$2;
              if(rs->alpha_to == ((unsigned char *)NULL))
              {
                free((void *)rs);
                rs = (struct _RS *)(void *)0;
              }

              else
              {
                return_value_malloc$3=malloc(sizeof(unsigned char) /*1ul*/  * (unsigned long int)(rs->nn + 1));
                rs->index_of = (unsigned char *)return_value_malloc$3;
                if(rs->index_of == ((unsigned char *)NULL))
                {
                  free((void *)rs->alpha_to);
                  free((void *)rs);
                  rs = (struct _RS *)(void *)0;
                }

                else
                {
                  rs->index_of[(signed long int)0] = (unsigned char)rs->nn;
                  rs->alpha_to[(signed long int)rs->nn] = (unsigned char)0;
                  sr = 1;
                  i = 0;
                  for( ; !(i >= rs->nn); i = i + 1)
                  {
                    rs->index_of[(signed long int)sr] = (unsigned char)i;
                    rs->alpha_to[(signed long int)i] = (unsigned char)sr;
                    sr = sr << 1;
                    if(!((1 << symsize & sr) == 0))
                      sr = sr ^ gfpoly;

                    sr = sr & rs->nn;
                  }
                  if(!(sr == 1))
                  {
                    free((void *)rs->alpha_to);
                    free((void *)rs->index_of);
                    free((void *)rs);
                    rs = (struct _RS *)(void *)0;
                  }

                  else
                  {
                    return_value_malloc$4=malloc(sizeof(unsigned char) /*1ul*/  * (unsigned long int)(nroots + 1));
                    rs->genpoly = (unsigned char *)return_value_malloc$4;
                    if(rs->genpoly == ((unsigned char *)NULL))
                    {
                      free((void *)rs->alpha_to);
                      free((void *)rs->index_of);
                      free((void *)rs);
                      rs = (struct _RS *)(void *)0;
                    }

                    else
                    {
                      rs->fcr = fcr;
                      rs->prim = prim;
                      rs->nroots = nroots;
                      rs->gfpoly = gfpoly;
                      iprim = 1;
                      for( ; !(iprim % prim == 0); iprim = iprim + rs->nn)
                        ;
                      rs->iprim = iprim / prim;
                      rs->genpoly[(signed long int)0] = (unsigned char)1;
                      i = 0;
                      root = fcr * prim;
                      for( ; !(i >= nroots); root = root + prim)
                      {
                        rs->genpoly[(signed long int)(i + 1)] = (unsigned char)1;
                        j = i;
                        for( ; j >= 1; j = j - 1)
                          if(!((signed int)rs->genpoly[(signed long int)j] == 0))
                          {
                            return_value_modnn$5=modnn(rs, (signed int)rs->index_of[(signed long int)rs->genpoly[(signed long int)j]] + root);
                            rs->genpoly[(signed long int)j] = (unsigned char)((signed int)rs->genpoly[(signed long int)(j - 1)] ^ (signed int)rs->alpha_to[(signed long int)return_value_modnn$5]);
                          }

                          else
                            rs->genpoly[(signed long int)j] = rs->genpoly[(signed long int)(j - 1)];
                        signed int return_value_modnn$6;
                        return_value_modnn$6=modnn(rs, (signed int)rs->index_of[(signed long int)rs->genpoly[(signed long int)0]] + root);
                        rs->genpoly[(signed long int)0] = rs->alpha_to[(signed long int)return_value_modnn$6];
                        i = i + 1;
                      }
                      i = 0;
                      for( ; nroots >= i; i = i + 1)
                        rs->genpoly[(signed long int)i] = rs->index_of[(signed long int)rs->genpoly[(signed long int)i]];
                    }
                  }
                }
              }
            }

          }

        }

      }

    }

  }


done:
  ;
  return rs;
}

// main
// file pthread_qrencode.c line 99
signed int main(void)
{
  prof_ver1to10();
  prof_ver31to40();
  QRcode_clearCache();
  return 0;
}

// modnn
// file rscode.c line 67
static inline signed int modnn(struct _RS *rs, signed int x)
{
  for( ; x >= rs->nn; x = (x >> rs->mm) + (x & rs->nn))
    x = x - rs->nn;
  return x;
}

// prof_ver1to10
// file pthread_qrencode.c line 50
void prof_ver1to10(void)
{
  signed int i;
  timerStart("Version 1 - 10 (500 symbols for each)");
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    pthread_create(&threads[(signed long int)i], (const union pthread_attr_t *)(void *)0, encode_ver1to10, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    pthread_join(threads[(signed long int)i], (void **)(void *)0);
  timerStop();
}

// prof_ver31to40
// file pthread_qrencode.c line 85
void prof_ver31to40(void)
{
  signed int i;
  timerStart("Version 31 - 40 (50 symbols for each)");
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    pthread_create(&threads[(signed long int)i], (const union pthread_attr_t *)(void *)0, encode_ver31to40, (void *)0);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    pthread_join(threads[(signed long int)i], (void **)(void *)0);
  timerStop();
}

// putFinderPattern
// file qrspec.c line 413
static void putFinderPattern(unsigned char *frame, signed int width, signed int ox, signed int oy)
{
  signed int x;
  signed int y;
  const unsigned char *s;
  frame = frame + (signed long int)(oy * width + ox);
  static const unsigned char finder[49l] = { (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1 };
  s = finder;
  y = 0;
  for( ; !(y >= 7); y = y + 1)
  {
    x = 0;
    for( ; !(x >= 7); x = x + 1)
      frame[(signed long int)x] = s[(signed long int)x];
    frame = frame + (signed long int)width;
    s = s + (signed long int)7;
  }
}

// putFinderPattern$link1
// file mqrspec.c line 175
static void putFinderPattern$link1(unsigned char *frame$link1, signed int width$link1, signed int ox$link1, signed int oy$link1)
{
  signed int x$link1;
  signed int y$link1;
  const unsigned char *s$link1;
  frame$link1 = frame$link1 + (signed long int)(oy$link1 * width$link1 + ox$link1);
  static const unsigned char finder$link1[49l] = { (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc0, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1, (const unsigned char)0xc1 };
  s$link1 = finder$link1;
  y$link1 = 0;
  for( ; !(y$link1 >= 7); y$link1 = y$link1 + 1)
  {
    x$link1 = 0;
    for( ; !(x$link1 >= 7); x$link1 = x$link1 + 1)
      frame$link1[(signed long int)x$link1] = s$link1[(signed long int)x$link1];
    frame$link1 = frame$link1 + (signed long int)width$link1;
    s$link1 = s$link1 + (signed long int)7;
  }
}

// timerStart
// file pthread_qrencode.c line 14
void timerStart(const char *str)
{
  printf("%s: START\n", str);
  gettimeofday(&tv, (struct timezone *)(void *)0);
}

// timerStop
// file pthread_qrencode.c line 20
void timerStop(void)
{
  struct timeval tc;
  gettimeofday(&tc, (struct timezone *)(void *)0);
  printf("STOP: %ld msec\n", (tc.tv_sec - tv.tv_sec) * (signed long int)1000 + (tc.tv_usec - tv.tv_usec) / (signed long int)1000);
}
