#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/TeleportReticleDrawer.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__TeleportReticleDrawer_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataTeleport_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__TeleportReticleDrawer_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_ProgressState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IAxis1D* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_ProgressState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f29d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_ProgressState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_ProgressState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_ProgressState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f29d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_ProgressState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_HighlightState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_HighlightState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_HighlightState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_HighlightState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_HighlightState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f29e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_HighlightState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_AcceptColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_AcceptColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f29f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_AcceptColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_AcceptColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::Color)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_AcceptColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f29fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_AcceptColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_RejectColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_RejectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f2a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_RejectColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_RejectColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::Color)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_RejectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4f2a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_RejectColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_AcceptAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_AcceptAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_AcceptAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_AcceptAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_AcceptAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_AcceptAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_RejectAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_RejectAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_RejectAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_RejectAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_RejectAnimation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_RejectAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_TransitionSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_TransitionSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_TransitionSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_TransitionSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(float_t)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_TransitionSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_TransitionSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractorView* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.set_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f2a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.get_InteractableComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_InteractableComponent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4f2a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4f2aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4f2b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4f2be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4f2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.Align
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Align)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa4f2e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Draw)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4f31b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Hide)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4f3330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.SetReticleColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::Color)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SetReticleColor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4f3244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SetReticleColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.SetReticleProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(float_t)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SetReticleProgress)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4f2cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SetReticleProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.SetReticleHighlight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(bool)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SetReticleHighlight)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4f3118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SetReticleHighlight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::HandleStateChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4f33f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.SelectionAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SelectionAnimation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4f3438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SelectionAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectAllTeleportReticleDrawer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::Locomotion::TeleportInteractor*, ::UnityEngine::Renderer*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectAllTeleportReticleDrawer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4f34cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectAllTeleportReticleDrawer", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::Locomotion::TeleportInteractor*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f34fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::Renderer*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectTargetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f3504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectTargetRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectOptionalValidTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::Renderer*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalValidTargetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f350c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalValidTargetRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectOptionalInalidTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::UnityEngine::Renderer*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalInalidTargetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f3514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalInalidTargetRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectOptionalProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalProgress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f351c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalProgress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer.InjectOptionalHighlightState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalHighlightState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f35ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalHighlightState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4f36bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer._Start_b__48_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::_Start_b__48_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4f3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"<Start>b__48_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRenderer;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__targetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__invalidTargetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invalidTargetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__invalidTargetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invalidTargetRenderer;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__invalidTargetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invalidTargetRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__progressState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__progressState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressState;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__progressState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressState = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__ProgressState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProgressState_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__ProgressState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProgressState_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__ProgressState_k__BackingField(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ProgressState_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__highlightState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__highlightState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightState;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__highlightState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightState = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__HighlightState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HighlightState_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__HighlightState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HighlightState_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__HighlightState_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HighlightState_k__BackingField = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__acceptColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__acceptColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptColor;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__acceptColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceptColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__rejectColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rejectColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__rejectColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rejectColor;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__rejectColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rejectColor = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__acceptAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptAnimation;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__acceptAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptAnimation;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__acceptAnimation(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceptAnimation = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__rejectAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rejectAnimation;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__rejectAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rejectAnimation;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__rejectAnimation(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rejectAnimation = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__transitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSpeed;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__transitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitionSpeed;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__transitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitionSpeed = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__selectionAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectionAnimation;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__selectionAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectionAnimation;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__selectionAnimation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectionAnimation = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__animatedProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedProgress;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__animatedProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedProgress;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__animatedProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatedProgress = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__currentProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__currentProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__currentProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentProgress = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__acceptMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptMode;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__acceptMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptMode;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__acceptMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acceptMode = value;
}
constexpr ::Oculus::Interaction::IInteractorView*& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__Interactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractorView* const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_get__Interactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::__cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Interactor_k__BackingField = value;
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::setStaticF__progressKey(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_progressKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::getStaticF__progressKey()  {
return ::cordl_internals::getStaticField<int32_t, "_progressKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>();
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::setStaticF__highlightKey(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_highlightKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::getStaticF__highlightKey()  {
return ::cordl_internals::getStaticField<int32_t, "_highlightKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>();
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::setStaticF__colorKey(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_colorKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::getStaticF__colorKey()  {
return ::cordl_internals::getStaticField<int32_t, "_colorKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>();
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::setStaticF__highlightColorKey(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_highlightColorKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::getStaticF__highlightColorKey()  {
return ::cordl_internals::getStaticField<int32_t, "_highlightColorKey", ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>();
}
inline ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_ProgressState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_ProgressState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IAxis1D*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_ProgressState(::Oculus::Interaction::Input::IAxis1D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_ProgressState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_HighlightState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_HighlightState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_HighlightState(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_HighlightState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_AcceptColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_AcceptColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_AcceptColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_AcceptColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_RejectColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_RejectColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_RejectColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_RejectColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_AcceptAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_AcceptAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_AcceptAnimation(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_AcceptAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_RejectAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_RejectAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_RejectAnimation(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_RejectAnimation", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_TransitionSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"get_TransitionSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_TransitionSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"set_TransitionSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IInteractorView* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_Interactor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractorView*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::set_Interactor(::Oculus::Interaction::IInteractorView*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Component> Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::get_InteractableComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Align(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Draw(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SetReticleColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SetReticleColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SetReticleProgress(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SetReticleProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SetReticleHighlight(bool  highlight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SetReticleHighlight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highlight);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::SelectionAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"SelectionAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectAllTeleportReticleDrawer(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor, ::UnityEngine::Renderer*  targetRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectAllTeleportReticleDrawer", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>(), ::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, targetRenderer);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectInteractor(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectTargetRenderer(::UnityEngine::Renderer*  targetRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectTargetRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetRenderer);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalValidTargetRenderer(::UnityEngine::Renderer*  validTargetRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalValidTargetRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validTargetRenderer);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalInalidTargetRenderer(::UnityEngine::Renderer*  invalidTargetRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalInalidTargetRenderer", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invalidTargetRenderer);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalProgress(::Oculus::Interaction::Input::IAxis1D*  progressState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalProgress", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progressState);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::InjectOptionalHighlightState(::Oculus::Interaction::IActiveState*  highlightState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"InjectOptionalHighlightState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highlightState);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::_Start_b__48_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>(),
                        {"<Start>b__48_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer::TeleportReticleDrawer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::*)(int32_t)>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4f34a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f38c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa4f38cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4f3a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::*)()>(&::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f3a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer>& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer> const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get__targetProgress_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetProgress_5__2;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_get__targetProgress_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetProgress_5__2;
}
constexpr void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::__cordl_internal_set__targetProgress_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetProgress_5__2 = value;
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58::TeleportReticleDrawer__SelectionAnimation_d__58()   {
}
