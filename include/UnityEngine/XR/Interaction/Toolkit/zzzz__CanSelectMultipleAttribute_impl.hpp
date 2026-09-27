#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/CanSelectMultipleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__CanSelectMultipleAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute.get_allowMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::*)()>(&::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::get_allowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fe17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>(),
                        {"get_allowMultiple", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb3fe184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::__cordl_internal_get__allowMultiple_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowMultiple_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::__cordl_internal_get__allowMultiple_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowMultiple_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::__cordl_internal_set__allowMultiple_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowMultiple_k__BackingField = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::get_allowMultiple()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>(),
                        {"get_allowMultiple", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::_ctor(bool  allowMultiple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowMultiple);
}
inline ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute* UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::New_ctor(bool  allowMultiple)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>(allowMultiple));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::CanSelectMultipleAttribute()   {
}
