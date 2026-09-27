#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData_MeshBuffers.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_MeshBuffers_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::*)(::Unity::Collections::Allocator)>(&::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x55ceb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::*)()>(&::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55cffd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers.DisposeIfLarge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>)>(&::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::DisposeIfLarge)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x55d003c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {"DisposeIfLarge", {}, {::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers.DisposeIfLarge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::*)()>(&::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::DisposeIfLarge)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x55cfeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {"DisposeIfLarge", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::_ctor(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
inline void GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::DisposeIfLarge(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  ls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {"DisposeIfLarge", {}, {::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ls);
}
inline void GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::DisposeIfLarge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>(),
                        {"DisposeIfLarge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "splitterOutput", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangles", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "solidVertices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "solidTriangles", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textVertices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textTriangles", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capturedState", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::ProcessedBuilderData_DrawingData_MeshBuffers(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  splitterOutput, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  vertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  triangles, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  solidVertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  solidTriangles, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  textVertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  textTriangles, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  capturedState, ::UnityEngine::Bounds  bounds) noexcept  {
this->splitterOutput = splitterOutput;
this->vertices = vertices;
this->triangles = triangles;
this->solidVertices = solidVertices;
this->solidTriangles = solidTriangles;
this->textVertices = textVertices;
this->textTriangles = textTriangles;
this->capturedState = capturedState;
this->bounds = bounds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers::ProcessedBuilderData_DrawingData_MeshBuffers()   {
}
