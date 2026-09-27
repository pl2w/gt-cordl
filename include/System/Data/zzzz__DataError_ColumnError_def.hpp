#pragma once
// IWYU pragma private; include "System/Data/DataError_ColumnError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DataError_ColumnError)
namespace System::Data {
class DataColumn;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataError_ColumnError;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataError_ColumnError);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataError_ColumnError, "System.Data", "DataError/ColumnError");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Data.DataError/ColumnError
struct CORDL_TYPE DataError_ColumnError {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataError_ColumnError() ;

// Ctor Parameters [CppParam { name: "_column", ty: "::System::Data::DataColumn*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr DataError_ColumnError(::System::Data::DataColumn*  _column, ::StringW  _error) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20968};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _column, offset: 0x0, size: 0x8, def value: None
 ::System::Data::DataColumn*  _column;

/// @brief Field _error, offset: 0x8, size: 0x8, def value: None
 ::StringW  _error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataError_ColumnError, _column) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataError_ColumnError, _error) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataError_ColumnError) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
