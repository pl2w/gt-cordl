#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/IGlobalVariableValueChanged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGlobalVariableValueChanged)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableValueChanged;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class IGlobalVariableValueChanged;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::IGlobalVariableValueChanged*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::IGlobalVariableValueChanged*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "IGlobalVariableValueChanged");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.IVariableValueChanged instead.")]
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.IGlobalVariableValueChanged
class CORDL_TYPE IGlobalVariableValueChanged {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableValueChanged() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IGlobalVariableValueChanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGlobalVariableValueChanged(IGlobalVariableValueChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
