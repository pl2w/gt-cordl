#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph_CompiledPassInfo.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_CompiledPassInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderGraph_CompiledPassInfo.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RenderGraph_CompiledPassInfo::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, int32_t)>(&::GlobalNamespace::RenderGraph_CompiledPassInfo::Reset)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb1af76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderGraph_CompiledPassInfo>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RenderGraph_CompiledPassInfo::Reset(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  pass, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RenderGraph_CompiledPassInfo>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pass, index);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resourceReleaseList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fence", ty: "::UnityEngine::Rendering::GraphicsFence", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableAsyncCompute", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "allowPassCulling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "needGraphicsFence", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "culledByRendererList", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasSideEffect", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableFoveatedRasterization", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasShadingRateImage", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasShadingRateStates", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderGraph_CompiledPassInfo::RenderGraph_CompiledPassInfo(::StringW  name, int32_t  index, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceCreateList, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  resourceReleaseList, ::UnityEngine::Rendering::GraphicsFence  fence, int32_t  refCount, int32_t  syncToPassIndex, int32_t  syncFromPassIndex, bool  enableAsyncCompute, bool  allowPassCulling, bool  needGraphicsFence, bool  culled, bool  culledByRendererList, bool  hasSideEffect, bool  enableFoveatedRasterization, bool  hasShadingRateImage, bool  hasShadingRateStates) noexcept  {
this->name = name;
this->index = index;
this->resourceCreateList = resourceCreateList;
this->resourceReleaseList = resourceReleaseList;
this->fence = fence;
this->refCount = refCount;
this->syncToPassIndex = syncToPassIndex;
this->syncFromPassIndex = syncFromPassIndex;
this->enableAsyncCompute = enableAsyncCompute;
this->allowPassCulling = allowPassCulling;
this->needGraphicsFence = needGraphicsFence;
this->culled = culled;
this->culledByRendererList = culledByRendererList;
this->hasSideEffect = hasSideEffect;
this->enableFoveatedRasterization = enableFoveatedRasterization;
this->hasShadingRateImage = hasShadingRateImage;
this->hasShadingRateStates = hasShadingRateStates;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderGraph_CompiledPassInfo::RenderGraph_CompiledPassInfo()   {
}
