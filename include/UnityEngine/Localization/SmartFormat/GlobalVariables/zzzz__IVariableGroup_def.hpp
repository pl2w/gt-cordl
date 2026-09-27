#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/IVariableGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVariableGroup)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class IVariableGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::IVariableGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::IVariableGroup*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "IVariableGroup");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.IVariableGroup instead.")]
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.IVariableGroup
class CORDL_TYPE IVariableGroup {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IVariableGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVariableGroup(IVariableGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
