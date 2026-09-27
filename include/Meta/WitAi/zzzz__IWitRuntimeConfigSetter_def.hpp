#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRuntimeConfigSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWitRuntimeConfigSetter)
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
// Forward declare root types
namespace Meta::WitAi {
class IWitRuntimeConfigSetter;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IWitRuntimeConfigSetter*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IWitRuntimeConfigSetter*, "Meta.WitAi", "IWitRuntimeConfigSetter");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IWitRuntimeConfigSetter
class CORDL_TYPE IWitRuntimeConfigSetter {
public:
// Declarations
 __declspec(property(put=set_RuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  RuntimeConfiguration;

/// @brief Method set_RuntimeConfiguration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWitRuntimeConfigSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitRuntimeConfigSetter(IWitRuntimeConfigSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
