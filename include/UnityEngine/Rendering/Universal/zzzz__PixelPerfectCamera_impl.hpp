#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PixelPerfectCamera.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_CropFrame_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_GridSnapping_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_PixelPerfectFilterMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPixelPerfectCamera_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCameraInternal_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_CropFrame_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_GridSnapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelPerfectCamera_PixelPerfectFilterMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_cropFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PixelPerfectCamera_CropFrame (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cropFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cropFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_cropFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(::GlobalNamespace::PixelPerfectCamera_CropFrame)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_cropFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_cropFrame", {}, {::i2c::type_of<::GlobalNamespace::PixelPerfectCamera_CropFrame>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_gridSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PixelPerfectCamera_GridSnapping (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_gridSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_gridSnapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_gridSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(::GlobalNamespace::PixelPerfectCamera_GridSnapping)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_gridSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_gridSnapping", {}, {::i2c::type_of<::GlobalNamespace::PixelPerfectCamera_GridSnapping>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_orthographicSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_orthographicSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb214bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_orthographicSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_assetsPPU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_assetsPPU)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_assetsPPU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_assetsPPU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(int32_t)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_assetsPPU)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb214bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_assetsPPU", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_refResolutionX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_refResolutionX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_refResolutionX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_refResolutionX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(int32_t)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_refResolutionX)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb214bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_refResolutionX", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_refResolutionY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_refResolutionY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb214c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_refResolutionY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_refResolutionY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(int32_t)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_refResolutionY)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb214c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_refResolutionY", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_upscaleRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_upscaleRT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb214c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_upscaleRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_upscaleRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(bool)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_upscaleRT)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb214c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_upscaleRT", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_pixelSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_pixelSnapping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb214c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_pixelSnapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_pixelSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(bool)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_pixelSnapping)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb214c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_pixelSnapping", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_cropFrameX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cropFrameX)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb214c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cropFrameX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_cropFrameX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(bool)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_cropFrameX)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb214ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_cropFrameX", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_cropFrameY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cropFrameY)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb214cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cropFrameY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_cropFrameY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(bool)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_cropFrameY)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb214d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_cropFrameY", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_stretchFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_stretchFill)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb214d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_stretchFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.set_stretchFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(bool)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::set_stretchFill)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb214d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_stretchFill", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_pixelRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_pixelRatio)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb214d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_pixelRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_requiresUpscalePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_requiresUpscalePass)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb214dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_requiresUpscalePass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.RoundToPixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::RoundToPixel)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb214ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"RoundToPixel", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.CorrectCinemachineOrthoSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(float_t)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::CorrectCinemachineOrthoSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb214f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"CorrectCinemachineOrthoSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_finalBlitFilterMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FilterMode (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_finalBlitFilterMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb2153c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_finalBlitFilterMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_offscreenRTSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_offscreenRTSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb2153d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_offscreenRTSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.get_cameraRTSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cameraRTSize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb2153f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cameraRTSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.PixelSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::PixelSnap)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xb2154b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"PixelSnap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb215730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.UpdateCameraProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::UpdateCameraProperties)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb215828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"UpdateCameraProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb2162ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb216378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb216404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb2164c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb2165b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb2165b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PixelPerfectCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PixelPerfectCamera::*)()>(&::UnityEngine::Rendering::Universal::PixelPerfectCamera::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb2165bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_AssetsPPU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetsPPU;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_AssetsPPU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetsPPU;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_AssetsPPU(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AssetsPPU = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefResolutionX;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefResolutionX;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_RefResolutionX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefResolutionX = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefResolutionY;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_RefResolutionY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefResolutionY;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_RefResolutionY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefResolutionY = value;
}
constexpr ::GlobalNamespace::PixelPerfectCamera_CropFrame& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CropFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CropFrame;
}
constexpr ::GlobalNamespace::PixelPerfectCamera_CropFrame const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CropFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CropFrame;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_CropFrame(::GlobalNamespace::PixelPerfectCamera_CropFrame  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CropFrame = value;
}
constexpr ::GlobalNamespace::PixelPerfectCamera_GridSnapping& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_GridSnapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GridSnapping;
}
constexpr ::GlobalNamespace::PixelPerfectCamera_GridSnapping const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_GridSnapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GridSnapping;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_GridSnapping(::GlobalNamespace::PixelPerfectCamera_GridSnapping  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GridSnapping = value;
}
constexpr ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_FilterMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FilterMode;
}
constexpr ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_FilterMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FilterMode;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_FilterMode(::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FilterMode = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Camera = value;
}
constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Internal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Internal;
}
constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_Internal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Internal;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_Internal(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Internal = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CinemachineCompatibilityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CinemachineCompatibilityMode;
}
constexpr bool const& UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_get_m_CinemachineCompatibilityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CinemachineCompatibilityMode;
}
constexpr void UnityEngine::Rendering::Universal::PixelPerfectCamera::__cordl_internal_set_m_CinemachineCompatibilityMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CinemachineCompatibilityMode = value;
}
inline ::GlobalNamespace::PixelPerfectCamera_CropFrame UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cropFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cropFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PixelPerfectCamera_CropFrame>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_cropFrame(::GlobalNamespace::PixelPerfectCamera_CropFrame  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_cropFrame", {}, {::i2c::type_of<::GlobalNamespace::PixelPerfectCamera_CropFrame>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PixelPerfectCamera_GridSnapping UnityEngine::Rendering::Universal::PixelPerfectCamera::get_gridSnapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_gridSnapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PixelPerfectCamera_GridSnapping>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_gridSnapping(::GlobalNamespace::PixelPerfectCamera_GridSnapping  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_gridSnapping", {}, {::i2c::type_of<::GlobalNamespace::PixelPerfectCamera_GridSnapping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::PixelPerfectCamera::get_orthographicSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_orthographicSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::PixelPerfectCamera::get_assetsPPU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_assetsPPU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_assetsPPU(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_assetsPPU", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::PixelPerfectCamera::get_refResolutionX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_refResolutionX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_refResolutionX(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_refResolutionX", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::PixelPerfectCamera::get_refResolutionY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_refResolutionY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_refResolutionY(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_refResolutionY", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::PixelPerfectCamera::get_upscaleRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_upscaleRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_upscaleRT(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_upscaleRT", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::PixelPerfectCamera::get_pixelSnapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_pixelSnapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_pixelSnapping(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_pixelSnapping", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cropFrameX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cropFrameX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_cropFrameX(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_cropFrameX", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cropFrameY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cropFrameY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_cropFrameY(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_cropFrameY", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::PixelPerfectCamera::get_stretchFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_stretchFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::set_stretchFill(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"set_stretchFill", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::PixelPerfectCamera::get_pixelRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_pixelRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PixelPerfectCamera::get_requiresUpscalePass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_requiresUpscalePass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::PixelPerfectCamera::RoundToPixel(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"RoundToPixel", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline float_t UnityEngine::Rendering::Universal::PixelPerfectCamera::CorrectCinemachineOrthoSize(float_t  targetOrthoSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"CorrectCinemachineOrthoSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, targetOrthoSize);
}
inline ::UnityEngine::FilterMode UnityEngine::Rendering::Universal::PixelPerfectCamera::get_finalBlitFilterMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_finalBlitFilterMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::FilterMode>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::Universal::PixelPerfectCamera::get_offscreenRTSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_offscreenRTSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::Universal::PixelPerfectCamera::get_cameraRTSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"get_cameraRTSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::PixelSnap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"PixelSnap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::UpdateCameraProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"UpdateCameraProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PixelPerfectCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PixelPerfectCamera* UnityEngine::Rendering::Universal::PixelPerfectCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PixelPerfectCamera*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
constexpr  UnityEngine::Rendering::Universal::PixelPerfectCamera::operator ::UnityEngine::Rendering::Universal::IPixelPerfectCamera*() noexcept {
return static_cast<::UnityEngine::Rendering::Universal::IPixelPerfectCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
constexpr ::UnityEngine::Rendering::Universal::IPixelPerfectCamera* UnityEngine::Rendering::Universal::PixelPerfectCamera::i___UnityEngine__Rendering__Universal__IPixelPerfectCamera() noexcept {
return static_cast<::UnityEngine::Rendering::Universal::IPixelPerfectCamera*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Rendering::Universal::PixelPerfectCamera::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::PixelPerfectCamera::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCamera::PixelPerfectCamera()   {
}
