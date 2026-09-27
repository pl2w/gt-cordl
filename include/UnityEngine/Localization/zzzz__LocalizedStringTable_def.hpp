#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedStringTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedTable_2_def.hpp"
CORDL_MODULE_EXPORT(LocalizedStringTable)
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
}
namespace UnityEngine::Localization::Tables {
class StringTableEntry;
}
namespace UnityEngine::Localization::Tables {
class StringTable;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedStringTable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedStringTable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedStringTable*, "UnityEngine.Localization", "LocalizedStringTable");
// Dependencies UnityEngine.Localization.LocalizedTable`2<TTable, TEntry>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedStringTable
class CORDL_TYPE LocalizedStringTable : public ::UnityEngine::Localization::LocalizedTable_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*> {
public:
// Declarations
 __declspec(property(get=get_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>*  Database;

static inline ::UnityEngine::Localization::LocalizedStringTable* New_ctor() ;

static inline ::UnityEngine::Localization::LocalizedStringTable* New_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference) ;

/// @brief Method .ctor, addr 0xb014ee4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb014f2c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::Tables::TableReference  tableReference) ;

/// @brief Method get_Database, addr 0xb014ee0, size 0x4, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>* get_Database() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedStringTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedStringTable(LocalizedStringTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedStringTable(LocalizedStringTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25056};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedStringTable) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::Localization
