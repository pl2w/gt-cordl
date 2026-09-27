#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler_NativeCompilerProfileId.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_NativeCompilerProfileId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NativePassCompiler_NativeCompilerProfileId(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NativePassCompiler_NativeCompilerProfileId()   {
}
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_PrepareNativePass{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_SetupContextData{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_BuildGraph{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_CullNodes{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_TryMergeNativePasses{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_FindResourceUsageRanges{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_DetectMemorylessResources{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_ExecuteInitializeResources{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_ExecuteBeginRenderpassCommand{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::NativePassCompiler_NativeCompilerProfileId  GlobalNamespace::NativePassCompiler_NativeCompilerProfileId::NRPRGComp_ExecuteDestroyResources{static_cast<int32_t>(0x9)};
