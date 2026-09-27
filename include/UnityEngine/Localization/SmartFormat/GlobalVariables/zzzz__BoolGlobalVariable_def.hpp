#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/BoolGlobalVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__BoolVariable_def.hpp"
CORDL_MODULE_EXPORT(BoolGlobalVariable)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class BoolGlobalVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "BoolGlobalVariable");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.BoolVariable instead (UnityUpgradable) -> UnityEngine.Localization.SmartFormat.PersistentVariables.BoolVariable")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.BoolVariable
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.BoolGlobalVariable
class CORDL_TYPE BoolGlobalVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb038b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoolGlobalVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoolGlobalVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoolGlobalVariable(BoolGlobalVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoolGlobalVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoolGlobalVariable(BoolGlobalVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::GlobalVariables::BoolGlobalVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
