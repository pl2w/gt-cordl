#pragma once
// IWYU pragma private; include "System/Data/DataTable_DSRowDiffIdUsageSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DataTable_DSRowDiffIdUsageSection)
namespace System::Data {
class DataSet;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataTable_DSRowDiffIdUsageSection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataTable_DSRowDiffIdUsageSection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataTable_DSRowDiffIdUsageSection, "System.Data", "DataTable/DSRowDiffIdUsageSection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Data.DataTable/DSRowDiffIdUsageSection
struct CORDL_TYPE DataTable_DSRowDiffIdUsageSection {
public:
// Declarations
/// @brief Method Prepare, addr 0xa90f4b4, size 0x7c, virtual false, abstract: false, final false
inline void Prepare(::System::Data::DataSet*  ds) ;

// Ctor Parameters []
// @brief default ctor
constexpr DataTable_DSRowDiffIdUsageSection() ;

// Ctor Parameters [CppParam { name: "_targetDS", ty: "::System::Data::DataSet*", modifiers: "", def_value: None, comment: None }]
constexpr DataTable_DSRowDiffIdUsageSection(::System::Data::DataSet*  _targetDS) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _targetDS, offset: 0x0, size: 0x8, def value: None
 ::System::Data::DataSet*  _targetDS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataTable_DSRowDiffIdUsageSection, _targetDS) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataTable_DSRowDiffIdUsageSection) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
