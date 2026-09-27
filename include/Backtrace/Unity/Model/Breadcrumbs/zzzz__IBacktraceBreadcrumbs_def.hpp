#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/IBacktraceBreadcrumbs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IBacktraceBreadcrumbs)
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BacktraceBreadcrumbType;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
struct BreadcrumbLevel;
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
class IBacktraceBreadcrumbs;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*, "Backtrace.Unity.Model.Breadcrumbs", "IBacktraceBreadcrumbs");
// Dependencies 
namespace Backtrace::Unity::Model::Breadcrumbs {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Breadcrumbs.IBacktraceBreadcrumbs
class CORDL_TYPE IBacktraceBreadcrumbs {
public:
// Declarations
 __declspec(property(get=get_BreadcrumbsLevel)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  BreadcrumbsLevel;

/// @brief Method Archive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW Archive() ;

/// @brief Method BreadcrumbId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t BreadcrumbId() ;

/// @brief Method ClearBreadcrumbs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ClearBreadcrumbs() ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Debug(::StringW  message) ;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Debug(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method EnableBreadcrumbs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnableBreadcrumbs() ;

/// [Obsolete("Please use EnableBreadcrumbs instead. This function will be removed in the future updates")]
/// @brief Method EnableBreadcrumbs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnableBreadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel) ;

/// @brief Method Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Exception(::System::Exception*  exception) ;

/// @brief Method Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Exception(::System::Exception*  exception, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Exception(::StringW  message) ;

/// @brief Method Exception, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Exception(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method FromBacktrace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool FromBacktrace(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method FromMonoBehavior, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool FromMonoBehavior(::StringW  message, ::UnityEngine::LogType  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method GetBreadcrumbLogPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetBreadcrumbLogPath() ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Info(::StringW  message) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Info(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Log(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::UnityEngine::LogType  logType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Log(::StringW  message, ::UnityEngine::LogType  type) ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Log(::StringW  message, ::UnityEngine::LogType  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method UnregisterEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UnregisterEvents() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update() ;

/// @brief Method Warning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Warning(::StringW  message) ;

/// @brief Method Warning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Warning(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method get_BreadcrumbsLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType get_BreadcrumbsLevel() ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceBreadcrumbs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceBreadcrumbs(IBacktraceBreadcrumbs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Breadcrumbs
