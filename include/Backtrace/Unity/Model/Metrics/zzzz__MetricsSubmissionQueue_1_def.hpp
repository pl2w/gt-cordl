#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/MetricsSubmissionQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsSubmissionQueue_1)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model::Metrics {
template<typename T>
class MetricsSubmissionJob_1;
}
namespace Backtrace::Unity::Model::Metrics {
template<typename T>
class MetricsSubmissionQueue_1___c__DisplayClass23_0;
}
namespace Backtrace::Unity::Model {
class IBacktraceHttpClient;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
template<typename T>
class MetricsSubmissionQueue_1;
}
namespace Backtrace::Unity::Model::Metrics {
template<typename T>
class MetricsSubmissionQueue_1___c__DisplayClass23_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1);
MARK_GEN_REF_T_PTR(::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1, "Backtrace.Unity.Model.Metrics", "MetricsSubmissionQueue`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0, "Backtrace.Unity.Model.Metrics", "MetricsSubmissionQueue`1/<>c__DisplayClass23_0");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Metrics {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.MetricsSubmissionQueue`1<T>
class CORDL_TYPE MetricsSubmissionQueue_1 : public ::System::Object {
public:
// Declarations
using __c__DisplayClass23_0 = ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field Events, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Events, put=__cordl_internal_set_Events)) ::System::Collections::Generic::LinkedList_1<T>*  Events;

 __declspec(property(get=get_MaximumEvents, put=set_MaximumEvents)) uint32_t  MaximumEvents;

/// @brief Field RequestHandler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RequestHandler, put=__cordl_internal_set_RequestHandler)) ::Backtrace::Unity::Model::IBacktraceHttpClient*  RequestHandler;

 __declspec(property(get=get_SubmissionUrl, put=set_SubmissionUrl)) ::StringW  SubmissionUrl;

/// @brief Field <MaximumEvents>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumEvents_k__BackingField, put=__cordl_internal_set__MaximumEvents_k__BackingField)) uint32_t  _MaximumEvents_k__BackingField;

/// @brief Field <SubmissionUrl>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__SubmissionUrl_k__BackingField, put=__cordl_internal_set__SubmissionUrl_k__BackingField)) ::StringW  _SubmissionUrl_k__BackingField;

/// @brief Field _applicationName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__applicationName, put=__cordl_internal_set__applicationName)) ::StringW  _applicationName;

/// @brief Field _applicationVersion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__applicationVersion, put=__cordl_internal_set__applicationVersion)) ::StringW  _applicationVersion;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _numberOfDroppedRequests, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfDroppedRequests, put=__cordl_internal_set__numberOfDroppedRequests)) int32_t  _numberOfDroppedRequests;

/// @brief Field _submissionJobs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__submissionJobs, put=__cordl_internal_set__submissionJobs)) ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>*  _submissionJobs;

/// @brief Method CalculateNextRetryTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline double_t CalculateNextRetryTime(uint32_t  attemps) ;

/// @brief Method CreateJsonPayload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* CreateJsonPayload(::System::Collections::Generic::ICollection_1<T>*  events) ;

/// @brief Method CreatePayloadMetadata, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* CreatePayloadMetadata() ;

/// @brief Method GetEventsPayload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* GetEventsPayload(::System::Collections::Generic::ICollection_1<T>*  events) ;

static inline ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>* New_ctor(::StringW  name, ::StringW  submissionUrl) ;

/// @brief Method OnMaximumAttemptsReached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnMaximumAttemptsReached(::System::Collections::Generic::ICollection_1<T>*  events) ;

/// @brief Method OnRequestCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnRequestCompleted() ;

/// @brief Method ReachedLimit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ReachedLimit() ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Send() ;

/// @brief Method SendPayload, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendPayload(::System::Collections::Generic::ICollection_1<T>*  events, uint32_t  attempts) ;

/// @brief Method SendPendingEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SendPendingEvents(float_t  time) ;

/// @brief Method ShouldProcessEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ShouldProcessEvent(::StringW  name) ;

/// @brief Method StartWithEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StartWithEvent(::StringW  eventName) ;

constexpr ::System::Collections::Generic::LinkedList_1<T>* const& __cordl_internal_get_Events() const;

constexpr ::System::Collections::Generic::LinkedList_1<T>*& __cordl_internal_get_Events() ;

constexpr ::Backtrace::Unity::Model::IBacktraceHttpClient* const& __cordl_internal_get_RequestHandler() const;

constexpr ::Backtrace::Unity::Model::IBacktraceHttpClient*& __cordl_internal_get_RequestHandler() ;

constexpr uint32_t const& __cordl_internal_get__MaximumEvents_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__MaximumEvents_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__SubmissionUrl_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SubmissionUrl_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__applicationName() const;

constexpr ::StringW& __cordl_internal_get__applicationName() ;

constexpr ::StringW const& __cordl_internal_get__applicationVersion() const;

constexpr ::StringW& __cordl_internal_get__applicationVersion() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr int32_t const& __cordl_internal_get__numberOfDroppedRequests() const;

constexpr int32_t& __cordl_internal_get__numberOfDroppedRequests() ;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>* const& __cordl_internal_get__submissionJobs() const;

constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>*& __cordl_internal_get__submissionJobs() ;

constexpr void __cordl_internal_set_Events(::System::Collections::Generic::LinkedList_1<T>*  value) ;

constexpr void __cordl_internal_set_RequestHandler(::Backtrace::Unity::Model::IBacktraceHttpClient*  value) ;

constexpr void __cordl_internal_set__MaximumEvents_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__SubmissionUrl_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__applicationName(::StringW  value) ;

constexpr void __cordl_internal_set__applicationVersion(::StringW  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__numberOfDroppedRequests(int32_t  value) ;

constexpr void __cordl_internal_set__submissionJobs(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  submissionUrl) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_MaximumEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t get_MaximumEvents() ;

/// [CompilerGenerated]
/// @brief Method get_SubmissionUrl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW get_SubmissionUrl() ;

/// [CompilerGenerated]
/// @brief Method set_MaximumEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_MaximumEvents(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SubmissionUrl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_SubmissionUrl(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsSubmissionQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsSubmissionQueue_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsSubmissionQueue_1(MetricsSubmissionQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsSubmissionQueue_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsSubmissionQueue_1(MetricsSubmissionQueue_1 const& ) = delete;

/// @brief Field DefaultTimeInSecBetweenRequests offset 0xffffffff size 0x4
static constexpr int32_t  DefaultTimeInSecBetweenRequests{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27619};

/// [CompilerGenerated]
/// @brief Field <MaximumEvents>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  ____MaximumEvents_k__BackingField;

/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _submissionJobs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>*  ____submissionJobs;

/// @brief Field Events, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<T>*  ___Events;

/// @brief Field _numberOfDroppedRequests, offset: 0x30, size: 0x4, def value: None
 int32_t  ____numberOfDroppedRequests;

/// @brief Field RequestHandler, offset: 0x38, size: 0x8, def value: None
 ::Backtrace::Unity::Model::IBacktraceHttpClient*  ___RequestHandler;

/// [CompilerGenerated]
/// @brief Field <SubmissionUrl>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____SubmissionUrl_k__BackingField;

/// @brief Field _applicationName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____applicationName;

/// @brief Field _applicationVersion, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____applicationVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Metrics
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Model::Metrics {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.MetricsSubmissionQueue`1/<>c__DisplayClass23_0<T>
class CORDL_TYPE MetricsSubmissionQueue_1___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*  __4__this;

/// @brief Field attempts, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_attempts, put=__cordl_internal_set_attempts)) uint32_t  attempts;

/// @brief Field events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::System::Collections::Generic::ICollection_1<T>*  events;

static inline ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>* New_ctor() ;

/// @brief Method <SendPayload>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _SendPayload_b__0(int64_t  statusCode, bool  httpError, ::StringW  response) ;

constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*& __cordl_internal_get___4__this() ;

constexpr uint32_t const& __cordl_internal_get_attempts() const;

constexpr uint32_t& __cordl_internal_get_attempts() ;

constexpr ::System::Collections::Generic::ICollection_1<T>* const& __cordl_internal_get_events() const;

constexpr ::System::Collections::Generic::ICollection_1<T>*& __cordl_internal_get_events() ;

constexpr void __cordl_internal_set___4__this(::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*  value) ;

constexpr void __cordl_internal_set_attempts(uint32_t  value) ;

constexpr void __cordl_internal_set_events(::System::Collections::Generic::ICollection_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsSubmissionQueue_1___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsSubmissionQueue_1___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsSubmissionQueue_1___c__DisplayClass23_0(MetricsSubmissionQueue_1___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsSubmissionQueue_1___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsSubmissionQueue_1___c__DisplayClass23_0(MetricsSubmissionQueue_1___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27618};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*  _____4__this;

/// @brief Field attempts, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___attempts;

/// @brief Field events, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<T>*  ___events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Metrics
