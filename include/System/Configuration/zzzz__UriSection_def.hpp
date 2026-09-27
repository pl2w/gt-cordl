#pragma once
// IWYU pragma private; include "System/Configuration/UriSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(UriSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
class IdnElement;
}
namespace System::Configuration {
class IriParsingElement;
}
namespace System::Configuration {
class SchemeSettingElementCollection;
}
// Forward declare root types
namespace System::Configuration {
class UriSection;
}
// Write type traits
MARK_REF_T(::System::Configuration::UriSection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::UriSection*, "System.Configuration", "UriSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.UriSection
class CORDL_TYPE UriSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_Idn)) ::System::Configuration::IdnElement*  Idn;

 __declspec(property(get=get_IriParsing)) ::System::Configuration::IriParsingElement*  IriParsing;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_SchemeSettings)) ::System::Configuration::SchemeSettingElementCollection*  SchemeSettings;

static inline ::System::Configuration::UriSection* New_ctor() ;

/// @brief Method .ctor, addr 0xacfd838, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Idn, addr 0xacfd870, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::IdnElement* get_Idn() ;

/// @brief Method get_IriParsing, addr 0xacfd8a8, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::IriParsingElement* get_IriParsing() ;

/// @brief Method get_Properties, addr 0xacfd8e0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_SchemeSettings, addr 0xacfd918, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SchemeSettingElementCollection* get_SchemeSettings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UriSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UriSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UriSection(UriSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UriSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UriSection(UriSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11056};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::UriSection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
