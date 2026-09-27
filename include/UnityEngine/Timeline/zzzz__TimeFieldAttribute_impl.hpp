#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeFieldAttribute.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_UseEditMode_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_UseEditMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute.get_useEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeFieldAttribute_UseEditMode (::UnityEngine::Timeline::TimeFieldAttribute::*)()>(&::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3cdf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(),
                        {"get_useEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeFieldAttribute::*)(::GlobalNamespace::TimeFieldAttribute_UseEditMode)>(&::UnityEngine::Timeline::TimeFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb3cdf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimeFieldAttribute_UseEditMode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TimeFieldAttribute_UseEditMode& UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_get__useEditMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useEditMode_k__BackingField;
}
constexpr ::GlobalNamespace::TimeFieldAttribute_UseEditMode const& UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_get__useEditMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useEditMode_k__BackingField;
}
constexpr void UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_set__useEditMode_k__BackingField(::GlobalNamespace::TimeFieldAttribute_UseEditMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useEditMode_k__BackingField = value;
}
inline ::GlobalNamespace::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(),
                        {"get_useEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeFieldAttribute_UseEditMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimeFieldAttribute::_ctor(::GlobalNamespace::TimeFieldAttribute_UseEditMode  useEditMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::TimeFieldAttribute_UseEditMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useEditMode);
}
inline ::UnityEngine::Timeline::TimeFieldAttribute* UnityEngine::Timeline::TimeFieldAttribute::New_ctor(::GlobalNamespace::TimeFieldAttribute_UseEditMode  useEditMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimeFieldAttribute*>(useEditMode));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeFieldAttribute::TimeFieldAttribute()   {
}
