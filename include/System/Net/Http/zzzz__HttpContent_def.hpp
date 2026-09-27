#pragma once
// IWYU pragma private; include "System/Net/Http/HttpContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContent)
namespace GlobalNamespace {
struct HttpContent__CreateContentReadStreamAsync_d__12;
}
namespace GlobalNamespace {
struct HttpContent__LoadIntoBufferAsync_d__17;
}
namespace GlobalNamespace {
struct HttpContent__ReadAsStreamAsync_d__18;
}
namespace GlobalNamespace {
struct HttpContent__ReadAsStringAsync_d__20;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
namespace System::Net::Http {
class HttpContent_FixedMemoryStream;
}
namespace System::Net {
class TransportContext;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class HttpContent_FixedMemoryStream;
}
// Write type traits
MARK_REF_T(::System::Net::Http::HttpContent*);
MARK_REF_T(::System::Net::Http::HttpContent_FixedMemoryStream*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::HttpContent*, "System.Net.Http", "HttpContent");
DEFINE_IL2CPP_CLASS(::System::Net::Http::HttpContent_FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
// Dependencies System.Object
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpContent
class CORDL_TYPE HttpContent : public ::System::Object {
public:
// Declarations
using _CreateContentReadStreamAsync_d__12 = ::GlobalNamespace::HttpContent__CreateContentReadStreamAsync_d__12;

using _LoadIntoBufferAsync_d__17 = ::GlobalNamespace::HttpContent__LoadIntoBufferAsync_d__17;

using _ReadAsStreamAsync_d__18 = ::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18;

using _ReadAsStringAsync_d__20 = ::GlobalNamespace::HttpContent__ReadAsStringAsync_d__20;

using FixedMemoryStream = ::System::Net::Http::HttpContent_FixedMemoryStream;

 __declspec(property(get=get_Headers)) ::System::Net::Http::Headers::HttpContentHeaders*  Headers;

 __declspec(property(get=get_LoadedBufferLength)) ::System::Nullable_1<int64_t>  LoadedBufferLength;

/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::System::Net::Http::HttpContent_FixedMemoryStream*  buffer;

/// @brief Field disposed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field headers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Net::Http::Headers::HttpContentHeaders*  headers;

/// @brief Field stream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CopyToAsync, addr 0xa9de30c, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  stream) ;

/// @brief Method CopyToAsync, addr 0xa9e044c, size 0x70, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// [AsyncStateMachine(typeof(System.Net.Http.HttpContent::<CreateContentReadStreamAsync>d__12))]
/// @brief Method CreateContentReadStreamAsync, addr 0xa9e04bc, size 0x118, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* CreateContentReadStreamAsync() ;

/// @brief Method CreateFixedMemoryStream, addr 0xa9e05d4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Net::Http::HttpContent_FixedMemoryStream* CreateFixedMemoryStream(int64_t  maxBufferSize) ;

/// @brief Method Dispose, addr 0xa9e0658, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa9e0668, size 0x2c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetEncodingFromBuffer, addr 0xa9e08cc, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* GetEncodingFromBuffer(::ArrayW<uint8_t>  buffer, int32_t  length, ::by_ref<int32_t>  preambleLength) ;

/// @brief Method LoadIntoBufferAsync, addr 0xa9e0694, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync() ;

/// [AsyncStateMachine(typeof(System.Net.Http.HttpContent::<LoadIntoBufferAsync>d__17))]
/// @brief Method LoadIntoBufferAsync, addr 0xa9de220, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync(int64_t  maxBufferSize) ;

static inline ::System::Net::Http::HttpContent* New_ctor() ;

/// [AsyncStateMachine(typeof(System.Net.Http.HttpContent::<ReadAsStreamAsync>d__18))]
/// @brief Method ReadAsStreamAsync, addr 0xa9e069c, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* ReadAsStreamAsync() ;

/// [AsyncStateMachine(typeof(System.Net.Http.HttpContent::<ReadAsStringAsync>d__20))]
/// @brief Method ReadAsStringAsync, addr 0xa9e07b4, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync() ;

/// @brief Method SerializeToStreamAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// @brief Method SerializeToStreamAsync_internal, addr 0xa9e0ae4, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SerializeToStreamAsync_internal(::System::IO::Stream*  stream, ::System::Net::TransportContext*  context) ;

/// @brief Method StartsWith, addr 0xa9e0a70, size 0x74, virtual false, abstract: false, final false
static inline int32_t StartsWith(::ArrayW<uint8_t>  array, int32_t  length, ::ArrayW<uint8_t>  value) ;

/// @brief Method TryComputeLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryComputeLength(::by_ref<int64_t>  length) ;

constexpr ::System::Net::Http::HttpContent_FixedMemoryStream* const& __cordl_internal_get_buffer() const;

constexpr ::System::Net::Http::HttpContent_FixedMemoryStream*& __cordl_internal_get_buffer() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::System::Net::Http::Headers::HttpContentHeaders* const& __cordl_internal_get_headers() const;

constexpr ::System::Net::Http::Headers::HttpContentHeaders*& __cordl_internal_get_headers() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_buffer(::System::Net::Http::HttpContent_FixedMemoryStream*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_headers(::System::Net::Http::Headers::HttpContentHeaders*  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa9de9e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Headers, addr 0xa9dbf70, size 0x74, virtual false, abstract: false, final false
inline ::System::Net::Http::Headers::HttpContentHeaders* get_Headers() ;

/// @brief Method get_LoadedBufferLength, addr 0xa9e03d0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_LoadedBufferLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpContent(HttpContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpContent(HttpContent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30722};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Http::HttpContent_FixedMemoryStream*  ___buffer;

/// @brief Field stream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field disposed, offset: 0x20, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field headers, offset: 0x28, size: 0x8, def value: None
 ::System::Net::Http::Headers::HttpContentHeaders*  ___headers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpContent, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___disposed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpContent, ___headers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::HttpContent) == 0x30, "Size mismatch!");

} // namespace end def System::Net::Http
// Dependencies System.IO.MemoryStream
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpContent/FixedMemoryStream
class CORDL_TYPE HttpContent_FixedMemoryStream : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief Field maxSize, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxSize, put=__cordl_internal_set_maxSize)) int64_t  maxSize;

/// @brief Method CheckOverflow, addr 0xa9e0af0, size 0xa8, virtual false, abstract: false, final false
inline void CheckOverflow(int32_t  count) ;

static inline ::System::Net::Http::HttpContent_FixedMemoryStream* New_ctor(int64_t  maxSize) ;

/// @brief Method Write, addr 0xa9e0c30, size 0x48, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0xa9e0c00, size 0x30, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr int64_t const& __cordl_internal_get_maxSize() const;

constexpr int64_t& __cordl_internal_get_maxSize() ;

constexpr void __cordl_internal_set_maxSize(int64_t  value) ;

/// @brief Method .ctor, addr 0xa9e0630, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int64_t  maxSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpContent_FixedMemoryStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpContent_FixedMemoryStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpContent_FixedMemoryStream(HttpContent_FixedMemoryStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpContent_FixedMemoryStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpContent_FixedMemoryStream(HttpContent_FixedMemoryStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30717};

/// @brief Field maxSize, offset: 0x50, size: 0x8, def value: None
 int64_t  ___maxSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpContent_FixedMemoryStream, ___maxSize) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::HttpContent_FixedMemoryStream) == 0x58, "Size mismatch!");

} // namespace end def System::Net::Http
