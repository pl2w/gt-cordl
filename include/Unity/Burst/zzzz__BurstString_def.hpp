#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString)
namespace GlobalNamespace {
struct BurstString_CutoffMode;
}
namespace GlobalNamespace {
struct BurstString_FormatOptions;
}
namespace GlobalNamespace {
struct BurstString_NumberBufferKind;
}
namespace GlobalNamespace {
struct BurstString_NumberBuffer;
}
namespace GlobalNamespace {
struct BurstString_NumberFormatKind;
}
namespace GlobalNamespace {
struct BurstString_tBigInt;
}
namespace GlobalNamespace {
struct BurstString_tFloatUnion32;
}
namespace GlobalNamespace {
struct BurstString_tFloatUnion64;
}
namespace Unity::Burst {
class BurstString_PreserveAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class BurstString;
}
namespace Unity::Burst {
class BurstString_PreserveAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Burst::BurstString*);
MARK_REF_T(::Unity::Burst::BurstString_PreserveAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstString*, "Unity.Burst", "BurstString");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstString_PreserveAttribute*, "Unity.Burst", "BurstString/PreserveAttribute");
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstString
class CORDL_TYPE BurstString : public ::System::Object {
public:
// Declarations
using CutoffMode = ::GlobalNamespace::BurstString_CutoffMode;

using FormatOptions = ::GlobalNamespace::BurstString_FormatOptions;

using NumberBuffer = ::GlobalNamespace::BurstString_NumberBuffer;

using NumberBufferKind = ::GlobalNamespace::BurstString_NumberBufferKind;

using NumberFormatKind = ::GlobalNamespace::BurstString_NumberFormatKind;

using tBigInt = ::GlobalNamespace::BurstString_tBigInt;

using tFloatUnion32 = ::GlobalNamespace::BurstString_tFloatUnion32;

using tFloatUnion64 = ::GlobalNamespace::BurstString_tFloatUnion64;

using PreserveAttribute = ::Unity::Burst::BurstString_PreserveAttribute;

/// @brief Field InfinityString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InfinityString, put=setStaticF_InfinityString)) ::ArrayW<uint8_t>  InfinityString;

/// @brief Field NanString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NanString, put=setStaticF_NanString)) ::ArrayW<uint8_t>  NanString;

/// @brief Field SplitByColon, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SplitByColon, put=setStaticF_SplitByColon)) ::ArrayW<char16_t>  SplitByColon;

/// @brief Field g_PowerOf10_U32, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_g_PowerOf10_U32, put=setStaticF_g_PowerOf10_U32)) ::ArrayW<uint32_t>  g_PowerOf10_U32;

/// @brief Field logTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_logTable, put=setStaticF_logTable)) ::ArrayW<uint8_t>  logTable;

/// @brief Method AlignLeft, addr 0xae815a4, size 0x44, virtual false, abstract: false, final false
static inline bool AlignLeft(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int32_t  align, int32_t  length) ;

/// @brief Method AlignRight, addr 0xae815e8, size 0xc4, virtual false, abstract: false, final false
static inline bool AlignRight(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int32_t  align, int32_t  length) ;

/// @brief Method BigInt_Add, addr 0xae83300, size 0x94, virtual false, abstract: false, final false
static inline void BigInt_Add(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  rhs) ;

/// @brief Method BigInt_Add_internal, addr 0xae83394, size 0xa0, virtual false, abstract: false, final false
static inline void BigInt_Add_internal(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pLarge, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pSmall) ;

/// @brief Method BigInt_Compare, addr 0xae832a4, size 0x5c, virtual false, abstract: false, final false
static inline int32_t BigInt_Compare(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  rhs) ;

/// @brief Method BigInt_DivideWithRemainder_MaxQuotient9, addr 0xae83dc0, size 0x164, virtual false, abstract: false, final false
static inline uint32_t BigInt_DivideWithRemainder_MaxQuotient9(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pDividend, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  divisor) ;

/// @brief Method BigInt_Multiply, addr 0xae83434, size 0x94, virtual false, abstract: false, final false
static inline void BigInt_Multiply(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  rhs) ;

/// @brief Method BigInt_Multiply, addr 0xae835f8, size 0x60, virtual false, abstract: false, final false
static inline void BigInt_Multiply(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, uint32_t  rhs) ;

/// @brief Method BigInt_Multiply10, addr 0xae8370c, size 0x58, virtual false, abstract: false, final false
static inline void BigInt_Multiply10(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult) ;

/// @brief Method BigInt_Multiply2, addr 0xae836b4, size 0x58, virtual false, abstract: false, final false
static inline void BigInt_Multiply2(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult) ;

/// @brief Method BigInt_Multiply2, addr 0xae83658, size 0x5c, virtual false, abstract: false, final false
static inline void BigInt_Multiply2(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  input) ;

/// @brief Method BigInt_MultiplyPow10, addr 0xae83b94, size 0x1d8, virtual false, abstract: false, final false
static inline void BigInt_MultiplyPow10(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  input, uint32_t  exponent) ;

/// @brief Method BigInt_Multiply_internal, addr 0xae834c8, size 0x130, virtual false, abstract: false, final false
static inline void BigInt_Multiply_internal(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pLarge, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pSmall) ;

/// @brief Method BigInt_Pow10, addr 0xae839b8, size 0x1c0, virtual false, abstract: false, final false
static inline void BigInt_Pow10(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, uint32_t  exponent) ;

/// @brief Method BigInt_Pow2, addr 0xae83d6c, size 0x54, virtual false, abstract: false, final false
static inline void BigInt_Pow2(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, uint32_t  exponent) ;

/// @brief Method BigInt_ShiftLeft, addr 0xae83f24, size 0x120, virtual false, abstract: false, final false
static inline void BigInt_ShiftLeft(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, uint32_t  shift) ;

/// @brief Method ConvertDoubleToString, addr 0xae81a64, size 0x2a0, virtual false, abstract: false, final false
static inline void ConvertDoubleToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, double_t  value, ::GlobalNamespace::BurstString_FormatOptions  formatOptions) ;

/// @brief Method ConvertFloatToString, addr 0xae81738, size 0x2a0, virtual false, abstract: false, final false
static inline void ConvertFloatToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, float_t  value, ::GlobalNamespace::BurstString_FormatOptions  formatOptions) ;

/// @brief Method ConvertIntegerToString, addr 0xae82538, size 0x1a0, virtual false, abstract: false, final false
static inline void ConvertIntegerToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int64_t  value, ::GlobalNamespace::BurstString_FormatOptions  options) ;

/// @brief Method ConvertUnsignedIntegerToString, addr 0xae822d8, size 0x1a0, virtual false, abstract: false, final false
static inline void ConvertUnsignedIntegerToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint64_t  value, ::GlobalNamespace::BurstString_FormatOptions  options) ;

/// [BurstString::Preserve]
/// @brief Method CopyFixedString, addr 0xae81458, size 0x24, virtual false, abstract: false, final false
static inline void CopyFixedString(uint8_t*  dest, int32_t  destLength, uint8_t*  src, int32_t  srcLength) ;

/// @brief Method Dragon4, addr 0xae84044, size 0xb30, virtual false, abstract: false, final false
static inline uint32_t Dragon4(uint64_t  mantissa, int32_t  exponent, uint32_t  mantissaHighBitIdx, bool  hasUnequalMargins, ::GlobalNamespace::BurstString_CutoffMode  cutoffMode, uint32_t  cutoffNumber, uint8_t*  pOutBuffer, uint32_t  bufferSize, ::by_ref<int32_t>  pOutExponent) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae8147c, size 0x128, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint8_t*  src, int32_t  srcLength, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae81d04, size 0x1c8, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, bool  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae81ecc, size 0x1fc, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, char16_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae819d8, size 0x8c, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, double_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae816ac, size 0x8c, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, float_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae826d8, size 0xc0, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int16_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae82798, size 0xc0, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int32_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae82858, size 0xc0, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int64_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae82478, size 0xc0, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int8_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae821d0, size 0x84, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint16_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae82254, size 0x84, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint32_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae8214c, size 0x84, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint64_t  value, int32_t  formatOptionsRaw) ;

/// [BurstString::Preserve]
/// @brief Method Format, addr 0xae820c8, size 0x84, virtual false, abstract: false, final false
static inline void Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint8_t  value, int32_t  formatOptionsRaw) ;

/// @brief Method FormatDecimalOrHexadecimal, addr 0xae82c14, size 0xa0, virtual false, abstract: false, final false
static inline void FormatDecimalOrHexadecimal(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  zeroPadding, bool  outputPositiveSign) ;

/// @brief Method FormatGeneral, addr 0xae82f38, size 0x1f0, virtual false, abstract: false, final false
static inline void FormatGeneral(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  nMaxDigits, uint8_t  expChar) ;

/// @brief Method FormatInfinityNaN, addr 0xae84bc0, size 0x1f0, virtual false, abstract: false, final false
static inline void FormatInfinityNaN(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint64_t  mantissa, bool  isNegative, ::GlobalNamespace::BurstString_FormatOptions  formatOptions) ;

/// @brief Method FormatNumber, addr 0xae82990, size 0x258, virtual false, abstract: false, final false
static inline void FormatNumber(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  nMaxDigits, ::GlobalNamespace::BurstString_FormatOptions  options) ;

/// @brief Method GetLengthForFormatGeneral, addr 0xae82de4, size 0x154, virtual false, abstract: false, final false
static inline int32_t GetLengthForFormatGeneral(::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  nMaxDigits) ;

/// @brief Method GetLengthIntegerToString, addr 0xae82be8, size 0x2c, virtual false, abstract: false, final false
static inline int32_t GetLengthIntegerToString(int64_t  value, int32_t  basis, int32_t  zeroPadding) ;

/// @brief Method LogBase2, addr 0xae8315c, size 0x148, virtual false, abstract: false, final false
static inline uint32_t LogBase2(uint32_t  val) ;

/// @brief Method RoundNumber, addr 0xae82cb4, size 0x130, virtual false, abstract: false, final false
static inline void RoundNumber(::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  pos, bool  isCorrectlyRounded) ;

/// @brief Method ShouldRoundUp, addr 0xae83140, size 0x1c, virtual false, abstract: false, final false
static inline bool ShouldRoundUp(uint8_t*  dig, int32_t  i, bool  isCorrectlyRounded) ;

/// @brief Method ValueToIntegerChar, addr 0xae82940, size 0x3c, virtual false, abstract: false, final false
static inline uint8_t ValueToIntegerChar(int32_t  value, bool  uppercase) ;

/// @brief Method g_PowerOf10_Big, addr 0xae83764, size 0x254, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BurstString_tBigInt g_PowerOf10_Big(int32_t  i) ;

static inline ::ArrayW<uint8_t> getStaticF_InfinityString() ;

static inline ::ArrayW<uint8_t> getStaticF_NanString() ;

static inline ::ArrayW<char16_t> getStaticF_SplitByColon() ;

static inline ::ArrayW<uint32_t> getStaticF_g_PowerOf10_U32() ;

static inline ::ArrayW<uint8_t> getStaticF_logTable() ;

static inline void setStaticF_InfinityString(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_NanString(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_SplitByColon(::ArrayW<char16_t>  value) ;

static inline void setStaticF_g_PowerOf10_U32(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_logTable(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstString(BurstString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstString(BurstString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstString) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstString/PreserveAttribute
class CORDL_TYPE BurstString_PreserveAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Unity::Burst::BurstString_PreserveAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xae84fd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstString_PreserveAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstString_PreserveAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstString_PreserveAttribute(BurstString_PreserveAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstString_PreserveAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstString_PreserveAttribute(BurstString_PreserveAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstString_PreserveAttribute) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst
