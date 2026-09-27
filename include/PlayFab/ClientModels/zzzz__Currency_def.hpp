#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/Currency.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Currency)
// Forward declare root types
namespace PlayFab::ClientModels {
struct Currency;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::Currency);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::Currency, "PlayFab.ClientModels", "Currency");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.Currency
struct CORDL_TYPE Currency {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Currency_Unwrapped
enum struct __Currency_Unwrapped : int32_t {
__E_AED = static_cast<int32_t>(0x0),
__E_AFN = static_cast<int32_t>(0x1),
__E_ALL = static_cast<int32_t>(0x2),
__E_AMD = static_cast<int32_t>(0x3),
__E_ANG = static_cast<int32_t>(0x4),
__E_AOA = static_cast<int32_t>(0x5),
__E_ARS = static_cast<int32_t>(0x6),
__E_AUD = static_cast<int32_t>(0x7),
__E_AWG = static_cast<int32_t>(0x8),
__E_AZN = static_cast<int32_t>(0x9),
__E_BAM = static_cast<int32_t>(0xa),
__E_BBD = static_cast<int32_t>(0xb),
__E_BDT = static_cast<int32_t>(0xc),
__E_BGN = static_cast<int32_t>(0xd),
__E_BHD = static_cast<int32_t>(0xe),
__E_BIF = static_cast<int32_t>(0xf),
__E_BMD = static_cast<int32_t>(0x10),
__E_BND = static_cast<int32_t>(0x11),
__E_BOB = static_cast<int32_t>(0x12),
__E_BRL = static_cast<int32_t>(0x13),
__E_BSD = static_cast<int32_t>(0x14),
__E_BTN = static_cast<int32_t>(0x15),
__E_BWP = static_cast<int32_t>(0x16),
__E_BYR = static_cast<int32_t>(0x17),
__E_BZD = static_cast<int32_t>(0x18),
__E_CAD = static_cast<int32_t>(0x19),
__E_CDF = static_cast<int32_t>(0x1a),
__E_CHF = static_cast<int32_t>(0x1b),
__E_CLP = static_cast<int32_t>(0x1c),
__E_CNY = static_cast<int32_t>(0x1d),
__E_COP = static_cast<int32_t>(0x1e),
__E_CRC = static_cast<int32_t>(0x1f),
__E_CUC = static_cast<int32_t>(0x20),
__E_CUP = static_cast<int32_t>(0x21),
__E_CVE = static_cast<int32_t>(0x22),
__E_CZK = static_cast<int32_t>(0x23),
__E_DJF = static_cast<int32_t>(0x24),
__E_DKK = static_cast<int32_t>(0x25),
__E_DOP = static_cast<int32_t>(0x26),
__E_DZD = static_cast<int32_t>(0x27),
__E_EGP = static_cast<int32_t>(0x28),
__E_ERN = static_cast<int32_t>(0x29),
__E_ETB = static_cast<int32_t>(0x2a),
__E_EUR = static_cast<int32_t>(0x2b),
__E_FJD = static_cast<int32_t>(0x2c),
__E_FKP = static_cast<int32_t>(0x2d),
__E_GBP = static_cast<int32_t>(0x2e),
__E_GEL = static_cast<int32_t>(0x2f),
__E_GGP = static_cast<int32_t>(0x30),
__E_GHS = static_cast<int32_t>(0x31),
__E_GIP = static_cast<int32_t>(0x32),
__E_GMD = static_cast<int32_t>(0x33),
__E_GNF = static_cast<int32_t>(0x34),
__E_GTQ = static_cast<int32_t>(0x35),
__E_GYD = static_cast<int32_t>(0x36),
__E_HKD = static_cast<int32_t>(0x37),
__E_HNL = static_cast<int32_t>(0x38),
__E_HRK = static_cast<int32_t>(0x39),
__E_HTG = static_cast<int32_t>(0x3a),
__E_HUF = static_cast<int32_t>(0x3b),
__E_IDR = static_cast<int32_t>(0x3c),
__E_ILS = static_cast<int32_t>(0x3d),
__E_IMP = static_cast<int32_t>(0x3e),
__E_INR = static_cast<int32_t>(0x3f),
__E_IQD = static_cast<int32_t>(0x40),
__E_IRR = static_cast<int32_t>(0x41),
__E_ISK = static_cast<int32_t>(0x42),
__E_JEP = static_cast<int32_t>(0x43),
__E_JMD = static_cast<int32_t>(0x44),
__E_JOD = static_cast<int32_t>(0x45),
__E_JPY = static_cast<int32_t>(0x46),
__E_KES = static_cast<int32_t>(0x47),
__E_KGS = static_cast<int32_t>(0x48),
__E_KHR = static_cast<int32_t>(0x49),
__E_KMF = static_cast<int32_t>(0x4a),
__E_KPW = static_cast<int32_t>(0x4b),
__E_KRW = static_cast<int32_t>(0x4c),
__E_KWD = static_cast<int32_t>(0x4d),
__E_KYD = static_cast<int32_t>(0x4e),
__E_KZT = static_cast<int32_t>(0x4f),
__E_LAK = static_cast<int32_t>(0x50),
__E_LBP = static_cast<int32_t>(0x51),
__E_LKR = static_cast<int32_t>(0x52),
__E_LRD = static_cast<int32_t>(0x53),
__E_LSL = static_cast<int32_t>(0x54),
__E_LYD = static_cast<int32_t>(0x55),
__E_MAD = static_cast<int32_t>(0x56),
__E_MDL = static_cast<int32_t>(0x57),
__E_MGA = static_cast<int32_t>(0x58),
__E_MKD = static_cast<int32_t>(0x59),
__E_MMK = static_cast<int32_t>(0x5a),
__E_MNT = static_cast<int32_t>(0x5b),
__E_MOP = static_cast<int32_t>(0x5c),
__E_MRO = static_cast<int32_t>(0x5d),
__E_MUR = static_cast<int32_t>(0x5e),
__E_MVR = static_cast<int32_t>(0x5f),
__E_MWK = static_cast<int32_t>(0x60),
__E_MXN = static_cast<int32_t>(0x61),
__E_MYR = static_cast<int32_t>(0x62),
__E_MZN = static_cast<int32_t>(0x63),
__E_NAD = static_cast<int32_t>(0x64),
__E_NGN = static_cast<int32_t>(0x65),
__E_NIO = static_cast<int32_t>(0x66),
__E_NOK = static_cast<int32_t>(0x67),
__E_NPR = static_cast<int32_t>(0x68),
__E_NZD = static_cast<int32_t>(0x69),
__E_OMR = static_cast<int32_t>(0x6a),
__E_PAB = static_cast<int32_t>(0x6b),
__E_PEN = static_cast<int32_t>(0x6c),
__E_PGK = static_cast<int32_t>(0x6d),
__E_PHP = static_cast<int32_t>(0x6e),
__E_PKR = static_cast<int32_t>(0x6f),
__E_PLN = static_cast<int32_t>(0x70),
__E_PYG = static_cast<int32_t>(0x71),
__E_QAR = static_cast<int32_t>(0x72),
__E_RON = static_cast<int32_t>(0x73),
__E_RSD = static_cast<int32_t>(0x74),
__E_RUB = static_cast<int32_t>(0x75),
__E_RWF = static_cast<int32_t>(0x76),
__E_SAR = static_cast<int32_t>(0x77),
__E_SBD = static_cast<int32_t>(0x78),
__E_SCR = static_cast<int32_t>(0x79),
__E_SDG = static_cast<int32_t>(0x7a),
__E_SEK = static_cast<int32_t>(0x7b),
__E_SGD = static_cast<int32_t>(0x7c),
__E_SHP = static_cast<int32_t>(0x7d),
__E_SLL = static_cast<int32_t>(0x7e),
__E_SOS = static_cast<int32_t>(0x7f),
__E_SPL = static_cast<int32_t>(0x80),
__E_SRD = static_cast<int32_t>(0x81),
__E_STD = static_cast<int32_t>(0x82),
__E_SVC = static_cast<int32_t>(0x83),
__E_SYP = static_cast<int32_t>(0x84),
__E_SZL = static_cast<int32_t>(0x85),
__E_THB = static_cast<int32_t>(0x86),
__E_TJS = static_cast<int32_t>(0x87),
__E_TMT = static_cast<int32_t>(0x88),
__E_TND = static_cast<int32_t>(0x89),
__E_TOP = static_cast<int32_t>(0x8a),
__E_TRY = static_cast<int32_t>(0x8b),
__E_TTD = static_cast<int32_t>(0x8c),
__E_TVD = static_cast<int32_t>(0x8d),
__E_TWD = static_cast<int32_t>(0x8e),
__E_TZS = static_cast<int32_t>(0x8f),
__E_UAH = static_cast<int32_t>(0x90),
__E_UGX = static_cast<int32_t>(0x91),
__E_USD = static_cast<int32_t>(0x92),
__E_UYU = static_cast<int32_t>(0x93),
__E_UZS = static_cast<int32_t>(0x94),
__E_VEF = static_cast<int32_t>(0x95),
__E_VND = static_cast<int32_t>(0x96),
__E_VUV = static_cast<int32_t>(0x97),
__E_WST = static_cast<int32_t>(0x98),
__E_XAF = static_cast<int32_t>(0x99),
__E_XCD = static_cast<int32_t>(0x9a),
__E_XDR = static_cast<int32_t>(0x9b),
__E_XOF = static_cast<int32_t>(0x9c),
__E_XPF = static_cast<int32_t>(0x9d),
__E_YER = static_cast<int32_t>(0x9e),
__E_ZAR = static_cast<int32_t>(0x9f),
__E_ZMW = static_cast<int32_t>(0xa0),
__E_ZWD = static_cast<int32_t>(0xa1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Currency_Unwrapped () const noexcept {
return static_cast<__Currency_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Currency() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Currency(int32_t  value__) noexcept;

/// @brief Field AED value: I32(0)
static ::PlayFab::ClientModels::Currency const AED;

/// @brief Field AFN value: I32(1)
static ::PlayFab::ClientModels::Currency const AFN;

/// @brief Field ALL value: I32(2)
static ::PlayFab::ClientModels::Currency const ALL;

/// @brief Field AMD value: I32(3)
static ::PlayFab::ClientModels::Currency const AMD;

/// @brief Field ANG value: I32(4)
static ::PlayFab::ClientModels::Currency const ANG;

/// @brief Field AOA value: I32(5)
static ::PlayFab::ClientModels::Currency const AOA;

/// @brief Field ARS value: I32(6)
static ::PlayFab::ClientModels::Currency const ARS;

/// @brief Field AUD value: I32(7)
static ::PlayFab::ClientModels::Currency const AUD;

/// @brief Field AWG value: I32(8)
static ::PlayFab::ClientModels::Currency const AWG;

/// @brief Field AZN value: I32(9)
static ::PlayFab::ClientModels::Currency const AZN;

/// @brief Field BAM value: I32(10)
static ::PlayFab::ClientModels::Currency const BAM;

/// @brief Field BBD value: I32(11)
static ::PlayFab::ClientModels::Currency const BBD;

/// @brief Field BDT value: I32(12)
static ::PlayFab::ClientModels::Currency const BDT;

/// @brief Field BGN value: I32(13)
static ::PlayFab::ClientModels::Currency const BGN;

/// @brief Field BHD value: I32(14)
static ::PlayFab::ClientModels::Currency const BHD;

/// @brief Field BIF value: I32(15)
static ::PlayFab::ClientModels::Currency const BIF;

/// @brief Field BMD value: I32(16)
static ::PlayFab::ClientModels::Currency const BMD;

/// @brief Field BND value: I32(17)
static ::PlayFab::ClientModels::Currency const BND;

/// @brief Field BOB value: I32(18)
static ::PlayFab::ClientModels::Currency const BOB;

/// @brief Field BRL value: I32(19)
static ::PlayFab::ClientModels::Currency const BRL;

/// @brief Field BSD value: I32(20)
static ::PlayFab::ClientModels::Currency const BSD;

/// @brief Field BTN value: I32(21)
static ::PlayFab::ClientModels::Currency const BTN;

/// @brief Field BWP value: I32(22)
static ::PlayFab::ClientModels::Currency const BWP;

/// @brief Field BYR value: I32(23)
static ::PlayFab::ClientModels::Currency const BYR;

/// @brief Field BZD value: I32(24)
static ::PlayFab::ClientModels::Currency const BZD;

/// @brief Field CAD value: I32(25)
static ::PlayFab::ClientModels::Currency const CAD;

/// @brief Field CDF value: I32(26)
static ::PlayFab::ClientModels::Currency const CDF;

/// @brief Field CHF value: I32(27)
static ::PlayFab::ClientModels::Currency const CHF;

/// @brief Field CLP value: I32(28)
static ::PlayFab::ClientModels::Currency const CLP;

/// @brief Field CNY value: I32(29)
static ::PlayFab::ClientModels::Currency const CNY;

/// @brief Field COP value: I32(30)
static ::PlayFab::ClientModels::Currency const COP;

/// @brief Field CRC value: I32(31)
static ::PlayFab::ClientModels::Currency const CRC;

/// @brief Field CUC value: I32(32)
static ::PlayFab::ClientModels::Currency const CUC;

/// @brief Field CUP value: I32(33)
static ::PlayFab::ClientModels::Currency const CUP;

/// @brief Field CVE value: I32(34)
static ::PlayFab::ClientModels::Currency const CVE;

/// @brief Field CZK value: I32(35)
static ::PlayFab::ClientModels::Currency const CZK;

/// @brief Field DJF value: I32(36)
static ::PlayFab::ClientModels::Currency const DJF;

/// @brief Field DKK value: I32(37)
static ::PlayFab::ClientModels::Currency const DKK;

/// @brief Field DOP value: I32(38)
static ::PlayFab::ClientModels::Currency const DOP;

/// @brief Field DZD value: I32(39)
static ::PlayFab::ClientModels::Currency const DZD;

/// @brief Field EGP value: I32(40)
static ::PlayFab::ClientModels::Currency const EGP;

/// @brief Field ERN value: I32(41)
static ::PlayFab::ClientModels::Currency const ERN;

/// @brief Field ETB value: I32(42)
static ::PlayFab::ClientModels::Currency const ETB;

/// @brief Field EUR value: I32(43)
static ::PlayFab::ClientModels::Currency const EUR;

/// @brief Field FJD value: I32(44)
static ::PlayFab::ClientModels::Currency const FJD;

/// @brief Field FKP value: I32(45)
static ::PlayFab::ClientModels::Currency const FKP;

/// @brief Field GBP value: I32(46)
static ::PlayFab::ClientModels::Currency const GBP;

/// @brief Field GEL value: I32(47)
static ::PlayFab::ClientModels::Currency const GEL;

/// @brief Field GGP value: I32(48)
static ::PlayFab::ClientModels::Currency const GGP;

/// @brief Field GHS value: I32(49)
static ::PlayFab::ClientModels::Currency const GHS;

/// @brief Field GIP value: I32(50)
static ::PlayFab::ClientModels::Currency const GIP;

/// @brief Field GMD value: I32(51)
static ::PlayFab::ClientModels::Currency const GMD;

/// @brief Field GNF value: I32(52)
static ::PlayFab::ClientModels::Currency const GNF;

/// @brief Field GTQ value: I32(53)
static ::PlayFab::ClientModels::Currency const GTQ;

/// @brief Field GYD value: I32(54)
static ::PlayFab::ClientModels::Currency const GYD;

/// @brief Field HKD value: I32(55)
static ::PlayFab::ClientModels::Currency const HKD;

/// @brief Field HNL value: I32(56)
static ::PlayFab::ClientModels::Currency const HNL;

/// @brief Field HRK value: I32(57)
static ::PlayFab::ClientModels::Currency const HRK;

/// @brief Field HTG value: I32(58)
static ::PlayFab::ClientModels::Currency const HTG;

/// @brief Field HUF value: I32(59)
static ::PlayFab::ClientModels::Currency const HUF;

/// @brief Field IDR value: I32(60)
static ::PlayFab::ClientModels::Currency const IDR;

/// @brief Field ILS value: I32(61)
static ::PlayFab::ClientModels::Currency const ILS;

/// @brief Field IMP value: I32(62)
static ::PlayFab::ClientModels::Currency const IMP;

/// @brief Field INR value: I32(63)
static ::PlayFab::ClientModels::Currency const INR;

/// @brief Field IQD value: I32(64)
static ::PlayFab::ClientModels::Currency const IQD;

/// @brief Field IRR value: I32(65)
static ::PlayFab::ClientModels::Currency const IRR;

/// @brief Field ISK value: I32(66)
static ::PlayFab::ClientModels::Currency const ISK;

/// @brief Field JEP value: I32(67)
static ::PlayFab::ClientModels::Currency const JEP;

/// @brief Field JMD value: I32(68)
static ::PlayFab::ClientModels::Currency const JMD;

/// @brief Field JOD value: I32(69)
static ::PlayFab::ClientModels::Currency const JOD;

/// @brief Field JPY value: I32(70)
static ::PlayFab::ClientModels::Currency const JPY;

/// @brief Field KES value: I32(71)
static ::PlayFab::ClientModels::Currency const KES;

/// @brief Field KGS value: I32(72)
static ::PlayFab::ClientModels::Currency const KGS;

/// @brief Field KHR value: I32(73)
static ::PlayFab::ClientModels::Currency const KHR;

/// @brief Field KMF value: I32(74)
static ::PlayFab::ClientModels::Currency const KMF;

/// @brief Field KPW value: I32(75)
static ::PlayFab::ClientModels::Currency const KPW;

/// @brief Field KRW value: I32(76)
static ::PlayFab::ClientModels::Currency const KRW;

/// @brief Field KWD value: I32(77)
static ::PlayFab::ClientModels::Currency const KWD;

/// @brief Field KYD value: I32(78)
static ::PlayFab::ClientModels::Currency const KYD;

/// @brief Field KZT value: I32(79)
static ::PlayFab::ClientModels::Currency const KZT;

/// @brief Field LAK value: I32(80)
static ::PlayFab::ClientModels::Currency const LAK;

/// @brief Field LBP value: I32(81)
static ::PlayFab::ClientModels::Currency const LBP;

/// @brief Field LKR value: I32(82)
static ::PlayFab::ClientModels::Currency const LKR;

/// @brief Field LRD value: I32(83)
static ::PlayFab::ClientModels::Currency const LRD;

/// @brief Field LSL value: I32(84)
static ::PlayFab::ClientModels::Currency const LSL;

/// @brief Field LYD value: I32(85)
static ::PlayFab::ClientModels::Currency const LYD;

/// @brief Field MAD value: I32(86)
static ::PlayFab::ClientModels::Currency const MAD;

/// @brief Field MDL value: I32(87)
static ::PlayFab::ClientModels::Currency const MDL;

/// @brief Field MGA value: I32(88)
static ::PlayFab::ClientModels::Currency const MGA;

/// @brief Field MKD value: I32(89)
static ::PlayFab::ClientModels::Currency const MKD;

/// @brief Field MMK value: I32(90)
static ::PlayFab::ClientModels::Currency const MMK;

/// @brief Field MNT value: I32(91)
static ::PlayFab::ClientModels::Currency const MNT;

/// @brief Field MOP value: I32(92)
static ::PlayFab::ClientModels::Currency const MOP;

/// @brief Field MRO value: I32(93)
static ::PlayFab::ClientModels::Currency const MRO;

/// @brief Field MUR value: I32(94)
static ::PlayFab::ClientModels::Currency const MUR;

/// @brief Field MVR value: I32(95)
static ::PlayFab::ClientModels::Currency const MVR;

/// @brief Field MWK value: I32(96)
static ::PlayFab::ClientModels::Currency const MWK;

/// @brief Field MXN value: I32(97)
static ::PlayFab::ClientModels::Currency const MXN;

/// @brief Field MYR value: I32(98)
static ::PlayFab::ClientModels::Currency const MYR;

/// @brief Field MZN value: I32(99)
static ::PlayFab::ClientModels::Currency const MZN;

/// @brief Field NAD value: I32(100)
static ::PlayFab::ClientModels::Currency const NAD;

/// @brief Field NGN value: I32(101)
static ::PlayFab::ClientModels::Currency const NGN;

/// @brief Field NIO value: I32(102)
static ::PlayFab::ClientModels::Currency const NIO;

/// @brief Field NOK value: I32(103)
static ::PlayFab::ClientModels::Currency const NOK;

/// @brief Field NPR value: I32(104)
static ::PlayFab::ClientModels::Currency const NPR;

/// @brief Field NZD value: I32(105)
static ::PlayFab::ClientModels::Currency const NZD;

/// @brief Field OMR value: I32(106)
static ::PlayFab::ClientModels::Currency const OMR;

/// @brief Field PAB value: I32(107)
static ::PlayFab::ClientModels::Currency const PAB;

/// @brief Field PEN value: I32(108)
static ::PlayFab::ClientModels::Currency const PEN;

/// @brief Field PGK value: I32(109)
static ::PlayFab::ClientModels::Currency const PGK;

/// @brief Field PHP value: I32(110)
static ::PlayFab::ClientModels::Currency const PHP;

/// @brief Field PKR value: I32(111)
static ::PlayFab::ClientModels::Currency const PKR;

/// @brief Field PLN value: I32(112)
static ::PlayFab::ClientModels::Currency const PLN;

/// @brief Field PYG value: I32(113)
static ::PlayFab::ClientModels::Currency const PYG;

/// @brief Field QAR value: I32(114)
static ::PlayFab::ClientModels::Currency const QAR;

/// @brief Field RON value: I32(115)
static ::PlayFab::ClientModels::Currency const RON;

/// @brief Field RSD value: I32(116)
static ::PlayFab::ClientModels::Currency const RSD;

/// @brief Field RUB value: I32(117)
static ::PlayFab::ClientModels::Currency const RUB;

/// @brief Field RWF value: I32(118)
static ::PlayFab::ClientModels::Currency const RWF;

/// @brief Field SAR value: I32(119)
static ::PlayFab::ClientModels::Currency const SAR;

/// @brief Field SBD value: I32(120)
static ::PlayFab::ClientModels::Currency const SBD;

/// @brief Field SCR value: I32(121)
static ::PlayFab::ClientModels::Currency const SCR;

/// @brief Field SDG value: I32(122)
static ::PlayFab::ClientModels::Currency const SDG;

/// @brief Field SEK value: I32(123)
static ::PlayFab::ClientModels::Currency const SEK;

/// @brief Field SGD value: I32(124)
static ::PlayFab::ClientModels::Currency const SGD;

/// @brief Field SHP value: I32(125)
static ::PlayFab::ClientModels::Currency const SHP;

/// @brief Field SLL value: I32(126)
static ::PlayFab::ClientModels::Currency const SLL;

/// @brief Field SOS value: I32(127)
static ::PlayFab::ClientModels::Currency const SOS;

/// @brief Field SPL value: I32(128)
static ::PlayFab::ClientModels::Currency const SPL;

/// @brief Field SRD value: I32(129)
static ::PlayFab::ClientModels::Currency const SRD;

/// @brief Field STD value: I32(130)
static ::PlayFab::ClientModels::Currency const STD;

/// @brief Field SVC value: I32(131)
static ::PlayFab::ClientModels::Currency const SVC;

/// @brief Field SYP value: I32(132)
static ::PlayFab::ClientModels::Currency const SYP;

/// @brief Field SZL value: I32(133)
static ::PlayFab::ClientModels::Currency const SZL;

/// @brief Field THB value: I32(134)
static ::PlayFab::ClientModels::Currency const THB;

/// @brief Field TJS value: I32(135)
static ::PlayFab::ClientModels::Currency const TJS;

/// @brief Field TMT value: I32(136)
static ::PlayFab::ClientModels::Currency const TMT;

/// @brief Field TND value: I32(137)
static ::PlayFab::ClientModels::Currency const TND;

/// @brief Field TOP value: I32(138)
static ::PlayFab::ClientModels::Currency const TOP;

/// @brief Field TRY value: I32(139)
static ::PlayFab::ClientModels::Currency const TRY;

/// @brief Field TTD value: I32(140)
static ::PlayFab::ClientModels::Currency const TTD;

/// @brief Field TVD value: I32(141)
static ::PlayFab::ClientModels::Currency const TVD;

/// @brief Field TWD value: I32(142)
static ::PlayFab::ClientModels::Currency const TWD;

/// @brief Field TZS value: I32(143)
static ::PlayFab::ClientModels::Currency const TZS;

/// @brief Field UAH value: I32(144)
static ::PlayFab::ClientModels::Currency const UAH;

/// @brief Field UGX value: I32(145)
static ::PlayFab::ClientModels::Currency const UGX;

/// @brief Field USD value: I32(146)
static ::PlayFab::ClientModels::Currency const USD;

/// @brief Field UYU value: I32(147)
static ::PlayFab::ClientModels::Currency const UYU;

/// @brief Field UZS value: I32(148)
static ::PlayFab::ClientModels::Currency const UZS;

/// @brief Field VEF value: I32(149)
static ::PlayFab::ClientModels::Currency const VEF;

/// @brief Field VND value: I32(150)
static ::PlayFab::ClientModels::Currency const VND;

/// @brief Field VUV value: I32(151)
static ::PlayFab::ClientModels::Currency const VUV;

/// @brief Field WST value: I32(152)
static ::PlayFab::ClientModels::Currency const WST;

/// @brief Field XAF value: I32(153)
static ::PlayFab::ClientModels::Currency const XAF;

/// @brief Field XCD value: I32(154)
static ::PlayFab::ClientModels::Currency const XCD;

/// @brief Field XDR value: I32(155)
static ::PlayFab::ClientModels::Currency const XDR;

/// @brief Field XOF value: I32(156)
static ::PlayFab::ClientModels::Currency const XOF;

/// @brief Field XPF value: I32(157)
static ::PlayFab::ClientModels::Currency const XPF;

/// @brief Field YER value: I32(158)
static ::PlayFab::ClientModels::Currency const YER;

/// @brief Field ZAR value: I32(159)
static ::PlayFab::ClientModels::Currency const ZAR;

/// @brief Field ZMW value: I32(160)
static ::PlayFab::ClientModels::Currency const ZMW;

/// @brief Field ZWD value: I32(161)
static ::PlayFab::ClientModels::Currency const ZWD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19985};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::Currency, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::Currency) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
