#pragma once
// IWYU pragma private; include "System/Data/DataTable_RowDiffIdUsageSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DataTable_RowDiffIdUsageSection)
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataTable_RowDiffIdUsageSection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataTable_RowDiffIdUsageSection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataTable_RowDiffIdUsageSection, "System.Data", "DataTable/RowDiffIdUsageSection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Data.DataTable/RowDiffIdUsageSection
struct CORDL_TYPE DataTable_RowDiffIdUsageSection {
public:
// Declarations
/// @brief Method Prepare, addr 0xa912d58, size 0x2c, virtual false, abstract: false, final false
inline void Prepare(::System::Data::DataTable*  table) ;

// Ctor Parameters []
// @brief default ctor
constexpr DataTable_RowDiffIdUsageSection() ;

// Ctor Parameters [CppParam { name: "_targetTable", ty: "::System::Data::DataTable*", modifiers: "", def_value: None, comment: None }]
constexpr DataTable_RowDiffIdUsageSection(::System::Data::DataTable*  _targetTable) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _targetTable, offset: 0x0, size: 0x8, def value: None
 ::System::Data::DataTable*  _targetTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataTable_RowDiffIdUsageSection, _targetTable) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataTable_RowDiffIdUsageSection) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
