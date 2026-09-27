#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseRecord_BacktraceDatabaseRawRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseRecord_BacktraceDatabaseRawRecord)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct BacktraceDatabaseRecord_BacktraceDatabaseRawRecord;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, "Backtrace.Unity.Model.Database", "BacktraceDatabaseRecord/BacktraceDatabaseRawRecord");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Backtrace.Unity.Model.Database.BacktraceDatabaseRecord/BacktraceDatabaseRawRecord
struct CORDL_TYPE BacktraceDatabaseRecord_BacktraceDatabaseRawRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseRecord_BacktraceDatabaseRawRecord() ;

// Ctor Parameters [CppParam { name: "Id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "recordName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hash", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachments", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr BacktraceDatabaseRecord_BacktraceDatabaseRawRecord(::StringW  Id, ::StringW  recordName, ::StringW  dataPath, int64_t  size, ::StringW  hash, ::System::Collections::Generic::List_1<::StringW>*  attachments) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27632};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 ::StringW  Id;

/// @brief Field recordName, offset: 0x8, size: 0x8, def value: None
 ::StringW  recordName;

/// @brief Field dataPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  dataPath;

/// @brief Field size, offset: 0x18, size: 0x8, def value: None
 int64_t  size;

/// @brief Field hash, offset: 0x20, size: 0x8, def value: None
 ::StringW  hash;

/// @brief Field attachments, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  attachments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, recordName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, dataPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, hash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord, attachments) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
