#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_LoadState_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAcousticGeometry)
namespace GlobalNamespace {
class ColliderGatherer_MetaXRAcousticGeometry___c;
}
namespace GlobalNamespace {
class MeshGatherer_MetaXRAcousticGeometry___c;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_ColliderGatherer;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_IGatherer;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_ITransformVisitor;
}
namespace GlobalNamespace {
struct MetaXRAcousticGeometry_LoadState;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_MeshGatherer;
}
namespace GlobalNamespace {
struct MetaXRAcousticGeometry_MeshMaterial;
}
namespace GlobalNamespace {
struct MetaXRAcousticGeometry_TerrainMaterial;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry__LoadGeometryAsync_d__92;
}
namespace GlobalNamespace {
struct MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry___c;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry___c__DisplayClass93_0;
}
namespace GlobalNamespace {
class MetaXRAcousticMaterial;
}
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace Meta::XR::Acoustics {
class IMaterialDataProvider;
}
namespace Meta::XR::Acoustics {
struct MeshGroup;
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
class Action;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LODGroup;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderGatherer_MetaXRAcousticGeometry___c;
}
namespace GlobalNamespace {
class MeshGatherer_MetaXRAcousticGeometry___c;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_ColliderGatherer;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_IGatherer;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_ITransformVisitor;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry_MeshGatherer;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry__LoadGeometryAsync_d__92;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry___c;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry___c__DisplayClass93_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*);
MARK_REF_T(::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry___c*);
MARK_REF_T(::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*, "", "MetaXRAcousticGeometry/ColliderGatherer/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*, "", "MetaXRAcousticGeometry/MeshGatherer/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry*, "", "MetaXRAcousticGeometry");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*, "", "MetaXRAcousticGeometry/ColliderGatherer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*, "", "MetaXRAcousticGeometry/IGatherer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*, "", "MetaXRAcousticGeometry/ITransformVisitor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*, "", "MetaXRAcousticGeometry/MeshGatherer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*, "", "MetaXRAcousticGeometry/<LoadGeometryAsync>d__92");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry___c*, "", "MetaXRAcousticGeometry/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*, "", "MetaXRAcousticGeometry/<>c__DisplayClass93_0");
// Dependencies Meta.XR.Acoustics.MeshFlags, MetaXRAcousticGeometry::LoadState, System.IntPtr, UnityEngine.Color, UnityEngine.Hash128, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry
class CORDL_TYPE MetaXRAcousticGeometry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColliderGatherer = ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer;

using IGatherer = ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer;

using ITransformVisitor = ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor;

using LoadState = ::GlobalNamespace::MetaXRAcousticGeometry_LoadState;

using MeshGatherer = ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer;

using MeshMaterial = ::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial;

using TerrainMaterial = ::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial;

using _LoadGeometryAsync_d__92 = ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92;

using _LoadGeometryFromMemory_d__93 = ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93;

using __c = ::GlobalNamespace::MetaXRAcousticGeometry___c;

using __c__DisplayClass93_0 = ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0;

/// @brief Field AUTO_VALIDATE, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AUTO_VALIDATE, put=setStaticF_AUTO_VALIDATE)) bool  AUTO_VALIDATE;

 __declspec(property(get=get_AbsoluteFilePath, put=set_AbsoluteFilePath)) ::StringW  AbsoluteFilePath;

 __declspec(property(get=get_EnableDiffraction, put=set_EnableDiffraction)) bool  EnableDiffraction;

 __declspec(property(get=get_EnableSimplification, put=set_EnableSimplification)) bool  EnableSimplification;

/// @brief Field EnabledGeometryCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EnabledGeometryCount, put=setStaticF_EnabledGeometryCount)) int32_t  EnabledGeometryCount;

 __declspec(property(get=get_ExcludeTags)) ::ArrayW<::StringW>  ExcludeTags;

/// @brief Field FileEnabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_FileEnabled, put=__cordl_internal_set_FileEnabled)) bool  FileEnabled;

 __declspec(property(get=get_FlagLength, put=set_FlagLength)) float_t  FlagLength;

/// @brief Field Flags, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::Meta::XR::Acoustics::MeshFlags  Flags;

/// @brief Field HierarchyHash, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_HierarchyHash, put=__cordl_internal_set_HierarchyHash)) ::UnityEngine::Hash128  HierarchyHash;

/// @brief Field IncludeChildMeshes, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_IncludeChildMeshes, put=__cordl_internal_set_IncludeChildMeshes)) bool  IncludeChildMeshes;

 __declspec(property(get=get_IsLoaded)) bool  IsLoaded;

 __declspec(property(get=get_LodSelection, put=set_LodSelection)) int32_t  LodSelection;

 __declspec(property(get=get_MaxSimplifyError, put=set_MaxSimplifyError)) float_t  MaxSimplifyError;

 __declspec(property(get=get_MinDiffractionEdgeAngle, put=set_MinDiffractionEdgeAngle)) float_t  MinDiffractionEdgeAngle;

 __declspec(property(get=get_MinDiffractionEdgeLength, put=set_MinDiffractionEdgeLength)) float_t  MinDiffractionEdgeLength;

/// @brief Field OnAnyGeometryEnabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAnyGeometryEnabled, put=setStaticF_OnAnyGeometryEnabled)) ::System::Action*  OnAnyGeometryEnabled;

 __declspec(property(get=get_OverrideExcludeTags, put=set_OverrideExcludeTags)) ::ArrayW<::StringW>  OverrideExcludeTags;

 __declspec(property(get=get_OverrideExcludeTagsEnabled, put=set_OverrideExcludeTagsEnabled)) bool  OverrideExcludeTagsEnabled;

 __declspec(property(get=get_RelativeFilePath)) ::StringW  RelativeFilePath;

 __declspec(property(get=get_UseColliders, put=set_UseColliders)) bool  UseColliders;

 __declspec(property(get=get_VertexCount)) int32_t  VertexCount;

/// @brief Field flagLength, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flagLength, put=__cordl_internal_set_flagLength)) float_t  flagLength;

/// @brief Field geometryHandle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_geometryHandle, put=__cordl_internal_set_geometryHandle)) ::System::IntPtr  geometryHandle;

/// @brief Field loadState_, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadState_, put=__cordl_internal_set_loadState_)) ::GlobalNamespace::MetaXRAcousticGeometry_LoadState  loadState_;

/// @brief Field lodSelection, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lodSelection, put=__cordl_internal_set_lodSelection)) int32_t  lodSelection;

/// @brief Field materialColors, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialColors, put=__cordl_internal_set_materialColors)) ::ArrayW<::UnityEngine::Color>  materialColors;

/// @brief Field maxSimplifyError, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSimplifyError, put=__cordl_internal_set_maxSimplifyError)) float_t  maxSimplifyError;

/// @brief Field minDiffractionEdgeAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDiffractionEdgeAngle, put=__cordl_internal_set_minDiffractionEdgeAngle)) float_t  minDiffractionEdgeAngle;

/// @brief Field minDiffractionEdgeLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDiffractionEdgeLength, put=__cordl_internal_set_minDiffractionEdgeLength)) float_t  minDiffractionEdgeLength;

/// @brief Field overrideExcludeTags, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideExcludeTags, put=__cordl_internal_set_overrideExcludeTags)) ::ArrayW<::StringW>  overrideExcludeTags;

/// @brief Field overrideExcludeTagsEnabled, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideExcludeTagsEnabled, put=__cordl_internal_set_overrideExcludeTagsEnabled)) bool  overrideExcludeTagsEnabled;

/// @brief Field relativeFilePath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_relativeFilePath, put=__cordl_internal_set_relativeFilePath)) ::StringW  relativeFilePath;

/// @brief Field terrainDecimation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_terrainDecimation, put=setStaticF_terrainDecimation)) int32_t  terrainDecimation;

/// @brief Field useColliders, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_useColliders, put=__cordl_internal_set_useColliders)) bool  useColliders;

/// @brief Field vertexCount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertexCount, put=__cordl_internal_set_vertexCount)) int32_t  vertexCount;

/// @brief Method ApplyTransform, addr 0x9ea0900, size 0x100, virtual false, abstract: false, final false
inline void ApplyTransform() ;

/// @brief Method Awake, addr 0x9ea05cc, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatePropagationGeometry, addr 0x9ea0620, size 0x2e0, virtual false, abstract: false, final false
inline bool CreatePropagationGeometry() ;

/// @brief Method DecrementEnabledGeometryCount, addr 0x9ea11ac, size 0x60, virtual false, abstract: false, final false
inline void DecrementEnabledGeometryCount() ;

/// @brief Method DestroyInternal, addr 0x9ea171c, size 0x4, virtual false, abstract: false, final false
inline bool DestroyInternal() ;

/// @brief Method DestroyPropagationGeometry, addr 0x9ea0a00, size 0x1e4, virtual false, abstract: false, final false
inline bool DestroyPropagationGeometry() ;

/// @brief Method GatherGeometryInternal, addr 0x9ea1fe4, size 0x1f68, virtual false, abstract: false, final false
inline bool GatherGeometryInternal(::System::IntPtr  geometryHandle, ::UnityEngine::GameObject*  meshObject, ::UnityEngine::Matrix4x4  worldToLocal, bool  ignoreStatic, ::by_ref<int32_t>  ignoredMeshCount) ;

/// @brief Method GatherGeometryRuntime, addr 0x9ea0f60, size 0x1b0, virtual false, abstract: false, final false
inline bool GatherGeometryRuntime() ;

/// @brief Method IncrementEnabledGeometryCount, addr 0x9ea1110, size 0x9c, virtual false, abstract: false, final false
inline void IncrementEnabledGeometryCount() ;

/// @brief Method LateUpdate, addr 0x9ea16bc, size 0x5c, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// [IteratorStateMachine(typeof(MetaXRAcousticGeometry::<LoadGeometryAsync>d__92))]
/// @brief Method LoadGeometryAsync, addr 0x9ea4878, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadGeometryAsync(::StringW  relativePath) ;

/// [AsyncStateMachine(typeof(MetaXRAcousticGeometry::<LoadGeometryFromMemory>d__93))]
/// @brief Method LoadGeometryFromMemory, addr 0x9ea4928, size 0xc0, virtual false, abstract: false, final false
inline void LoadGeometryFromMemory(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data) ;

static inline ::GlobalNamespace::MetaXRAcousticGeometry* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ea1718, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9ea1468, size 0x254, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9ea120c, size 0x25c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadFile, addr 0x9ea0be4, size 0x37c, virtual false, abstract: false, final false
inline bool ReadFile() ;

/// @brief Method StartInternal, addr 0x9ea05f0, size 0x30, virtual false, abstract: false, final false
inline bool StartInternal() ;

constexpr bool const& __cordl_internal_get_FileEnabled() const;

constexpr bool& __cordl_internal_get_FileEnabled() ;

constexpr ::Meta::XR::Acoustics::MeshFlags const& __cordl_internal_get_Flags() const;

constexpr ::Meta::XR::Acoustics::MeshFlags& __cordl_internal_get_Flags() ;

constexpr ::UnityEngine::Hash128 const& __cordl_internal_get_HierarchyHash() const;

constexpr ::UnityEngine::Hash128& __cordl_internal_get_HierarchyHash() ;

constexpr bool const& __cordl_internal_get_IncludeChildMeshes() const;

constexpr bool& __cordl_internal_get_IncludeChildMeshes() ;

constexpr float_t const& __cordl_internal_get_flagLength() const;

constexpr float_t& __cordl_internal_get_flagLength() ;

constexpr ::System::IntPtr const& __cordl_internal_get_geometryHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_geometryHandle() ;

constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState const& __cordl_internal_get_loadState_() const;

constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState& __cordl_internal_get_loadState_() ;

constexpr int32_t const& __cordl_internal_get_lodSelection() const;

constexpr int32_t& __cordl_internal_get_lodSelection() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_materialColors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_materialColors() ;

constexpr float_t const& __cordl_internal_get_maxSimplifyError() const;

constexpr float_t& __cordl_internal_get_maxSimplifyError() ;

constexpr float_t const& __cordl_internal_get_minDiffractionEdgeAngle() const;

constexpr float_t& __cordl_internal_get_minDiffractionEdgeAngle() ;

constexpr float_t const& __cordl_internal_get_minDiffractionEdgeLength() const;

constexpr float_t& __cordl_internal_get_minDiffractionEdgeLength() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_overrideExcludeTags() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_overrideExcludeTags() ;

constexpr bool const& __cordl_internal_get_overrideExcludeTagsEnabled() const;

constexpr bool& __cordl_internal_get_overrideExcludeTagsEnabled() ;

constexpr ::StringW const& __cordl_internal_get_relativeFilePath() const;

constexpr ::StringW& __cordl_internal_get_relativeFilePath() ;

constexpr bool const& __cordl_internal_get_useColliders() const;

constexpr bool& __cordl_internal_get_useColliders() ;

constexpr int32_t const& __cordl_internal_get_vertexCount() const;

constexpr int32_t& __cordl_internal_get_vertexCount() ;

constexpr void __cordl_internal_set_FileEnabled(bool  value) ;

constexpr void __cordl_internal_set_Flags(::Meta::XR::Acoustics::MeshFlags  value) ;

constexpr void __cordl_internal_set_HierarchyHash(::UnityEngine::Hash128  value) ;

constexpr void __cordl_internal_set_IncludeChildMeshes(bool  value) ;

constexpr void __cordl_internal_set_flagLength(float_t  value) ;

constexpr void __cordl_internal_set_geometryHandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_loadState_(::GlobalNamespace::MetaXRAcousticGeometry_LoadState  value) ;

constexpr void __cordl_internal_set_lodSelection(int32_t  value) ;

constexpr void __cordl_internal_set_materialColors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_maxSimplifyError(float_t  value) ;

constexpr void __cordl_internal_set_minDiffractionEdgeAngle(float_t  value) ;

constexpr void __cordl_internal_set_minDiffractionEdgeLength(float_t  value) ;

constexpr void __cordl_internal_set_overrideExcludeTags(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_overrideExcludeTagsEnabled(bool  value) ;

constexpr void __cordl_internal_set_relativeFilePath(::StringW  value) ;

constexpr void __cordl_internal_set_useColliders(bool  value) ;

constexpr void __cordl_internal_set_vertexCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ea49e8, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnAnyGeometryEnabled, addr 0x9e9ff5c, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnAnyGeometryEnabled(::System::Action*  value) ;

static inline bool getStaticF_AUTO_VALIDATE() ;

static inline int32_t getStaticF_EnabledGeometryCount() ;

static inline ::System::Action* getStaticF_OnAnyGeometryEnabled() ;

static inline int32_t getStaticF_terrainDecimation() ;

/// @brief Method get_AbsoluteFilePath, addr 0x9ea011c, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_AbsoluteFilePath() ;

/// @brief Method get_EnableDiffraction, addr 0x9ea0360, size 0xc, virtual false, abstract: false, final false
inline bool get_EnableDiffraction() ;

/// @brief Method get_EnableSimplification, addr 0x9ea0344, size 0xc, virtual false, abstract: false, final false
inline bool get_EnableSimplification() ;

/// @brief Method get_ExcludeTags, addr 0x9ea0580, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_ExcludeTags() ;

/// @brief Method get_FlagLength, addr 0x9ea0530, size 0x8, virtual false, abstract: false, final false
inline float_t get_FlagLength() ;

/// @brief Method get_IsLoaded, addr 0x9ea05b4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLoaded() ;

/// @brief Method get_LodSelection, addr 0x9ea0540, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LodSelection() ;

/// @brief Method get_MaxSimplifyError, addr 0x9ea038c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxSimplifyError() ;

/// @brief Method get_MinDiffractionEdgeAngle, addr 0x9ea0404, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinDiffractionEdgeAngle() ;

/// @brief Method get_MinDiffractionEdgeLength, addr 0x9ea04b8, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinDiffractionEdgeLength() ;

/// @brief Method get_OverrideExcludeTags, addr 0x9ea0570, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_OverrideExcludeTags() ;

/// @brief Method get_OverrideExcludeTagsEnabled, addr 0x9ea0560, size 0x8, virtual false, abstract: false, final false
inline bool get_OverrideExcludeTagsEnabled() ;

/// @brief Method get_RelativeFilePath, addr 0x9ea0114, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RelativeFilePath() ;

/// @brief Method get_UseColliders, addr 0x9ea0550, size 0x8, virtual false, abstract: false, final false
inline bool get_UseColliders() ;

/// @brief Method get_VertexCount, addr 0x9ea05c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VertexCount() ;

/// @brief Method isObjectUsedByLODGroup, addr 0x9ea1720, size 0x12c, virtual false, abstract: false, final false
static inline bool isObjectUsedByLODGroup(::UnityEngine::GameObject*  obj, ::UnityEngine::LODGroup*  lod) ;

/// [CompilerGenerated]
/// @brief Method remove_OnAnyGeometryEnabled, addr 0x9ea0038, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnAnyGeometryEnabled(::System::Action*  value) ;

static inline void setStaticF_AUTO_VALIDATE(bool  value) ;

static inline void setStaticF_EnabledGeometryCount(int32_t  value) ;

static inline void setStaticF_OnAnyGeometryEnabled(::System::Action*  value) ;

static inline void setStaticF_terrainDecimation(int32_t  value) ;

/// @brief Method set_AbsoluteFilePath, addr 0x9ea01b8, size 0x18c, virtual false, abstract: false, final false
inline void set_AbsoluteFilePath(::StringW  value) ;

/// @brief Method set_EnableDiffraction, addr 0x9ea036c, size 0x20, virtual false, abstract: false, final false
inline void set_EnableDiffraction(bool  value) ;

/// @brief Method set_EnableSimplification, addr 0x9ea0350, size 0x10, virtual false, abstract: false, final false
inline void set_EnableSimplification(bool  value) ;

/// @brief Method set_FlagLength, addr 0x9ea0538, size 0x8, virtual false, abstract: false, final false
inline void set_FlagLength(float_t  value) ;

/// @brief Method set_LodSelection, addr 0x9ea0548, size 0x8, virtual false, abstract: false, final false
inline void set_LodSelection(int32_t  value) ;

/// @brief Method set_MaxSimplifyError, addr 0x9ea0394, size 0x70, virtual false, abstract: false, final false
inline void set_MaxSimplifyError(float_t  value) ;

/// @brief Method set_MinDiffractionEdgeAngle, addr 0x9ea040c, size 0xac, virtual false, abstract: false, final false
inline void set_MinDiffractionEdgeAngle(float_t  value) ;

/// @brief Method set_MinDiffractionEdgeLength, addr 0x9ea04c0, size 0x70, virtual false, abstract: false, final false
inline void set_MinDiffractionEdgeLength(float_t  value) ;

/// @brief Method set_OverrideExcludeTags, addr 0x9ea0578, size 0x8, virtual false, abstract: false, final false
inline void set_OverrideExcludeTags(::ArrayW<::StringW>  value) ;

/// @brief Method set_OverrideExcludeTagsEnabled, addr 0x9ea0568, size 0x8, virtual false, abstract: false, final false
inline void set_OverrideExcludeTagsEnabled(bool  value) ;

/// @brief Method set_UseColliders, addr 0x9ea0558, size 0x8, virtual false, abstract: false, final false
inline void set_UseColliders(bool  value) ;

/// @brief Method traverseMeshHierarchy, addr 0x9ea184c, size 0x798, virtual false, abstract: false, final false
static inline void traverseMeshHierarchy(::UnityEngine::GameObject*  obj, bool  includeChildren, ::ArrayW<::StringW>  excludeTags, bool  parentWasExcluded, int32_t  lodSelection, ::UnityEngine::LODGroup*  parentLOD, ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*  visitor, ::System::Object*  parentData) ;

/// @brief Method updateCountsForMesh, addr 0x9ea4114, size 0x104, virtual false, abstract: false, final false
static inline void updateCountsForMesh(::by_ref<int32_t>  totalVertexCount, ::by_ref<uint32_t>  totalIndexCount, ::by_ref<int32_t>  totalFaceCount, ::by_ref<int32_t>  totalMaterialCount, ::UnityEngine::Mesh*  mesh) ;

/// @brief Method uploadMeshFilter, addr 0x9ea4218, size 0x49c, virtual false, abstract: false, final false
static inline bool uploadMeshFilter(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  tempVertices, ::System::Collections::Generic::List_1<int32_t>*  tempIndices, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::ArrayW<float_t>  vertices, ::ArrayW<int32_t>  indices, ::by_ref<int32_t>  vertexOffset, ::by_ref<int32_t>  indexOffset, ::by_ref<int32_t>  groupOffset, ::UnityEngine::Mesh*  mesh, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  materials, ::UnityEngine::Matrix4x4  matrix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticGeometry(MetaXRAcousticGeometry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry(MetaXRAcousticGeometry const& ) = delete;

/// @brief Field FILE_EXTENSION offset 0xffffffff size 0x8
static constexpr ::ConstString  FILE_EXTENSION{u"xrageo"};

/// @brief Field Success offset 0xffffffff size 0x4
static constexpr int32_t  Success{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29924};

/// [SerializeField]
/// [FormerlySerializedAs("relativeFilePath_")]
/// @brief Field relativeFilePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___relativeFilePath;

/// [SerializeField]
/// @brief Field FileEnabled, offset: 0x28, size: 0x1, def value: None
 bool  ___FileEnabled;

/// [SerializeField]
/// @brief Field IncludeChildMeshes, offset: 0x29, size: 0x1, def value: None
 bool  ___IncludeChildMeshes;

/// [SerializeField]
/// @brief Field Flags, offset: 0x2c, size: 0x4, def value: None
 ::Meta::XR::Acoustics::MeshFlags  ___Flags;

/// [SerializeField]
/// @brief Field maxSimplifyError, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxSimplifyError;

/// [SerializeField]
/// @brief Field minDiffractionEdgeAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ___minDiffractionEdgeAngle;

/// [SerializeField]
/// @brief Field minDiffractionEdgeLength, offset: 0x38, size: 0x4, def value: None
 float_t  ___minDiffractionEdgeLength;

/// [SerializeField]
/// @brief Field flagLength, offset: 0x3c, size: 0x4, def value: None
 float_t  ___flagLength;

/// [SerializeField]
/// @brief Field lodSelection, offset: 0x40, size: 0x4, def value: None
 int32_t  ___lodSelection;

/// [SerializeField]
/// @brief Field useColliders, offset: 0x44, size: 0x1, def value: None
 bool  ___useColliders;

/// [SerializeField]
/// @brief Field overrideExcludeTagsEnabled, offset: 0x45, size: 0x1, def value: None
 bool  ___overrideExcludeTagsEnabled;

/// [SerializeField]
/// @brief Field overrideExcludeTags, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___overrideExcludeTags;

/// @brief Field geometryHandle, offset: 0x50, size: 0x8, def value: None
 ::System::IntPtr  ___geometryHandle;

/// @brief Field loadState_, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAcousticGeometry_LoadState  ___loadState_;

/// @brief Field vertexCount, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___vertexCount;

/// [SerializeField]
/// @brief Field materialColors, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___materialColors;

/// [SerializeField]
/// @brief Field HierarchyHash, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Hash128  ___HierarchyHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___relativeFilePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___FileEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___IncludeChildMeshes) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___Flags) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___maxSimplifyError) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___minDiffractionEdgeAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___minDiffractionEdgeLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___flagLength) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___lodSelection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___useColliders) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___overrideExcludeTagsEnabled) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___overrideExcludeTags) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___geometryHandle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___loadState_) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___vertexCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___materialColors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry, ___HierarchyHash) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/<LoadGeometryAsync>d__92
class CORDL_TYPE MetaXRAcousticGeometry__LoadGeometryAsync_d__92 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  __4__this;

/// @brief Field <startTime>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field <unityWebRequest>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__unityWebRequest_5__3, put=__cordl_internal_set__unityWebRequest_5__3)) ::UnityEngine::Networking::UnityWebRequest*  _unityWebRequest_5__3;

/// @brief Field relativePath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_relativePath, put=__cordl_internal_set_relativePath)) ::StringW  relativePath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9ea62d4, size 0x380, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9ea6654, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9ea665c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9ea6694, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9ea62d0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__unityWebRequest_5__3() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__unityWebRequest_5__3() ;

constexpr ::StringW const& __cordl_internal_get_relativePath() const;

constexpr ::StringW& __cordl_internal_get_relativePath() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__unityWebRequest_5__3(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_relativePath(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9ea4900, size 0x28, virtual false, abstract: false, final false
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
constexpr MetaXRAcousticGeometry__LoadGeometryAsync_d__92() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry__LoadGeometryAsync_d__92", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticGeometry__LoadGeometryAsync_d__92(MetaXRAcousticGeometry__LoadGeometryAsync_d__92 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry__LoadGeometryAsync_d__92", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry__LoadGeometryAsync_d__92(MetaXRAcousticGeometry__LoadGeometryAsync_d__92 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29922};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field relativePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___relativePath;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  _____4__this;

/// @brief Field <startTime>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <unityWebRequest>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____unityWebRequest_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92, ___relativePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92, ____startTime_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92, ____unityWebRequest_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, Unity.Collections.NativeArray`1::ReadOnly<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/<>c__DisplayClass93_0
class CORDL_TYPE MetaXRAcousticGeometry___c__DisplayClass93_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  __4__this;

/// @brief Field data, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data;

/// @brief Field result, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) int32_t  result;

static inline ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0* New_ctor() ;

/// @brief Method <LoadGeometryFromMemory>b__0, addr 0x9ea6088, size 0x248, virtual false, abstract: false, final false
inline void _LoadGeometryFromMemory_b__0() ;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_result() const;

constexpr int32_t& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  value) ;

constexpr void __cordl_internal_set_result(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ea6080, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry___c__DisplayClass93_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry___c__DisplayClass93_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticGeometry___c__DisplayClass93_0(MetaXRAcousticGeometry___c__DisplayClass93_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry___c__DisplayClass93_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry___c__DisplayClass93_0(MetaXRAcousticGeometry___c__DisplayClass93_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29921};

/// @brief Field data, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  ___data;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  _____4__this;

/// @brief Field result, offset: 0x28, size: 0x4, def value: None
 int32_t  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0, ___result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/<>c
class CORDL_TYPE MetaXRAcousticGeometry___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MetaXRAcousticGeometry___c*  __9;

/// @brief Field <>9__87_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__87_0, put=setStaticF___9__87_0)) ::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*  __9__87_0;

static inline ::GlobalNamespace::MetaXRAcousticGeometry___c* New_ctor() ;

/// @brief Method <GatherGeometryInternal>b__87_0, addr 0x9ea6064, size 0x18, virtual false, abstract: false, final false
inline ::StringW _GatherGeometryInternal_b__87_0(::UnityEngine::Transform*  t) ;

/// @brief Method <.cctor>b__95_0, addr 0x9ea607c, size 0x4, virtual false, abstract: false, final false
inline void __cctor_b__95_0() ;

/// @brief Method .ctor, addr 0x9ea605c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MetaXRAcousticGeometry___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>* getStaticF___9__87_0() ;

static inline void setStaticF___9(::GlobalNamespace::MetaXRAcousticGeometry___c*  value) ;

static inline void setStaticF___9__87_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticGeometry___c(MetaXRAcousticGeometry___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry___c(MetaXRAcousticGeometry___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/ColliderGatherer
class CORDL_TYPE MetaXRAcousticGeometry_ColliderGatherer : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c;

 __declspec(property(get=get_Meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  Meshes;

 __declspec(property(get=get_Terrains)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  Terrains;

/// @brief Field meshes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  meshes;

/// @brief Field terrains, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrains, put=__cordl_internal_set_terrains)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  terrains;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr operator  ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr operator  ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*() noexcept;

static inline ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*& __cordl_internal_get_meshes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* const& __cordl_internal_get_terrains() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*& __cordl_internal_get_terrains() ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  value) ;

constexpr void __cordl_internal_set_terrains(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  value) ;

/// @brief Method .ctor, addr 0x9ea3f4c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Meshes, addr 0x9ea5f54, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* get_Meshes() ;

/// @brief Method get_Terrains, addr 0x9ea5f5c, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* get_Terrains() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer* i___GlobalNamespace__MetaXRAcousticGeometry_IGatherer() noexcept;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor* i___GlobalNamespace__MetaXRAcousticGeometry_ITransformVisitor() noexcept;

/// @brief Method visit, addr 0x9ea5324, size 0x9a8, virtual true, abstract: false, final true
inline ::System::Object* visit(::UnityEngine::Transform*  transform, ::System::Object*  parentData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry_ColliderGatherer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry_ColliderGatherer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticGeometry_ColliderGatherer(MetaXRAcousticGeometry_ColliderGatherer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry_ColliderGatherer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry_ColliderGatherer(MetaXRAcousticGeometry_ColliderGatherer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29919};

/// @brief Field meshes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  ___meshes;

/// @brief Field terrains, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  ___terrains;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer, ___meshes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer, ___terrains) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/ColliderGatherer/<>c
class CORDL_TYPE ColliderGatherer_MetaXRAcousticGeometry___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*  __9__0_1;

static inline ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c* New_ctor() ;

/// @brief Method .ctor, addr 0x9ea5fcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <visit>b__0_0, addr 0x9ea5fd4, size 0x18, virtual false, abstract: false, final false
inline bool _visit_b__0_0(::GlobalNamespace::MetaXRAcousticMaterial*  x) ;

/// @brief Method <visit>b__0_1, addr 0x9ea5fec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterial> _visit_b__0_1(::GlobalNamespace::MetaXRAcousticMaterial*  x) ;

static inline ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>* getStaticF___9__0_0() ;

static inline ::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>* getStaticF___9__0_1() ;

static inline void setStaticF___9(::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*  value) ;

static inline void setStaticF___9__0_1(::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderGatherer_MetaXRAcousticGeometry___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderGatherer_MetaXRAcousticGeometry___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderGatherer_MetaXRAcousticGeometry___c(ColliderGatherer_MetaXRAcousticGeometry___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderGatherer_MetaXRAcousticGeometry___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderGatherer_MetaXRAcousticGeometry___c(ColliderGatherer_MetaXRAcousticGeometry___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/MeshGatherer
class CORDL_TYPE MetaXRAcousticGeometry_MeshGatherer : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c;

 __declspec(property(get=get_Meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  Meshes;

 __declspec(property(get=get_Terrains)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  Terrains;

/// @brief Field ignoreStatic, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreStatic, put=__cordl_internal_set_ignoreStatic)) bool  ignoreStatic;

/// @brief Field ignoredMeshCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ignoredMeshCount, put=__cordl_internal_set_ignoredMeshCount)) int32_t  ignoredMeshCount;

/// @brief Field meshes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshes, put=__cordl_internal_set_meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  meshes;

/// @brief Field terrains, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrains, put=__cordl_internal_set_terrains)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  terrains;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr operator  ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr operator  ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*() noexcept;

static inline ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer* New_ctor(bool  ignoreStatic) ;

constexpr bool const& __cordl_internal_get_ignoreStatic() const;

constexpr bool& __cordl_internal_get_ignoreStatic() ;

constexpr int32_t const& __cordl_internal_get_ignoredMeshCount() const;

constexpr int32_t& __cordl_internal_get_ignoredMeshCount() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* const& __cordl_internal_get_meshes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*& __cordl_internal_get_meshes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* const& __cordl_internal_get_terrains() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*& __cordl_internal_get_terrains() ;

constexpr void __cordl_internal_set_ignoreStatic(bool  value) ;

constexpr void __cordl_internal_set_ignoredMeshCount(int32_t  value) ;

constexpr void __cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  value) ;

constexpr void __cordl_internal_set_terrains(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  value) ;

/// @brief Method .ctor, addr 0x9ea4028, size 0xec, virtual false, abstract: false, final false
inline void _ctor(bool  ignoreStatic) ;

/// @brief Method get_Meshes, addr 0x9ea5284, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* get_Meshes() ;

/// @brief Method get_Terrains, addr 0x9ea528c, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* get_Terrains() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer* i___GlobalNamespace__MetaXRAcousticGeometry_IGatherer() noexcept;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor* i___GlobalNamespace__MetaXRAcousticGeometry_ITransformVisitor() noexcept;

/// @brief Method visit, addr 0x9ea4b58, size 0x72c, virtual true, abstract: false, final true
inline ::System::Object* visit(::UnityEngine::Transform*  transform, ::System::Object*  parentData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry_MeshGatherer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry_MeshGatherer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticGeometry_MeshGatherer(MetaXRAcousticGeometry_MeshGatherer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry_MeshGatherer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry_MeshGatherer(MetaXRAcousticGeometry_MeshGatherer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29917};

/// @brief Field meshes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  ___meshes;

/// @brief Field terrains, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  ___terrains;

/// @brief Field ignoredMeshCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___ignoredMeshCount;

/// @brief Field ignoreStatic, offset: 0x24, size: 0x1, def value: None
 bool  ___ignoreStatic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer, ___meshes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer, ___terrains) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer, ___ignoredMeshCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer, ___ignoreStatic) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/MeshGatherer/<>c
class CORDL_TYPE MeshGatherer_MetaXRAcousticGeometry___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*  __9__1_0;

/// @brief Field <>9__1_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_1, put=setStaticF___9__1_1)) ::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*  __9__1_1;

static inline ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c* New_ctor() ;

/// @brief Method .ctor, addr 0x9ea52fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <visit>b__1_0, addr 0x9ea5304, size 0x18, virtual false, abstract: false, final false
inline bool _visit_b__1_0(::GlobalNamespace::MetaXRAcousticMaterial*  x) ;

/// @brief Method <visit>b__1_1, addr 0x9ea531c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterial> _visit_b__1_1(::GlobalNamespace::MetaXRAcousticMaterial*  x) ;

static inline ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>* getStaticF___9__1_0() ;

static inline ::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>* getStaticF___9__1_1() ;

static inline void setStaticF___9(::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*  value) ;

static inline void setStaticF___9__1_1(::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshGatherer_MetaXRAcousticGeometry___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshGatherer_MetaXRAcousticGeometry___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshGatherer_MetaXRAcousticGeometry___c(MeshGatherer_MetaXRAcousticGeometry___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshGatherer_MetaXRAcousticGeometry___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshGatherer_MetaXRAcousticGeometry___c(MeshGatherer_MetaXRAcousticGeometry___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29916};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/IGatherer
class CORDL_TYPE MetaXRAcousticGeometry_IGatherer {
public:
// Declarations
 __declspec(property(get=get_Meshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  Meshes;

 __declspec(property(get=get_Terrains)) ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  Terrains;

/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr operator  ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*() noexcept;

/// @brief Method get_Meshes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* get_Meshes() ;

/// @brief Method get_Terrains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* get_Terrains() ;

/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor* i___GlobalNamespace__MetaXRAcousticGeometry_ITransformVisitor() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry_IGatherer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry_IGatherer(MetaXRAcousticGeometry_IGatherer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticGeometry/ITransformVisitor
class CORDL_TYPE MetaXRAcousticGeometry_ITransformVisitor {
public:
// Declarations
/// @brief Method visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* visit(::UnityEngine::Transform*  transform, ::System::Object*  userData) ;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticGeometry_ITransformVisitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticGeometry_ITransformVisitor(MetaXRAcousticGeometry_ITransformVisitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
