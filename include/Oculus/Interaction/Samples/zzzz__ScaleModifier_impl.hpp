#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ScaleModifier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ScaleModifier_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ScaleModifier.SetScaleX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ScaleModifier::*)(float_t)>(&::Oculus::Interaction::Samples::ScaleModifier::SetScaleX)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa43f074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {"SetScaleX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ScaleModifier.SetScaleY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ScaleModifier::*)(float_t)>(&::Oculus::Interaction::Samples::ScaleModifier::SetScaleY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa43f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {"SetScaleY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ScaleModifier.SetScaleZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ScaleModifier::*)(float_t)>(&::Oculus::Interaction::Samples::ScaleModifier::SetScaleZ)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa43f16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {"SetScaleZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ScaleModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ScaleModifier::*)()>(&::Oculus::Interaction::Samples::ScaleModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43f1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Samples::ScaleModifier::SetScaleX(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {"SetScaleX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void Oculus::Interaction::Samples::ScaleModifier::SetScaleY(float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {"SetScaleY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y);
}
inline void Oculus::Interaction::Samples::ScaleModifier::SetScaleZ(float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {"SetScaleZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, z);
}
inline void Oculus::Interaction::Samples::ScaleModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ScaleModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ScaleModifier* Oculus::Interaction::Samples::ScaleModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ScaleModifier*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ScaleModifier::ScaleModifier()   {
}
