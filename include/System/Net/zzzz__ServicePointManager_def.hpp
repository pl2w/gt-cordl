#pragma once
// IWYU pragma private; include "System/Net/ServicePointManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__SecurityProtocolType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointManager)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class CipherSuitesCallback;
}
namespace System::Net {
class ICertificatePolicy;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
struct SecurityProtocolType;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class ServicePointManager_SPKey;
}
namespace System::Net {
class ServicePoint;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class ServicePointManager;
}
namespace System::Net {
class ServicePointManager_SPKey;
}
// Write type traits
MARK_REF_T(::System::Net::ServicePointManager*);
MARK_REF_T(::System::Net::ServicePointManager_SPKey*);
DEFINE_IL2CPP_CLASS(::System::Net::ServicePointManager*, "System.Net", "ServicePointManager");
DEFINE_IL2CPP_CLASS(::System::Net::ServicePointManager_SPKey*, "System.Net", "ServicePointManager/SPKey");
// Dependencies System.Net.SecurityProtocolType, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServicePointManager
class CORDL_TYPE ServicePointManager : public ::System::Object {
public:
// Declarations
using SPKey = ::System::Net::ServicePointManager_SPKey;

/// @brief Field <ClientCipherSuitesCallback>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ClientCipherSuitesCallback_k__BackingField, put=setStaticF__ClientCipherSuitesCallback_k__BackingField)) ::System::Net::CipherSuitesCallback*  _ClientCipherSuitesCallback_k__BackingField;

/// @brief Field <ServerCipherSuitesCallback>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ServerCipherSuitesCallback_k__BackingField, put=setStaticF__ServerCipherSuitesCallback_k__BackingField)) ::System::Net::CipherSuitesCallback*  _ServerCipherSuitesCallback_k__BackingField;

/// @brief Field _checkCRL, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__checkCRL, put=setStaticF__checkCRL)) bool  _checkCRL;

/// @brief Field _securityProtocol, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__securityProtocol, put=setStaticF__securityProtocol)) ::System::Net::SecurityProtocolType  _securityProtocol;

/// @brief Field defaultConnectionLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultConnectionLimit, put=setStaticF_defaultConnectionLimit)) int32_t  defaultConnectionLimit;

/// @brief Field dnsRefreshTimeout, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_dnsRefreshTimeout, put=setStaticF_dnsRefreshTimeout)) int32_t  dnsRefreshTimeout;

/// @brief Field expectContinue, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_expectContinue, put=setStaticF_expectContinue)) bool  expectContinue;

/// @brief Field maxServicePointIdleTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxServicePointIdleTime, put=setStaticF_maxServicePointIdleTime)) int32_t  maxServicePointIdleTime;

/// @brief Field maxServicePoints, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxServicePoints, put=setStaticF_maxServicePoints)) int32_t  maxServicePoints;

/// @brief Field policy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_policy, put=setStaticF_policy)) ::System::Net::ICertificatePolicy*  policy;

/// @brief Field server_cert_cb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_server_cert_cb, put=setStaticF_server_cert_cb)) ::System::Net::ServerCertValidationCallback*  server_cert_cb;

/// @brief Field servicePoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_servicePoints, put=setStaticF_servicePoints)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>*  servicePoints;

/// @brief Field tcp_keepalive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_tcp_keepalive, put=setStaticF_tcp_keepalive)) bool  tcp_keepalive;

/// @brief Field tcp_keepalive_interval, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tcp_keepalive_interval, put=setStaticF_tcp_keepalive_interval)) int32_t  tcp_keepalive_interval;

/// @brief Field tcp_keepalive_time, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tcp_keepalive_time, put=setStaticF_tcp_keepalive_time)) int32_t  tcp_keepalive_time;

/// @brief Field useNagle, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_useNagle, put=setStaticF_useNagle)) bool  useNagle;

/// @brief Method CloseConnectionGroup, addr 0xacb10d0, size 0x3bc, virtual false, abstract: false, final false
static inline void CloseConnectionGroup(::StringW  connectionGroupName) ;

/// @brief Method FindServicePoint, addr 0xacb0934, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ServicePoint* FindServicePoint(::System::Uri*  address) ;

/// @brief Method FindServicePoint, addr 0xacb098c, size 0x65c, virtual false, abstract: false, final false
static inline ::System::Net::ServicePoint* FindServicePoint(::System::Uri*  address, ::System::Net::IWebProxy*  proxy) ;

/// @brief Method FindServicePoint, addr 0xacb0fe8, size 0x90, virtual false, abstract: false, final false
static inline ::System::Net::ServicePoint* FindServicePoint(::StringW  uriString, ::System::Net::IWebProxy*  proxy) ;

/// @brief Method GetLegacyCertificatePolicy, addr 0xacafe64, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ICertificatePolicy* GetLegacyCertificatePolicy() ;

/// @brief Method GetMustImplement, addr 0xacb0070, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* GetMustImplement() ;

static inline ::System::Net::ServicePointManager* New_ctor() ;

/// @brief Method RemoveServicePoint, addr 0xacb148c, size 0x98, virtual false, abstract: false, final false
static inline void RemoveServicePoint(::System::Net::ServicePoint*  sp) ;

/// @brief Method SetTcpKeepAlive, addr 0xacb0830, size 0x104, virtual false, abstract: false, final false
static inline void SetTcpKeepAlive(bool  enabled, int32_t  keepAliveTime, int32_t  keepAliveInterval) ;

/// @brief Method .ctor, addr 0xacafd38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::CipherSuitesCallback* getStaticF__ClientCipherSuitesCallback_k__BackingField() ;

static inline ::System::Net::CipherSuitesCallback* getStaticF__ServerCipherSuitesCallback_k__BackingField() ;

static inline bool getStaticF__checkCRL() ;

static inline ::System::Net::SecurityProtocolType getStaticF__securityProtocol() ;

static inline int32_t getStaticF_defaultConnectionLimit() ;

static inline int32_t getStaticF_dnsRefreshTimeout() ;

static inline bool getStaticF_expectContinue() ;

static inline int32_t getStaticF_maxServicePointIdleTime() ;

static inline int32_t getStaticF_maxServicePoints() ;

static inline ::System::Net::ICertificatePolicy* getStaticF_policy() ;

static inline ::System::Net::ServerCertValidationCallback* getStaticF_server_cert_cb() ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>* getStaticF_servicePoints() ;

static inline bool getStaticF_tcp_keepalive() ;

static inline int32_t getStaticF_tcp_keepalive_interval() ;

static inline int32_t getStaticF_tcp_keepalive_time() ;

static inline bool getStaticF_useNagle() ;

/// @brief Method get_CertificatePolicy, addr 0xacafd40, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Net::ICertificatePolicy* get_CertificatePolicy() ;

/// @brief Method get_CheckCertificateRevocationList, addr 0xacafebc, size 0x58, virtual false, abstract: false, final false
static inline bool get_CheckCertificateRevocationList() ;

/// [CompilerGenerated]
/// @brief Method get_ClientCipherSuitesCallback, addr 0xacb1524, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::CipherSuitesCallback* get_ClientCipherSuitesCallback() ;

/// @brief Method get_DefaultConnectionLimit, addr 0xacaff6c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_DefaultConnectionLimit() ;

/// @brief Method get_DisableSendAuxRecord, addr 0xacb0828, size 0x8, virtual false, abstract: false, final false
static inline bool get_DisableSendAuxRecord() ;

/// @brief Method get_DisableStrongCrypto, addr 0xacb0820, size 0x8, virtual false, abstract: false, final false
static inline bool get_DisableStrongCrypto() ;

/// @brief Method get_DnsRefreshTimeout, addr 0xacb00c4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_DnsRefreshTimeout() ;

/// @brief Method get_EnableDnsRoundRobin, addr 0xacb01b4, size 0x34, virtual false, abstract: false, final false
static inline bool get_EnableDnsRoundRobin() ;

/// @brief Method get_EncryptionPolicy, addr 0xacb06a8, size 0x8, virtual false, abstract: false, final false
static inline ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy() ;

/// @brief Method get_Expect100Continue, addr 0xacb06b0, size 0x58, virtual false, abstract: false, final false
static inline bool get_Expect100Continue() ;

/// @brief Method get_MaxServicePointIdleTime, addr 0xacb021c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_MaxServicePointIdleTime() ;

/// @brief Method get_MaxServicePoints, addr 0xacb0320, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_MaxServicePoints() ;

/// @brief Method get_ReusePort, addr 0xacb0420, size 0x8, virtual false, abstract: false, final false
static inline bool get_ReusePort() ;

/// @brief Method get_SecurityProtocol, addr 0xacb0460, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::SecurityProtocolType get_SecurityProtocol() ;

/// @brief Method get_ServerCertValidationCallback, addr 0xacb0514, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback() ;

/// @brief Method get_ServerCertificateValidationCallback, addr 0xacb056c, size 0x88, virtual false, abstract: false, final false
static inline ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback() ;

/// [CompilerGenerated]
/// @brief Method get_ServerCipherSuitesCallback, addr 0xacb15dc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::CipherSuitesCallback* get_ServerCipherSuitesCallback() ;

/// @brief Method get_UseNagleAlgorithm, addr 0xacb0768, size 0x58, virtual false, abstract: false, final false
static inline bool get_UseNagleAlgorithm() ;

static inline void setStaticF__ClientCipherSuitesCallback_k__BackingField(::System::Net::CipherSuitesCallback*  value) ;

static inline void setStaticF__ServerCipherSuitesCallback_k__BackingField(::System::Net::CipherSuitesCallback*  value) ;

static inline void setStaticF__checkCRL(bool  value) ;

static inline void setStaticF__securityProtocol(::System::Net::SecurityProtocolType  value) ;

static inline void setStaticF_defaultConnectionLimit(int32_t  value) ;

static inline void setStaticF_dnsRefreshTimeout(int32_t  value) ;

static inline void setStaticF_expectContinue(bool  value) ;

static inline void setStaticF_maxServicePointIdleTime(int32_t  value) ;

static inline void setStaticF_maxServicePoints(int32_t  value) ;

static inline void setStaticF_policy(::System::Net::ICertificatePolicy*  value) ;

static inline void setStaticF_server_cert_cb(::System::Net::ServerCertValidationCallback*  value) ;

static inline void setStaticF_servicePoints(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Net::ServicePointManager_SPKey*,::System::Net::ServicePoint*>*  value) ;

static inline void setStaticF_tcp_keepalive(bool  value) ;

static inline void setStaticF_tcp_keepalive_interval(int32_t  value) ;

static inline void setStaticF_tcp_keepalive_time(int32_t  value) ;

static inline void setStaticF_useNagle(bool  value) ;

/// @brief Method set_CertificatePolicy, addr 0xacafe04, size 0x60, virtual false, abstract: false, final false
static inline void set_CertificatePolicy(::System::Net::ICertificatePolicy*  value) ;

/// @brief Method set_CheckCertificateRevocationList, addr 0xacaff14, size 0x58, virtual false, abstract: false, final false
static inline void set_CheckCertificateRevocationList(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ClientCipherSuitesCallback, addr 0xacb157c, size 0x60, virtual false, abstract: false, final false
static inline void set_ClientCipherSuitesCallback(::System::Net::CipherSuitesCallback*  value) ;

/// @brief Method set_DefaultConnectionLimit, addr 0xacaffc4, size 0xac, virtual false, abstract: false, final false
static inline void set_DefaultConnectionLimit(int32_t  value) ;

/// @brief Method set_DnsRefreshTimeout, addr 0xacb011c, size 0x98, virtual false, abstract: false, final false
static inline void set_DnsRefreshTimeout(int32_t  value) ;

/// @brief Method set_EnableDnsRoundRobin, addr 0xacb01e8, size 0x34, virtual false, abstract: false, final false
static inline void set_EnableDnsRoundRobin(bool  value) ;

/// @brief Method set_Expect100Continue, addr 0xacb0708, size 0x60, virtual false, abstract: false, final false
static inline void set_Expect100Continue(bool  value) ;

/// @brief Method set_MaxServicePointIdleTime, addr 0xacb0274, size 0xac, virtual false, abstract: false, final false
static inline void set_MaxServicePointIdleTime(int32_t  value) ;

/// @brief Method set_MaxServicePoints, addr 0xacb0378, size 0xa8, virtual false, abstract: false, final false
static inline void set_MaxServicePoints(int32_t  value) ;

/// @brief Method set_ReusePort, addr 0xacb0428, size 0x38, virtual false, abstract: false, final false
static inline void set_ReusePort(bool  value) ;

/// @brief Method set_SecurityProtocol, addr 0xacb04b8, size 0x5c, virtual false, abstract: false, final false
static inline void set_SecurityProtocol(::System::Net::SecurityProtocolType  value) ;

/// @brief Method set_ServerCertificateValidationCallback, addr 0xacb05f4, size 0xb4, virtual false, abstract: false, final false
static inline void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServerCipherSuitesCallback, addr 0xacb1634, size 0x60, virtual false, abstract: false, final false
static inline void set_ServerCipherSuitesCallback(::System::Net::CipherSuitesCallback*  value) ;

/// @brief Method set_UseNagleAlgorithm, addr 0xacb07c0, size 0x60, virtual false, abstract: false, final false
static inline void set_UseNagleAlgorithm(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointManager(ServicePointManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointManager(ServicePointManager const& ) = delete;

/// @brief Field DefaultNonPersistentConnectionLimit offset 0xffffffff size 0x4
static constexpr int32_t  DefaultNonPersistentConnectionLimit{static_cast<int32_t>(0x4)};

/// @brief Field DefaultPersistentConnectionLimit offset 0xffffffff size 0x4
static constexpr int32_t  DefaultPersistentConnectionLimit{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::ServicePointManager) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServicePointManager/SPKey
class CORDL_TYPE ServicePointManager_SPKey : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Uri)) ::System::Uri*  Uri;

 __declspec(property(get=get_UseConnect)) bool  UseConnect;

 __declspec(property(get=get_UsesProxy)) bool  UsesProxy;

/// @brief Field proxy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxy, put=__cordl_internal_set_proxy)) ::System::Uri*  proxy;

/// @brief Field uri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uri, put=__cordl_internal_set_uri)) ::System::Uri*  uri;

/// @brief Field use_connect, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_use_connect, put=__cordl_internal_set_use_connect)) bool  use_connect;

/// @brief Method Equals, addr 0xacb17cc, size 0xf4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xacb1704, size 0xc8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Net::ServicePointManager_SPKey* New_ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect) ;

constexpr ::System::Uri* const& __cordl_internal_get_proxy() const;

constexpr ::System::Uri*& __cordl_internal_get_proxy() ;

constexpr ::System::Uri* const& __cordl_internal_get_uri() const;

constexpr ::System::Uri*& __cordl_internal_get_uri() ;

constexpr bool const& __cordl_internal_get_use_connect() const;

constexpr bool& __cordl_internal_get_use_connect() ;

constexpr void __cordl_internal_set_proxy(::System::Uri*  value) ;

constexpr void __cordl_internal_set_uri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_use_connect(bool  value) ;

/// @brief Method .ctor, addr 0xacb1078, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uri, ::System::Uri*  proxy, bool  use_connect) ;

/// @brief Method get_Uri, addr 0xacb1694, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_Uri() ;

/// @brief Method get_UseConnect, addr 0xacb169c, size 0x8, virtual false, abstract: false, final false
inline bool get_UseConnect() ;

/// @brief Method get_UsesProxy, addr 0xacb16a4, size 0x60, virtual false, abstract: false, final false
inline bool get_UsesProxy() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointManager_SPKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager_SPKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointManager_SPKey(ServicePointManager_SPKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManager_SPKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointManager_SPKey(ServicePointManager_SPKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10717};

/// @brief Field uri, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ___uri;

/// @brief Field proxy, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ___proxy;

/// @brief Field use_connect, offset: 0x20, size: 0x1, def value: None
 bool  ___use_connect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ServicePointManager_SPKey, ___uri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointManager_SPKey, ___proxy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointManager_SPKey, ___use_connect) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::ServicePointManager_SPKey) == 0x28, "Size mismatch!");

} // namespace end def System::Net
