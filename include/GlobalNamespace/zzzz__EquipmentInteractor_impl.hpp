#pragma once
// IWYU pragma private; include "GlobalNamespace/EquipmentInteractor.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EquipmentInteractor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__IHoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.get_BodyClimber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::get_BodyClimber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571aee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"get_BodyClimber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.get_LeftClimber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::get_LeftClimber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571aee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"get_LeftClimber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.get_RightClimber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::get_RightClimber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"get_RightClimber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x571aef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::OnDestroy)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x571b028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.ReleaseRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::ReleaseRightHand)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5719434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ReleaseRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.ReleaseLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::ReleaseLeftHand)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5719304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ReleaseLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.ForceStopClimbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::ForceStopClimbing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x571b0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceStopClimbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.GetIsHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EquipmentInteractor::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::EquipmentInteractor::GetIsHolding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x571b148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"GetIsHolding", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.IsGrabDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EquipmentInteractor::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::EquipmentInteractor::IsGrabDisabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x571b168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"IsGrabDisabled", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.InteractionPointDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)(::GlobalNamespace::InteractionPoint*)>(&::GlobalNamespace::EquipmentInteractor::InteractionPointDisabled)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x571b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"InteractionPointDisabled", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.CanGrabLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::CanGrabLeft)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x571b288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"CanGrabLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.CanGrabRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::CanGrabRight)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x571b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"CanGrabRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::LateUpdate)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x571b3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.FireHandInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)(::UnityEngine::GameObject*, bool, ::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::EquipmentInteractor::FireHandInteractions)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x571b7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"FireHandInteractions", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.UpdateHandEquipment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)(::GlobalNamespace::IHoldableObject*, bool)>(&::GlobalNamespace::EquipmentInteractor::UpdateHandEquipment)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x571be68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"UpdateHandEquipment", {}, {::i2c::type_of<::GlobalNamespace::IHoldableObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.CheckInputValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)(bool)>(&::GlobalNamespace::EquipmentInteractor::CheckInputValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x571b758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"CheckInputValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.ForceDropEquipment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)(::GlobalNamespace::IHoldableObject*)>(&::GlobalNamespace::EquipmentInteractor::ForceDropEquipment)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x571c0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceDropEquipment", {}, {::i2c::type_of<::GlobalNamespace::IHoldableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.ForceDropAnyEquipment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::ForceDropAnyEquipment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x571c130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceDropAnyEquipment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor.ForceDropManipulatableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)(::GlobalNamespace::HoldableObject*)>(&::GlobalNamespace::EquipmentInteractor::ForceDropManipulatableObject)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x571c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceDropManipulatableObject", {}, {::i2c::type_of<::GlobalNamespace::HoldableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EquipmentInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EquipmentInteractor::*)()>(&::GlobalNamespace::EquipmentInteractor::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x571c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IHoldableObject*& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftHandHeldEquipment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandHeldEquipment;
}
constexpr ::GlobalNamespace::IHoldableObject* const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftHandHeldEquipment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandHeldEquipment;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_leftHandHeldEquipment(::GlobalNamespace::IHoldableObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandHeldEquipment = value;
}
constexpr ::GlobalNamespace::IHoldableObject*& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightHandHeldEquipment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandHeldEquipment;
}
constexpr ::GlobalNamespace::IHoldableObject* const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightHandHeldEquipment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandHeldEquipment;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_rightHandHeldEquipment(::GlobalNamespace::IHoldableObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandHeldEquipment = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_builderPieceInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderPieceInteractor;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPieceInteractor> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_builderPieceInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builderPieceInteractor;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_builderPieceInteractor(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builderPieceInteractor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftHandDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftHandDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandDevice;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_leftHandDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandDevice = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightHandDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightHandDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandDevice;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_rightHandDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandDevice = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_overlapInteractionPointsLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapInteractionPointsLeft;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_overlapInteractionPointsLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapInteractionPointsLeft;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_overlapInteractionPointsLeft(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapInteractionPointsLeft = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_overlapInteractionPointsRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapInteractionPointsRight;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_overlapInteractionPointsRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapInteractionPointsRight;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_overlapInteractionPointsRight(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapInteractionPointsRight = value;
}
constexpr float_t& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr float_t const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabRadius;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_grabRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabRadius = value;
}
constexpr float_t& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabThreshold;
}
constexpr float_t const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabThreshold;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_grabThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabThreshold = value;
}
constexpr float_t& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabHysteresis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabHysteresis;
}
constexpr float_t const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabHysteresis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabHysteresis;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_grabHysteresis(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabHysteresis = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_wasLeftGrabPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLeftGrabPressed;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_wasLeftGrabPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLeftGrabPressed;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_wasLeftGrabPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasLeftGrabPressed = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_wasRightGrabPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRightGrabPressed;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_wasRightGrabPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRightGrabPressed;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_wasRightGrabPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasRightGrabPressed = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_isLeftGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftGrabbing;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_isLeftGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftGrabbing;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_isLeftGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftGrabbing = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_isRightGrabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRightGrabbing;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_isRightGrabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRightGrabbing;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_isRightGrabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRightGrabbing = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_justReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justReleased;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_justReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justReleased;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_justReleased(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___justReleased = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_justGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justGrabbed;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_justGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justGrabbed;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_justGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___justGrabbed = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_disableLeftGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableLeftGrab;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_disableLeftGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableLeftGrab;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_disableLeftGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableLeftGrab = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_disableRightGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableRightGrab;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_disableRightGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableRightGrab;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_disableRightGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableRightGrab = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_autoGrabLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoGrabLeft;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_autoGrabLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoGrabLeft;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_autoGrabLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoGrabLeft = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_autoGrabRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoGrabRight;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_autoGrabRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoGrabRight;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_autoGrabRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoGrabRight = value;
}
constexpr float_t& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabValue;
}
constexpr float_t const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_grabValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabValue;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_grabValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabValue = value;
}
constexpr float_t& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_tempValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempValue;
}
constexpr float_t const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_tempValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempValue;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_tempValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempValue = value;
}
constexpr ::UnityW<::GlobalNamespace::DropZone>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_tempZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempZone;
}
constexpr ::UnityW<::GlobalNamespace::DropZone> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_tempZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempZone;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_tempZone(::UnityW<::GlobalNamespace::DropZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempZone = value;
}
constexpr bool& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_iteratingInteractionPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iteratingInteractionPoints;
}
constexpr bool const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_iteratingInteractionPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iteratingInteractionPoints;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_iteratingInteractionPoints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iteratingInteractionPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_interactionPointsToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPointsToRemove;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>* const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_interactionPointsToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPointsToRemove;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_interactionPointsToRemove(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::InteractionPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionPointsToRemove = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_bodyClimber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyClimber;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_bodyClimber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyClimber;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_bodyClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyClimber = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftClimber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftClimber;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_leftClimber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftClimber;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_leftClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftClimber = value;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightClimber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightClimber;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& GlobalNamespace::EquipmentInteractor::__cordl_internal_get_rightClimber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightClimber;
}
constexpr void GlobalNamespace::EquipmentInteractor::__cordl_internal_set_rightClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightClimber = value;
}
inline void GlobalNamespace::EquipmentInteractor::setStaticF_instance(::UnityW<::GlobalNamespace::EquipmentInteractor>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::EquipmentInteractor>, "instance", ::GlobalNamespace::EquipmentInteractor*>(std::forward<::UnityW<::GlobalNamespace::EquipmentInteractor>>(value));
}
inline ::UnityW<::GlobalNamespace::EquipmentInteractor> GlobalNamespace::EquipmentInteractor::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::EquipmentInteractor>, "instance", ::GlobalNamespace::EquipmentInteractor*>();
}
inline void GlobalNamespace::EquipmentInteractor::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::EquipmentInteractor*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::EquipmentInteractor::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::EquipmentInteractor*>();
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> GlobalNamespace::EquipmentInteractor::get_BodyClimber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"get_BodyClimber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> GlobalNamespace::EquipmentInteractor::get_LeftClimber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"get_LeftClimber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>>(this, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> GlobalNamespace::EquipmentInteractor::get_RightClimber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"get_RightClimber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::ReleaseRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ReleaseRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::ReleaseLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ReleaseLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::ForceStopClimbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceStopClimbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::EquipmentInteractor::GetIsHolding(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"GetIsHolding", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool GlobalNamespace::EquipmentInteractor::IsGrabDisabled(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"IsGrabDisabled", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void GlobalNamespace::EquipmentInteractor::InteractionPointDisabled(::GlobalNamespace::InteractionPoint*  interactionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"InteractionPointDisabled", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionPoint);
}
inline bool GlobalNamespace::EquipmentInteractor::CanGrabLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"CanGrabLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::EquipmentInteractor::CanGrabRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"CanGrabRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::FireHandInteractions(::UnityEngine::GameObject*  interactingHand, bool  isLeftHand, ::GlobalNamespace::BuilderPiece*  pieceInHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"FireHandInteractions", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactingHand, isLeftHand, pieceInHand);
}
inline void GlobalNamespace::EquipmentInteractor::UpdateHandEquipment(::GlobalNamespace::IHoldableObject*  newEquipment, bool  forLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"UpdateHandEquipment", {}, {::i2c::type_of<::GlobalNamespace::IHoldableObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEquipment, forLeftHand);
}
inline void GlobalNamespace::EquipmentInteractor::CheckInputValue(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"CheckInputValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::EquipmentInteractor::ForceDropEquipment(::GlobalNamespace::IHoldableObject*  equipment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceDropEquipment", {}, {::i2c::type_of<::GlobalNamespace::IHoldableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, equipment);
}
inline void GlobalNamespace::EquipmentInteractor::ForceDropAnyEquipment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceDropAnyEquipment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EquipmentInteractor::ForceDropManipulatableObject(::GlobalNamespace::HoldableObject*  manipulatableObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {"ForceDropManipulatableObject", {}, {::i2c::type_of<::GlobalNamespace::HoldableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manipulatableObject);
}
inline void GlobalNamespace::EquipmentInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EquipmentInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EquipmentInteractor* GlobalNamespace::EquipmentInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EquipmentInteractor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EquipmentInteractor::EquipmentInteractor()   {
}
