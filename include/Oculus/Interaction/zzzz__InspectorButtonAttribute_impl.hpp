#pragma once
// IWYU pragma private; include "Oculus/Interaction/InspectorButtonAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Oculus/Interaction/zzzz__InspectorButtonAttribute_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InspectorButtonAttribute.get_ButtonWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::InspectorButtonAttribute::*)()>(&::Oculus::Interaction::InspectorButtonAttribute::get_ButtonWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {"get_ButtonWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InspectorButtonAttribute.set_ButtonWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InspectorButtonAttribute::*)(float_t)>(&::Oculus::Interaction::InspectorButtonAttribute::set_ButtonWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {"set_ButtonWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InspectorButtonAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InspectorButtonAttribute::*)(::StringW)>(&::Oculus::Interaction::InspectorButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3ffcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InspectorButtonAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InspectorButtonAttribute::*)(::StringW, float_t)>(&::Oculus::Interaction::InspectorButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa3ffd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_get__ButtonWidth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ButtonWidth_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_get__ButtonWidth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ButtonWidth_k__BackingField;
}
constexpr void Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_set__ButtonWidth_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ButtonWidth_k__BackingField = value;
}
constexpr ::StringW& Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_get_methodName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodName;
}
constexpr ::StringW const& Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_get_methodName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodName;
}
constexpr void Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_set_methodName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodName = value;
}
constexpr float_t& Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_get_buttonHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonHeight;
}
constexpr float_t const& Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_get_buttonHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonHeight;
}
constexpr void Oculus::Interaction::InspectorButtonAttribute::__cordl_internal_set_buttonHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonHeight = value;
}
inline float_t Oculus::Interaction::InspectorButtonAttribute::get_ButtonWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {"get_ButtonWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::InspectorButtonAttribute::set_ButtonWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {"set_ButtonWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::InspectorButtonAttribute::_ctor(::StringW  methodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName);
}
inline void Oculus::Interaction::InspectorButtonAttribute::_ctor(::StringW  methodName, float_t  buttonHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InspectorButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, buttonHeight);
}
inline ::Oculus::Interaction::InspectorButtonAttribute* Oculus::Interaction::InspectorButtonAttribute::New_ctor(::StringW  methodName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InspectorButtonAttribute*>(methodName));
}
inline ::Oculus::Interaction::InspectorButtonAttribute* Oculus::Interaction::InspectorButtonAttribute::New_ctor(::StringW  methodName, float_t  buttonHeight)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InspectorButtonAttribute*>(methodName, buttonHeight));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InspectorButtonAttribute::InspectorButtonAttribute()   {
}
