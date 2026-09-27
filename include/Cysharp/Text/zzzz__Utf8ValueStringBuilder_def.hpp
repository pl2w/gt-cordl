#pragma once
// IWYU pragma private; include "Cysharp/Text/Utf8ValueStringBuilder.hpp"
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
CORDL_MODULE_EXPORT(Utf8ValueStringBuilder)
namespace Cysharp::Text {
template<typename T>
class IResettableBufferWriter_1;
}
namespace Cysharp::Text {
template<typename T>
class Utf8ValueStringBuilder_FormatterCache_1;
}
namespace Cysharp::Text {
template<typename T>
class Utf8ValueStringBuilder_TryFormat_1;
}
namespace Cysharp::Text {
class Utf8ValueStringBuilder___c;
}
namespace Cysharp::Text {
template<typename T>
class Utf8ValueStringBuilder___c__150_1;
}
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
namespace System::Buffers {
struct StandardFormat;
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
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
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
template<typename T>
class Utf8ValueStringBuilder_FormatterCache_1;
}
namespace Cysharp::Text {
template<typename T>
class Utf8ValueStringBuilder_TryFormat_1;
}
namespace Cysharp::Text {
class Utf8ValueStringBuilder___c;
}
namespace Cysharp::Text {
template<typename T>
class Utf8ValueStringBuilder___c__150_1;
}
namespace Cysharp::Text {
struct Utf8ValueStringBuilder;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1);
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1);
MARK_REF_T(::Cysharp::Text::Utf8ValueStringBuilder___c*);
MARK_GEN_REF_T_PTR(::Cysharp::Text::Utf8ValueStringBuilder___c__150_1);
MARK_VAL_T(::Cysharp::Text::Utf8ValueStringBuilder);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1, "Cysharp.Text", "Utf8ValueStringBuilder/FormatterCache`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1, "Cysharp.Text", "Utf8ValueStringBuilder/TryFormat`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf8ValueStringBuilder___c*, "Cysharp.Text", "Utf8ValueStringBuilder/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Text::Utf8ValueStringBuilder___c__150_1, "Cysharp.Text", "Utf8ValueStringBuilder/<>c__150`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Text::Utf8ValueStringBuilder, "Cysharp.Text", "Utf8ValueStringBuilder");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies 
namespace Cysharp::Text {
// Is value type: true
// CS Name: Cysharp.Text.Utf8ValueStringBuilder
struct CORDL_TYPE Utf8ValueStringBuilder {
public:
// Declarations
template<typename T>
using FormatterCache_1 = ::Cysharp::Text::Utf8ValueStringBuilder_FormatterCache_1<T>;

template<typename T>
using TryFormat_1 = ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>;

using __c = ::Cysharp::Text::Utf8ValueStringBuilder___c;

template<typename T>
using __c__150_1 = ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field UTF8NoBom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UTF8NoBom, put=setStaticF_UTF8NoBom)) ::System::Text::Encoding*  UTF8NoBom;

/// @brief Field crlf, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_crlf, put=setStaticF_crlf)) bool  crlf;

/// @brief Field newLine1, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_newLine1, put=setStaticF_newLine1)) uint8_t  newLine1;

/// @brief Field newLine2, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_newLine2, put=setStaticF_newLine2)) uint8_t  newLine2;

/// @brief Field scratchBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scratchBuffer, put=setStaticF_scratchBuffer)) ::ArrayW<uint8_t>  scratchBuffer;

/// @brief Field scratchBufferUsed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_scratchBufferUsed, put=setStaticF_scratchBufferUsed)) bool  scratchBufferUsed;

/// @brief Convert operator to "::Cysharp::Text::IResettableBufferWriter_1<uint8_t>"
constexpr operator  ::Cysharp::Text::IResettableBufferWriter_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<uint8_t>"
constexpr operator  ::System::Buffers::IBufferWriter_1<uint8_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Advance, addr 0xb9bc4a4, size 0x10, virtual true, abstract: false, final true
inline void Advance(int32_t  count) ;

/// @brief Method Append, addr 0xb9bc658, size 0xac, virtual false, abstract: false, final false
inline void Append(::StringW  value) ;

/// @brief Method Append, addr 0xb9bc528, size 0x130, virtual false, abstract: false, final false
inline void Append(::StringW  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method Append, addr 0xb9b6d0c, size 0x1f8, virtual false, abstract: false, final false
inline void Append(::System::DateTime  value) ;

/// @brief Method Append, addr 0xb9b6f04, size 0x1fc, virtual false, abstract: false, final false
inline void Append(::System::DateTime  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b71f0, size 0x204, virtual false, abstract: false, final false
inline void Append(::System::DateTimeOffset  value) ;

/// @brief Method Append, addr 0xb9b73f4, size 0x210, virtual false, abstract: false, final false
inline void Append(::System::DateTimeOffset  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b770c, size 0x204, virtual false, abstract: false, final false
inline void Append(::System::Decimal  value) ;

/// @brief Method Append, addr 0xb9b7910, size 0x210, virtual false, abstract: false, final false
inline void Append(::System::Decimal  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9bad30, size 0x204, virtual false, abstract: false, final false
inline void Append(::System::Guid  value) ;

/// @brief Method Append, addr 0xb9baf34, size 0x210, virtual false, abstract: false, final false
inline void Append(::System::Guid  value, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method Append, addr 0xb9bc7f0, size 0x19c, virtual false, abstract: false, final false
inline void Append(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method Append, addr 0xb9b99a0, size 0x1f8, virtual false, abstract: false, final false
inline void Append(::System::TimeSpan  value) ;

/// @brief Method Append, addr 0xb9b9b98, size 0x1fc, virtual false, abstract: false, final false
inline void Append(::System::TimeSpan  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Append(T  value) ;

/// @brief Method Append, addr 0xb9bb24c, size 0x1f8, virtual false, abstract: false, final false
inline void Append(bool  value) ;

/// @brief Method Append, addr 0xb9bb444, size 0x1fc, virtual false, abstract: false, final false
inline void Append(bool  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9bbfa4, size 0x130, virtual false, abstract: false, final false
inline void Append(char16_t  value) ;

/// @brief Method Append, addr 0xb9bc0d4, size 0x2d8, virtual false, abstract: false, final false
inline void Append(char16_t  value, int32_t  repeatCount) ;

/// @brief Method Append, addr 0xb9b7c28, size 0x200, virtual false, abstract: false, final false
inline void Append(double_t  value) ;

/// @brief Method Append, addr 0xb9b7e28, size 0x1fc, virtual false, abstract: false, final false
inline void Append(double_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b94ac, size 0x200, virtual false, abstract: false, final false
inline void Append(float_t  value) ;

/// @brief Method Append, addr 0xb9b96ac, size 0x1fc, virtual false, abstract: false, final false
inline void Append(float_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b811c, size 0x1f8, virtual false, abstract: false, final false
inline void Append(int16_t  value) ;

/// @brief Method Append, addr 0xb9b8314, size 0x1fc, virtual false, abstract: false, final false
inline void Append(int16_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b8600, size 0x1f8, virtual false, abstract: false, final false
inline void Append(int32_t  value) ;

/// @brief Method Append, addr 0xb9b87f8, size 0x1fc, virtual false, abstract: false, final false
inline void Append(int32_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b8ae4, size 0x1f8, virtual false, abstract: false, final false
inline void Append(int64_t  value) ;

/// @brief Method Append, addr 0xb9b8cdc, size 0x1fc, virtual false, abstract: false, final false
inline void Append(int64_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b8fc8, size 0x1f8, virtual false, abstract: false, final false
inline void Append(int8_t  value) ;

/// @brief Method Append, addr 0xb9b91c0, size 0x1fc, virtual false, abstract: false, final false
inline void Append(int8_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b9e84, size 0x1f8, virtual false, abstract: false, final false
inline void Append(uint16_t  value) ;

/// @brief Method Append, addr 0xb9ba07c, size 0x1fc, virtual false, abstract: false, final false
inline void Append(uint16_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9ba368, size 0x1f8, virtual false, abstract: false, final false
inline void Append(uint32_t  value) ;

/// @brief Method Append, addr 0xb9ba560, size 0x1fc, virtual false, abstract: false, final false
inline void Append(uint32_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9ba84c, size 0x1f8, virtual false, abstract: false, final false
inline void Append(uint64_t  value) ;

/// @brief Method Append, addr 0xb9baa44, size 0x1fc, virtual false, abstract: false, final false
inline void Append(uint64_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method Append, addr 0xb9b65ac, size 0x1f8, virtual false, abstract: false, final false
inline void Append(uint8_t  value) ;

/// @brief Method Append, addr 0xb9b6a20, size 0x1fc, virtual false, abstract: false, final false
inline void Append(uint8_t  value, ::System::Buffers::StandardFormat  format) ;

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

/// @brief Method AppendFormatInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendFormatInternal(T  arg, int32_t  width, ::System::Buffers::StandardFormat  format, ::StringW  argName) ;

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

/// @brief Method AppendLine, addr 0xb9bbe0c, size 0x198, virtual false, abstract: false, final false
inline void AppendLine() ;

/// @brief Method AppendLine, addr 0xb9bc704, size 0xec, virtual false, abstract: false, final false
inline void AppendLine(::StringW  value) ;

/// @brief Method AppendLine, addr 0xb9b7100, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTime  value) ;

/// @brief Method AppendLine, addr 0xb9b7174, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTime  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b7604, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTimeOffset  value) ;

/// @brief Method AppendLine, addr 0xb9b7680, size 0x8c, virtual false, abstract: false, final false
inline void AppendLine(::System::DateTimeOffset  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b7b20, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::Decimal  value) ;

/// @brief Method AppendLine, addr 0xb9b7b9c, size 0x8c, virtual false, abstract: false, final false
inline void AppendLine(::System::Decimal  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9bb144, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::Guid  value) ;

/// @brief Method AppendLine, addr 0xb9bb1c0, size 0x8c, virtual false, abstract: false, final false
inline void AppendLine(::System::Guid  value, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method AppendLine, addr 0xb9bc98c, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::ReadOnlySpan_1<char16_t>  value) ;

/// @brief Method AppendLine, addr 0xb9b9d94, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(::System::TimeSpan  value) ;

/// @brief Method AppendLine, addr 0xb9b9e08, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(::System::TimeSpan  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void AppendLine(T  value) ;

/// @brief Method AppendLine, addr 0xb9bb640, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(bool  value) ;

/// @brief Method AppendLine, addr 0xb9bb6b4, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(bool  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9bc4b4, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(char16_t  value) ;

/// @brief Method AppendLine, addr 0xb9b8024, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(double_t  value) ;

/// @brief Method AppendLine, addr 0xb9b8098, size 0x84, virtual false, abstract: false, final false
inline void AppendLine(double_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b98a8, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(float_t  value) ;

/// @brief Method AppendLine, addr 0xb9b991c, size 0x84, virtual false, abstract: false, final false
inline void AppendLine(float_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b8510, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int16_t  value) ;

/// @brief Method AppendLine, addr 0xb9b8584, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int16_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b89f4, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int32_t  value) ;

/// @brief Method AppendLine, addr 0xb9b8a68, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int32_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b8ed8, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int64_t  value) ;

/// @brief Method AppendLine, addr 0xb9b8f4c, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int64_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b93bc, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(int8_t  value) ;

/// @brief Method AppendLine, addr 0xb9b9430, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(int8_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9ba278, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint16_t  value) ;

/// @brief Method AppendLine, addr 0xb9ba2ec, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint16_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9ba75c, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint32_t  value) ;

/// @brief Method AppendLine, addr 0xb9ba7d0, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint32_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9bac40, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint64_t  value) ;

/// @brief Method AppendLine, addr 0xb9bacb4, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint64_t  value, ::System::Buffers::StandardFormat  format) ;

/// @brief Method AppendLine, addr 0xb9b6c1c, size 0x74, virtual false, abstract: false, final false
inline void AppendLine(uint8_t  value) ;

/// @brief Method AppendLine, addr 0xb9b6c90, size 0x7c, virtual false, abstract: false, final false
inline void AppendLine(uint8_t  value, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method AppendLiteral, addr 0xb9bca08, size 0x13c, virtual false, abstract: false, final false
inline void AppendLiteral(::System::ReadOnlySpan_1<uint8_t>  value) ;

/// [NullableContext(0)]
/// @brief Method AsArraySegment, addr 0xb9bb964, size 0x68, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> AsArraySegment() ;

/// [NullableContext(0)]
/// @brief Method AsMemory, addr 0xb9bb8f0, size 0x74, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<uint8_t> AsMemory() ;

/// [NullableContext(0)]
/// @brief Method AsSpan, addr 0xb9bb848, size 0xa8, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<uint8_t> AsSpan() ;

/// @brief Method Clear, addr 0xb9bbd7c, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyTo, addr 0xb9bcb44, size 0x160, virtual false, abstract: false, final false
inline void CopyTo(::System::Buffers::IBufferWriter_1<uint8_t>*  bufferWriter) ;

/// @brief Method CreateFormatter, addr 0xb9b4ee0, size 0x16cc, virtual false, abstract: false, final false
static inline ::System::Object* CreateFormatter(::System::Type*  type) ;

/// [NullableContext(0)]
/// @brief Method CreateNullableFormatter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>* CreateNullableFormatter() ;

/// @brief Method Cysharp.Text.IResettableBufferWriter<System.Byte>.Reset, addr 0xb9bcf50, size 0x8, virtual true, abstract: false, final true
inline void Cysharp_Text_IResettableBufferWriter_System_Byte__Reset() ;

/// @brief Method Dispose, addr 0xb9bbc28, size 0x154, virtual true, abstract: false, final true
inline void Dispose() ;

/// [NullableContext(0)]
/// @brief Method EnableNullableFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EnableNullableFormat() ;

/// [NullableContext(0)]
/// @brief Method GetMemory, addr 0xb9bceb0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Memory_1<uint8_t> GetMemory(int32_t  sizeHint) ;

/// [NullableContext(0)]
/// @brief Method GetSpan, addr 0xb9bc3ac, size 0xf8, virtual true, abstract: false, final true
inline ::System::Span_1<uint8_t> GetSpan(int32_t  sizeHint) ;

/// @brief Method Grow, addr 0xb9b67a4, size 0x224, virtual false, abstract: false, final false
inline void Grow(int32_t  sizeHint) ;

/// @brief Method RegisterTryFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void RegisterTryFormat(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*  formatMethod) ;

/// @brief Method ThrowArgumentException, addr 0xb9b69c8, size 0x58, virtual false, abstract: false, final false
inline void ThrowArgumentException(::StringW  paramName) ;

/// @brief Method ThrowFormatException, addr 0xb9bcf58, size 0x4c, virtual false, abstract: false, final false
inline void ThrowFormatException() ;

/// @brief Method ThrowNestedException, addr 0xb9bbbc8, size 0x60, virtual false, abstract: false, final false
static inline void ThrowNestedException() ;

/// @brief Method ToString, addr 0xb9bce0c, size 0xa4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [NullableContext(0)]
/// @brief Method TryCopyTo, addr 0xb9bcca4, size 0x10c, virtual false, abstract: false, final false
inline bool TryCopyTo(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryGrow, addr 0xb9bbd84, size 0x88, virtual false, abstract: false, final false
inline void TryGrow(int32_t  sizeHint) ;

/// @brief Method WriteToAsync, addr 0xb9bcdb0, size 0x28, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteToAsync(::System::IO::Stream*  stream) ;

/// @brief Method WriteToAsync, addr 0xb9bcdd8, size 0x34, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteToAsync(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xb9bb9cc, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(bool  disposeImmediately) ;

static inline ::System::Text::Encoding* getStaticF_UTF8NoBom() ;

static inline bool getStaticF_crlf() ;

static inline uint8_t getStaticF_newLine1() ;

static inline uint8_t getStaticF_newLine2() ;

static inline ::ArrayW<uint8_t> getStaticF_scratchBuffer() ;

static inline bool getStaticF_scratchBufferUsed() ;

/// @brief Method get_Length, addr 0xb9bb840, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::Cysharp::Text::IResettableBufferWriter_1<uint8_t>"
constexpr ::Cysharp::Text::IResettableBufferWriter_1<uint8_t>* i___Cysharp__Text__IResettableBufferWriter_1_uint8_t_() ;

/// @brief Convert to "::System::Buffers::IBufferWriter_1<uint8_t>"
constexpr ::System::Buffers::IBufferWriter_1<uint8_t>* i___System__Buffers__IBufferWriter_1_uint8_t_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_UTF8NoBom(::System::Text::Encoding*  value) ;

static inline void setStaticF_crlf(bool  value) ;

static inline void setStaticF_newLine1(uint8_t  value) ;

static inline void setStaticF_newLine2(uint8_t  value) ;

static inline void setStaticF_scratchBuffer(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_scratchBufferUsed(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf8ValueStringBuilder() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposeImmediately", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Utf8ValueStringBuilder(::ArrayW<uint8_t>  buffer, int32_t  index, bool  disposeImmediately) noexcept;

/// @brief Field DefaultBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  DefaultBufferSize{static_cast<int32_t>(0x10000)};

/// @brief Field ThreadStaticBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  ThreadStaticBufferSize{static_cast<int32_t>(0xfbbc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26394};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Nullable(2)]
/// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field disposeImmediately, offset: 0xc, size: 0x1, def value: None
 bool  disposeImmediately;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Text::Utf8ValueStringBuilder, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf8ValueStringBuilder, index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Text::Utf8ValueStringBuilder, disposeImmediately) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Text::Utf8ValueStringBuilder) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.Utf8ValueStringBuilder/<>c__150`1<T>
class CORDL_TYPE Utf8ValueStringBuilder___c__150_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*  __9;

/// @brief Field <>9__150_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__150_0, put=setStaticF___9__150_0)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*  __9__150_0;

static inline ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <CreateNullableFormatter>b__150_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _CreateNullableFormatter_b__150_0(::System::Nullable_1<T>  x, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>* getStaticF___9() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>* getStaticF___9__150_0() ;

static inline void setStaticF___9(::Cysharp::Text::Utf8ValueStringBuilder___c__150_1<T>*  value) ;

static inline void setStaticF___9__150_0(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Nullable_1<T>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8ValueStringBuilder___c__150_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder___c__150_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8ValueStringBuilder___c__150_1(Utf8ValueStringBuilder___c__150_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder___c__150_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8ValueStringBuilder___c__150_1(Utf8ValueStringBuilder___c__150_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.Utf8ValueStringBuilder/<>c
class CORDL_TYPE Utf8ValueStringBuilder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Text::Utf8ValueStringBuilder___c*  __9;

/// @brief Field <>9__36_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_0, put=setStaticF___9__36_0)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>*  __9__36_0;

/// @brief Field <>9__36_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_1, put=setStaticF___9__36_1)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>*  __9__36_1;

/// @brief Field <>9__36_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_10, put=setStaticF___9__36_10)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>*  __9__36_10;

/// @brief Field <>9__36_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_11, put=setStaticF___9__36_11)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>*  __9__36_11;

/// @brief Field <>9__36_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_12, put=setStaticF___9__36_12)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>*  __9__36_12;

/// @brief Field <>9__36_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_13, put=setStaticF___9__36_13)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>*  __9__36_13;

/// @brief Field <>9__36_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_14, put=setStaticF___9__36_14)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>*  __9__36_14;

/// @brief Field <>9__36_15, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_15, put=setStaticF___9__36_15)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>*  __9__36_15;

/// @brief Field <>9__36_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_16, put=setStaticF___9__36_16)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>*  __9__36_16;

/// @brief Field <>9__36_17, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_17, put=setStaticF___9__36_17)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>*  __9__36_17;

/// @brief Field <>9__36_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_2, put=setStaticF___9__36_2)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*  __9__36_2;

/// @brief Field <>9__36_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_3, put=setStaticF___9__36_3)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>*  __9__36_3;

/// @brief Field <>9__36_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_4, put=setStaticF___9__36_4)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>*  __9__36_4;

/// @brief Field <>9__36_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_5, put=setStaticF___9__36_5)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>*  __9__36_5;

/// @brief Field <>9__36_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_6, put=setStaticF___9__36_6)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>*  __9__36_6;

/// @brief Field <>9__36_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_7, put=setStaticF___9__36_7)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>*  __9__36_7;

/// @brief Field <>9__36_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_8, put=setStaticF___9__36_8)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>*  __9__36_8;

/// @brief Field <>9__36_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_9, put=setStaticF___9__36_9)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>*  __9__36_9;

static inline ::Cysharp::Text::Utf8ValueStringBuilder___c* New_ctor() ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_0, addr 0xb9bd014, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_0(uint8_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_1, addr 0xb9bd09c, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_1(::System::DateTime  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_10, addr 0xb9bd594, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_10(::System::TimeSpan  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_11, addr 0xb9bd61c, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_11(uint16_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_12, addr 0xb9bd6a4, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_12(uint32_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_13, addr 0xb9bd72c, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_13(uint64_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_14, addr 0xb9bd7b4, size 0x98, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_14(::System::Guid  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_15, addr 0xb9bd84c, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_15(bool  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_16, addr 0xb9bd8d4, size 0xf8, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_16(::System::IntPtr  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_17, addr 0xb9bd9cc, size 0xf8, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_17(::System::UIntPtr  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_2, addr 0xb9bd124, size 0x98, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_2(::System::DateTimeOffset  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_3, addr 0xb9bd1bc, size 0x98, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_3(::System::Decimal  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_4, addr 0xb9bd254, size 0x90, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_4(double_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_5, addr 0xb9bd2e4, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_5(int16_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_6, addr 0xb9bd36c, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_6(int32_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_7, addr 0xb9bd3f4, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_7(int64_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_8, addr 0xb9bd47c, size 0x88, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_8(int8_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// [NullableContext(0)]
/// @brief Method <CreateFormatter>b__36_9, addr 0xb9bd504, size 0x90, virtual false, abstract: false, final false
inline bool _CreateFormatter_b__36_9(float_t  x, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

/// @brief Method .ctor, addr 0xb9bd00c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder___c* getStaticF___9() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>* getStaticF___9__36_0() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>* getStaticF___9__36_1() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>* getStaticF___9__36_10() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>* getStaticF___9__36_11() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>* getStaticF___9__36_12() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>* getStaticF___9__36_13() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>* getStaticF___9__36_14() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>* getStaticF___9__36_15() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>* getStaticF___9__36_16() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>* getStaticF___9__36_17() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>* getStaticF___9__36_2() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>* getStaticF___9__36_3() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>* getStaticF___9__36_4() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>* getStaticF___9__36_5() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>* getStaticF___9__36_6() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>* getStaticF___9__36_7() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>* getStaticF___9__36_8() ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>* getStaticF___9__36_9() ;

static inline void setStaticF___9(::Cysharp::Text::Utf8ValueStringBuilder___c*  value) ;

static inline void setStaticF___9__36_0(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint8_t>*  value) ;

static inline void setStaticF___9__36_1(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTime>*  value) ;

static inline void setStaticF___9__36_10(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::TimeSpan>*  value) ;

static inline void setStaticF___9__36_11(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint16_t>*  value) ;

static inline void setStaticF___9__36_12(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint32_t>*  value) ;

static inline void setStaticF___9__36_13(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<uint64_t>*  value) ;

static inline void setStaticF___9__36_14(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Guid>*  value) ;

static inline void setStaticF___9__36_15(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<bool>*  value) ;

static inline void setStaticF___9__36_16(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::IntPtr>*  value) ;

static inline void setStaticF___9__36_17(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::UIntPtr>*  value) ;

static inline void setStaticF___9__36_2(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::DateTimeOffset>*  value) ;

static inline void setStaticF___9__36_3(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<::System::Decimal>*  value) ;

static inline void setStaticF___9__36_4(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<double_t>*  value) ;

static inline void setStaticF___9__36_5(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int16_t>*  value) ;

static inline void setStaticF___9__36_6(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int32_t>*  value) ;

static inline void setStaticF___9__36_7(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int64_t>*  value) ;

static inline void setStaticF___9__36_8(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<int8_t>*  value) ;

static inline void setStaticF___9__36_9(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8ValueStringBuilder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8ValueStringBuilder___c(Utf8ValueStringBuilder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8ValueStringBuilder___c(Utf8ValueStringBuilder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::Utf8ValueStringBuilder___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
// [NullableContext(0)]
// Dependencies System.Object
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.Utf8ValueStringBuilder/FormatterCache`1<T>
class CORDL_TYPE Utf8ValueStringBuilder_FormatterCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field TryFormatDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TryFormatDelegate, put=setStaticF_TryFormatDelegate)) ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*  TryFormatDelegate;

/// @brief Method TryFormatDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFormatDefault(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  dest, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>* getStaticF_TryFormatDelegate() ;

static inline void setStaticF_TryFormatDelegate(::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8ValueStringBuilder_FormatterCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder_FormatterCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8ValueStringBuilder_FormatterCache_1(Utf8ValueStringBuilder_FormatterCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder_FormatterCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8ValueStringBuilder_FormatterCache_1(Utf8ValueStringBuilder_FormatterCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
// [NullableContext(0)]
// Dependencies System.MulticastDelegate
namespace Cysharp::Text {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Text.Utf8ValueStringBuilder/TryFormat`1<T>
class CORDL_TYPE Utf8ValueStringBuilder_TryFormat_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<int32_t>  written, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Invoke(/* [Nullable(1)] */ T  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  written, ::System::Buffers::StandardFormat  format) ;

static inline ::Cysharp::Text::Utf8ValueStringBuilder_TryFormat_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utf8ValueStringBuilder_TryFormat_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder_TryFormat_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utf8ValueStringBuilder_TryFormat_1(Utf8ValueStringBuilder_TryFormat_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utf8ValueStringBuilder_TryFormat_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utf8ValueStringBuilder_TryFormat_1(Utf8ValueStringBuilder_TryFormat_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Text
