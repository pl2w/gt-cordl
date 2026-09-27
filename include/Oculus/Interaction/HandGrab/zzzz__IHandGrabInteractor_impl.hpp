#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabInteractor.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_Hand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_WristPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_WristPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_PinchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_PinchPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_PalmPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_PalmPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_HandGrabApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_HandGrabApi)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_SupportedGrabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_SupportedGrabTypes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabInteractor.get_TargetInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractable* (::Oculus::Interaction::HandGrab::IHandGrabInteractor::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabInteractor::get_TargetInteractable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 6}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandGrab::IHandGrabInteractor::get_Hand()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::IHandGrabInteractor::get_WristPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::IHandGrabInteractor::get_PinchPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::HandGrab::IHandGrabInteractor::get_PalmPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> Oculus::Interaction::HandGrab::IHandGrabInteractor::get_HandGrabApi()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::IHandGrabInteractor::get_SupportedGrabTypes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractable* Oculus::Interaction::HandGrab::IHandGrabInteractor::get_TargetInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr  Oculus::Interaction::HandGrab::IHandGrabInteractor::operator ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* Oculus::Interaction::HandGrab::IHandGrabInteractor::i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
