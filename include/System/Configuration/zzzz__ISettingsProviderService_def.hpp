#pragma once
// IWYU pragma private; include "System/Configuration/ISettingsProviderService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISettingsProviderService)
namespace System::Configuration {
class SettingsProperty;
}
namespace System::Configuration {
class SettingsProvider;
}
// Forward declare root types
namespace System::Configuration {
class ISettingsProviderService;
}
// Write type traits
MARK_REF_T(::System::Configuration::ISettingsProviderService*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ISettingsProviderService*, "System.Configuration", "ISettingsProviderService");
// Dependencies 
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ISettingsProviderService
class CORDL_TYPE ISettingsProviderService {
public:
// Declarations
/// @brief Method GetSettingsProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Configuration::SettingsProvider* GetSettingsProvider(::System::Configuration::SettingsProperty*  property) ;

// Ctor Parameters [CppParam { name: "", ty: "ISettingsProviderService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISettingsProviderService(ISettingsProviderService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
