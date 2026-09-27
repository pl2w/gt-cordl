#pragma once
// IWYU pragma private; include "System/Configuration/IdnElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(IdnElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
struct UriIdnScope;
}
// Forward declare root types
namespace System::Configuration {
class IdnElement;
}
// Write type traits
MARK_REF_T(::System::Configuration::IdnElement*);
DEFINE_IL2CPP_CLASS(::System::Configuration::IdnElement*, "System.Configuration", "IdnElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IdnElement
class CORDL_TYPE IdnElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Enabled, put=set_Enabled)) ::System::UriIdnScope  Enabled;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Configuration::IdnElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacfcb9c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enabled, addr 0xacfcbd4, size 0x38, virtual false, abstract: false, final false
inline ::System::UriIdnScope get_Enabled() ;

/// @brief Method get_Properties, addr 0xacfcc44, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_Enabled, addr 0xacfcc0c, size 0x38, virtual false, abstract: false, final false
inline void set_Enabled(::System::UriIdnScope  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdnElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdnElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IdnElement(IdnElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdnElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdnElement(IdnElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::IdnElement) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
