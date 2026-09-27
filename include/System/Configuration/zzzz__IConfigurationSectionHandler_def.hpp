#pragma once
// IWYU pragma private; include "System/Configuration/IConfigurationSectionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConfigurationSectionHandler)
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class IConfigurationSectionHandler;
}
// Write type traits
MARK_REF_T(::System::Configuration::IConfigurationSectionHandler*);
DEFINE_IL2CPP_CLASS(::System::Configuration::IConfigurationSectionHandler*, "System.Configuration", "IConfigurationSectionHandler");
// Dependencies 
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IConfigurationSectionHandler
class CORDL_TYPE IConfigurationSectionHandler {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* Create(::System::Object*  parent, ::System::Object*  configContext, ::System::Xml::XmlNode*  section) ;

// Ctor Parameters [CppParam { name: "", ty: "IConfigurationSectionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConfigurationSectionHandler(IConfigurationSectionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
