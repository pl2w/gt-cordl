#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnerEventBroadcaster.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_TurnMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_TurnMode_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractor* (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_Interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.set_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_Interactor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_Axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis1D* (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_Axis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.set_Axis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_Axis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_TurnMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TurnerEventBroadcaster_TurnMode (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_TurnMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_TurnMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.set_TurnMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::GlobalNamespace::TurnerEventBroadcaster_TurnMode)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_TurnMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_TurnMethod", {}, {::i2c::type_of<::GlobalNamespace::TurnerEventBroadcaster_TurnMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_SnapTurnDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SnapTurnDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_SnapTurnDegrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.set_SnapTurnDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SnapTurnDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_SnapTurnDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_SmoothTurnCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SmoothTurnCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_SmoothTurnCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.set_SmoothTurnCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SmoothTurnCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_SmoothTurnCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_FireSnapOnUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_FireSnapOnUnselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_FireSnapOnUnselect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.set_FireSnapOnUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(bool)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_FireSnapOnUnselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d5ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_FireSnapOnUnselect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Identifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d5ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Awake)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa4d5edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d6028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnEnable)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa4d6054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnDisable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4d620c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4d63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4d6478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandleStateChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4d6520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.HandlePostprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandlePostprocessed)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xa4d6534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"HandlePostprocessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.SnapTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::SnapTurn)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4d681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"SnapTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.SmoothTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(float_t)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::SmoothTurn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4d68b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"SmoothTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.InjectAllTurnerEventBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::IInteractor*, ::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAllTurnerEventBroadcaster)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4d6968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"InjectAllTurnerEventBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.InjectInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectInteractor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster.InjectAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAxis)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d6a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"InjectAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa4d6b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__Interactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__Interactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Interactor_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__Axis_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__Axis_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Axis_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__Axis_k__BackingField(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Axis_k__BackingField = value;
}
constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__turnMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turnMethod;
}
constexpr ::GlobalNamespace::TurnerEventBroadcaster_TurnMode const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__turnMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turnMethod;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__turnMethod(::GlobalNamespace::TurnerEventBroadcaster_TurnMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____turnMethod = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__snapTurnDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnDegrees;
}
constexpr float_t const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__snapTurnDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnDegrees;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__snapTurnDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapTurnDegrees = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__smoothTurnCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__smoothTurnCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnCurve;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__smoothTurnCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothTurnCurve = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__fireSnapOnUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireSnapOnUnselect;
}
constexpr bool const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__fireSnapOnUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireSnapOnUnselect;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__fireSnapOnUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fireSnapOnUnselect = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__wasSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSelecting;
}
constexpr bool const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__wasSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasSelecting;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__wasSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasSelecting = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__whenLocomotionEventRaised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventRaised;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_get__whenLocomotionEventRaised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenLocomotionEventRaised;
}
constexpr void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::__cordl_internal_set__whenLocomotionEventRaised(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenLocomotionEventRaised = value;
}
inline ::Oculus::Interaction::IInteractor* Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_Interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractor*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Interactor(::Oculus::Interaction::IInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_Interactor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Axis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_Axis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis1D*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_Axis(::Oculus::Interaction::Input::IAxis1D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_Axis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TurnerEventBroadcaster_TurnMode Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_TurnMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_TurnMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TurnerEventBroadcaster_TurnMode>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_TurnMethod(::GlobalNamespace::TurnerEventBroadcaster_TurnMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_TurnMethod", {}, {::i2c::type_of<::GlobalNamespace::TurnerEventBroadcaster_TurnMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SnapTurnDegrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_SnapTurnDegrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SnapTurnDegrees(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_SnapTurnDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_SmoothTurnCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_SmoothTurnCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_SmoothTurnCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_SmoothTurnCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_FireSnapOnUnselect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_FireSnapOnUnselect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::set_FireSnapOnUnselect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"set_FireSnapOnUnselect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::TurnerEventBroadcaster::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::HandlePostprocessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"HandlePostprocessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::SnapTurn(float_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"SnapTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::SmoothTurn(float_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"SmoothTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAllTurnerEventBroadcaster(::Oculus::Interaction::IInteractor*  interactor, ::Oculus::Interaction::Input::IAxis1D*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"InjectAllTurnerEventBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, axis);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectInteractor(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::InjectAxis(::Oculus::Interaction::Input::IAxis1D*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {"InjectAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster* Oculus::Interaction::Locomotion::TurnerEventBroadcaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::TurnerEventBroadcaster::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::TurnerEventBroadcaster::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster::TurnerEventBroadcaster()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::*)()>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d6cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c.__ctor_b__47_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::__ctor_b__47_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d6cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(),
                        {"<.ctor>b__47_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::setStaticF___9(::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(std::forward<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c* Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*, "<>9", ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::setStaticF___9__47_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__47_0", ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::getStaticF___9__47_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__47_0", ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>();
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::__ctor_b__47_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>(),
                        {"<.ctor>b__47_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c* Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TurnerEventBroadcaster___c::TurnerEventBroadcaster___c()   {
}
