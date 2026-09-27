#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceClient)
namespace Backtrace::Unity::Interfaces {
class IBacktraceMetrics;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace Backtrace::Unity::Model {
class BacktraceResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Backtrace::Unity::Interfaces {
class IBacktraceClient;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Interfaces::IBacktraceClient*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Interfaces::IBacktraceClient*, "Backtrace.Unity.Interfaces", "IBacktraceClient");
// Dependencies 
namespace Backtrace::Unity::Interfaces {
// Is value type: false
// CS Name: Backtrace.Unity.Interfaces.IBacktraceClient
class CORDL_TYPE IBacktraceClient {
public:
// Declarations
 __declspec(property(get=get_Breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*  Breadcrumbs;

 __declspec(property(get=get_Metrics)) ::Backtrace::Unity::Interfaces::IBacktraceMetrics*  Metrics;

/// @brief Method EnableBreadcrumbsSupport, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnableBreadcrumbsSupport() ;

/// @brief Method EnableMetrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnableMetrics() ;

/// @brief Method EnableMetrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnableMetrics(::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl, uint32_t  timeIntervalInSec, ::StringW  uniqueEventName) ;

/// @brief Method Refresh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Refresh() ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Send(::System::Exception*  exception, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Send(::StringW  message, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Send(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback) ;

/// @brief Method SetClientReportLimit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetClientReportLimit(uint32_t  reportPerMin) ;

/// @brief Method get_Breadcrumbs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* get_Breadcrumbs() ;

/// @brief Method get_Metrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Interfaces::IBacktraceMetrics* get_Metrics() ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceClient(IBacktraceClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Interfaces
