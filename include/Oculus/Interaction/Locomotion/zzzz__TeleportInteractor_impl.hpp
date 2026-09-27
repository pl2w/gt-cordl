#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportInteractor.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_impl.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IPolyline_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_TeleportArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IPolyline* (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_TeleportArc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cde6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_TeleportArc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.set_TeleportArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::IPolyline*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::set_TeleportArc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4cde74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_TeleportArc", {}, {::i2c::type_of<::Oculus::Interaction::IPolyline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_EqualDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_EqualDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cde84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_EqualDistanceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.set_EqualDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(float_t)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::set_EqualDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cde8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_EqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHmd* (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cde94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_Hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.set_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::set_Hmd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4cde9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_ArcOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_ArcOrigin)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa4cdeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_ArcOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_ArcEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::TeleportHit (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_ArcEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4ce038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_ArcEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_TeleportTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_TeleportTarget)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa4ce050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_TeleportTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4ce2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4ce350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.get_AcceptDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::get_AcceptDestination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ce3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_AcceptDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.set_AcceptDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::set_AcceptDestination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4ce400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_AcceptDestination", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::Awake)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4ce410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::Start)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa4ce678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa4ce934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.HasValidDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::HasValidDestination)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4ceb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"HasValidDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xa4cec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4cee64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.ComputeCandidateTiebreaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::Oculus::Interaction::Locomotion::TeleportInteractable*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::ComputeCandidateTiebreaker)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4cefa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.InjectAllTeleportInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::InjectAllTeleportInteractor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4cf038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectAllTeleportInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.InjectSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::InjectSelector)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4cf03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.InjectOptionalHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::InjectOptionalHmd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4cf120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectOptionalHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.InjectOptionalTeleportArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::IPolyline*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::InjectOptionalTeleportArc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4ce864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectOptionalTeleportArc", {}, {::i2c::type_of<::Oculus::Interaction::IPolyline*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor.InjectOptionalCandidateComputer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor::InjectOptionalCandidateComputer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4cf1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectOptionalCandidateComputer", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4cf200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor._Start_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor::_Start_b__36_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4cf310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"<Start>b__36_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__teleportArc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportArc;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__teleportArc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportArc;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__teleportArc(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportArc = value;
}
constexpr ::Oculus::Interaction::IPolyline*& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__TeleportArc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportArc_k__BackingField;
}
constexpr ::Oculus::Interaction::IPolyline* const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__TeleportArc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportArc_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__TeleportArc_k__BackingField(::Oculus::Interaction::IPolyline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TeleportArc_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__equalDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr float_t const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__equalDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__equalDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____equalDistanceThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__Hmd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__Hmd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hmd_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportHit& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__arcEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcEnd;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportHit const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__arcEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arcEnd;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__arcEnd(::Oculus::Interaction::Locomotion::TeleportHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arcEnd = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__whenLocomotionPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionPerformed;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__whenLocomotionPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionPerformed;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__whenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionPerformed = value;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__acceptDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptDestination;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__acceptDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptDestination;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__acceptDestination(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceptDestination = value;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__computeCandidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeCandidate;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate* const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__computeCandidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeCandidate;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__computeCandidate(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____computeCandidate = value;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__computeCandidateTiebreaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeCandidateTiebreaker;
}
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate* const& Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_get__computeCandidateTiebreaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeCandidateTiebreaker;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractor::__cordl_internal_set__computeCandidateTiebreaker(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____computeCandidateTiebreaker = value;
}
inline ::Oculus::Interaction::IPolyline* Oculus::Interaction::Locomotion::TeleportInteractor::get_TeleportArc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_TeleportArc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IPolyline*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::set_TeleportArc(::Oculus::Interaction::IPolyline*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_TeleportArc", {}, {::i2c::type_of<::Oculus::Interaction::IPolyline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::TeleportInteractor::get_EqualDistanceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_EqualDistanceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::set_EqualDistanceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_EqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::Locomotion::TeleportInteractor::get_Hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_Hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHmd*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::TeleportInteractor::get_ArcOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_ArcOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::TeleportHit Oculus::Interaction::Locomotion::TeleportInteractor::get_ArcEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_ArcEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::TeleportHit>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::TeleportInteractor::get_TeleportTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_TeleportTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* Oculus::Interaction::Locomotion::TeleportInteractor::get_AcceptDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"get_AcceptDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::set_AcceptDestination(::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"set_AcceptDestination", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractor::CanSelect(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractor::HasValidDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"HasValidDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::InteractableSelected(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> Oculus::Interaction::Locomotion::TeleportInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Locomotion::TeleportInteractor::ComputeCandidateTiebreaker(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::InjectAllTeleportInteractor(::Oculus::Interaction::ISelector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectAllTeleportInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::InjectSelector(::Oculus::Interaction::ISelector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::InjectOptionalHmd(::Oculus::Interaction::Input::IHmd*  hmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectOptionalHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmd);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::InjectOptionalTeleportArc(::Oculus::Interaction::IPolyline*  teleportArc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectOptionalTeleportArc", {}, {::i2c::type_of<::Oculus::Interaction::IPolyline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teleportArc);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::InjectOptionalCandidateComputer(::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*  candidateComputer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"InjectOptionalCandidateComputer", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, candidateComputer);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor::_Start_b__36_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(),
                        {"<Start>b__36_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor* Oculus::Interaction::Locomotion::TeleportInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::TeleportInteractor::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::TeleportInteractor::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor::TeleportInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor___c::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cf734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor___c.__ctor_b__47_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::TeleportInteractor___c::__ctor_b__47_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4cf73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(),
                        {"<.ctor>b__47_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TeleportInteractor___c::setStaticF___9(::Oculus::Interaction::Locomotion::TeleportInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::TeleportInteractor___c*, "<>9", ::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(std::forward<::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor___c* Oculus::Interaction::Locomotion::TeleportInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::TeleportInteractor___c*, "<>9", ::Oculus::Interaction::Locomotion::TeleportInteractor___c*>();
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor___c::setStaticF___9__47_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__47_0", ::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::TeleportInteractor___c::getStaticF___9__47_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__47_0", ::Oculus::Interaction::Locomotion::TeleportInteractor___c*>();
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractor___c::__ctor_b__47_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor___c*>(),
                        {"<.ctor>b__47_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor___c* Oculus::Interaction::Locomotion::TeleportInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor___c::TeleportInteractor___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4cc3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::*)(::Oculus::Interaction::IPolyline*, ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4cf5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::*)(::Oculus::Interaction::IPolyline*, ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4cf5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::*)(::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>, ::System::IAsyncResult*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4cf6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::Invoke(::Oculus::Interaction::IPolyline*  TeleportArc, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>(this, ___internal_method, TeleportArc, interactables, tiebreaker, hitPose);
}
inline ::System::IAsyncResult* Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::BeginInvoke(::Oculus::Interaction::IPolyline*  TeleportArc, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, TeleportArc, interactables, tiebreaker, hitPose, callback, object);
}
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::EndInvoke(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>(this, ___internal_method, interactables, hitPose, result);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate* Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateDelegate::TeleportInteractor_ComputeCandidateDelegate()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4ce56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::Oculus::Interaction::Locomotion::TeleportInteractable*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4cf560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::Oculus::Interaction::Locomotion::TeleportInteractable*, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4cf574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::*)(::System::IAsyncResult*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4cf59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::Invoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::System::IAsyncResult* Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::BeginInvoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, a, b, callback, object);
}
inline int32_t Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate* Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate::TeleportInteractor_ComputeCandidateTiebreakerDelegate()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4cf358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::Invoke)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4cf464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::UnityEngine::Pose, ::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4cf4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::*)(::System::IAsyncResult*)>(&::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4cf538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::Invoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable, ::UnityEngine::Pose  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, destination);
}
inline ::System::IAsyncResult* Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::BeginInvoke(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable, ::UnityEngine::Pose  destination, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, interactable, destination, callback, object);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer* Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractor_AcceptDestinationComputer::TeleportInteractor_AcceptDestinationComputer()   {
}
