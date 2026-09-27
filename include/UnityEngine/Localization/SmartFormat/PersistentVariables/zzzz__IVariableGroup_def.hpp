#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/IVariableGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVariableGroup)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "IVariableGroup");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.IVariableGroup
class CORDL_TYPE IVariableGroup {
public:
// Declarations
/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVariableGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVariableGroup(IVariableGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
