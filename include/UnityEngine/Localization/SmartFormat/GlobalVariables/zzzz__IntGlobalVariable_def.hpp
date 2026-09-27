#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/IntGlobalVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IntVariable_def.hpp"
CORDL_MODULE_EXPORT(IntGlobalVariable)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class IntGlobalVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::IntGlobalVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::IntGlobalVariable*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "IntGlobalVariable");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.IntVariable instead (UnityUpgradable) -> UnityEngine.Localization.SmartFormat.PersistentVariables.IntVariable")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.IntVariable
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.IntGlobalVariable
class CORDL_TYPE IntGlobalVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::IntGlobalVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb038b28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntGlobalVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntGlobalVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntGlobalVariable(IntGlobalVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntGlobalVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntGlobalVariable(IntGlobalVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25180};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::GlobalVariables::IntGlobalVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
