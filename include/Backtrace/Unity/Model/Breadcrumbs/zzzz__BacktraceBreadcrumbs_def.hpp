#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BacktraceBreadcrumbs)
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BacktraceBreadcrumbType;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbsEventHandler;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceLogManager;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct UnityEngineLogLevel;
}
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Exception;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*, "Backtrace.Unity.Model.Breadcrumbs", "BacktraceBreadcrumbs");
// Dependencies Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType, Backtrace.Unity.Model.Breadcrumbs.UnityEngineLogLevel, System.Object
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbs
class CORDL_TYPE BacktraceBreadcrumbs : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BreadcrumbsLevel, put=set_BreadcrumbsLevel)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  BreadcrumbsLevel;

/// @brief Field EventHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventHandler, put=__cordl_internal_set_EventHandler)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*  EventHandler;

/// @brief Field LogManager, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogManager, put=__cordl_internal_set_LogManager)) ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  LogManager;

 __declspec(property(get=get_UnityLogLevel, put=set_UnityLogLevel)) ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  UnityLogLevel;

/// @brief Field <BreadcrumbsLevel>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__BreadcrumbsLevel_k__BackingField, put=__cordl_internal_set__BreadcrumbsLevel_k__BackingField)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  _BreadcrumbsLevel_k__BackingField;

/// @brief Field <UnityLogLevel>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__UnityLogLevel_k__BackingField, put=__cordl_internal_set__UnityLogLevel_k__BackingField)) ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  _UnityLogLevel_k__BackingField;

/// @brief Field _enabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs"
constexpr operator  ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*() noexcept;

/// @brief Method AddBreadcrumbs, addr 0x5f1d5a0, size 0x104, virtual false, abstract: false, final false
inline bool AddBreadcrumbs(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Archive, addr 0x5f1da5c, size 0xc8, virtual true, abstract: false, final true
inline ::StringW Archive() ;

/// @brief Method BreadcrumbId, addr 0x5f1d8fc, size 0xa4, virtual true, abstract: false, final true
inline double_t BreadcrumbId() ;

/// @brief Method CanStoreBreadcrumbs, addr 0x5f1da4c, size 0x10, virtual false, abstract: false, final false
static inline bool CanStoreBreadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  logLevel, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  backtraceBreadcrumbsLevel) ;

/// @brief Method ClearBreadcrumbs, addr 0x5f1d070, size 0xa4, virtual true, abstract: false, final true
inline bool ClearBreadcrumbs() ;

/// @brief Method ConvertLogTypeToLogLevel, addr 0x5f1d6cc, size 0x20, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel ConvertLogTypeToLogLevel(::UnityEngine::LogType  type) ;

/// @brief Method Debug, addr 0x5f1d7ec, size 0x10, virtual true, abstract: false, final true
inline bool Debug(::StringW  message) ;

/// @brief Method Debug, addr 0x5f1d7dc, size 0x10, virtual true, abstract: false, final true
inline bool Debug(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method EnableBreadcrumbs, addr 0x5f1d11c, size 0xd0, virtual true, abstract: false, final true
inline bool EnableBreadcrumbs() ;

/// @brief Method EnableBreadcrumbs, addr 0x5f1d114, size 0x8, virtual true, abstract: false, final true
inline bool EnableBreadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel) ;

/// @brief Method Exception, addr 0x5f1d868, size 0x40, virtual true, abstract: false, final true
inline bool Exception(::System::Exception*  exception) ;

/// @brief Method Exception, addr 0x5f1d81c, size 0x4c, virtual true, abstract: false, final true
inline bool Exception(::System::Exception*  exception, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Exception, addr 0x5f1d80c, size 0x10, virtual true, abstract: false, final true
inline bool Exception(::StringW  message) ;

/// @brief Method Exception, addr 0x5f1d8a8, size 0x10, virtual true, abstract: false, final true
inline bool Exception(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method FromBacktrace, addr 0x5f1d530, size 0x4c, virtual true, abstract: false, final true
inline bool FromBacktrace(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method FromMonoBehavior, addr 0x5f1d6a4, size 0x28, virtual true, abstract: false, final true
inline bool FromMonoBehavior(::StringW  message, ::UnityEngine::LogType  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method GetBreadcrumbLogPath, addr 0x5f1d6ec, size 0xa0, virtual true, abstract: false, final true
inline ::StringW GetBreadcrumbLogPath() ;

/// @brief Method Info, addr 0x5f1d78c, size 0x10, virtual true, abstract: false, final true
inline bool Info(::StringW  message) ;

/// @brief Method Info, addr 0x5f1d7ac, size 0x10, virtual true, abstract: false, final true
inline bool Info(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Log, addr 0x5f1d8b8, size 0x20, virtual true, abstract: false, final true
inline bool Log(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::UnityEngine::LogType  logType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Log, addr 0x5f1d79c, size 0x10, virtual true, abstract: false, final true
inline bool Log(::StringW  message, ::UnityEngine::LogType  logType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Log, addr 0x5f1d7fc, size 0x10, virtual true, abstract: false, final true
inline bool Log(::StringW  message, ::UnityEngine::LogType  type) ;

static inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* New_ctor(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  logManager, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel) ;

/// @brief Method ShouldLog, addr 0x5f1d8d8, size 0x24, virtual false, abstract: false, final false
inline bool ShouldLog(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type) ;

/// @brief Method ShouldLog, addr 0x5f1d57c, size 0x24, virtual false, abstract: false, final false
inline bool ShouldLog(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type) ;

/// @brief Method UnregisterEvents, addr 0x5f1cd34, size 0x14, virtual true, abstract: false, final true
inline void UnregisterEvents() ;

/// @brief Method Update, addr 0x5f1d9a0, size 0x14, virtual true, abstract: false, final true
inline void Update() ;

/// @brief Method Warning, addr 0x5f1d7bc, size 0x10, virtual true, abstract: false, final true
inline bool Warning(::StringW  message) ;

/// @brief Method Warning, addr 0x5f1d7cc, size 0x10, virtual true, abstract: false, final true
inline bool Warning(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler* const& __cordl_internal_get_EventHandler() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*& __cordl_internal_get_EventHandler() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager* const& __cordl_internal_get_LogManager() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*& __cordl_internal_get_LogManager() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const& __cordl_internal_get__BreadcrumbsLevel_k__BackingField() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& __cordl_internal_get__BreadcrumbsLevel_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const& __cordl_internal_get__UnityLogLevel_k__BackingField() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel& __cordl_internal_get__UnityLogLevel_k__BackingField() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr void __cordl_internal_set_EventHandler(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*  value) ;

constexpr void __cordl_internal_set_LogManager(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  value) ;

constexpr void __cordl_internal_set__BreadcrumbsLevel_k__BackingField(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value) ;

constexpr void __cordl_internal_set__UnityLogLevel_k__BackingField(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

/// @brief Method .ctor, addr 0x5f1cc48, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  logManager, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel) ;

/// [CompilerGenerated]
/// @brief Method get_BreadcrumbsLevel, addr 0x5f1cc28, size 0x8, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType get_BreadcrumbsLevel() ;

/// [CompilerGenerated]
/// @brief Method get_UnityLogLevel, addr 0x5f1cc38, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel get_UnityLogLevel() ;

/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* i___Backtrace__Unity__Model__Breadcrumbs__IBacktraceBreadcrumbs() noexcept;

/// [CompilerGenerated]
/// @brief Method set_BreadcrumbsLevel, addr 0x5f1cc30, size 0x8, virtual false, abstract: false, final false
inline void set_BreadcrumbsLevel(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value) ;

/// [CompilerGenerated]
/// @brief Method set_UnityLogLevel, addr 0x5f1cc40, size 0x8, virtual false, abstract: false, final false
inline void set_UnityLogLevel(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceBreadcrumbs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceBreadcrumbs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceBreadcrumbs(BacktraceBreadcrumbs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceBreadcrumbs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceBreadcrumbs(BacktraceBreadcrumbs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27635};

/// [CompilerGenerated]
/// @brief Field <BreadcrumbsLevel>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  ____BreadcrumbsLevel_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UnityLogLevel>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  ____UnityLogLevel_k__BackingField;

/// @brief Field LogManager, offset: 0x18, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  ___LogManager;

/// @brief Field EventHandler, offset: 0x20, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*  ___EventHandler;

/// @brief Field _enabled, offset: 0x28, size: 0x1, def value: None
 bool  ____enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs, ____BreadcrumbsLevel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs, ____UnityLogLevel_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs, ___LogManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs, ___EventHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs, ____enabled) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Breadcrumbs
