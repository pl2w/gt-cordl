#pragma once
// IWYU pragma private; include "System/Net/WebConnectionTunnel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebConnectionTunnel_NtlmAuthState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebConnectionTunnel)
namespace GlobalNamespace {
struct WebConnectionTunnel_NtlmAuthState;
}
namespace GlobalNamespace {
struct WebConnectionTunnel__Initialize_d__42;
}
namespace GlobalNamespace {
struct WebConnectionTunnel__ReadHeaders_d__43;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Uri;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class WebConnectionTunnel;
}
// Write type traits
MARK_REF_T(::System::Net::WebConnectionTunnel*);
DEFINE_IL2CPP_CLASS(::System::Net::WebConnectionTunnel*, "System.Net", "WebConnectionTunnel");
// Dependencies System.Net.WebConnectionTunnel::NtlmAuthState, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebConnectionTunnel
class CORDL_TYPE WebConnectionTunnel : public ::System::Object {
public:
// Declarations
using NtlmAuthState = ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState;

using _Initialize_d__42 = ::GlobalNamespace::WebConnectionTunnel__Initialize_d__42;

using _ReadHeaders_d__43 = ::GlobalNamespace::WebConnectionTunnel__ReadHeaders_d__43;

 __declspec(property(get=get_Challenge, put=set_Challenge)) ::ArrayW<::StringW>  Challenge;

 __declspec(property(get=get_CloseConnection, put=set_CloseConnection)) bool  CloseConnection;

 __declspec(property(get=get_ConnectUri)) ::System::Uri*  ConnectUri;

 __declspec(property(get=get_Data, put=set_Data)) ::ArrayW<uint8_t>  Data;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_ProxyVersion, put=set_ProxyVersion)) ::System::Version*  ProxyVersion;

 __declspec(property(get=get_Request)) ::System::Net::HttpWebRequest*  Request;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) int32_t  StatusCode;

 __declspec(property(get=get_StatusDescription, put=set_StatusDescription)) ::StringW  StatusDescription;

 __declspec(property(get=get_Success, put=set_Success)) bool  Success;

/// @brief Field <Challenge>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Challenge_k__BackingField, put=__cordl_internal_set__Challenge_k__BackingField)) ::ArrayW<::StringW>  _Challenge_k__BackingField;

/// @brief Field <CloseConnection>k__BackingField, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__CloseConnection_k__BackingField, put=__cordl_internal_set__CloseConnection_k__BackingField)) bool  _CloseConnection_k__BackingField;

/// @brief Field <ConnectUri>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConnectUri_k__BackingField, put=__cordl_internal_set__ConnectUri_k__BackingField)) ::System::Uri*  _ConnectUri_k__BackingField;

/// @brief Field <Data>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::ArrayW<uint8_t>  _Data_k__BackingField;

/// @brief Field <Headers>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Headers_k__BackingField, put=__cordl_internal_set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection*  _Headers_k__BackingField;

/// @brief Field <ProxyVersion>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProxyVersion_k__BackingField, put=__cordl_internal_set__ProxyVersion_k__BackingField)) ::System::Version*  _ProxyVersion_k__BackingField;

/// @brief Field <Request>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Request_k__BackingField, put=__cordl_internal_set__Request_k__BackingField)) ::System::Net::HttpWebRequest*  _Request_k__BackingField;

/// @brief Field <StatusCode>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__StatusCode_k__BackingField, put=__cordl_internal_set__StatusCode_k__BackingField)) int32_t  _StatusCode_k__BackingField;

/// @brief Field <StatusDescription>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__StatusDescription_k__BackingField, put=__cordl_internal_set__StatusDescription_k__BackingField)) ::StringW  _StatusDescription_k__BackingField;

/// @brief Field <Success>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Success_k__BackingField, put=__cordl_internal_set__Success_k__BackingField)) bool  _Success_k__BackingField;

/// @brief Field connectRequest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectRequest, put=__cordl_internal_set_connectRequest)) ::System::Net::HttpWebRequest*  connectRequest;

/// @brief Field ntlmAuthState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ntlmAuthState, put=__cordl_internal_set_ntlmAuthState)) ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  ntlmAuthState;

/// @brief Method FlushContents, addr 0xacbc104, size 0x90, virtual false, abstract: false, final false
inline void FlushContents(::System::IO::Stream*  stream, int32_t  contentLength) ;

/// [AsyncStateMachine(typeof(System.Net.WebConnectionTunnel::<Initialize>d__42))]
/// @brief Method Initialize, addr 0xacba514, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Initialize(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Net::WebConnectionTunnel* New_ctor(::System::Net::HttpWebRequest*  request, ::System::Uri*  connectUri) ;

/// [AsyncStateMachine(typeof(System.Net.WebConnectionTunnel::<ReadHeaders>d__43))]
/// @brief Method ReadHeaders, addr 0xacbbfb4, size 0x150, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*,::ArrayW<uint8_t>,int32_t>>* ReadHeaders(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__Challenge_k__BackingField() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__Challenge_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CloseConnection_k__BackingField() const;

constexpr bool& __cordl_internal_get__CloseConnection_k__BackingField() ;

constexpr ::System::Uri* const& __cordl_internal_get__ConnectUri_k__BackingField() const;

constexpr ::System::Uri*& __cordl_internal_get__ConnectUri_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__Headers_k__BackingField() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__Headers_k__BackingField() ;

constexpr ::System::Version* const& __cordl_internal_get__ProxyVersion_k__BackingField() const;

constexpr ::System::Version*& __cordl_internal_get__ProxyVersion_k__BackingField() ;

constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get__Request_k__BackingField() const;

constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get__Request_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__StatusDescription_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__StatusDescription_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Success_k__BackingField() const;

constexpr bool& __cordl_internal_get__Success_k__BackingField() ;

constexpr ::System::Net::HttpWebRequest* const& __cordl_internal_get_connectRequest() const;

constexpr ::System::Net::HttpWebRequest*& __cordl_internal_get_connectRequest() ;

constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState const& __cordl_internal_get_ntlmAuthState() const;

constexpr ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState& __cordl_internal_get_ntlmAuthState() ;

constexpr void __cordl_internal_set__Challenge_k__BackingField(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__CloseConnection_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ConnectUri_k__BackingField(::System::Uri*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set__ProxyVersion_k__BackingField(::System::Version*  value) ;

constexpr void __cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest*  value) ;

constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__StatusDescription_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Success_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_connectRequest(::System::Net::HttpWebRequest*  value) ;

constexpr void __cordl_internal_set_ntlmAuthState(::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  value) ;

/// @brief Method .ctor, addr 0xacba4d0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Net::HttpWebRequest*  request, ::System::Uri*  connectUri) ;

/// [CompilerGenerated]
/// @brief Method get_Challenge, addr 0xacbbf74, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_Challenge() ;

/// [CompilerGenerated]
/// @brief Method get_CloseConnection, addr 0xacbbf44, size 0x8, virtual false, abstract: false, final false
inline bool get_CloseConnection() ;

/// [CompilerGenerated]
/// @brief Method get_ConnectUri, addr 0xacbbf2c, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_ConnectUri() ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0xacbbfa4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Data() ;

/// [CompilerGenerated]
/// @brief Method get_Headers, addr 0xacbbf84, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// [CompilerGenerated]
/// @brief Method get_ProxyVersion, addr 0xacbbf94, size 0x8, virtual false, abstract: false, final false
inline ::System::Version* get_ProxyVersion() ;

/// [CompilerGenerated]
/// @brief Method get_Request, addr 0xacbbf24, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::HttpWebRequest* get_Request() ;

/// [CompilerGenerated]
/// @brief Method get_StatusCode, addr 0xacbbf54, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StatusCode() ;

/// [CompilerGenerated]
/// @brief Method get_StatusDescription, addr 0xacbbf64, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StatusDescription() ;

/// [CompilerGenerated]
/// @brief Method get_Success, addr 0xacbbf34, size 0x8, virtual false, abstract: false, final false
inline bool get_Success() ;

/// [CompilerGenerated]
/// @brief Method set_Challenge, addr 0xacbbf7c, size 0x8, virtual false, abstract: false, final false
inline void set_Challenge(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_CloseConnection, addr 0xacbbf4c, size 0x8, virtual false, abstract: false, final false
inline void set_CloseConnection(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0xacbbfac, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Headers, addr 0xacbbf8c, size 0x8, virtual false, abstract: false, final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ProxyVersion, addr 0xacbbf9c, size 0x8, virtual false, abstract: false, final false
inline void set_ProxyVersion(::System::Version*  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusCode, addr 0xacbbf5c, size 0x8, virtual false, abstract: false, final false
inline void set_StatusCode(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusDescription, addr 0xacbbf6c, size 0x8, virtual false, abstract: false, final false
inline void set_StatusDescription(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Success, addr 0xacbbf3c, size 0x8, virtual false, abstract: false, final false
inline void set_Success(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebConnectionTunnel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebConnectionTunnel(WebConnectionTunnel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebConnectionTunnel(WebConnectionTunnel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10743};

/// [CompilerGenerated]
/// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  ____Request_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ConnectUri>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ____ConnectUri_k__BackingField;

/// @brief Field connectRequest, offset: 0x20, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  ___connectRequest;

/// @brief Field ntlmAuthState, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::WebConnectionTunnel_NtlmAuthState  ___ntlmAuthState;

/// [CompilerGenerated]
/// @brief Field <Success>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____Success_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CloseConnection>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  ____CloseConnection_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StatusCode>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____StatusCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StatusDescription>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____StatusDescription_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Challenge>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____Challenge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Headers>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____Headers_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ProxyVersion>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Version*  ____ProxyVersion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Request_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____ConnectUri_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ___connectRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ___ntlmAuthState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Success_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____CloseConnection_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____StatusCode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____StatusDescription_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Challenge_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Headers_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____ProxyVersion_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebConnectionTunnel, ____Data_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebConnectionTunnel) == 0x60, "Size mismatch!");

} // namespace end def System::Net
