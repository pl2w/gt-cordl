#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractable.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractable_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_SurfacePatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch* (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_SurfacePatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa454fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_SurfacePatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_SurfacePatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::Surfaces::ISurfacePatch*)>(&::Oculus::Interaction::PokeInteractable::set_SurfacePatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa454ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_SurfacePatch", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_EnterHoverNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_EnterHoverNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa454ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_EnterHoverNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_EnterHoverNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_EnterHoverNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_EnterHoverNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_EnterHoverTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_EnterHoverTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45500c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_EnterHoverTangent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_EnterHoverTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_EnterHoverTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_EnterHoverTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_ExitHoverNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_ExitHoverNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45501c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_ExitHoverNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_ExitHoverNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_ExitHoverNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_ExitHoverNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_ExitHoverTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_ExitHoverTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45502c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_ExitHoverTangent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_ExitHoverTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_ExitHoverTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_ExitHoverTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_CancelSelectNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_CancelSelectNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45503c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_CancelSelectNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_CancelSelectNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_CancelSelectNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_CancelSelectNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_CancelSelectTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_CancelSelectTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45504c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_CancelSelectTangent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_CancelSelectTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_CancelSelectTangent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_CancelSelectTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_CloseDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_CloseDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45505c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_CloseDistanceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_CloseDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(float_t)>(&::Oculus::Interaction::PokeInteractable::set_CloseDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_CloseDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_TiebreakerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_TiebreakerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_TiebreakerScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_TiebreakerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(int32_t)>(&::Oculus::Interaction::PokeInteractable::set_TiebreakerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_TiebreakerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_MinThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_MinThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45507c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_MinThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_MinThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*)>(&::Oculus::Interaction::PokeInteractable::set_MinThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_MinThresholds", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_DragThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_DragThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45508c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_DragThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_DragThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*)>(&::Oculus::Interaction::PokeInteractable::set_DragThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_DragThresholds", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_PositionPinning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PokeInteractable_PositionPinningConfig* (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_PositionPinning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_PositionPinning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_PositionPinning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*)>(&::Oculus::Interaction::PokeInteractable::set_PositionPinning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4550a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_PositionPinning", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_PositionPinningConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.get_RecoilAssist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::get_RecoilAssist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4550b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_RecoilAssist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.set_RecoilAssist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*)>(&::Oculus::Interaction::PokeInteractable::set_RecoilAssist)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4550bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_RecoilAssist", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4550cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa45514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.ClosestSurfacePatchHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractable::*)(::UnityEngine::Vector3, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::PokeInteractable::ClosestSurfacePatchHit)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa45523c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"ClosestSurfacePatchHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.ClosestBackingSurfaceHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractable::*)(::UnityEngine::Vector3, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::PokeInteractable::ClosestBackingSurfaceHit)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa455308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"ClosestBackingSurfaceHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::Reset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa455448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.InjectAllPokeInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::Surfaces::ISurfacePatch*)>(&::Oculus::Interaction::PokeInteractable::InjectAllPokeInteractable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa455494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"InjectAllPokeInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable.InjectSurfacePatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)(::Oculus::Interaction::Surfaces::ISurfacePatch*)>(&::Oculus::Interaction::PokeInteractable::InjectSurfacePatch)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa455498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"InjectSurfacePatch", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::_ctor)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xa455568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable._Start_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable::*)()>(&::Oculus::Interaction::PokeInteractable::_Start_b__58_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa455958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"<Start>b__58_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PokeInteractable::__cordl_internal_get__surfacePatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacePatch;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__surfacePatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacePatch;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__surfacePatch(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surfacePatch = value;
}
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch*& Oculus::Interaction::PokeInteractable::__cordl_internal_get__SurfacePatch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfacePatch_k__BackingField;
}
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__SurfacePatch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfacePatch_k__BackingField;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__SurfacePatch_k__BackingField(::Oculus::Interaction::Surfaces::ISurfacePatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfacePatch_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__enterHoverNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterHoverNormal;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__enterHoverNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterHoverNormal;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__enterHoverNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enterHoverNormal = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__enterHoverTangent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterHoverTangent;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__enterHoverTangent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterHoverTangent;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__enterHoverTangent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enterHoverTangent = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__exitHoverNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHoverNormal;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__exitHoverNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHoverNormal;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__exitHoverNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exitHoverNormal = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__exitHoverTangent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHoverTangent;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__exitHoverTangent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitHoverTangent;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__exitHoverTangent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exitHoverTangent = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__cancelSelectNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelSelectNormal;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__cancelSelectNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelSelectNormal;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__cancelSelectNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancelSelectNormal = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__cancelSelectTangent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelSelectTangent;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__cancelSelectTangent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelSelectTangent;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__cancelSelectTangent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancelSelectTangent = value;
}
constexpr ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*& Oculus::Interaction::PokeInteractable::__cordl_internal_get__minThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minThresholds;
}
constexpr ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__minThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minThresholds;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__minThresholds(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minThresholds = value;
}
constexpr ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*& Oculus::Interaction::PokeInteractable::__cordl_internal_get__dragThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragThresholds;
}
constexpr ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__dragThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragThresholds;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__dragThresholds(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragThresholds = value;
}
constexpr ::Oculus::Interaction::PokeInteractable_PositionPinningConfig*& Oculus::Interaction::PokeInteractable::__cordl_internal_get__positionPinning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionPinning;
}
constexpr ::Oculus::Interaction::PokeInteractable_PositionPinningConfig* const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__positionPinning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionPinning;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__positionPinning(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionPinning = value;
}
constexpr ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*& Oculus::Interaction::PokeInteractable::__cordl_internal_get__recoilAssist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoilAssist;
}
constexpr ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__recoilAssist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoilAssist;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__recoilAssist(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recoilAssist = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__closeDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeDistanceThreshold;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__closeDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeDistanceThreshold;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__closeDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeDistanceThreshold = value;
}
constexpr int32_t& Oculus::Interaction::PokeInteractable::__cordl_internal_get__tiebreakerScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiebreakerScore;
}
constexpr int32_t const& Oculus::Interaction::PokeInteractable::__cordl_internal_get__tiebreakerScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiebreakerScore;
}
constexpr void Oculus::Interaction::PokeInteractable::__cordl_internal_set__tiebreakerScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiebreakerScore = value;
}
inline ::Oculus::Interaction::Surfaces::ISurfacePatch* Oculus::Interaction::PokeInteractable::get_SurfacePatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_SurfacePatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurfacePatch*>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_SurfacePatch(::Oculus::Interaction::Surfaces::ISurfacePatch*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_SurfacePatch", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_EnterHoverNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_EnterHoverNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_EnterHoverNormal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_EnterHoverNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_EnterHoverTangent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_EnterHoverTangent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_EnterHoverTangent(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_EnterHoverTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_ExitHoverNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_ExitHoverNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_ExitHoverNormal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_ExitHoverNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_ExitHoverTangent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_ExitHoverTangent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_ExitHoverTangent(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_ExitHoverTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_CancelSelectNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_CancelSelectNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_CancelSelectNormal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_CancelSelectNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_CancelSelectTangent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_CancelSelectTangent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_CancelSelectTangent(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_CancelSelectTangent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractable::get_CloseDistanceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_CloseDistanceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_CloseDistanceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_CloseDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::PokeInteractable::get_TiebreakerScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_TiebreakerScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_TiebreakerScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_TiebreakerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* Oculus::Interaction::PokeInteractable::get_MinThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_MinThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_MinThresholds(::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_MinThresholds", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* Oculus::Interaction::PokeInteractable::get_DragThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_DragThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_DragThresholds(::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_DragThresholds", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PokeInteractable_PositionPinningConfig* Oculus::Interaction::PokeInteractable::get_PositionPinning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_PositionPinning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PokeInteractable_PositionPinningConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_PositionPinning(::Oculus::Interaction::PokeInteractable_PositionPinningConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_PositionPinning", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_PositionPinningConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* Oculus::Interaction::PokeInteractable::get_RecoilAssist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"get_RecoilAssist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::set_RecoilAssist(::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"set_RecoilAssist", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PokeInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PokeInteractable::ClosestSurfacePatchHit(::UnityEngine::Vector3  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"ClosestSurfacePatchHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit);
}
inline bool Oculus::Interaction::PokeInteractable::ClosestBackingSurfaceHit(::UnityEngine::Vector3  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"ClosestBackingSurfaceHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit);
}
inline void Oculus::Interaction::PokeInteractable::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::InjectAllPokeInteractable(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"InjectAllPokeInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePatch);
}
inline void Oculus::Interaction::PokeInteractable::InjectSurfacePatch(::Oculus::Interaction::Surfaces::ISurfacePatch*  surfacePatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"InjectSurfacePatch", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surfacePatch);
}
inline void Oculus::Interaction::PokeInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractable::_Start_b__58_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable*>(),
                        {"<Start>b__58_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PokeInteractable* Oculus::Interaction::PokeInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractable::PokeInteractable()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable_RecoilAssistConfig::*)()>(&::Oculus::Interaction::PokeInteractable_RecoilAssistConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr bool& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_UseDynamicDecay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseDynamicDecay;
}
constexpr bool const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_UseDynamicDecay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseDynamicDecay;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_UseDynamicDecay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseDynamicDecay = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_DynamicDecayCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicDecayCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_DynamicDecayCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DynamicDecayCurve;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_DynamicDecayCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DynamicDecayCurve = value;
}
constexpr bool& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_UseVelocityExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseVelocityExpansion;
}
constexpr bool const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_UseVelocityExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseVelocityExpansion;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_UseVelocityExpansion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseVelocityExpansion = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionMinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionMinSpeed;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionMinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionMinSpeed;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_VelocityExpansionMinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VelocityExpansionMinSpeed = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionMaxSpeed;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionMaxSpeed;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_VelocityExpansionMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VelocityExpansionMaxSpeed = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionDistance;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionDistance;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_VelocityExpansionDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VelocityExpansionDistance = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionDecayRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionDecayRate;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_VelocityExpansionDecayRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VelocityExpansionDecayRate;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_VelocityExpansionDecayRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VelocityExpansionDecayRate = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_ExitDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExitDistance;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_ExitDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExitDistance;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_ExitDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExitDistance = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_ReEnterDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReEnterDistance;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_get_ReEnterDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReEnterDistance;
}
constexpr void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::__cordl_internal_set_ReEnterDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReEnterDistance = value;
}
inline void Oculus::Interaction::PokeInteractable_RecoilAssistConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig* Oculus::Interaction::PokeInteractable_RecoilAssistConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractable_RecoilAssistConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractable_RecoilAssistConfig::PokeInteractable_RecoilAssistConfig()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable_PositionPinningConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable_PositionPinningConfig::*)()>(&::Oculus::Interaction::PokeInteractable_PositionPinningConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_PositionPinningConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_MaxPinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPinDistance;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_MaxPinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPinDistance;
}
constexpr void Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_set_MaxPinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxPinDistance = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_PinningEaseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PinningEaseCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_PinningEaseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PinningEaseCurve;
}
constexpr void Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_set_PinningEaseCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PinningEaseCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_ResyncCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResyncCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_get_ResyncCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResyncCurve;
}
constexpr void Oculus::Interaction::PokeInteractable_PositionPinningConfig::__cordl_internal_set_ResyncCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResyncCurve = value;
}
inline void Oculus::Interaction::PokeInteractable_PositionPinningConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_PositionPinningConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PokeInteractable_PositionPinningConfig* Oculus::Interaction::PokeInteractable_PositionPinningConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractable_PositionPinningConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractable_PositionPinningConfig::PokeInteractable_PositionPinningConfig()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable_DragThresholdsConfig::*)()>(&::Oculus::Interaction::PokeInteractable_DragThresholdsConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_DragNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragNormal;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_DragNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragNormal;
}
constexpr void Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_set_DragNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DragNormal = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_DragTangent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragTangent;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_DragTangent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragTangent;
}
constexpr void Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_set_DragTangent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DragTangent = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_DragEaseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragEaseCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_get_DragEaseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DragEaseCurve;
}
constexpr void Oculus::Interaction::PokeInteractable_DragThresholdsConfig::__cordl_internal_set_DragEaseCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DragEaseCurve = value;
}
inline void Oculus::Interaction::PokeInteractable_DragThresholdsConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig* Oculus::Interaction::PokeInteractable_DragThresholdsConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractable_DragThresholdsConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractable_DragThresholdsConfig::PokeInteractable_DragThresholdsConfig()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractable_MinThresholdsConfig::*)()>(&::Oculus::Interaction::PokeInteractable_MinThresholdsConfig::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa45592c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PokeInteractable_MinThresholdsConfig::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Oculus::Interaction::PokeInteractable_MinThresholdsConfig::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Oculus::Interaction::PokeInteractable_MinThresholdsConfig::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractable_MinThresholdsConfig::__cordl_internal_get_MinNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinNormal;
}
constexpr float_t const& Oculus::Interaction::PokeInteractable_MinThresholdsConfig::__cordl_internal_get_MinNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinNormal;
}
constexpr void Oculus::Interaction::PokeInteractable_MinThresholdsConfig::__cordl_internal_set_MinNormal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinNormal = value;
}
inline void Oculus::Interaction::PokeInteractable_MinThresholdsConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig* Oculus::Interaction::PokeInteractable_MinThresholdsConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractable_MinThresholdsConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractable_MinThresholdsConfig::PokeInteractable_MinThresholdsConfig()   {
}
