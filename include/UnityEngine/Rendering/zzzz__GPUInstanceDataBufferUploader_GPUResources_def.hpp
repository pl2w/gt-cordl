#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader_GPUResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferUploader_GPUResources)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace GlobalNamespace {
struct GPUInstanceDataBufferUploader_GPUResources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, "UnityEngine.Rendering", "GPUInstanceDataBufferUploader/GPUResources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferUploader/GPUResources
struct CORDL_TYPE GPUInstanceDataBufferUploader_GPUResources {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CreateResources, addr 0xb1fcd4c, size 0x1dc, virtual false, abstract: false, final false
inline void CreateResources(int32_t  newInstanceCount, int32_t  sizePerInstance, int32_t  newComponentCounts, int32_t  validComponentIndicesCount) ;

/// @brief Method Dispose, addr 0xb1fd45c, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method LoadShaders, addr 0xb1fd3a0, size 0xbc, virtual false, abstract: false, final false
inline void LoadShaders(::UnityEngine::Rendering::GPUResidentDrawerResources*  resources) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceDataBufferUploader_GPUResources() ;

// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputComponentOffsets", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "validComponentIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None, comment: None }, CppParam { name: "kernelId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceDataByteSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ComponentCounts", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ValidComponentIndicesCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceDataBufferUploader_GPUResources(::UnityEngine::ComputeBuffer*  instanceData, ::UnityEngine::ComputeBuffer*  instanceIndices, ::UnityEngine::ComputeBuffer*  inputComponentOffsets, ::UnityEngine::ComputeBuffer*  validComponentIndices, ::UnityW<::UnityEngine::ComputeShader>  cs, int32_t  kernelId, int32_t  m_InstanceDataByteSize, int32_t  m_InstanceCount, int32_t  m_ComponentCounts, int32_t  m_ValidComponentIndicesCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26611};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field instanceData, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  instanceData;

/// @brief Field instanceIndices, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  instanceIndices;

/// @brief Field inputComponentOffsets, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  inputComponentOffsets;

/// @brief Field validComponentIndices, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  validComponentIndices;

/// @brief Field cs, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  cs;

/// @brief Field kernelId, offset: 0x28, size: 0x4, def value: None
 int32_t  kernelId;

/// @brief Field m_InstanceDataByteSize, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_InstanceDataByteSize;

/// @brief Field m_InstanceCount, offset: 0x30, size: 0x4, def value: None
 int32_t  m_InstanceCount;

/// @brief Field m_ComponentCounts, offset: 0x34, size: 0x4, def value: None
 int32_t  m_ComponentCounts;

/// @brief Field m_ValidComponentIndicesCount, offset: 0x38, size: 0x4, def value: None
 int32_t  m_ValidComponentIndicesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, instanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, instanceIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, inputComponentOffsets) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, validComponentIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, cs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, kernelId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, m_InstanceDataByteSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, m_InstanceCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, m_ComponentCounts) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources, m_ValidComponentIndicesCount) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPUInstanceDataBufferUploader_GPUResources) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
