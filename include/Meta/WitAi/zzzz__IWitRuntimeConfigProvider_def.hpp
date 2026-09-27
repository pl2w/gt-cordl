#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRuntimeConfigProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWitRuntimeConfigProvider)
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
// Forward declare root types
namespace Meta::WitAi {
class IWitRuntimeConfigProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IWitRuntimeConfigProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IWitRuntimeConfigProvider*, "Meta.WitAi", "IWitRuntimeConfigProvider");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IWitRuntimeConfigProvider
class CORDL_TYPE IWitRuntimeConfigProvider {
public:
// Declarations
 __declspec(property(get=get_RuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  RuntimeConfiguration;

/// @brief Method get_RuntimeConfiguration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration() ;

// Ctor Parameters [CppParam { name: "", ty: "IWitRuntimeConfigProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitRuntimeConfigProvider(IWitRuntimeConfigProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
