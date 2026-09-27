#pragma once
// IWYU pragma private; include "WebSocketSharp/Ext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ext)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct StringComparison;
}
namespace System {
class Uri;
}
namespace WebSocketSharp::Net {
class CookieCollection;
}
namespace WebSocketSharp {
struct ByteOrder;
}
namespace WebSocketSharp {
struct CloseStatusCode;
}
namespace WebSocketSharp {
struct CompressionMethod;
}
namespace WebSocketSharp {
class Ext__SplitHeaderValue_d__58;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass18_0;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass55_0;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass56_0;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass56_1;
}
namespace WebSocketSharp {
struct Opcode;
}
// Forward declare root types
namespace WebSocketSharp {
class Ext;
}
namespace WebSocketSharp {
class Ext__SplitHeaderValue_d__58;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass18_0;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass55_0;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass56_0;
}
namespace WebSocketSharp {
class Ext___c__DisplayClass56_1;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Ext*);
MARK_REF_T(::WebSocketSharp::Ext__SplitHeaderValue_d__58*);
MARK_REF_T(::WebSocketSharp::Ext___c__DisplayClass18_0*);
MARK_REF_T(::WebSocketSharp::Ext___c__DisplayClass55_0*);
MARK_REF_T(::WebSocketSharp::Ext___c__DisplayClass56_0*);
MARK_REF_T(::WebSocketSharp::Ext___c__DisplayClass56_1*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Ext*, "WebSocketSharp", "Ext");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Ext__SplitHeaderValue_d__58*, "WebSocketSharp", "Ext/<SplitHeaderValue>d__58");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Ext___c__DisplayClass18_0*, "WebSocketSharp", "Ext/<>c__DisplayClass18_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Ext___c__DisplayClass55_0*, "WebSocketSharp", "Ext/<>c__DisplayClass55_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Ext___c__DisplayClass56_0*, "WebSocketSharp", "Ext/<>c__DisplayClass56_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Ext___c__DisplayClass56_1*, "WebSocketSharp", "Ext/<>c__DisplayClass56_1");
// [Extension]
// Dependencies System.EventArgs, System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Ext
class CORDL_TYPE Ext : public ::System::Object {
public:
// Declarations
using _SplitHeaderValue_d__58 = ::WebSocketSharp::Ext__SplitHeaderValue_d__58;

using __c__DisplayClass18_0 = ::WebSocketSharp::Ext___c__DisplayClass18_0;

using __c__DisplayClass55_0 = ::WebSocketSharp::Ext___c__DisplayClass55_0;

using __c__DisplayClass56_0 = ::WebSocketSharp::Ext___c__DisplayClass56_0;

using __c__DisplayClass56_1 = ::WebSocketSharp::Ext___c__DisplayClass56_1;

/// @brief Field _last, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__last, put=setStaticF__last)) ::ArrayW<uint8_t>  _last;

/// @brief Field _maxRetry, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__maxRetry, put=setStaticF__maxRetry)) int32_t  _maxRetry;

/// [Extension]
/// @brief Method Append, addr 0xb9745d8, size 0x134, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Append(uint16_t  code, ::StringW  reason) ;

/// [Extension]
/// @brief Method Compress, addr 0xb974790, size 0x74, virtual false, abstract: false, final false
static inline ::System::IO::Stream* Compress(::System::IO::Stream*  stream, ::WebSocketSharp::CompressionMethod  method) ;

/// [Extension]
/// @brief Method Contains, addr 0xb97483c, size 0x110, virtual false, abstract: false, final false
static inline bool Contains(::System::Collections::Specialized::NameValueCollection*  collection, ::StringW  name, ::StringW  value, ::System::StringComparison  comparisonTypeForValue) ;

/// [Extension]
/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool Contains(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Func_2<T,bool>*  condition) ;

/// [Extension]
/// @brief Method Contains, addr 0xb974804, size 0x38, virtual false, abstract: false, final false
static inline bool Contains(::StringW  value, /* [ParamArray] */ ::ArrayW<char16_t>  anyOf) ;

/// [Extension]
/// @brief Method ContainsTwice, addr 0xb97494c, size 0x110, virtual false, abstract: false, final false
static inline bool ContainsTwice(::ArrayW<::StringW>  values) ;

/// [Extension]
/// @brief Method CopyTo, addr 0xb973dc8, size 0xe0, virtual false, abstract: false, final false
static inline void CopyTo(::System::IO::Stream*  sourceStream, ::System::IO::Stream*  destinationStream, int32_t  bufferLength) ;

/// [Extension]
/// @brief Method Decompress, addr 0xb974a64, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Decompress(::ArrayW<uint8_t>  data, ::WebSocketSharp::CompressionMethod  method) ;

/// [Extension]
/// @brief Method DecompressToArray, addr 0xb974ad8, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> DecompressToArray(::System::IO::Stream*  stream, ::WebSocketSharp::CompressionMethod  method) ;

/// [Extension]
/// @brief Method Emit, addr 0xb974d38, size 0x1c, virtual false, abstract: false, final false
static inline void Emit(::System::EventHandler*  eventHandler, ::System::Object*  sender, ::System::EventArgs*  e) ;

/// [Extension]
/// @brief Method Emit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEventArgs>
requires(::cordl_internals::type_constraint<TEventArgs, ::System::EventArgs*>)
static inline void Emit(::System::EventHandler_1<TEventArgs>*  eventHandler, ::System::Object*  sender, TEventArgs  e) ;

/// [Extension]
/// @brief Method GetAbsolutePath, addr 0xb974d54, size 0x108, virtual false, abstract: false, final false
static inline ::StringW GetAbsolutePath(::System::Uri*  uri) ;

/// [Extension]
/// @brief Method GetCookies, addr 0xb974e5c, size 0xb4, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::CookieCollection* GetCookies(::System::Collections::Specialized::NameValueCollection*  headers, bool  response) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xb975108, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::WebSocketSharp::CloseStatusCode  code) ;

/// [Extension]
/// @brief Method GetUTF8EncodedBytes, addr 0xb9751e4, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GetUTF8EncodedBytes(::StringW  s) ;

/// [Extension]
/// @brief Method GetValue, addr 0xb975214, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetValue(::StringW  nameAndValue, char16_t  separator, bool  unquote) ;

/// [Extension]
/// @brief Method IsCompressionExtension, addr 0xb9753c4, size 0xa8, virtual false, abstract: false, final false
static inline bool IsCompressionExtension(::StringW  value, ::WebSocketSharp::CompressionMethod  method) ;

/// [Extension]
/// @brief Method IsControl, addr 0xb9755cc, size 0x10, virtual false, abstract: false, final false
static inline bool IsControl(uint8_t  opcode) ;

/// [Extension]
/// @brief Method IsData, addr 0xb9755f0, size 0x14, virtual false, abstract: false, final false
static inline bool IsData(::WebSocketSharp::Opcode  opcode) ;

/// [Extension]
/// @brief Method IsData, addr 0xb9755dc, size 0x14, virtual false, abstract: false, final false
static inline bool IsData(uint8_t  opcode) ;

/// [Extension]
/// @brief Method IsEnclosedIn, addr 0xb976db0, size 0x70, virtual false, abstract: false, final false
static inline bool IsEnclosedIn(::StringW  value, char16_t  c) ;

/// [Extension]
/// @brief Method IsEqualTo, addr 0xb975604, size 0x40, virtual false, abstract: false, final false
static inline bool IsEqualTo(int32_t  value, char16_t  c, ::System::Action_1<int32_t>*  beforeComparing) ;

/// [Extension]
/// @brief Method IsHostOrder, addr 0xb976304, size 0xc, virtual false, abstract: false, final false
static inline bool IsHostOrder(::WebSocketSharp::ByteOrder  order) ;

/// [Extension]
/// @brief Method IsNullOrEmpty, addr 0xb976e20, size 0x1c, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::StringW  value) ;

/// [Extension]
/// @brief Method IsReserved, addr 0xb975644, size 0x28, virtual false, abstract: false, final false
static inline bool IsReserved(uint16_t  code) ;

/// [Extension]
/// @brief Method IsSupported, addr 0xb97566c, size 0xb0, virtual false, abstract: false, final false
static inline bool IsSupported(uint8_t  opcode) ;

/// [Extension]
/// @brief Method IsText, addr 0xb97571c, size 0x124, virtual false, abstract: false, final false
static inline bool IsText(::StringW  value) ;

/// [Extension]
/// @brief Method IsToken, addr 0xb975840, size 0xb4, virtual false, abstract: false, final false
static inline bool IsToken(::StringW  value) ;

/// [Extension]
/// @brief Method MaybeUri, addr 0xb9758f4, size 0xa4, virtual false, abstract: false, final false
static inline bool MaybeUri(::StringW  value) ;

/// [Extension]
/// @brief Method ReadBytes, addr 0xb975998, size 0x160, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadBytes(::System::IO::Stream*  stream, int32_t  length) ;

/// [Extension]
/// @brief Method ReadBytes, addr 0xb975af8, size 0x290, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ReadBytes(::System::IO::Stream*  stream, int64_t  length, int32_t  bufferLength) ;

/// [Extension]
/// @brief Method ReadBytesAsync, addr 0xb975d88, size 0x22c, virtual false, abstract: false, final false
static inline void ReadBytesAsync(::System::IO::Stream*  stream, int32_t  length, ::System::Action_1<::ArrayW<uint8_t>>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// [Extension]
/// @brief Method ReadBytesAsync, addr 0xb975fbc, size 0x270, virtual false, abstract: false, final false
static inline void ReadBytesAsync(::System::IO::Stream*  stream, int64_t  length, int32_t  bufferLength, ::System::Action_1<::ArrayW<uint8_t>>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// [Extension]
/// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> Reverse(::ArrayW<T>  array) ;

/// [Extension]
/// @brief Method SplitHeaderValue, addr 0xb976234, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* SplitHeaderValue(::StringW  value, /* [ParamArray] */ ::ArrayW<char16_t>  separators) ;

/// [Extension]
/// @brief Method SubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> SubArray(::ArrayW<T>  array, int32_t  startIndex, int32_t  length) ;

/// [Extension]
/// @brief Method SubArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> SubArray(::ArrayW<T>  array, int64_t  startIndex, int64_t  length) ;

/// [Extension]
/// @brief Method ToByteArray, addr 0xb974b60, size 0x1d8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToByteArray(::System::IO::Stream*  stream) ;

/// [Extension]
/// @brief Method ToByteArray, addr 0xb97470c, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToByteArray(uint16_t  value, ::WebSocketSharp::ByteOrder  order) ;

/// [Extension]
/// @brief Method ToByteArray, addr 0xb976310, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToByteArray(uint64_t  value, ::WebSocketSharp::ByteOrder  order) ;

/// [Extension]
/// @brief Method ToExtensionString, addr 0xb97546c, size 0x160, virtual false, abstract: false, final false
static inline ::StringW ToExtensionString(::WebSocketSharp::CompressionMethod  method, /* [ParamArray] */ ::ArrayW<::StringW>  parameters) ;

/// [Extension]
/// @brief Method ToHostOrder, addr 0xb976404, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToHostOrder(::ArrayW<uint8_t>  source, ::WebSocketSharp::ByteOrder  sourceOrder) ;

/// [Extension]
/// @brief Method ToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::System::Collections::Generic::List_1<TSource>* ToList(::System::Collections::Generic::IEnumerable_1<TSource>*  source) ;

/// [Extension]
/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToString(::ArrayW<T>  array, ::StringW  separator) ;

/// [Extension]
/// @brief Method ToUInt16, addr 0xb976394, size 0x70, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::ArrayW<uint8_t>  source, ::WebSocketSharp::ByteOrder  sourceOrder) ;

/// [Extension]
/// @brief Method ToUInt64, addr 0xb9764f4, size 0x70, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::ArrayW<uint8_t>  source, ::WebSocketSharp::ByteOrder  sourceOrder) ;

/// [Extension]
/// @brief Method ToUri, addr 0xb9768e0, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Uri* ToUri(::StringW  value) ;

/// [Extension]
/// @brief Method TryCreateWebSocketUri, addr 0xb976564, size 0x37c, virtual false, abstract: false, final false
static inline bool TryCreateWebSocketUri(::StringW  uriString, ::by_ref<::System::Uri*>  result, ::by_ref<::StringW>  message) ;

/// [Extension]
/// @brief Method TryGetUTF8DecodedString, addr 0xb97699c, size 0xe0, virtual false, abstract: false, final false
static inline bool TryGetUTF8DecodedString(::ArrayW<uint8_t>  bytes, ::by_ref<::StringW>  s) ;

/// [Extension]
/// @brief Method TryGetUTF8EncodedBytes, addr 0xb976a7c, size 0xe0, virtual false, abstract: false, final false
static inline bool TryGetUTF8EncodedBytes(::StringW  s, ::by_ref<::ArrayW<uint8_t>>  bytes) ;

/// [Extension]
/// @brief Method Unquote, addr 0xb9752e0, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW Unquote(::StringW  value) ;

/// [Extension]
/// @brief Method Upgrades, addr 0xb976b5c, size 0xd0, virtual false, abstract: false, final false
static inline bool Upgrades(::System::Collections::Specialized::NameValueCollection*  headers, ::StringW  protocol) ;

/// [Extension]
/// @brief Method WriteBytes, addr 0xb976c2c, size 0x184, virtual false, abstract: false, final false
static inline void WriteBytes(::System::IO::Stream*  stream, ::ArrayW<uint8_t>  bytes, int32_t  bufferLength) ;

/// [Extension]
/// @brief Method compress, addr 0xb973b78, size 0x250, virtual false, abstract: false, final false
static inline ::System::IO::MemoryStream* compress(::System::IO::Stream*  stream) ;

/// [Extension]
/// @brief Method decompress, addr 0xb973ea8, size 0x184, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> decompress(::ArrayW<uint8_t>  data) ;

/// [Extension]
/// @brief Method decompress, addr 0xb9741ac, size 0x204, virtual false, abstract: false, final false
static inline ::System::IO::MemoryStream* decompress(::System::IO::Stream*  stream) ;

/// [Extension]
/// @brief Method decompressToArray, addr 0xb97402c, size 0x180, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> decompressToArray(::System::IO::Stream*  stream) ;

static inline ::ArrayW<uint8_t> getStaticF__last() ;

static inline int32_t getStaticF__maxRetry() ;

/// [Extension]
/// @brief Method isPredefinedScheme, addr 0xb9743b0, size 0x228, virtual false, abstract: false, final false
static inline bool isPredefinedScheme(::StringW  value) ;

static inline void setStaticF__last(::ArrayW<uint8_t>  value) ;

static inline void setStaticF__maxRetry(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ext(Ext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ext(Ext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::Ext) == 0x10, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Ext/<SplitHeaderValue>d__58
class CORDL_TYPE Ext__SplitHeaderValue_d__58 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW  System_Collections_Generic_IEnumerator_System_String__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::StringW  __2__current;

/// @brief Field <>3__separators, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__separators, put=__cordl_internal_set___3__separators)) ::ArrayW<char16_t>  __3__separators;

/// @brief Field <>3__value, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__value, put=__cordl_internal_set___3__value)) ::StringW  __3__value;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <buff>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__buff_5__3, put=__cordl_internal_set__buff_5__3)) ::System::Text::StringBuilder*  _buff_5__3;

/// @brief Field <c>5__7, offset 0x60, size 0x2 
 __declspec(property(get=__cordl_internal_get__c_5__7, put=__cordl_internal_set__c_5__7)) char16_t  _c_5__7;

/// @brief Field <end>5__2, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__end_5__2, put=__cordl_internal_set__end_5__2)) int32_t  _end_5__2;

/// @brief Field <escaped>5__4, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__escaped_5__4, put=__cordl_internal_set__escaped_5__4)) bool  _escaped_5__4;

/// @brief Field <i>5__6, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__6, put=__cordl_internal_set__i_5__6)) int32_t  _i_5__6;

/// @brief Field <len>5__1, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__len_5__1, put=__cordl_internal_set__len_5__1)) int32_t  _len_5__1;

/// @brief Field <quoted>5__5, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__quoted_5__5, put=__cordl_internal_set__quoted_5__5)) bool  _quoted_5__5;

/// @brief Field separators, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_separators, put=__cordl_internal_set_separators)) ::ArrayW<char16_t>  separators;

/// @brief Field value, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb9776d0, size 0x248, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::WebSocketSharp::Ext__SplitHeaderValue_d__58* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0xb977960, size 0xb8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0xb977918, size 0x8, virtual true, abstract: false, final true
inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb977a18, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb977920, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb977958, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb9776cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::StringW const& __cordl_internal_get___2__current() const;

constexpr ::StringW& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get___3__separators() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get___3__separators() ;

constexpr ::StringW const& __cordl_internal_get___3__value() const;

constexpr ::StringW& __cordl_internal_get___3__value() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__buff_5__3() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__buff_5__3() ;

constexpr char16_t const& __cordl_internal_get__c_5__7() const;

constexpr char16_t& __cordl_internal_get__c_5__7() ;

constexpr int32_t const& __cordl_internal_get__end_5__2() const;

constexpr int32_t& __cordl_internal_get__end_5__2() ;

constexpr bool const& __cordl_internal_get__escaped_5__4() const;

constexpr bool& __cordl_internal_get__escaped_5__4() ;

constexpr int32_t const& __cordl_internal_get__i_5__6() const;

constexpr int32_t& __cordl_internal_get__i_5__6() ;

constexpr int32_t const& __cordl_internal_get__len_5__1() const;

constexpr int32_t& __cordl_internal_get__len_5__1() ;

constexpr bool const& __cordl_internal_get__quoted_5__5() const;

constexpr bool& __cordl_internal_get__quoted_5__5() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_separators() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_separators() ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::StringW  value) ;

constexpr void __cordl_internal_set___3__separators(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set___3__value(::StringW  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__buff_5__3(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__c_5__7(char16_t  value) ;

constexpr void __cordl_internal_set__end_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__escaped_5__4(bool  value) ;

constexpr void __cordl_internal_set__i_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__len_5__1(int32_t  value) ;

constexpr void __cordl_internal_set__quoted_5__5(bool  value) ;

constexpr void __cordl_internal_set_separators(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb9762c0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ext__SplitHeaderValue_d__58() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ext__SplitHeaderValue_d__58", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ext__SplitHeaderValue_d__58(Ext__SplitHeaderValue_d__58 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ext__SplitHeaderValue_d__58", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ext__SplitHeaderValue_d__58(Ext__SplitHeaderValue_d__58 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30317};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::StringW  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field value, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___value;

/// @brief Field <>3__value, offset: 0x30, size: 0x8, def value: None
 ::StringW  _____3__value;

/// @brief Field separators, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___separators;

/// @brief Field <>3__separators, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<char16_t>  _____3__separators;

/// @brief Field <len>5__1, offset: 0x48, size: 0x4, def value: None
 int32_t  ____len_5__1;

/// @brief Field <end>5__2, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____end_5__2;

/// @brief Field <buff>5__3, offset: 0x50, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____buff_5__3;

/// @brief Field <escaped>5__4, offset: 0x58, size: 0x1, def value: None
 bool  ____escaped_5__4;

/// @brief Field <quoted>5__5, offset: 0x59, size: 0x1, def value: None
 bool  ____quoted_5__5;

/// @brief Field <i>5__6, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____i_5__6;

/// @brief Field <c>5__7, offset: 0x60, size: 0x2, def value: None
 char16_t  ____c_5__7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ___value) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, _____3__value) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ___separators) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, _____3__separators) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____len_5__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____end_5__2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____buff_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____escaped_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____quoted_5__5) == 0x59, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____i_5__6) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext__SplitHeaderValue_d__58, ____c_5__7) == 0x60, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Ext__SplitHeaderValue_d__58) == 0x68, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Ext/<>c__DisplayClass56_1
class CORDL_TYPE Ext___c__DisplayClass56_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::WebSocketSharp::Ext___c__DisplayClass56_0*  CS$__8__locals1;

/// @brief Field len, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int64_t  len;

static inline ::WebSocketSharp::Ext___c__DisplayClass56_1* New_ctor() ;

/// @brief Method <ReadBytesAsync>b__1, addr 0xb977304, size 0x3c8, virtual false, abstract: false, final false
inline void _ReadBytesAsync_b__1(::System::IAsyncResult*  ar) ;

constexpr ::WebSocketSharp::Ext___c__DisplayClass56_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::WebSocketSharp::Ext___c__DisplayClass56_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int64_t const& __cordl_internal_get_len() const;

constexpr int64_t& __cordl_internal_get_len() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::WebSocketSharp::Ext___c__DisplayClass56_0*  value) ;

constexpr void __cordl_internal_set_len(int64_t  value) ;

/// @brief Method .ctor, addr 0xb9772fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ext___c__DisplayClass56_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass56_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ext___c__DisplayClass56_1(Ext___c__DisplayClass56_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass56_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ext___c__DisplayClass56_1(Ext___c__DisplayClass56_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30316};

/// @brief Field len, offset: 0x10, size: 0x8, def value: None
 int64_t  ___len;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::Ext___c__DisplayClass56_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_1, ___len) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Ext___c__DisplayClass56_1) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Ext/<>c__DisplayClass56_0
class CORDL_TYPE Ext___c__DisplayClass56_0 : public ::System::Object {
public:
// Declarations
/// @brief Field buff, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buff, put=__cordl_internal_set_buff)) ::ArrayW<uint8_t>  buff;

/// @brief Field bufferLength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferLength, put=__cordl_internal_set_bufferLength)) int32_t  bufferLength;

/// @brief Field completed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::ArrayW<uint8_t>>*  completed;

/// @brief Field dest, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dest, put=__cordl_internal_set_dest)) ::System::IO::MemoryStream*  dest;

/// @brief Field error, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::System::Action_1<::System::Exception*>*  error;

/// @brief Field read, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_read, put=__cordl_internal_set_read)) ::System::Action_1<int64_t>*  read;

/// @brief Field retry, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_retry, put=__cordl_internal_set_retry)) int32_t  retry;

/// @brief Field stream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

static inline ::WebSocketSharp::Ext___c__DisplayClass56_0* New_ctor() ;

/// @brief Method <ReadBytesAsync>b__0, addr 0xb9771f0, size 0x10c, virtual false, abstract: false, final false
inline void _ReadBytesAsync_b__0(int64_t  len) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buff() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buff() ;

constexpr int32_t const& __cordl_internal_get_bufferLength() const;

constexpr int32_t& __cordl_internal_get_bufferLength() ;

constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::ArrayW<uint8_t>>*& __cordl_internal_get_completed() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_dest() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_dest() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_error() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_error() ;

constexpr ::System::Action_1<int64_t>* const& __cordl_internal_get_read() const;

constexpr ::System::Action_1<int64_t>*& __cordl_internal_get_read() ;

constexpr int32_t const& __cordl_internal_get_retry() const;

constexpr int32_t& __cordl_internal_get_retry() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_buff(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_bufferLength(int32_t  value) ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_dest(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_error(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_read(::System::Action_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_retry(int32_t  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xb97622c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ext___c__DisplayClass56_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass56_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ext___c__DisplayClass56_0(Ext___c__DisplayClass56_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass56_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ext___c__DisplayClass56_0(Ext___c__DisplayClass56_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30315};

/// @brief Field bufferLength, offset: 0x10, size: 0x4, def value: None
 int32_t  ___bufferLength;

/// @brief Field stream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field buff, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buff;

/// @brief Field retry, offset: 0x28, size: 0x4, def value: None
 int32_t  ___retry;

/// @brief Field read, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int64_t>*  ___read;

/// @brief Field completed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t>>*  ___completed;

/// @brief Field dest, offset: 0x40, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___dest;

/// @brief Field error, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___bufferLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___buff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___retry) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___read) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___completed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___dest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass56_0, ___error) == 0x48, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Ext___c__DisplayClass56_0) == 0x50, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Ext/<>c__DisplayClass55_0
class CORDL_TYPE Ext___c__DisplayClass55_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::AsyncCallback*  callback;

/// @brief Field completed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::ArrayW<uint8_t>>*  completed;

/// @brief Field error, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::System::Action_1<::System::Exception*>*  error;

/// @brief Field length, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Field offset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Field ret, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ret, put=__cordl_internal_set_ret)) ::ArrayW<uint8_t>  ret;

/// @brief Field retry, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_retry, put=__cordl_internal_set_retry)) int32_t  retry;

/// @brief Field stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

static inline ::WebSocketSharp::Ext___c__DisplayClass55_0* New_ctor() ;

/// @brief Method <ReadBytesAsync>b__0, addr 0xb976f98, size 0x258, virtual false, abstract: false, final false
inline void _ReadBytesAsync_b__0(::System::IAsyncResult*  ar) ;

constexpr ::System::AsyncCallback* const& __cordl_internal_get_callback() const;

constexpr ::System::AsyncCallback*& __cordl_internal_get_callback() ;

constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::ArrayW<uint8_t>>*& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_error() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_error() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_ret() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_ret() ;

constexpr int32_t const& __cordl_internal_get_retry() const;

constexpr int32_t& __cordl_internal_get_retry() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_callback(::System::AsyncCallback*  value) ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_error(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

constexpr void __cordl_internal_set_ret(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_retry(int32_t  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xb975fb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ext___c__DisplayClass55_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass55_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ext___c__DisplayClass55_0(Ext___c__DisplayClass55_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass55_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ext___c__DisplayClass55_0(Ext___c__DisplayClass55_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30314};

/// @brief Field stream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field retry, offset: 0x18, size: 0x4, def value: None
 int32_t  ___retry;

/// @brief Field ret, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___ret;

/// @brief Field offset, offset: 0x28, size: 0x4, def value: None
 int32_t  ___offset;

/// @brief Field length, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___length;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::AsyncCallback*  ___callback;

/// @brief Field completed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t>>*  ___completed;

/// @brief Field error, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___retry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___ret) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___length) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___completed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass55_0, ___error) == 0x40, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Ext___c__DisplayClass55_0) == 0x48, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Ext/<>c__DisplayClass18_0
class CORDL_TYPE Ext___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field end, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field len, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int32_t  len;

/// @brief Field seek, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_seek, put=__cordl_internal_set_seek)) ::System::Func_2<int32_t,bool>*  seek;

/// @brief Field values, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::ArrayW<::StringW>  values;

static inline ::WebSocketSharp::Ext___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <ContainsTwice>b__0, addr 0xb976ec4, size 0xd4, virtual false, abstract: false, final false
inline bool _ContainsTwice_b__0(int32_t  idx) ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr int32_t const& __cordl_internal_get_len() const;

constexpr int32_t& __cordl_internal_get_len() ;

constexpr ::System::Func_2<int32_t,bool>* const& __cordl_internal_get_seek() const;

constexpr ::System::Func_2<int32_t,bool>*& __cordl_internal_get_seek() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_values() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_values() ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_len(int32_t  value) ;

constexpr void __cordl_internal_set_seek(::System::Func_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_values(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb974a5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ext___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ext___c__DisplayClass18_0(Ext___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ext___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ext___c__DisplayClass18_0(Ext___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30313};

/// @brief Field end, offset: 0x10, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field values, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___values;

/// @brief Field len, offset: 0x20, size: 0x4, def value: None
 int32_t  ___len;

/// @brief Field seek, offset: 0x28, size: 0x8, def value: None
 ::System::Func_2<int32_t,bool>*  ___seek;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass18_0, ___end) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass18_0, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass18_0, ___len) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Ext___c__DisplayClass18_0, ___seek) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Ext___c__DisplayClass18_0) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp
