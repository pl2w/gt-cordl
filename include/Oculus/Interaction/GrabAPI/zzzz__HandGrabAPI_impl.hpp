#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/HandGrabAPI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/Input/zzzz__PinchGrabParam_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerAPI_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.get_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHmd* (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::get_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"get_Hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.set_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::set_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4fe860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4fe8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4fe9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4feacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.OnHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::OnHandUpdated)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa4febcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"OnHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.HandPinchGrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::HandPinchGrabbingFingers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"HandPinchGrabbingFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.HandPalmGrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::HandPalmGrabbingFingers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fedcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"HandPalmGrabbingFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.HandGrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::IFingerAPI*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::HandGrabbingFingers)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4fecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"HandGrabbingFingers", {}, {::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandPinchGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandPinchGrabbing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4fedd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandPinchGrabbing", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandPalmGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandPalmGrabbing)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4fefbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandPalmGrabbing", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsSustainingGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>, ::Oculus::Interaction::Input::HandFingerFlags)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsSustainingGrab)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4fedf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsSustainingGrab", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandSelectPinchFingersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandSelectPinchFingersChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fefe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandSelectPinchFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandSelectPalmFingersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandSelectPalmFingersChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ff2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandSelectPalmFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandUnselectPinchFingersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandUnselectPinchFingersChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ff2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandUnselectPinchFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandUnselectPalmFingersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandUnselectPalmFingersChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ff6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandUnselectPalmFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandSelectFingersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>, ::Oculus::Interaction::IFingerAPI*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandSelectFingersChanged)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa4fefe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandSelectFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.IsHandUnselectFingersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>, ::Oculus::Interaction::IFingerAPI*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandUnselectFingersChanged)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa4ff2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandUnselectFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetPinchCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetPinchCenter)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4ff6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetPinchCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetPalmCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetPalmCenter)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4ff9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetPalmCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.WristOffsetToWorldPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::WristOffsetToWorldPoint)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa4ff7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"WristOffsetToWorldPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetHandPinchScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>, bool)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetHandPinchScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ffaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetHandPinchScore", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetHandPalmScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>, bool)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetHandPalmScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ffe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetHandPalmScore", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetFingerPinchStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4ffe4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetFingerPinchPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPinchPercent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4ffef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPinchPercent", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetFingerPinchDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPinchDistance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4fffc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPinchDistance", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetFingerPalmStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPalmStrength)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa500098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPalmStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetHandGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>, bool, ::Oculus::Interaction::IFingerAPI*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetHandGrabScore)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa4ffaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetHandGrabScore", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.SetPinchGrabParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::PinchGrabParam, float_t)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::SetPinchGrabParam)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa500144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"SetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetPinchGrabParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::PinchGrabParam)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetPinchGrabParam)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa5001e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetFingerIsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerIsGrabbing)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa50026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.GetFingerIsPalmGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerIsPalmGrabbing)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa500314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerIsPalmGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.InjectAllHandGrabAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::InjectAllHandGrabAPI)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa5003bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectAllHandGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa5003c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.InjectOptionalHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::InjectOptionalHmd)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa500490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectOptionalHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.InjectOptionalFingerPinchAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::IFingerAPI*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::InjectOptionalFingerPinchAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50055c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectOptionalFingerPinchAPI", {}, {::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI.InjectOptionalFingerGrabAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)(::Oculus::Interaction::IFingerAPI*)>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::InjectOptionalFingerGrabAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa500564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectOptionalFingerGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::HandGrabAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::HandGrabAPI::*)()>(&::Oculus::Interaction::GrabAPI::HandGrabAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50056c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__Hmd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__Hmd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hmd_k__BackingField = value;
}
constexpr ::Oculus::Interaction::IFingerAPI*& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__fingerPinchGrabAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerPinchGrabAPI;
}
constexpr ::Oculus::Interaction::IFingerAPI* const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__fingerPinchGrabAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerPinchGrabAPI;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__fingerPinchGrabAPI(::Oculus::Interaction::IFingerAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerPinchGrabAPI = value;
}
constexpr ::Oculus::Interaction::IFingerAPI*& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__fingerPalmGrabAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerPalmGrabAPI;
}
constexpr ::Oculus::Interaction::IFingerAPI* const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__fingerPalmGrabAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerPalmGrabAPI;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__fingerPalmGrabAPI(::Oculus::Interaction::IFingerAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerPalmGrabAPI = value;
}
constexpr bool& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::GrabAPI::HandGrabAPI::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::GrabAPI::HandGrabAPI::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::GrabAPI::HandGrabAPI::get_Hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"get_Hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHmd*>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::OnHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"OnHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::GrabAPI::HandGrabAPI::HandPinchGrabbingFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"HandPinchGrabbingFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::GrabAPI::HandGrabAPI::HandPalmGrabbingFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"HandPalmGrabbingFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::GrabAPI::HandGrabAPI::HandGrabbingFingers(::Oculus::Interaction::IFingerAPI*  fingerAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"HandGrabbingFingers", {}, {::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method, fingerAPI);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandPinchGrabbing(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandPinchGrabbing", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandPalmGrabbing(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandPalmGrabbing", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsSustainingGrab(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, ::Oculus::Interaction::Input::HandFingerFlags  grabbingFingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsSustainingGrab", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers, grabbingFingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandSelectPinchFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandSelectPinchFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandSelectPalmFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandSelectPalmFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandUnselectPinchFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandUnselectPinchFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandUnselectPalmFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandUnselectPalmFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandSelectFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, ::Oculus::Interaction::IFingerAPI*  fingerAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandSelectFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers, fingerAPI);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::IsHandUnselectFingersChanged(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, ::Oculus::Interaction::IFingerAPI*  fingerAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"IsHandUnselectFingersChanged", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingers, fingerAPI);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::HandGrabAPI::GetPinchCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetPinchCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::HandGrabAPI::GetPalmCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetPalmCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::GrabAPI::HandGrabAPI::WristOffsetToWorldPoint(::UnityEngine::Vector3  localOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"WristOffsetToWorldPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, localOffset);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetHandPinchScore(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, bool  includePinching)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetHandPinchScore", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fingers, includePinching);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetHandPalmScore(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, bool  includeGrabbing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetHandPalmScore", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fingers, includeGrabbing);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPinchPercent(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPinchPercent", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPinchDistance(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPinchDistance", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerPalmStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerPalmStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetHandGrabScore(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>  fingers, bool  includeGrabbing, ::Oculus::Interaction::IFingerAPI*  fingerAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetHandGrabScore", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::GrabAPI::GrabbingRule>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fingers, includeGrabbing, fingerAPI);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::SetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId, float_t  paramVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"SetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramId, paramVal);
}
inline float_t Oculus::Interaction::GrabAPI::HandGrabAPI::GetPinchGrabParam(::Oculus::Interaction::Input::PinchGrabParam  paramId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetPinchGrabParam", {}, {::i2c::type_of<::Oculus::Interaction::Input::PinchGrabParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, paramId);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerIsGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::GrabAPI::HandGrabAPI::GetFingerIsPalmGrabbing(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"GetFingerIsPalmGrabbing", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::InjectAllHandGrabAPI(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectAllHandGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::InjectOptionalHmd(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectOptionalHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::InjectOptionalFingerPinchAPI(::Oculus::Interaction::IFingerAPI*  fingerPinchAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectOptionalFingerPinchAPI", {}, {::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerPinchAPI);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::InjectOptionalFingerGrabAPI(::Oculus::Interaction::IFingerAPI*  fingerGrabAPI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {"InjectOptionalFingerGrabAPI", {}, {::i2c::type_of<::Oculus::Interaction::IFingerAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerGrabAPI);
}
inline void Oculus::Interaction::GrabAPI::HandGrabAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::HandGrabAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::HandGrabAPI* Oculus::Interaction::GrabAPI::HandGrabAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::HandGrabAPI*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::HandGrabAPI::HandGrabAPI()   {
}
