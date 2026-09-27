#pragma once
// IWYU pragma private; include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngineInternal {
struct LightmapType;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Renderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Renderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Renderer*, "UnityEngine", "Renderer");
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [UsedByNativeCode]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Runtime/Graphics/Renderer.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Renderer
class CORDL_TYPE Renderer : public ::UnityEngine::Component {
public:
// Declarations
/// @brief [NativeProperty("IsDynamicOccludee")]
 __declspec(property(put=set_allowOcclusionWhenDynamic)) bool  allowOcclusionWhenDynamic;

 __declspec(property(get=get_bounds, put=set_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_forceRenderingOff, put=set_forceRenderingOff)) bool  forceRenderingOff;

 __declspec(property(get=get_isPartOfStaticBatch)) bool  isPartOfStaticBatch;

 __declspec(property(get=get_lightProbeUsage, put=set_lightProbeUsage)) ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage;

 __declspec(property(get=get_lightmapIndex, put=set_lightmapIndex)) int32_t  lightmapIndex;

 __declspec(property(get=get_lightmapScaleOffset, put=set_lightmapScaleOffset)) ::UnityEngine::Vector4  lightmapScaleOffset;

 __declspec(property(get=get_localBounds, put=set_localBounds)) ::UnityEngine::Bounds  localBounds;

 __declspec(property(get=get_localToWorldMatrix)) ::UnityEngine::Matrix4x4  localToWorldMatrix;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(get=get_materials, put=set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materials;

 __declspec(property(put=set_motionVectorGenerationMode)) ::UnityEngine::MotionVectorGenerationMode  motionVectorGenerationMode;

 __declspec(property(put=set_probeAnchor)) ::UnityW<::UnityEngine::Transform>  probeAnchor;

 __declspec(property(put=set_receiveShadows)) bool  receiveShadows;

 __declspec(property(get=get_reflectionProbeUsage, put=set_reflectionProbeUsage)) ::UnityEngine::Rendering::ReflectionProbeUsage  reflectionProbeUsage;

 __declspec(property(get=get_shadowCastingMode, put=set_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode  shadowCastingMode;

 __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial)) ::UnityW<::UnityEngine::Material>  sharedMaterial;

 __declspec(property(get=get_sharedMaterials, put=set_sharedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  sharedMaterials;

 __declspec(property(get=get_sortingGroupID)) int32_t  sortingGroupID;

 __declspec(property(get=get_sortingGroupOrder)) int32_t  sortingGroupOrder;

 __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) int32_t  sortingOrder;

 __declspec(property(get=get_worldToLocalMatrix)) ::UnityEngine::Matrix4x4  worldToLocalMatrix;

/// [FreeFunction(Name = "RendererScripting::GetMaterialArray", HasExplicitThis = true)]
/// @brief Method CopyMaterialArray, addr 0xb589c28, size 0x80, virtual false, abstract: false, final false
inline void CopyMaterialArray(::by_ref<::ArrayW<::UnityEngine::Material*>>  m) ;

/// @brief Method CopyMaterialArray_Injected, addr 0xb589ca8, size 0x44, virtual false, abstract: false, final false
static inline void CopyMaterialArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::ArrayW<::UnityEngine::Material*>>  m) ;

/// [FreeFunction(Name = "RendererScripting::GetSharedMaterialArray", HasExplicitThis = true)]
/// @brief Method CopySharedMaterialArray, addr 0xb589cec, size 0x80, virtual false, abstract: false, final false
inline void CopySharedMaterialArray(::by_ref<::ArrayW<::UnityEngine::Material*>>  m) ;

/// @brief Method CopySharedMaterialArray_Injected, addr 0xb589d6c, size 0x44, virtual false, abstract: false, final false
static inline void CopySharedMaterialArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::ArrayW<::UnityEngine::Material*>>  m) ;

/// [NativeName("GetLightmapIndexInt")]
/// @brief Method GetLightmapIndex, addr 0xb58b484, size 0x80, virtual false, abstract: false, final false
inline int32_t GetLightmapIndex(::UnityEngineInternal::LightmapType  lt) ;

/// @brief Method GetLightmapIndex_Injected, addr 0xb58b504, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetLightmapIndex_Injected(::System::IntPtr  _unity_self, ::UnityEngineInternal::LightmapType  lt) ;

/// [NativeName("GetLightmapST")]
/// @brief Method GetLightmapST, addr 0xb58b62c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetLightmapST(::UnityEngineInternal::LightmapType  lt) ;

/// @brief Method GetLightmapST_Injected, addr 0xb58b6c8, size 0x54, virtual false, abstract: false, final false
static inline void GetLightmapST_Injected(::System::IntPtr  _unity_self, ::UnityEngineInternal::LightmapType  lt, ::by_ref<::UnityEngine::Vector4>  ret) ;

/// [FreeFunction(Name = "RendererScripting::GetMaterial", HasExplicitThis = true)]
/// @brief Method GetMaterial, addr 0xb5898dc, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial() ;

/// [FreeFunction(Name = "RendererScripting::GetMaterialArray", HasExplicitThis = true)]
/// @brief Method GetMaterialArray, addr 0xb589b74, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> GetMaterialArray() ;

/// @brief Method GetMaterialArray_Injected, addr 0xb589bec, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Material>> GetMaterialArray_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetMaterialCount, addr 0xb58b738, size 0x78, virtual false, abstract: false, final false
inline int32_t GetMaterialCount() ;

/// @brief Method GetMaterialCount_Injected, addr 0xb58b7b0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetMaterialCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetMaterial_Injected, addr 0xb589970, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMaterial_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetMaterials, addr 0xb58b8c0, size 0x10c, virtual false, abstract: false, final false
inline void GetMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  m) ;

/// @brief Method GetPropertyBlock, addr 0xb58a2fc, size 0x4, virtual false, abstract: false, final false
inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method GetPropertyBlock, addr 0xb58a300, size 0x4, virtual false, abstract: false, final false
inline void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties, int32_t  materialIndex) ;

/// [FreeFunction(Name = "RendererScripting::GetSharedMaterial", HasExplicitThis = true)]
/// @brief Method GetSharedMaterial, addr 0xb5899ac, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetSharedMaterial() ;

/// [NativeName("GetMaterialArray")]
/// @brief Method GetSharedMaterialArray, addr 0xb58b7ec, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> GetSharedMaterialArray() ;

/// @brief Method GetSharedMaterialArray_Injected, addr 0xb58b864, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Material>> GetSharedMaterialArray_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetSharedMaterial_Injected, addr 0xb589a40, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSharedMaterial_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetSharedMaterials, addr 0xb58bb9c, size 0x10c, virtual false, abstract: false, final false
inline void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  m) ;

/// [FreeFunction(Name = "RendererScripting::GetPropertyBlock", HasExplicitThis = true)]
/// @brief Method Internal_GetPropertyBlock, addr 0xb589fb0, size 0xd8, virtual false, abstract: false, final false
inline void Internal_GetPropertyBlock(/* [NotNull] */ ::UnityEngine::MaterialPropertyBlock*  dest) ;

/// [FreeFunction(Name = "RendererScripting::GetPropertyBlockMaterialIndex", HasExplicitThis = true)]
/// @brief Method Internal_GetPropertyBlockMaterialIndex, addr 0xb58a1b8, size 0xe8, virtual false, abstract: false, final false
inline void Internal_GetPropertyBlockMaterialIndex(/* [NotNull] */ ::UnityEngine::MaterialPropertyBlock*  dest, int32_t  materialIndex) ;

/// @brief Method Internal_GetPropertyBlockMaterialIndex_Injected, addr 0xb58a2a0, size 0x54, virtual false, abstract: false, final false
static inline void Internal_GetPropertyBlockMaterialIndex_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  dest, int32_t  materialIndex) ;

/// @brief Method Internal_GetPropertyBlock_Injected, addr 0xb58a088, size 0x44, virtual false, abstract: false, final false
static inline void Internal_GetPropertyBlock_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  dest) ;

/// [FreeFunction(Name = "RendererScripting::SetPropertyBlock", HasExplicitThis = true)]
/// @brief Method Internal_SetPropertyBlock, addr 0xb589ee4, size 0x88, virtual false, abstract: false, final false
inline void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction(Name = "RendererScripting::SetPropertyBlockMaterialIndex", HasExplicitThis = true)]
/// @brief Method Internal_SetPropertyBlockMaterialIndex, addr 0xb58a0cc, size 0x98, virtual false, abstract: false, final false
inline void Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock*  properties, int32_t  materialIndex) ;

/// @brief Method Internal_SetPropertyBlockMaterialIndex_Injected, addr 0xb58a164, size 0x54, virtual false, abstract: false, final false
static inline void Internal_SetPropertyBlockMaterialIndex_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  properties, int32_t  materialIndex) ;

/// @brief Method Internal_SetPropertyBlock_Injected, addr 0xb589f6c, size 0x44, virtual false, abstract: false, final false
static inline void Internal_SetPropertyBlock_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  properties) ;

static inline ::UnityEngine::Renderer* New_ctor() ;

/// [NativeName("SetLightmapIndexInt")]
/// @brief Method SetLightmapIndex, addr 0xb58b548, size 0x90, virtual false, abstract: false, final false
inline void SetLightmapIndex(int32_t  index, ::UnityEngineInternal::LightmapType  lt) ;

/// @brief Method SetLightmapIndex_Injected, addr 0xb58b5d8, size 0x54, virtual false, abstract: false, final false
static inline void SetLightmapIndex_Injected(::System::IntPtr  _unity_self, int32_t  index, ::UnityEngineInternal::LightmapType  lt) ;

/// [FreeFunction(Name = "RendererScripting::SetMaterial", HasExplicitThis = true)]
/// @brief Method SetMaterial, addr 0xb589a7c, size 0xb4, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  m) ;

/// @brief Method SetMaterialArray, addr 0xb589ec4, size 0x20, virtual false, abstract: false, final false
inline void SetMaterialArray(::ArrayW<::UnityEngine::Material*>  m) ;

/// [FreeFunction(Name = "RendererScripting::SetMaterialArray", HasExplicitThis = true)]
/// @brief Method SetMaterialArray, addr 0xb589db0, size 0xc0, virtual false, abstract: false, final false
inline void SetMaterialArray(/* [NotNull] */ ::ArrayW<::UnityEngine::Material*>  m, int32_t  length) ;

/// @brief Method SetMaterialArray_Injected, addr 0xb589e70, size 0x54, virtual false, abstract: false, final false
static inline void SetMaterialArray_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Material*>  m, int32_t  length) ;

/// @brief Method SetMaterial_Injected, addr 0xb589b30, size 0x44, virtual false, abstract: false, final false
static inline void SetMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  m) ;

/// @brief Method SetMaterials, addr 0xb58bab4, size 0xe8, virtual false, abstract: false, final false
inline void SetMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials) ;

/// @brief Method SetPropertyBlock, addr 0xb58a2f4, size 0x4, virtual false, abstract: false, final false
inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method SetPropertyBlock, addr 0xb58a2f8, size 0x4, virtual false, abstract: false, final false
inline void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties, int32_t  materialIndex) ;

/// @brief Method SetSharedMaterials, addr 0xb58b9cc, size 0xe8, virtual false, abstract: false, final false
inline void SetSharedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials) ;

/// [FreeFunction(Name = "RendererScripting::SetStaticLightmapST", HasExplicitThis = true)]
/// @brief Method SetStaticLightmapST, addr 0xb589808, size 0x90, virtual false, abstract: false, final false
inline void SetStaticLightmapST(::UnityEngine::Vector4  st) ;

/// @brief Method SetStaticLightmapST_Injected, addr 0xb589898, size 0x44, virtual false, abstract: false, final false
static inline void SetStaticLightmapST_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  st) ;

/// @brief Method .ctor, addr 0xb585248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [FreeFunction(Name = "RendererScripting::GetWorldBounds", HasExplicitThis = true)]
/// @brief Method get_bounds, addr 0xb5894b0, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0xb589554, size 0x44, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_enabled, addr 0xb58a304, size 0x78, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_enabled_Injected, addr 0xb58a37c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_enabled_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_forceRenderingOff, addr 0xb58a6b8, size 0x78, virtual false, abstract: false, final false
inline bool get_forceRenderingOff() ;

/// @brief Method get_forceRenderingOff_Injected, addr 0xb58a730, size 0x3c, virtual false, abstract: false, final false
static inline bool get_forceRenderingOff_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsPartOfStaticBatch")]
/// @brief Method get_isPartOfStaticBatch, addr 0xb58b100, size 0x78, virtual false, abstract: false, final false
inline bool get_isPartOfStaticBatch() ;

/// @brief Method get_isPartOfStaticBatch_Injected, addr 0xb58b178, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPartOfStaticBatch_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lightProbeUsage, addr 0xb58a8f4, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LightProbeUsage get_lightProbeUsage() ;

/// @brief Method get_lightProbeUsage_Injected, addr 0xb58a96c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LightProbeUsage get_lightProbeUsage_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lightmapIndex, addr 0xb58b71c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_lightmapIndex() ;

/// @brief Method get_lightmapScaleOffset, addr 0xb58b72c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_lightmapScaleOffset() ;

/// [FreeFunction(Name = "RendererScripting::GetLocalBounds", HasExplicitThis = true)]
/// @brief Method get_localBounds, addr 0xb58965c, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_localBounds() ;

/// @brief Method get_localBounds_Injected, addr 0xb589700, size 0x44, virtual false, abstract: false, final false
static inline void get_localBounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_localToWorldMatrix, addr 0xb58b2a0, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix() ;

/// @brief Method get_localToWorldMatrix_Injected, addr 0xb58b348, size 0x44, virtual false, abstract: false, final false
static inline void get_localToWorldMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method get_material, addr 0xb58b8a8, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_materials, addr 0xb58b8a0, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> get_materials() ;

/// @brief Method get_reflectionProbeUsage, addr 0xb58aa6c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeUsage get_reflectionProbeUsage() ;

/// @brief Method get_reflectionProbeUsage_Injected, addr 0xb58aae4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeUsage get_reflectionProbeUsage_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowCastingMode, addr 0xb58a47c, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ShadowCastingMode get_shadowCastingMode() ;

/// @brief Method get_shadowCastingMode_Injected, addr 0xb58a4f4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShadowCastingMode get_shadowCastingMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sharedMaterial, addr 0xb58b8b0, size 0x4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_sharedMaterial() ;

/// @brief Method get_sharedMaterials, addr 0xb58b8b8, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> get_sharedMaterials() ;

/// @brief Method get_sortingGroupID, addr 0xb58aed4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingGroupID() ;

/// @brief Method get_sortingGroupID_Injected, addr 0xb58af4c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingGroupID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingGroupOrder, addr 0xb58af88, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingGroupOrder() ;

/// @brief Method get_sortingGroupOrder_Injected, addr 0xb58b000, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingGroupOrder_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingLayerID, addr 0xb58abe4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingLayerID_Injected, addr 0xb58ac5c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingLayerID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingOrder, addr 0xb58ad5c, size 0x78, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_sortingOrder_Injected, addr 0xb58add4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sortingOrder_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_worldToLocalMatrix, addr 0xb58b1b4, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_worldToLocalMatrix() ;

/// @brief Method get_worldToLocalMatrix_Injected, addr 0xb58b25c, size 0x44, virtual false, abstract: false, final false
static inline void get_worldToLocalMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method set_allowOcclusionWhenDynamic, addr 0xb58b03c, size 0x80, virtual false, abstract: false, final false
inline void set_allowOcclusionWhenDynamic(bool  value) ;

/// @brief Method set_allowOcclusionWhenDynamic_Injected, addr 0xb58b0bc, size 0x44, virtual false, abstract: false, final false
static inline void set_allowOcclusionWhenDynamic_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [NativeName("SetWorldAABB")]
/// @brief Method set_bounds, addr 0xb589598, size 0x80, virtual false, abstract: false, final false
inline void set_bounds(::UnityEngine::Bounds  value) ;

/// @brief Method set_bounds_Injected, addr 0xb589618, size 0x44, virtual false, abstract: false, final false
static inline void set_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value) ;

/// @brief Method set_enabled, addr 0xb58a3b8, size 0x80, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0xb58a438, size 0x44, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_forceRenderingOff, addr 0xb58a76c, size 0x80, virtual false, abstract: false, final false
inline void set_forceRenderingOff(bool  value) ;

/// @brief Method set_forceRenderingOff_Injected, addr 0xb58a7ec, size 0x44, virtual false, abstract: false, final false
static inline void set_forceRenderingOff_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_lightProbeUsage, addr 0xb58a9a8, size 0x80, virtual false, abstract: false, final false
inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage  value) ;

/// @brief Method set_lightProbeUsage_Injected, addr 0xb58aa28, size 0x44, virtual false, abstract: false, final false
static inline void set_lightProbeUsage_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::LightProbeUsage  value) ;

/// @brief Method set_lightmapIndex, addr 0xb58b724, size 0x8, virtual false, abstract: false, final false
inline void set_lightmapIndex(int32_t  value) ;

/// @brief Method set_lightmapScaleOffset, addr 0xb58b734, size 0x4, virtual false, abstract: false, final false
inline void set_lightmapScaleOffset(::UnityEngine::Vector4  value) ;

/// [NativeName("SetLocalAABB")]
/// @brief Method set_localBounds, addr 0xb589744, size 0x80, virtual false, abstract: false, final false
inline void set_localBounds(::UnityEngine::Bounds  value) ;

/// @brief Method set_localBounds_Injected, addr 0xb5897c4, size 0x44, virtual false, abstract: false, final false
static inline void set_localBounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value) ;

/// @brief Method set_material, addr 0xb58b8ac, size 0x4, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_materials, addr 0xb58b8a4, size 0x4, virtual false, abstract: false, final false
inline void set_materials(::ArrayW<::UnityEngine::Material*>  value) ;

/// @brief Method set_motionVectorGenerationMode, addr 0xb58a830, size 0x80, virtual false, abstract: false, final false
inline void set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode  value) ;

/// @brief Method set_motionVectorGenerationMode_Injected, addr 0xb58a8b0, size 0x44, virtual false, abstract: false, final false
static inline void set_motionVectorGenerationMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::MotionVectorGenerationMode  value) ;

/// @brief Method set_probeAnchor, addr 0xb58b38c, size 0xb4, virtual false, abstract: false, final false
inline void set_probeAnchor(::UnityEngine::Transform*  value) ;

/// @brief Method set_probeAnchor_Injected, addr 0xb58b440, size 0x44, virtual false, abstract: false, final false
static inline void set_probeAnchor_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_receiveShadows, addr 0xb58a5f4, size 0x80, virtual false, abstract: false, final false
inline void set_receiveShadows(bool  value) ;

/// @brief Method set_receiveShadows_Injected, addr 0xb58a674, size 0x44, virtual false, abstract: false, final false
static inline void set_receiveShadows_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_reflectionProbeUsage, addr 0xb58ab20, size 0x80, virtual false, abstract: false, final false
inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage  value) ;

/// @brief Method set_reflectionProbeUsage_Injected, addr 0xb58aba0, size 0x44, virtual false, abstract: false, final false
static inline void set_reflectionProbeUsage_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ReflectionProbeUsage  value) ;

/// @brief Method set_shadowCastingMode, addr 0xb58a530, size 0x80, virtual false, abstract: false, final false
inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode  value) ;

/// @brief Method set_shadowCastingMode_Injected, addr 0xb58a5b0, size 0x44, virtual false, abstract: false, final false
static inline void set_shadowCastingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadowCastingMode  value) ;

/// @brief Method set_sharedMaterial, addr 0xb58b8b4, size 0x4, virtual false, abstract: false, final false
inline void set_sharedMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_sharedMaterials, addr 0xb58b8bc, size 0x4, virtual false, abstract: false, final false
inline void set_sharedMaterials(::ArrayW<::UnityEngine::Material*>  value) ;

/// @brief Method set_sortingLayerID, addr 0xb58ac98, size 0x80, virtual false, abstract: false, final false
inline void set_sortingLayerID(int32_t  value) ;

/// @brief Method set_sortingLayerID_Injected, addr 0xb58ad18, size 0x44, virtual false, abstract: false, final false
static inline void set_sortingLayerID_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_sortingOrder, addr 0xb58ae10, size 0x80, virtual false, abstract: false, final false
inline void set_sortingOrder(int32_t  value) ;

/// @brief Method set_sortingOrder_Injected, addr 0xb58ae90, size 0x44, virtual false, abstract: false, final false
static inline void set_sortingOrder_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Renderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Renderer(Renderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Renderer(Renderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14881};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Renderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
