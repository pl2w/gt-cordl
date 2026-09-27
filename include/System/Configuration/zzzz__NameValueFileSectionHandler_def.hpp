#pragma once
// IWYU pragma private; include "System/Configuration/NameValueFileSectionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NameValueFileSectionHandler)
namespace System::Configuration {
class IConfigurationSectionHandler;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class NameValueFileSectionHandler;
}
// Write type traits
MARK_REF_T(::System::Configuration::NameValueFileSectionHandler*);
DEFINE_IL2CPP_CLASS(::System::Configuration::NameValueFileSectionHandler*, "System.Configuration", "NameValueFileSectionHandler");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.NameValueFileSectionHandler
class CORDL_TYPE NameValueFileSectionHandler : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr operator  ::System::Configuration::IConfigurationSectionHandler*() noexcept;

/// @brief Method Create, addr 0xacfcffc, size 0x38, virtual true, abstract: false, final true
inline ::System::Object* Create(::System::Object*  parent, ::System::Object*  configContext, ::System::Xml::XmlNode*  section) ;

static inline ::System::Configuration::NameValueFileSectionHandler* New_ctor() ;

/// @brief Method .ctor, addr 0xacfcfc4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* i___System__Configuration__IConfigurationSectionHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NameValueFileSectionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NameValueFileSectionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NameValueFileSectionHandler(NameValueFileSectionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NameValueFileSectionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NameValueFileSectionHandler(NameValueFileSectionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::NameValueFileSectionHandler) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
