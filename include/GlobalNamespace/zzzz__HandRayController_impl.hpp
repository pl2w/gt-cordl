#pragma once
// IWYU pragma private; include "GlobalNamespace/HandRayController.hpp"
#include "GlobalNamespace/zzzz__HandRayController_HandSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandRayController_def.hpp"
#include "GlobalNamespace/zzzz__HandRayController_HandSide_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandRayController.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::HandRayController> (*)()>(&::GlobalNamespace::HandRayController::get_Instance)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a44b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a44d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a44ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a45128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.EnableHandRays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::EnableHandRays)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a4512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"EnableHandRays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.DisableHandRays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::DisableHandRays)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a44fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"DisableHandRays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.PulseActiveHandray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)(float_t, float_t)>(&::GlobalNamespace::HandRayController::PulseActiveHandray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a45540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"PulseActiveHandray", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.PostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::PostUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a455e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"PostUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.ToggleRightHandRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)(bool)>(&::GlobalNamespace::HandRayController::ToggleRightHandRay)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a4569c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"ToggleRightHandRay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.ToggleLeftHandRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)(bool)>(&::GlobalNamespace::HandRayController::ToggleLeftHandRay)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a45840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"ToggleLeftHandRay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.InitialiseHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::InitialiseHands)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a459e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"InitialiseHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.ToggleHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::ToggleHands)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5a45268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"ToggleHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController.HideHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::HideHands)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a4550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"HideHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandRayController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandRayController::*)()>(&::GlobalNamespace::HandRayController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a45a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& GlobalNamespace::HandRayController::__cordl_internal_get__leftHandRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandRay;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& GlobalNamespace::HandRayController::__cordl_internal_get__leftHandRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandRay;
}
constexpr void GlobalNamespace::HandRayController::__cordl_internal_set__leftHandRay(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandRay = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& GlobalNamespace::HandRayController::__cordl_internal_get__rightHandRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandRay;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& GlobalNamespace::HandRayController::__cordl_internal_get__rightHandRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandRay;
}
constexpr void GlobalNamespace::HandRayController::__cordl_internal_set__rightHandRay(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandRay = value;
}
constexpr bool& GlobalNamespace::HandRayController::__cordl_internal_get__hasInitialised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInitialised;
}
constexpr bool const& GlobalNamespace::HandRayController::__cordl_internal_get__hasInitialised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInitialised;
}
constexpr void GlobalNamespace::HandRayController::__cordl_internal_set__hasInitialised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasInitialised = value;
}
constexpr ::GlobalNamespace::HandRayController_HandSide& GlobalNamespace::HandRayController::__cordl_internal_get_ActiveHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveHand;
}
constexpr ::GlobalNamespace::HandRayController_HandSide const& GlobalNamespace::HandRayController::__cordl_internal_get_ActiveHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveHand;
}
constexpr void GlobalNamespace::HandRayController::__cordl_internal_set_ActiveHand(::GlobalNamespace::HandRayController_HandSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveHand = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& GlobalNamespace::HandRayController::__cordl_internal_get__activeHandRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeHandRay;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& GlobalNamespace::HandRayController::__cordl_internal_get__activeHandRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeHandRay;
}
constexpr void GlobalNamespace::HandRayController::__cordl_internal_set__activeHandRay(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeHandRay = value;
}
constexpr int32_t& GlobalNamespace::HandRayController::__cordl_internal_get__activationCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationCounter;
}
constexpr int32_t const& GlobalNamespace::HandRayController::__cordl_internal_get__activationCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activationCounter;
}
constexpr void GlobalNamespace::HandRayController::__cordl_internal_set__activationCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activationCounter = value;
}
inline void GlobalNamespace::HandRayController::setStaticF_instance(::UnityW<::GlobalNamespace::HandRayController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::HandRayController>, "instance", ::GlobalNamespace::HandRayController*>(std::forward<::UnityW<::GlobalNamespace::HandRayController>>(value));
}
inline ::UnityW<::GlobalNamespace::HandRayController> GlobalNamespace::HandRayController::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::HandRayController>, "instance", ::GlobalNamespace::HandRayController*>();
}
inline ::UnityW<::GlobalNamespace::HandRayController> GlobalNamespace::HandRayController::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::HandRayController>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HandRayController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::EnableHandRays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"EnableHandRays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::DisableHandRays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"DisableHandRays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::PulseActiveHandray(float_t  vibrationStrength, float_t  vibrationDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"PulseActiveHandray", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vibrationStrength, vibrationDuration);
}
inline void GlobalNamespace::HandRayController::PostUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"PostUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::ToggleRightHandRay(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"ToggleRightHandRay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::HandRayController::ToggleLeftHandRay(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"ToggleLeftHandRay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::HandRayController::InitialiseHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"InitialiseHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::ToggleHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"ToggleHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::HideHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {"HideHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandRayController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandRayController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandRayController* GlobalNamespace::HandRayController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandRayController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandRayController::HandRayController()   {
}
