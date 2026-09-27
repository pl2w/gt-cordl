#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoTlsStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoTlsStream)
namespace GlobalNamespace {
struct MonoTlsStream__CreateStream_d__18;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsStream;
}
// Write type traits
MARK_REF_T(::Mono::Net::Security::MonoTlsStream*);
DEFINE_IL2CPP_CLASS(::Mono::Net::Security::MonoTlsStream*, "Mono.Net.Security", "MonoTlsStream");
// Dependencies System.Net.WebExceptionStatus, System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MonoTlsStream
class CORDL_TYPE MonoTlsStream : public ::System::Object {
public:
// Declarations
using _CreateStream_d__18 = ::GlobalNamespace::MonoTlsStream__CreateStream_d__18;

 __declspec(property(get=get_CertificateValidationFailed, put=set_CertificateValidationFailed)) bool  CertificateValidationFailed;

 __declspec(property(get=get_ExceptionStatus)) ::System::Net::WebExceptionStatus  ExceptionStatus;

 __declspec(property(get=get_Request)) ::System::Net::HttpWebRequest*  Request;

/// @brief Field <CertificateValidationFailed>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__CertificateValidationFailed_k__BackingField, put=__cordl_internal_set__CertificateValidationFailed_k__BackingField)) bool  _CertificateValidationFailed_k__BackingField;

/// @brief Field networkStream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkStream, put=__cordl_internal_set_networkStream)) ::System::Net::Sockets::NetworkStream*  networkStream;

/// @brief Field provider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_provider, put=__cordl_internal_set_provider)) ::Mono::Net::Security::MobileTlsProvider*  provider;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::System::Net::HttpWebRequest*  request;

/// @brief Field settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Mono::Security::Interface::MonoTlsSettings*  settings;

/// @brief Field sslStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sslStream, put=__cordl_internal_set_sslStream)) ::System::Net::Security::SslStream*  sslStream;

/// @brief Field sslStreamLock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sslStreamLock, put=__cordl_internal_set_sslStreamLock)) ::System::Object*  sslStreamLock;

/// @brief Field status, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::System::Net::WebExceptionStatus  status;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CloseSslStream, addr 0xa8dc2d0, size 0xd4, virtual false, abstract: false, final false
inline void CloseSslStream() ;

/// [AsyncStateMachine(typeof(Mono.Net.Security.MonoTlsStream::<CreateStream>d__18))]
/// @brief Method CreateStream, addr 0xa8dc180, size 0x14c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* CreateStream(::System::Net::WebConnectionTunnel*  tunnel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose, addr 0xa8dc2cc, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Mono::Net::Security::MonoTlsStream* New_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::Sockets::NetworkStream*  networkStream) ;

constexpr bool const& __cordl_internal_get__CertificateValidationFailed_k__BackingField() const;

constexpr bool& __cordl_internal_get__CertificateValidationFailed_k__BackingField() ;

constexpr ::System::Net::Sockets::NetworkStream* const& __cordl_internal_get_networkStream() const;

constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get_networkStream() ;

constexpr ::Mono::Net::Security::MobileTlsProvider* const& __cordl_internal_get_provider() const;

constexpr ::Mono::Net::Security::MobileTlsProvider*& __cordl_internal_get_provider() ;

constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get_request() const;

constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get_request() ;

constexpr ::Mono::Security::Interface::MonoTlsSettings* const& __cordl_internal_get_settings() const;

constexpr ::Mono::Security::Interface::MonoTlsSettings*& __cordl_internal_get_settings() ;

constexpr ::System::Net::Security::SslStream* const& __cordl_internal_get_sslStream() const;

constexpr ::System::Net::Security::SslStream*& __cordl_internal_get_sslStream() ;

constexpr ::System::Object* const& __cordl_internal_get_sslStreamLock() const;

constexpr ::System::Object*& __cordl_internal_get_sslStreamLock() ;

constexpr ::System::Net::WebExceptionStatus const& __cordl_internal_get_status() const;

constexpr ::System::Net::WebExceptionStatus& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set__CertificateValidationFailed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_networkStream(::System::Net::Sockets::NetworkStream*  value) ;

constexpr void __cordl_internal_set_provider(::Mono::Net::Security::MobileTlsProvider*  value) ;

constexpr void __cordl_internal_set_request(::System::Net::HttpWebRequest*  value) ;

constexpr void __cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings*  value) ;

constexpr void __cordl_internal_set_sslStream(::System::Net::Security::SslStream*  value) ;

constexpr void __cordl_internal_set_sslStreamLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_status(::System::Net::WebExceptionStatus  value) ;

/// @brief Method .ctor, addr 0xa8dbf54, size 0x164, virtual false, abstract: false, final false
inline void _ctor(::System::Net::HttpWebRequest*  request, ::System::Net::Sockets::NetworkStream*  networkStream) ;

/// [CompilerGenerated]
/// @brief Method get_CertificateValidationFailed, addr 0xa8dbf44, size 0x8, virtual false, abstract: false, final false
inline bool get_CertificateValidationFailed() ;

/// @brief Method get_ExceptionStatus, addr 0xa8dbf3c, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebExceptionStatus get_ExceptionStatus() ;

/// @brief Method get_Request, addr 0xa8dbf34, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::HttpWebRequest* get_Request() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CertificateValidationFailed, addr 0xa8dbf4c, size 0x8, virtual false, abstract: false, final false
inline void set_CertificateValidationFailed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoTlsStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoTlsStream(MonoTlsStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoTlsStream(MonoTlsStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9896};

/// @brief Field provider, offset: 0x10, size: 0x8, def value: None
 ::Mono::Net::Security::MobileTlsProvider*  ___provider;

/// @brief Field networkStream, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Sockets::NetworkStream*  ___networkStream;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  ___request;

/// @brief Field settings, offset: 0x28, size: 0x8, def value: None
 ::Mono::Security::Interface::MonoTlsSettings*  ___settings;

/// @brief Field sslStream, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Security::SslStream*  ___sslStream;

/// @brief Field sslStreamLock, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___sslStreamLock;

/// @brief Field status, offset: 0x40, size: 0x4, def value: None
 ::System::Net::WebExceptionStatus  ___status;

/// [CompilerGenerated]
/// @brief Field <CertificateValidationFailed>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____CertificateValidationFailed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___provider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___networkStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___sslStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___sslStreamLock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ___status) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::MonoTlsStream, ____CertificateValidationFailed_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Mono::Net::Security::MonoTlsStream) == 0x48, "Size mismatch!");

} // namespace end def Mono::Net::Security
