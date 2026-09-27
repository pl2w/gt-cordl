#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_EventMode_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_InterpolationMode_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_RotationAxis_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_ThresholdOption_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_def.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Cast_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_EventMode_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_InterpolationMode_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_RotationAxis_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_ThresholdOption_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_ThresholdResult_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.GetTargetCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_Cast (*)(::UnityEngine::Object*)>(&::GorillaTag::Cosmetics::ContinuousProperty::GetTargetCast)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d80e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"GetTargetCast", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.CastMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ContinuousProperty_Cast, ::GlobalNamespace::ContinuousProperty_Cast)>(&::GorillaTag::Cosmetics::ContinuousProperty::CastMatches)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d810a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"CastMatches", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>(), ::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.HasAllFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ContinuousProperty_DataFlags, ::GlobalNamespace::ContinuousProperty_DataFlags)>(&::GorillaTag::Cosmetics::ContinuousProperty::HasAllFlags)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d81114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAllFlags", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>(), ::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.HasAnyFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ContinuousProperty_DataFlags, ::GlobalNamespace::ContinuousProperty_DataFlags)>(&::GorillaTag::Cosmetics::ContinuousProperty::HasAnyFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d81120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>(), ::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.GetAllValidObjectsNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::GorillaTag::Cosmetics::ContinuousProperty::GetAllValidObjectsNonAlloc)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5d8112c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"GetAllValidObjectsNonAlloc", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.IsValidObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::GorillaTag::Cosmetics::ContinuousProperty::IsValidObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d812e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"IsValidObject", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d813b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*, ::UnityEngine::Transform*, ::UnityEngine::Vector2)>(&::GorillaTag::Cosmetics::ContinuousProperty::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d81444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ModeTooltip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ModeTooltip)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d81ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeTooltip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ModeInfoVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ModeInfoVisible)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d821d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeInfoVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ModeErrorVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ModeErrorVisible)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d82238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeErrorVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ModeErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ModeErrorMessage)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d82308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeErrorMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO> (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8256c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_MyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_Type (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_MyType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d82574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_MyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasTarget)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d825f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_TargetInfoVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_TargetInfoVisible)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d8260c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_TargetInfoVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_TargetTooltip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_TargetTooltip)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d8268c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_TargetTooltip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ShiftButtonsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ShiftButtonsVisible)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d82724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ShiftButtonsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.PreviousTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::PreviousTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"PreviousTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.NextTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::NextTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"NextTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.ShiftTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)(int32_t)>(&::GorillaTag::Cosmetics::ContinuousProperty::ShiftTarget)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x5d81524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"ShiftTarget", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.OnModeOrTargetChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::OnModeOrTargetChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d82820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"OnModeOrTargetChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_IsShaderProperty_Cached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_IsShaderProperty_Cached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_IsShaderProperty_Cached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.set_IsShaderProperty_Cached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousProperty::set_IsShaderProperty_Cached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"set_IsShaderProperty_Cached", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_UsesThreshold_Cached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_UsesThreshold_Cached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_UsesThreshold_Cached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.set_UsesThreshold_Cached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousProperty::set_UsesThreshold_Cached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"set_UsesThreshold_Cached", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::IsValid)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d82250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.GetTargetInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::GetTargetInstanceID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d82868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"GetTargetInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.HasAllFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)(::GlobalNamespace::ContinuousProperty_DataFlags)>(&::GorillaTag::Cosmetics::ContinuousProperty::HasAllFlags)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d82880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAllFlags", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.HasAnyFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)(::GlobalNamespace::ContinuousProperty_DataFlags)>(&::GorillaTag::Cosmetics::ContinuousProperty::HasAnyFlag)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d829a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.DynamicIntLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::DynamicIntLabel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d82a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"DynamicIntLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_IntValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_IntValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_IntValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.DynamicStringLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::DynamicStringLabel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d82adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"DynamicStringLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_StringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_StringValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_StringValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasBezier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d82b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasBezier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_MissingBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_MissingBezier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d82b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_MissingBezier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_AxisError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_AxisError)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d82bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_AxisError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasAxisMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasAxisMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_InterpolationError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_InterpolationError)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d82ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_InterpolationError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasInterpolationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasInterpolationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d82d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasInterpolationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasStopAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasStopAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d82da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasStopAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasXforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasXforms)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d82e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasXforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_MissingXforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_MissingXforms)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d82e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_MissingXforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasOffsets)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d82ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasOffsets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ThresholdErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ThresholdErrorMessage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d82ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ThresholdErrorMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ThresholdTooltip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ThresholdTooltip)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d82f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ThresholdTooltip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8320c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_ThresholdError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_ThresholdError)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d831e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ThresholdError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasEventMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasEventMode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d83214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasEventMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_HasUnityEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_HasUnityEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d8324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasUnityEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.get_RunOnlyLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::get_RunOnlyLocally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d83264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_RunOnlyLocally", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.SetRigIsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousProperty::SetRigIsLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"SetRigIsLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::Init)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5d83274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.InitThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)()>(&::GorillaTag::Cosmetics::ContinuousProperty::InitThreshold)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d836b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"InitThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousProperty::*)(float_t, float_t, ::UnityEngine::MaterialPropertyBlock*)>(&::GorillaTag::Cosmetics::ContinuousProperty::Apply)> {
  constexpr static std::size_t size = 0x15e4;
  constexpr static std::size_t addrs = 0x5d83784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"Apply", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.ScaleCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_MinMaxCurve (::GorillaTag::Cosmetics::ContinuousProperty::*)(::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>, float_t)>(&::GorillaTag::Cosmetics::ContinuousProperty::ScaleCurve)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d84d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"ScaleCurve", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.CheckContinuousEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousProperty::*)(float_t, float_t)>(&::GorillaTag::Cosmetics::ContinuousProperty::CheckContinuousEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d84e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"CheckContinuousEvent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousProperty.CheckThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ContinuousProperty_ThresholdResult (::GorillaTag::Cosmetics::ContinuousProperty::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousProperty::CheckThreshold)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d83704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"CheckThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO> const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_mode(::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Object> const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_target(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get__IsShaderProperty_Cached_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsShaderProperty_Cached_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get__IsShaderProperty_Cached_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsShaderProperty_Cached_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set__IsShaderProperty_Cached_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsShaderProperty_Cached_k__BackingField = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get__UsesThreshold_Cached_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UsesThreshold_Cached_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get__UsesThreshold_Cached_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UsesThreshold_Cached_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set__UsesThreshold_Cached_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UsesThreshold_Cached_k__BackingField = value;
}
constexpr ::UnityEngine::Gradient*& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Gradient* const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_color(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curve;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curve = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_intValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intValue;
}
constexpr int32_t const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_intValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intValue;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_intValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intValue = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_stringValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringValue;
}
constexpr ::StringW const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_stringValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringValue;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_stringValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringValue = value;
}
constexpr ::UnityW<::GlobalNamespace::BezierCurve>& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_bezierCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bezierCurve;
}
constexpr ::UnityW<::GlobalNamespace::BezierCurve> const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_bezierCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bezierCurve;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_bezierCurve(::UnityW<::GlobalNamespace::BezierCurve>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bezierCurve = value;
}
constexpr ::GlobalNamespace::ContinuousProperty_RotationAxis& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_localAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localAxis;
}
constexpr ::GlobalNamespace::ContinuousProperty_RotationAxis const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_localAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localAxis;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_localAxis(::GlobalNamespace::ContinuousProperty_RotationAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localAxis = value;
}
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_interpolationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolationMode;
}
constexpr ::GlobalNamespace::ContinuousProperty_InterpolationMode const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_interpolationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolationMode;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_interpolationMode(::GlobalNamespace::ContinuousProperty_InterpolationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolationMode = value;
}
constexpr ::UnityEngine::ParticleSystemStopBehavior& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_stopType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopType;
}
constexpr ::UnityEngine::ParticleSystemStopBehavior const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_stopType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopType;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_stopType(::UnityEngine::ParticleSystemStopBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_transformA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformA;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_transformA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformA;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_transformA(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformA = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_transformB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_transformB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformB;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_transformB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformB = value;
}
constexpr ::GorillaTag::XformOffset& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_offsetA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetA;
}
constexpr ::GorillaTag::XformOffset const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_offsetA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetA;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_offsetA(::GorillaTag::XformOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetA = value;
}
constexpr ::GorillaTag::XformOffset& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_offsetB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetB;
}
constexpr ::GorillaTag::XformOffset const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_offsetB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetB;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_offsetB(::GorillaTag::XformOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetB = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_range(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdOption& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_thresholdOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdOption;
}
constexpr ::GlobalNamespace::ContinuousProperty_ThresholdOption const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_thresholdOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdOption;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_thresholdOption(::GlobalNamespace::ContinuousProperty_ThresholdOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thresholdOption = value;
}
constexpr ::GlobalNamespace::ContinuousProperty_EventMode& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_eventMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventMode;
}
constexpr ::GlobalNamespace::ContinuousProperty_EventMode const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_eventMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventMode;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_eventMode(::GlobalNamespace::ContinuousProperty_EventMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventMode = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_unityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_unityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvent;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvent = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_runOnlyLocally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runOnlyLocally;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_runOnlyLocally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runOnlyLocally;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_runOnlyLocally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runOnlyLocally = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_rigLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigLocal;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_rigLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigLocal;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_rigLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigLocal = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_internalSwitchValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalSwitchValue;
}
constexpr int32_t const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_internalSwitchValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalSwitchValue;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_internalSwitchValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalSwitchValue = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_particleMain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleMain;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_particleMain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleMain;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_particleMain(::GlobalNamespace::ParticleSystem_MainModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleMain = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_particleEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEmission;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_particleEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEmission;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_particleEmission(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleEmission = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_speedCurveCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedCurveCache;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_speedCurveCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedCurveCache;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_speedCurveCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedCurveCache = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_rateCurveCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rateCurveCache;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_rateCurveCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rateCurveCache;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_rateCurveCache(::GlobalNamespace::ParticleSystem_MinMaxCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rateCurveCache = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_frequencyTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequencyTimer;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_frequencyTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequencyTimer;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_frequencyTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frequencyTimer = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_previousBoolValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousBoolValue;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_previousBoolValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousBoolValue;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_previousBoolValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousBoolValue = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_stringHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringHash;
}
constexpr int32_t const& GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_get_stringHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringHash;
}
constexpr void GorillaTag::Cosmetics::ContinuousProperty::__cordl_internal_set_stringHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringHash = value;
}
inline ::GlobalNamespace::ContinuousProperty_Cast GorillaTag::Cosmetics::ContinuousProperty::GetTargetCast(::UnityEngine::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"GetTargetCast", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_Cast>(nullptr, ___internal_method, o);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::CastMatches(::GlobalNamespace::ContinuousProperty_Cast  cast, ::GlobalNamespace::ContinuousProperty_Cast  test)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"CastMatches", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>(), ::i2c::type_of<::GlobalNamespace::ContinuousProperty_Cast>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cast, test);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::HasAllFlags(::GlobalNamespace::ContinuousProperty_DataFlags  flags, ::GlobalNamespace::ContinuousProperty_DataFlags  test)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAllFlags", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>(), ::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, test);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::HasAnyFlag(::GlobalNamespace::ContinuousProperty_DataFlags  flags, ::GlobalNamespace::ContinuousProperty_DataFlags  test)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>(), ::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, test);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::GetAllValidObjectsNonAlloc(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"GetAllValidObjectsNonAlloc", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, objects);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::IsValidObject(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"IsValidObject", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::_ctor(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*  mode, ::UnityEngine::Transform*  initialTarget, ::UnityEngine::Vector2  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::Cosmetics::ContinuousPropertyModeSO*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, initialTarget, range);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::get_ModeTooltip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeTooltip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_ModeInfoVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeInfoVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_ModeErrorVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeErrorVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::get_ModeErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ModeErrorMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO> GorillaTag::Cosmetics::ContinuousProperty::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::Cosmetics::ContinuousPropertyModeSO>>(this, ___internal_method);
}
inline ::GlobalNamespace::ContinuousProperty_Type GorillaTag::Cosmetics::ContinuousProperty::get_MyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_MyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_Type>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_TargetInfoVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_TargetInfoVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::get_TargetTooltip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_TargetTooltip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_ShiftButtonsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ShiftButtonsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> GorillaTag::Cosmetics::ContinuousProperty::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::PreviousTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"PreviousTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::NextTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"NextTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::ShiftTarget(int32_t  shiftAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"ShiftTarget", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shiftAmount);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::OnModeOrTargetChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"OnModeOrTargetChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_IsShaderProperty_Cached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_IsShaderProperty_Cached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::set_IsShaderProperty_Cached(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"set_IsShaderProperty_Cached", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_UsesThreshold_Cached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_UsesThreshold_Cached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::set_UsesThreshold_Cached(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"set_UsesThreshold_Cached", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaTag::Cosmetics::ContinuousProperty::GetTargetInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"GetTargetInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::HasAllFlags(::GlobalNamespace::ContinuousProperty_DataFlags  test)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAllFlags", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, test);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::HasAnyFlag(::GlobalNamespace::ContinuousProperty_DataFlags  test)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::ContinuousProperty_DataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, test);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::DynamicIntLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"DynamicIntLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaTag::Cosmetics::ContinuousProperty::get_IntValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_IntValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::DynamicStringLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"DynamicStringLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::get_StringValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_StringValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasBezier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasBezier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_MissingBezier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_MissingBezier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_AxisError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_AxisError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasAxisMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasAxisMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_InterpolationError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_InterpolationError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasInterpolationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasInterpolationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasStopAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasStopAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasXforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasXforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_MissingXforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_MissingXforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasOffsets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasOffsets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::get_ThresholdErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ThresholdErrorMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaTag::Cosmetics::ContinuousProperty::get_ThresholdTooltip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ThresholdTooltip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_ThresholdError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_ThresholdError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasEventMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasEventMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_HasUnityEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_HasUnityEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::get_RunOnlyLocally()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"get_RunOnlyLocally", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::SetRigIsLocal(bool  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"SetRigIsLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::InitThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"InitThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousProperty::Apply(float_t  f, float_t  deltaTime, ::UnityEngine::MaterialPropertyBlock*  mpb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"Apply", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f, deltaTime, mpb);
}
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve GorillaTag::Cosmetics::ContinuousProperty::ScaleCurve(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>  inCurve, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"ScaleCurve", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ParticleSystem_MinMaxCurve>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_MinMaxCurve>(this, ___internal_method, inCurve, scale);
}
inline bool GorillaTag::Cosmetics::ContinuousProperty::CheckContinuousEvent(float_t  f, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"CheckContinuousEvent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f, deltaTime);
}
inline ::GlobalNamespace::ContinuousProperty_ThresholdResult GorillaTag::Cosmetics::ContinuousProperty::CheckThreshold(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousProperty*>(),
                        {"CheckThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ContinuousProperty_ThresholdResult>(this, ___internal_method, f);
}
inline ::GorillaTag::Cosmetics::ContinuousProperty* GorillaTag::Cosmetics::ContinuousProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousProperty*>());
}
inline ::GorillaTag::Cosmetics::ContinuousProperty* GorillaTag::Cosmetics::ContinuousProperty::New_ctor(::GorillaTag::Cosmetics::ContinuousPropertyModeSO*  mode, ::UnityEngine::Transform*  initialTarget, ::UnityEngine::Vector2  range)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousProperty*>(mode, initialTarget, range));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousProperty::ContinuousProperty()   {
}
