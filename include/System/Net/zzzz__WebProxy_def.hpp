#pragma once
// IWYU pragma private; include "System/Net/WebProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebProxy)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class AutoWebProxyScriptEngine;
}
namespace System::Net {
class IAutoWebProxy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class ProxyChain;
}
namespace System::Net {
class WebProxyData;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebProxy;
}
// Write type traits
MARK_REF_T(::System::Net::WebProxy*);
DEFINE_IL2CPP_CLASS(::System::Net::WebProxy*, "System.Net", "WebProxy");
// Dependencies System.Object, System.Text.RegularExpressions.Regex
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebProxy
class CORDL_TYPE WebProxy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Address, put=set_Address)) ::System::Uri*  Address;

 __declspec(property(put=set_AutoDetect)) bool  AutoDetect;

 __declspec(property(get=get_BypassArrayList)) ::System::Collections::ArrayList*  BypassArrayList;

 __declspec(property(get=get_BypassList, put=set_BypassList)) ::ArrayW<::StringW>  BypassList;

 __declspec(property(get=get_BypassProxyOnLocal, put=set_BypassProxyOnLocal)) bool  BypassProxyOnLocal;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

 __declspec(property(get=get_ScriptEngine, put=set_ScriptEngine)) ::System::Net::AutoWebProxyScriptEngine*  ScriptEngine;

 __declspec(property(put=set_ScriptLocation)) ::System::Uri*  ScriptLocation;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

/// @brief Field _BypassList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BypassList, put=__cordl_internal_set__BypassList)) ::System::Collections::ArrayList*  _BypassList;

/// @brief Field _BypassOnLocal, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__BypassOnLocal, put=__cordl_internal_set__BypassOnLocal)) bool  _BypassOnLocal;

/// @brief Field _Credentials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Credentials, put=__cordl_internal_set__Credentials)) ::System::Net::ICredentials*  _Credentials;

/// @brief Field _ProxyAddress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProxyAddress, put=__cordl_internal_set__ProxyAddress)) ::System::Uri*  _ProxyAddress;

/// @brief Field _ProxyHostAddresses, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProxyHostAddresses, put=__cordl_internal_set__ProxyHostAddresses)) ::System::Collections::Hashtable*  _ProxyHostAddresses;

/// @brief Field _RegExBypassList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__RegExBypassList, put=__cordl_internal_set__RegExBypassList)) ::ArrayW<::System::Text::RegularExpressions::Regex*>  _RegExBypassList;

/// @brief Field _UseRegistry, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseRegistry, put=__cordl_internal_set__UseRegistry)) bool  _UseRegistry;

/// @brief Field m_EnableAutoproxy, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableAutoproxy, put=__cordl_internal_set_m_EnableAutoproxy)) bool  m_EnableAutoproxy;

/// @brief Field m_ScriptEngine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScriptEngine, put=__cordl_internal_set_m_ScriptEngine)) ::System::Net::AutoWebProxyScriptEngine*  m_ScriptEngine;

/// @brief Convert operator to "::System::Net::IAutoWebProxy"
constexpr operator  ::System::Net::IAutoWebProxy*() noexcept;

/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr operator  ::System::Net::IWebProxy*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method AbortGetProxiesAuto, addr 0xac882e0, size 0x4, virtual false, abstract: false, final false
inline void AbortGetProxiesAuto(::by_ref<int32_t>  syncStatus) ;

/// @brief Method AreAllBypassed, addr 0xac87ee8, size 0x2cc, virtual false, abstract: false, final false
static inline bool AreAllBypassed(::System::Collections::Generic::IEnumerable_1<::StringW>*  proxies, bool  checkFirstOnly) ;

/// @brief Method CheckForChanges, addr 0xac86ef0, size 0x4, virtual false, abstract: false, final false
inline void CheckForChanges() ;

/// @brief Method CreateDefaultProxy, addr 0xac87c38, size 0x60, virtual false, abstract: false, final false
static inline ::System::Net::IWebProxy* CreateDefaultProxy() ;

/// @brief Method CreateProxyUri, addr 0xac868c0, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Uri* CreateProxyUri(::StringW  address) ;

/// @brief Method DeleteScriptEngine, addr 0xac86a90, size 0x18, virtual false, abstract: false, final false
inline void DeleteScriptEngine() ;

/// [Obsolete("This method has been deprecated. Please use the proxy selected for you by default. http://go.microsoft.com/fwlink/?linkid=14202")]
/// @brief Method GetDefaultProxy, addr 0xac876dc, size 0x60, virtual false, abstract: false, final false
static inline ::System::Net::WebProxy* GetDefaultProxy() ;

/// @brief Method GetObjectData, addr 0xac87b04, size 0x124, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method GetProxiesAuto, addr 0xac88250, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::System::Uri*> GetProxiesAuto(::System::Uri*  destination, ::by_ref<int32_t>  syncStatus) ;

/// @brief Method GetProxy, addr 0xac86ef8, size 0x17c, virtual true, abstract: false, final true
inline ::System::Uri* GetProxy(::System::Uri*  destination) ;

/// @brief Method GetProxyAuto, addr 0xac87074, size 0x80, virtual false, abstract: false, final false
inline bool GetProxyAuto(::System::Uri*  destination, ::by_ref<::System::Uri*>  proxyUri) ;

/// @brief Method GetProxyAutoFailover, addr 0xac882e8, size 0xc8, virtual false, abstract: false, final false
inline ::System::Uri* GetProxyAutoFailover(::System::Uri*  destination) ;

/// @brief Method IsBypassed, addr 0xac875a0, size 0xd0, virtual true, abstract: false, final true
inline bool IsBypassed(::System::Uri*  host) ;

/// @brief Method IsBypassedAuto, addr 0xac87670, size 0x6c, virtual false, abstract: false, final false
inline bool IsBypassedAuto(::System::Uri*  destination, ::by_ref<bool>  isBypassed) ;

/// @brief Method IsBypassedManual, addr 0xac870f4, size 0xc8, virtual false, abstract: false, final false
inline bool IsBypassedManual(::System::Uri*  host) ;

/// @brief Method IsLocal, addr 0xac87354, size 0x15c, virtual false, abstract: false, final false
inline bool IsLocal(::System::Uri*  host) ;

/// @brief Method IsLocalInProxyHash, addr 0xac874b0, size 0xf0, virtual false, abstract: false, final false
inline bool IsLocalInProxyHash(::System::Uri*  host) ;

/// @brief Method IsMatchInBypassList, addr 0xac871bc, size 0x198, virtual false, abstract: false, final false
inline bool IsMatchInBypassList(::System::Uri*  input) ;

static inline ::System::Net::WebProxy* New_ctor() ;

static inline ::System::Net::WebProxy* New_ctor(::StringW  Address) ;

static inline ::System::Net::WebProxy* New_ctor(::StringW  Address, bool  BypassOnLocal) ;

static inline ::System::Net::WebProxy* New_ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList) ;

static inline ::System::Net::WebProxy* New_ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials) ;

static inline ::System::Net::WebProxy* New_ctor(::System::Uri*  Address) ;

static inline ::System::Net::WebProxy* New_ctor(::System::Uri*  Address, bool  BypassOnLocal) ;

static inline ::System::Net::WebProxy* New_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList) ;

static inline ::System::Net::WebProxy* New_ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials) ;

static inline ::System::Net::WebProxy* New_ctor(::StringW  Host, int32_t  Port) ;

static inline ::System::Net::WebProxy* New_ctor(bool  enableAutoproxy) ;

static inline ::System::Net::WebProxy* New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method ProxyUri, addr 0xac881b4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Uri* ProxyUri(::StringW  proxyName) ;

/// @brief Method System.Net.IAutoWebProxy.GetProxies, addr 0xac87ddc, size 0xec, virtual true, abstract: false, final true
inline ::System::Net::ProxyChain* System_Net_IAutoWebProxy_GetProxies(::System::Uri*  destination) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xac87af8, size 0xc, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method UnsafeUpdateFromRegistry, addr 0xac87aec, size 0xc, virtual false, abstract: false, final false
inline void UnsafeUpdateFromRegistry() ;

/// @brief Method Update, addr 0xac87c9c, size 0x140, virtual false, abstract: false, final false
inline void Update(::System::Net::WebProxyData*  webProxyData) ;

/// @brief Method UpdateRegExList, addr 0xac86530, size 0x254, virtual false, abstract: false, final false
inline void UpdateRegExList(bool  canThrow) ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__BypassList() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get__BypassList() ;

constexpr bool const& __cordl_internal_get__BypassOnLocal() const;

constexpr bool& __cordl_internal_get__BypassOnLocal() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get__Credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get__Credentials() ;

constexpr ::System::Uri* const& __cordl_internal_get__ProxyAddress() const;

constexpr ::System::Uri*& __cordl_internal_get__ProxyAddress() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__ProxyHostAddresses() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get__ProxyHostAddresses() ;

constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*> const& __cordl_internal_get__RegExBypassList() const;

constexpr ::ArrayW<::System::Text::RegularExpressions::Regex*>& __cordl_internal_get__RegExBypassList() ;

constexpr bool const& __cordl_internal_get__UseRegistry() const;

constexpr bool& __cordl_internal_get__UseRegistry() ;

constexpr bool const& __cordl_internal_get_m_EnableAutoproxy() const;

constexpr bool& __cordl_internal_get_m_EnableAutoproxy() ;

constexpr ::System::Net::AutoWebProxyScriptEngine* const& __cordl_internal_get_m_ScriptEngine() const;

constexpr ::System::Net::AutoWebProxyScriptEngine*& __cordl_internal_get_m_ScriptEngine() ;

constexpr void __cordl_internal_set__BypassList(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set__BypassOnLocal(bool  value) ;

constexpr void __cordl_internal_set__Credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set__ProxyAddress(::System::Uri*  value) ;

constexpr void __cordl_internal_set__ProxyHostAddresses(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set__RegExBypassList(::ArrayW<::System::Text::RegularExpressions::Regex*>  value) ;

constexpr void __cordl_internal_set__UseRegistry(bool  value) ;

constexpr void __cordl_internal_set_m_EnableAutoproxy(bool  value) ;

constexpr void __cordl_internal_set_m_ScriptEngine(::System::Net::AutoWebProxyScriptEngine*  value) ;

/// @brief Method .ctor, addr 0xac86424, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac86894, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  Address) ;

/// @brief Method .ctor, addr 0xac8697c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  Address, bool  BypassOnLocal) ;

/// @brief Method .ctor, addr 0xac869b4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList) ;

/// @brief Method .ctor, addr 0xac869f0, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials) ;

/// @brief Method .ctor, addr 0xac8650c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  Address) ;

/// @brief Method .ctor, addr 0xac8651c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  Address, bool  BypassOnLocal) ;

/// @brief Method .ctor, addr 0xac86528, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList) ;

/// @brief Method .ctor, addr 0xac86438, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  Address, bool  BypassOnLocal, ::ArrayW<::StringW>  BypassList, ::System::Net::ICredentials*  Credentials) ;

/// @brief Method .ctor, addr 0xac86784, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  Host, int32_t  Port) ;

/// @brief Method .ctor, addr 0xac8773c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  enableAutoproxy) ;

/// @brief Method .ctor, addr 0xac8776c, size 0x380, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext) ;

/// @brief Method get_Address, addr 0xac86a38, size 0x8, virtual false, abstract: false, final false
inline ::System::Uri* get_Address() ;

/// @brief Method get_BypassArrayList, addr 0xac86e80, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::ArrayList* get_BypassArrayList() ;

/// @brief Method get_BypassList, addr 0xac86bfc, size 0xf0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_BypassList() ;

/// @brief Method get_BypassProxyOnLocal, addr 0xac86bb8, size 0x8, virtual false, abstract: false, final false
inline bool get_BypassProxyOnLocal() ;

/// @brief Method get_Credentials, addr 0xac86d7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_ScriptEngine, addr 0xac87c28, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::AutoWebProxyScriptEngine* get_ScriptEngine() ;

/// @brief Method get_UseDefaultCredentials, addr 0xac86d8c, size 0x7c, virtual false, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// @brief Convert to "::System::Net::IAutoWebProxy"
constexpr ::System::Net::IAutoWebProxy* i___System__Net__IAutoWebProxy() noexcept;

/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* i___System__Net__IWebProxy() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method set_Address, addr 0xac86a40, size 0x50, virtual false, abstract: false, final false
inline void set_Address(::System::Uri*  value) ;

/// @brief Method set_AutoDetect, addr 0xac86aa8, size 0x84, virtual false, abstract: false, final false
inline void set_AutoDetect(bool  value) ;

/// @brief Method set_BypassList, addr 0xac86cec, size 0x90, virtual false, abstract: false, final false
inline void set_BypassList(::ArrayW<::StringW>  value) ;

/// @brief Method set_BypassProxyOnLocal, addr 0xac86bc0, size 0x3c, virtual false, abstract: false, final false
inline void set_BypassProxyOnLocal(bool  value) ;

/// @brief Method set_Credentials, addr 0xac86d84, size 0x8, virtual true, abstract: false, final true
inline void set_Credentials(::System::Net::ICredentials*  value) ;

/// @brief Method set_ScriptEngine, addr 0xac87c30, size 0x8, virtual false, abstract: false, final false
inline void set_ScriptEngine(::System::Net::AutoWebProxyScriptEngine*  value) ;

/// @brief Method set_ScriptLocation, addr 0xac86b34, size 0x84, virtual false, abstract: false, final false
inline void set_ScriptLocation(::System::Uri*  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xac86e08, size 0x78, virtual false, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebProxy(WebProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebProxy(WebProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10638};

/// @brief Field _UseRegistry, offset: 0x10, size: 0x1, def value: None
 bool  ____UseRegistry;

/// @brief Field _BypassOnLocal, offset: 0x11, size: 0x1, def value: None
 bool  ____BypassOnLocal;

/// @brief Field m_EnableAutoproxy, offset: 0x12, size: 0x1, def value: None
 bool  ___m_EnableAutoproxy;

/// @brief Field _ProxyAddress, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ____ProxyAddress;

/// @brief Field _BypassList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ____BypassList;

/// @brief Field _Credentials, offset: 0x28, size: 0x8, def value: None
 ::System::Net::ICredentials*  ____Credentials;

/// @brief Field _RegExBypassList, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::System::Text::RegularExpressions::Regex*>  ____RegExBypassList;

/// @brief Field _ProxyHostAddresses, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ____ProxyHostAddresses;

/// @brief Field m_ScriptEngine, offset: 0x40, size: 0x8, def value: None
 ::System::Net::AutoWebProxyScriptEngine*  ___m_ScriptEngine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebProxy, ____UseRegistry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____BypassOnLocal) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ___m_EnableAutoproxy) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____ProxyAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____BypassList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____Credentials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____RegExBypassList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ____ProxyHostAddresses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxy, ___m_ScriptEngine) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebProxy) == 0x48, "Size mismatch!");

} // namespace end def System::Net
