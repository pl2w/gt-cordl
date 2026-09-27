#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/PinchGrabAPI.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__PinchGrabAPI_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__PinchGrabAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.get_DistanceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::get_DistanceStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4f963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"get_DistanceStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.get_DistanceStopMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::get_DistanceStopMax)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f9658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"get_DistanceStopMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.get_DistanceStopOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::get_DistanceStopOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4f9664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"get_DistanceStopOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa4f9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4f9a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.GetWristOffsetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::GetWristOffsetLocal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4f9a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.GetFingerIsGrabbingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::GetFingerIsGrabbingChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4f9b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.GetFingerGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::GetFingerGrabScore)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4f9b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::Update)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa4f9b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*, ::Oculus::Interaction::Input::Handedness, ::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa4f9d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.UpdateThumb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::UpdateThumb)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4fa1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"UpdateThumb", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.IsThumbNearIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::IsThumbNearIndex)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa4fa434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"IsThumbNearIndex", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.UpdateFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::UpdateFinger)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4fa2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"UpdateFinger", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.UpdatePinchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(float_t, int32_t, float_t, float_t, float_t)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::UpdatePinchData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4fa998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"UpdatePinchData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::ClearState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4f9ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"ClearState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.IsPointNearThumb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::UnityEngine::Vector3, ::ArrayW<::Oculus::Interaction::Input::HandJointId>)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::IsPointNearThumb)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa4fab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"IsPointNearThumb", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.GetClosestDistanceToJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::Oculus::Interaction::Input::HandJointId>, float_t)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::GetClosestDistanceToJoints)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa4fa664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetClosestDistanceToJoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.GetClosestDistanceToJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::UnityEngine::Vector3, ::ArrayW<::Oculus::Interaction::Input::HandJointId>)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::GetClosestDistanceToJoints)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4faa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetClosestDistanceToJoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.DistancePointToSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::DistancePointToSegment)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa4fb4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"DistancePointToSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.DistanceSegmentToSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::DistanceSegmentToSegment)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0xa4fae1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"DistanceSegmentToSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI.PinchHasGoodVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PinchGrabAPI::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI::PinchHasGoodVisibility)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa4f9f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"PinchHasGoodVisibility", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__isPinchVisibilityGood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPinchVisibilityGood;
}
constexpr bool const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__isPinchVisibilityGood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPinchVisibilityGood;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set__isPinchVisibilityGood(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPinchVisibilityGood = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get_THUMB_JOINTS_SELECT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___THUMB_JOINTS_SELECT;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get_THUMB_JOINTS_SELECT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___THUMB_JOINTS_SELECT;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set_THUMB_JOINTS_SELECT(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___THUMB_JOINTS_SELECT = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get_THUMB_JOINTS_MAINTAIN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___THUMB_JOINTS_MAINTAIN;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get_THUMB_JOINTS_MAINTAIN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___THUMB_JOINTS_MAINTAIN;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set_THUMB_JOINTS_MAINTAIN(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___THUMB_JOINTS_MAINTAIN = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get_INDEX_JOINTS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___INDEX_JOINTS;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get_INDEX_JOINTS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___INDEX_JOINTS;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set_INDEX_JOINTS(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___INDEX_JOINTS = value;
}
constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__fingersPinchData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersPinchData;
}
constexpr ::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*> const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__fingersPinchData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersPinchData;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set__fingersPinchData(::ArrayW<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersPinchData = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set__hmd(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::ShadowHand*& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__shadowHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadowHand;
}
constexpr ::Oculus::Interaction::Input::ShadowHand* const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__shadowHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadowHand;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set__shadowHand(::Oculus::Interaction::Input::ShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shadowHand = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__handScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handScale;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__handScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handScale;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set__handScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handScale = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__rootPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_get__rootPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootPose;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI::__cordl_internal_set__rootPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootPose = value;
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::get_DistanceStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"get_DistanceStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::get_DistanceStopMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"get_DistanceStopMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::get_DistanceStopOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"get_DistanceStopOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::_ctor(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline bool Oculus::Interaction::GrabAPI::PinchGrabAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::PinchGrabAPI::GetWristOffsetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetWristOffsetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::PinchGrabAPI::GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetFingerIsGrabbingChanged", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, targetPinchState);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetFingerGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::Update(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::Update(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  handPoses, ::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Pose  rootPose, float_t  handScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"Update", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handPoses, handedness, rootPose, handScale);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::UpdateThumb(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"UpdateThumb", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness);
}
inline bool Oculus::Interaction::GrabAPI::PinchGrabAPI::IsThumbNearIndex(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"IsThumbNearIndex", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::UpdateFinger(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"UpdateFinger", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::UpdatePinchData(float_t  distance, int32_t  fingerIndex, float_t  distanceStart, float_t  distanceStopOffset, float_t  distanceStopMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"UpdatePinchData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, fingerIndex, distanceStart, distanceStopOffset, distanceStopMax);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI::ClearState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"ClearState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabAPI::PinchGrabAPI::IsPointNearThumb(::UnityEngine::Vector3  position, ::ArrayW<::Oculus::Interaction::Input::HandJointId>  thumbJoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"IsPointNearThumb", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, thumbJoints);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::GetClosestDistanceToJoints(::UnityEngine::Vector3  edgeStart, ::UnityEngine::Vector3  edgeEnd, ::ArrayW<::Oculus::Interaction::Input::HandJointId>  targetJoints, float_t  maximumDotAllowed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetClosestDistanceToJoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, edgeStart, edgeEnd, targetJoints, maximumDotAllowed);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::GetClosestDistanceToJoints(::UnityEngine::Vector3  position, ::ArrayW<::Oculus::Interaction::Input::HandJointId>  targetJoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"GetClosestDistanceToJoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, position, targetJoints);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::DistancePointToSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  a0, ::UnityEngine::Vector3  a1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"DistancePointToSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, point, a0, a1);
}
inline float_t Oculus::Interaction::GrabAPI::PinchGrabAPI::DistanceSegmentToSegment(::UnityEngine::Vector3  a0, ::UnityEngine::Vector3  a1, ::UnityEngine::Vector3  b0, ::UnityEngine::Vector3  b1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"DistanceSegmentToSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, a0, a1, b0, b1);
}
inline bool Oculus::Interaction::GrabAPI::PinchGrabAPI::PinchHasGoodVisibility(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(),
                        {"PinchHasGoodVisibility", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handedness);
}
inline ::Oculus::Interaction::GrabAPI::PinchGrabAPI* Oculus::Interaction::GrabAPI::PinchGrabAPI::New_ctor(::Oculus::Interaction::Input::IHmd*  hmd)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::PinchGrabAPI*>(hmd));
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerAPI"
constexpr  Oculus::Interaction::GrabAPI::PinchGrabAPI::operator ::Oculus::Interaction::IFingerAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerAPI"
constexpr ::Oculus::Interaction::IFingerAPI* Oculus::Interaction::GrabAPI::PinchGrabAPI::i___Oculus__Interaction__IFingerAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::PinchGrabAPI::PinchGrabAPI()   {
}
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.get_TipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::get_TipPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fb620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"get_TipPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.set_TipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::set_TipPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4fb62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"set_TipPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.get_IsPinchingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::get_IsPinchingChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fb638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"get_IsPinchingChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.set_IsPinchingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)(bool)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::set_IsPinchingChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fb640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"set_IsPinchingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4f99ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.UpdateTipPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)(::Oculus::Interaction::Input::ShadowHand*)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::UpdateTipPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4fa3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"UpdateTipPosition", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.UpdateIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)(float_t, float_t, float_t, float_t)>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::UpdateIsPinching)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4fadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"UpdateIsPinching", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData.ClearState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::*)()>(&::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::ClearState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fae14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"ClearState", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__tipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tipId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__tipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tipId;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_set__tipId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tipId = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__minPinchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minPinchDistance;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__minPinchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minPinchDistance;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_set__minPinchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minPinchDistance = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__TipPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TipPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__TipPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TipPosition_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_set__TipPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TipPosition_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__IsPinchingChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinchingChanged_k__BackingField;
}
constexpr bool const& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get__IsPinchingChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPinchingChanged_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_set__IsPinchingChanged_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPinchingChanged_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get_PinchStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PinchStrength;
}
constexpr float_t const& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get_PinchStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PinchStrength;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_set_PinchStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PinchStrength = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get_IsPinching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPinching;
}
constexpr bool const& Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_get_IsPinching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPinching;
}
constexpr void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::__cordl_internal_set_IsPinching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPinching = value;
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::get_TipPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"get_TipPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::set_TipPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"set_TipPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::get_IsPinchingChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"get_IsPinchingChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::set_IsPinchingChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"set_IsPinchingChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::_ctor(::Oculus::Interaction::Input::HandFinger  fingerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerId);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::UpdateTipPosition(::Oculus::Interaction::Input::ShadowHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"UpdateTipPosition", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::UpdateIsPinching(float_t  distance, float_t  start, float_t  stopOffset, float_t  stopMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"UpdateIsPinching", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, start, stopOffset, stopMax);
}
inline void Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::ClearState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(),
                        {"ClearState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData* Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::New_ctor(::Oculus::Interaction::Input::HandFinger  fingerId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData*>(fingerId));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::PinchGrabAPI_FingerPinchData::PinchGrabAPI_FingerPinchData()   {
}
