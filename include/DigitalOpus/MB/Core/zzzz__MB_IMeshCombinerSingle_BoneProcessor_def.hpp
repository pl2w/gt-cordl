#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_IMeshCombinerSingle_BoneProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_IMeshCombinerSingle_BoneProcessor)
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle_MB_DynamicGameObject;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_IMeshCombinerSingle_BoneProcessor;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_IMeshCombinerSingle_BoneProcessor*, "DigitalOpus.MB.Core", "MB_IMeshCombinerSingle_BoneProcessor");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_IMeshCombinerSingle_BoneProcessor
class CORDL_TYPE MB_IMeshCombinerSingle_BoneProcessor {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddBonesToNewBonesArrayAndAdjustBWIndexes1, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddBonesToNewBonesArrayAndAdjustBWIndexes1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  vertsIdx) ;

/// @brief Method AllocateAndSetupSMRDataStructures, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AllocateAndSetupSMRDataStructures(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  toAddDGOs, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*>*  mbDynamicObjectsInCombinedMesh, int32_t  newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*  vertexAndTriangleProcessor) ;

/// @brief Method ApplySMRdataToMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ApplySMRdataToMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combiner, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method ApplySMRdataToMeshToBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ApplySMRdataToMeshToBuffer() ;

/// @brief Method BuildBoneIdx2DGOMapIfNecessary, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BuildBoneIdx2DGOMapIfNecessary(::ArrayW<int32_t>  _goToDelete) ;

/// @brief Method CopyBoneWeightsFromMeshForDGOsInCombined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyBoneWeightsFromMeshForDGOsInCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, int32_t  targVidx) ;

/// @brief Method CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(int32_t  totalDeleteVerts) ;

/// @brief Method CopyVertsNormsTansToBuffers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::ArrayW<::UnityEngine::Vector3>  nnorms, ::ArrayW<::UnityEngine::Vector4>  ntangs, ::ArrayW<::UnityEngine::Vector3>  nverts, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Vector3>  verts) ;

/// @brief Method CopyVertsNormsTansToBuffers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, int32_t  vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nnorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  ntangs, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  nverts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  verts) ;

/// @brief Method DB_CheckIntegrity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DB_CheckIntegrity() ;

/// @brief Method DisposeOfTemporarySMRData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DisposeOfTemporarySMRData() ;

/// @brief Method GetCachedSMRMeshData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetCachedSMRMeshData(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method GetNewBonesSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetNewBonesSize() ;

/// @brief Method InsertNewBonesIntoBonesArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InsertNewBonesIntoBonesArray() ;

/// @brief Method RemoveBonesForDgosWeAreDeleting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveBonesForDgosWeAreDeleting(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Method UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh() ;

/// @brief Method UpdateGameObjects_UpdateBWIndexes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateGameObjects_UpdateBWIndexes(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*  dgo) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "MB_IMeshCombinerSingle_BoneProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_IMeshCombinerSingle_BoneProcessor(MB_IMeshCombinerSingle_BoneProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22744};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
