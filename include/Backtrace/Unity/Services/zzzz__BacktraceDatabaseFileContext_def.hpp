#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceDatabaseFileContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseFileContext)
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabaseFileContext;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseAttachmentManager;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseSettings;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseFileContext___c;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseFileContext___c__DisplayClass16_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class FileInfo;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Backtrace::Unity::Services {
class BacktraceDatabaseFileContext;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseFileContext___c;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseFileContext___c__DisplayClass16_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Services::BacktraceDatabaseFileContext*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceDatabaseFileContext*, "Backtrace.Unity.Services", "BacktraceDatabaseFileContext");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*, "Backtrace.Unity.Services", "BacktraceDatabaseFileContext/<>c");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0*, "Backtrace.Unity.Services", "BacktraceDatabaseFileContext/<>c__DisplayClass16_0");
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceDatabaseFileContext
class CORDL_TYPE BacktraceDatabaseFileContext : public ::System::Object {
public:
// Declarations
using __c = ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c;

using __c__DisplayClass16_0 = ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0;

 __declspec(property(get=get_ScreenshotMaxHeight, put=set_ScreenshotMaxHeight)) int32_t  ScreenshotMaxHeight;

 __declspec(property(get=get_ScreenshotQuality, put=set_ScreenshotQuality)) int32_t  ScreenshotQuality;

/// @brief Field _attachmentManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachmentManager, put=__cordl_internal_set__attachmentManager)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*  _attachmentManager;

/// @brief Field _databaseDirectoryInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__databaseDirectoryInfo, put=__cordl_internal_set__databaseDirectoryInfo)) ::System::IO::DirectoryInfo*  _databaseDirectoryInfo;

/// @brief Field _maxDatabaseSize, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxDatabaseSize, put=__cordl_internal_set__maxDatabaseSize)) int64_t  _maxDatabaseSize;

/// @brief Field _maxRecordNumber, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRecordNumber, put=__cordl_internal_set__maxRecordNumber)) uint32_t  _maxRecordNumber;

/// @brief Field _path, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__path, put=__cordl_internal_set__path)) ::StringW  _path;

/// @brief Field _possibleDatabaseExtension, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__possibleDatabaseExtension, put=__cordl_internal_set__possibleDatabaseExtension)) ::ArrayW<::StringW>  _possibleDatabaseExtension;

/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext"
constexpr operator  ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*() noexcept;

/// @brief Method Clear, addr 0x5f0a890, size 0x74, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Delete, addr 0x5f0ac3c, size 0x150, virtual false, abstract: false, final false
inline void Delete(::StringW  path) ;

/// @brief Method Delete, addr 0x5f0a904, size 0x338, virtual true, abstract: false, final true
inline void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method GenerateRecordAttachments, addr 0x5f0ae2c, size 0x18, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GenerateRecordAttachments(::Backtrace::Unity::Model::BacktraceData*  data) ;

/// @brief Method GetAll, addr 0x5f0a128, size 0x18, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* GetAll() ;

/// @brief Method GetRecords, addr 0x5f0a140, size 0x134, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileInfo*>* GetRecords() ;

/// @brief Method IsDatabaseDependency, addr 0x5f0ad8c, size 0xa0, virtual false, abstract: false, final false
inline bool IsDatabaseDependency(::StringW  path) ;

/// @brief Method IsValidRecord, addr 0x5f0b6d8, size 0x18, virtual true, abstract: false, final true
inline bool IsValidRecord(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext* New_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings) ;

/// @brief Method RemoveOrphaned, addr 0x5f0a274, size 0x4c4, virtual true, abstract: false, final true
inline void RemoveOrphaned(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*  existingRecords) ;

/// @brief Method Save, addr 0x5f0ae44, size 0x65c, virtual true, abstract: false, final true
inline bool Save(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method Save, addr 0x5f0b500, size 0x1d8, virtual false, abstract: false, final false
inline int32_t Save(::StringW  json, ::StringW  destPath) ;

/// @brief Method ValidFileConsistency, addr 0x5f0a740, size 0x150, virtual true, abstract: false, final true
inline bool ValidFileConsistency() ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager* const& __cordl_internal_get__attachmentManager() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*& __cordl_internal_get__attachmentManager() ;

constexpr ::System::IO::DirectoryInfo* const& __cordl_internal_get__databaseDirectoryInfo() const;

constexpr ::System::IO::DirectoryInfo*& __cordl_internal_get__databaseDirectoryInfo() ;

constexpr int64_t const& __cordl_internal_get__maxDatabaseSize() const;

constexpr int64_t& __cordl_internal_get__maxDatabaseSize() ;

constexpr uint32_t const& __cordl_internal_get__maxRecordNumber() const;

constexpr uint32_t& __cordl_internal_get__maxRecordNumber() ;

constexpr ::StringW const& __cordl_internal_get__path() const;

constexpr ::StringW& __cordl_internal_get__path() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__possibleDatabaseExtension() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__possibleDatabaseExtension() ;

constexpr void __cordl_internal_set__attachmentManager(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*  value) ;

constexpr void __cordl_internal_set__databaseDirectoryInfo(::System::IO::DirectoryInfo*  value) ;

constexpr void __cordl_internal_set__maxDatabaseSize(int64_t  value) ;

constexpr void __cordl_internal_set__maxRecordNumber(uint32_t  value) ;

constexpr void __cordl_internal_set__path(::StringW  value) ;

constexpr void __cordl_internal_set__possibleDatabaseExtension(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x5f03608, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings) ;

/// @brief Method get_ScreenshotMaxHeight, addr 0x5f0a0a4, size 0x18, virtual true, abstract: false, final true
inline int32_t get_ScreenshotMaxHeight() ;

/// @brief Method get_ScreenshotQuality, addr 0x5f09ff8, size 0x18, virtual true, abstract: false, final true
inline int32_t get_ScreenshotQuality() ;

/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* i___Backtrace__Unity__Interfaces__IBacktraceDatabaseFileContext() noexcept;

/// @brief Method set_ScreenshotMaxHeight, addr 0x5f0a0bc, size 0x6c, virtual true, abstract: false, final true
inline void set_ScreenshotMaxHeight(int32_t  value) ;

/// @brief Method set_ScreenshotQuality, addr 0x5f0a010, size 0x94, virtual true, abstract: false, final true
inline void set_ScreenshotQuality(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseFileContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseFileContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseFileContext(BacktraceDatabaseFileContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseFileContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseFileContext(BacktraceDatabaseFileContext const& ) = delete;

/// @brief Field RecordFilterRegex offset 0xffffffff size 0x8
static constexpr ::ConstString  RecordFilterRegex{u"*-record.json"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27578};

/// @brief Field _possibleDatabaseExtension, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____possibleDatabaseExtension;

/// @brief Field _maxDatabaseSize, offset: 0x18, size: 0x8, def value: None
 int64_t  ____maxDatabaseSize;

/// @brief Field _maxRecordNumber, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____maxRecordNumber;

/// @brief Field _databaseDirectoryInfo, offset: 0x28, size: 0x8, def value: None
 ::System::IO::DirectoryInfo*  ____databaseDirectoryInfo;

/// @brief Field _attachmentManager, offset: 0x30, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*  ____attachmentManager;

/// @brief Field _path, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext, ____possibleDatabaseExtension) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext, ____maxDatabaseSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext, ____maxRecordNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext, ____databaseDirectoryInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext, ____attachmentManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext, ____path) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext) == 0x40, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c__DisplayClass16_0
class CORDL_TYPE BacktraceDatabaseFileContext___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field file, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_file, put=__cordl_internal_set_file)) ::System::IO::FileInfo*  file;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <RemoveOrphaned>b__1, addr 0x5f0b790, size 0x30, virtual false, abstract: false, final false
inline bool _RemoveOrphaned_b__1(::StringW  n) ;

constexpr ::System::IO::FileInfo* const& __cordl_internal_get_file() const;

constexpr ::System::IO::FileInfo*& __cordl_internal_get_file() ;

constexpr void __cordl_internal_set_file(::System::IO::FileInfo*  value) ;

/// @brief Method .ctor, addr 0x5f0a738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseFileContext___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseFileContext___c__DisplayClass16_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseFileContext___c__DisplayClass16_0(BacktraceDatabaseFileContext___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseFileContext___c__DisplayClass16_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseFileContext___c__DisplayClass16_0(BacktraceDatabaseFileContext___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27577};

/// @brief Field file, offset: 0x10, size: 0x8, def value: None
 ::System::IO::FileInfo*  ___file;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0, ___file) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c__DisplayClass16_0) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c
class CORDL_TYPE BacktraceDatabaseFileContext___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Func_2<::System::IO::FileInfo*,::System::DateTime>*  __9__15_0;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>*  __9__16_0;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c* New_ctor() ;

/// @brief Method <GetRecords>b__15_0, addr 0x5f0b760, size 0x18, virtual false, abstract: false, final false
inline ::System::DateTime _GetRecords_b__15_0(::System::IO::FileInfo*  n) ;

/// @brief Method <RemoveOrphaned>b__16_0, addr 0x5f0b778, size 0x18, virtual false, abstract: false, final false
inline ::StringW _RemoveOrphaned_b__16_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

/// @brief Method .ctor, addr 0x5f0b758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c* getStaticF___9() ;

static inline ::System::Func_2<::System::IO::FileInfo*,::System::DateTime>* getStaticF___9__15_0() ;

static inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>* getStaticF___9__16_0() ;

static inline void setStaticF___9(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c*  value) ;

static inline void setStaticF___9__15_0(::System::Func_2<::System::IO::FileInfo*,::System::DateTime>*  value) ;

static inline void setStaticF___9__16_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseFileContext___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseFileContext___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseFileContext___c(BacktraceDatabaseFileContext___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseFileContext___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseFileContext___c(BacktraceDatabaseFileContext___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Services::BacktraceDatabaseFileContext___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
