#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedString_StringTableEntryVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LocalizedString_StringTableEntryVariable)
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
namespace UnityEngine::Localization::Tables {
class StringTableEntry;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalizedString_StringTableEntryVariable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizedString_StringTableEntryVariable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedString_StringTableEntryVariable, "UnityEngine.Localization", "LocalizedString/StringTableEntryVariable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.LocalizedString/StringTableEntryVariable
struct CORDL_TYPE LocalizedString_StringTableEntryVariable {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() ;

/// @brief Method ToString, addr 0xb0141bc, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetValue, addr 0xb013dfc, size 0x39c, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

/// @brief Method .ctor, addr 0xb013114, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  localized, ::UnityEngine::Localization::Tables::StringTableEntry*  entry) ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString_StringTableEntryVariable() ;

// Ctor Parameters [CppParam { name: "m_Localized", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StringTableEntry", ty: "::UnityEngine::Localization::Tables::StringTableEntry*", modifiers: "", def_value: None, comment: None }]
constexpr LocalizedString_StringTableEntryVariable(::StringW  m_Localized, ::UnityEngine::Localization::Tables::StringTableEntry*  m_StringTableEntry) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Localized, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Localized;

/// @brief Field m_StringTableEntry, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Localization::Tables::StringTableEntry*  m_StringTableEntry;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedString_StringTableEntryVariable, m_Localized) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedString_StringTableEntryVariable, m_StringTableEntry) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedString_StringTableEntryVariable) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
