#pragma once
// IWYU pragma private; include "System/Xml/XmlUrlResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlUrlResolver)
namespace GlobalNamespace {
struct XmlUrlResolver__GetEntityAsync_d__15;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Xml {
class XmlDownloadManager;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlUrlResolver;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlUrlResolver*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlUrlResolver*, "System.Xml", "XmlUrlResolver");
// Dependencies System.Xml.XmlResolver
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlUrlResolver
class CORDL_TYPE XmlUrlResolver : public ::System::Xml::XmlResolver {
public:
// Declarations
using _GetEntityAsync_d__15 = ::GlobalNamespace::XmlUrlResolver__GetEntityAsync_d__15;

/// @brief Field _cachePolicy, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachePolicy, put=__cordl_internal_set__cachePolicy)) ::System::Net::Cache::RequestCachePolicy*  _cachePolicy;

/// @brief Field _credentials, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentials, put=__cordl_internal_set__credentials)) ::System::Net::ICredentials*  _credentials;

/// @brief Field _proxy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::System::Net::IWebProxy*  _proxy;

/// @brief Field s_DownloadManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DownloadManager, put=setStaticF_s_DownloadManager)) ::System::Object*  s_DownloadManager;

/// @brief Method GetEntity, addr 0xabfae64, size 0x150, virtual true, abstract: false, final false
inline ::System::Object* GetEntity(::System::Uri*  absoluteUri, ::StringW  role, ::System::Type*  ofObjectToReturn) ;

/// [AsyncStateMachine(typeof(System.Xml.XmlUrlResolver::<GetEntityAsync>d__15))]
/// @brief Method GetEntityAsync, addr 0xabfafb8, size 0x148, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri*  absoluteUri, ::StringW  role, ::System::Type*  ofObjectToReturn) ;

static inline ::System::Xml::XmlUrlResolver* New_ctor() ;

/// @brief Method ResolveUri, addr 0xabfafb4, size 0x4, virtual true, abstract: false, final false
inline ::System::Uri* ResolveUri(::System::Uri*  baseUri, ::StringW  relativeUri) ;

constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get__cachePolicy() const;

constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get__cachePolicy() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get__credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get__credentials() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get__proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy() ;

constexpr void __cordl_internal_set__cachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr void __cordl_internal_set__credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy*  value) ;

/// @brief Method .ctor, addr 0xabfae5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Object* getStaticF_s_DownloadManager() ;

/// @brief Method get_DownloadManager, addr 0xabfad90, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDownloadManager* get_DownloadManager() ;

static inline void setStaticF_s_DownloadManager(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlUrlResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlUrlResolver(XmlUrlResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlUrlResolver(XmlUrlResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14194};

/// @brief Field _credentials, offset: 0x10, size: 0x8, def value: None
 ::System::Net::ICredentials*  ____credentials;

/// @brief Field _proxy, offset: 0x18, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ____proxy;

/// @brief Field _cachePolicy, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Cache::RequestCachePolicy*  ____cachePolicy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUrlResolver, ____credentials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver, ____proxy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver, ____cachePolicy) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlUrlResolver) == 0x28, "Size mismatch!");

} // namespace end def System::Xml
