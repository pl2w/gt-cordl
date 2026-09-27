#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/MetricsSubmissionQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionQueue_1_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionJob_1_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionQueue_1_def.hpp"
#include "Backtrace/Unity/Model/zzzz__IBacktraceHttpClient_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr uint32_t& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__MaximumEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumEvents_k__BackingField;
}
template<typename T>
constexpr uint32_t const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__MaximumEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumEvents_k__BackingField;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__MaximumEvents_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumEvents_k__BackingField = value;
}
template<typename T>
constexpr ::StringW& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
template<typename T>
constexpr ::StringW const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>*& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__submissionJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____submissionJobs;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>* const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__submissionJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____submissionJobs;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__submissionJobs(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____submissionJobs = value;
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedList_1<T>*& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get_Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
template<typename T>
constexpr ::System::Collections::Generic::LinkedList_1<T>* const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get_Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set_Events(::System::Collections::Generic::LinkedList_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Events = value;
}
template<typename T>
constexpr int32_t& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__numberOfDroppedRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfDroppedRequests;
}
template<typename T>
constexpr int32_t const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__numberOfDroppedRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfDroppedRequests;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__numberOfDroppedRequests(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfDroppedRequests = value;
}
template<typename T>
constexpr ::Backtrace::Unity::Model::IBacktraceHttpClient*& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get_RequestHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestHandler;
}
template<typename T>
constexpr ::Backtrace::Unity::Model::IBacktraceHttpClient* const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get_RequestHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestHandler;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set_RequestHandler(::Backtrace::Unity::Model::IBacktraceHttpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestHandler = value;
}
template<typename T>
constexpr ::StringW& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__SubmissionUrl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubmissionUrl_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__SubmissionUrl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubmissionUrl_k__BackingField;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__SubmissionUrl_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SubmissionUrl_k__BackingField = value;
}
template<typename T>
constexpr ::StringW& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__applicationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applicationName;
}
template<typename T>
constexpr ::StringW const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__applicationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applicationName;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__applicationName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applicationName = value;
}
template<typename T>
constexpr ::StringW& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__applicationVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applicationVersion;
}
template<typename T>
constexpr ::StringW const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_get__applicationVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applicationVersion;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::__cordl_internal_set__applicationVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applicationVersion = value;
}
template<typename T>
inline int32_t Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline uint32_t Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::get_MaximumEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"get_MaximumEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::set_MaximumEvents(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"set_MaximumEvents", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::StringW Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::get_SubmissionUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"get_SubmissionUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::set_SubmissionUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"set_SubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::_ctor(::StringW  name, ::StringW  submissionUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, submissionUrl);
}
template<typename T>
inline bool Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::ReachedLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"ReachedLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::ShouldProcessEvent(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"ShouldProcessEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::StartWithEvent(::StringW  eventName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::SendPayload(::System::Collections::Generic::ICollection_1<T>*  events, uint32_t  attempts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"SendPayload", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events, attempts);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::SendPendingEvents(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"SendPendingEvents", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::OnMaximumAttemptsReached(::System::Collections::Generic::ICollection_1<T>*  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::GetEventsPayload(::System::Collections::Generic::ICollection_1<T>*  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>*>(this, ___internal_method, events);
}
template<typename T>
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::CreateJsonPayload(::System::Collections::Generic::ICollection_1<T>*  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method, events);
}
template<typename T>
inline double_t Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::CalculateNextRetryTime(uint32_t  attemps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"CalculateNextRetryTime", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, attemps);
}
template<typename T>
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::CreatePayloadMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"CreatePayloadMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::OnRequestCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(),
                        {"OnRequestCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>* Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::New_ctor(::StringW  name, ::StringW  submissionUrl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*>(name, submissionUrl));
}
// Ctor Parameters []
template<typename T>
constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>::MetricsSubmissionQueue_1()   {
}
template<typename T>
constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>* const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_set___4__this(::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr uint32_t& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_get_attempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
template<typename T>
constexpr uint32_t const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_get_attempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_set_attempts(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attempts = value;
}
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>*& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
template<typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* const& Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
template<typename T>
constexpr void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::__cordl_internal_set_events(::System::Collections::Generic::ICollection_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::_SendPayload_b__0(int64_t  statusCode, bool  httpError, ::StringW  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>*>(),
                        {"<SendPayload>b__0", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode, httpError, response);
}
template<typename T>
inline ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>* Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1___c__DisplayClass23_0<T>::MetricsSubmissionQueue_1___c__DisplayClass23_0()   {
}
