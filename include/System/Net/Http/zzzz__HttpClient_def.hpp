#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClient)
namespace GlobalNamespace {
struct HttpClient__SendAsyncWorker_d__47;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Net::Http {
struct HttpCompletionOption;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClient;
}
// Write type traits
MARK_REF_T(::System::Net::Http::HttpClient*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::HttpClient*, "System.Net.Http", "HttpClient");
// Dependencies System.Net.Http.HttpMessageInvoker, System.TimeSpan
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpClient
class CORDL_TYPE HttpClient : public ::System::Net::Http::HttpMessageInvoker {
public:
// Declarations
using _SendAsyncWorker_d__47 = ::GlobalNamespace::HttpClient__SendAsyncWorker_d__47;

 __declspec(property(get=get_DefaultRequestHeaders)) ::System::Net::Http::Headers::HttpRequestHeaders*  DefaultRequestHeaders;

 __declspec(property(get=get_MaxResponseContentBufferSize)) int64_t  MaxResponseContentBufferSize;

/// @brief Field TimeoutDefault, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TimeoutDefault, put=setStaticF_TimeoutDefault)) ::System::TimeSpan  TimeoutDefault;

/// @brief Field base_address, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_base_address, put=__cordl_internal_set_base_address)) ::System::Uri*  base_address;

/// @brief Field buffer_size, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer_size, put=__cordl_internal_set_buffer_size)) int64_t  buffer_size;

/// @brief Field cts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cts, put=__cordl_internal_set_cts)) ::System::Threading::CancellationTokenSource*  cts;

/// @brief Field disposed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field headers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::System::Net::Http::Headers::HttpRequestHeaders*  headers;

/// @brief Field timeout, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) ::System::TimeSpan  timeout;

/// @brief Method Dispose, addr 0xa9df450, size 0x5c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::Net::Http::HttpClient* New_ctor() ;

static inline ::System::Net::Http::HttpClient* New_ctor(::System::Net::Http::HttpMessageHandler*  handler, bool  disposeHandler) ;

/// @brief Method SendAsync, addr 0xa9df4f4, size 0xc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendAsync, addr 0xa9df500, size 0x27c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.Http.HttpClient::<SendAsyncWorker>d__47))]
/// @brief Method SendAsyncWorker, addr 0xa9df9f8, size 0x158, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsyncWorker(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Uri* const& __cordl_internal_get_base_address() const;

constexpr ::System::Uri*& __cordl_internal_get_base_address() ;

constexpr int64_t const& __cordl_internal_get_buffer_size() const;

constexpr int64_t& __cordl_internal_get_buffer_size() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_cts() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_cts() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::System::Net::Http::Headers::HttpRequestHeaders* const& __cordl_internal_get_headers() const;

constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& __cordl_internal_get_headers() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_timeout() const;

constexpr ::System::TimeSpan& __cordl_internal_get_timeout() ;

constexpr void __cordl_internal_set_base_address(::System::Uri*  value) ;

constexpr void __cordl_internal_set_buffer_size(int64_t  value) ;

constexpr void __cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_headers(::System::Net::Http::Headers::HttpRequestHeaders*  value) ;

constexpr void __cordl_internal_set_timeout(::System::TimeSpan  value) ;

/// [DebuggerHidden]
/// [CompilerGenerated]
/// @brief Method <>n__0, addr 0xa9dfbcc, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* __n__0(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0xa9df1cc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa9df234, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Http::HttpMessageHandler*  handler, bool  disposeHandler) ;

static inline ::System::TimeSpan getStaticF_TimeoutDefault() ;

/// @brief Method get_DefaultRequestHeaders, addr 0xa9df37c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Net::Http::Headers::HttpRequestHeaders* get_DefaultRequestHeaders() ;

/// @brief Method get_MaxResponseContentBufferSize, addr 0xa9df448, size 0x8, virtual false, abstract: false, final false
inline int64_t get_MaxResponseContentBufferSize() ;

static inline void setStaticF_TimeoutDefault(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpClient(HttpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpClient(HttpClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30715};

/// @brief Field base_address, offset: 0x20, size: 0x8, def value: None
 ::System::Uri*  ___base_address;

/// @brief Field cts, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___cts;

/// @brief Field disposed, offset: 0x30, size: 0x1, def value: None
 bool  ___disposed;

/// @brief Field headers, offset: 0x38, size: 0x8, def value: None
 ::System::Net::Http::Headers::HttpRequestHeaders*  ___headers;

/// @brief Field buffer_size, offset: 0x40, size: 0x8, def value: None
 int64_t  ___buffer_size;

/// @brief Field timeout, offset: 0x48, size: 0x8, def value: None
 ::System::TimeSpan  ___timeout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::HttpClient, ___base_address) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___cts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___disposed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___buffer_size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___timeout) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::HttpClient) == 0x50, "Size mismatch!");

} // namespace end def System::Net::Http
