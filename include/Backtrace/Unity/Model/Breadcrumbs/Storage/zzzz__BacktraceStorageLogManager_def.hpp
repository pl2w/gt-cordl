#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/Storage/BacktraceStorageLogManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceStorageLogManager)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
class IBreadcrumbFile;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IArchiveableBreadcrumbManager;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceLogManager;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct UnityEngineLogLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
class BacktraceStorageLogManager;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager*, "Backtrace.Unity.Model.Breadcrumbs.Storage", "BacktraceStorageLogManager");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Breadcrumbs::Storage {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.Storage.BacktraceStorageLogManager
class CORDL_TYPE BacktraceStorageLogManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BreadcrumbFile, put=set_BreadcrumbFile)) ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  BreadcrumbFile;

 __declspec(property(get=get_BreadcrumbsFilePath, put=set_BreadcrumbsFilePath)) ::StringW  BreadcrumbsFilePath;

 __declspec(property(get=get_BreadcrumbsSize, put=set_BreadcrumbsSize)) int64_t  BreadcrumbsSize;

/// @brief Field EndOfDocument, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EndOfDocument, put=setStaticF_EndOfDocument)) ::ArrayW<uint8_t>  EndOfDocument;

/// @brief Field NewRow, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NewRow, put=setStaticF_NewRow)) ::ArrayW<uint8_t>  NewRow;

/// @brief Field StartOfDocument, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StartOfDocument, put=setStaticF_StartOfDocument)) ::ArrayW<uint8_t>  StartOfDocument;

/// @brief Field <BreadcrumbFile>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__BreadcrumbFile_k__BackingField, put=__cordl_internal_set__BreadcrumbFile_k__BackingField)) ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  _BreadcrumbFile_k__BackingField;

/// @brief Field <BreadcrumbsFilePath>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BreadcrumbsFilePath_k__BackingField, put=__cordl_internal_set__BreadcrumbsFilePath_k__BackingField)) ::StringW  _BreadcrumbsFilePath_k__BackingField;

/// @brief Field _breadcrumbId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbId, put=__cordl_internal_set__breadcrumbId)) double_t  _breadcrumbId;

/// @brief Field _breadcrumbsSize, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbsSize, put=__cordl_internal_set__breadcrumbsSize)) int64_t  _breadcrumbsSize;

/// @brief Field _emptyFile, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__emptyFile, put=__cordl_internal_set__emptyFile)) bool  _emptyFile;

/// @brief Field _lockObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockObject, put=__cordl_internal_set__lockObject)) ::System::Object*  _lockObject;

/// @brief Field _logSize, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__logSize, put=__cordl_internal_set__logSize)) ::System::Collections::Generic::Queue_1<int64_t>*  _logSize;

/// @brief Field _storagePath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__storagePath, put=__cordl_internal_set__storagePath)) ::StringW  _storagePath;

/// @brief Field currentSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int64_t  currentSize;

/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager"
constexpr operator  ::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*() noexcept;

/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr operator  ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*() noexcept;

/// @brief Method Add, addr 0x5f1e9c0, size 0x2dc, virtual true, abstract: false, final true
inline bool Add(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method AppendBreadcrumb, addr 0x5f1f48c, size 0x3a8, virtual false, abstract: false, final false
inline bool AppendBreadcrumb(::ArrayW<uint8_t>  bytes) ;

/// @brief Method Archive, addr 0x5f1fb88, size 0xec, virtual true, abstract: false, final true
inline ::StringW Archive() ;

/// @brief Method BreadcrumbId, addr 0x5f1fb80, size 0x8, virtual true, abstract: false, final true
inline double_t BreadcrumbId() ;

/// @brief Method Clear, addr 0x5f1f9e8, size 0x150, virtual true, abstract: false, final true
inline bool Clear() ;

/// @brief Method ClearOldLogs, addr 0x5f1f02c, size 0x460, virtual false, abstract: false, final false
inline void ClearOldLogs() ;

/// @brief Method CreateBreadcrumbJson, addr 0x5f1ec9c, size 0x31c, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* CreateBreadcrumbJson(double_t  id, ::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Enable, addr 0x5f1e5b8, size 0x408, virtual true, abstract: false, final true
inline bool Enable() ;

/// @brief Method GetNextStartPosition, addr 0x5f1f8f0, size 0xf8, virtual false, abstract: false, final false
inline int64_t GetNextStartPosition() ;

/// @brief Method Length, addr 0x5f1fb38, size 0x48, virtual true, abstract: false, final true
inline int32_t Length() ;

static inline ::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager* New_ctor(::StringW  storagePath) ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* const& __cordl_internal_get__BreadcrumbFile_k__BackingField() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*& __cordl_internal_get__BreadcrumbFile_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__BreadcrumbsFilePath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__BreadcrumbsFilePath_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__breadcrumbId() const;

constexpr double_t& __cordl_internal_get__breadcrumbId() ;

constexpr int64_t const& __cordl_internal_get__breadcrumbsSize() const;

constexpr int64_t& __cordl_internal_get__breadcrumbsSize() ;

constexpr bool const& __cordl_internal_get__emptyFile() const;

constexpr bool& __cordl_internal_get__emptyFile() ;

constexpr ::System::Object* const& __cordl_internal_get__lockObject() const;

constexpr ::System::Object*& __cordl_internal_get__lockObject() ;

constexpr ::System::Collections::Generic::Queue_1<int64_t>* const& __cordl_internal_get__logSize() const;

constexpr ::System::Collections::Generic::Queue_1<int64_t>*& __cordl_internal_get__logSize() ;

constexpr ::StringW const& __cordl_internal_get__storagePath() const;

constexpr ::StringW& __cordl_internal_get__storagePath() ;

constexpr int64_t const& __cordl_internal_get_currentSize() const;

constexpr int64_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set__BreadcrumbFile_k__BackingField(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  value) ;

constexpr void __cordl_internal_set__BreadcrumbsFilePath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__breadcrumbId(double_t  value) ;

constexpr void __cordl_internal_set__breadcrumbsSize(int64_t  value) ;

constexpr void __cordl_internal_set__emptyFile(bool  value) ;

constexpr void __cordl_internal_set__lockObject(::System::Object*  value) ;

constexpr void __cordl_internal_set__logSize(::System::Collections::Generic::Queue_1<int64_t>*  value) ;

constexpr void __cordl_internal_set__storagePath(::StringW  value) ;

constexpr void __cordl_internal_set_currentSize(int64_t  value) ;

/// @brief Method .ctor, addr 0x5f1e324, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(::StringW  storagePath) ;

static inline ::ArrayW<uint8_t> getStaticF_EndOfDocument() ;

static inline ::ArrayW<uint8_t> getStaticF_NewRow() ;

static inline ::ArrayW<uint8_t> getStaticF_StartOfDocument() ;

/// [CompilerGenerated]
/// @brief Method get_BreadcrumbFile, addr 0x5f1e314, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* get_BreadcrumbFile() ;

/// [CompilerGenerated]
/// @brief Method get_BreadcrumbsFilePath, addr 0x5f1e29c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_BreadcrumbsFilePath() ;

/// @brief Method get_BreadcrumbsSize, addr 0x5f1e2ac, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BreadcrumbsSize() ;

/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager* i___Backtrace__Unity__Model__Breadcrumbs__IArchiveableBreadcrumbManager() noexcept;

/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager* i___Backtrace__Unity__Model__Breadcrumbs__IBacktraceLogManager() noexcept;

static inline void setStaticF_EndOfDocument(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_NewRow(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_StartOfDocument(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_BreadcrumbFile, addr 0x5f1e31c, size 0x8, virtual false, abstract: false, final false
inline void set_BreadcrumbFile(::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  value) ;

/// [CompilerGenerated]
/// @brief Method set_BreadcrumbsFilePath, addr 0x5f1e2a4, size 0x8, virtual false, abstract: false, final false
inline void set_BreadcrumbsFilePath(::StringW  value) ;

/// @brief Method set_BreadcrumbsSize, addr 0x5f1e2b4, size 0x60, virtual false, abstract: false, final false
inline void set_BreadcrumbsSize(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceStorageLogManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceStorageLogManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceStorageLogManager(BacktraceStorageLogManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceStorageLogManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceStorageLogManager(BacktraceStorageLogManager const& ) = delete;

/// @brief Field BreadcrumbLogFileName offset 0xffffffff size 0x8
static constexpr ::ConstString  BreadcrumbLogFileName{u"bt-breadcrumbs-0"};

/// @brief Field BreadcrumbLogFilePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  BreadcrumbLogFilePrefix{u"bt-breadcrumbs"};

/// @brief Field MinimumBreadcrumbsFileSize offset 0xffffffff size 0x4
static constexpr int32_t  MinimumBreadcrumbsFileSize{static_cast<int32_t>(0x2710)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27643};

/// [CompilerGenerated]
/// @brief Field <BreadcrumbsFilePath>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____BreadcrumbsFilePath_k__BackingField;

/// @brief Field _breadcrumbsSize, offset: 0x18, size: 0x8, def value: None
 int64_t  ____breadcrumbsSize;

/// @brief Field _emptyFile, offset: 0x20, size: 0x1, def value: None
 bool  ____emptyFile;

/// @brief Field _breadcrumbId, offset: 0x28, size: 0x8, def value: None
 double_t  ____breadcrumbId;

/// @brief Field _lockObject, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ____lockObject;

/// @brief Field currentSize, offset: 0x38, size: 0x8, def value: None
 int64_t  ___currentSize;

/// @brief Field _logSize, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int64_t>*  ____logSize;

/// @brief Field _storagePath, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____storagePath;

/// [CompilerGenerated]
/// @brief Field <BreadcrumbFile>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*  ____BreadcrumbFile_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____BreadcrumbsFilePath_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____breadcrumbsSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____emptyFile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____breadcrumbId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____lockObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ___currentSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____logSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____storagePath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager, ____BreadcrumbFile_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::Storage::BacktraceStorageLogManager) == 0x58, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs::Storage
