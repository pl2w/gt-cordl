#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseRecord)
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace GlobalNamespace {
struct BacktraceDatabaseRecord_BacktraceDatabaseRawRecord;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::IO {
class FileInfo;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*, "Backtrace.Unity.Model.Database", "BacktraceDatabaseRecord");
// Dependencies System.Guid, System.Object
namespace Backtrace::Unity::Model::Database {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Database.BacktraceDatabaseRecord
class CORDL_TYPE BacktraceDatabaseRecord : public ::System::Object {
public:
// Declarations
using BacktraceDatabaseRawRecord = ::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord;

 __declspec(property(get=get_Attachments, put=set_Attachments)) ::System::Collections::Generic::ICollection_1<::StringW>*  Attachments;

 __declspec(property(get=get_BacktraceData)) ::Backtrace::Unity::Model::BacktraceData*  BacktraceData;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_DiagnosticDataJson, put=set_DiagnosticDataJson)) ::StringW  DiagnosticDataJson;

 __declspec(property(get=get_DiagnosticDataPath, put=set_DiagnosticDataPath)) ::StringW  DiagnosticDataPath;

 __declspec(property(get=get_Duplicated)) bool  Duplicated;

/// @brief Field Hash, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hash, put=__cordl_internal_set_Hash)) ::StringW  Hash;

/// @brief Field Id, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::System::Guid  Id;

/// @brief Field Locked, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Locked, put=__cordl_internal_set_Locked)) bool  Locked;

 __declspec(property(get=get_Record, put=set_Record)) ::Backtrace::Unity::Model::BacktraceData*  Record;

 __declspec(property(get=get_RecordPath, put=set_RecordPath)) ::StringW  RecordPath;

 __declspec(property(get=get_Size, put=set_Size)) int64_t  Size;

/// @brief Field <Attachments>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Attachments_k__BackingField, put=__cordl_internal_set__Attachments_k__BackingField)) ::System::Collections::Generic::ICollection_1<::StringW>*  _Attachments_k__BackingField;

/// @brief Field <DiagnosticDataJson>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__DiagnosticDataJson_k__BackingField, put=__cordl_internal_set__DiagnosticDataJson_k__BackingField)) ::StringW  _DiagnosticDataJson_k__BackingField;

/// @brief Field <DiagnosticDataPath>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__DiagnosticDataPath_k__BackingField, put=__cordl_internal_set__DiagnosticDataPath_k__BackingField)) ::StringW  _DiagnosticDataPath_k__BackingField;

/// @brief Field <RecordPath>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__RecordPath_k__BackingField, put=__cordl_internal_set__RecordPath_k__BackingField)) ::StringW  _RecordPath_k__BackingField;

/// @brief Field <Record>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Record_k__BackingField, put=__cordl_internal_set__Record_k__BackingField)) ::Backtrace::Unity::Model::BacktraceData*  _Record_k__BackingField;

/// @brief Field <Size>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Size_k__BackingField, put=__cordl_internal_set__Size_k__BackingField)) int64_t  _Size_k__BackingField;

/// @brief Field _count, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Method BacktraceDataJson, addr 0x5f1c40c, size 0x9c, virtual false, abstract: false, final false
inline ::StringW BacktraceDataJson() ;

/// @brief Method Deserialize, addr 0x5f1c5e8, size 0x9c, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Deserialize(::StringW  json) ;

/// @brief Method Increment, addr 0x5f1c7d8, size 0x10, virtual true, abstract: false, final false
inline void Increment() ;

static inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* New_ctor(::Backtrace::Unity::Model::BacktraceData*  data) ;

static inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* New_ctor(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord  rawRecord) ;

/// @brief Method ReadFromFile, addr 0x5f1c7e8, size 0x1fc, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* ReadFromFile(::System::IO::FileInfo*  file) ;

/// @brief Method ToJson, addr 0x5f1c4c0, size 0x128, virtual false, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method Unlock, addr 0x5f1c9e4, size 0x10, virtual true, abstract: false, final false
inline void Unlock() ;

constexpr ::StringW const& __cordl_internal_get_Hash() const;

constexpr ::StringW& __cordl_internal_get_Hash() ;

constexpr ::System::Guid const& __cordl_internal_get_Id() const;

constexpr ::System::Guid& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_Locked() const;

constexpr bool& __cordl_internal_get_Locked() ;

constexpr ::System::Collections::Generic::ICollection_1<::StringW>* const& __cordl_internal_get__Attachments_k__BackingField() const;

constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& __cordl_internal_get__Attachments_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DiagnosticDataJson_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DiagnosticDataJson_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DiagnosticDataPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DiagnosticDataPath_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__RecordPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__RecordPath_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::BacktraceData* const& __cordl_internal_get__Record_k__BackingField() const;

constexpr ::Backtrace::Unity::Model::BacktraceData*& __cordl_internal_get__Record_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Size_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Size_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr void __cordl_internal_set_Hash(::StringW  value) ;

constexpr void __cordl_internal_set_Id(::System::Guid  value) ;

constexpr void __cordl_internal_set_Locked(bool  value) ;

constexpr void __cordl_internal_set__Attachments_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__DiagnosticDataJson_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DiagnosticDataPath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__RecordPath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Record_k__BackingField(::Backtrace::Unity::Model::BacktraceData*  value) ;

constexpr void __cordl_internal_set__Size_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f1c750, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceData*  data) ;

/// @brief Method .ctor, addr 0x5f1c684, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BacktraceDatabaseRecord_BacktraceDatabaseRawRecord  rawRecord) ;

/// [CompilerGenerated]
/// @brief Method get_Attachments, addr 0x5f1c3d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Attachments() ;

/// @brief Method get_BacktraceData, addr 0x5f1c4a8, size 0x18, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceData* get_BacktraceData() ;

/// @brief Method get_Count, addr 0x5f1c404, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_DiagnosticDataJson, addr 0x5f1c3e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DiagnosticDataJson() ;

/// [CompilerGenerated]
/// @brief Method get_DiagnosticDataPath, addr 0x5f1c3a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DiagnosticDataPath() ;

/// @brief Method get_Duplicated, addr 0x5f1c3f4, size 0x10, virtual false, abstract: false, final false
inline bool get_Duplicated() ;

/// [CompilerGenerated]
/// @brief Method get_Record, addr 0x5f1c3c4, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceData* get_Record() ;

/// [CompilerGenerated]
/// @brief Method get_RecordPath, addr 0x5f1c394, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RecordPath() ;

/// [CompilerGenerated]
/// @brief Method get_Size, addr 0x5f1c3b4, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Size() ;

/// [CompilerGenerated]
/// @brief Method set_Attachments, addr 0x5f1c3dc, size 0x8, virtual false, abstract: false, final false
inline void set_Attachments(::System::Collections::Generic::ICollection_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DiagnosticDataJson, addr 0x5f1c3ec, size 0x8, virtual false, abstract: false, final false
inline void set_DiagnosticDataJson(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_DiagnosticDataPath, addr 0x5f1c3ac, size 0x8, virtual false, abstract: false, final false
inline void set_DiagnosticDataPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Record, addr 0x5f1c3cc, size 0x8, virtual false, abstract: false, final false
inline void set_Record(::Backtrace::Unity::Model::BacktraceData*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RecordPath, addr 0x5f1c39c, size 0x8, virtual false, abstract: false, final false
inline void set_RecordPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Size, addr 0x5f1c3bc, size 0x8, virtual false, abstract: false, final false
inline void set_Size(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseRecord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseRecord", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseRecord(BacktraceDatabaseRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseRecord", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseRecord(BacktraceDatabaseRecord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27633};

/// @brief Field Id, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___Id;

/// @brief Field Locked, offset: 0x20, size: 0x1, def value: None
 bool  ___Locked;

/// [CompilerGenerated]
/// @brief Field <RecordPath>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____RecordPath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DiagnosticDataPath>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____DiagnosticDataPath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Size>k__BackingField, offset: 0x38, size: 0x8, def value: None
 int64_t  ____Size_k__BackingField;

/// @brief Field Hash, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Hash;

/// [CompilerGenerated]
/// @brief Field <Record>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceData*  ____Record_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Attachments>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<::StringW>*  ____Attachments_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DiagnosticDataJson>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____DiagnosticDataJson_k__BackingField;

/// @brief Field _count, offset: 0x60, size: 0x4, def value: None
 int32_t  ____count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ___Locked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____RecordPath_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____DiagnosticDataPath_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____Size_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ___Hash) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____Record_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____Attachments_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____DiagnosticDataJson_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord, ____count) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord) == 0x68, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Database
