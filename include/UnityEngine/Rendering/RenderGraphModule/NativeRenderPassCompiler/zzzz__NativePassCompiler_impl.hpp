#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativePassCompiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_RenderGraphInputInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_def.hpp"
#include "GlobalNamespace/zzzz__RenderGraphCompilationCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_NativeCompilerProfileId_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_RenderGraphInputInfo_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassBreakAudit_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDebugParams_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTargetInfo_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubPassDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::GlobalNamespace::RenderGraphCompilationCache*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb1c7da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RenderGraphCompilationCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Finalize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb1c7ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb1c7fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Cleanup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb1c7f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::StringW, bool, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Initialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb1c803c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Compile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb1c816c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(bool)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb1c8108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetPassStatesForNativePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetPassStatesForNativePass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb1ca8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"SetPassStatesForNativePass", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.SetupContextData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetupContextData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb1c81ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"SetupContextData", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.BuildGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::BuildGraph)> {
  constexpr static std::size_t size = 0xf14;
  constexpr static std::size_t addrs = 0xb1c829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"BuildGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.CullUnusedRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::CullUnusedRenderPasses)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0xb1c91b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"CullUnusedRenderPasses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.TryMergeNativePasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::TryMergeNativePasses)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xb1c96b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"TryMergeNativePasses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.FindResourceUsageRanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::FindResourceUsageRanges)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0xb1c9a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"FindResourceUsageRanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.PrepareNativeRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::PrepareNativeRenderPasses)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb1ca7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"PrepareNativeRenderPasses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.IsGlobalTextureInPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsGlobalTextureInPass)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb1caf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"IsGlobalTextureInPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.DetectMemoryLessResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)()>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetectMemoryLessResources)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0xb1ca340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"DetectMemoryLessResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.IsSameNativeSubPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::SubPassDescriptor>, ::by_ref<::UnityEngine::Rendering::SubPassDescriptor>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsSameNativeSubPass)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb1cb09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"IsSameNativeSubPass", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteInitializeResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteInitializeResource)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0xb1cb248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteInitializeResource", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.DetermineLoadStoreActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetermineLoadStoreActions)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0xb1ca954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"DetermineLoadStoreActions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ValidateNativePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateNativePass)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb1cb7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ValidateNativePass", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ValidateAttachment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, int32_t, int32_t, int32_t, bool)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateAttachment)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb1cb924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ValidateAttachment", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteBeginRenderPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteBeginRenderPass)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0xb1cba9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteBeginRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteDestroyResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteDestroyResource)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xb1cc228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteDestroyResource", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteSetRandomWriteTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::CommandBuffer*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, int32_t, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, bool)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteSetRandomWriteTarget)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb1cc684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteSetRandomWriteTarget", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteGraphNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraphNode)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xb1cc888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteGraphNode", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.ExecuteGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraph)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0xb1ccba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteGraph", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakeAttachmentInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakeAttachmentInfo)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0xb1cd298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"MakeAttachmentInfo", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakePassBreakInfoMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassBreakInfoMessage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb1cd778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"MakePassBreakInfoMessage", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.MakePassMergeMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(Il2CppObject*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassMergeMessage)> {
  constexpr static std::size_t size = 0x9ec;
  constexpr static std::size_t addrs = 0xb1cd898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"MakePassMergeMessage", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.InjectSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::InjectSpaces)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb1ce284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"InjectSpaces", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler.GenerateNativeCompilerDebugData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>)>(&::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::GenerateNativeCompilerDebugData)> {
  constexpr static std::size_t size = 0x24a4;
  constexpr static std::size_t addrs = 0xb1ce3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"GenerateNativeCompilerDebugData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_graph(::GlobalNamespace::NativePassCompiler_RenderGraphInputInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr Il2CppObject*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_contextData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contextData;
}
constexpr Il2CppObject* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_contextData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contextData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_contextData(Il2CppObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contextData = value;
}
constexpr Il2CppObject*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_defaultContextData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultContextData;
}
constexpr Il2CppObject* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_defaultContextData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultContextData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_defaultContextData(Il2CppObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultContextData = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_previousCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_previousCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCommandBuffer;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_previousCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousCommandBuffer = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_toVisitPassIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toVisitPassIds;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_toVisitPassIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toVisitPassIds;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_toVisitPassIds(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toVisitPassIds = value;
}
constexpr ::GlobalNamespace::RenderGraphCompilationCache*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_CompilationCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompilationCache;
}
constexpr ::GlobalNamespace::RenderGraphCompilationCache* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_CompilationCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompilationCache;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CompilationCache = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_BeginRenderPassAttachments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeginRenderPassAttachments;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor> const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_m_BeginRenderPassAttachments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeginRenderPassAttachments;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_m_BeginRenderPassAttachments(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::AttachmentDescriptor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BeginRenderPassAttachments = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graphPassNamesForDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphPassNamesForDebug;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>* const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_get_graphPassNamesForDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphPassNamesForDebug;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::__cordl_internal_set_graphPassNamesForDebug(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphPassNamesForDebug = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::_ctor(::GlobalNamespace::RenderGraphCompilationCache*  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::RenderGraphCompilationCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Initialize(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*  renderPasses, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*  debugParams, ::StringW  debugName, bool  useCompilationCaching, int32_t  graphHash, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resources, renderPasses, debugParams, debugName, useCompilationCaching, graphHash, frameIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Compile(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Compile", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::Clear(bool  clearContextData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"Clear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearContextData);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetPassStatesForNativePass(int32_t  nativePassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"SetPassStatesForNativePass", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePassId);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::SetupContextData(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"SetupContextData", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::BuildGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"BuildGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::CullUnusedRenderPasses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"CullUnusedRenderPasses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::TryMergeNativePasses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"TryMergeNativePasses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::FindResourceUsageRanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"FindResourceUsageRanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::PrepareNativeRenderPasses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"PrepareNativeRenderPasses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsGlobalTextureInPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  pass, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"IsGlobalTextureInPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pass, handle);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetectMemoryLessResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"DetectMemoryLessResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::IsSameNativeSubPass(::by_ref<::UnityEngine::Rendering::SubPassDescriptor>  a, ::by_ref<::UnityEngine::Rendering::SubPassDescriptor>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"IsSameNativeSubPass", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubPassDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteInitializeResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteInitializeResource", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::DetermineLoadStoreActions(::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"DetermineLoadStoreActions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateNativePass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass, int32_t  width, int32_t  height, int32_t  depth, int32_t  samples, int32_t  attachmentCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ValidateNativePass", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePass, width, height, depth, samples, attachmentCount);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ValidateAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>  attRenderTargetInfo, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, int32_t  nativePassWidth, int32_t  nativePassHeight, int32_t  nativePassMSAASamples, bool  isVrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ValidateAttachment", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attRenderTargetInfo, resources, nativePassWidth, nativePassHeight, nativePassMSAASamples, isVrs);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteBeginRenderPass(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteBeginRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, nativePass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteDestroyResource(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteDestroyResource", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteSetRandomWriteTarget(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::CommandBuffer*>  cmd, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, int32_t  index, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle  resource, bool  preserveCounterValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteSetRandomWriteTarget", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, resources, index, resource, preserveCounterValue);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraphNode(::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteGraphNode", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::ExecuteGraph(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  rgContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*  resources, /* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>  passes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"ExecuteGraph", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rgContext, resources, passes);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo* UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakeAttachmentInfo(Il2CppObject*  ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass, int32_t  attachmentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"MakeAttachmentInfo", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>(nullptr, ___internal_method, ctx, nativePass, attachmentIndex);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassBreakInfoMessage(Il2CppObject*  ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>  nativePass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"MakePassBreakInfoMessage", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ctx, nativePass);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::MakePassMergeMessage(Il2CppObject*  ctx, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  pass, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>  prevPass, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit  mergeResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"MakePassMergeMessage", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassData>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassBreakAudit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ctx, pass, prevPass, mergeResult);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::InjectSpaces(::StringW  camelCaseString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"InjectSpaces", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, camelCaseString);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::GenerateNativeCompilerDebugData(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>  debugData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(),
                        {"GenerateNativeCompilerDebugData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugData);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::New_ctor(::GlobalNamespace::RenderGraphCompilationCache*  cache)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(cache));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler::NativePassCompiler()   {
}
