#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/SummedEventsSubmissionQueue.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionQueue_1_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__SummedEventsSubmissionQueue_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__AttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__SummedEvent_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::*)(::StringW, ::Backtrace::Unity::Model::JsonData::AttributeProvider*)>(&::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f168b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue.StartWithEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::*)(::StringW)>(&::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::StartWithEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f16940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue.GetEventsPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* (::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::*)(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*)>(&::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::GetEventsPayload)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5f169ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue.OnMaximumAttemptsReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::*)(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*)>(&::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::OnMaximumAttemptsReached)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5f16e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::__cordl_internal_get__attributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::__cordl_internal_get__attributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr void Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::__cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeProvider = value;
}
inline void Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::_ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submissionUrl, attributeProvider);
}
inline void Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::StartWithEvent(::StringW  eventName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::GetEventsPayload(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>*>(this, ___internal_method, events);
}
inline void Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::OnMaximumAttemptsReached(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events);
}
inline ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue* Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::New_ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*>(submissionUrl, attributeProvider));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue::SummedEventsSubmissionQueue()   {
}
