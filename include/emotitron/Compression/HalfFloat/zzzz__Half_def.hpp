#pragma once
// IWYU pragma private; include "emotitron/Compression/HalfFloat/Half.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Half)
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace emotitron::Compression::HalfFloat {
struct Half;
}
// Write type traits
MARK_VAL_T(::emotitron::Compression::HalfFloat::Half);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::HalfFloat::Half, "emotitron.Compression.HalfFloat", "Half");
// Dependencies 
namespace emotitron::Compression::HalfFloat {
// Is value type: true
// CS Name: emotitron.Compression.HalfFloat.Half
struct CORDL_TYPE Half {
public:
// Declarations
/// @brief Field Epsilon, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_Epsilon, put=setStaticF_Epsilon)) ::emotitron::Compression::HalfFloat::Half  Epsilon;

/// @brief Field MaxValue, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::emotitron::Compression::HalfFloat::Half  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::emotitron::Compression::HalfFloat::Half  MinValue;

/// @brief Field NaN, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_NaN, put=setStaticF_NaN)) ::emotitron::Compression::HalfFloat::Half  NaN;

/// @brief Field NegativeInfinity, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_NegativeInfinity, put=setStaticF_NegativeInfinity)) ::emotitron::Compression::HalfFloat::Half  NegativeInfinity;

/// @brief Field PositiveInfinity, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_PositiveInfinity, put=setStaticF_PositiveInfinity)) ::emotitron::Compression::HalfFloat::Half  PositiveInfinity;

 __declspec(property(get=get_RawValue)) uint16_t  RawValue;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr operator  ::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr operator  ::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method CompareTo, addr 0x5dd9b7c, size 0x174, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0x5dd9a74, size 0x108, virtual true, abstract: false, final true
inline int32_t CompareTo(::emotitron::Compression::HalfFloat::Half  value) ;

/// @brief Method ConvertToFloat, addr 0x5dd8ec8, size 0x110, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> ConvertToFloat(::ArrayW<::emotitron::Compression::HalfFloat::Half>  values) ;

/// @brief Method ConvertToHalf, addr 0x5dd8fd8, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<::emotitron::Compression::HalfFloat::Half> ConvertToHalf(::ArrayW<float_t>  values) ;

/// @brief Method Equals, addr 0x5dd9d04, size 0x108, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5dd9518, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::emotitron::Compression::HalfFloat::Half  other) ;

/// @brief Method Equals, addr 0x5dd9cf0, size 0x14, virtual false, abstract: false, final false
static inline bool Equals(::by_ref<::emotitron::Compression::HalfFloat::Half>  value1, ::by_ref<::emotitron::Compression::HalfFloat::Half>  value2) ;

/// @brief Method GetHashCode, addr 0x5dd9a64, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0x5dd9e0c, size 0x68, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method IsInfinity, addr 0x5dd90a4, size 0x98, virtual false, abstract: false, final false
static inline bool IsInfinity(::emotitron::Compression::HalfFloat::Half  half) ;

/// @brief Method IsNaN, addr 0x5dd91a4, size 0x60, virtual false, abstract: false, final false
static inline bool IsNaN(::emotitron::Compression::HalfFloat::Half  half) ;

/// @brief Method IsNegativeInfinity, addr 0x5dd9204, size 0x60, virtual false, abstract: false, final false
static inline bool IsNegativeInfinity(::emotitron::Compression::HalfFloat::Half  half) ;

/// @brief Method IsPositiveInfinity, addr 0x5dd9264, size 0x60, virtual false, abstract: false, final false
static inline bool IsPositiveInfinity(::emotitron::Compression::HalfFloat::Half  half) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x5dd9e74, size 0x94, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x5dd9f08, size 0x94, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x5dd9f9c, size 0x4c, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x5dd9fe8, size 0x4c, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x5dda034, size 0x94, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x5dda0c8, size 0x94, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x5dda15c, size 0x94, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x5dda1f0, size 0x94, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x5dda284, size 0x94, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x5dda318, size 0x94, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x5dda3ac, size 0x58, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x5dda404, size 0xc4, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x5dda4c8, size 0x94, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x5dda55c, size 0x94, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x5dda5f0, size 0x94, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x5dd95ac, size 0x12c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x5dd96d8, size 0x168, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0x5dd993c, size 0x128, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ToString, addr 0x5dd9840, size 0xfc, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x5dd8e58, size 0x68, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

static inline ::emotitron::Compression::HalfFloat::Half getStaticF_Epsilon() ;

static inline ::emotitron::Compression::HalfFloat::Half getStaticF_MaxValue() ;

static inline ::emotitron::Compression::HalfFloat::Half getStaticF_MinValue() ;

static inline ::emotitron::Compression::HalfFloat::Half getStaticF_NaN() ;

static inline ::emotitron::Compression::HalfFloat::Half getStaticF_NegativeInfinity() ;

static inline ::emotitron::Compression::HalfFloat::Half getStaticF_PositiveInfinity() ;

/// @brief Method get_RawValue, addr 0x5dd8ec0, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_RawValue() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr ::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>* i___System__IComparable_1___emotitron__Compression__HalfFloat__Half_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr ::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>* i___System__IEquatable_1___emotitron__Compression__HalfFloat__Half_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0x5dd913c, size 0x68, virtual false, abstract: false, final false
static inline bool op_Equality(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right) ;

/// @brief Method op_Explicit, addr 0x5dd9590, size 0x1c, virtual false, abstract: false, final false
static inline ::emotitron::Compression::HalfFloat::Half op_Explicit___emotitron__Compression__HalfFloat__Half(float_t  value) ;

/// @brief Method op_GreaterThan, addr 0x5dd9398, size 0x80, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x5dd9498, size 0x80, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right) ;

/// @brief Method op_Implicit, addr 0x5dd9344, size 0x54, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::emotitron::Compression::HalfFloat::Half  value) ;

/// @brief Method op_Inequality, addr 0x5dd9528, size 0x68, virtual false, abstract: false, final false
static inline bool op_Inequality(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right) ;

/// @brief Method op_LessThan, addr 0x5dd92c4, size 0x80, virtual false, abstract: false, final false
static inline bool op_LessThan(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right) ;

/// @brief Method op_LessThanOrEqual, addr 0x5dd9418, size 0x80, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right) ;

static inline void setStaticF_Epsilon(::emotitron::Compression::HalfFloat::Half  value) ;

static inline void setStaticF_MaxValue(::emotitron::Compression::HalfFloat::Half  value) ;

static inline void setStaticF_MinValue(::emotitron::Compression::HalfFloat::Half  value) ;

static inline void setStaticF_NaN(::emotitron::Compression::HalfFloat::Half  value) ;

static inline void setStaticF_NegativeInfinity(::emotitron::Compression::HalfFloat::Half  value) ;

static inline void setStaticF_PositiveInfinity(::emotitron::Compression::HalfFloat::Half  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Half() ;

// Ctor Parameters [CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr Half(uint16_t  value) noexcept;

/// @brief Field AdditionRounding offset 0xffffffff size 0x4
static constexpr int32_t  AdditionRounding{static_cast<int32_t>(0x1)};

/// @brief Field ExponentRadix offset 0xffffffff size 0x4
static constexpr int32_t  ExponentRadix{static_cast<int32_t>(0x2)};

/// @brief Field MantissaBits offset 0xffffffff size 0x4
static constexpr int32_t  MantissaBits{static_cast<int32_t>(0xb)};

/// @brief Field MaximumBinaryExponent offset 0xffffffff size 0x4
static constexpr int32_t  MaximumBinaryExponent{static_cast<int32_t>(0xf)};

/// @brief Field MaximumDecimalExponent offset 0xffffffff size 0x4
static constexpr int32_t  MaximumDecimalExponent{static_cast<int32_t>(0x4)};

/// @brief Field MinimumBinaryExponent offset 0xffffffff size 0x4
static constexpr int32_t  MinimumBinaryExponent{static_cast<int32_t>(0xfffffff2)};

/// @brief Field MinimumDecimalExponent offset 0xffffffff size 0x4
static constexpr int32_t  MinimumDecimalExponent{static_cast<int32_t>(0xfffffffc)};

/// @brief Field PrecisionDigits offset 0xffffffff size 0x4
static constexpr int32_t  PrecisionDigits{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value, offset: 0x0, size: 0x2, def value: None
 uint16_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::HalfFloat::Half, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::HalfFloat::Half) == 0x2, "Size mismatch!");

} // namespace end def emotitron::Compression::HalfFloat
