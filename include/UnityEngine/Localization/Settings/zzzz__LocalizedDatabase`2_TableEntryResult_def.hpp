#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedDatabase`2_TableEntryResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LocalizedDatabase`2_TableEntryResult)
// Forward declare root types
namespace GlobalNamespace {
template<typename TTable,typename TEntry>
struct LocalizedDatabase_2_TableEntryResult;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LocalizedDatabase_2_TableEntryResult);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LocalizedDatabase_2_TableEntryResult, "UnityEngine.Localization.Settings", "LocalizedDatabase`2/TableEntryResult");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: true
// CS Name: UnityEngine.Localization.Settings.LocalizedDatabase`2/TableEntryResult<TTable,TEntry>
struct CORDL_TYPE LocalizedDatabase_2_TableEntryResult {
public:
// Declarations
 __declspec(property(get=get_Entry)) TEntry  Entry;

 __declspec(property(get=get_Table)) TTable  Table;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TEntry  entry, TTable  table) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Entry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry get_Entry() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Table, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TTable get_Table() ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalizedDatabase_2_TableEntryResult() ;

// Ctor Parameters [CppParam { name: "_Entry_k__BackingField", ty: "TEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Table_k__BackingField", ty: "TTable", modifiers: "", def_value: None, comment: None }]
constexpr LocalizedDatabase_2_TableEntryResult(TEntry  _Entry_k__BackingField, TTable  _Table_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <Entry>k__BackingField, offset: 0x0, size: 0x8, def value: None
 TEntry  _Entry_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Table>k__BackingField, offset: 0x8, size: 0x8, def value: None
 TTable  _Table_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
