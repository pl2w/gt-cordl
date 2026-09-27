#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/UniqueEvent.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__EventAggregationBase_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__UniqueEvent_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::UniqueEvent::*)(::StringW, int64_t, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Metrics::UniqueEvent::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f1718c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEvent.UpdateTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::UniqueEvent::*)(int64_t, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Metrics::UniqueEvent::UpdateTimestamp)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f171e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(),
                        {"UpdateTimestamp", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::UniqueEvent.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::Metrics::UniqueEvent::*)()>(&::Backtrace::Unity::Model::Metrics::UniqueEvent::ToJson)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f172c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Backtrace::Unity::Model::Metrics::UniqueEvent::__cordl_internal_get_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Model::Metrics::UniqueEvent::__cordl_internal_get_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr void Backtrace::Unity::Model::Metrics::UniqueEvent::__cordl_internal_set_Attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attributes = value;
}
inline void Backtrace::Unity::Model::Metrics::UniqueEvent::_ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, timestamp, attributes);
}
inline void Backtrace::Unity::Model::Metrics::UniqueEvent::UpdateTimestamp(int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(),
                        {"UpdateTimestamp", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timestamp, attributes);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::Metrics::UniqueEvent::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Metrics::UniqueEvent* Backtrace::Unity::Model::Metrics::UniqueEvent::New_ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::UniqueEvent*>(name, timestamp, attributes));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Metrics::UniqueEvent::UniqueEvent()   {
}
