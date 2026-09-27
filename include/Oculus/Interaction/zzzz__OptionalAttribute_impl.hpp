#pragma once
// IWYU pragma private; include "Oculus/Interaction/OptionalAttribute.hpp"
#include "Oculus/Interaction/zzzz__OptionalAttribute_Flag_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Oculus/Interaction/zzzz__OptionalAttribute_def.hpp"
#include "Oculus/Interaction/zzzz__OptionalAttribute_Flag_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OptionalAttribute.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OptionalAttribute_Flag (::Oculus::Interaction::OptionalAttribute::*)()>(&::Oculus::Interaction::OptionalAttribute::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OptionalAttribute.set_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OptionalAttribute::*)(::GlobalNamespace::OptionalAttribute_Flag)>(&::Oculus::Interaction::OptionalAttribute::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {"set_Flags", {}, {::i2c::type_of<::GlobalNamespace::OptionalAttribute_Flag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OptionalAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OptionalAttribute::*)()>(&::Oculus::Interaction::OptionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OptionalAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OptionalAttribute::*)(::GlobalNamespace::OptionalAttribute_Flag)>(&::Oculus::Interaction::OptionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3ffda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OptionalAttribute_Flag>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OptionalAttribute_Flag& Oculus::Interaction::OptionalAttribute::__cordl_internal_get__Flags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Flags_k__BackingField;
}
constexpr ::GlobalNamespace::OptionalAttribute_Flag const& Oculus::Interaction::OptionalAttribute::__cordl_internal_get__Flags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Flags_k__BackingField;
}
constexpr void Oculus::Interaction::OptionalAttribute::__cordl_internal_set__Flags_k__BackingField(::GlobalNamespace::OptionalAttribute_Flag  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Flags_k__BackingField = value;
}
inline ::GlobalNamespace::OptionalAttribute_Flag Oculus::Interaction::OptionalAttribute::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OptionalAttribute_Flag>(this, ___internal_method);
}
inline void Oculus::Interaction::OptionalAttribute::set_Flags(::GlobalNamespace::OptionalAttribute_Flag  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {"set_Flags", {}, {::i2c::type_of<::GlobalNamespace::OptionalAttribute_Flag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::OptionalAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OptionalAttribute::_ctor(::GlobalNamespace::OptionalAttribute_Flag  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OptionalAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OptionalAttribute_Flag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline ::Oculus::Interaction::OptionalAttribute* Oculus::Interaction::OptionalAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OptionalAttribute*>());
}
inline ::Oculus::Interaction::OptionalAttribute* Oculus::Interaction::OptionalAttribute::New_ctor(::GlobalNamespace::OptionalAttribute_Flag  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OptionalAttribute*>(flags));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OptionalAttribute::OptionalAttribute()   {
}
