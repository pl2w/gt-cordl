#pragma once
// IWYU pragma private; include "System/Data/DataError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataError_ColumnError_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataError)
namespace GlobalNamespace {
struct DataError_ColumnError;
}
namespace System::Data {
class DataColumn;
}
// Forward declare root types
namespace System::Data {
class DataError;
}
// Write type traits
MARK_REF_T(::System::Data::DataError*);
DEFINE_IL2CPP_CLASS(::System::Data::DataError*, "System.Data", "DataError");
// Dependencies System.Data.DataError::ColumnError, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataError
class CORDL_TYPE DataError : public ::System::Object {
public:
// Declarations
using ColumnError = ::GlobalNamespace::DataError_ColumnError;

 __declspec(property(get=get_HasErrors)) bool  HasErrors;

 __declspec(property(get=get_Text, put=set_Text)) ::StringW  Text;

/// @brief Field _count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _errorList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorList, put=__cordl_internal_set__errorList)) ::ArrayW<::GlobalNamespace::DataError_ColumnError>  _errorList;

/// @brief Field _rowError, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rowError, put=__cordl_internal_set__rowError)) ::StringW  _rowError;

/// @brief Method Clear, addr 0xa92148c, size 0x74, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0xa921230, size 0xac, virtual false, abstract: false, final false
inline void Clear(::System::Data::DataColumn*  column) ;

/// @brief Method GetColumnError, addr 0xa921428, size 0x64, virtual false, abstract: false, final false
inline ::StringW GetColumnError(::System::Data::DataColumn*  column) ;

/// @brief Method GetColumnsInError, addr 0xa921500, size 0xfc, virtual false, abstract: false, final false
inline ::ArrayW<::System::Data::DataColumn*> GetColumnsInError() ;

/// @brief Method IndexOf, addr 0xa9212dc, size 0x14c, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Data::DataColumn*  column) ;

static inline ::System::Data::DataError* New_ctor() ;

static inline ::System::Data::DataError* New_ctor(::StringW  rowError) ;

/// @brief Method SetColumnError, addr 0xa921100, size 0x130, virtual false, abstract: false, final false
inline void SetColumnError(::System::Data::DataColumn*  column, ::StringW  error) ;

/// @brief Method SetText, addr 0xa921088, size 0x20, virtual false, abstract: false, final false
inline void SetText(::StringW  errorText) ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr ::ArrayW<::GlobalNamespace::DataError_ColumnError> const& __cordl_internal_get__errorList() const;

constexpr ::ArrayW<::GlobalNamespace::DataError_ColumnError>& __cordl_internal_get__errorList() ;

constexpr ::StringW const& __cordl_internal_get__rowError() const;

constexpr ::StringW& __cordl_internal_get__rowError() ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__errorList(::ArrayW<::GlobalNamespace::DataError_ColumnError>  value) ;

constexpr void __cordl_internal_set__rowError(::StringW  value) ;

/// @brief Method .ctor, addr 0xa920fe4, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa921018, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  rowError) ;

/// @brief Method get_HasErrors, addr 0xa9210d0, size 0x30, virtual false, abstract: false, final false
inline bool get_HasErrors() ;

/// @brief Method get_Text, addr 0xa9210a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

/// @brief Method set_Text, addr 0xa9210b0, size 0x20, virtual false, abstract: false, final false
inline void set_Text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataError(DataError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataError(DataError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20969};

/// @brief Field _rowError, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____rowError;

/// @brief Field _count, offset: 0x18, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _errorList, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DataError_ColumnError>  ____errorList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataError, ____rowError) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError, ____count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError, ____errorList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Data::DataError) == 0x28, "Size mismatch!");

} // namespace end def System::Data
