#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabUseDelegate.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabUseDelegate_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate.BeginUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::IHandGrabUseDelegate::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabUseDelegate::BeginUse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate.EndUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::IHandGrabUseDelegate::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabUseDelegate::EndUse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate.ComputeUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::IHandGrabUseDelegate::*)(float_t)>(&::Oculus::Interaction::HandGrab::IHandGrabUseDelegate::ComputeUseStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandGrab::IHandGrabUseDelegate::BeginUse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::IHandGrabUseDelegate::EndUse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::IHandGrabUseDelegate::ComputeUseStrength(float_t  strength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, strength);
}
