#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf16ValueStringBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf16ValueStringBuilder)
namespace Cysharp::Text {
template<typename T>
class IResettableBufferWriter_1;
}
namespace Cysharp::Text {
class Utf16ValueStringBuilder_ExceptionUtil;
}
namespace Cysharp::Text {
template<typename T>
class Utf16ValueStringBuilder_FormatterCache_1;
}
namespace Cysharp::Text {
template<typename T>
class Utf16ValueStringBuilder_TryFormat_1;
}
namespace Cysharp::Text {
class Utf16ValueStringBuilder___c;
}
namespace Cysharp::Text {
template<typename T>
class Utf16ValueStringBuilder___c__170_1;
}
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
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
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Cysharp::Text {
class Utf16ValueStringBuilder_ExceptionUtil;
}
namespace Cysharp::Text {
template<typename T>
class Utf16ValueStringBuilder_FormatterCache_1;
}
namespace Cysharp::Text {
template<typename T>
class Utf16ValueStringBuilder_TryFormat_1;
}
namespace Cysharp::Text {
class Utf16ValueStringBuilder___c;
}
namespace Cysharp::Text {
template<typename T>
class Utf16ValueStringBuilder___c__170_1;
}
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::Utf16ValueStringBuilder_ExceptionUtil*);
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf16ValueStringBuilder_FormatterCache_1);
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1);
MARK_REF_T(::Cysharp::Text::Utf16ValueStringBuilder___c*);
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf16ValueStringBuilder___c__170_1);
MARK_VAL_T(::Cysharp::Text::Utf16ValueStringBuilder);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf16ValueStringBuilder_ExceptionUtil*, "Cysharp.Text", "Utf16ValueStringBuilder/ExceptionUtil");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf16ValueStringBuilder_FormatterCache_1, "Cysharp.Text", "Utf16ValueStringBuilder/FormatterCache`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1, "Cysharp.Text", "Utf16ValueStringBuilder/TryFormat`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf16ValueStringBuilder___c*, "Cysharp.Text", "Utf16ValueStringBuilder/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf16ValueStringBuilder___c__170_1, "Cysharp.Text", "Utf16ValueStringBuilder/<>c__170`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf16ValueStringBuilder, "Cysharp.Text", "Utf16ValueStringBuilder");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies 
namespace Cysharp::Text {
// Is value type: true
// CS Name: Cysharp.Text.Utf16ValueStringBuilder
struct CORDL_TYPE Utf16ValueStringBuilder {
public:
// Declarations
using ExceptionUtil = ::Cysharp::Text::Utf16ValueStringBuilder_ExceptionUtil;

template<typename T>
using FormatterCache_1 = ::Cysharp::Text::Utf16ValueStringBuilder_FormatterCache_1<T>;

template<typename T>
using TryFormat_1 = ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<T>;

using __c = ::Cysharp::Text::Utf16ValueStringBuilder___c;

template<typename T>
using __c__170_1 = ::Cysharp::Text::Utf16ValueStringBuilder___c__170_1<T>;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field crlf, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_crlf, put=setStaticF_crlf)) bool  crlf;

/// @brief Field newLine1, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_newLine1, put=setStaticF_newLine1)) char16_t  newLine1;

/// @brief Field newLine2, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_newLine2, put=setStaticF_newLine2)) char16_t  newLine2;

/// @brief Field scratchBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scratchBuffer, put=setStaticF_scratchBuffer)) ::ArrayW<char16_t>  scratchBuffer;

/// @brief Field scratchBufferUsed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_scratchBufferUsed, put=setStaticF_scratchBufferUsed)) bool  scratchBufferUsed;

/// @brief Convert operator to "::Cysharp::Text::IResettableBufferWriter_1<char16_t>"
constexpr operator  ::Cysharp::Text::IResettableBufferWriter_1<char16_t>*() ;

/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<char16_t>"
constexpr operator  ::System::Buffers::IBufferWriter_1<char16_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Advance, addr 0xb9b26a0, size 0x10, virtual true, abstract: false, final true
inline void Advance(int32_t  count) ;

/// @brief Method Append, addr 0xb9b2a70, size 0xb8, virtual false, abstract: false, final false
inline void Append(::ArrayW<char16_t>  value, int32_t  startIndex, int32_t  charCount) ;

/// @brief Method Append, addr 0xb9b27a8, size 0xac, virtual false, abstract: false, final false
inline void Append(::StringW  value) ;

/// @brief Method Append, addr 0xb9b2940, size 0x130, virtual false, abstract: false, final false
inline void Append(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Append, addr 0xb9ad2dc, size 0x208, virtual false, abstract: false, final false
inline void Append(::System::DateTime  value) ;

/// @brief Method Append, addr 0xb9ad4e4, size 0x29c, virtual false, abstract: false, final false
inline void Append(::System::DateTime  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9ad870, size 0x208, virtual false, abstract: false, final false
inline void Append(::System::DateTimeOffset  value) ;

/// @brief Method Append, addr 0xb9ada78, size 0x29c, virtual false, abstract: false, final false
inline void Append(::System::DateTimeOffset  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9ade1c, size 0x238, virtual false, abstract: false, final false
inline void Append(::System::Decimal  value) ;

/// @brief Method Append, addr 0xb9ae054, size 0x2d4, virtual false, abstract: false, final false
inline void Append(::System::Decimal  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9b16ec, size 0x1b8, virtual false, abstract: false, final false
inline void Append(::System::Guid  value) ;

/// @brief Method Append, addr 0xb9b18a4, size 0x250, virtual false, abstract: false, final false
inline void Append(::System::Guid  value, ::StringW  format) ;

/// [NullableContext(0)]
/// @brief Method Append, addr 0xb9b2b28, size 0x13c, virtual false, abstract: false, final false
inline void Append(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method Append, addr 0xb9b0250, size 0x208, virtual false, abstract: false, final false
inline void Append(::System::TimeSpan  value) ;

/// @brief Method Append, addr 0xb9b0458, size 0x29c, virtual false, abstract: false, final false
inline void Append(::System::TimeSpan  value, ::StringW  format) ;

/// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Append(T  value) ;

/// @brief Method Append, addr 0xb9b23f8, size 0xb8, virtual false, abstract: false, final false
inline void Append(char16_t  value) ;

/// @brief Method Append, addr 0xb9b24b0, size 0xf8, virtual false, abstract: false, final false
inline void Append(char16_t  value, int32_t  repeatCount) ;

/// @brief Method Append, addr 0xb9ae430, size 0x1c0, virtual false, abstract: false, final false
inline void Append(double_t  value) ;

/// @brief Method Append, addr 0xb9ae5f0, size 0x258, virtual false, abstract: false, final false
inline void Append(double_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9afd48, size 0x1b8, virtual false, abstract: false, final false
inline void Append(float_t  value) ;

/// @brief Method Append, addr 0xb9aff00, size 0x258, virtual false, abstract: false, final false
inline void Append(float_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9ae940, size 0x1b8, virtual false, abstract: false, final false
inline void Append(int16_t  value) ;

/// @brief Method Append, addr 0xb9aeaf8, size 0x258, virtual false, abstract: false, final false
inline void Append(int16_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9aee40, size 0x1b8, virtual false, abstract: false, final false
inline void Append(int32_t  value) ;

/// @brief Method Append, addr 0xb9aeff8, size 0x258, virtual false, abstract: false, final false
inline void Append(int32_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9af340, size 0x1c0, virtual false, abstract: false, final false
inline void Append(int64_t  value) ;

/// @brief Method Append, addr 0xb9af500, size 0x258, virtual false, abstract: false, final false
inline void Append(int64_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9af848, size 0x1b8, virtual false, abstract: false, final false
inline void Append(int8_t  value) ;

/// @brief Method Append, addr 0xb9afa00, size 0x258, virtual false, abstract: false, final false
inline void Append(int8_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9b07e4, size 0x1b8, virtual false, abstract: false, final false
inline void Append(uint16_t  value) ;

/// @brief Method Append, addr 0xb9b099c, size 0x258, virtual false, abstract: false, final false
inline void Append(uint16_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9b0ce4, size 0x1b8, virtual false, abstract: false, final false
inline void Append(uint32_t  value) ;

/// @brief Method Append, addr 0xb9b0e9c, size 0x258, virtual false, abstract: false, final false
inline void Append(uint32_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9b11e4, size 0x1c0, virtual false, abstract: false, final false
inline void Append(uint64_t  value) ;

/// @brief Method Append, addr 0xb9b13a4, size 0x258, virtual false, abstract: false, final false
inline void Append(uint64_t  value, ::StringW  format) ;

/// @brief Method Append, addr 0xb9acb60, size 0x1b8, virtual false, abstract: false, final false
inline void Append(uint8_t  value) ;

/// @brief Method Append, addr 0xb9acf94, size 0x258, virtual false, abstract: false, final false
inline void Append(uint8_t  value, ::StringW  format) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
inline void AppendFormat(::StringW  format, T1  arg1) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
inline void AppendFormat(::StringW  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15, T16  arg16) ;

/// [NullableContext(0)]
/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
inline void AppendFormat(::System::ReadOnlySpan_1<char16_t>  format, /* [Nullable(1)] */ T1  arg1) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15) ;

/// @brief Method AppendFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
inline void AppendFormat(/* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8, T9  arg9, T10  arg10, T11  arg11, T12  arg12, T13  arg13, T14  arg14, T15  arg15, T16  arg16) ;

/// @brief Method AppendFormatInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendFormatInternal(T  arg, int32_t  width, /* [Nullable(0)] */ ::System::ReadOnlySpan_1<char16_t>  format, ::StringW  argName) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, /* [ParamArray] */ ::ArrayW<T>  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, ::System::Collections::Generic::ICollection_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, ::System::Collections::Generic::IList_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, ::System::Collections::Generic::IReadOnlyCollection_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, ::System::Collections::Generic::IReadOnlyList_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, ::System::Collections::Generic::List_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(::StringW  separator, /* [Nullable(new[] { 0, 1 })] */ ::System::ReadOnlySpan_1<T>  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, /* [ParamArray] */ ::ArrayW<T>  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, ::System::Collections::Generic::ICollection_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, ::System::Collections::Generic::IList_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, ::System::Collections::Generic::IReadOnlyCollection_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, ::System::Collections::Generic::IReadOnlyList_1<T>*  values) ;

/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, ::System::Collections::Generic::List_1<T>*  values) ;

/// [NullableContext(2)]
/// @brief Method AppendJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoin(char16_t  separator, /* [Nullable(new[] { 0, 1 })] */ ::System::ReadOnlySpan_1<T>  values) ;

/// [NullableContext(0)]
/// @brief Method AppendJoinInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(1)] */ ::System::Collections::Generic::IEnumerable_1<T>*  values) ;

/// [NullableContext(0)]
/// @brief Method AppendJoinInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(1)] */ ::System::Collections::Generic::IList_1<T>*  values) ;

/// [NullableContext(0)]
/// @brief Method AppendJoinInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(1)] */ ::System::Collections::Generic::IReadOnlyList_1<T>*  values) ;

/// [NullableContext(0)]
/// @brief Method AppendJoinInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendJoinInternal(::System::ReadOnlySpan_1<char16_t>  separator, /* [Nullable(new[] { 0, 1 })] */ ::System::ReadOnlySpan_1<T>  values) ;

/// @brief Method AppendLine, addr 0xb9b2274, size 0x184, virtual false, abstract: false, final false
inline void AppendLine() ;

/// @brief Method AppendLine, addr 0xb9b2854, size 0xec, virtual false, abstract: false, final false
inline void AppendLine(::StringW  value) ;

/// @brief Method AppendLine, addr 0xb9ad780, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTime  value) ;

/// @brief Method AppendLine, addr 0xb9ad7f4, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTime  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9add14, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTimeOffset  value) ;

/// @brief Method AppendLine, addr 0xb9add90, size 0x8c, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTimeOffset  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9ae328, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::Decimal  value) ;

/// @brief Method AppendLine, addr 0xb9ae3a4, size 0x8c, virtual false, abstract: false, final false
inline void AppendLine(::System::Decimal  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9b1af4, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::Guid  value) ;

/// @brief Method AppendLine, addr 0xb9b1b70, size 0x8c, virtual false, abstract: false, final false
inline void AppendLine(::System::Guid  value, ::StringW  format) ;

/// [NullableContext(0)]
/// @brief Method AppendLine, addr 0xb9b2c64, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method AppendLine, addr 0xb9b06f4, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(::System::TimeSpan  value) ;

/// @brief Method AppendLine, addr 0xb9b0768, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::TimeSpan  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendLine(T  value) ;

/// @brief Method AppendLine, addr 0xb9b26b0, size 0xf8, virtual false, abstract: false, final false
inline void AppendLine(char16_t  value) ;

/// @brief Method AppendLine, addr 0xb9ae848, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(double_t  value) ;

/// @brief Method AppendLine, addr 0xb9ae8bc, size 0x84, virtual false, abstract: false, final false
inline void AppendLine(double_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9b0158, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(float_t  value) ;

/// @brief Method AppendLine, addr 0xb9b01cc, size 0x84, virtual false, abstract: false, final false
inline void AppendLine(float_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9aed50, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int16_t  value) ;

/// @brief Method AppendLine, addr 0xb9aedc4, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int16_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9af250, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int32_t  value) ;

/// @brief Method AppendLine, addr 0xb9af2c4, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int32_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9af758, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int64_t  value) ;

/// @brief Method AppendLine, addr 0xb9af7cc, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int64_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9afc58, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int8_t  value) ;

/// @brief Method AppendLine, addr 0xb9afccc, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int8_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9b0bf4, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint16_t  value) ;

/// @brief Method AppendLine, addr 0xb9b0c68, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint16_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9b10f4, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint32_t  value) ;

/// @brief Method AppendLine, addr 0xb9b1168, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint32_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9b15fc, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint64_t  value) ;

/// @brief Method AppendLine, addr 0xb9b1670, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint64_t  value, ::StringW  format) ;

/// @brief Method AppendLine, addr 0xb9ad1ec, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint8_t  value) ;

/// @brief Method AppendLine, addr 0xb9ad260, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint8_t  value, ::StringW  format) ;

/// [NullableContext(0)]
/// @brief Method AsArraySegment, addr 0xb9b1dcc, size 0x68, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<char16_t> AsArraySegment() ;

/// [NullableContext(0)]
/// @brief Method AsMemory, addr 0xb9b1d58, size 0x74, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<char16_t> AsMemory() ;

/// [NullableContext(0)]
/// @brief Method AsSpan, addr 0xb9b1cb0, size 0xa8, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<char16_t> AsSpan() ;

/// @brief Method Clear, addr 0xb9b21e4, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateFormatter, addr 0xb9ab554, size 0x160c, virtual false, abstract: false, final false
static inline ::System::Object* CreateFormatter(::System::Type*  type) ;

/// [NullableContext(0)]
/// @brief Method CreateNullableFormatter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>* CreateNullableFormatter() ;

/// @brief Method Cysharp.Text.IResettableBufferWriter<System.Char>.Reset, addr 0xb9b4380, size 0x8, virtual true, abstract: false, final true
inline void Cysharp_Text_IResettableBufferWriter_System_Char__Reset() ;

/// @brief Method Dispose, addr 0xb9b2090, size 0x154, virtual true, abstract: false, final true
inline void Dispose() ;

/// [NullableContext(0)]
/// @brief Method EnableNullableFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EnableNullableFormat() ;

/// [NullableContext(0)]
/// @brief Method GetMemory, addr 0xb9b42e0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Memory_1<char16_t> GetMemory(int32_t  sizeHint) ;

/// [NullableContext(0)]
/// @brief Method GetSpan, addr 0xb9b25a8, size 0xf8, virtual true, abstract: false, final true
inline ::System::Span_1<char16_t> GetSpan(int32_t  sizeHint) ;

/// @brief Method Grow, addr 0xb9acd18, size 0x224, virtual false, abstract: false, final false
inline void Grow(int32_t  sizeHint) ;

/// @brief Method Insert, addr 0xb9b3278, size 0xb4, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::StringW  value) ;

/// @brief Method Insert, addr 0xb9b2ce0, size 0xc0, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::StringW  value, int32_t  count) ;

/// [NullableContext(0)]
/// @brief Method Insert, addr 0xb9b2da0, size 0x4d8, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::System::ReadOnlySpan_1<char16_t>  value, int32_t  count) ;

/// @brief Method RegisterTryFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterTryFormat(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<T>*  formatMethod) ;

/// @brief Method Remove, addr 0xb9b3f8c, size 0x214, virtual false, abstract: false, final false
inline void Remove(int32_t  startIndex, int32_t  length) ;

/// @brief Method Replace, addr 0xb9b3370, size 0x74, virtual false, abstract: false, final false
inline void Replace(char16_t  oldChar, char16_t  newChar) ;

/// @brief Method Replace, addr 0xb9b33e4, size 0x11c, virtual false, abstract: false, final false
inline void Replace(char16_t  oldChar, char16_t  newChar, int32_t  startIndex, int32_t  count) ;

/// @brief Method Replace, addr 0xb9b3500, size 0x74, virtual false, abstract: false, final false
inline void Replace(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method Replace, addr 0xb9b3574, size 0x150, virtual false, abstract: false, final false
inline void Replace(::StringW  oldValue, ::StringW  newValue, int32_t  startIndex, int32_t  count) ;

/// [NullableContext(0)]
/// @brief Method Replace, addr 0xb9b36c4, size 0x8c, virtual false, abstract: false, final false
inline void Replace(::System::ReadOnlySpan_1<char16_t>  oldValue, ::System::ReadOnlySpan_1<char16_t>  newValue) ;

/// [NullableContext(0)]
/// @brief Method Replace, addr 0xb9b3750, size 0x790, virtual false, abstract: false, final false
inline void Replace(::System::ReadOnlySpan_1<char16_t>  oldValue, ::System::ReadOnlySpan_1<char16_t>  newValue, int32_t  startIndex, int32_t  count) ;

/// @brief Method ReplaceAt, addr 0xb9b3ee0, size 0xac, virtual false, abstract: false, final false
inline void ReplaceAt(char16_t  newChar, int32_t  replaceIndex) ;

/// @brief Method ThrowArgumentException, addr 0xb9acf3c, size 0x58, virtual false, abstract: false, final false
inline void ThrowArgumentException(::StringW  paramName) ;

/// @brief Method ThrowFormatException, addr 0xb9b4388, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowFormatException() ;

/// @brief Method ThrowNestedException, addr 0xb9b2030, size 0x60, virtual false, abstract: false, final false
static inline void ThrowNestedException() ;

/// @brief Method ToString, addr 0xb9b42ac, size 0x34, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [NullableContext(0)]
/// @brief Method TryCopyTo, addr 0xb9b41a0, size 0x10c, virtual false, abstract: false, final false
inline bool TryCopyTo(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method TryGrow, addr 0xb9b21ec, size 0x88, virtual false, abstract: false, final false
inline void TryGrow(int32_t  sizeHint) ;

/// @brief Method .ctor, addr 0xb9b1e34, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(bool  disposeImmediately) ;

static inline bool getStaticF_crlf() ;

static inline char16_t getStaticF_newLine1() ;

static inline char16_t getStaticF_newLine2() ;

static inline ::ArrayW<char16_t> getStaticF_scratchBuffer() ;

static inline bool getStaticF_scratchBufferUsed() ;

/// @brief Method get_Length, addr 0xb9b1ca8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::Cysharp::Text::IResettableBufferWriter_1<char16_t>"
constexpr ::Cysharp::Text::IResettableBufferWriter_1<char16_t>* i___Cysharp__Text__IResettableBufferWriter_1_char16_t_() ;

/// @brief Convert to "::System::Buffers::IBufferWriter_1<char16_t>"
constexpr ::System::Buffers::IBufferWriter_1<char16_t>* i___System__Buffers__IBufferWriter_1_char16_t_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_crlf(bool  value) ;

static inline void setStaticF_newLine1(char16_t  value) ;

static inline void setStaticF_newLine2(char16_t  value) ;

static inline void setStaticF_scratchBuffer(::ArrayW<char16_t>  value) ;

static inline void setStaticF_scratchBufferUsed(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf16ValueStringBuilder() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposeImmediately", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Utf16ValueStringBuilder(::ArrayW<char16_t>  buffer, int32_t  index, bool  disposeImmediately) noexcept;

/// @brief Field DefaultBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  DefaultBufferSize{static_cast<int32_t>(0x8000)};

/// @brief Field ThreadStaticBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  ThreadStaticBufferSize{static_cast<int32_t>(0x7987)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Nullable(2)]
/// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<char16_t>  buffer;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field disposeImmediately, offset: 0xc, size: 0x1, def value: None
 bool  disposeImmediately;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Text::Utf16ValueStringBuilder, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf16ValueStringBuilder, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf16ValueStringBuilder, disposeImmediately) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Text::Utf16ValueStringBuilder) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.Utf16ValueStringBuilder/<>c__170`1<T>
class CORDL_TYPE Utf16ValueStringBuilder___c__170_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Text::Utf16ValueStringBuilder___c__170_1<T>*  __9;

/// @brief Field <>9__170_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__170_0, put=setStaticF___9__170_0)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*  __9__170_0;

static inline ::Cysharp::Text::Utf16ValueStringBuilder___c__170_1<T>* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <CreateNullableFormatter>b__170_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _CreateNullableFormatter_b__170_0(::System::Nullable_1<T>  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder___c__170_1<T>* getStaticF___9() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>* getStaticF___9__170_0() ;

static inline void setStaticF___9(::Cysharp::Text::Utf16ValueStringBuilder___c__170_1<T>*  value) ;

static inline void setStaticF___9__170_0(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16ValueStringBuilder___c__170_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder___c__170_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16ValueStringBuilder___c__170_1(Utf16ValueStringBuilder___c__170_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder___c__170_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16ValueStringBuilder___c__170_1(Utf16ValueStringBuilder___c__170_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.Utf16ValueStringBuilder/<>c
class CORDL_TYPE Utf16ValueStringBuilder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Text::Utf16ValueStringBuilder___c*  __9;

/// @brief Field <>9__52_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_0, put=setStaticF___9__52_0)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int8_t>*  __9__52_0;

/// @brief Field <>9__52_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_1, put=setStaticF___9__52_1)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int16_t>*  __9__52_1;

/// @brief Field <>9__52_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_10, put=setStaticF___9__52_10)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::TimeSpan>*  __9__52_10;

/// @brief Field <>9__52_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_11, put=setStaticF___9__52_11)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::DateTime>*  __9__52_11;

/// @brief Field <>9__52_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_12, put=setStaticF___9__52_12)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*  __9__52_12;

/// @brief Field <>9__52_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_13, put=setStaticF___9__52_13)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Decimal>*  __9__52_13;

/// @brief Field <>9__52_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_14, put=setStaticF___9__52_14)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Guid>*  __9__52_14;

/// @brief Field <>9__52_15, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_15, put=setStaticF___9__52_15)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::IntPtr>*  __9__52_15;

/// @brief Field <>9__52_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_16, put=setStaticF___9__52_16)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::UIntPtr>*  __9__52_16;

/// @brief Field <>9__52_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_2, put=setStaticF___9__52_2)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int32_t>*  __9__52_2;

/// @brief Field <>9__52_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_3, put=setStaticF___9__52_3)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int64_t>*  __9__52_3;

/// @brief Field <>9__52_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_4, put=setStaticF___9__52_4)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint8_t>*  __9__52_4;

/// @brief Field <>9__52_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_5, put=setStaticF___9__52_5)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint16_t>*  __9__52_5;

/// @brief Field <>9__52_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_6, put=setStaticF___9__52_6)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint32_t>*  __9__52_6;

/// @brief Field <>9__52_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_7, put=setStaticF___9__52_7)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint64_t>*  __9__52_7;

/// @brief Field <>9__52_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_8, put=setStaticF___9__52_8)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<float_t>*  __9__52_8;

/// @brief Field <>9__52_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_9, put=setStaticF___9__52_9)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<double_t>*  __9__52_9;

static inline ::Cysharp::Text::Utf16ValueStringBuilder___c* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_0, addr 0xb9b4444, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_0(int8_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_1, addr 0xb9b4500, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_1(int16_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_10, addr 0xb9b4a6c, size 0xa4, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_10(::System::TimeSpan  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_11, addr 0xb9b4b10, size 0xa4, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_11(::System::DateTime  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_12, addr 0xb9b4bb4, size 0xa4, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_12(::System::DateTimeOffset  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_13, addr 0xb9b4c58, size 0xcc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_13(::System::Decimal  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_14, addr 0xb9b4d24, size 0x3c, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_14(::System::Guid  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_15, addr 0xb9b4d60, size 0xc0, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_15(::System::IntPtr  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_16, addr 0xb9b4e20, size 0xc0, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_16(::System::UIntPtr  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_2, addr 0xb9b45bc, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_2(int32_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_3, addr 0xb9b4678, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_3(int64_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_4, addr 0xb9b4734, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_4(uint8_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_5, addr 0xb9b47f0, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_5(uint16_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_6, addr 0xb9b48ac, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_6(uint32_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_7, addr 0xb9b4968, size 0xbc, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_7(uint64_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_8, addr 0xb9b4a24, size 0x24, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_8(float_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__52_9, addr 0xb9b4a48, size 0x24, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__52_9(double_t  x, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// @brief Method .ctor, addr 0xb9b443c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder___c* getStaticF___9() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int8_t>* getStaticF___9__52_0() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int16_t>* getStaticF___9__52_1() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::TimeSpan>* getStaticF___9__52_10() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::DateTime>* getStaticF___9__52_11() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>* getStaticF___9__52_12() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Decimal>* getStaticF___9__52_13() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Guid>* getStaticF___9__52_14() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::IntPtr>* getStaticF___9__52_15() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::UIntPtr>* getStaticF___9__52_16() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int32_t>* getStaticF___9__52_2() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int64_t>* getStaticF___9__52_3() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint8_t>* getStaticF___9__52_4() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint16_t>* getStaticF___9__52_5() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint32_t>* getStaticF___9__52_6() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint64_t>* getStaticF___9__52_7() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<float_t>* getStaticF___9__52_8() ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<double_t>* getStaticF___9__52_9() ;

static inline void setStaticF___9(::Cysharp::Text::Utf16ValueStringBuilder___c*  value) ;

static inline void setStaticF___9__52_0(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int8_t>*  value) ;

static inline void setStaticF___9__52_1(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int16_t>*  value) ;

static inline void setStaticF___9__52_10(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::TimeSpan>*  value) ;

static inline void setStaticF___9__52_11(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::DateTime>*  value) ;

static inline void setStaticF___9__52_12(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*  value) ;

static inline void setStaticF___9__52_13(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Decimal>*  value) ;

static inline void setStaticF___9__52_14(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::Guid>*  value) ;

static inline void setStaticF___9__52_15(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::IntPtr>*  value) ;

static inline void setStaticF___9__52_16(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<::System::UIntPtr>*  value) ;

static inline void setStaticF___9__52_2(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int32_t>*  value) ;

static inline void setStaticF___9__52_3(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<int64_t>*  value) ;

static inline void setStaticF___9__52_4(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint8_t>*  value) ;

static inline void setStaticF___9__52_5(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint16_t>*  value) ;

static inline void setStaticF___9__52_6(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint32_t>*  value) ;

static inline void setStaticF___9__52_7(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<uint64_t>*  value) ;

static inline void setStaticF___9__52_8(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<float_t>*  value) ;

static inline void setStaticF___9__52_9(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<double_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16ValueStringBuilder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16ValueStringBuilder___c(Utf16ValueStringBuilder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16ValueStringBuilder___c(Utf16ValueStringBuilder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::Utf16ValueStringBuilder___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
// [NullableContext(0)]
// Dependencies System.Object
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.Utf16ValueStringBuilder/FormatterCache`1<T>
class CORDL_TYPE Utf16ValueStringBuilder_FormatterCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field TryFormatDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TryFormatDelegate, put=setStaticF_TryFormatDelegate)) ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<T>*  TryFormatDelegate;

/// @brief Method TryFormatDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFormatDefault(/* [Nullable(1)] */ T  value, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

/// @brief Method TryFormatString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFormatString(/* [Nullable(1)] */ T  value, ::System::Span_1<char16_t>  dest, ::by_ref<int32_t>  written, ::System::ReadOnlySpan_1<char16_t>  format) ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<T>* getStaticF_TryFormatDelegate() ;

static inline void setStaticF_TryFormatDelegate(::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16ValueStringBuilder_FormatterCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder_FormatterCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16ValueStringBuilder_FormatterCache_1(Utf16ValueStringBuilder_FormatterCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder_FormatterCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16ValueStringBuilder_FormatterCache_1(Utf16ValueStringBuilder_FormatterCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
// [NullableContext(0)]
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.Utf16ValueStringBuilder/ExceptionUtil
class CORDL_TYPE Utf16ValueStringBuilder_ExceptionUtil : public ::System::Object {
public:
// Declarations
/// [NullableContext(1)]
/// @brief Method ThrowArgumentOutOfRangeException, addr 0xb9b332c, size 0x44, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::StringW  paramName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16ValueStringBuilder_ExceptionUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder_ExceptionUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16ValueStringBuilder_ExceptionUtil(Utf16ValueStringBuilder_ExceptionUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder_ExceptionUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16ValueStringBuilder_ExceptionUtil(Utf16ValueStringBuilder_ExceptionUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::Utf16ValueStringBuilder_ExceptionUtil) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
// [NullableContext(0)]
// Dependencies System.MulticastDelegate
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.Utf16ValueStringBuilder/TryFormat`1<T>
class CORDL_TYPE Utf16ValueStringBuilder_TryFormat_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [Nullable(1)] */ T  value, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<int32_t>  charsWritten, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Invoke(/* [Nullable(1)] */ T  value, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format) ;

static inline ::Cysharp::Text::Utf16ValueStringBuilder_TryFormat_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf16ValueStringBuilder_TryFormat_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder_TryFormat_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf16ValueStringBuilder_TryFormat_1(Utf16ValueStringBuilder_TryFormat_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf16ValueStringBuilder_TryFormat_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf16ValueStringBuilder_TryFormat_1(Utf16ValueStringBuilder_TryFormat_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
