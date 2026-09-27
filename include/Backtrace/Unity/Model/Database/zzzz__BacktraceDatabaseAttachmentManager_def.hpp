#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseAttachmentManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseAttachmentManager)
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseSettings;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseAttachmentManager;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager*, "Backtrace.Unity.Model.Database", "BacktraceDatabaseAttachmentManager");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Database {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Database.BacktraceDatabaseAttachmentManager
class CORDL_TYPE BacktraceDatabaseAttachmentManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ScreenshotMaxHeight, put=set_ScreenshotMaxHeight)) int32_t  ScreenshotMaxHeight;

 __declspec(property(get=get_ScreenshotQuality, put=set_ScreenshotQuality)) int32_t  ScreenshotQuality;

/// @brief Field <ScreenshotMaxHeight>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScreenshotMaxHeight_k__BackingField, put=__cordl_internal_set__ScreenshotMaxHeight_k__BackingField)) int32_t  _ScreenshotMaxHeight_k__BackingField;

/// @brief Field <ScreenshotQuality>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScreenshotQuality_k__BackingField, put=__cordl_internal_set__ScreenshotQuality_k__BackingField)) int32_t  _ScreenshotQuality_k__BackingField;

/// @brief Field _lastScreenPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastScreenPath, put=__cordl_internal_set__lastScreenPath)) ::StringW  _lastScreenPath;

/// @brief Field _lastScreenTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastScreenTime, put=__cordl_internal_set__lastScreenTime)) float_t  _lastScreenTime;

/// @brief Field _lock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Field _settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  _settings;

/// @brief Method AddIfPathIsNotEmpty, addr 0x5f1bf34, size 0xc4, virtual false, abstract: false, final false
inline void AddIfPathIsNotEmpty(::System::Collections::Generic::List_1<::StringW>*  source, ::StringW  attachmentPath) ;

/// @brief Method GetMinidumpPath, addr 0x5f1c05c, size 0x70, virtual false, abstract: false, final false
inline ::StringW GetMinidumpPath(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::StringW  dataPrefix) ;

/// @brief Method GetReportAttachments, addr 0x5f1b80c, size 0x1a8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetReportAttachments(::Backtrace::Unity::Model::BacktraceData*  data) ;

/// @brief Method GetScreenshotPath, addr 0x5f1b9b4, size 0x580, virtual false, abstract: false, final false
inline ::StringW GetScreenshotPath(::StringW  dataPrefix) ;

/// @brief Method GetUnityPlayerLogFile, addr 0x5f1bff8, size 0x64, virtual false, abstract: false, final false
inline ::StringW GetUnityPlayerLogFile(::Backtrace::Unity::Model::BacktraceData*  backtraceData, ::StringW  dataPrefix) ;

static inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager* New_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings) ;

constexpr int32_t const& __cordl_internal_get__ScreenshotMaxHeight_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ScreenshotMaxHeight_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ScreenshotQuality_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ScreenshotQuality_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__lastScreenPath() const;

constexpr ::StringW& __cordl_internal_get__lastScreenPath() ;

constexpr float_t const& __cordl_internal_get__lastScreenTime() const;

constexpr float_t& __cordl_internal_get__lastScreenTime() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* const& __cordl_internal_get__settings() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*& __cordl_internal_get__settings() ;

constexpr void __cordl_internal_set__ScreenshotMaxHeight_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ScreenshotQuality_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__lastScreenPath(::StringW  value) ;

constexpr void __cordl_internal_set__lastScreenTime(float_t  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

constexpr void __cordl_internal_set__settings(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  value) ;

/// @brief Method .ctor, addr 0x5f1b770, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings) ;

/// [CompilerGenerated]
/// @brief Method get_ScreenshotMaxHeight, addr 0x5f1b750, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ScreenshotMaxHeight() ;

/// [CompilerGenerated]
/// @brief Method get_ScreenshotQuality, addr 0x5f1b760, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ScreenshotQuality() ;

/// [CompilerGenerated]
/// @brief Method set_ScreenshotMaxHeight, addr 0x5f1b758, size 0x8, virtual false, abstract: false, final false
inline void set_ScreenshotMaxHeight(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ScreenshotQuality, addr 0x5f1b768, size 0x8, virtual false, abstract: false, final false
inline void set_ScreenshotQuality(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseAttachmentManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseAttachmentManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseAttachmentManager(BacktraceDatabaseAttachmentManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseAttachmentManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseAttachmentManager(BacktraceDatabaseAttachmentManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27631};

/// [CompilerGenerated]
/// @brief Field <ScreenshotMaxHeight>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____ScreenshotMaxHeight_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ScreenshotQuality>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____ScreenshotQuality_k__BackingField;

/// @brief Field _settings, offset: 0x18, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  ____settings;

/// @brief Field _lastScreenTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____lastScreenTime;

/// @brief Field _lastScreenPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____lastScreenPath;

/// @brief Field _lock, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ____lock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager, ____ScreenshotMaxHeight_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager, ____ScreenshotQuality_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager, ____settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager, ____lastScreenTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager, ____lastScreenPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager, ____lock) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Database::BacktraceDatabaseAttachmentManager) == 0x38, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Database
