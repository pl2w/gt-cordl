#pragma once
// IWYU pragma private; include "UnityEngine/RenderParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderParams)
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class LightProbeProxyVolume;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
// Forward declare root types
namespace UnityEngine {
struct RenderParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderParams);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderParams, "UnityEngine", "RenderParams");
// Dependencies UnityEngine.Bounds, UnityEngine.MotionVectorGenerationMode, UnityEngine.Rendering.LightProbeUsage, UnityEngine.Rendering.ReflectionProbeUsage, UnityEngine.Rendering.ShadowCastingMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderParams
struct CORDL_TYPE RenderParams {
public:
// Declarations
 __declspec(property(put=set_camera)) ::UnityW<::UnityEngine::Camera>  camera;

 __declspec(property(put=set_forceMeshLod)) int32_t  forceMeshLod;

 __declspec(property(put=set_instanceID)) int32_t  instanceID;

 __declspec(property(put=set_layer)) int32_t  layer;

 __declspec(property(put=set_lightProbeProxyVolume)) ::UnityW<::UnityEngine::LightProbeProxyVolume>  lightProbeProxyVolume;

 __declspec(property(put=set_lightProbeUsage)) ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage;

 __declspec(property(get=get_matProps, put=set_matProps)) ::UnityEngine::MaterialPropertyBlock*  matProps;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(put=set_meshLodSelectionBias)) float_t  meshLodSelectionBias;

 __declspec(property(put=set_motionVectorMode)) ::UnityEngine::MotionVectorGenerationMode  motionVectorMode;

 __declspec(property(put=set_overrideSceneCullingMask)) bool  overrideSceneCullingMask;

 __declspec(property(put=set_receiveShadows)) bool  receiveShadows;

 __declspec(property(put=set_reflectionProbeUsage)) ::UnityEngine::Rendering::ReflectionProbeUsage  reflectionProbeUsage;

 __declspec(property(put=set_rendererPriority)) int32_t  rendererPriority;

 __declspec(property(put=set_renderingLayerMask)) uint32_t  renderingLayerMask;

 __declspec(property(put=set_sceneCullingMask)) uint64_t  sceneCullingMask;

 __declspec(property(put=set_shadowCastingMode)) ::UnityEngine::Rendering::ShadowCastingMode  shadowCastingMode;

 __declspec(property(put=set_worldBounds)) ::UnityEngine::Bounds  worldBounds;

/// @brief Method .ctor, addr 0xb5817e0, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  mat) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_matProps, addr 0xb58199c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_matProps() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_material, addr 0xb58198c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// [CompilerGenerated]
/// @brief Method set_camera, addr 0xb581974, size 0x8, virtual false, abstract: false, final false
inline void set_camera(::UnityEngine::Camera*  value) ;

/// [CompilerGenerated]
/// @brief Method set_forceMeshLod, addr 0xb5819dc, size 0x8, virtual false, abstract: false, final false
inline void set_forceMeshLod(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_instanceID, addr 0xb581958, size 0x8, virtual false, abstract: false, final false
inline void set_instanceID(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_layer, addr 0xb581940, size 0x8, virtual false, abstract: false, final false
inline void set_layer(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_lightProbeProxyVolume, addr 0xb5819c4, size 0x8, virtual false, abstract: false, final false
inline void set_lightProbeProxyVolume(::UnityEngine::LightProbeProxyVolume*  value) ;

/// [CompilerGenerated]
/// @brief Method set_lightProbeUsage, addr 0xb5819bc, size 0x8, virtual false, abstract: false, final false
inline void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage  value) ;

/// [CompilerGenerated]
/// @brief Method set_matProps, addr 0xb5819a4, size 0x8, virtual false, abstract: false, final false
inline void set_matProps(::UnityEngine::MaterialPropertyBlock*  value) ;

/// [CompilerGenerated]
/// @brief Method set_material, addr 0xb581994, size 0x8, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// [CompilerGenerated]
/// @brief Method set_meshLodSelectionBias, addr 0xb5819e4, size 0x8, virtual false, abstract: false, final false
inline void set_meshLodSelectionBias(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_motionVectorMode, addr 0xb58197c, size 0x8, virtual false, abstract: false, final false
inline void set_motionVectorMode(::UnityEngine::MotionVectorGenerationMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_overrideSceneCullingMask, addr 0xb5819cc, size 0x8, virtual false, abstract: false, final false
inline void set_overrideSceneCullingMask(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_receiveShadows, addr 0xb5819b4, size 0x8, virtual false, abstract: false, final false
inline void set_receiveShadows(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_reflectionProbeUsage, addr 0xb581984, size 0x8, virtual false, abstract: false, final false
inline void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage  value) ;

/// [CompilerGenerated]
/// @brief Method set_rendererPriority, addr 0xb581950, size 0x8, virtual false, abstract: false, final false
inline void set_rendererPriority(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_renderingLayerMask, addr 0xb581948, size 0x8, virtual false, abstract: false, final false
inline void set_renderingLayerMask(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_sceneCullingMask, addr 0xb5819d4, size 0x8, virtual false, abstract: false, final false
inline void set_sceneCullingMask(uint64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_shadowCastingMode, addr 0xb5819ac, size 0x8, virtual false, abstract: false, final false
inline void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_worldBounds, addr 0xb581960, size 0x14, virtual false, abstract: false, final false
inline void set_worldBounds(::UnityEngine::Bounds  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderParams() ;

// Ctor Parameters [CppParam { name: "_layer_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_renderingLayerMask_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rendererPriority_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_instanceID_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_worldBounds_k__BackingField", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "_camera_k__BackingField", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_motionVectorMode_k__BackingField", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_reflectionProbeUsage_k__BackingField", ty: "::UnityEngine::Rendering::ReflectionProbeUsage", modifiers: "", def_value: None, comment: None }, CppParam { name: "_material_k__BackingField", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_matProps_k__BackingField", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_shadowCastingMode_k__BackingField", ty: "::UnityEngine::Rendering::ShadowCastingMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_receiveShadows_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lightProbeUsage_k__BackingField", ty: "::UnityEngine::Rendering::LightProbeUsage", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lightProbeProxyVolume_k__BackingField", ty: "::UnityW<::UnityEngine::LightProbeProxyVolume>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_overrideSceneCullingMask_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sceneCullingMask_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_forceMeshLod_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_meshLodSelectionBias_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderParams(int32_t  _layer_k__BackingField, uint32_t  _renderingLayerMask_k__BackingField, int32_t  _rendererPriority_k__BackingField, int32_t  _instanceID_k__BackingField, ::UnityEngine::Bounds  _worldBounds_k__BackingField, ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField, ::UnityEngine::MotionVectorGenerationMode  _motionVectorMode_k__BackingField, ::UnityEngine::Rendering::ReflectionProbeUsage  _reflectionProbeUsage_k__BackingField, ::UnityW<::UnityEngine::Material>  _material_k__BackingField, ::UnityEngine::MaterialPropertyBlock*  _matProps_k__BackingField, ::UnityEngine::Rendering::ShadowCastingMode  _shadowCastingMode_k__BackingField, bool  _receiveShadows_k__BackingField, ::UnityEngine::Rendering::LightProbeUsage  _lightProbeUsage_k__BackingField, ::UnityW<::UnityEngine::LightProbeProxyVolume>  _lightProbeProxyVolume_k__BackingField, bool  _overrideSceneCullingMask_k__BackingField, uint64_t  _sceneCullingMask_k__BackingField, int32_t  _forceMeshLod_k__BackingField, float_t  _meshLodSelectionBias_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <layer>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _layer_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <renderingLayerMask>k__BackingField, offset: 0x4, size: 0x4, def value: None
 uint32_t  _renderingLayerMask_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <rendererPriority>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _rendererPriority_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <instanceID>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _instanceID_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <worldBounds>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::Bounds  _worldBounds_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <camera>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <motionVectorMode>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::MotionVectorGenerationMode  _motionVectorMode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <reflectionProbeUsage>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::Rendering::ReflectionProbeUsage  _reflectionProbeUsage_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <material>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  _material_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <matProps>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  _matProps_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <shadowCastingMode>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShadowCastingMode  _shadowCastingMode_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <receiveShadows>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  _receiveShadows_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <lightProbeUsage>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::Rendering::LightProbeUsage  _lightProbeUsage_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <lightProbeProxyVolume>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LightProbeProxyVolume>  _lightProbeProxyVolume_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <overrideSceneCullingMask>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  _overrideSceneCullingMask_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <sceneCullingMask>k__BackingField, offset: 0x68, size: 0x8, def value: None
 uint64_t  _sceneCullingMask_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <forceMeshLod>k__BackingField, offset: 0x70, size: 0x4, def value: None
 int32_t  _forceMeshLod_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <meshLodSelectionBias>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  _meshLodSelectionBias_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderParams, _layer_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _renderingLayerMask_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _rendererPriority_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _instanceID_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _worldBounds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _camera_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _motionVectorMode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _reflectionProbeUsage_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _material_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _matProps_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _shadowCastingMode_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _receiveShadows_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _lightProbeUsage_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _lightProbeProxyVolume_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _overrideSceneCullingMask_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _sceneCullingMask_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _forceMeshLod_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderParams, _meshLodSelectionBias_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RenderParams) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine
