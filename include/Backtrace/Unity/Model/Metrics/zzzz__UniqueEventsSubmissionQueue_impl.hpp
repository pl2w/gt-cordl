#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/UniqueEventsSubmissionQueue.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionQueue_1_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__UniqueEventsSubmissionQueue_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__AttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__UniqueEvent_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::*)(::StringW, ::Backtrace::Unity::Model::JsonData::AttributeProvider*)>(&::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f173e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue.StartWithEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::*)(::StringW)>(&::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::StartWithEvent)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5f17470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue.GetEventsPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* (::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::*)(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>*)>(&::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::GetEventsPayload)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5f175f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue.GetUniqueEventAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::*)()>(&::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::GetUniqueEventAttributes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f175dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(),
                        {"GetUniqueEventAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::__cordl_internal_get__attributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::__cordl_internal_get__attributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr void Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::__cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeProvider = value;
}
inline void Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::_ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submissionUrl, attributeProvider);
}
inline void Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::StartWithEvent(::StringW  eventName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::GetEventsPayload(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>*  events)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>*>(this, ___internal_method, events);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::GetUniqueEventAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(),
                        {"GetUniqueEventAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue* Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::New_ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*>(submissionUrl, attributeProvider));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue::UniqueEventsSubmissionQueue()   {
}
