#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/NestedGlobalVariablesGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__NestedVariablesGroup_def.hpp"
CORDL_MODULE_EXPORT(NestedGlobalVariablesGroup)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class NestedGlobalVariablesGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::NestedGlobalVariablesGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::NestedGlobalVariablesGroup*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "NestedGlobalVariablesGroup");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.NestedVariablesGroup instead (UnityUpgradable) -> UnityEngine.Localization.SmartFormat.PersistentVariables.NestedVariablesGroup")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.NestedVariablesGroup
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.NestedGlobalVariablesGroup
class CORDL_TYPE NestedGlobalVariablesGroup : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::NestedGlobalVariablesGroup* New_ctor() ;

/// @brief Method .ctor, addr 0xb038b08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NestedGlobalVariablesGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NestedGlobalVariablesGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NestedGlobalVariablesGroup(NestedGlobalVariablesGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NestedGlobalVariablesGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NestedGlobalVariablesGroup(NestedGlobalVariablesGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::GlobalVariables::NestedGlobalVariablesGroup) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
