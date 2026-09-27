#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer_IndirectDrawIndexedArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBuffer_IndirectDrawIndexedArgs)
// Forward declare root types
namespace GlobalNamespace {
struct GraphicsBuffer_IndirectDrawIndexedArgs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs, "UnityEngine", "GraphicsBuffer/IndirectDrawIndexedArgs");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.GraphicsBuffer/IndirectDrawIndexedArgs
struct CORDL_TYPE GraphicsBuffer_IndirectDrawIndexedArgs {
public:
// Declarations
 __declspec(property(put=set_baseVertexIndex)) uint32_t  baseVertexIndex;

 __declspec(property(put=set_indexCountPerInstance)) uint32_t  indexCountPerInstance;

 __declspec(property(get=get_instanceCount, put=set_instanceCount)) uint32_t  instanceCount;

 __declspec(property(put=set_startIndex)) uint32_t  startIndex;

 __declspec(property(get=get_startInstance, put=set_startInstance)) uint32_t  startInstance;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_instanceCount, addr 0xb59d0b0, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_instanceCount() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_startInstance, addr 0xb59d0d0, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_startInstance() ;

/// [CompilerGenerated]
/// @brief Method set_baseVertexIndex, addr 0xb59d0c8, size 0x8, virtual false, abstract: false, final false
inline void set_baseVertexIndex(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_indexCountPerInstance, addr 0xb59d0a8, size 0x8, virtual false, abstract: false, final false
inline void set_indexCountPerInstance(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_instanceCount, addr 0xb59d0b8, size 0x8, virtual false, abstract: false, final false
inline void set_instanceCount(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_startIndex, addr 0xb59d0c0, size 0x8, virtual false, abstract: false, final false
inline void set_startIndex(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_startInstance, addr 0xb59d0d8, size 0x8, virtual false, abstract: false, final false
inline void set_startInstance(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_IndirectDrawIndexedArgs() ;

// Ctor Parameters [CppParam { name: "_indexCountPerInstance_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_instanceCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_baseVertexIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startInstance_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphicsBuffer_IndirectDrawIndexedArgs(uint32_t  _indexCountPerInstance_k__BackingField, uint32_t  _instanceCount_k__BackingField, uint32_t  _startIndex_k__BackingField, uint32_t  _baseVertexIndex_k__BackingField, uint32_t  _startInstance_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field size offset 0xffffffff size 0x4
static constexpr int32_t  size{static_cast<int32_t>(0x14)};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <indexCountPerInstance>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _indexCountPerInstance_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <instanceCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
 uint32_t  _instanceCount_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <startIndex>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _startIndex_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <baseVertexIndex>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _baseVertexIndex_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <startInstance>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _startInstance_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs, _indexCountPerInstance_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs, _instanceCount_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs, _startIndex_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs, _baseVertexIndex_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs, _startInstance_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
