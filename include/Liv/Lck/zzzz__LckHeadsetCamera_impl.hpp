#pragma once
// IWYU pragma private; include "Liv/Lck/LckHeadsetCamera.hpp"
#include "Liv/Lck/zzzz__EyeSelection_impl.hpp"
#include "Liv/Lck/zzzz__HeadsetCropMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckHeadsetCamera_def.hpp"
#include "Liv/Lck/zzzz__EyeSelection_def.hpp"
#include "Liv/Lck/zzzz__HeadsetCropMode_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_CameraId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_CameraId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce195c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_CameraId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_Eye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::EyeSelection (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_Eye)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_Eye", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.set_Eye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::Liv::Lck::EyeSelection)>(&::Liv::Lck::LckHeadsetCamera::set_Eye)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9ce196c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_Eye", {}, {::i2c::type_of<::Liv::Lck::EyeSelection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_CropMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::HeadsetCropMode (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_CropMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_CropMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.set_CropMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::Liv::Lck::HeadsetCropMode)>(&::Liv::Lck::LckHeadsetCamera::set_CropMode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ce1a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_CropMode", {}, {::i2c::type_of<::Liv::Lck::HeadsetCropMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.set_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(bool)>(&::Liv::Lck::LckHeadsetCamera::set_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_IsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_ActiveTargetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_ActiveTargetTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_ActiveTargetTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.set_ActiveTargetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckHeadsetCamera::set_ActiveTargetTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_ActiveTargetTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::Awake)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x9ce1a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::OnDestroy)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9ce1f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.ActivateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckHeadsetCamera::ActivateCamera)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9ce2234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ActivateCamera", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.InitializeCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::InitializeCapture)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9ce2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"InitializeCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.DeactivateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::DeactivateCamera)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ce24f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"DeactivateCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.GetCameraComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::GetCameraComponent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ce258c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"GetCameraComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.IsTargetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Camera*)>(&::Liv::Lck::LckHeadsetCamera::IsTargetCamera)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9ce264c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"IsTargetCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.MarkCapturedByRenderFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::MarkCapturedByRenderFeature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ce272c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"MarkCapturedByRenderFeature", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::Liv::Lck::LckHeadsetCamera::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9ce2748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.OnPostRenderBuiltIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Camera*)>(&::Liv::Lck::LckHeadsetCamera::OnPostRenderBuiltIn)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce2b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"OnPostRenderBuiltIn", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.DetectStereoModeIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::DetectStereoModeIfNeeded)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9ce24b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"DetectStereoModeIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.ShouldCaptureEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Camera*)>(&::Liv::Lck::LckHeadsetCamera::ShouldCaptureEye)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9ce2864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ShouldCaptureEye", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_MaterialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_MaterialInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_MaterialInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.get_UseTextureArrayBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::get_UseTextureArrayBlit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ce2c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_UseTextureArrayBlit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.UpdateMaterialForCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Camera*, bool)>(&::Liv::Lck::LckHeadsetCamera::UpdateMaterialForCapture)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9ce2c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"UpdateMaterialForCapture", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.PopulateCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(&::Liv::Lck::LckHeadsetCamera::PopulateCommandBuffer)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9ce28b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"PopulateCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.UpdateScaleOffsetIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(int32_t, int32_t)>(&::Liv::Lck::LckHeadsetCamera::UpdateScaleOffsetIfNeeded)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9ce2e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"UpdateScaleOffsetIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.InvalidateScaleOffsetCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::InvalidateScaleOffsetCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce1a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"InvalidateScaleOffsetCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.ComputeScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::Liv::Lck::LckHeadsetCamera::*)(int32_t, int32_t)>(&::Liv::Lck::LckHeadsetCamera::ComputeScaleOffset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9ce3090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ComputeScaleOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.PrepareIntermediateRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)(::UnityEngine::Camera*)>(&::Liv::Lck::LckHeadsetCamera::PrepareIntermediateRT)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9ce2f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"PrepareIntermediateRT", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera.ReleaseIntermediateRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::ReleaseIntermediateRT)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ce21a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ReleaseIntermediateRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckHeadsetCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckHeadsetCamera::*)()>(&::Liv::Lck::LckHeadsetCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ce31a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cameraId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraId;
}
constexpr ::StringW const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cameraId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraId;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cameraId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraId = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__xrCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__xrCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrCamera;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__xrCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrCamera = value;
}
constexpr ::Liv::Lck::EyeSelection& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__eye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eye;
}
constexpr ::Liv::Lck::EyeSelection const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__eye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eye;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__eye(::Liv::Lck::EyeSelection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eye = value;
}
constexpr ::Liv::Lck::HeadsetCropMode& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cropMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cropMode;
}
constexpr ::Liv::Lck::HeadsetCropMode const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cropMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cropMode;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cropMode(::Liv::Lck::HeadsetCropMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cropMode = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__blitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__blitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blitMaterial;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blitMaterial = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__IsActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsActive_k__BackingField;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__IsActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsActive_k__BackingField;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__IsActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsActive_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__ActiveTargetTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveTargetTexture_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__ActiveTargetTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveTargetTexture_k__BackingField;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__ActiveTargetTexture_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveTargetTexture_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__intermediateRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intermediateRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__intermediateRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intermediateRT;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__intermediateRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intermediateRT = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__useTextureArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTextureArray;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__useTextureArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTextureArray;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__useTextureArray(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTextureArray = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__useSRP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useSRP;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__useSRP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useSRP;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__useSRP(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useSRP = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__flipY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipY;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__flipY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipY;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__flipY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flipY = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__isMultiPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMultiPass;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__isMultiPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMultiPass;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__isMultiPass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMultiPass = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__stereoModeDetected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoModeDetected;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__stereoModeDetected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stereoModeDetected;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__stereoModeDetected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stereoModeDetected = value;
}
constexpr bool& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__captureInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureInitialized;
}
constexpr bool const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__captureInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureInitialized;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__captureInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureInitialized = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__resolvedCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolvedCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__resolvedCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolvedCamera;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__resolvedCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolvedCamera = value;
}
constexpr int32_t& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__lastRenderFeatureCaptureFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRenderFeatureCaptureFrame;
}
constexpr int32_t const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__lastRenderFeatureCaptureFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRenderFeatureCaptureFrame;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__lastRenderFeatureCaptureFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRenderFeatureCaptureFrame = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cmd;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cmd;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cmd(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cmd = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
constexpr int32_t& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedSrcW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSrcW;
}
constexpr int32_t const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedSrcW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSrcW;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cachedSrcW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedSrcW = value;
}
constexpr int32_t& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedSrcH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSrcH;
}
constexpr int32_t const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedSrcH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSrcH;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cachedSrcH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedSrcH = value;
}
constexpr int32_t& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedDstW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedDstW;
}
constexpr int32_t const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedDstW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedDstW;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cachedDstW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedDstW = value;
}
constexpr int32_t& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedDstH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedDstH;
}
constexpr int32_t const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedDstH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedDstH;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cachedDstH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedDstH = value;
}
constexpr ::Liv::Lck::HeadsetCropMode& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedCropMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCropMode;
}
constexpr ::Liv::Lck::HeadsetCropMode const& Liv::Lck::LckHeadsetCamera::__cordl_internal_get__cachedCropMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedCropMode;
}
constexpr void Liv::Lck::LckHeadsetCamera::__cordl_internal_set__cachedCropMode(::Liv::Lck::HeadsetCropMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedCropMode = value;
}
inline void Liv::Lck::LckHeadsetCamera::setStaticF__activeInstances(::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>*, "_activeInstances", ::Liv::Lck::LckHeadsetCamera*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>* Liv::Lck::LckHeadsetCamera::getStaticF__activeInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Liv::Lck::LckHeadsetCamera>>*, "_activeInstances", ::Liv::Lck::LckHeadsetCamera*>();
}
inline void Liv::Lck::LckHeadsetCamera::setStaticF_SliceIndexId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SliceIndexId", ::Liv::Lck::LckHeadsetCamera*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::LckHeadsetCamera::getStaticF_SliceIndexId()  {
return ::cordl_internals::getStaticField<int32_t, "SliceIndexId", ::Liv::Lck::LckHeadsetCamera*>();
}
inline void Liv::Lck::LckHeadsetCamera::setStaticF_ScaleOffsetId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScaleOffsetId", ::Liv::Lck::LckHeadsetCamera*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::LckHeadsetCamera::getStaticF_ScaleOffsetId()  {
return ::cordl_internals::getStaticField<int32_t, "ScaleOffsetId", ::Liv::Lck::LckHeadsetCamera*>();
}
inline void Liv::Lck::LckHeadsetCamera::setStaticF_FlipYId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FlipYId", ::Liv::Lck::LckHeadsetCamera*>(std::forward<int32_t>(value));
}
inline int32_t Liv::Lck::LckHeadsetCamera::getStaticF_FlipYId()  {
return ::cordl_internals::getStaticField<int32_t, "FlipYId", ::Liv::Lck::LckHeadsetCamera*>();
}
inline ::StringW Liv::Lck::LckHeadsetCamera::get_CameraId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_CameraId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Liv::Lck::EyeSelection Liv::Lck::LckHeadsetCamera::get_Eye()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_Eye", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::EyeSelection>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::set_Eye(::Liv::Lck::EyeSelection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_Eye", {}, {::i2c::type_of<::Liv::Lck::EyeSelection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::HeadsetCropMode Liv::Lck::LckHeadsetCamera::get_CropMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_CropMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::HeadsetCropMode>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::set_CropMode(::Liv::Lck::HeadsetCropMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_CropMode", {}, {::i2c::type_of<::Liv::Lck::HeadsetCropMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::LckHeadsetCamera::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::set_IsActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_IsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> Liv::Lck::LckHeadsetCamera::get_ActiveTargetTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_ActiveTargetTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::set_ActiveTargetTexture(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"set_ActiveTargetTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckHeadsetCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::ActivateCamera(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ActivateCamera", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline void Liv::Lck::LckHeadsetCamera::InitializeCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"InitializeCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::DeactivateCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"DeactivateCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> Liv::Lck::LckHeadsetCamera::GetCameraComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"GetCameraComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline bool Liv::Lck::LckHeadsetCamera::IsTargetCamera(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"IsTargetCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline void Liv::Lck::LckHeadsetCamera::MarkCapturedByRenderFeature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"MarkCapturedByRenderFeature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cam);
}
inline void Liv::Lck::LckHeadsetCamera::OnPostRenderBuiltIn(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"OnPostRenderBuiltIn", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam);
}
inline void Liv::Lck::LckHeadsetCamera::DetectStereoModeIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"DetectStereoModeIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckHeadsetCamera::ShouldCaptureEye(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ShouldCaptureEye", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline ::UnityW<::UnityEngine::Material> Liv::Lck::LckHeadsetCamera::get_MaterialInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_MaterialInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline bool Liv::Lck::LckHeadsetCamera::get_UseTextureArrayBlit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"get_UseTextureArrayBlit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::UpdateMaterialForCapture(::UnityEngine::Camera*  cam, bool  isSourceBackBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"UpdateMaterialForCapture", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, isSourceBackBuffer);
}
inline void Liv::Lck::LckHeadsetCamera::PopulateCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"PopulateCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cam);
}
inline void Liv::Lck::LckHeadsetCamera::UpdateScaleOffsetIfNeeded(int32_t  srcW, int32_t  srcH)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"UpdateScaleOffsetIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcW, srcH);
}
inline void Liv::Lck::LckHeadsetCamera::InvalidateScaleOffsetCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"InvalidateScaleOffsetCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 Liv::Lck::LckHeadsetCamera::ComputeScaleOffset(int32_t  srcW, int32_t  srcH)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ComputeScaleOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, srcW, srcH);
}
inline void Liv::Lck::LckHeadsetCamera::PrepareIntermediateRT(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"PrepareIntermediateRT", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam);
}
inline void Liv::Lck::LckHeadsetCamera::ReleaseIntermediateRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {"ReleaseIntermediateRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckHeadsetCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckHeadsetCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckHeadsetCamera* Liv::Lck::LckHeadsetCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckHeadsetCamera*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckCamera"
constexpr  Liv::Lck::LckHeadsetCamera::operator ::Liv::Lck::ILckCamera*() noexcept {
return static_cast<::Liv::Lck::ILckCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckCamera"
constexpr ::Liv::Lck::ILckCamera* Liv::Lck::LckHeadsetCamera::i___Liv__Lck__ILckCamera() noexcept {
return static_cast<::Liv::Lck::ILckCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckHeadsetCamera::LckHeadsetCamera()   {
}
