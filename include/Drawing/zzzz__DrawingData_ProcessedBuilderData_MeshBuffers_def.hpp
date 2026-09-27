#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData_MeshBuffers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DrawingData_ProcessedBuilderData_MeshBuffers)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_MeshBuffers;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, "Drawing", "DrawingData/ProcessedBuilderData/MeshBuffers");
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer, UnityEngine.Bounds
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/ProcessedBuilderData/MeshBuffers
struct CORDL_TYPE ProcessedBuilderData_DrawingData_MeshBuffers {
public:
// Declarations
/// @brief Method Dispose, addr 0x55cffd4, size 0x68, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method DisposeIfLarge, addr 0x55cfeac, size 0x48, virtual false, abstract: false, final false
inline void DisposeIfLarge() ;

/// @brief Method DisposeIfLarge, addr 0x55d003c, size 0x70, virtual false, abstract: false, final false
static inline void DisposeIfLarge(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  ls) ;

/// @brief Method .ctor, addr 0x55ceb94, size 0x208, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::Allocator  allocator) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProcessedBuilderData_DrawingData_MeshBuffers() ;

// Ctor Parameters [CppParam { name: "splitterOutput", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "triangles", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "solidVertices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "solidTriangles", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "textVertices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "textTriangles", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "capturedState", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }]
constexpr ProcessedBuilderData_DrawingData_MeshBuffers(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  splitterOutput, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  vertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  triangles, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  solidVertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  solidTriangles, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  textVertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  textTriangles, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  capturedState, ::UnityEngine::Bounds  bounds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27730};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd8};

/// @brief Field splitterOutput, offset: 0x0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  splitterOutput;

/// @brief Field vertices, offset: 0x18, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  vertices;

/// @brief Field triangles, offset: 0x30, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  triangles;

/// @brief Field solidVertices, offset: 0x48, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  solidVertices;

/// @brief Field solidTriangles, offset: 0x60, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  solidTriangles;

/// @brief Field textVertices, offset: 0x78, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  textVertices;

/// @brief Field textTriangles, offset: 0x90, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  textTriangles;

/// @brief Field capturedState, offset: 0xa8, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  capturedState;

/// @brief Field bounds, offset: 0xc0, size: 0x18, def value: None
 ::UnityEngine::Bounds  bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, splitterOutput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, triangles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, solidVertices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, solidTriangles) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, textVertices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, textTriangles) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, capturedState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers, bounds) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
