#pragma once
// IWYU pragma private; include "System/Net/Configuration/RequestCachingSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(RequestCachingSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Cache {
struct RequestCacheLevel;
}
namespace System::Net::Configuration {
class FtpCachePolicyElement;
}
namespace System::Net::Configuration {
class HttpCachePolicyElement;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Configuration {
class RequestCachingSection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::RequestCachingSection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::RequestCachingSection*, "System.Net.Configuration", "RequestCachingSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.RequestCachingSection
class CORDL_TYPE RequestCachingSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_DefaultFtpCachePolicy)) ::System::Net::Configuration::FtpCachePolicyElement*  DefaultFtpCachePolicy;

 __declspec(property(get=get_DefaultHttpCachePolicy)) ::System::Net::Configuration::HttpCachePolicyElement*  DefaultHttpCachePolicy;

 __declspec(property(get=get_DefaultPolicyLevel, put=set_DefaultPolicyLevel)) ::System::Net::Cache::RequestCacheLevel  DefaultPolicyLevel;

 __declspec(property(get=get_DisableAllCaching, put=set_DisableAllCaching)) bool  DisableAllCaching;

 __declspec(property(get=get_IsPrivateCache, put=set_IsPrivateCache)) bool  IsPrivateCache;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_UnspecifiedMaximumAge, put=set_UnspecifiedMaximumAge)) ::System::TimeSpan  UnspecifiedMaximumAge;

/// @brief Method DeserializeElement, addr 0xacfa350, size 0x38, virtual true, abstract: false, final false
inline void DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey) ;

static inline ::System::Net::Configuration::RequestCachingSection* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacfa388, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method .ctor, addr 0xacfa0b0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultFtpCachePolicy, addr 0xacfa0e8, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::FtpCachePolicyElement* get_DefaultFtpCachePolicy() ;

/// @brief Method get_DefaultHttpCachePolicy, addr 0xacfa120, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::HttpCachePolicyElement* get_DefaultHttpCachePolicy() ;

/// @brief Method get_DefaultPolicyLevel, addr 0xacfa158, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Cache::RequestCacheLevel get_DefaultPolicyLevel() ;

/// @brief Method get_DisableAllCaching, addr 0xacfa1c8, size 0x38, virtual false, abstract: false, final false
inline bool get_DisableAllCaching() ;

/// @brief Method get_IsPrivateCache, addr 0xacfa238, size 0x38, virtual false, abstract: false, final false
inline bool get_IsPrivateCache() ;

/// @brief Method get_Properties, addr 0xacfa2a8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_UnspecifiedMaximumAge, addr 0xacfa2e0, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_UnspecifiedMaximumAge() ;

/// @brief Method set_DefaultPolicyLevel, addr 0xacfa190, size 0x38, virtual false, abstract: false, final false
inline void set_DefaultPolicyLevel(::System::Net::Cache::RequestCacheLevel  value) ;

/// @brief Method set_DisableAllCaching, addr 0xacfa200, size 0x38, virtual false, abstract: false, final false
inline void set_DisableAllCaching(bool  value) ;

/// @brief Method set_IsPrivateCache, addr 0xacfa270, size 0x38, virtual false, abstract: false, final false
inline void set_IsPrivateCache(bool  value) ;

/// @brief Method set_UnspecifiedMaximumAge, addr 0xacfa318, size 0x38, virtual false, abstract: false, final false
inline void set_UnspecifiedMaximumAge(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestCachingSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestCachingSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestCachingSection(RequestCachingSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestCachingSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestCachingSection(RequestCachingSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::RequestCachingSection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
