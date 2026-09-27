#pragma once
// IWYU pragma private; include "System/Configuration/IApplicationSettingsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IApplicationSettingsProvider)
namespace System::Configuration {
class SettingsContext;
}
namespace System::Configuration {
class SettingsPropertyCollection;
}
namespace System::Configuration {
class SettingsPropertyValue;
}
namespace System::Configuration {
class SettingsProperty;
}
// Forward declare root types
namespace System::Configuration {
class IApplicationSettingsProvider;
}
// Write type traits
MARK_REF_T(::System::Configuration::IApplicationSettingsProvider*);
DEFINE_IL2CPP_CLASS(::System::Configuration::IApplicationSettingsProvider*, "System.Configuration", "IApplicationSettingsProvider");
// Dependencies 
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.IApplicationSettingsProvider
class CORDL_TYPE IApplicationSettingsProvider {
public:
// Declarations
/// @brief Method GetPreviousVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Configuration::SettingsPropertyValue* GetPreviousVersion(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsProperty*  property) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset(::System::Configuration::SettingsContext*  context) ;

/// @brief Method Upgrade, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Upgrade(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties) ;

// Ctor Parameters [CppParam { name: "", ty: "IApplicationSettingsProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IApplicationSettingsProvider(IApplicationSettingsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
