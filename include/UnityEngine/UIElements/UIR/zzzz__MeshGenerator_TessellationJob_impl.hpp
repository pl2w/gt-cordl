#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_TessellationJob.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_TessellationJobParameters_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_TessellationJob_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_BorderParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeRectParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_TessellationJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_TessellationJob::*)(int32_t)>(&::GlobalNamespace::MeshGenerator_TessellationJob::Execute)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb7de380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_TessellationJob.DrawBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_TessellationJob::*)(::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::GlobalNamespace::MeshGenerator_BorderParams>)>(&::GlobalNamespace::MeshGenerator_TessellationJob::DrawBorder)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xb7de4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawBorder", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshGenerator_BorderParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_TessellationJob.DrawRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_TessellationJob::*)(::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>, ::UnityEngine::Texture*)>(&::GlobalNamespace::MeshGenerator_TessellationJob::DrawRectangle)> {
  constexpr static std::size_t size = 0x998;
  constexpr static std::size_t addrs = 0xb7deed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawRectangle", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_TessellationJob.DrawSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_TessellationJob::*)(::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>, ::UnityEngine::Sprite*)>(&::GlobalNamespace::MeshGenerator_TessellationJob::DrawSprite)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb7debe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawSprite", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_TessellationJob.DrawVectorImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_TessellationJob::*)(::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>, ::UnityEngine::UIElements::VectorImage*)>(&::GlobalNamespace::MeshGenerator_TessellationJob::DrawVectorImage)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xb7de784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawVectorImage", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshGenerator_TessellationJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T GlobalNamespace::MeshGenerator_TessellationJob::ExtractHandle(::System::IntPtr  handlePtr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                    {"ExtractHandle", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IntPtr>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, handlePtr);
}
inline void GlobalNamespace::MeshGenerator_TessellationJob::DrawBorder(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshGenerator_BorderParams>  borderParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawBorder", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshGenerator_BorderParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, borderParams);
}
inline void GlobalNamespace::MeshGenerator_TessellationJob::DrawRectangle(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::UnityEngine::Texture*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawRectangle", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, rectParams, tex);
}
inline void GlobalNamespace::MeshGenerator_TessellationJob::DrawSprite(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawSprite", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, rectParams, sprite);
}
inline void GlobalNamespace::MeshGenerator_TessellationJob::DrawVectorImage(::UnityEngine::UIElements::UnsafeMeshGenerationNode  node, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::UnityEngine::UIElements::VectorImage*  vi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_TessellationJob>(),
                        {"DrawVectorImage", {}, {::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, rectParams, vi);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::MeshGenerator_TessellationJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::MeshGenerator_TessellationJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "allocator", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "jobParameters", ty: "::Unity::Collections::NativeSlice_1<::GlobalNamespace::MeshGenerator_TessellationJobParameters>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshGenerator_TessellationJob::MeshGenerator_TessellationJob(::UnityEngine::UIElements::TempMeshAllocator  allocator, ::Unity::Collections::NativeSlice_1<::GlobalNamespace::MeshGenerator_TessellationJobParameters>  jobParameters) noexcept  {
this->allocator = allocator;
this->jobParameters = jobParameters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGenerator_TessellationJob::MeshGenerator_TessellationJob()   {
}
