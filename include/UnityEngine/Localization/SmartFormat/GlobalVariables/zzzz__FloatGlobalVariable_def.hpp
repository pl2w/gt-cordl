#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/FloatGlobalVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__FloatVariable_def.hpp"
CORDL_MODULE_EXPORT(FloatGlobalVariable)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class FloatGlobalVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::FloatGlobalVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::FloatGlobalVariable*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "FloatGlobalVariable");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.FloatVariable instead (UnityUpgradable) -> UnityEngine.Localization.SmartFormat.PersistentVariables.FloatVariable")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.FloatVariable
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.FloatGlobalVariable
class CORDL_TYPE FloatGlobalVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::FloatVariable {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::FloatGlobalVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb038b18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatGlobalVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatGlobalVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatGlobalVariable(FloatGlobalVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatGlobalVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatGlobalVariable(FloatGlobalVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::GlobalVariables::FloatGlobalVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
