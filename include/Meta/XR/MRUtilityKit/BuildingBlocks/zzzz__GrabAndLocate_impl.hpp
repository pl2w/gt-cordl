#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/BuildingBlocks/GrabAndLocate.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__SpaceLocator_impl.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__GrabAndLocate_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "Meta/XR/MRUtilityKit/BuildingBlocks/zzzz__PlaceWithAnchor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.get_RaycastOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::get_RaycastOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f58440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.get_MaxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::get_MaxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f58448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9f58450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f58568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9f58654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.OnInteractableStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)(::Oculus::Interaction::InteractableStateChangeArgs)>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::OnInteractableStateChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f58740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"OnInteractableStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate.GetRaycastRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::GetRaycastRay)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9f58778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::*)()>(&::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f58910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__handGrabInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> const& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__handGrabInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractable;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_set__handGrabInteractable(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable>& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__grabInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::GrabInteractable> const& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__grabInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabInteractable;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_set__grabInteractable(::UnityW<::Oculus::Interaction::GrabInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabInteractable = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor>& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__placeWithAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____placeWithAnchor;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor> const& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__placeWithAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____placeWithAnchor;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_set__placeWithAnchor(::UnityW<::Meta::XR::MRUtilityKit::BuildingBlocks::PlaceWithAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____placeWithAnchor = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__cameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__cameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRig;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRig = value;
}
constexpr bool& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__requestMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestMove;
}
constexpr bool const& Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_get__requestMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestMove;
}
constexpr void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::__cordl_internal_set__requestMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestMove = value;
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::get_RaycastOrigin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::get_MaxRaycastDistance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::OnInteractableStateChanged(::Oculus::Interaction::InteractableStateChangeArgs  stateChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {"OnInteractableStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateChange);
}
inline ::UnityEngine::Ray Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::GetRaycastRay()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate* Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::BuildingBlocks::GrabAndLocate::GrabAndLocate()   {
}
