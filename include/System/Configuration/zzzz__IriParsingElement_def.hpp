#pragma once
// IWYU pragma private; include "System/Configuration/IriParsingElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(IriParsingElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Configuration {
class IriParsingElement;
}
// Write type traits
MARK_REF_T(::System::Configuration::IriParsingElement*);
DEFINE_IL2CPP_CLASS(::System::Configuration::IriParsingElement*, "System.Configuration", "IriParsingElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IriParsingElement
class CORDL_TYPE IriParsingElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Configuration::IriParsingElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacfccec, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enabled, addr 0xacfcd24, size 0x38, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_Properties, addr 0xacfcd94, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_Enabled, addr 0xacfcd5c, size 0x38, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IriParsingElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IriParsingElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IriParsingElement(IriParsingElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IriParsingElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IriParsingElement(IriParsingElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::IriParsingElement) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
