#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Gaze/XRGazeAssistance.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Gaze/zzzz__XRGazeAssistance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Gaze/zzzz__IXRAimAssist_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Gaze/zzzz__XRGazeAssistance_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__XRInteractorLineVisual_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__XRInteractorReticleVisual_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRRayProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRGazeInteractor_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_gazeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor> (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_gazeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_gazeInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_gazeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_gazeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a263c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_gazeInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_fallbackDivergence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_fallbackDivergence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_fallbackDivergence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_fallbackDivergence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_fallbackDivergence)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4a264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_fallbackDivergence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_hideCursorWithNoActiveRays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_hideCursorWithNoActiveRays)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_hideCursorWithNoActiveRays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_hideCursorWithNoActiveRays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_hideCursorWithNoActiveRays)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_hideCursorWithNoActiveRays", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_rayInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>* (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_rayInteractors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_rayInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_rayInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_rayInteractors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_rayInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_aimAssistRequiredAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistRequiredAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a2690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistRequiredAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_aimAssistRequiredAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistRequiredAngle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4a2698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistRequiredAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_aimAssistRequiredSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistRequiredSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a26bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistRequiredSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_aimAssistRequiredSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistRequiredSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a26c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistRequiredSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_aimAssistPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a26cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_aimAssistPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistPercent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4a26d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.get_aimAssistMaxSpeedPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistMaxSpeedPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a26f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistMaxSpeedPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.set_aimAssistMaxSpeedPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistMaxSpeedPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a26fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistMaxSpeedPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::Initialize)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4a2704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4a2878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4a291c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a29c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::Update)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4a29c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::LateUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb4a2a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.OnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::OnBeforeRender)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4a2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"OnBeforeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.GetAssistedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocity)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb4a2c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.GetAssistedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocity)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb4a2d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.GetAssistedVelocityInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocityInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a262c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocityInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4a2e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a2ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist.GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a2ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist.GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance.GetAssistedVelocityInternal$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocityInternal$BurstManaged)> {
  constexpr static std::size_t size = 0xf38;
  constexpr static std::size_t addrs = 0xb4a2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocityInternal$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_GazeInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_GazeInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_GazeInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GazeInteractor = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_FallbackDivergence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackDivergence;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_FallbackDivergence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackDivergence;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_FallbackDivergence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FallbackDivergence = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_HideCursorWithNoActiveRays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideCursorWithNoActiveRays;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_HideCursorWithNoActiveRays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideCursorWithNoActiveRays;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_HideCursorWithNoActiveRays(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideCursorWithNoActiveRays = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_RayInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayInteractors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>* const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_RayInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_RayInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayInteractors = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistRequiredAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistRequiredAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistRequiredAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistRequiredAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_AimAssistRequiredAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimAssistRequiredAngle = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistRequiredSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistRequiredSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistRequiredSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistRequiredSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_AimAssistRequiredSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimAssistRequiredSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistPercent;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistPercent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_AimAssistPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimAssistPercent = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistMaxSpeedPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistMaxSpeedPercent;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_AimAssistMaxSpeedPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimAssistMaxSpeedPercent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_AimAssistMaxSpeedPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimAssistMaxSpeedPercent = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_SelectingInteractorData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectingInteractorData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData* const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_SelectingInteractorData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectingInteractorData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_SelectingInteractorData(::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectingInteractorData = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_GazeReticleVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeReticleVisual;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_GazeReticleVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeReticleVisual;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_GazeReticleVisual(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GazeReticleVisual = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_HasGazeReticleVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasGazeReticleVisual;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_get_m_HasGazeReticleVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasGazeReticleVisual;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::__cordl_internal_set_m_HasGazeReticleVisual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasGazeReticleVisual = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor> UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_gazeInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_gazeInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_gazeInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_gazeInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRGazeInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_fallbackDivergence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_fallbackDivergence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_fallbackDivergence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_fallbackDivergence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_hideCursorWithNoActiveRays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_hideCursorWithNoActiveRays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_hideCursorWithNoActiveRays(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_hideCursorWithNoActiveRays", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>* UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_rayInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_rayInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_rayInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_rayInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistRequiredAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistRequiredAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistRequiredAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistRequiredAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistRequiredSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistRequiredSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistRequiredSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistRequiredSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistPercent(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::get_aimAssistMaxSpeedPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"get_aimAssistMaxSpeedPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::set_aimAssistMaxSpeedPercent(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"set_aimAssistMaxSpeedPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::OnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"OnBeforeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, source, velocity, gravity);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, source, velocity, gravity, maxAngle);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocityInternal(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocityInternal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target, velocity, gravity, maxAngle, requiredSpeed, maxSpeedPercent, assistPercent, epsilon, adjustedVelocity);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist.GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, source, velocity, gravity);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::UnityEngine_XR_Interaction_Toolkit_Gaze_IXRAimAssist_GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist.GetAssistedVelocity", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, source, velocity, gravity, maxAngle);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::GetAssistedVelocityInternal$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>(),
                        {"GetAssistedVelocityInternal$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target, velocity, gravity, maxAngle, requiredSpeed, maxSpeedPercent, assistPercent, epsilon, adjustedVelocity);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance* UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist"
constexpr  UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::operator ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist* UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::i___UnityEngine__XR__Interaction__Toolkit__Gaze__IXRAimAssist() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance::XRGazeAssistance()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4a4eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a4fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb4a4ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target, velocity, gravity, maxAngle, requiredSpeed, maxSpeedPercent, assistPercent, epsilon, adjustedVelocity);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4a4c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a4d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb4a4d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4a4ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, target, velocity, gravity, maxAngle, requiredSpeed, maxSpeedPercent, assistPercent, epsilon, adjustedVelocity);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle, float_t  requiredSpeed, float_t  maxSpeedPercent, float_t  assistPercent, float_t  epsilon, ::by_ref<::UnityEngine::Vector3>  adjustedVelocity, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, source, target, velocity, gravity, maxAngle, requiredSpeed, maxSpeedPercent, assistPercent, epsilon, adjustedVelocity, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate::XRGazeAssistance_GetAssistedVelocityInternal_0000101E$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.get_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::get_interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a3e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"get_interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.set_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)(::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::set_interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.get_teleportRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::get_teleportRay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a3e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"get_teleportRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.set_teleportRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::set_teleportRay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a3e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"set_teleportRay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.get_fallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::get_fallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a3e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"get_fallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.set_fallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::set_fallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a3e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"set_fallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::Initialize)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0xb4a3e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.UpdateFallbackRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::UpdateFallbackRayOrigin)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4a42f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"UpdateFallbackRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.UpdateLineVisualOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::UpdateLineVisualOrigin)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xb4a434c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"UpdateLineVisualOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.UpdateFallbackState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)(::UnityEngine::Transform*, float_t, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::UpdateFallbackState)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0xb4a4588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"UpdateFallbackState", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData.RestoreVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::RestoreVisuals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4a4c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"RestoreVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a4c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_TeleportRay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportRay;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_TeleportRay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportRay;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_TeleportRay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportRay = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get__fallback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallback_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get__fallback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallback_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set__fallback_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallback_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_Initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Initialized;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_Initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Initialized;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_Initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Initialized = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_RayProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayProvider;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_RayProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_RayProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayProvider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_SelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_SelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_SelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_RestoreVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestoreVisuals;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_RestoreVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestoreVisuals;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_RestoreVisuals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RestoreVisuals = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_LineVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineVisual;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_LineVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineVisual;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_LineVisual(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineVisual = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_HasLineVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasLineVisual;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_HasLineVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasLineVisual;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_HasLineVisual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasLineVisual = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalRayOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalRayOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalRayOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalRayOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_OriginalRayOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalRayOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalAttach;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalAttach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_OriginalAttach(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalAttach = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalVisualLineOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalVisualLineOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalVisualLineOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalVisualLineOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_OriginalVisualLineOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalVisualLineOrigin = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalOverrideVisualLineOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalOverrideVisualLineOrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_OriginalOverrideVisualLineOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalOverrideVisualLineOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_OriginalOverrideVisualLineOrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalOverrideVisualLineOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_FallbackRayOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackRayOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_FallbackRayOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackRayOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_FallbackRayOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FallbackRayOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_FallbackAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackAttach;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_FallbackAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackAttach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_FallbackAttach(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FallbackAttach = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_FallbackVisualLineOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackVisualLineOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_get_m_FallbackVisualLineOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallbackVisualLineOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::__cordl_internal_set_m_FallbackVisualLineOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FallbackVisualLineOrigin = value;
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::get_interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"get_interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::set_interactor(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::get_teleportRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"get_teleportRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::set_teleportRay(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"set_teleportRay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::get_fallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"get_fallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::set_fallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"set_fallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::UpdateFallbackRayOrigin(::UnityEngine::Transform*  gazeTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"UpdateFallbackRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gazeTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::UpdateLineVisualOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"UpdateLineVisualOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::UpdateFallbackState(::UnityEngine::Transform*  gazeTransform, float_t  fallbackDivergence, bool  selectionLocked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"UpdateFallbackState", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gazeTransform, fallbackDivergence, selectionLocked);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::RestoreVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {"RestoreVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData* UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::XRGazeAssistance_InteractorData::XRGazeAssistance_InteractorData()   {
}
