#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MBVersion)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MBVersionInterface;
}
namespace DigitalOpus::MB::Core {
class MBVersion__FindRuntimeMaterialsFromAddresses_d__38;
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
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
class MBVersion;
}
namespace DigitalOpus::MB::Core {
class MBVersion__FindRuntimeMaterialsFromAddresses_d__38;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MBVersion*);
MARK_REF_T(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MBVersion*, "DigitalOpus.MB.Core", "MBVersion");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38*, "DigitalOpus.MB.Core", "MBVersion/<FindRuntimeMaterialsFromAddresses>d__38");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MBVersion
class CORDL_TYPE MBVersion : public ::System::Object {
public:
// Declarations
using _FindRuntimeMaterialsFromAddresses_d__38 = ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38;

using PipelineType = ::GlobalNamespace::MBVersion_PipelineType;

/// @brief Field _MBVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__MBVersion, put=setStaticF__MBVersion)) ::DigitalOpus::MB::Core::MBVersionInterface*  _MBVersion;

/// @brief Method AddBlendShapeFrame, addr 0x9d807ac, size 0x134, virtual false, abstract: false, final false
static inline void AddBlendShapeFrame(::UnityEngine::Mesh*  m, ::StringW  nm, float_t  wt, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts) ;

/// @brief Method ClearBlendShapes, addr 0x9d806b8, size 0xf4, virtual false, abstract: false, final false
static inline void ClearBlendShapes(::UnityEngine::Mesh*  m) ;

/// @brief Method CollectPropertyNames, addr 0x9d80ce0, size 0x124, virtual false, abstract: false, final false
static inline void CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method DetectPipeline, addr 0x9d80fe4, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MBVersion_PipelineType DetectPipeline() ;

/// @brief Method DoSpecialRenderPipeline_TexturePackerFastSetup, addr 0x9d80e04, size 0xf4, virtual false, abstract: false, final false
static inline void DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject*  cameraGameObject) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MBVersion::<FindRuntimeMaterialsFromAddresses>d__38))]
/// @brief Method FindRuntimeMaterialsFromAddresses, addr 0x9d749ec, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResult, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete) ;

/// @brief Method FindSceneObjectsOfType, addr 0x9d7f98c, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindSceneObjectsOfType(::System::Type*  t) ;

/// @brief Method GetActive, addr 0x9d7f690, size 0xf4, virtual false, abstract: false, final false
static inline bool GetActive(::UnityEngine::GameObject*  go) ;

/// @brief Method GetBlendShapeFrameCount, addr 0x9d80374, size 0x104, virtual false, abstract: false, final false
static inline int32_t GetBlendShapeFrameCount(::UnityEngine::Mesh*  m, int32_t  shapeIndex) ;

/// @brief Method GetBlendShapeFrameVertices, addr 0x9d80584, size 0x134, virtual false, abstract: false, final false
static inline void GetBlendShapeFrameVertices(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts) ;

/// @brief Method GetBlendShapeFrameWeight, addr 0x9d80478, size 0x10c, virtual false, abstract: false, final false
static inline float_t GetBlendShapeFrameWeight(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex) ;

/// @brief Method GetBones, addr 0x9d80078, size 0x104, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GetBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones) ;

/// @brief Method GetLightmapTilingOffset, addr 0x9d7ff84, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer*  r) ;

/// @brief Method GetMeshChannel, addr 0x9d7fb74, size 0x10c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> GetMeshChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method GetProjectColorSpace, addr 0x9d80ef8, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::ColorSpace GetProjectColorSpace() ;

/// @brief Method GetScaleInLightmap, addr 0x9d7fc80, size 0xf4, virtual false, abstract: false, final false
static inline float_t GetScaleInLightmap(::UnityEngine::MeshRenderer*  r) ;

/// @brief Method GraphicsUVStartsAtTop, addr 0x9d72024, size 0xec, virtual false, abstract: false, final false
static inline bool GraphicsUVStartsAtTop() ;

/// @brief Method IsAssetInProject, addr 0x9d811c4, size 0xf4, virtual false, abstract: false, final false
static inline bool IsAssetInProject(::UnityEngine::Object*  target) ;

/// @brief Method IsMaterialKeywordValid, addr 0x9d8017c, size 0x104, virtual false, abstract: false, final false
static inline bool IsMaterialKeywordValid(::UnityEngine::Material*  mat, ::StringW  keyword) ;

/// @brief Method IsRunningAndMeshNotReadWriteable, addr 0x9d7fa80, size 0xf4, virtual false, abstract: false, final false
static inline bool IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh*  m) ;

/// @brief Method IsSwizzledNormalMapPlatform, addr 0x9d7048c, size 0xec, virtual false, abstract: false, final false
static inline bool IsSwizzledNormalMapPlatform() ;

/// @brief Method IsTextureReadable, addr 0x9d80bec, size 0xf4, virtual false, abstract: false, final false
static inline bool IsTextureReadable(::UnityEngine::Texture2D*  tex) ;

/// @brief Method IsTexture_sRGBgammaCorrected, addr 0x9d80ae8, size 0x104, virtual false, abstract: false, final false
static inline bool IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D*  tex, bool  hint) ;

/// @brief Method IsUsingAddressables, addr 0x9d79554, size 0x138, virtual false, abstract: false, final false
static inline bool IsUsingAddressables() ;

/// @brief Method Is_2017_1_OrNewer, addr 0x9d7f5a4, size 0xec, virtual false, abstract: false, final false
static inline bool Is_2017_1_OrNewer() ;

/// @brief Method Is_2018_3_OrNewer, addr 0x9d7f4b8, size 0xec, virtual false, abstract: false, final false
static inline bool Is_2018_3_OrNewer() ;

/// @brief Method MaxMeshVertexCount, addr 0x9d808e0, size 0xec, virtual false, abstract: false, final false
static inline int32_t MaxMeshVertexCount() ;

/// @brief Method MeshAssignUVChannel, addr 0x9d7fe78, size 0x10c, virtual false, abstract: false, final false
static inline void MeshAssignUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::Vector2>  uvs) ;

/// @brief Method MeshClear, addr 0x9d7fd74, size 0x104, virtual false, abstract: false, final false
static inline void MeshClear(::UnityEngine::Mesh*  m, bool  t) ;

static inline ::DigitalOpus::MB::Core::MBVersion* New_ctor() ;

/// @brief Method OptimizeMesh, addr 0x9d80280, size 0xf4, virtual false, abstract: false, final false
static inline void OptimizeMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method SetActive, addr 0x9d7f784, size 0x104, virtual false, abstract: false, final false
static inline void SetActive(::UnityEngine::GameObject*  go, bool  isActive) ;

/// @brief Method SetActiveRecursively, addr 0x9d7f888, size 0x104, virtual false, abstract: false, final false
static inline void SetActiveRecursively(::UnityEngine::GameObject*  go, bool  isActive) ;

/// @brief Method SetMeshIndexFormatAndClearMesh, addr 0x9d809cc, size 0x11c, virtual false, abstract: false, final false
static inline void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh*  m, int32_t  numVerts, bool  vertices, bool  justClearTriangles) ;

/// @brief Method UnescapeURL, addr 0x9d810d0, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW UnescapeURL(::StringW  url) ;

/// @brief Method _CreateMBVersionConcrete, addr 0x9d7f32c, size 0xa4, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::MBVersionInterface* _CreateMBVersionConcrete() ;

/// @brief Method .ctor, addr 0x9d812e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DigitalOpus::MB::Core::MBVersionInterface* getStaticF__MBVersion() ;

static inline void setStaticF__MBVersion(::DigitalOpus::MB::Core::MBVersionInterface*  value) ;

/// @brief Method version, addr 0x9d7f3d0, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MBVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MBVersion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MBVersion(MBVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MBVersion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MBVersion(MBVersion const& ) = delete;

/// @brief Field MB_USING_HDRP offset 0xffffffff size 0x8
static constexpr ::ConstString  MB_USING_HDRP{u"MB_USING_HDRP"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MBVersion) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MBVersion/<FindRuntimeMaterialsFromAddresses>d__38
class CORDL_TYPE MBVersion__FindRuntimeMaterialsFromAddresses_d__38 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field isComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete;

/// @brief Field textureBakeResult, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureBakeResult, put=__cordl_internal_set_textureBakeResult)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResult;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d812ec, size 0x148, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d81434, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d8143c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d81474, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d812e8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* const& __cordl_internal_get_isComplete() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*& __cordl_internal_get_isComplete() ;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& __cordl_internal_get_textureBakeResult() const;

constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& __cordl_internal_get_textureBakeResult() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_isComplete(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  value) ;

constexpr void __cordl_internal_set_textureBakeResult(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d812b8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MBVersion__FindRuntimeMaterialsFromAddresses_d__38() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MBVersion__FindRuntimeMaterialsFromAddresses_d__38", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MBVersion__FindRuntimeMaterialsFromAddresses_d__38(MBVersion__FindRuntimeMaterialsFromAddresses_d__38 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MBVersion__FindRuntimeMaterialsFromAddresses_d__38", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MBVersion__FindRuntimeMaterialsFromAddresses_d__38(MBVersion__FindRuntimeMaterialsFromAddresses_d__38 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22610};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field textureBakeResult, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  ___textureBakeResult;

/// @brief Field isComplete, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  ___isComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38, ___textureBakeResult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38, ___isComplete) == 0x28, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MBVersion__FindRuntimeMaterialsFromAddresses_d__38) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
