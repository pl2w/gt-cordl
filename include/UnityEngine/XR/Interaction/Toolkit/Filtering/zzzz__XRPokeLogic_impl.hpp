#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRPokeLogic.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRPokeLogic_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeThresholdData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRPokeLogic_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.get_interactionAxisLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::get_interactionAxisLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"get_interactionAxisLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.set_interactionAxisLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::set_interactionAxisLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a7488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"set_interactionAxisLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.get_pokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::get_pokeStateData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::UnityEngine::Transform*, ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*, ::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::Initialize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4a7024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.SetPokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::SetPokeDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a7a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"SetPokeDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a63ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.MeetsRequirementsForSelectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::MeetsRequirementsForSelectAction)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb4a65dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"MeetsRequirementsForSelectAction", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.IsPokeDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::IsPokeDataValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb4a7aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"IsPokeDataValid", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculateInteractionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateInteractionPoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4a7d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateInteractionPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculateHoverRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::System::Object*, bool, ::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateHoverRequirements)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4a7e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateHoverRequirements", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CheckVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::System::Object*, bool, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CheckVelocity)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb4a82f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CheckVelocity", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculatePokeParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculatePokeParams)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a7474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculatePokeParams", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculateInteractionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateInteractionPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a7478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateInteractionPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculateDepthPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateDepthPercent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4a7df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateDepthPercent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.IsVelocitySufficient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::IsVelocitySufficient)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a747c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"IsVelocitySufficient", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculateRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::by_ref<bool>, float_t, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateRequirements)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4a7efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateRequirements", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.UpdatePokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(bool, bool, float_t, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::UpdatePokeStateData)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xb4a7fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"UpdatePokeStateData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.ComputeRotatedDepthEvaluationAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::UnityEngine::Transform*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ComputeRotatedDepthEvaluationAxis)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xb4a7b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ComputeRotatedDepthEvaluationAxis", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.ComputeInteractionAxisLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::UnityEngine::Bounds)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ComputeInteractionAxisLength)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb4a77d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ComputeInteractionAxisLength", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::System::Object*, ::UnityEngine::Pose, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::OnHoverEntered)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb4a6a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::OnHoverExited)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb4a6c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.ResetPokeStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ResetPokeStateData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb4a78fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ResetPokeStateData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.ComputeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Collider*, bool, ::UnityEngine::Space)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ComputeBounds)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xb4a7498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.BoundsLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Bounds, ::UnityEngine::Transform*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::BoundsLocalToWorld)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb4a8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"BoundsLocalToWorld", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::DrawGizmos)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb4a888c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"DrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb4a6dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculatePokeParams$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculatePokeParams$BurstManaged)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb4a8a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculatePokeParams$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.CalculateInteractionPoint$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateInteractionPoint$BurstManaged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4a8c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateInteractionPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic.IsVelocitySufficient$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::IsVelocitySufficient$BurstManaged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4a8c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"IsVelocitySufficient$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get__interactionAxisLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionAxisLength_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get__interactionAxisLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionAxisLength_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set__interactionAxisLength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactionAxisLength_k__BackingField = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_PokeStateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeStateData;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_PokeStateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeStateData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_PokeStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeStateData = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_InitialTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_InitialTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_InitialTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialTransform = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_PokeThresholdData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeThresholdData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_PokeThresholdData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokeThresholdData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_PokeThresholdData(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokeThresholdData = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_SelectEntranceVectorDotThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEntranceVectorDotThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_SelectEntranceVectorDotThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEntranceVectorDotThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_SelectEntranceVectorDotThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectEntranceVectorDotThreshold = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_LastHoveredTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHoveredTransform;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_LastHoveredTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHoveredTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_LastHoveredTransform(::System::Collections::Generic::Dictionary_2<::System::Object*,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHoveredTransform = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_HoldingHoverCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoldingHoverCheck;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_HoldingHoverCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoldingHoverCheck;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_HoldingHoverCheck(::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoldingHoverCheck = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_HoveredInteractorsOnThisTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoveredInteractorsOnThisTransform;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_HoveredInteractorsOnThisTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoveredInteractorsOnThisTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_HoveredInteractorsOnThisTransform(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::XR::CoreUtils::Collections::HashSetList_1<::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoveredInteractorsOnThisTransform = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_LastInteractorPressDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastInteractorPressDepth;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_LastInteractorPressDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastInteractorPressDepth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_LastInteractorPressDepth(::System::Collections::Generic::Dictionary_2<::System::Object*,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastInteractorPressDepth = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_LastRequirementsMet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRequirementsMet;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*,bool>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_get_m_LastRequirementsMet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRequirementsMet;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::__cordl_internal_set_m_LastRequirementsMet(::System::Collections::Generic::Dictionary_2<::System::Object*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastRequirementsMet = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::get_interactionAxisLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"get_interactionAxisLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::set_interactionAxisLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"set_interactionAxisLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::get_pokeStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"get_pokeStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::Initialize(::UnityEngine::Transform*  associatedTransform, ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  pokeThresholdData, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, associatedTransform, pokeThresholdData, collider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::SetPokeDepth(float_t  pokeDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"SetPokeDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pokeDepth);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::MeetsRequirementsForSelectAction(::System::Object*  interactor, ::UnityEngine::Vector3  pokableAttachPosition, ::UnityEngine::Vector3  pokerAttachPosition, float_t  pokeInteractionOffset, ::UnityEngine::Transform*  pokedTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"MeetsRequirementsForSelectAction", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, pokableAttachPosition, pokerAttachPosition, pokeInteractionOffset, pokedTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::IsPokeDataValid(::UnityEngine::Transform*  pokedTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"IsPokeDataValid", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pokedTransform);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateInteractionPoint(::UnityEngine::Vector3  pokerAttachPosition, ::UnityEngine::Vector3  axisNormal, float_t  pokeInteractionOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateInteractionPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pokerAttachPosition, axisNormal, pokeInteractionOffset);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateHoverRequirements(::System::Object*  interactor, bool  isOverObject, ::Unity::Mathematics::float3  axisNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateHoverRequirements", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, isOverObject, axisNormal);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CheckVelocity(::System::Object*  interactor, bool  isOverObject, ::UnityEngine::Vector3  axisNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CheckVelocity", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, isOverObject, axisNormal);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculatePokeParams(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculatePokeParams", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactionPoint, pokableAttachPosition, axisNormal, interactionDepth, entranceVectorDot);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateInteractionPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateInteractionPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pokerAttachPosition, axisNormal, combinedPokeOffset, interactionPoint);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateDepthPercent(float_t  interactionDepth, float_t  entranceVectorDot, float_t  axisLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateDepthPercent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactionDepth, entranceVectorDot, axisLength);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::IsVelocitySufficient(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"IsVelocitySufficient", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, velocity, threshold);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateRequirements(::by_ref<bool>  meetsHoverRequirements, float_t  clampedDepthPercent, ::System::Object*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateRequirements", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meetsHoverRequirements, clampedDepthPercent, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::UpdatePokeStateData(bool  meetsRequirements, bool  meetsHoverRequirements, float_t  clampedDepthPercent, ::System::Object*  interactor, ::UnityEngine::Vector3  pokerAttachPosition, ::UnityEngine::Vector3  pokableAttachPosition, ::UnityEngine::Vector3  axisNormal, ::UnityEngine::Transform*  pokedTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"UpdatePokeStateData", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meetsRequirements, meetsHoverRequirements, clampedDepthPercent, interactor, pokerAttachPosition, pokableAttachPosition, axisNormal, pokedTransform);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ComputeRotatedDepthEvaluationAxis(::UnityEngine::Transform*  associatedTransform, bool  isWorldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ComputeRotatedDepthEvaluationAxis", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, associatedTransform, isWorldSpace);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ComputeInteractionAxisLength(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ComputeInteractionAxisLength", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, bounds);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::OnHoverEntered(::System::Object*  interactor, ::UnityEngine::Pose  updatedPose, ::UnityEngine::Transform*  pokedTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, updatedPose, pokedTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::OnHoverExited(::System::Object*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ResetPokeStateData(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ResetPokeStateData", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline ::UnityEngine::Bounds UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::ComputeBounds(::UnityEngine::Collider*  targetCollider, bool  rotateBoundsScale, ::UnityEngine::Space  targetSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, targetCollider, rotateBoundsScale, targetSpace);
}
inline ::UnityEngine::Bounds UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::BoundsLocalToWorld(::UnityEngine::Bounds  targetBounds, ::UnityEngine::Transform*  targetTransform, bool  rotateBoundsScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"BoundsLocalToWorld", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, targetBounds, targetTransform, rotateBoundsScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::DrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"DrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculatePokeParams$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculatePokeParams$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactionPoint, pokableAttachPosition, axisNormal, interactionDepth, entranceVectorDot);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::CalculateInteractionPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"CalculateInteractionPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pokerAttachPosition, axisNormal, combinedPokeOffset, interactionPoint);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::IsVelocitySufficient$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>(),
                        {"IsVelocitySufficient$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, velocity, threshold);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic::XRPokeLogic()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4a93dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4a86a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, velocity, threshold);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall::XRPokeLogic_IsVelocitySufficient_00001085$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4a923c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a92f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4a9304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4a93b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, velocity, threshold);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocity, float_t  threshold, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, velocity, threshold, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate::XRPokeLogic_IsVelocitySufficient_00001085$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4a9134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a9224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4a85cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pokerAttachPosition, axisNormal, combinedPokeOffset, interactionPoint);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall::XRPokeLogic_CalculateInteractionPoint_00001083$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4a8f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a9028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4a903c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4a9128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pokerAttachPosition, axisNormal, combinedPokeOffset, interactionPoint);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokerAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, float_t  combinedPokeOffset, ::by_ref<::Unity::Mathematics::float3>  interactionPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pokerAttachPosition, axisNormal, combinedPokeOffset, interactionPoint, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate::XRPokeLogic_CalculateInteractionPoint_00001083$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4a8e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a8f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4a84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactionPoint, pokableAttachPosition, axisNormal, interactionDepth, entranceVectorDot);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall::XRPokeLogic_CalculatePokeParams_00001082$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4a8c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb4a8d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4a8e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionPoint, pokableAttachPosition, axisNormal, interactionDepth, entranceVectorDot);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactionPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  pokableAttachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  axisNormal, ::by_ref<float_t>  interactionDepth, ::by_ref<float_t>  entranceVectorDot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, interactionPoint, pokableAttachPosition, axisNormal, interactionDepth, entranceVectorDot, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate::XRPokeLogic_CalculatePokeParams_00001082$PostfixBurstDelegate()   {
}
