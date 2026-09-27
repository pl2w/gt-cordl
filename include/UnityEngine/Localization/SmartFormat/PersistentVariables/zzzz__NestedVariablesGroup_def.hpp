#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/NestedVariablesGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__Variable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NestedVariablesGroup)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class NestedVariablesGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "NestedVariablesGroup");
// [DisplayName("Nested Variables Group", null)]
// Dependencies UnityEngine.Localization.SmartFormat.PersistentVariables.Variable`1<T>
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.NestedVariablesGroup
class CORDL_TYPE NestedVariablesGroup : public ::UnityEngine::Localization::SmartFormat::PersistentVariables::Variable_1<::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>> {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup* New_ctor() ;

/// @brief Method TryGetValue, addr 0xb049fc0, size 0xbc, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

/// @brief Method .ctor, addr 0xb04a118, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NestedVariablesGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NestedVariablesGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NestedVariablesGroup(NestedVariablesGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NestedVariablesGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NestedVariablesGroup(NestedVariablesGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::NestedVariablesGroup) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
