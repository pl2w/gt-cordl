#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/SummedEvent.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__EventAggregationBase_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__SummedEvent_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::SummedEvent::*)(::StringW)>(&::Backtrace::Unity::Model::Metrics::SummedEvent::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f16268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::SummedEvent::*)(::StringW, int64_t, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Metrics::SummedEvent::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f16378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::SummedEvent.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::Metrics::SummedEvent::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Metrics::SummedEvent::ToJson)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5f16428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEvent*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Backtrace::Unity::Model::Metrics::SummedEvent::__cordl_internal_get_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Model::Metrics::SummedEvent::__cordl_internal_get_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr void Backtrace::Unity::Model::Metrics::SummedEvent::__cordl_internal_set_Attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attributes = value;
}
inline void Backtrace::Unity::Model::Metrics::SummedEvent::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Backtrace::Unity::Model::Metrics::SummedEvent::_ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, timestamp, attributes);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::Metrics::SummedEvent::ToJson(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  scopedAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::SummedEvent*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method, scopedAttributes);
}
inline ::Backtrace::Unity::Model::Metrics::SummedEvent* Backtrace::Unity::Model::Metrics::SummedEvent::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::SummedEvent*>(name));
}
inline ::Backtrace::Unity::Model::Metrics::SummedEvent* Backtrace::Unity::Model::Metrics::SummedEvent::New_ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::SummedEvent*>(name, timestamp, attributes));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Metrics::SummedEvent::SummedEvent()   {
}
