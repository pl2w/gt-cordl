#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IWitConfigurationProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWitConfigurationProvider)
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IWitConfigurationProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IWitConfigurationProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IWitConfigurationProvider*, "Meta.WitAi.Interfaces", "IWitConfigurationProvider");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IWitConfigurationProvider
class CORDL_TYPE IWitConfigurationProvider {
public:
// Declarations
 __declspec(property(get=get_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

/// @brief Method get_Configuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

// Ctor Parameters [CppParam { name: "", ty: "IWitConfigurationProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitConfigurationProvider(IWitConfigurationProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25666};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
