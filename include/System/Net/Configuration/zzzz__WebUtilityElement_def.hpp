#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebUtilityElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(WebUtilityElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
struct UnicodeDecodingConformance;
}
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebUtilityElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::WebUtilityElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::WebUtilityElement*, "System.Net.Configuration", "WebUtilityElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebUtilityElement
class CORDL_TYPE WebUtilityElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_UnicodeDecodingConformance, put=set_UnicodeDecodingConformance)) ::System::Net::Configuration::UnicodeDecodingConformance  UnicodeDecodingConformance;

 __declspec(property(get=get_UnicodeEncodingConformance, put=set_UnicodeEncodingConformance)) ::System::Net::Configuration::UnicodeEncodingConformance  UnicodeEncodingConformance;

static inline ::System::Net::Configuration::WebUtilityElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacfae40, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0xacfae78, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_UnicodeDecodingConformance, addr 0xacfaeb0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::UnicodeDecodingConformance get_UnicodeDecodingConformance() ;

/// @brief Method get_UnicodeEncodingConformance, addr 0xacfaf20, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::UnicodeEncodingConformance get_UnicodeEncodingConformance() ;

/// @brief Method set_UnicodeDecodingConformance, addr 0xacfaee8, size 0x38, virtual false, abstract: false, final false
inline void set_UnicodeDecodingConformance(::System::Net::Configuration::UnicodeDecodingConformance  value) ;

/// @brief Method set_UnicodeEncodingConformance, addr 0xacfaf58, size 0x38, virtual false, abstract: false, final false
inline void set_UnicodeEncodingConformance(::System::Net::Configuration::UnicodeEncodingConformance  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebUtilityElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebUtilityElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebUtilityElement(WebUtilityElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebUtilityElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebUtilityElement(WebUtilityElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::WebUtilityElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
