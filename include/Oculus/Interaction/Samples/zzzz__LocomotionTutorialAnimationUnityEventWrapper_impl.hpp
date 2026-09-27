#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LocomotionTutorialAnimationUnityEventWrapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__LocomotionTutorialAnimationUnityEventWrapper_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper.EnableTeleportRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::EnableTeleportRay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa43869c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"EnableTeleportRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper.DisableTeleportRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::DisableTeleportRay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4386b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"DisableTeleportRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper.EnableTurningRing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::EnableTurningRing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4386cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"EnableTurningRing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper.DisableTurningRing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::DisableTurningRing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4386e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"DisableTurningRing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4386fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenEnableTeleportRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenEnableTeleportRay;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenEnableTeleportRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenEnableTeleportRay;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_set_WhenEnableTeleportRay(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenEnableTeleportRay = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenDisableTeleportRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDisableTeleportRay;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenDisableTeleportRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDisableTeleportRay;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_set_WhenDisableTeleportRay(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenDisableTeleportRay = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenEnableTurningRing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenEnableTurningRing;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenEnableTurningRing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenEnableTurningRing;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_set_WhenEnableTurningRing(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenEnableTurningRing = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenDisableTurningRing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDisableTurningRing;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_get_WhenDisableTurningRing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenDisableTurningRing;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::__cordl_internal_set_WhenDisableTurningRing(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenDisableTurningRing = value;
}
inline void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::EnableTeleportRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"EnableTeleportRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::DisableTeleportRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"DisableTeleportRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::EnableTurningRing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"EnableTurningRing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::DisableTurningRing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {"DisableTurningRing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper* Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::LocomotionTutorialAnimationUnityEventWrapper::LocomotionTutorialAnimationUnityEventWrapper()   {
}
