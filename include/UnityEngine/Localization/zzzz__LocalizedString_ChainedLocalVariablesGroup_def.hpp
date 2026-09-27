#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedString_ChainedLocalVariablesGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LocalizedString_ChainedLocalVariablesGroup)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalizedString_ChainedLocalVariablesGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizedString_ChainedLocalVariablesGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedString_ChainedLocalVariablesGroup, "UnityEngine.Localization", "LocalizedString/ChainedLocalVariablesGroup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.LocalizedString/ChainedLocalVariablesGroup
struct CORDL_TYPE LocalizedString_ChainedLocalVariablesGroup {
public:
// Declarations
 __declspec(property(get=get_Group, put=set_Group)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  Group;

 __declspec(property(get=get_ParentGroup, put=set_ParentGroup)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  ParentGroup;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() ;

/// @brief Method TryGetValue, addr 0xb0141e4, size 0x148, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

/// @brief Method .ctor, addr 0xb013144, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  group, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  parent) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Group, addr 0xb0141d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* get_Group() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ParentGroup, addr 0xb0141c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* get_ParentGroup() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() ;

/// [CompilerGenerated]
/// @brief Method set_Group, addr 0xb0141dc, size 0x8, virtual false, abstract: false, final false
inline void set_Group(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ParentGroup, addr 0xb0141cc, size 0x8, virtual false, abstract: false, final false
inline void set_ParentGroup(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString_ChainedLocalVariablesGroup() ;

// Ctor Parameters [CppParam { name: "_ParentGroup_k__BackingField", ty: "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Group_k__BackingField", ty: "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*", modifiers: "", def_value: None, comment: None }]
constexpr LocalizedString_ChainedLocalVariablesGroup(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  _ParentGroup_k__BackingField, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  _Group_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <ParentGroup>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  _ParentGroup_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Group>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  _Group_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedString_ChainedLocalVariablesGroup, _ParentGroup_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedString_ChainedLocalVariablesGroup, _Group_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedString_ChainedLocalVariablesGroup) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
