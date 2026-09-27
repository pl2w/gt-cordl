#pragma once
// IWYU pragma private; include "System/Data/DataError_ColumnError.hpp"
#include "System/Data/zzzz__DataError_ColumnError_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
// Ctor Parameters [CppParam { name: "_column", ty: "::System::Data::DataColumn*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_error", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataError_ColumnError::DataError_ColumnError(::System::Data::DataColumn*  _column, ::StringW  _error) noexcept  {
this->_column = _column;
this->_error = _error;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataError_ColumnError::DataError_ColumnError()   {
}
