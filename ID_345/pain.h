#include <pgmspace.h>
const uint16_t painWidth = 32;
const uint16_t painHeight = 32;

const uint16_t btclogoWidth = 16;
const uint16_t btclogoHeight = 16;

const unsigned short btclogo[] PROGMEM = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x3942, 0xa366, 0xdcc8, 0xf529, 0xf529, 0xdcc8, 0xa366, 0x3942, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0020, 0x9325, 0xfd49, 0xfd89, 0xfd49, 0xfd48, 0xfd28, 0xfd69, 0xfd89, 0xfd48, 0x9325, 0x0820, 0x0000, 0x0000,
    0x0000, 0x0820, 0xbbe6, 0xfda9, 0xf528, 0xf508, 0xf528, 0xfd28, 0xfd49, 0xf507, 0xf507, 0xf528, 0xfda9, 0xbbe6, 0x0820, 0x0000,
    0x0000, 0x9304, 0xfda8, 0xf4e7, 0xfd27, 0xfd48, 0xfd07, 0xfdcd, 0xfed5, 0xfdef, 0xfdce, 0xfd07, 0xf507, 0xfda8, 0x9304, 0x0000,
    0x3121, 0xfd27, 0xf507, 0xfd27, 0xfce6, 0xfdee, 0xff7b, 0xff7b, 0xff59, 0xff7b, 0xfdcd, 0xfcc5, 0xf528, 0xf507, 0xfd27, 0x3121,
    0x9b44, 0xfd47, 0xf4e7, 0xfd07, 0xfd07, 0xfce6, 0xfe93, 0xffff, 0xff59, 0xffdd, 0xff5a, 0xfdab, 0xfce6, 0xf507, 0xfd47, 0x9b44,
    0xdc66, 0xfd27, 0xf4e6, 0xfd06, 0xfd07, 0xf4c4, 0xfed5, 0xffde, 0xf4c4, 0xfd06, 0xffff, 0xff7b, 0xfce5, 0xf507, 0xfd27, 0xdc86,
    0xf4e6, 0xfce6, 0xfce6, 0xfce6, 0xfd06, 0xfce6, 0xff9c, 0xffff, 0xfe94, 0xfe73, 0xffde, 0xfed5, 0xfcc5, 0xfd06, 0xfd06, 0xf4e6,
    0xf4c5, 0xfce6, 0xfce6, 0xfce6, 0xfca4, 0xfd28, 0xffff, 0xfef6, 0xfe72, 0xffde, 0xffde, 0xfd6a, 0xfcc5, 0xfce6, 0xfce6, 0xf4c5,
    0xdc45, 0xfce5, 0xf4e5, 0xfcc5, 0xfd8b, 0xfeb5, 0xffff, 0xfd8a, 0xf400, 0xfd6a, 0xffff, 0xfed5, 0xfca3, 0xf4e6, 0xfce5, 0xdc65,
    0x9b23, 0xfd05, 0xf4c5, 0xfca4, 0xfe72, 0xff9c, 0xffff, 0xff59, 0xfeb4, 0xff5a, 0xffff, 0xfe31, 0xfca3, 0xf4c5, 0xfd05, 0x9b23,
    0x3101, 0xfcc5, 0xf4c4, 0xf4c5, 0xf462, 0xfdac, 0xff5a, 0xff38, 0xffbc, 0xff18, 0xfe73, 0xfcc5, 0xfcc4, 0xf4c5, 0xfcc5, 0x3101,
    0x0000, 0x92c2, 0xfd25, 0xf4a4, 0xf4a3, 0xfd8b, 0xfdac, 0xfeb4, 0xfd6a, 0xf461, 0xf483, 0xf4a4, 0xf484, 0xfd25, 0x92c2, 0x0000,
    0x0000, 0x0820, 0xbb83, 0xfd24, 0xf4a4, 0xf483, 0xf483, 0xf4e5, 0xf4c4, 0xf4a4, 0xf4a4, 0xf4a4, 0xfd24, 0xbb83, 0x0820, 0x0000,
    0x0000, 0x0000, 0x0020, 0x92c2, 0xf4a3, 0xfce4, 0xfcc4, 0xfca3, 0xfca3, 0xfcc3, 0xfce4, 0xf4a3, 0x92c2, 0x0020, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x3900, 0x9b02, 0xdc23, 0xf483, 0xf483, 0xdc23, 0x9b02, 0x3900, 0x0000, 0x0000, 0x0000, 0x0000};

const uint16_t ethlogoWidth = 16;
const uint16_t ethlogoHeight = 16;

const unsigned short ethlogo[] PROGMEM = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x39e7, 0x2124, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1082, 0x7bef, 0x31a6, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5aeb, 0x8430, 0x31a6, 0x1904, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2145, 0x8c51, 0x7bcf, 0x31a6, 0x3186, 0x0861, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x738e, 0x8c71, 0x7c10, 0x31a6, 0x3186, 0x2945, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x4228, 0x8c72, 0x6b6d, 0x4a49, 0x18e3, 0x2124, 0x31a6, 0x18c3, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x10a2, 0x6b6d, 0x4249, 0x3186, 0x2965, 0x10a2, 0x1082, 0x18c3, 0x2145, 0x0841, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0861, 0x18e3, 0x3186, 0x39c7, 0x3186, 0x10a2, 0x10a2, 0x1082, 0x0841, 0x0020, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0861, 0x31a6, 0x1082, 0x2145, 0x31c7, 0x10a2, 0x0861, 0x0020, 0x1082, 0x0020, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x4208, 0x6b8e, 0x2104, 0x1082, 0x0841, 0x0861, 0x2945, 0x18c3, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x630c, 0x9492, 0x4a49, 0x18e3, 0x31a6, 0x2104, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0841, 0x7bcf, 0x8431, 0x39c7, 0x2945, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2945, 0x8410, 0x31a6, 0x0861, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4229, 0x2145, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000};

const uint16_t xrplogoWidth = 16;
const uint16_t xrplogoHeight = 16;

const unsigned short xrplogo[] PROGMEM = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1081, 0x2b2f, 0x1415, 0x1c14, 0x2aac, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x23d2, 0x0d5c, 0x04da, 0x04b9, 0x0cfb, 0x2b0e, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1187, 0x153b, 0x0499, 0x0c99, 0x0c78, 0x0458, 0x1477, 0x10e3,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x1a4b, 0x0d1b, 0x0c98, 0x0c98, 0x0478, 0x0458, 0x0c37, 0x0905,
    0x0000, 0x0000, 0x0840, 0x19c8, 0x1187, 0x10a2, 0x0000, 0x0000, 0x1186, 0x14da, 0x0478, 0x0458, 0x0457, 0x0417, 0x1436, 0x08c3,
    0x0000, 0x1946, 0x24f8, 0x157c, 0x155c, 0x24f9, 0x21c8, 0x0000, 0x0000, 0x2415, 0x0479, 0x0458, 0x0458, 0x0cb9, 0x22ce, 0x0000,
    0x0861, 0x2497, 0x057d, 0x0cfa, 0x0cda, 0x04fb, 0x24f9, 0x2166, 0x10a2, 0x1c56, 0x0479, 0x13d4, 0x1b92, 0x224b, 0x0020, 0x0000,
    0x1146, 0x153b, 0x0cfa, 0x0cfa, 0x0cda, 0x0cb9, 0x0499, 0x1498, 0x1456, 0x0479, 0x2bd3, 0x0841, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0926, 0x0d1b, 0x0cda, 0x0cda, 0x0cb9, 0x0c99, 0x0499, 0x1478, 0x1477, 0x0459, 0x2bb2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0882, 0x2497, 0x04fb, 0x0c99, 0x0c98, 0x0499, 0x1c98, 0x1966, 0x1904, 0x1c15, 0x0437, 0x1b92, 0x12cf, 0x19a8, 0x0000, 0x0000,
    0x0000, 0x1987, 0x24d9, 0x0cda, 0x0cba, 0x1c98, 0x21e9, 0x0000, 0x0000, 0x1b72, 0x03f7, 0x03d6, 0x03d6, 0x0bf7, 0x224b, 0x0000,
    0x0000, 0x0000, 0x10a2, 0x0967, 0x0987, 0x10c3, 0x0000, 0x0000, 0x0905, 0x0c16, 0x03b5, 0x0395, 0x0374, 0x0354, 0x1373, 0x0882,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x11e9, 0x0417, 0x0394, 0x0395, 0x0374, 0x0354, 0x0333, 0x08c4,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1166, 0x0bf6, 0x0374, 0x0374, 0x0354, 0x0333, 0x0b33, 0x0882,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x2331, 0x03b6, 0x0354, 0x0333, 0x0375, 0x1a2b, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x10a2, 0x22ce, 0x1b52, 0x1b32, 0x226c, 0x0841, 0x0000};

#if defined(__AVR__)
#include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
#define PROGMEM
#elif defined(__arm__)
#define PROGMEM
#endif

const unsigned short pain[1056] PROGMEM = {
    0x5B4D, 0x530C, 0x4ACB, 0x4ACC, 0x4B0D, 0x5B4E, 0x5B6E, 0x534D, 0x4ACB, 0x530C, 0x5B6F, 0x638F, 0x73F0, 0x6B8E, 0x52EC, 0x5B2D, // 0x0010 (16) pixels
    0x534E, 0x5B0D, 0x52EC, 0x532E, 0x532D, 0x4AED, 0x4AED, 0x532D, 0x5B6F, 0x42AC, 0x42AC, 0x532D, 0x638F, 0x63AF, 0x4AEC, 0x42AC, // 0x0020 (32) pixels
    0x530D, 0x5B2D, 0x5B2D, 0x530D, 0x42CC, 0x4AEC, 0x532D, 0x5B6E, 0x638F, 0x4AEC, 0x426A, 0x4A68, 0x41E6, 0x3984, 0x2923, 0x5269, // 0x0030 (48) pixels
    0x5AEC, 0x4A28, 0x39E7, 0x530C, 0x5B2D, 0x3AAD, 0x4B0E, 0x532D, 0x5B6E, 0x532E, 0x4ACD, 0x532D, 0x5B6E, 0x6BCF, 0x532D, 0x4AAC, // 0x0040 (64) pixels
    0x532D, 0x636E, 0x6BCF, 0x63AF, 0x534E, 0x5B2D, 0x5B4E, 0x5B8F, 0x7451, 0x634B, 0x49A5, 0x49C4, 0x28C1, 0x20C1, 0x2081, 0x3943, // 0x0050 (80) pixels
    0x49E4, 0x4184, 0x41C5, 0x41E5, 0x52CC, 0x636F, 0x4A8B, 0x42AC, 0x42CC, 0x42AC, 0x42AC, 0x42CC, 0x42CC, 0x4AED, 0x4AEC, 0x42AC, // 0x0060 (96) pixels
    0x5B6E, 0x63CF, 0x6BF0, 0x638F, 0x5B6E, 0x5B8E, 0x63B0, 0x63AF, 0x738D, 0x8BAA, 0x5A25, 0x3122, 0x3103, 0x2903, 0x0841, 0x0860, // 0x0070 (112) pixels
    0x39A4, 0x3143, 0x5205, 0x41A4, 0x52CA, 0x730A, 0x3102, 0x3209, 0x532E, 0x42AC, 0x4ACD, 0x4AED, 0x4ACD, 0x42AC, 0x4AEC, 0x42CC, // 0x0080 (128) pixels
    0x5B6E, 0x6BAF, 0x63CF, 0x534E, 0x5B6E, 0x5BAF, 0x6BD0, 0x6B2B, 0x51C4, 0x49C5, 0x1081, 0x0000, 0x28E2, 0x20C1, 0x1840, 0x0000, // 0x0090 (144) pixels
    0x0000, 0x0000, 0x41A5, 0x3163, 0x28E1, 0x49E5, 0x49C5, 0x31C7, 0x4B0E, 0x4B2E, 0x4B0D, 0x5B4E, 0x530D, 0x4AED, 0x4AED, 0x42CC, // 0x00A0 (160) pixels
    0x636E, 0x5B6E, 0x5B6E, 0x63D0, 0x63D0, 0x73EF, 0x7B8D, 0x5204, 0x3943, 0x20E2, 0x20E2, 0x3943, 0x6A25, 0x7A67, 0x82A7, 0x8AE8, // 0x00B0 (176) pixels
    0x6205, 0x2060, 0x0000, 0x3964, 0x7B4A, 0x7B29, 0x49C5, 0x4229, 0x4AEC, 0x534E, 0x4B0D, 0x42CC, 0x42AB, 0x532D, 0x5B4E, 0x5B4E, // 0x00C0 (192) pixels
    0x5B8E, 0x532D, 0x532D, 0x638F, 0x530C, 0x7BAC, 0x836B, 0x3144, 0x20C2, 0x51A3, 0x9327, 0xCC4B, 0xE4EE, 0xED50, 0xFDB0, 0xF5B1, // 0x00D0 (208) pixels
    0xED2F, 0xC42B, 0x61E4, 0x4184, 0x7B8A, 0x5A67, 0x28E2, 0x3984, 0x4AAA, 0x5B6F, 0x534E, 0x4AED, 0x42AB, 0x532E, 0x63CF, 0x638F, // 0x00E0 (224) pixels
    0x63AF, 0x638E, 0x534E, 0x5B6E, 0x52AA, 0x6288, 0x5A67, 0x39C5, 0x6226, 0xCC0A, 0xE50C, 0xED6E, 0xF590, 0xEDB1, 0xF5B1, 0xED4F, // 0x00F0 (240) pixels
    0xE50D, 0xED2D, 0xE4EC, 0xA348, 0x2880, 0x18A1, 0x49A4, 0x28E2, 0x39E6, 0x7412, 0x5B8F, 0x52EC, 0x42AC, 0x4ACC, 0x5B4E, 0x63AF, // 0x0100 (256) pixels
    0x63CF, 0x6BD0, 0x5BAF, 0x532D, 0x4207, 0x5206, 0x49E6, 0x49C5, 0xC46C, 0xE4ED, 0xDCEC, 0xED90, 0xF5D3, 0xF614, 0xF634, 0xF5D2, // 0x0110 (272) pixels
    0xED70, 0xDCEC, 0xDC8B, 0xDCAB, 0x8AE7, 0x0820, 0x3943, 0x3122, 0x4208, 0x6BF1, 0x6BF0, 0x52EC, 0x530D, 0x534E, 0x42AB, 0x5B4E, // 0x0120 (288) pixels
    0x5B8E, 0x63CF, 0x5B8F, 0x530D, 0x3144, 0x3943, 0x41A4, 0x7286, 0xCC8B, 0xD48C, 0xE52E, 0xED50, 0xED90, 0xEDB2, 0xF5D3, 0xF5F3, // 0x0130 (304) pixels
    0xEDD2, 0xE52E, 0xDCAB, 0xD48B, 0xBC2A, 0x30E2, 0x18C2, 0x3963, 0x41E7, 0x6BD0, 0x63AF, 0x532D, 0x530D, 0x5B8F, 0x42CC, 0x4ACC, // 0x0140 (320) pixels
    0x5B8F, 0x638F, 0x5B6F, 0x52EC, 0x3143, 0x3963, 0x3163, 0x82E8, 0xCC4C, 0xD48B, 0xDCAC, 0xE50D, 0xED2E, 0xED4F, 0xED6F, 0xED70, // 0x0150 (336) pixels
    0xED70, 0xED0E, 0xDC8B, 0xD44A, 0xC40A, 0x6246, 0x2103, 0x28E1, 0x39E7, 0x63B0, 0x5B6E, 0x530D, 0x530D, 0x534E, 0x4B0D, 0x532D, // 0x0160 (352) pixels
    0x532E, 0x532E, 0x5B90, 0x52EB, 0x20E2, 0x3143, 0x3184, 0x8B49, 0xD48D, 0xE50D, 0xED90, 0xFE54, 0xFEB7, 0xF655, 0xF615, 0xFE34, // 0x0170 (368) pixels
    0xFE75, 0xF5F2, 0xED6F, 0xDC8B, 0xBBE9, 0x6266, 0x2944, 0x2080, 0x3186, 0x5B8F, 0x530D, 0x42AC, 0x4ACC, 0x532D, 0x532D, 0x532D, // 0x0180 (384) pixels
    0x4B2E, 0x4B0D, 0x5B6F, 0x63AF, 0x3165, 0x1061, 0x3944, 0x9BAA, 0xBC6B, 0xA3AA, 0xA40B, 0xAC2D, 0xE594, 0xF6D8, 0xFEF9, 0xF636, // 0x0190 (400) pixels
    0xC46F, 0xA3EB, 0xA3EA, 0xB3A9, 0xCC49, 0x6225, 0x2102, 0x20A1, 0x2944, 0x532E, 0x4B0D, 0x530D, 0x4AED, 0x4AEC, 0x4ACC, 0x4ACC, // 0x01A0 (416) pixels
    0x4B0E, 0x532E, 0x4B0D, 0x5B6F, 0x2986, 0x0000, 0x49A5, 0x9B8A, 0xA3CA, 0xBC8D, 0x9327, 0x7A44, 0x9AE7, 0xDD51, 0xFED8, 0xC48D, // 0x01B0 (432) pixels
    0x8A85, 0x92E6, 0xB42B, 0xA3AA, 0xA368, 0x51A3, 0x0840, 0x3122, 0x39A6, 0x4AED, 0x4B0D, 0x534E, 0x534E, 0x4ACC, 0x4ACC, 0x4AEC, // 0x01C0 (448) pixels
    0x4ACD, 0x4AEC, 0x4AED, 0x536F, 0x2985, 0x0800, 0x3963, 0x9349, 0xCC8D, 0xC44C, 0x6B2D, 0x9C71, 0xCC8E, 0xC46D, 0xDD2F, 0xBC0B, // 0x01D0 (464) pixels
    0xCD11, 0x7B8E, 0x8B8B, 0xCC8B, 0xC44B, 0x49A3, 0x0000, 0x2902, 0x39C6, 0x5B6F, 0x534E, 0x4AED, 0x5B2E, 0x530D, 0x4AEC, 0x534E, // 0x01E0 (480) pixels
    0x3A8B, 0x42AB, 0x42ED, 0x532E, 0x4A27, 0x1020, 0x28E2, 0xB42B, 0xDD0D, 0xB42B, 0xB4F1, 0xD616, 0xE5D3, 0xCC6B, 0xC429, 0xC48C, // 0x01F0 (496) pixels
    0xF657, 0xACF2, 0xA38C, 0xCC4A, 0xED8D, 0x82E6, 0x0800, 0x1020, 0x18A1, 0x5B6E, 0x63D0, 0x4B0D, 0x4ACC, 0x4AED, 0x4AED, 0x4AEC, // 0x0200 (512) pixels
    0x4B0D, 0x3ACB, 0x4ACD, 0x4AAB, 0x3103, 0x0000, 0x41A4, 0xCCCC, 0xEDD1, 0xE5B0, 0xF5F2, 0xFE55, 0xBC2B, 0xCC6A, 0xE4ED, 0xB387, // 0x0210 (528) pixels
    0xE54F, 0xFE75, 0xF5D1, 0xEDB0, 0xED4D, 0xABC9, 0x20A1, 0x0000, 0x0800, 0x4A8A, 0x6C11, 0x532D, 0x4AEC, 0x4B0D, 0x4AED, 0x42CC, // 0x0220 (544) pixels
    0x4AEC, 0x42AC, 0x4B2E, 0x3A28, 0x6123, 0x4923, 0x5A25, 0xCCAC, 0xE590, 0xF5D2, 0xFE76, 0xED91, 0xBBC8, 0xF614, 0xF5F3, 0xC3A7, // 0x0230 (560) pixels
    0xD4AC, 0xFE96, 0xF614, 0xF5B0, 0xDCEC, 0xA3EA, 0x3143, 0x59C4, 0x79E5, 0x4249, 0x5BD1, 0x532E, 0x532E, 0x532E, 0x4ACD, 0x42AC, // 0x0240 (576) pixels
    0x3A8B, 0x42AC, 0x4B0D, 0x29A7, 0xBBAB, 0xBC0D, 0x4984, 0xC48C, 0xE52E, 0xFED8, 0xFEF9, 0xCC8C, 0x9286, 0xDDB3, 0xCCD0, 0x9264, // 0x0250 (592) pixels
    0xC44A, 0xFE54, 0xFE97, 0xF5F2, 0xD4CB, 0x8B28, 0x3942, 0xF572, 0xCCB1, 0x4ACD, 0x536E, 0x4B2D, 0x530E, 0x532E, 0x532D, 0x4B0D, // 0x0260 (608) pixels
    0x3A8B, 0x3A4B, 0x3A8B, 0x21C8, 0xA3CE, 0xED73, 0x6225, 0x9BA9, 0xDD0D, 0xF5B2, 0xED90, 0xD48B, 0x9AE7, 0x9B07, 0xAB6A, 0xB3CB, // 0x0270 (624) pixels
    0xCC6B, 0xE50E, 0xED70, 0xEDAF, 0xCCAB, 0x8328, 0x8B09, 0xFD31, 0xAC50, 0x432E, 0x4B2E, 0x534E, 0x534E, 0x532E, 0x4B0D, 0x42CC, // 0x0280 (640) pixels
    0x3A8B, 0x426B, 0x3A4B, 0x2A8C, 0x732D, 0xECEF, 0xABEB, 0x8307, 0xCCAB, 0xDCAC, 0xD4AC, 0xCC4C, 0xDCEF, 0xEDD4, 0xF615, 0xE530, // 0x0290 (656) pixels
    0xCC6C, 0xD4ED, 0xD4AC, 0xD4A9, 0xBC28, 0x9BAA, 0xD551, 0xF4D0, 0x72EC, 0x434E, 0x532E, 0x532E, 0x534E, 0x530D, 0x42AC, 0x42AC, // 0x02A0 (672) pixels
    0x42AC, 0x42AC, 0x428B, 0x2A4B, 0x52AB, 0xFDB1, 0xCC8D, 0x8307, 0xCCCB, 0xDD6F, 0x9B28, 0xA329, 0xE532, 0xF657, 0xFE38, 0xED93, // 0x02B0 (688) pixels
    0xB3AA, 0x8A85, 0xC4AC, 0xDD2C, 0xC448, 0x9BA9, 0xED50, 0xC4B0, 0x428C, 0x4B2D, 0x4B0D, 0x530E, 0x52ED, 0x4AED, 0x42AB, 0x4ACD, // 0x02C0 (704) pixels
    0x52CC, 0x3A4A, 0x3A6B, 0x3A8B, 0x3A8C, 0x93EE, 0xBC2D, 0x9B88, 0xD4EB, 0xFE53, 0x92E9, 0x838C, 0xBDB3, 0xBD53, 0xBD54, 0xBDB4, // 0x02D0 (720) pixels
    0x8C4D, 0x69E6, 0xE591, 0xE5AF, 0xC488, 0xA3EB, 0x4984, 0x3A4A, 0x536E, 0x4ACC, 0x4AED, 0x530D, 0x42AB, 0x42AC, 0x42AC, 0x42CC, // 0x02E0 (736) pixels
    0x4207, 0x31C7, 0x3A29, 0x428C, 0x4AED, 0x2A0A, 0x4A09, 0x9348, 0xC4AA, 0xF652, 0xE573, 0x61A7, 0x6965, 0xA2C9, 0xA30A, 0x81A6, // 0x02F0 (752) pixels
    0x50E4, 0xCC6F, 0xFE95, 0xDD6E, 0xBC28, 0x7AA7, 0x0862, 0x3A6B, 0x532E, 0x4AED, 0x4AED, 0x4AEC, 0x4AEC, 0x4B0D, 0x4AEC, 0x42AC, // 0x0300 (768) pixels
    0x3944, 0x20E3, 0x31C7, 0x3209, 0x4ACB, 0x4B0D, 0x3A4B, 0x72A7, 0xABA7, 0xD52E, 0xE5F2, 0xCBEC, 0xBA6A, 0xF4F4, 0xFDD7, 0xD36E, // 0x0310 (784) pixels
    0xC32A, 0xE570, 0xD54F, 0xBC49, 0xA386, 0x7A66, 0x3126, 0x42CB, 0x42AB, 0x4AED, 0x4B0D, 0x4ACC, 0x4ACC, 0x4B0C, 0x530D, 0x4ACD, // 0x0320 (800) pixels
    0x3165, 0x0841, 0x1081, 0x2125, 0x4249, 0x5B6F, 0x4ACD, 0x5ACA, 0x8AE5, 0xBC4A, 0xD50E, 0xDD2F, 0xE511, 0xDCF1, 0xDCB1, 0xDCF2, // 0x0330 (816) pixels
    0xDD30, 0xCCED, 0xB42A, 0xA387, 0x9B05, 0xA387, 0x7BAB, 0x326B, 0x3A8C, 0x426B, 0x42AB, 0x3ACC, 0x42AB, 0x42AB, 0x5B4E, 0x534E, // 0x0340 (832) pixels
    0x3145, 0x18C3, 0x1062, 0x18A2, 0x18C3, 0x4AEC, 0x534E, 0x3AAB, 0x5A47, 0x9B67, 0xC4AC, 0xDD0E, 0xEDB2, 0xEDD5, 0xE5B4, 0xE572, // 0x0350 (848) pixels
    0xDD0E, 0xB42A, 0xA3A7, 0x9B66, 0xAC28, 0xF6D0, 0xE692, 0x4AAC, 0x29C9, 0x428B, 0x4AAC, 0x42AB, 0x428B, 0x4ACC, 0x5B2D, 0x638F, // 0x0360 (864) pixels
    0x3144, 0x10A3, 0x1082, 0x10A2, 0x0800, 0x31E8, 0x534E, 0x3A8C, 0x426A, 0x5A04, 0x9369, 0xDD2D, 0xE5B1, 0xEE57, 0xEE98, 0xE5B2, // 0x0370 (880) pixels
    0xD4CD, 0x9BA8, 0x8AC3, 0xB427, 0xFF55, 0xFFD6, 0xE6B0, 0x9CEF, 0x29C9, 0x322A, 0x4A8B, 0x4ACC, 0x530D, 0x532D, 0x4AEC, 0x5B2D, // 0x0380 (896) pixels
    0x2903, 0x0820, 0x0040, 0x10A1, 0x10A2, 0x2125, 0x4ACC, 0x4ACC, 0x5B2D, 0x5A46, 0x5182, 0x9389, 0xDD70, 0xEDF3, 0xEE13, 0xE590, // 0x0390 (912) pixels
    0xBC4A, 0x7242, 0x8282, 0xF6F3, 0xFFF9, 0xE6B0, 0xE66D, 0xFF94, 0xB595, 0x1968, 0x21C9, 0x4AEC, 0x4AEC, 0x428B, 0x3A8A, 0x4AEC, // 0x03A0 (928) pixels
    0x2903, 0x0840, 0x0020, 0x0820, 0x2124, 0x2124, 0x3A28, 0x63B0, 0x5B6E, 0x6AE9, 0x7A85, 0x6203, 0x6A02, 0x8AC4, 0x9325, 0x8AA4, // 0x03B0 (944) pixels
    0x61A0, 0x7201, 0xDE0E, 0xFFF8, 0xFF76, 0xEED1, 0xF713, 0xF775, 0xFF95, 0xA4F0, 0x426A, 0x2188, 0x29C8, 0x3A49, 0x324A, 0x42EC, // 0x03C0 (960) pixels
    0x2923, 0x1062, 0x0821, 0x0000, 0x2965, 0x31A6, 0x2145, 0x6BB0, 0x5B6F, 0x5AA9, 0x9347, 0xA3C9, 0x9305, 0x7A62, 0x7201, 0x69C1, // 0x03D0 (976) pixels
    0x8263, 0xDE0E, 0xFFF5, 0xFF33, 0xFF34, 0xFF34, 0xFFDA, 0xE6D5, 0xD631, 0xFFF7, 0xF738, 0x9D14, 0x52EC, 0x3209, 0x3A4B, 0x4AAB, // 0x03E0 (992) pixels
    0x51C5, 0x28A2, 0x0020, 0x0000, 0x1082, 0x4249, 0x2166, 0x42AA, 0x5B6F, 0x5B0A, 0x8B06, 0xAC0B, 0xEDD0, 0xD4EC, 0xBBE9, 0xBBE8, // 0x03F0 (1008) pixels
    0xEE90, 0xFFF6, 0xFF12, 0xF712, 0xFF55, 0xFFB8, 0xFFDA, 0xE64F, 0xC570, 0xF778, 0xFF95, 0xFFFC, 0xF7BD, 0xD699, 0x840F, 0x4A6A, // 0x0400 (1024) pixels
    0x6A06, 0x3924, 0x0000, 0x0820, 0x1061, 0x3A08, 0x3A28, 0x428B, 0x4B0D, 0x9C8E, 0xA3A8, 0x9327, 0xC48C, 0xC46B, 0xC4AB, 0xF6D3, // 0x0410 (1040) pixels
    0xFFF8, 0xFF33, 0xF734, 0xFF77, 0xFF97, 0xFF56, 0xEED2, 0xF734, 0xFF76, 0xEF17, 0xDE92, 0xD631, 0xE6B4, 0xFFFA, 0xFFDC, 0xBDB5, // 0x0420 (1056) pixels
};