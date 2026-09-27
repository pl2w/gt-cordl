#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersionInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MBVersionInterface)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults_CoroutineResult;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
struct MBVersion_PipelineType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MBVersionInterface;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MBVersionInterface*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MBVersionInterface*, "DigitalOpus.MB.Core", "MBVersionInterface");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MBVersionInterface
class CORDL_TYPE MBVersionInterface {
public:
// Declarations
/// @brief Method AddBlendShapeFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddBlendShapeFrame(::UnityEngine::Mesh*  m, ::StringW  nm, float_t  wt, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts) ;

/// @brief Method ClearBlendShapes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearBlendShapes(::UnityEngine::Mesh*  m) ;

/// @brief Method CollectPropertyNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method DetectPipeline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::MBVersion_PipelineType DetectPipeline() ;

/// @brief Method DoSpecialRenderPipeline_TexturePackerFastSetup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject*  cameraGameObject) ;

/// @brief Method FindRuntimeMaterialsFromAddresses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResult, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete) ;

/// @brief Method FindSceneObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindSceneObjectsOfType(::System::Type*  t) ;

/// @brief Method GetActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetActive(::UnityEngine::GameObject*  go) ;

/// @brief Method GetBlendShapeFrameCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetBlendShapeFrameCount(::UnityEngine::Mesh*  m, int32_t  shapeIndex) ;

/// @brief Method GetBlendShapeFrameVertices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetBlendShapeFrameVertices(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts) ;

/// @brief Method GetBlendShapeFrameWeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetBlendShapeFrameWeight(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex) ;

/// @brief Method GetBones, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GetBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones) ;

/// @brief Method GetLightmapTilingOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer*  r) ;

/// @brief Method GetMeshUVChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityEngine::Vector2> GetMeshUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method GetProjectColorSpace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::ColorSpace GetProjectColorSpace() ;

/// @brief Method GetScaleInLightmap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetScaleInLightmap(::UnityEngine::MeshRenderer*  r) ;

/// @brief Method GraphicsUVStartsAtTop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GraphicsUVStartsAtTop() ;

/// @brief Method IsAssetInProject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsAssetInProject(::UnityEngine::Object*  target) ;

/// @brief Method IsMaterialKeywordValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsMaterialKeywordValid(::UnityEngine::Material*  mat, ::StringW  keyword) ;

/// @brief Method IsRunningAndMeshNotReadWriteable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh*  m) ;

/// @brief Method IsSwizzledNormalMapPlatform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSwizzledNormalMapPlatform() ;

/// @brief Method IsTextureReadable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsTextureReadable(::UnityEngine::Texture2D*  tex) ;

/// @brief Method IsTexture_sRGBgammaCorrected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D*  tex, bool  hint) ;

/// @brief Method Is_2017_1_OrNewer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Is_2017_1_OrNewer() ;

/// @brief Method Is_2018_3_OrNewer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Is_2018_3_OrNewer() ;

/// @brief Method MaxMeshVertexCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t MaxMeshVertexCount() ;

/// @brief Method MeshAssignUVChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MeshAssignUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::Vector2>  uvs) ;

/// @brief Method MeshClear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MeshClear(::UnityEngine::Mesh*  m, bool  t) ;

/// @brief Method OptimizeMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OptimizeMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method SetActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetActive(::UnityEngine::GameObject*  go, bool  isActive) ;

/// @brief Method SetActiveRecursively, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetActiveRecursively(::UnityEngine::GameObject*  go, bool  isActive) ;

/// @brief Method SetMeshIndexFormatAndClearMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh*  m, int32_t  numVerts, bool  vertices, bool  justClearTriangles) ;

/// @brief Method UnescapeURL, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW UnescapeURL(::StringW  url) ;

/// @brief Method version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW version() ;

// Ctor Parameters [CppParam { name: "", ty: "MBVersionInterface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MBVersionInterface(MBVersionInterface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
