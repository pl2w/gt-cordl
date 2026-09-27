#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_BlitFilterMode_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_FullScreenGeometryType_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_BlitFilterMode_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_BlitMaterialParameters_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_FullScreenGeometryType_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.CanAddCopyPassMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CanAddCopyPassMSAA)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb1c3784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"CanAddCopyPassMSAA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.CanAddCopyPassMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CanAddCopyPassMSAA)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb1c3854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"CanAddCopyPassMSAA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.IsFramebufferFetchEmulationSupportedOnCurrentPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsFramebufferFetchEmulationSupportedOnCurrentPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1c38e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsFramebufferFetchEmulationSupportedOnCurrentPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.IsFramebufferFetchEmulationMSAASupportedOnCurrentPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsFramebufferFetchEmulationMSAASupportedOnCurrentPlatform)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb1c3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsFramebufferFetchEmulationMSAASupportedOnCurrentPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.IsFramebufferFetchSupportedOnCurrentPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsFramebufferFetchSupportedOnCurrentPlatform)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb1c38f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsFramebufferFetchSupportedOnCurrentPlatform", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddCopyPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::StringW, ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddCopyPass)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0xb1c39a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddCopyPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddCopyPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, int32_t, int32_t, int32_t, ::StringW, ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddCopyPass)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb1c3ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddCopyPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.CopyRenderFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CopyRenderFunc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb1c40a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"CopyRenderFunc", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.IsTextureXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsTextureXR)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb1c4120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsTextureXR", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddBlitPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Vector2, ::UnityEngine::Vector2, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::RenderGraphUtils_BlitFilterMode, ::StringW, ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0xb1c4268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddBlitPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RenderGraphUtils_BlitFilterMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.BlitRenderFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitRenderFunc)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xb1c48e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"BlitRenderFunc", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.AddBlitPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, ::StringW, ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0xb1c4be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddBlitPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils.BlitMaterialRenderFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitMaterialRenderFunc)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0xb1c55fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"BlitMaterialRenderFunc", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_PropertyBlock", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::getStaticF_s_PropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_PropertyBlock", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::setStaticF_s_BlitScaleBias(::UnityEngine::Vector4  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_BlitScaleBias", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::getStaticF_s_BlitScaleBias()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_BlitScaleBias", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>();
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CanAddCopyPassMSAA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"CanAddCopyPassMSAA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CanAddCopyPassMSAA(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>  sourceDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"CanAddCopyPassMSAA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceDesc);
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsFramebufferFetchEmulationSupportedOnCurrentPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsFramebufferFetchEmulationSupportedOnCurrentPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsFramebufferFetchEmulationMSAASupportedOnCurrentPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsFramebufferFetchEmulationMSAASupportedOnCurrentPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsFramebufferFetchSupportedOnCurrentPlatform(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsFramebufferFetchSupportedOnCurrentPlatform", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, tex);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddCopyPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::StringW  passName, /* [CallerFilePath] */ ::StringW  file, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddCopyPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, source, destination, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddCopyPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, int32_t  sourceSlice, int32_t  destinationSlice, int32_t  sourceMip, int32_t  destinationMip, ::StringW  passName, /* [CallerFilePath] */ ::StringW  file, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddCopyPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, source, destination, sourceSlice, destinationSlice, sourceMip, destinationMip, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::CopyRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  rgContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"CopyRenderFunc", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, rgContext);
}
inline bool UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::IsTextureXR(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>  destDesc, int32_t  sourceSlice, int32_t  destinationSlice, int32_t  numSlices, int32_t  numMips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"IsTextureXR", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, destDesc, sourceSlice, destinationSlice, numSlices, numMips);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceSlice, int32_t  destinationSlice, int32_t  numSlices, int32_t  sourceMip, int32_t  destinationMip, int32_t  numMips, ::GlobalNamespace::RenderGraphUtils_BlitFilterMode  filterMode, ::StringW  passName, /* [CallerFilePath] */ ::StringW  file, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddBlitPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RenderGraphUtils_BlitFilterMode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, source, destination, scale, offset, sourceSlice, destinationSlice, numSlices, sourceMip, destinationMip, numMips, filterMode, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"BlitRenderFunc", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::AddBlitPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters  blitParameters, ::StringW  passName, /* [CallerFilePath] */ ::StringW  file, /* [CallerLineNumber] */ int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"AddBlitPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, blitParameters, passName, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::BlitMaterialRenderFunc(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils*>(),
                        {"BlitMaterialRenderFunc", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils::RenderGraphUtils()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1c6568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._AddCopyPass_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddCopyPass_b__8_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb1c6570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {"<AddCopyPass>b__8_0", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._AddBlitPass_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__14_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb1c65dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {"<AddBlitPass>b__14_0", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c._AddBlitPass_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::*)(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__20_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb1c6640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {"<AddBlitPass>b__20_0", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*, "<>9", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*, "<>9", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__8_0", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__8_0", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9__14_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__14_0", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__14_0", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::setStaticF___9__20_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__20_0", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__20_0", ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddCopyPass_b__8_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {"<AddCopyPass>b__8_0", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__14_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {"<AddBlitPass>b__14_0", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::_AddBlitPass_b__20_0(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>(),
                        {"<AddBlitPass>b__20_0", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils___c::RenderGraphUtils___c()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1c64f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceTexturePropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTexturePropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceTexturePropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTexturePropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceTexturePropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTexturePropertyID = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destination = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_scale(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_offset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_shaderPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderPass;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_shaderPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderPass;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_shaderPass(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderPass = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlock;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlock = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_destinationSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numSlices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSlices;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numSlices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSlices;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_numSlices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numSlices = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceMip(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationMip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_destinationMip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_destinationMip(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numMips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numMips;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_numMips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numMips;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_numMips(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numMips = value;
}
constexpr ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_geometry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geometry;
}
constexpr ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_geometry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geometry;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_geometry(::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geometry = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlicePropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSlicePropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceSlicePropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSlicePropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceSlicePropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceSlicePropertyID = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMipPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMipPropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_sourceMipPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMipPropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_sourceMipPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMipPropertyID = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scaleBiasPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleBiasPropertyID;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_scaleBiasPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleBiasPropertyID;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_scaleBiasPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleBiasPropertyID = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_isXR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXR;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_get_isXR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXR;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::__cordl_internal_set_isXR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isXR = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitMaterialPassData::RenderGraphUtils_BlitMaterialPassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1c5c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destination = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_scale(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_offset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_sourceSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationSlice;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationSlice;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_destinationSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationSlice = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numSlices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSlices;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numSlices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numSlices;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_numSlices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numSlices = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceMip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_sourceMip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_sourceMip(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationMip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationMip;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_destinationMip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationMip;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_destinationMip(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationMip = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numMips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numMips;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_numMips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numMips;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_numMips(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numMips = value;
}
constexpr ::GlobalNamespace::RenderGraphUtils_BlitFilterMode& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_filterMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterMode;
}
constexpr ::GlobalNamespace::RenderGraphUtils_BlitFilterMode const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_filterMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterMode;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_filterMode(::GlobalNamespace::RenderGraphUtils_BlitFilterMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterMode = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_isXR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXR;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_get_isXR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXR;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::__cordl_internal_set_isXR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isXR = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_BlitPassData::RenderGraphUtils_BlitPassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::*)()>(&::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1c5c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_get_isMSAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMSAA;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_get_isMSAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMSAA;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_set_isMSAA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMSAA = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_get_force2DForXR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force2DForXR;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_get_force2DForXR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force2DForXR;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::__cordl_internal_set_force2DForXR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___force2DForXR = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData* UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtils_CopyPassData::RenderGraphUtils_CopyPassData()   {
}
