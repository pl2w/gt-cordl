#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticInfoAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticInfoAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticInfoAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::AnalyticInfoAttribute::*)(::StringW, ::StringW, int32_t, int32_t, int32_t)>(&::UnityEngine::Analytics::AnalyticInfoAttribute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb922f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticInfoAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr int32_t const& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr void UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_set__version_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__vendorKey_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vendorKey_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__vendorKey_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vendorKey_k__BackingField;
}
constexpr void UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_set__vendorKey_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vendorKey_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__eventName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__eventName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventName_k__BackingField;
}
constexpr void UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_set__eventName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventName_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__maxEventsPerHour_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxEventsPerHour_k__BackingField;
}
constexpr int32_t const& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__maxEventsPerHour_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxEventsPerHour_k__BackingField;
}
constexpr void UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_set__maxEventsPerHour_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxEventsPerHour_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__maxNumberOfElements_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxNumberOfElements_k__BackingField;
}
constexpr int32_t const& UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_get__maxNumberOfElements_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxNumberOfElements_k__BackingField;
}
constexpr void UnityEngine::Analytics::AnalyticInfoAttribute::__cordl_internal_set__maxNumberOfElements_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxNumberOfElements_k__BackingField = value;
}
inline void UnityEngine::Analytics::AnalyticInfoAttribute::_ctor(::StringW  eventName, ::StringW  vendorKey, int32_t  version, int32_t  maxEventsPerHour, int32_t  maxNumberOfElements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticInfoAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName, vendorKey, version, maxEventsPerHour, maxNumberOfElements);
}
inline ::UnityEngine::Analytics::AnalyticInfoAttribute* UnityEngine::Analytics::AnalyticInfoAttribute::New_ctor(::StringW  eventName, ::StringW  vendorKey, int32_t  version, int32_t  maxEventsPerHour, int32_t  maxNumberOfElements)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::AnalyticInfoAttribute*>(eventName, vendorKey, version, maxEventsPerHour, maxNumberOfElements));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticInfoAttribute::AnalyticInfoAttribute()   {
}
