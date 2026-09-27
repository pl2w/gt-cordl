#pragma once
// IWYU pragma private; include "System/Data/DataKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataKey)
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System::Data {
struct IndexField;
}
namespace System::Data {
class Index;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
struct DataKey;
}
// Write type traits
MARK_VAL_T(::System::Data::DataKey);
DEFINE_IL2CPP_CLASS(::System::Data::DataKey, "System.Data", "DataKey");
// [IsReadOnly]
// Dependencies System.Data.DataColumn
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataKey
struct CORDL_TYPE DataKey {
public:
// Declarations
 __declspec(property(get=get_ColumnsReference)) ::ArrayW<::System::Data::DataColumn*>  ColumnsReference;

 __declspec(property(get=get_HasValue)) bool  HasValue;

 __declspec(property(get=get_Table)) ::System::Data::DataTable*  Table;

/// @brief Method CheckState, addr 0xa921814, size 0x98, virtual false, abstract: false, final false
inline void CheckState() ;

/// @brief Method ColumnsEqual, addr 0xa9218cc, size 0xf0, virtual false, abstract: false, final false
static inline bool ColumnsEqual(::ArrayW<::System::Data::DataColumn*>  column1, ::ArrayW<::System::Data::DataColumn*>  column2) ;

/// @brief Method ColumnsEqual, addr 0xa9218c4, size 0x8, virtual false, abstract: false, final false
inline bool ColumnsEqual(::System::Data::DataKey  key) ;

/// @brief Method ContainsColumn, addr 0xa91ff04, size 0x64, virtual false, abstract: false, final false
inline bool ContainsColumn(::System::Data::DataColumn*  column) ;

/// @brief Method Equals, addr 0xa921a9c, size 0xb8, virtual false, abstract: false, final false
inline bool Equals(::System::Data::DataKey  value) ;

/// @brief Method Equals, addr 0xa921a20, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetColumnNames, addr 0xa921b54, size 0xc4, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetColumnNames() ;

/// @brief Method GetHashCode, addr 0xa9219bc, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIndexDesc, addr 0xa921c18, size 0xec, virtual false, abstract: false, final false
inline ::ArrayW<::System::Data::IndexField> GetIndexDesc() ;

/// @brief Method GetKeyValues, addr 0xa921d04, size 0x110, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> GetKeyValues(int32_t  record) ;

/// @brief Method GetSortIndex, addr 0xa921e14, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::Index* GetSortIndex() ;

/// @brief Method GetSortIndex, addr 0xa921e1c, size 0x58, virtual false, abstract: false, final false
inline ::System::Data::Index* GetSortIndex(::System::Data::DataViewRowState  recordStates) ;

/// @brief Method RecordsEqual, addr 0xa921e74, size 0x84, virtual false, abstract: false, final false
inline bool RecordsEqual(int32_t  record1, int32_t  record2) ;

/// @brief Method ToArray, addr 0xa921ef8, size 0xf4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Data::DataColumn*> ToArray() ;

/// @brief Method .ctor, addr 0xa9215fc, size 0x218, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Data::DataColumn*>  columns, bool  copyColumns) ;

/// @brief Method get_ColumnsReference, addr 0xa9218ac, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Data::DataColumn*> get_ColumnsReference() ;

/// @brief Method get_HasValue, addr 0xa9218b4, size 0x10, virtual false, abstract: false, final false
inline bool get_HasValue() ;

/// @brief Method get_Table, addr 0xa91d860, size 0x30, virtual false, abstract: false, final false
inline ::System::Data::DataTable* get_Table() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataKey() ;

// Ctor Parameters [CppParam { name: "_columns", ty: "::ArrayW<::System::Data::DataColumn*>", modifiers: "", def_value: None, comment: None }]
constexpr DataKey(::ArrayW<::System::Data::DataColumn*>  _columns) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20970};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _columns, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::System::Data::DataColumn*>  _columns;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataKey, _columns) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataKey) == 0x8, "Size mismatch!");

} // namespace end def System::Data
