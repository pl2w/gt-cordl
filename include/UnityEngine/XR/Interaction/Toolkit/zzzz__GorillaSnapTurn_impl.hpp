#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/GorillaSnapTurn.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_InputAxes_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_def.hpp"
#include "GlobalNamespace/zzzz__ISnapTurnOverride_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_InputAxes_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRController_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_turnUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaSnapTurn_InputAxes (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_turnUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(::GlobalNamespace::GorillaSnapTurn_InputAxes)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnUsage", {}, {::i2c::type_of<::GlobalNamespace::GorillaSnapTurn_InputAxes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_controllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_controllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_controllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_controllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_controllers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_turnAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_turnAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_debounceTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_debounceTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_debounceTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_debounceTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_debounceTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_debounceTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_deadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_deadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_deadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_deadZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_turnType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_turnType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_turnFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.set_turnFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b79c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.get_CachedSnapTurnRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> (*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_CachedSnapTurnRef)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b79c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_CachedSnapTurnRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::Awake)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b79d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::Tick)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b79ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.EnsureControllerDataListSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::EnsureControllerDataListSize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b7a338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"EnsureControllerDataListSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.FakeStartTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::FakeStartTurn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7a510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"FakeStartTurn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.StartTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::StartTurn)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b7a468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"StartTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.ChangeTurnMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(::StringW, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::ChangeTurnMode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b7a524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"ChangeTurnMode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.ConvertedTurnFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::ConvertedTurnFactor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7a654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"ConvertedTurnFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.SetTurningOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(::GlobalNamespace::ISnapTurnOverride*)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::SetTurningOverride)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b7a67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"SetTurningOverride", {}, {::i2c::type_of<::GlobalNamespace::ISnapTurnOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.UnsetTurningOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)(::GlobalNamespace::ISnapTurnOverride*)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::UnsetTurningOverride)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b7a70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"UnsetTurningOverride", {}, {::i2c::type_of<::GlobalNamespace::ISnapTurnOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.ValidateTurningOverriders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::ValidateTurningOverriders)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b7a164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"ValidateTurningOverriders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.DisableSnapTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::DisableSnapTurn)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b7a79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"DisableSnapTurn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.UpdateAndSaveTurnType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::UpdateAndSaveTurnType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b7a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"UpdateAndSaveTurnType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.UpdateAndSaveTurnFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::UpdateAndSaveTurnFactor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b7aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"UpdateAndSaveTurnFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.LoadSettingsFromPlayerPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::LoadSettingsFromPlayerPrefs)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b7aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"LoadSettingsFromPlayerPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn.LoadSettingsFromCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::LoadSettingsFromCache)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b7ad24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"LoadSettingsFromCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::*)()>(&::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b7aea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_xrOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrOrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_xrOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_xrOrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrOrigin = value;
}
constexpr ::GlobalNamespace::GorillaSnapTurn_InputAxes& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnUsage;
}
constexpr ::GlobalNamespace::GorillaSnapTurn_InputAxes const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnUsage;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_TurnUsage(::GlobalNamespace::GorillaSnapTurn_InputAxes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnUsage = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_Controllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_Controllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controllers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controllers = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_TurnAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_DebounceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebounceTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_DebounceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebounceTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_DebounceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebounceTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_DeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZone;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_DeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZone;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_DeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZone = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_CurrentTurnAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTurnAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_CurrentTurnAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTurnAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_CurrentTurnAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentTurnAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TimeStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeStarted;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TimeStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeStarted;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_TimeStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeStarted = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_AxisReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisReset;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_AxisReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisReset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_AxisReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AxisReset = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>*& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_turningOverriders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turningOverriders;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>* const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_turningOverriders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turningOverriders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_turningOverriders(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ISnapTurnOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turningOverriders = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_ControllersWereActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllersWereActive;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_ControllersWereActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllersWereActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_ControllersWereActive(::System::Collections::Generic::List_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllersWereActive = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnType;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_TurnType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnType = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnFactor;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_get_m_TurnFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnFactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::__cordl_internal_set_m_TurnFactor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnFactor = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::setStaticF_m_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>, "m_Vec2UsageList", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(std::forward<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>>(value));
}
inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::getStaticF_m_Vec2UsageList()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>, "m_Vec2UsageList", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::setStaticF__cachedTurnFactor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_cachedTurnFactor", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::getStaticF__cachedTurnFactor()  {
return ::cordl_internals::getStaticField<int32_t, "_cachedTurnFactor", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::setStaticF__cachedTurnType(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_cachedTurnType", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::getStaticF__cachedTurnType()  {
return ::cordl_internals::getStaticField<::StringW, "_cachedTurnType", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::setStaticF__cachedReference(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>, "_cachedReference", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::getStaticF__cachedReference()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>, "_cachedReference", ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GorillaSnapTurn_InputAxes UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaSnapTurn_InputAxes>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnUsage(::GlobalNamespace::GorillaSnapTurn_InputAxes  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnUsage", {}, {::i2c::type_of<::GlobalNamespace::GorillaSnapTurn_InputAxes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_controllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_controllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_controllers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_debounceTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_debounceTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_debounceTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_debounceTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_deadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_deadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_deadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_deadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_turnFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_turnFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::set_turnFactor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"set_turnFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::get_CachedSnapTurnRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"get_CachedSnapTurnRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::EnsureControllerDataListSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"EnsureControllerDataListSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::FakeStartTurn(bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"FakeStartTurn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::StartTurn(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"StartTurn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::ChangeTurnMode(::StringW  turnMode, int32_t  turnSpeedFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"ChangeTurnMode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turnMode, turnSpeedFactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::ConvertedTurnFactor(float_t  newTurnSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"ConvertedTurnFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, newTurnSpeed);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::SetTurningOverride(::GlobalNamespace::ISnapTurnOverride*  caller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"SetTurningOverride", {}, {::i2c::type_of<::GlobalNamespace::ISnapTurnOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caller);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::UnsetTurningOverride(::GlobalNamespace::ISnapTurnOverride*  caller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"UnsetTurningOverride", {}, {::i2c::type_of<::GlobalNamespace::ISnapTurnOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caller);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::ValidateTurningOverriders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"ValidateTurningOverriders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::DisableSnapTurn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"DisableSnapTurn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::UpdateAndSaveTurnType(::StringW  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"UpdateAndSaveTurnType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::UpdateAndSaveTurnFactor(int32_t  factor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"UpdateAndSaveTurnFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, factor);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::LoadSettingsFromPlayerPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"LoadSettingsFromPlayerPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::LoadSettingsFromCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {"LoadSettingsFromCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn* UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn::GorillaSnapTurn()   {
}
