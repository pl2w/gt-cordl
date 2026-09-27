#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersionConcrete.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MBVersionConcrete)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34;
}
namespace DigitalOpus::MB::Core {
class MBVersionConcrete___c;
}
namespace DigitalOpus::MB::Core {
class MBVersionInterface;
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
template<typename T>
class Predicate_1;
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
class MBVersionConcrete;
}
namespace DigitalOpus::MB::Core {
class MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34;
}
namespace DigitalOpus::MB::Core {
class MBVersionConcrete___c;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MBVersionConcrete*);
MARK_REF_T(::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*);
MARK_REF_T(::DigitalOpus::MB::Core::MBVersionConcrete___c*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MBVersionConcrete*, "DigitalOpus.MB.Core", "MBVersionConcrete");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*, "DigitalOpus.MB.Core", "MBVersionConcrete/<FindRuntimeMaterialsFromAddresses>d__34");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MBVersionConcrete___c*, "DigitalOpus.MB.Core", "MBVersionConcrete/<>c");
// Dependencies System.Object, UnityEngine.Vector2
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MBVersionConcrete
class CORDL_TYPE MBVersionConcrete : public ::System::Object {
public:
// Declarations
using _FindRuntimeMaterialsFromAddresses_d__34 = ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34;

using __c = ::DigitalOpus::MB::Core::MBVersionConcrete___c;

/// @brief Field _HALF_UV, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__HALF_UV, put=__cordl_internal_set__HALF_UV)) ::UnityEngine::Vector2  _HALF_UV;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MBVersionInterface"
constexpr operator  ::DigitalOpus::MB::Core::MBVersionInterface*() noexcept;

/// @brief Method AddBlendShapeFrame, addr 0x9ded25c, size 0x28, virtual true, abstract: false, final true
inline void AddBlendShapeFrame(::UnityEngine::Mesh*  m, ::StringW  nm, float_t  wt, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts) ;

/// @brief Method ClearBlendShapes, addr 0x9ded244, size 0x18, virtual true, abstract: false, final true
inline void ClearBlendShapes(::UnityEngine::Mesh*  m) ;

/// @brief Method CollectPropertyNames, addr 0x9ded39c, size 0x788, virtual true, abstract: false, final true
inline bool CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method DetectPipeline, addr 0x9dedb24, size 0x18c, virtual true, abstract: false, final true
inline ::GlobalNamespace::MBVersion_PipelineType DetectPipeline() ;

/// @brief Method DoSpecialRenderPipeline_TexturePackerFastSetup, addr 0x9dedcb0, size 0x4, virtual true, abstract: false, final true
inline void DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject*  cameraGameObject) ;

/// [IteratorStateMachine(typeof(DigitalOpus.MB.Core.MBVersionConcrete::<FindRuntimeMaterialsFromAddresses>d__34))]
/// @brief Method FindRuntimeMaterialsFromAddresses, addr 0x9dedeb8, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults*  texBakeResult, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete) ;

/// @brief Method FindSceneObjectsOfType, addr 0x9dec544, size 0x58, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Object>> FindSceneObjectsOfType(::System::Type*  t) ;

/// @brief Method GetActive, addr 0x9dec4f4, size 0x18, virtual true, abstract: false, final true
inline bool GetActive(::UnityEngine::GameObject*  go) ;

/// @brief Method GetBlendShapeFrameCount, addr 0x9ded1dc, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetBlendShapeFrameCount(::UnityEngine::Mesh*  m, int32_t  shapeIndex) ;

/// @brief Method GetBlendShapeFrameVertices, addr 0x9ded218, size 0x2c, virtual true, abstract: false, final true
inline void GetBlendShapeFrameVertices(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts) ;

/// @brief Method GetBlendShapeFrameWeight, addr 0x9ded1f8, size 0x20, virtual true, abstract: false, final true
inline float_t GetBlendShapeFrameWeight(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex) ;

/// @brief Method GetBones, addr 0x9ded014, size 0x1c8, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GetBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones) ;

/// @brief Method GetLightmapTilingOffset, addr 0x9decffc, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer*  r) ;

/// @brief Method GetMeshUV1s, addr 0x9dec72c, size 0x2b0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetMeshUV1s(::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method GetMeshUVChannel, addr 0x9dec9dc, size 0x400, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Vector2> GetMeshUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method GetProjectColorSpace, addr 0x9dedcb4, size 0x1f8, virtual true, abstract: false, final true
inline ::UnityEngine::ColorSpace GetProjectColorSpace() ;

/// @brief Method GetScaleInLightmap, addr 0x9ded394, size 0x8, virtual true, abstract: false, final true
inline float_t GetScaleInLightmap(::UnityEngine::MeshRenderer*  r) ;

/// @brief Method GraphicsUVStartsAtTop, addr 0x9ded354, size 0x8, virtual true, abstract: false, final true
inline bool GraphicsUVStartsAtTop() ;

/// @brief Method IsAssetInProject, addr 0x9dedf4c, size 0x8, virtual true, abstract: false, final true
inline bool IsAssetInProject(::UnityEngine::Object*  target) ;

/// @brief Method IsMaterialKeywordValid, addr 0x9dec630, size 0x78, virtual true, abstract: false, final true
inline bool IsMaterialKeywordValid(::UnityEngine::Material*  mat, ::StringW  keyword) ;

/// @brief Method IsRunningAndMeshNotReadWriteable, addr 0x9dec6ac, size 0x80, virtual true, abstract: false, final true
inline bool IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh*  m) ;

/// @brief Method IsSwizzledNormalMapPlatform, addr 0x9dec59c, size 0x94, virtual true, abstract: false, final true
inline bool IsSwizzledNormalMapPlatform() ;

/// @brief Method IsTextureReadable, addr 0x9ded374, size 0x20, virtual true, abstract: false, final true
inline bool IsTextureReadable(::UnityEngine::Texture2D*  tex) ;

/// @brief Method IsTexture_sRGBgammaCorrected, addr 0x9ded35c, size 0x18, virtual true, abstract: false, final true
inline bool IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D*  tex, bool  hint) ;

/// @brief Method Is_2017_1_OrNewer, addr 0x9dec4e4, size 0x8, virtual true, abstract: false, final true
inline bool Is_2017_1_OrNewer() ;

/// @brief Method Is_2018_3_OrNewer, addr 0x9dec4ec, size 0x8, virtual true, abstract: false, final true
inline bool Is_2018_3_OrNewer() ;

/// @brief Method MaxMeshVertexCount, addr 0x9ded284, size 0x8, virtual true, abstract: false, final true
inline int32_t MaxMeshVertexCount() ;

/// @brief Method MeshAssignUVChannel, addr 0x9decdf8, size 0x204, virtual true, abstract: false, final true
inline void MeshAssignUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::Vector2>  uvs) ;

/// @brief Method MeshClear, addr 0x9decddc, size 0x1c, virtual true, abstract: false, final true
inline void MeshClear(::UnityEngine::Mesh*  m, bool  t) ;

static inline ::DigitalOpus::MB::Core::MBVersionConcrete* New_ctor() ;

/// @brief Method OptimizeMesh, addr 0x9dec6a8, size 0x4, virtual true, abstract: false, final true
inline void OptimizeMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method SetActive, addr 0x9dec50c, size 0x1c, virtual true, abstract: false, final true
inline void SetActive(::UnityEngine::GameObject*  go, bool  isActive) ;

/// @brief Method SetActiveRecursively, addr 0x9dec528, size 0x1c, virtual true, abstract: false, final true
inline void SetActiveRecursively(::UnityEngine::GameObject*  go, bool  isActive) ;

/// @brief Method SetMeshIndexFormatAndClearMesh, addr 0x9ded28c, size 0xc8, virtual true, abstract: false, final true
inline void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh*  m, int32_t  numVerts, bool  vertices, bool  justClearTriangles) ;

/// @brief Method UnescapeURL, addr 0x9dedeac, size 0xc, virtual true, abstract: false, final true
inline ::StringW UnescapeURL(::StringW  url) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__HALF_UV() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__HALF_UV() ;

constexpr void __cordl_internal_set__HALF_UV(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x9dedf54, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MBVersionInterface"
constexpr ::DigitalOpus::MB::Core::MBVersionInterface* i___DigitalOpus__MB__Core__MBVersionInterface() noexcept;

/// @brief Method version, addr 0x9dec4a4, size 0x40, virtual true, abstract: false, final true
inline ::StringW version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MBVersionConcrete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MBVersionConcrete", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MBVersionConcrete(MBVersionConcrete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MBVersionConcrete", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MBVersionConcrete(MBVersionConcrete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22837};

/// @brief Field _HALF_UV, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____HALF_UV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MBVersionConcrete, ____HALF_UV) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MBVersionConcrete) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MBVersionConcrete/<FindRuntimeMaterialsFromAddresses>d__34
class CORDL_TYPE MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field isComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dee0e0, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dee1e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dee1e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dee220, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dee0dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* const& __cordl_internal_get_isComplete() const;

constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*& __cordl_internal_get_isComplete() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_isComplete(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dedf24, size 0x28, virtual false, abstract: false, final false
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
constexpr MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34(MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34(MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22836};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field isComplete, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  ___isComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34, ___isComplete) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MBVersionConcrete/<>c
class CORDL_TYPE MBVersionConcrete___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::DigitalOpus::MB::Core::MBVersionConcrete___c*  __9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  __9__29_0;

/// @brief Field <>9__29_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_1, put=setStaticF___9__29_1)) ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  __9__29_1;

/// @brief Field <>9__29_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_2, put=setStaticF___9__29_2)) ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  __9__29_2;

static inline ::DigitalOpus::MB::Core::MBVersionConcrete___c* New_ctor() ;

/// @brief Method <CollectPropertyNames>b__29_0, addr 0x9dedfd4, size 0x58, virtual false, abstract: false, final false
inline bool _CollectPropertyNames_b__29_0(::DigitalOpus::MB::Core::ShaderTextureProperty*  pn) ;

/// @brief Method <CollectPropertyNames>b__29_1, addr 0x9dee02c, size 0x58, virtual false, abstract: false, final false
inline bool _CollectPropertyNames_b__29_1(::DigitalOpus::MB::Core::ShaderTextureProperty*  pn) ;

/// @brief Method <CollectPropertyNames>b__29_2, addr 0x9dee084, size 0x58, virtual false, abstract: false, final false
inline bool _CollectPropertyNames_b__29_2(::DigitalOpus::MB::Core::ShaderTextureProperty*  pn) ;

/// @brief Method .ctor, addr 0x9dedfcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DigitalOpus::MB::Core::MBVersionConcrete___c* getStaticF___9() ;

static inline ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* getStaticF___9__29_0() ;

static inline ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* getStaticF___9__29_1() ;

static inline ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* getStaticF___9__29_2() ;

static inline void setStaticF___9(::DigitalOpus::MB::Core::MBVersionConcrete___c*  value) ;

static inline void setStaticF___9__29_0(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

static inline void setStaticF___9__29_1(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

static inline void setStaticF___9__29_2(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MBVersionConcrete___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MBVersionConcrete___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MBVersionConcrete___c(MBVersionConcrete___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MBVersionConcrete___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MBVersionConcrete___c(MBVersionConcrete___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MBVersionConcrete___c) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
