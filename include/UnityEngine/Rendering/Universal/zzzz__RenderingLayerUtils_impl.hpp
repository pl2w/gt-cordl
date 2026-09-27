#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingLayerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_Event_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_MaskSize_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.CombineRendererEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, int32_t, ::GlobalNamespace::RenderingLayerUtils_Event, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::CombineRendererEvents)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb290fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"CombineRendererEvents", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_Event>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.RequireRenderingLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalRenderer*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, int32_t, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb29100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"RequireRenderingLayers", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.RequireRenderingLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, ::UnityEngine::Rendering::Universal::RenderingMode, bool, int32_t, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb291080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"RequireRenderingLayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.SetupProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::GlobalNamespace::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb291398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"SetupProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.SetupProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::GlobalNamespace::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb291454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"SetupProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::GlobalNamespace::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb291538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"GetFormat", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.ToValidRenderingLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::ToValidRenderingLayers)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb291588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"ToValidRenderingLayers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetMaskSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderingLayerUtils_MaskSize (*)(int32_t)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetMaskSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb291364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"GetMaskSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetBits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb2914ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"GetBits", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderingLayerUtils_Event (*)(::GlobalNamespace::RenderingLayerUtils_Event, ::GlobalNamespace::RenderingLayerUtils_Event)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb291000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"Combine", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_Event>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_Event>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderingLayerUtils_MaskSize (*)(::GlobalNamespace::RenderingLayerUtils_MaskSize, ::GlobalNamespace::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb291358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"Combine", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::CombineRendererEvents(bool  isDeferred, int32_t  msaaSampleCount, ::GlobalNamespace::RenderingLayerUtils_Event  rendererEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  combinedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"CombineRendererEvents", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_Event>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isDeferred, msaaSampleCount, rendererEvent, combinedEvent);
}
inline bool UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers(::UnityEngine::Rendering::Universal::UniversalRenderer*  universalRenderer, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  rendererFeatures, int32_t  msaaSampleCount, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  combinedEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>  combinedMaskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"RequireRenderingLayers", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, universalRenderer, rendererFeatures, msaaSampleCount, combinedEvent, combinedMaskSize);
}
inline bool UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  rendererFeatures, ::UnityEngine::Rendering::Universal::RenderingMode  renderingMode, bool  accurateGbufferNormals, int32_t  msaaSampleCount, ::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>  combinedEvent, ::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>  combinedMaskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"RequireRenderingLayers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_Event>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RenderingLayerUtils_MaskSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rendererFeatures, renderingMode, accurateGbufferNormals, msaaSampleCount, combinedEvent, combinedMaskSize);
}
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties(::UnityEngine::Rendering::CommandBuffer*  cmd, ::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"SetupProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, maskSize);
}
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"SetupProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, maskSize);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::RenderingLayerUtils::GetFormat(::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"GetFormat", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, maskSize);
}
inline uint32_t UnityEngine::Rendering::Universal::RenderingLayerUtils::ToValidRenderingLayers(uint32_t  renderingLayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"ToValidRenderingLayers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, renderingLayers);
}
inline ::GlobalNamespace::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils::GetMaskSize(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"GetMaskSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderingLayerUtils_MaskSize>(nullptr, ___internal_method, bits);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingLayerUtils::GetBits(::GlobalNamespace::RenderingLayerUtils_MaskSize  maskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"GetBits", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, maskSize);
}
inline ::GlobalNamespace::RenderingLayerUtils_Event UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine(::GlobalNamespace::RenderingLayerUtils_Event  a, ::GlobalNamespace::RenderingLayerUtils_Event  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"Combine", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_Event>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_Event>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderingLayerUtils_Event>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine(::GlobalNamespace::RenderingLayerUtils_MaskSize  a, ::GlobalNamespace::RenderingLayerUtils_MaskSize  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                        {"Combine", {}, {::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>(), ::i2c::type_of<::GlobalNamespace::RenderingLayerUtils_MaskSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderingLayerUtils_MaskSize>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils::RenderingLayerUtils()   {
}
