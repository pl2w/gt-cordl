#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/GlobalVariables/StringGlobalVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__StringVariable_def.hpp"
CORDL_MODULE_EXPORT(StringGlobalVariable)
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
class StringGlobalVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::GlobalVariables::StringGlobalVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::GlobalVariables::StringGlobalVariable*, "UnityEngine.Localization.SmartFormat.GlobalVariables", "StringGlobalVariable");
// [Obsolete("Please use UnityEngine.Localization.SmartFormat.PersistentVariables.StringVariable instead (UnityUpgradable) -> UnityEngine.Localization.SmartFormat.PersistentVariables.StringVariable")]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.StringVariable
namespace UnityEngine::Localization::SmartFormat::GlobalVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.GlobalVariables.StringGlobalVariable
class CORDL_TYPE StringGlobalVariable : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::StringVariable {
public:
// Declarations
static inline ::UnityEngine::Localization::SmartFormat::GlobalVariables::StringGlobalVariable* New_ctor() ;

/// @brief Method .ctor, addr 0xb038b20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringGlobalVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringGlobalVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringGlobalVariable(StringGlobalVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringGlobalVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringGlobalVariable(StringGlobalVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::GlobalVariables::StringGlobalVariable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::GlobalVariables
