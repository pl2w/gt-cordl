#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_BackendFovationApi_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_ColorSubmissionModeGroup_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_DepthSubmissionMode_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_LatencyOptimization_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_MultiviewRenderRegionsOptimizationMode_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_RenderMode_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_SpaceWarpMotionVectorTextureFormat_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_BackendFovationApi_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_ColorSubmissionModeGroup_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_DepthSubmissionMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_LatencyOptimization_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_MultiviewRenderRegionsOptimizationMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_RenderMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_SpaceWarpMotionVectorTextureFormat_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_featureCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4e0368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_featureCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4e0380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeature", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4e040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb4e0580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4e06dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4e0768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.PermissionGrantedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::PermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4e0804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"PermissionGrantedCallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.IsPermissionGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::IsPermissionGranted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e0988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"IsPermissionGranted", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplyPermissionSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplyPermissionSettings)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xb4e0990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"ApplyPermissionSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetHasEyeTrackingPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetHasEyeTrackingPermissions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetHasEyeTrackingPermissions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_renderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_RenderMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4e0d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_renderMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_renderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::GlobalNamespace::OpenXRSettings_RenderMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4e0ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_renderMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_RenderMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_latencyOptimization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_LatencyOptimization (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_latencyOptimization)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4e1038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_latencyOptimization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_latencyOptimization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::GlobalNamespace::OpenXRSettings_LatencyOptimization)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_latencyOptimization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e1174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_latencyOptimization", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_LatencyOptimization>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_autoColorSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_autoColorSubmissionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e117c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_autoColorSubmissionMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_autoColorSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_autoColorSubmissionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e1184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_autoColorSubmissionMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_colorSubmissionModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup> (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_colorSubmissionModes)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb4e118c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_colorSubmissionModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_colorSubmissionModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_colorSubmissionModes)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb4e1510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_colorSubmissionModes", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_depthSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4e178c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_depthSubmissionMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_depthSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4e18c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_depthSubmissionMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_spacewarpMotionVectorTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_spacewarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4e1a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_spacewarpMotionVectorTextureFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_spacewarpMotionVectorTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_spacewarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4e1b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_spacewarpMotionVectorTextureFormat", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_optimizeBufferDiscards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e1cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_optimizeBufferDiscards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_optimizeBufferDiscards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeBufferDiscards)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4e1cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_optimizeBufferDiscards", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplyRenderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb4e1e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"ApplyRenderSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4e2240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4e2254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_symmetricProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_symmetricProjection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_symmetricProjection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_symmetricProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_symmetricProjection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4e227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_symmetricProjection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_optimizeMultiviewRenderRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeMultiviewRenderRegions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4e236c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_optimizeMultiviewRenderRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_optimizeMultiviewRenderRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeMultiviewRenderRegions)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb4e2380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_optimizeMultiviewRenderRegions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_multiviewRenderRegionsOptimizationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_multiviewRenderRegionsOptimizationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_multiviewRenderRegionsOptimizationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_multiviewRenderRegionsOptimizationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_multiviewRenderRegionsOptimizationMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4e247c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_multiviewRenderRegionsOptimizationMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_foveatedRenderingApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_BackendFovationApi (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_foveatedRenderingApi)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4e2568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_foveatedRenderingApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_foveatedRenderingApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(::GlobalNamespace::OpenXRSettings_BackendFovationApi)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_foveatedRenderingApi)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4e26a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_foveatedRenderingApi", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_BackendFovationApi>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_useOpenXRPredictedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_useOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4e2790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_useOpenXRPredictedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.set_useOpenXRPredictedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::set_useOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4e28d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_useOpenXRPredictedTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetRenderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRSettings_RenderMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e0fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetRenderMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_RenderMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetRenderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_RenderMode (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e0e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetRenderMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetLatencyOptimization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRSettings_LatencyOptimization)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetLatencyOptimization)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e21c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetLatencyOptimization", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_LatencyOptimization>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetLatencyOptimization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_LatencyOptimization (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetLatencyOptimization)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetLatencyOptimization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetDepthSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e19b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetDepthSubmissionMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetDepthSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e1864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetDepthSubmissionMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetSpaceWarpMotionVectorTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSpaceWarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e1c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetSpaceWarpMotionVectorTextureFormat", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetSpaceWarpMotionVectorTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetSpaceWarpMotionVectorTextureFormat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e1b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetSpaceWarpMotionVectorTextureFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetSymmetricProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSymmetricProjection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e1fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetSymmetricProjection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetMultiviewRenderRegionsOptimizationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetMultiviewRenderRegionsOptimizationMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e2050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetMultiviewRenderRegionsOptimizationMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetOptimizeBufferDiscards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeBufferDiscards)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e1dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetOptimizeBufferDiscards", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetUsedFoveatedRenderingApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OpenXRSettings_BackendFovationApi)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUsedFoveatedRenderingApi)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e2148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetUsedFoveatedRenderingApi", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_BackendFovationApi>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetUsedFoveatedRenderingApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_BackendFovationApi (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUsedFoveatedRenderingApi)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetUsedFoveatedRenderingApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetColorSubmissionMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionMode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4e29c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetColorSubmissionMode", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetColorSubmissionModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionModes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4e1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetColorSubmissionModes", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetColorSubmissionModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::ArrayW<int32_t>>, int32_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetColorSubmissionModes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4e13fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetColorSubmissionModes", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetIsUsingLegacyXRDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetIsUsingLegacyXRDisplay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4e2a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetIsUsingLegacyXRDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetUseOpenXRPredictedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUseOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4e2868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetUseOpenXRPredictedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetUseOpenXRPredictedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUseOpenXRPredictedTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4e20cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetUseOpenXRPredictedTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4e2ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.ApplySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4e2b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"ApplySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)(bool)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4e0864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_ActiveBuildTargetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e0d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_ActiveBuildTargetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.SetAllowRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::SetAllowRecentering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4e2b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"SetAllowRecentering", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.RefreshRecenterSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::RefreshRecenterSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4e2bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"RefreshRecenterSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_AllowRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_AllowRecentering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4e2c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_AllowRecentering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.get_FloorOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::get_FloorOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4e2c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_FloorOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetAllowRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, float_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetAllowRecentering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4e2b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetAllowRecentering", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_RegenerateTrackingOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_RegenerateTrackingOrigin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e2bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_RegenerateTrackingOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetAllowRecentering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetAllowRecentering)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4e2c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetAllowRecentering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetFloorOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetFloorOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e2c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetFloorOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb4e2cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_features()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___features;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_features() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___features;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_features(::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___features = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeTrackingQuestPermissionsToRequest;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeTrackingQuestPermissionsToRequest;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_eyeTrackingQuestPermissionsToRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eyeTrackingQuestPermissionsToRequest = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeTrackingAndroidXRPermissionsToRequest;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_eyeTrackingAndroidXRPermissionsToRequest;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_eyeTrackingAndroidXRPermissionsToRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_eyeTrackingAndroidXRPermissionsToRequest = value;
}
constexpr ::GlobalNamespace::OpenXRSettings_RenderMode& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_renderMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderMode;
}
constexpr ::GlobalNamespace::OpenXRSettings_RenderMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_renderMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_renderMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_renderMode(::GlobalNamespace::OpenXRSettings_RenderMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_renderMode = value;
}
constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_latencyOptimization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_latencyOptimization;
}
constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_latencyOptimization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_latencyOptimization;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_latencyOptimization(::GlobalNamespace::OpenXRSettings_LatencyOptimization  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_latencyOptimization = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_autoColorSubmissionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_autoColorSubmissionMode;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_autoColorSubmissionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_autoColorSubmissionMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_autoColorSubmissionMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_autoColorSubmissionMode = value;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_colorSubmissionModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_colorSubmissionModes;
}
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_colorSubmissionModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_colorSubmissionModes;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_colorSubmissionModes(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_colorSubmissionModes = value;
}
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_depthSubmissionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_depthSubmissionMode;
}
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_depthSubmissionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_depthSubmissionMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_depthSubmissionMode(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_depthSubmissionMode = value;
}
constexpr ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_spacewarpMotionVectorTextureFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spacewarpMotionVectorTextureFormat;
}
constexpr ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_spacewarpMotionVectorTextureFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spacewarpMotionVectorTextureFormat;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_spacewarpMotionVectorTextureFormat(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spacewarpMotionVectorTextureFormat = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeBufferDiscards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_optimizeBufferDiscards;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeBufferDiscards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_optimizeBufferDiscards;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_optimizeBufferDiscards(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_optimizeBufferDiscards = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_symmetricProjection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_symmetricProjection;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_symmetricProjection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_symmetricProjection;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_symmetricProjection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_symmetricProjection = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeMultiviewRenderRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_optimizeMultiviewRenderRegions;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_optimizeMultiviewRenderRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_optimizeMultiviewRenderRegions;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_optimizeMultiviewRenderRegions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_optimizeMultiviewRenderRegions = value;
}
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_multiviewRenderRegionsOptimizationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_multiviewRenderRegionsOptimizationMode;
}
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_multiviewRenderRegionsOptimizationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_multiviewRenderRegionsOptimizationMode;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_multiviewRenderRegionsOptimizationMode(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_multiviewRenderRegionsOptimizationMode = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMigratedMultiviewRenderRegionSetting;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasMigratedMultiviewRenderRegionSetting;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_hasMigratedMultiviewRenderRegionSetting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasMigratedMultiviewRenderRegionSetting = value;
}
constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_foveatedRenderingApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_foveatedRenderingApi;
}
constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_foveatedRenderingApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_foveatedRenderingApi;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_foveatedRenderingApi(::GlobalNamespace::OpenXRSettings_BackendFovationApi  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_foveatedRenderingApi = value;
}
constexpr bool& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_useOpenXRPredictedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useOpenXRPredictedTime;
}
constexpr bool const& UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_get_m_useOpenXRPredictedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useOpenXRPredictedTime;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__cordl_internal_set_m_useOpenXRPredictedTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_useOpenXRPredictedTime = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_kDefaultColorMode(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup, "kDefaultColorMode", ::UnityEngine::XR::OpenXR::OpenXRSettings*>(std::forward<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>(value));
}
inline ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_kDefaultColorMode()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup, "kDefaultColorMode", ::UnityEngine::XR::OpenXR::OpenXRSettings*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::setStaticF_s_RuntimeInstance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, "s_RuntimeInstance", ::UnityEngine::XR::OpenXR::OpenXRSettings*>(std::forward<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(value));
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::getStaticF_s_RuntimeInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>, "s_RuntimeInstance", ::UnityEngine::XR::OpenXR::OpenXRSettings*>();
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_featureCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TFeature>
requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
inline TFeature UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                    {"GetFeature", {::i2c::class_of<TFeature>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFeature>()}
                )));
return ::cordl_internals::RunMethodRethrow<TFeature>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature(::System::Type*  featureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeature", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>(this, ___internal_method, featureType);
}
template<typename TFeature>
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                    {"GetFeatures", {::i2c::class_of<TFeature>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFeature>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type*  featureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>>(this, ___internal_method, featureType);
}
template<typename TFeature>
requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<TFeature>*  featuresOut)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                    {"GetFeatures", {::i2c::class_of<TFeature>()}, {::i2c::type_of<::System::Collections::Generic::List_1<TFeature>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFeature>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, featuresOut);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Type*  featureType, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*  featuresOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, featureType, featuresOut);
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*  featuresOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetFeatures", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, featuresOut);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::PermissionGrantedCallback(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"PermissionGrantedCallback", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissionName);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::IsPermissionGranted(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"IsPermissionGranted", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, permissionName);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyPermissionSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"ApplyPermissionSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetHasEyeTrackingPermissions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetHasEyeTrackingPermissions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_renderMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_RenderMode>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode(::GlobalNamespace::OpenXRSettings_RenderMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_renderMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_RenderMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OpenXRSettings_LatencyOptimization UnityEngine::XR::OpenXR::OpenXRSettings::get_latencyOptimization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_latencyOptimization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_LatencyOptimization>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_latencyOptimization(::GlobalNamespace::OpenXRSettings_LatencyOptimization  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_latencyOptimization", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_LatencyOptimization>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_autoColorSubmissionMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_autoColorSubmissionMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_autoColorSubmissionMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_autoColorSubmissionMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup> UnityEngine::XR::OpenXR::OpenXRSettings::get_colorSubmissionModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_colorSubmissionModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_colorSubmissionModes(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_colorSubmissionModes", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_depthSubmissionMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_depthSubmissionMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings::get_spacewarpMotionVectorTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_spacewarpMotionVectorTextureFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_spacewarpMotionVectorTextureFormat(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_spacewarpMotionVectorTextureFormat", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeBufferDiscards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_optimizeBufferDiscards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeBufferDiscards(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_optimizeBufferDiscards", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"ApplyRenderSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_symmetricProjection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_symmetricProjection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_symmetricProjection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_symmetricProjection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_optimizeMultiviewRenderRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_optimizeMultiviewRenderRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_optimizeMultiviewRenderRegions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_optimizeMultiviewRenderRegions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode UnityEngine::XR::OpenXR::OpenXRSettings::get_multiviewRenderRegionsOptimizationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_multiviewRenderRegionsOptimizationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_multiviewRenderRegionsOptimizationMode(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_multiviewRenderRegionsOptimizationMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings::get_foveatedRenderingApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_foveatedRenderingApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_BackendFovationApi>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_foveatedRenderingApi(::GlobalNamespace::OpenXRSettings_BackendFovationApi  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_foveatedRenderingApi", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_BackendFovationApi>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_useOpenXRPredictedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_useOpenXRPredictedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::set_useOpenXRPredictedTime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"set_useOpenXRPredictedTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode(::GlobalNamespace::OpenXRSettings_RenderMode  renderMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetRenderMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_RenderMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderMode);
}
inline ::GlobalNamespace::OpenXRSettings_RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetRenderMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_RenderMode>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetLatencyOptimization(::GlobalNamespace::OpenXRSettings_LatencyOptimization  latencyOptimzation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetLatencyOptimization", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_LatencyOptimization>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, latencyOptimzation);
}
inline ::GlobalNamespace::OpenXRSettings_LatencyOptimization UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetLatencyOptimization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetLatencyOptimization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_LatencyOptimization>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  depthSubmissionMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetDepthSubmissionMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, depthSubmissionMode);
}
inline ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetDepthSubmissionMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_DepthSubmissionMode>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSpaceWarpMotionVectorTextureFormat(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  spaceWarpMotionVectorTextureFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetSpaceWarpMotionVectorTextureFormat", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spaceWarpMotionVectorTextureFormat);
}
inline ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetSpaceWarpMotionVectorTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetSpaceWarpMotionVectorTextureFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetSymmetricProjection(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetSymmetricProjection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetMultiviewRenderRegionsOptimizationMode(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetMultiviewRenderRegionsOptimizationMode", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetOptimizeBufferDiscards(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetOptimizeBufferDiscards", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUsedFoveatedRenderingApi(::GlobalNamespace::OpenXRSettings_BackendFovationApi  api)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetUsedFoveatedRenderingApi", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_BackendFovationApi>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, api);
}
inline ::GlobalNamespace::OpenXRSettings_BackendFovationApi UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUsedFoveatedRenderingApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetUsedFoveatedRenderingApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_BackendFovationApi>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionMode(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  colorSubmissionMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetColorSubmissionMode", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorSubmissionMode);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetColorSubmissionModes(::ArrayW<int32_t>  colorSubmissionMode, int32_t  arraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetColorSubmissionModes", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorSubmissionMode, arraySize);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetColorSubmissionModes(::by_ref<::ArrayW<int32_t>>  colorSubmissionMode, int32_t  arraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetColorSubmissionModes", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, colorSubmissionMode, arraySize);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetIsUsingLegacyXRDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetIsUsingLegacyXRDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetUseOpenXRPredictedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetUseOpenXRPredictedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetUseOpenXRPredictedTime(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetUseOpenXRPredictedTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"ApplySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance(bool  useActiveBuildTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"GetInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(nullptr, ___internal_method, useActiveBuildTarget);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_ActiveBuildTargetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::SetAllowRecentering(bool  allowRecentering, float_t  floorOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"SetAllowRecentering", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allowRecentering, floorOffset);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::RefreshRecenterSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"RefreshRecenterSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::get_AllowRecentering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_AllowRecentering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::OpenXR::OpenXRSettings::get_FloorOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"get_FloorOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetAllowRecentering(bool  active, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_SetAllowRecentering", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active, height);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_RegenerateTrackingOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_RegenerateTrackingOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetAllowRecentering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetAllowRecentering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetFloorOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {"Internal_GetFloorOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings* UnityEngine::XR::OpenXR::OpenXRSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRSettings*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::XR::OpenXR::OpenXRSettings::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::OpenXR::OpenXRSettings::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings::OpenXRSettings()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._get_colorSubmissionModes_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(int32_t)>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_get_colorSubmissionModes_b__36_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {"<get_colorSubmissionModes>b__36_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._set_colorSubmissionModes_b__37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup)>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_set_colorSubmissionModes_b__37_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {"<set_colorSubmissionModes>b__37_0", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings___c._ApplyRenderSettings_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::OpenXRSettings___c::*)(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup)>(&::UnityEngine::XR::OpenXR::OpenXRSettings___c::_ApplyRenderSettings_b__53_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4e2ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {"<ApplyRenderSettings>b__53_0", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRSettings___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(std::forward<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(value));
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "<>9", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__36_0(::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>*, "<>9__36_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(std::forward<::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>*>(value));
}
inline ::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>*, "<>9__36_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__37_0(::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*, "<>9__37_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(std::forward<::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*, "<>9__37_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*, "<>9__53_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(std::forward<::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>* UnityEngine::XR::OpenXR::OpenXRSettings___c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*, "<>9__53_0", ::UnityEngine::XR::OpenXR::OpenXRSettings___c*>();
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup UnityEngine::XR::OpenXR::OpenXRSettings___c::_get_colorSubmissionModes_b__36_0(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {"<get_colorSubmissionModes>b__36_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>(this, ___internal_method, i);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings___c::_set_colorSubmissionModes_b__37_0(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {"<set_colorSubmissionModes>b__37_0", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
inline int32_t UnityEngine::XR::OpenXR::OpenXRSettings___c::_ApplyRenderSettings_b__53_0(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>(),
                        {"<ApplyRenderSettings>b__53_0", {}, {::i2c::type_of<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* UnityEngine::XR::OpenXR::OpenXRSettings___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRSettings___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings___c::OpenXRSettings___c()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::*)()>(&::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb4e2df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>& UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_get_m_List()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_List;
}
constexpr ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup> const& UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_get_m_List() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_List;
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::__cordl_internal_set_m_List(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_List = value;
}
inline void UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList::OpenXRSettings_ColorSubmissionModeList()   {
}
