#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Decimal_DecCalc_PowerOvfl_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Decimal_DecCalc)
namespace GlobalNamespace {
struct DecCalc_Decimal_Buf12;
}
namespace GlobalNamespace {
struct DecCalc_Decimal_Buf16;
}
namespace GlobalNamespace {
struct DecCalc_Decimal_Buf24;
}
namespace GlobalNamespace {
struct DecCalc_Decimal_Buf28;
}
namespace GlobalNamespace {
struct DecCalc_Decimal_PowerOvfl;
}
namespace GlobalNamespace {
struct DecCalc_Decimal_RoundingMode;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace GlobalNamespace {
struct Decimal_DecCalc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Decimal_DecCalc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Decimal_DecCalc, "System", "Decimal/DecCalc");
// Dependencies System.Decimal::DecCalc::PowerOvfl
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Decimal/DecCalc
struct CORDL_TYPE Decimal_DecCalc {
public:
// Declarations
using Buf12 = ::GlobalNamespace::DecCalc_Decimal_Buf12;

using Buf16 = ::GlobalNamespace::DecCalc_Decimal_Buf16;

using Buf24 = ::GlobalNamespace::DecCalc_Decimal_Buf24;

using Buf28 = ::GlobalNamespace::DecCalc_Decimal_Buf28;

using PowerOvfl = ::GlobalNamespace::DecCalc_Decimal_PowerOvfl;

using RoundingMode = ::GlobalNamespace::DecCalc_Decimal_RoundingMode;

 __declspec(property(get=get_High, put=set_High)) uint32_t  High;

 __declspec(property(get=get_IsNegative)) bool  IsNegative;

 __declspec(property(get=get_Low, put=set_Low)) uint32_t  Low;

 __declspec(property(get=get_Low64, put=set_Low64)) uint64_t  Low64;

 __declspec(property(get=get_Mid, put=set_Mid)) uint32_t  Mid;

/// @brief Field PowerOvflValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PowerOvflValues, put=setStaticF_PowerOvflValues)) ::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>  PowerOvflValues;

/// @brief Field s_doublePowers10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_doublePowers10, put=setStaticF_s_doublePowers10)) ::ArrayW<double_t>  s_doublePowers10;

/// @brief Field s_powers10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_powers10, put=setStaticF_s_powers10)) ::ArrayW<uint32_t>  s_powers10;

/// @brief Field s_ulongPowers10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ulongPowers10, put=setStaticF_s_ulongPowers10)) ::ArrayW<uint64_t>  s_ulongPowers10;

/// @brief Field uflags, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_uflags, put=__cordl_internal_set_uflags)) uint32_t  uflags;

/// @brief Field uhi, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_uhi, put=__cordl_internal_set_uhi)) uint32_t  uhi;

/// @brief Field ulo, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ulo, put=__cordl_internal_set_ulo)) uint32_t  ulo;

/// @brief Field ulomidLE, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ulomidLE, put=__cordl_internal_set_ulomidLE)) uint64_t  ulomidLE;

/// @brief Field umid, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_umid, put=__cordl_internal_set_umid)) uint32_t  umid;

/// @brief Method Add32To96, addr 0xa342498, size 0x30, virtual false, abstract: false, final false
static inline bool Add32To96(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  value) ;

/// @brief Method DecAddSub, addr 0xa33bfa8, size 0x6b8, virtual false, abstract: false, final false
static inline void DecAddSub(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2, bool  sign) ;

/// @brief Method DecDivMod1E9, addr 0xa33b26c, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t DecDivMod1E9(::by_ref<::GlobalNamespace::Decimal_DecCalc>  value) ;

/// @brief Method Div128By96, addr 0xa341470, size 0x110, virtual false, abstract: false, final false
static inline uint32_t Div128By96(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf16>  bufNum, ::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufDen) ;

/// @brief Method Div96By32, addr 0xa34102c, size 0x60, virtual false, abstract: false, final false
static inline uint32_t Div96By32(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  den) ;

/// @brief Method Div96By64, addr 0xa341374, size 0xfc, virtual false, abstract: false, final false
static inline uint32_t Div96By64(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint64_t  den) ;

/// @brief Method Div96ByConst, addr 0xa3410ac, size 0x3c, virtual false, abstract: false, final false
static inline bool Div96ByConst(::by_ref<uint64_t>  high64, ::by_ref<uint32_t>  low, uint32_t  pow) ;

/// @brief Method DivByConst, addr 0xa3422bc, size 0x50, virtual false, abstract: false, final false
static inline uint32_t DivByConst(uint32_t*  result, uint32_t  hiRes, ::by_ref<uint32_t>  quotient, ::by_ref<uint32_t>  remainder, uint32_t  power) ;

/// @brief Method GetExponent, addr 0xa340ef0, size 0xc, virtual false, abstract: false, final false
static inline uint32_t GetExponent(double_t  d) ;

/// @brief Method GetExponent, addr 0xa340ee4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t GetExponent(float_t  f) ;

/// @brief Method GetHashCode, addr 0xa33d498, size 0x14c, virtual false, abstract: false, final false
static inline int32_t GetHashCode(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d) ;

/// @brief Method IncreaseScale, addr 0xa341598, size 0x88, virtual false, abstract: false, final false
static inline uint32_t IncreaseScale(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  power) ;

/// @brief Method IncreaseScale64, addr 0xa341620, size 0x78, virtual false, abstract: false, final false
static inline void IncreaseScale64(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  power) ;

/// @brief Method InternalRound, addr 0xa33d6b4, size 0x2f4, virtual false, abstract: false, final false
static inline void InternalRound(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d, uint32_t  scale, ::GlobalNamespace::DecCalc_Decimal_RoundingMode  mode) ;

/// @brief Method LeadingZeroCount, addr 0xa34230c, size 0x64, virtual false, abstract: false, final false
static inline int32_t LeadingZeroCount(uint32_t  value) ;

/// @brief Method OverflowUnscale, addr 0xa342370, size 0x128, virtual false, abstract: false, final false
static inline int32_t OverflowUnscale(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufQuo, int32_t  scale, bool  sticky) ;

/// @brief Method ScaleResult, addr 0xa341698, size 0xc24, virtual false, abstract: false, final false
static inline int32_t ScaleResult(::GlobalNamespace::DecCalc_Decimal_Buf24*  bufRes, uint32_t  hiRes, int32_t  scale) ;

/// @brief Method SearchScale, addr 0xa3424c8, size 0x1f0, virtual false, abstract: false, final false
static inline int32_t SearchScale(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufQuo, int32_t  scale) ;

/// @brief Method UInt32x32To64, addr 0xa340efc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t UInt32x32To64(uint32_t  a, uint32_t  b) ;

/// @brief Method UInt64x64To128, addr 0xa340f04, size 0x128, virtual false, abstract: false, final false
static inline void UInt64x64To128(uint64_t  a, uint64_t  b, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  result) ;

/// @brief Method Unscale, addr 0xa3410e8, size 0x28c, virtual false, abstract: false, final false
static inline void Unscale(::by_ref<uint32_t>  low, ::by_ref<uint64_t>  high64, ::by_ref<int32_t>  scale) ;

/// @brief Method VarDecCmp, addr 0xa33c6e8, size 0x128, virtual false, abstract: false, final false
static inline int32_t VarDecCmp(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d1, /* [IsReadOnly] */ ::by_ref<::System::Decimal>  d2) ;

/// @brief Method VarDecCmpSub, addr 0xa3426d0, size 0x1c4, virtual false, abstract: false, final false
static inline int32_t VarDecCmpSub(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d1, /* [IsReadOnly] */ ::by_ref<::System::Decimal>  d2) ;

/// @brief Method VarDecDiv, addr 0xa33ca80, size 0x850, virtual false, abstract: false, final false
static inline void VarDecDiv(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2) ;

/// @brief Method VarDecFromR4, addr 0xa33b39c, size 0x404, virtual false, abstract: false, final false
static inline void VarDecFromR4(float_t  input, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  result) ;

/// @brief Method VarDecFromR8, addr 0xa33b828, size 0x410, virtual false, abstract: false, final false
static inline void VarDecFromR8(double_t  input, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  result) ;

/// @brief Method VarDecMod, addr 0xa340104, size 0x39c, virtual false, abstract: false, final false
static inline void VarDecMod(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2) ;

/// @brief Method VarDecModFull, addr 0xa3428a4, size 0x448, virtual false, abstract: false, final false
static inline void VarDecModFull(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2, int32_t  scale) ;

/// @brief Method VarDecMul, addr 0xa33e264, size 0x504, virtual false, abstract: false, final false
static inline void VarDecMul(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2) ;

/// @brief Method VarR4FromDec, addr 0xa33f808, size 0x5c, virtual false, abstract: false, final false
static inline float_t VarR4FromDec(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  value) ;

/// @brief Method VarR8FromDec, addr 0xa33f1cc, size 0x100, virtual false, abstract: false, final false
static inline double_t VarR8FromDec(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  value) ;

constexpr uint32_t const& __cordl_internal_get_uflags() const;

constexpr uint32_t& __cordl_internal_get_uflags() ;

constexpr uint32_t const& __cordl_internal_get_uhi() const;

constexpr uint32_t& __cordl_internal_get_uhi() ;

constexpr uint32_t const& __cordl_internal_get_ulo() const;

constexpr uint32_t& __cordl_internal_get_ulo() ;

constexpr uint64_t const& __cordl_internal_get_ulomidLE() const;

constexpr uint64_t& __cordl_internal_get_ulomidLE() ;

constexpr uint32_t const& __cordl_internal_get_umid() const;

constexpr uint32_t& __cordl_internal_get_umid() ;

constexpr void __cordl_internal_set_uflags(uint32_t  value) ;

constexpr void __cordl_internal_set_uhi(uint32_t  value) ;

constexpr void __cordl_internal_set_ulo(uint32_t  value) ;

constexpr void __cordl_internal_set_ulomidLE(uint64_t  value) ;

constexpr void __cordl_internal_set_umid(uint32_t  value) ;

static inline ::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl> getStaticF_PowerOvflValues() ;

static inline ::ArrayW<double_t> getStaticF_s_doublePowers10() ;

static inline ::ArrayW<uint32_t> getStaticF_s_powers10() ;

static inline ::ArrayW<uint64_t> getStaticF_s_ulongPowers10() ;

/// @brief Method get_High, addr 0xa340e98, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_High() ;

/// @brief Method get_IsNegative, addr 0xa340ec8, size 0xc, virtual false, abstract: false, final false
inline bool get_IsNegative() ;

/// @brief Method get_Low, addr 0xa340ea8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Low() ;

/// @brief Method get_Low64, addr 0xa340ed4, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Low64() ;

/// @brief Method get_Mid, addr 0xa340eb8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_Mid() ;

static inline void setStaticF_PowerOvflValues(::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>  value) ;

static inline void setStaticF_s_doublePowers10(::ArrayW<double_t>  value) ;

static inline void setStaticF_s_powers10(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_s_ulongPowers10(::ArrayW<uint64_t>  value) ;

/// @brief Method set_High, addr 0xa340ea0, size 0x8, virtual false, abstract: false, final false
inline void set_High(uint32_t  value) ;

/// @brief Method set_Low, addr 0xa340eb0, size 0x8, virtual false, abstract: false, final false
inline void set_Low(uint32_t  value) ;

/// @brief Method set_Low64, addr 0xa340edc, size 0x8, virtual false, abstract: false, final false
inline void set_Low64(uint64_t  value) ;

/// @brief Method set_Mid, addr 0xa340ec0, size 0x8, virtual false, abstract: false, final false
inline void set_Mid(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Decimal_DecCalc() ;

// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulo", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr Decimal_DecCalc(uint32_t  uflags, uint32_t  uhi, uint32_t  ulo, uint32_t  umid, uint64_t  ulomidLE) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___uflags_padding[0x0];
/// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uflags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___uflags_padding_forAlignment[0x0];
/// @brief Field uflags, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___uflags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___uhi_padding[0x4];
/// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___uhi;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___uhi_padding_forAlignment[0x4];
/// @brief Field uhi, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___uhi_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ulo_padding[0x8];
/// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___ulo;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ulo_padding_forAlignment[0x8];
/// @brief Field ulo, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___ulo_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___umid_padding[0xc];
/// @brief Field umid, offset: 0xc, size: 0x4, def value: None
 uint32_t  ___umid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___umid_padding_forAlignment[0xc];
/// @brief Field umid, offset: 0xc, size: 0x4, def value: None
 uint32_t  ___umid_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ulomidLE_padding[0x8];
/// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulomidLE;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ulomidLE_padding_forAlignment[0x8];
/// @brief Field ulomidLE, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulomidLE_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5781};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Decimal_DecCalc) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
