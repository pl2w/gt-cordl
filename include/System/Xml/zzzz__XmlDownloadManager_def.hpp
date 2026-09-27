#pragma once
// IWYU pragma private; include "System/Xml/XmlDownloadManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlDownloadManager)
namespace GlobalNamespace {
struct XmlDownloadManager__GetNonFileStreamAsync_d__5;
}
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class Stream;
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
class XmlDownloadManager___c__DisplayClass4_0;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Xml {
class XmlDownloadManager___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlDownloadManager*);
MARK_REF_T(::System::Xml::XmlDownloadManager___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlDownloadManager*, "System.Xml", "XmlDownloadManager");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlDownloadManager___c__DisplayClass4_0*, "System.Xml", "XmlDownloadManager/<>c__DisplayClass4_0");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDownloadManager
class CORDL_TYPE XmlDownloadManager : public ::System::Object {
public:
// Declarations
using _GetNonFileStreamAsync_d__5 = ::GlobalNamespace::XmlDownloadManager__GetNonFileStreamAsync_d__5;

using __c__DisplayClass4_0 = ::System::Xml::XmlDownloadManager___c__DisplayClass4_0;

/// @brief Field connections, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::System::Collections::Hashtable*  connections;

/// @brief Method GetNonFileStream, addr 0xabf4e34, size 0x490, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetNonFileStream(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

/// [AsyncStateMachine(typeof(System.Xml.XmlDownloadManager::<GetNonFileStreamAsync>d__5))]
/// @brief Method GetNonFileStreamAsync, addr 0xabf57cc, size 0x17c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetNonFileStreamAsync(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

/// @brief Method GetStream, addr 0xabf4d34, size 0x100, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetStream(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

/// @brief Method GetStreamAsync, addr 0xabf5654, size 0x170, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy) ;

static inline ::System::Xml::XmlDownloadManager* New_ctor() ;

/// @brief Method Remove, addr 0xabf54e0, size 0x174, virtual false, abstract: false, final false
inline void Remove(::StringW  host) ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_connections() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_connections() ;

constexpr void __cordl_internal_set_connections(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0xabf5948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlDownloadManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDownloadManager(XmlDownloadManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDownloadManager(XmlDownloadManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14168};

/// @brief Field connections, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___connections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDownloadManager, ___connections) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlDownloadManager) == 0x18, "Size mismatch!");

} // namespace end def System::Xml
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDownloadManager/<>c__DisplayClass4_0
class CORDL_TYPE XmlDownloadManager___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field uri, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uri, put=__cordl_internal_set_uri)) ::System::Uri*  uri;

static inline ::System::Xml::XmlDownloadManager___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <GetStreamAsync>b__0, addr 0xabf5950, size 0x8c, virtual false, abstract: false, final false
inline ::System::IO::Stream* _GetStreamAsync_b__0() ;

constexpr ::System::Uri* const& __cordl_internal_get_uri() const;

constexpr ::System::Uri*& __cordl_internal_get_uri() ;

constexpr void __cordl_internal_set_uri(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0xabf57c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlDownloadManager___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDownloadManager___c__DisplayClass4_0(XmlDownloadManager___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDownloadManager___c__DisplayClass4_0(XmlDownloadManager___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14166};

/// @brief Field uri, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ___uri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDownloadManager___c__DisplayClass4_0, ___uri) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlDownloadManager___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def System::Xml
