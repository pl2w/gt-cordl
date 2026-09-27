#pragma once
// IWYU pragma private; include "System/Byte.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Byte)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
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
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Byte;
}
// Write type traits
MARK_VAL_T(::System::Byte);
DEFINE_IL2CPP_CLASS(::System::Byte, "System", "Byte");
// [IsReadOnly]
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.Byte
struct CORDL_TYPE Byte {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<uint8_t>"
constexpr operator  ::System::IComparable_1<uint8_t>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<uint8_t>"
constexpr operator  ::System::IEquatable_1<uint8_t>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Method CompareTo, addr 0xa22a5b4, size 0x88, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0xa22a63c, size 0xc, virtual true, abstract: false, final true
inline int32_t CompareTo(uint8_t  value) ;

/// @brief Method Equals, addr 0xa22a648, size 0x48, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [NonVersionable]
/// @brief Method Equals, addr 0xa22a690, size 0x10, virtual true, abstract: false, final true
inline bool Equals(uint8_t  obj) ;

/// @brief Method GetHashCode, addr 0xa22a6a0, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0xa22af28, size 0x8, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method Parse, addr 0xa22a8d0, size 0x8c, virtual false, abstract: false, final false
static inline uint8_t Parse(::StringW  s, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0xa22a6a8, size 0x94, virtual false, abstract: false, final false
static inline uint8_t Parse(::StringW  s, ::System::Globalization::NumberStyles  style) ;

/// @brief Method Parse, addr 0xa22a95c, size 0xa4, virtual false, abstract: false, final false
static inline uint8_t Parse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0xa22a73c, size 0x194, virtual false, abstract: false, final false
static inline uint8_t Parse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0xa22af30, size 0x5c, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0xa22b0ac, size 0x8, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0xa22af98, size 0x58, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0xa22b46c, size 0x84, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0xa22b3bc, size 0x58, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0xa22b358, size 0x58, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0xa22b0b4, size 0x58, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0xa22b174, size 0x58, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0xa22b234, size 0x58, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0xa22aff8, size 0x58, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0xa22b2f4, size 0x58, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0xa22b4f0, size 0x9c, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0xa22b114, size 0x58, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0xa22b1d4, size 0x58, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0xa22b294, size 0x58, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa22abe4, size 0x98, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa22ac7c, size 0xb4, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0xa22adcc, size 0xb8, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0xa22ad30, size 0x9c, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method TryFormat, addr 0xa22ae84, size 0xa4, virtual true, abstract: false, final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryParse, addr 0xa22aa00, size 0x80, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::by_ref<uint8_t>  result) ;

/// @brief Method TryParse, addr 0xa22ab3c, size 0xa8, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider, ::by_ref<uint8_t>  result) ;

/// @brief Method TryParse, addr 0xa22aa80, size 0xbc, virtual false, abstract: false, final false
static inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint8_t>  result) ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<uint8_t>"
constexpr ::System::IComparable_1<uint8_t>* i___System__IComparable_1_uint8_t_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<uint8_t>"
constexpr ::System::IEquatable_1<uint8_t>* i___System__IEquatable_1_uint8_t_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Byte() ;

// Ctor Parameters [CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Byte(uint8_t  m_value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Byte, m_value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Byte) == 0x1, "Size mismatch!");

} // namespace end def System
