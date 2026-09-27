#pragma once
// IWYU pragma private; include "System/Configuration/SchemeSettingElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SchemeSettingElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
struct GenericUriParserOptions;
}
// Forward declare root types
namespace System::Configuration {
class SchemeSettingElement;
}
// Write type traits
MARK_REF_T(::System::Configuration::SchemeSettingElement*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SchemeSettingElement*, "System.Configuration", "SchemeSettingElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SchemeSettingElement
class CORDL_TYPE SchemeSettingElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_GenericUriParserOptions)) ::System::GenericUriParserOptions  GenericUriParserOptions;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Configuration::SchemeSettingElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacfd118, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GenericUriParserOptions, addr 0xacfd150, size 0x38, virtual false, abstract: false, final false
inline ::System::GenericUriParserOptions get_GenericUriParserOptions() ;

/// @brief Method get_Name, addr 0xacfd188, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Properties, addr 0xacfd1c0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SchemeSettingElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SchemeSettingElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SchemeSettingElement(SchemeSettingElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SchemeSettingElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SchemeSettingElement(SchemeSettingElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11041};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SchemeSettingElement) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
