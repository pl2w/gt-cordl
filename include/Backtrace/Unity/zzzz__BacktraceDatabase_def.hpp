#pragma once
// IWYU pragma private; include "Backtrace/Unity/BacktraceDatabase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabase)
namespace Backtrace::Unity::Interfaces {
class IBacktraceApi;
}
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabaseContext;
}
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabaseFileContext;
}
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabase;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseSettings;
}
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace Backtrace::Unity::Model {
class BacktraceResult;
}
namespace Backtrace::Unity::Services {
class ReportLimitWatcher;
}
namespace Backtrace::Unity::Types {
struct DeduplicationStrategy;
}
namespace Backtrace::Unity::Types {
struct MiniDumpType;
}
namespace Backtrace::Unity {
class BacktraceClient;
}
namespace Backtrace::Unity {
class BacktraceDatabase___c__DisplayClass59_0;
}
namespace Backtrace::Unity {
class BacktraceDatabase___c__DisplayClass60_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Backtrace::Unity {
class BacktraceDatabase;
}
namespace Backtrace::Unity {
class BacktraceDatabase___c__DisplayClass59_0;
}
namespace Backtrace::Unity {
class BacktraceDatabase___c__DisplayClass60_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::BacktraceDatabase*);
MARK_REF_T(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*);
MARK_REF_T(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceDatabase*, "Backtrace.Unity", "BacktraceDatabase");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*, "Backtrace.Unity", "BacktraceDatabase/<>c__DisplayClass59_0");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*, "Backtrace.Unity", "BacktraceDatabase/<>c__DisplayClass60_0");
// [RequireComponent(typeof(Backtrace.Unity.BacktraceClient))]
// Dependencies UnityEngine.MonoBehaviour
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceDatabase
class CORDL_TYPE BacktraceDatabase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass59_0 = ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0;

using __c__DisplayClass60_0 = ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0;

 __declspec(property(get=get_BacktraceApi, put=set_BacktraceApi)) ::Backtrace::Unity::Interfaces::IBacktraceApi*  BacktraceApi;

 __declspec(property(get=get_BacktraceDatabaseContext, put=set_BacktraceDatabaseContext)) ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  BacktraceDatabaseContext;

 __declspec(property(get=get_BacktraceDatabaseFileContext, put=set_BacktraceDatabaseFileContext)) ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  BacktraceDatabaseFileContext;

 __declspec(property(get=get_Breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*  Breadcrumbs;

/// @brief Field Configuration, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Configuration, put=__cordl_internal_set_Configuration)) ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  Configuration;

 __declspec(property(get=get_DatabasePath, put=set_DatabasePath)) ::StringW  DatabasePath;

 __declspec(property(get=get_DatabaseSettings, put=set_DatabaseSettings)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  DatabaseSettings;

 __declspec(property(get=get_DeduplicationStrategy, put=set_DeduplicationStrategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  DeduplicationStrategy;

 __declspec(property(get=get_Enable, put=set_Enable)) bool  Enable;

/// @brief Field LastFrameTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LastFrameTime, put=setStaticF_LastFrameTime)) float_t  LastFrameTime;

 __declspec(property(get=get_ScreenshotMaxHeight, put=set_ScreenshotMaxHeight)) int32_t  ScreenshotMaxHeight;

 __declspec(property(get=get_ScreenshotQuality, put=set_ScreenshotQuality)) int32_t  ScreenshotQuality;

/// @brief Field <BacktraceApi>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__BacktraceApi_k__BackingField, put=__cordl_internal_set__BacktraceApi_k__BackingField)) ::Backtrace::Unity::Interfaces::IBacktraceApi*  _BacktraceApi_k__BackingField;

/// @brief Field <BacktraceDatabaseContext>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__BacktraceDatabaseContext_k__BackingField, put=__cordl_internal_set__BacktraceDatabaseContext_k__BackingField)) ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  _BacktraceDatabaseContext_k__BackingField;

/// @brief Field <BacktraceDatabaseFileContext>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__BacktraceDatabaseFileContext_k__BackingField, put=__cordl_internal_set__BacktraceDatabaseFileContext_k__BackingField)) ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  _BacktraceDatabaseFileContext_k__BackingField;

/// @brief Field <DatabasePath>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DatabasePath_k__BackingField, put=__cordl_internal_set__DatabasePath_k__BackingField)) ::StringW  _DatabasePath_k__BackingField;

/// @brief Field <DatabaseSettings>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__DatabaseSettings_k__BackingField, put=__cordl_internal_set__DatabaseSettings_k__BackingField)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  _DatabaseSettings_k__BackingField;

/// @brief Field <Enable>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enable_k__BackingField, put=__cordl_internal_set__Enable_k__BackingField)) bool  _Enable_k__BackingField;

/// @brief Field _breadcrumbs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbs, put=__cordl_internal_set__breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  _breadcrumbs;

/// @brief Field _client, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) ::UnityW<::Backtrace::Unity::BacktraceClient>  _client;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Backtrace::Unity::BacktraceDatabase>  _instance;

/// @brief Field _lastConnection, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastConnection, put=__cordl_internal_set__lastConnection)) float_t  _lastConnection;

/// @brief Field _reportLimitWatcher, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__reportLimitWatcher, put=__cordl_internal_set__reportLimitWatcher)) ::Backtrace::Unity::Services::ReportLimitWatcher*  _reportLimitWatcher;

/// @brief Field _timerBackgroundWork, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__timerBackgroundWork, put=__cordl_internal_set__timerBackgroundWork)) bool  _timerBackgroundWork;

/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceDatabase"
constexpr operator  ::Backtrace::Unity::Interfaces::IBacktraceDatabase*() noexcept;

/// [Obsolete("Please use Add method with Backtrace data parameter instead")]
/// @brief Method Add, addr 0x5f04b28, size 0x54, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::BacktraceReport*  backtraceReport, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::Backtrace::Unity::Types::MiniDumpType  miniDumpType) ;

/// @brief Method Add, addr 0x5f041a4, size 0x76c, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::BacktraceData*  data, bool  lock) ;

/// @brief Method Awake, addr 0x5f03868, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x5f04038, size 0x16c, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Count, addr 0x5f053d8, size 0xb8, virtual false, abstract: false, final false
inline int32_t Count() ;

/// @brief Method Delete, addr 0x5f04c98, size 0x160, virtual true, abstract: false, final true
inline void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method EnableBreadcrumbsSupport, addr 0x5f03ff0, size 0x30, virtual true, abstract: false, final true
inline bool EnableBreadcrumbsSupport() ;

/// @brief Method Enabled, addr 0x5f04028, size 0x8, virtual true, abstract: false, final true
inline bool Enabled() ;

/// @brief Method Flush, addr 0x5f04df8, size 0x154, virtual true, abstract: false, final true
inline void Flush() ;

/// @brief Method FlushRecord, addr 0x5f04f4c, size 0x328, virtual false, abstract: false, final false
inline void FlushRecord(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method Get, addr 0x5f04b7c, size 0x11c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Get() ;

/// @brief Method GetBreadcrumbsPath, addr 0x5f063a8, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetBreadcrumbsPath() ;

/// @brief Method GetDatabaseSize, addr 0x5f05e9c, size 0xb8, virtual true, abstract: false, final true
inline int64_t GetDatabaseSize() ;

/// @brief Method GetSettings, addr 0x5f04030, size 0x8, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* GetSettings() ;

/// @brief Method IncrementBatchRetry, addr 0x5f05f5c, size 0x44c, virtual false, abstract: false, final false
inline void IncrementBatchRetry() ;

/// @brief Method InitializeDatabasePaths, addr 0x5f0567c, size 0x1c4, virtual true, abstract: false, final false
inline bool InitializeDatabasePaths() ;

/// @brief Method LoadReports, addr 0x5f05840, size 0x3c4, virtual true, abstract: false, final false
inline void LoadReports(::StringW  breadcrumbPath, ::StringW  breadcrumbArchive) ;

static inline ::Backtrace::Unity::BacktraceDatabase* New_ctor() ;

/// @brief Method OnDisable, addr 0x5f03860, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ReachedDiskSpaceLimit, addr 0x5f05d08, size 0xf0, virtual false, abstract: false, final false
inline bool ReachedDiskSpaceLimit() ;

/// @brief Method ReachedMaximumNumberOfRecords, addr 0x5f05c04, size 0x104, virtual false, abstract: false, final false
inline bool ReachedMaximumNumberOfRecords() ;

/// @brief Method Reload, addr 0x5f0318c, size 0x3dc, virtual true, abstract: false, final true
inline void Reload() ;

/// @brief Method RemoveOrphaned, addr 0x5f05490, size 0x138, virtual true, abstract: false, final false
inline void RemoveOrphaned() ;

/// @brief Method Send, addr 0x5f05274, size 0x154, virtual false, abstract: false, final false
inline void Send() ;

/// @brief Method SendData, addr 0x5f03a4c, size 0x34c, virtual false, abstract: false, final false
inline void SendData(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method SetApi, addr 0x5f04020, size 0x8, virtual true, abstract: false, final true
inline void SetApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  backtraceApi) ;

/// @brief Method SetReportWatcher, addr 0x5f05f54, size 0x8, virtual true, abstract: false, final true
inline void SetReportWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  reportLimitWatcher) ;

/// @brief Method SetupMultisceneSupport, addr 0x5f055c8, size 0xb4, virtual true, abstract: false, final false
inline void SetupMultisceneSupport() ;

/// @brief Method Start, addr 0x5f03d98, size 0x258, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5f0386c, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method ValidConsistency, addr 0x5f05df8, size 0xa4, virtual true, abstract: false, final true
inline bool ValidConsistency() ;

/// @brief Method ValidateDatabaseSize, addr 0x5f04910, size 0x218, virtual false, abstract: false, final false
inline bool ValidateDatabaseSize() ;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& __cordl_internal_get_Configuration() const;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& __cordl_internal_get_Configuration() ;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi* const& __cordl_internal_get__BacktraceApi_k__BackingField() const;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi*& __cordl_internal_get__BacktraceApi_k__BackingField() ;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* const& __cordl_internal_get__BacktraceDatabaseContext_k__BackingField() const;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*& __cordl_internal_get__BacktraceDatabaseContext_k__BackingField() ;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* const& __cordl_internal_get__BacktraceDatabaseFileContext_k__BackingField() const;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*& __cordl_internal_get__BacktraceDatabaseFileContext_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DatabasePath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DatabasePath_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* const& __cordl_internal_get__DatabaseSettings_k__BackingField() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*& __cordl_internal_get__DatabaseSettings_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Enable_k__BackingField() const;

constexpr bool& __cordl_internal_get__Enable_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& __cordl_internal_get__breadcrumbs() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& __cordl_internal_get__breadcrumbs() ;

constexpr ::UnityW<::Backtrace::Unity::BacktraceClient> const& __cordl_internal_get__client() const;

constexpr ::UnityW<::Backtrace::Unity::BacktraceClient>& __cordl_internal_get__client() ;

constexpr float_t const& __cordl_internal_get__lastConnection() const;

constexpr float_t& __cordl_internal_get__lastConnection() ;

constexpr ::Backtrace::Unity::Services::ReportLimitWatcher* const& __cordl_internal_get__reportLimitWatcher() const;

constexpr ::Backtrace::Unity::Services::ReportLimitWatcher*& __cordl_internal_get__reportLimitWatcher() ;

constexpr bool const& __cordl_internal_get__timerBackgroundWork() const;

constexpr bool& __cordl_internal_get__timerBackgroundWork() ;

constexpr void __cordl_internal_set_Configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value) ;

constexpr void __cordl_internal_set__BacktraceApi_k__BackingField(::Backtrace::Unity::Interfaces::IBacktraceApi*  value) ;

constexpr void __cordl_internal_set__BacktraceDatabaseContext_k__BackingField(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  value) ;

constexpr void __cordl_internal_set__BacktraceDatabaseFileContext_k__BackingField(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  value) ;

constexpr void __cordl_internal_set__DatabasePath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DatabaseSettings_k__BackingField(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  value) ;

constexpr void __cordl_internal_set__Enable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value) ;

constexpr void __cordl_internal_set__client(::UnityW<::Backtrace::Unity::BacktraceClient>  value) ;

constexpr void __cordl_internal_set__lastConnection(float_t  value) ;

constexpr void __cordl_internal_set__reportLimitWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  value) ;

constexpr void __cordl_internal_set__timerBackgroundWork(bool  value) ;

/// @brief Method .ctor, addr 0x5f063d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_LastFrameTime() ;

static inline ::UnityW<::Backtrace::Unity::BacktraceDatabase> getStaticF__instance() ;

/// [CompilerGenerated]
/// @brief Method get_BacktraceApi, addr 0x5f0314c, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Interfaces::IBacktraceApi* get_BacktraceApi() ;

/// [CompilerGenerated]
/// @brief Method get_BacktraceDatabaseContext, addr 0x5f0315c, size 0x8, virtual true, abstract: false, final false
inline ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* get_BacktraceDatabaseContext() ;

/// [CompilerGenerated]
/// @brief Method get_BacktraceDatabaseFileContext, addr 0x5f0316c, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* get_BacktraceDatabaseFileContext() ;

/// @brief Method get_Breadcrumbs, addr 0x5f02b44, size 0x10c, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* get_Breadcrumbs() ;

/// [CompilerGenerated]
/// @brief Method get_DatabasePath, addr 0x5f02c5c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DatabasePath() ;

/// [CompilerGenerated]
/// @brief Method get_DatabaseSettings, addr 0x5f0313c, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* get_DatabaseSettings() ;

/// @brief Method get_DeduplicationStrategy, addr 0x5f02f50, size 0xdc, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Types::DeduplicationStrategy get_DeduplicationStrategy() ;

/// [CompilerGenerated]
/// @brief Method get_Enable, addr 0x5f0317c, size 0x8, virtual false, abstract: false, final false
inline bool get_Enable() ;

/// @brief Method get_Instance, addr 0x5f02f08, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceDatabase> get_Instance() ;

/// @brief Method get_ScreenshotMaxHeight, addr 0x5f02db8, size 0xa4, virtual true, abstract: false, final true
inline int32_t get_ScreenshotMaxHeight() ;

/// @brief Method get_ScreenshotQuality, addr 0x5f02c6c, size 0xa0, virtual true, abstract: false, final true
inline int32_t get_ScreenshotQuality() ;

/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceDatabase"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabase* i___Backtrace__Unity__Interfaces__IBacktraceDatabase() noexcept;

static inline void setStaticF_LastFrameTime(float_t  value) ;

static inline void setStaticF__instance(::UnityW<::Backtrace::Unity::BacktraceDatabase>  value) ;

/// [CompilerGenerated]
/// @brief Method set_BacktraceApi, addr 0x5f03154, size 0x8, virtual false, abstract: false, final false
inline void set_BacktraceApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  value) ;

/// [CompilerGenerated]
/// @brief Method set_BacktraceDatabaseContext, addr 0x5f03164, size 0x8, virtual true, abstract: false, final false
inline void set_BacktraceDatabaseContext(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  value) ;

/// [CompilerGenerated]
/// @brief Method set_BacktraceDatabaseFileContext, addr 0x5f03174, size 0x8, virtual false, abstract: false, final false
inline void set_BacktraceDatabaseFileContext(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DatabasePath, addr 0x5f02c64, size 0x8, virtual false, abstract: false, final false
inline void set_DatabasePath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_DatabaseSettings, addr 0x5f03144, size 0x8, virtual false, abstract: false, final false
inline void set_DatabaseSettings(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  value) ;

/// @brief Method set_DeduplicationStrategy, addr 0x5f0302c, size 0x110, virtual false, abstract: false, final false
inline void set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

/// [CompilerGenerated]
/// @brief Method set_Enable, addr 0x5f03184, size 0x8, virtual false, abstract: false, final false
inline void set_Enable(bool  value) ;

/// @brief Method set_ScreenshotMaxHeight, addr 0x5f02e5c, size 0xac, virtual true, abstract: false, final true
inline void set_ScreenshotMaxHeight(int32_t  value) ;

/// @brief Method set_ScreenshotQuality, addr 0x5f02d0c, size 0xac, virtual true, abstract: false, final true
inline void set_ScreenshotQuality(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabase(BacktraceDatabase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabase(BacktraceDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27559};

/// @brief Field _timerBackgroundWork, offset: 0x20, size: 0x1, def value: None
 bool  ____timerBackgroundWork;

/// @brief Field Configuration, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  ___Configuration;

/// @brief Field _breadcrumbs, offset: 0x30, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  ____breadcrumbs;

/// @brief Field _client, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::BacktraceClient>  ____client;

/// [CompilerGenerated]
/// @brief Field <DatabasePath>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____DatabasePath_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DatabaseSettings>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  ____DatabaseSettings_k__BackingField;

/// @brief Field _lastConnection, offset: 0x50, size: 0x4, def value: None
 float_t  ____lastConnection;

/// [CompilerGenerated]
/// @brief Field <BacktraceApi>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Backtrace::Unity::Interfaces::IBacktraceApi*  ____BacktraceApi_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BacktraceDatabaseContext>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  ____BacktraceDatabaseContext_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BacktraceDatabaseFileContext>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  ____BacktraceDatabaseFileContext_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Enable>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____Enable_k__BackingField;

/// @brief Field _reportLimitWatcher, offset: 0x78, size: 0x8, def value: None
 ::Backtrace::Unity::Services::ReportLimitWatcher*  ____reportLimitWatcher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____timerBackgroundWork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ___Configuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____breadcrumbs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____client) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____DatabasePath_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____DatabaseSettings_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____lastConnection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____BacktraceApi_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____BacktraceDatabaseContext_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____BacktraceDatabaseFileContext_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____Enable_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase, ____reportLimitWatcher) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::BacktraceDatabase) == 0x80, "Size mismatch!");

} // namespace end def Backtrace::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceDatabase/<>c__DisplayClass60_0
class CORDL_TYPE BacktraceDatabase___c__DisplayClass60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Backtrace::Unity::BacktraceDatabase>  __4__this;

/// @brief Field record, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_record, put=__cordl_internal_set_record)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record;

static inline ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0* New_ctor() ;

/// @brief Method <SendData>b__0, addr 0x5f064b4, size 0x16c, virtual false, abstract: false, final false
inline void _SendData_b__0(::Backtrace::Unity::Model::BacktraceResult*  sendResult) ;

constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase>& __cordl_internal_get___4__this() ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& __cordl_internal_get_record() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& __cordl_internal_get_record() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceDatabase>  value) ;

constexpr void __cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value) ;

/// @brief Method .ctor, addr 0x5f053d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabase___c__DisplayClass60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabase___c__DisplayClass60_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabase___c__DisplayClass60_0(BacktraceDatabase___c__DisplayClass60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabase___c__DisplayClass60_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabase___c__DisplayClass60_0(BacktraceDatabase___c__DisplayClass60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27558};

/// @brief Field record, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  ___record;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::BacktraceDatabase>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0, ___record) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceDatabase/<>c__DisplayClass59_0
class CORDL_TYPE BacktraceDatabase___c__DisplayClass59_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Backtrace::Unity::BacktraceDatabase>  __4__this;

/// @brief Field record, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_record, put=__cordl_internal_set_record)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record;

static inline ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0* New_ctor() ;

/// @brief Method <FlushRecord>b__0, addr 0x5f063d8, size 0xdc, virtual false, abstract: false, final false
inline void _FlushRecord_b__0(::Backtrace::Unity::Model::BacktraceResult*  result) ;

constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase>& __cordl_internal_get___4__this() ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& __cordl_internal_get_record() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& __cordl_internal_get_record() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceDatabase>  value) ;

constexpr void __cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value) ;

/// @brief Method .ctor, addr 0x5f053c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabase___c__DisplayClass59_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabase___c__DisplayClass59_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabase___c__DisplayClass59_0(BacktraceDatabase___c__DisplayClass59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabase___c__DisplayClass59_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabase___c__DisplayClass59_0(BacktraceDatabase___c__DisplayClass59_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27557};

/// @brief Field record, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  ___record;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::BacktraceDatabase>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0, ___record) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity
