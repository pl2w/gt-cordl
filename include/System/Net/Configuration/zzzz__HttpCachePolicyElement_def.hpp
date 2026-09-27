#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpCachePolicyElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(HttpCachePolicyElement)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Cache {
struct HttpRequestCacheLevel;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Configuration {
class HttpCachePolicyElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::HttpCachePolicyElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::HttpCachePolicyElement*, "System.Net.Configuration", "HttpCachePolicyElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.HttpCachePolicyElement
class CORDL_TYPE HttpCachePolicyElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_MaximumAge, put=set_MaximumAge)) ::System::TimeSpan  MaximumAge;

 __declspec(property(get=get_MaximumStale, put=set_MaximumStale)) ::System::TimeSpan  MaximumStale;

 __declspec(property(get=get_MinimumFresh, put=set_MinimumFresh)) ::System::TimeSpan  MinimumFresh;

 __declspec(property(get=get_PolicyLevel, put=set_PolicyLevel)) ::System::Net::Cache::HttpRequestCacheLevel  PolicyLevel;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

/// @brief Method DeserializeElement, addr 0xacf90b8, size 0x38, virtual true, abstract: false, final false
inline void DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey) ;

static inline ::System::Net::Configuration::HttpCachePolicyElement* New_ctor() ;

/// @brief Method Reset, addr 0xacf90f0, size 0x38, virtual true, abstract: false, final false
inline void Reset(::System::Configuration::ConfigurationElement*  parentElement) ;

/// @brief Method .ctor, addr 0xacf8e88, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaximumAge, addr 0xacf8ec0, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_MaximumAge() ;

/// @brief Method get_MaximumStale, addr 0xacf8f30, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_MaximumStale() ;

/// @brief Method get_MinimumFresh, addr 0xacf8fa0, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_MinimumFresh() ;

/// @brief Method get_PolicyLevel, addr 0xacf9010, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Cache::HttpRequestCacheLevel get_PolicyLevel() ;

/// @brief Method get_Properties, addr 0xacf9080, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_MaximumAge, addr 0xacf8ef8, size 0x38, virtual false, abstract: false, final false
inline void set_MaximumAge(::System::TimeSpan  value) ;

/// @brief Method set_MaximumStale, addr 0xacf8f68, size 0x38, virtual false, abstract: false, final false
inline void set_MaximumStale(::System::TimeSpan  value) ;

/// @brief Method set_MinimumFresh, addr 0xacf8fd8, size 0x38, virtual false, abstract: false, final false
inline void set_MinimumFresh(::System::TimeSpan  value) ;

/// @brief Method set_PolicyLevel, addr 0xacf9048, size 0x38, virtual false, abstract: false, final false
inline void set_PolicyLevel(::System::Net::Cache::HttpRequestCacheLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpCachePolicyElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpCachePolicyElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpCachePolicyElement(HttpCachePolicyElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpCachePolicyElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpCachePolicyElement(HttpCachePolicyElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::HttpCachePolicyElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
