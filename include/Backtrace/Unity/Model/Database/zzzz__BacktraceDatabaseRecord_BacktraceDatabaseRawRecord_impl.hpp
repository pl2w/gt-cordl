#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseRecord_BacktraceDatabaseRawRecord.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_BacktraceDatabaseRawRecord_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "Id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "recordName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dataPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hash", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachments", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord(::StringW  Id, ::StringW  recordName, ::StringW  dataPath, int64_t  size, ::StringW  hash, ::System::Collections::Generic::List_1<::StringW>*  attachments) noexcept  {
this->Id = Id;
this->recordName = recordName;
this->dataPath = dataPath;
this->size = size;
this->hash = hash;
this->attachments = attachments;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord()   {
}
