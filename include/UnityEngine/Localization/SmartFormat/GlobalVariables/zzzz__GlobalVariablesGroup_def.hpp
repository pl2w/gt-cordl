#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/GlobalVariablesGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__VariablesGroupAsset_def.hpp"
CORDL_MODULE_EXPORT(GlobalVariablesGroup)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class GlobalVariablesGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariablesGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariablesGroup*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "GlobalVariablesGroup");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset instead.")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.GlobalVariablesGroup
class CORDL_TYPE GlobalVariablesGroup : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariablesGroup* New_ctor() ;

/// @brief Method .ctor, addr 0xb038b10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalVariablesGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalVariablesGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalVariablesGroup(GlobalVariablesGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalVariablesGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalVariablesGroup(GlobalVariablesGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::GlobalVariables::GlobalVariablesGroup) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
