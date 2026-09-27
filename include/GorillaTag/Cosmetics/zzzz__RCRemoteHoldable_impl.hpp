#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCRemoteHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__ISnapTurnOverride_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCCosmeticNetworkSync_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.get_XRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::get_XRNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6b384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"get_XRNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.get_Vehicle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::Cosmetics::RCVehicle> (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::get_Vehicle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d6b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"get_Vehicle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.TurnOverrideActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::TurnOverrideActive)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d6b394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"TurnOverrideActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d6b3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5d6b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5d6b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::OnDestroy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d6bc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::RCRemoteHoldable::OnGrab)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5d6be2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::RCRemoteHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::RCRemoteHoldable::OnRelease)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5d6c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::Update)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5d6c4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.OnStartConnectionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::RCRemoteHoldable::OnStartConnectionEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d6c8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"OnStartConnectionEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable.WakeUpRemoteVehicle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::WakeUpRemoteVehicle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d672c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"WakeUpRemoteVehicle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable._TryFindRemoteVehicle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::_TryFindRemoteVehicle)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5d6b7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"_TryFindRemoteVehicle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable._TryFindRemoteVehicle_InCosmeticInstanceArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::RCRemoteHoldable::*)(int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GorillaTag::Cosmetics::RCRemoteHoldable::_TryFindRemoteVehicle_InCosmeticInstanceArray)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d6c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"_TryFindRemoteVehicle_InCosmeticInstanceArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::RCRemoteHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::RCRemoteHoldable::*)()>(&::GorillaTag::Cosmetics::RCRemoteHoldable::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d6cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_joystickTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_joystickTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTransform;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_joystickTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_triggerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_triggerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTransform;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_triggerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_buttonTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_buttonTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonTransform;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_buttonTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonTransform = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCVehicle>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_targetVehicle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVehicle;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCVehicle> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_targetVehicle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVehicle;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_targetVehicle(::UnityW<::GorillaTag::Cosmetics::RCVehicle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetVehicle = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_joystickLeanDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickLeanDegrees;
}
constexpr float_t const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_joystickLeanDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickLeanDegrees;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_joystickLeanDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickLeanDegrees = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_triggerPullDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerPullDegrees;
}
constexpr float_t const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_triggerPullDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerPullDegrees;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_triggerPullDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerPullDegrees = value;
}
constexpr float_t& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_buttonPressDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressDepth;
}
constexpr float_t const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_buttonPressDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressDepth;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_buttonPressDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPressDepth = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialJoystickRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialJoystickRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialJoystickRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialJoystickRotation;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_initialJoystickRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialJoystickRotation = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialTriggerRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialTriggerRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialTriggerRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialTriggerRotation;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_initialTriggerRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialTriggerRotation = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialButtonRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialButtonRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialButtonRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialButtonRotation;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_initialButtonRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialButtonRotation = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialButtonPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialButtonPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_initialButtonPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialButtonPosition;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_initialButtonPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialButtonPosition = value;
}
constexpr bool& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_currentlyHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyHeld;
}
constexpr bool const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_currentlyHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyHeld;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_currentlyHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlyHeld = value;
}
constexpr ::UnityEngine::XR::XRNode& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_xrNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr ::UnityEngine::XR::XRNode const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_xrNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrNode;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrNode = value;
}
constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_currentInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentInput;
}
constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_currentInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentInput;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_currentInput(::GlobalNamespace::RCRemoteHoldable_RCInput  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentInput = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_networkSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSync;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_networkSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSync;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_networkSync(::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSync = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_networkSyncPrefabName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncPrefabName;
}
constexpr ::StringW const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_networkSyncPrefabName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncPrefabName;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_networkSyncPrefabName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSyncPrefabName = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::ArrayW<::System::Object*>& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_emptyArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyArgs;
}
constexpr ::ArrayW<::System::Object*> const& GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_get_emptyArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyArgs;
}
constexpr void GorillaTag::Cosmetics::RCRemoteHoldable::__cordl_internal_set_emptyArgs(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyArgs = value;
}
inline ::UnityEngine::XR::XRNode GorillaTag::Cosmetics::RCRemoteHoldable::get_XRNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"get_XRNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method);
}
inline ::UnityW<::GorillaTag::Cosmetics::RCVehicle> GorillaTag::Cosmetics::RCRemoteHoldable::get_Vehicle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"get_Vehicle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::Cosmetics::RCVehicle>>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::RCRemoteHoldable::TurnOverrideActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"TurnOverrideActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GorillaTag::Cosmetics::RCRemoteHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::OnStartConnectionEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"OnStartConnectionEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::WakeUpRemoteVehicle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"WakeUpRemoteVehicle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::RCRemoteHoldable::_TryFindRemoteVehicle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"_TryFindRemoteVehicle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::RCRemoteHoldable::_TryFindRemoteVehicle_InCosmeticInstanceArray(int32_t  thisGobjInstId, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {"_TryFindRemoteVehicle_InCosmeticInstanceArray", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, thisGobjInstId, gameObjects);
}
inline void GorillaTag::Cosmetics::RCRemoteHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::RCRemoteHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::RCRemoteHoldable* GorillaTag::Cosmetics::RCRemoteHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::RCRemoteHoldable*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISnapTurnOverride"
constexpr  GorillaTag::Cosmetics::RCRemoteHoldable::operator ::GlobalNamespace::ISnapTurnOverride*() noexcept {
return static_cast<::GlobalNamespace::ISnapTurnOverride*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISnapTurnOverride"
constexpr ::GlobalNamespace::ISnapTurnOverride* GorillaTag::Cosmetics::RCRemoteHoldable::i___GlobalNamespace__ISnapTurnOverride() noexcept {
return static_cast<::GlobalNamespace::ISnapTurnOverride*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::RCRemoteHoldable::RCRemoteHoldable()   {
}
