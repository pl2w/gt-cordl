#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUseInteractor.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_impl.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUseInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUseInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUseInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerUseAPI_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_Hand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e3f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_UseAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IFingerUseAPI* (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_UseAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_UseAPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.set_UseAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::IFingerUseAPI*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_UseAPI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e3fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_UseAPI", {}, {::i2c::type_of<::Oculus::Interaction::IFingerUseAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_HandGrabTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandGrabTarget* (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_HandGrabTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_HandGrabTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_IsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_IsGrabbing)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4e3fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_IsGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_WristStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WristStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e4038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WristStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_FingersStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_FingersStrength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4e4040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_FingersStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_WristToGrabPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WristToGrabPoseOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa4e4060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WristToGrabPoseOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_WhenHandGrabStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WhenHandGrabStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e40d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WhenHandGrabStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.set_WhenHandGrabStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_WhenHandGrabStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e40dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_WhenHandGrabStarted", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.get_WhenHandGrabEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WhenHandGrabEnded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e40ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WhenHandGrabEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.set_WhenHandGrabEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_WhenHandGrabEnded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4e40f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_WhenHandGrabEnded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e4104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4e410c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4e4190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4e4258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4e42f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4e43f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.StartUsing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::StartUsing)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4e4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"StartUsing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4e4458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4e463c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.IsUsingInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::IsUsingInteractable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa4e44c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"IsUsingInteractable", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.CalculateUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::by_ref<::ArrayW<float_t>>)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::CalculateUseStrength)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xa4e4750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"CalculateUseStrength", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.MoveFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::by_ref<::ArrayW<float_t>>, float_t)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::MoveFingers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4e4a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"MoveFingers", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.MarkFingerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::MarkFingerInUse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4e4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"MarkFingerInUse", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.UnmarkFingerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::UnmarkFingerInUse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4e4b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"UnmarkFingerInUse", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.LerpFingerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::ArrayW<::UnityEngine::Quaternion>, ::ArrayW<::UnityEngine::Quaternion>, ::ArrayW<::UnityEngine::Quaternion>, ::Oculus::Interaction::Input::HandFinger, float_t)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::LerpFingerRotation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa4e4b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"LerpFingerRotation", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.GrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::GrabbingFingers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e4c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"GrabbingFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractable> (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa4e4c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.InjectAllHandGrabUseInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::IFingerUseAPI*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::InjectAllHandGrabUseInteractor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e4fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"InjectAllHandGrabUseInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IFingerUseAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.InjectUseApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::IFingerUseAPI*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::InjectUseApi)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e4fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"InjectUseApi", {}, {::i2c::type_of<::Oculus::Interaction::IFingerUseAPI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor.InjectOptionalHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::InjectOptionalHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e50b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"InjectOptionalHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::_ctor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa4e5184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor._Start_b__41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor::_Start_b__41_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4e541c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"<Start>b__41_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__useAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useAPI;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__useAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useAPI;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__useAPI(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useAPI = value;
}
constexpr ::Oculus::Interaction::IFingerUseAPI*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__UseAPI_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAPI_k__BackingField;
}
constexpr ::Oculus::Interaction::IFingerUseAPI* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__UseAPI_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseAPI_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__UseAPI_k__BackingField(::Oculus::Interaction::IFingerUseAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseAPI_k__BackingField = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__relaxedHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaxedHandPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__relaxedHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaxedHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__relaxedHandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relaxedHandPose = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__tightHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tightHandPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__tightHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tightHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__tightHandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tightHandPose = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__cachedRelaxedHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedRelaxedHandPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__cachedRelaxedHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedRelaxedHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__cachedRelaxedHandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedRelaxedHandPose = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__cachedTightHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTightHandPose;
}
constexpr ::Oculus::Interaction::HandGrab::HandPose* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__cachedTightHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTightHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__cachedTightHandPose(::Oculus::Interaction::HandGrab::HandPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTightHandPose = value;
}
constexpr ::Oculus::Interaction::Input::HandFingerFlags& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__fingersInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersInUse;
}
constexpr ::Oculus::Interaction::Input::HandFingerFlags const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__fingersInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersInUse;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__fingersInUse(::Oculus::Interaction::Input::HandFingerFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersInUse = value;
}
constexpr ::ArrayW<float_t>& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__fingerUseStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerUseStrength;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__fingerUseStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerUseStrength;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__fingerUseStrength(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerUseStrength = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__usesHandPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usesHandPose;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__usesHandPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usesHandPose;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__usesHandPose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usesHandPose = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__handUseShouldSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handUseShouldSelect;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__handUseShouldSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handUseShouldSelect;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__handUseShouldSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handUseShouldSelect = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__handUseShouldUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handUseShouldUnselect;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__handUseShouldUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handUseShouldUnselect;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__handUseShouldUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handUseShouldUnselect = value;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__HandGrabTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabTarget_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::HandGrabTarget* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__HandGrabTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabTarget_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__HandGrabTarget_k__BackingField(::Oculus::Interaction::HandGrab::HandGrabTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandGrabTarget_k__BackingField = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__WhenHandGrabStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WhenHandGrabStarted_k__BackingField;
}
constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__WhenHandGrabStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WhenHandGrabStarted_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__WhenHandGrabStarted_k__BackingField(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WhenHandGrabStarted_k__BackingField = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__WhenHandGrabEnded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WhenHandGrabEnded_k__BackingField;
}
constexpr ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* const& Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_get__WhenHandGrabEnded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WhenHandGrabEnded_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabUseInteractor::__cordl_internal_set__WhenHandGrabEnded_k__BackingField(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WhenHandGrabEnded_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IFingerUseAPI* Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_UseAPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_UseAPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IFingerUseAPI*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_UseAPI(::Oculus::Interaction::IFingerUseAPI*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_UseAPI", {}, {::i2c::type_of<::Oculus::Interaction::IFingerUseAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_HandGrabTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_HandGrabTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandGrabTarget*>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_IsGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_IsGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WristStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WristStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_FingersStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_FingersStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WristToGrabPoseOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WristToGrabPoseOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WhenHandGrabStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WhenHandGrabStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_WhenHandGrabStarted(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_WhenHandGrabStarted", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* Oculus::Interaction::HandGrab::HandGrabUseInteractor::get_WhenHandGrabEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"get_WhenHandGrabEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::set_WhenHandGrabEnded(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"set_WhenHandGrabEnded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandGrab::HandGrabUseInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabUseInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::InteractableSelected(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::InteractableUnselected(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::StartUsing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"StartUsing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabUseInteractor::IsUsingInteractable(::Oculus::Interaction::HandGrab::HandGrabUseInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"IsUsingInteractable", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabUseInteractor::CalculateUseStrength(::by_ref<::ArrayW<float_t>>  fingerUseStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"CalculateUseStrength", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fingerUseStrength);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::MoveFingers(::by_ref<::ArrayW<float_t>>  fingerUseProgress, float_t  useProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"MoveFingers", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerUseProgress, useProgress);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::MarkFingerInUse(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"MarkFingerInUse", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::UnmarkFingerInUse(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"UnmarkFingerInUse", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::LerpFingerRotation(::ArrayW<::UnityEngine::Quaternion>  from, ::ArrayW<::UnityEngine::Quaternion>  to, ::ArrayW<::UnityEngine::Quaternion>  result, ::Oculus::Interaction::Input::HandFinger  finger, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"LerpFingerRotation", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, result, finger, t);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::HandGrab::HandGrabUseInteractor::GrabbingFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"GrabbingFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractable> Oculus::Interaction::HandGrab::HandGrabUseInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabUseInteractable>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::InjectAllHandGrabUseInteractor(::Oculus::Interaction::IFingerUseAPI*  useApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"InjectAllHandGrabUseInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IFingerUseAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useApi);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::InjectUseApi(::Oculus::Interaction::IFingerUseAPI*  useApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"InjectUseApi", {}, {::i2c::type_of<::Oculus::Interaction::IFingerUseAPI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useApi);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::InjectOptionalHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"InjectOptionalHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor::_Start_b__41_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>(),
                        {"<Start>b__41_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractor* Oculus::Interaction::HandGrab::HandGrabUseInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabUseInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr  Oculus::Interaction::HandGrab::HandGrabUseInteractor::operator ::Oculus::Interaction::HandGrab::IHandGrabState*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabState"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* Oculus::Interaction::HandGrab::HandGrabUseInteractor::i___Oculus__Interaction__HandGrab__IHandGrabState() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabUseInteractor::HandGrabUseInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::*)()>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e54cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c.__ctor_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::__ctor_b__58_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e54d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(),
                        {"<.ctor>b__58_0", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c.__ctor_b__58_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::__ctor_b__58_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e54d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(),
                        {"<.ctor>b__58_1", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::setStaticF___9(::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*, "<>9", ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(std::forward<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(value));
}
inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c* Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*, "<>9", ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>();
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::setStaticF___9__58_0(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*, "<>9__58_0", ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(std::forward<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::getStaticF___9__58_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*, "<>9__58_0", ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>();
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::setStaticF___9__58_1(::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*, "<>9__58_1", ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(std::forward<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>* Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::getStaticF___9__58_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::HandGrab::IHandGrabState*>*, "<>9__58_1", ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>();
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::__ctor_b__58_0(::Oculus::Interaction::HandGrab::IHandGrabState*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(),
                        {"<.ctor>b__58_0", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::__ctor_b__58_1(::Oculus::Interaction::HandGrab::IHandGrabState*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>(),
                        {"<.ctor>b__58_1", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c* Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabUseInteractor___c::HandGrabUseInteractor___c()   {
}
