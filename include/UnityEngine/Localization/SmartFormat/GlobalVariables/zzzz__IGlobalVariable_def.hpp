#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/IGlobalVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGlobalVariable)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class IGlobalVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::IGlobalVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::IGlobalVariable*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "IGlobalVariable");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable instead.")]
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.IGlobalVariable
class CORDL_TYPE IGlobalVariable {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IGlobalVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGlobalVariable(IGlobalVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
