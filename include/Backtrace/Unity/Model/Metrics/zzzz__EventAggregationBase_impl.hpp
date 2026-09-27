#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/EventAggregationBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__EventAggregationBase_def.hpp"
#include "Backtrace/Unity/Json/zzzz__BacktraceJObject_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::EventAggregationBase.get_Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Model::Metrics::EventAggregationBase::*)()>(&::Backtrace::Unity::Model::Metrics::EventAggregationBase::get_Timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"get_Timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::EventAggregationBase.set_Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::EventAggregationBase::*)(int64_t)>(&::Backtrace::Unity::Model::Metrics::EventAggregationBase::set_Timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"set_Timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::EventAggregationBase.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Metrics::EventAggregationBase::*)()>(&::Backtrace::Unity::Model::Metrics::EventAggregationBase::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::EventAggregationBase.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::EventAggregationBase::*)(::StringW)>(&::Backtrace::Unity::Model::Metrics::EventAggregationBase::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::EventAggregationBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Metrics::EventAggregationBase::*)(::StringW, int64_t)>(&::Backtrace::Unity::Model::Metrics::EventAggregationBase::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f15ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Metrics::EventAggregationBase.ToBaseObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (::Backtrace::Unity::Model::Metrics::EventAggregationBase::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Metrics::EventAggregationBase::ToBaseObject)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f15efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"ToBaseObject", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Backtrace::Unity::Model::Metrics::EventAggregationBase::__cordl_internal_get__Timestamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timestamp_k__BackingField;
}
constexpr int64_t const& Backtrace::Unity::Model::Metrics::EventAggregationBase::__cordl_internal_get__Timestamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timestamp_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Metrics::EventAggregationBase::__cordl_internal_set__Timestamp_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Timestamp_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Metrics::EventAggregationBase::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::Metrics::EventAggregationBase::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Metrics::EventAggregationBase::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
inline int64_t Backtrace::Unity::Model::Metrics::EventAggregationBase::get_Timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"get_Timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Metrics::EventAggregationBase::set_Timestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"set_Timestamp", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Model::Metrics::EventAggregationBase::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Metrics::EventAggregationBase::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Metrics::EventAggregationBase::_ctor(::StringW  name, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, timestamp);
}
inline ::Backtrace::Unity::Json::BacktraceJObject* Backtrace::Unity::Model::Metrics::EventAggregationBase::ToBaseObject(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(),
                        {"ToBaseObject", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Json::BacktraceJObject*>(this, ___internal_method, attributes);
}
inline ::Backtrace::Unity::Model::Metrics::EventAggregationBase* Backtrace::Unity::Model::Metrics::EventAggregationBase::New_ctor(::StringW  name, int64_t  timestamp)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Metrics::EventAggregationBase*>(name, timestamp));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Metrics::EventAggregationBase::EventAggregationBase()   {
}
