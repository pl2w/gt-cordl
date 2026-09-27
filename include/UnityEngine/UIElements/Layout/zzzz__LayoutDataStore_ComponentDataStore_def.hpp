#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore_ComponentDataStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDataStore_ComponentDataStore)
namespace GlobalNamespace {
struct LayoutDataStore_Chunk;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
struct LayoutDataStore_ComponentDataStore;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutDataStore_ComponentDataStore);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutDataStore_ComponentDataStore, "UnityEngine.UIElements.Layout", "LayoutDataStore/ComponentDataStore");
// Dependencies Unity.Collections.Allocator
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore/ComponentDataStore
struct CORDL_TYPE LayoutDataStore_ComponentDataStore {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb801a7c, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetComponentDataPtr, addr 0xb801b60, size 0x34, virtual false, abstract: false, final false
inline uint8_t* GetComponentDataPtr(int32_t  index) ;

/// @brief Method ResizeCapacity, addr 0xb801e78, size 0x154, virtual false, abstract: false, final false
inline void ResizeCapacity(int32_t  capacity) ;

/// @brief Method .ctor, addr 0xb801908, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::Unity::Collections::Allocator  allocator) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LayoutDataStore_ComponentDataStore() ;

// Ctor Parameters [CppParam { name: "Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentCountPerChunk", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ChunkCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Chunks", ty: "::GlobalNamespace::LayoutDataStore_Chunk*", modifiers: "", def_value: None, comment: None }]
constexpr LayoutDataStore_ComponentDataStore(::Unity::Collections::Allocator  Allocator, int32_t  Size, int32_t  ComponentCountPerChunk, int32_t  ChunkCount, ::GlobalNamespace::LayoutDataStore_Chunk*  m_Chunks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Allocator, offset: 0x0, size: 0x4, def value: None
 ::Unity::Collections::Allocator  Allocator;

/// @brief Field Size, offset: 0x4, size: 0x4, def value: None
 int32_t  Size;

/// @brief Field ComponentCountPerChunk, offset: 0x8, size: 0x4, def value: None
 int32_t  ComponentCountPerChunk;

/// @brief Field ChunkCount, offset: 0xc, size: 0x4, def value: None
 int32_t  ChunkCount;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Chunks, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::LayoutDataStore_Chunk*  m_Chunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutDataStore_ComponentDataStore, Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_ComponentDataStore, Size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_ComponentDataStore, ComponentCountPerChunk) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_ComponentDataStore, ChunkCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LayoutDataStore_ComponentDataStore, m_Chunks) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutDataStore_ComponentDataStore) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
