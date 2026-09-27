#pragma once
// IWYU pragma private; include "GorillaTag/ContainerLiquid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ContainerLiquid)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag {
class ContainerLiquid;
}
// Write type traits
MARK_REF_T(::GorillaTag::ContainerLiquid*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ContainerLiquid*, "GorillaTag", "ContainerLiquid");
// [AddComponentMenu("GorillaTag/ContainerLiquid (GTag)")]
// [ExecuteInEditMode]
// Dependencies UnityEngine.Bounds, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ContainerLiquid
class CORDL_TYPE ContainerLiquid : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <bottomLipWorldPos>k__BackingField, offset 0xc8, size 0xc 
 __declspec(property(get=__cordl_internal_get__bottomLipWorldPos_k__BackingField, put=__cordl_internal_set__bottomLipWorldPos_k__BackingField)) ::UnityEngine::Vector3  _bottomLipWorldPos_k__BackingField;

/// @brief Field <cupTopWorldPos>k__BackingField, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get__cupTopWorldPos_k__BackingField, put=__cordl_internal_set__cupTopWorldPos_k__BackingField)) ::UnityEngine::Vector3  _cupTopWorldPos_k__BackingField;

/// @brief Field <liquidPlaneWorldNormal>k__BackingField, offset 0xe0, size 0xc 
 __declspec(property(get=__cordl_internal_get__liquidPlaneWorldNormal_k__BackingField, put=__cordl_internal_set__liquidPlaneWorldNormal_k__BackingField)) ::UnityEngine::Vector3  _liquidPlaneWorldNormal_k__BackingField;

/// @brief Field <liquidPlaneWorldPos>k__BackingField, offset 0xd4, size 0xc 
 __declspec(property(get=__cordl_internal_get__liquidPlaneWorldPos_k__BackingField, put=__cordl_internal_set__liquidPlaneWorldPos_k__BackingField)) ::UnityEngine::Vector3  _liquidPlaneWorldPos_k__BackingField;

 __declspec(property(get=get_bottomLipWorldPos, put=set_bottomLipWorldPos)) ::UnityEngine::Vector3  bottomLipWorldPos;

 __declspec(property(get=get_cupTopWorldPos, put=set_cupTopWorldPos)) ::UnityEngine::Vector3  cupTopWorldPos;

/// @brief Field emptySoundBankPlayer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptySoundBankPlayer, put=__cordl_internal_set_emptySoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  emptySoundBankPlayer;

/// @brief Field fillAmount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillAmount, put=__cordl_internal_set_fillAmount)) float_t  fillAmount;

/// @brief Field floater, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_floater, put=__cordl_internal_set_floater)) ::UnityW<::UnityEngine::Transform>  floater;

/// @brief [DebugReadout]
 __declspec(property(get=get_isEmpty)) bool  isEmpty;

/// @brief Field keepMeshHidden, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepMeshHidden, put=__cordl_internal_set_keepMeshHidden)) bool  keepMeshHidden;

/// @brief Field lastAngularVelocity, offset 0x128, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastAngularVelocity, put=__cordl_internal_set_lastAngularVelocity)) ::UnityEngine::Vector3  lastAngularVelocity;

/// @brief Field lastPos, offset 0x110, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPos, put=__cordl_internal_set_lastPos)) ::UnityEngine::Vector3  lastPos;

/// @brief Field lastRot, offset 0x134, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastRot, put=__cordl_internal_set_lastRot)) ::UnityEngine::Quaternion  lastRot;

/// @brief Field lastSineWave, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSineWave, put=__cordl_internal_set_lastSineWave)) float_t  lastSineWave;

/// @brief Field lastVelocity, offset 0x11c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastVelocity, put=__cordl_internal_set_lastVelocity)) ::UnityEngine::Vector3  lastVelocity;

/// @brief Field lastWobble, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWobble, put=__cordl_internal_set_lastWobble)) float_t  lastWobble;

/// @brief Field liquidColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_liquidColor, put=__cordl_internal_set_liquidColor)) ::UnityEngine::Color  liquidColor;

/// @brief Field liquidColorShaderProp, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidColorShaderProp, put=__cordl_internal_set_liquidColorShaderProp)) int32_t  liquidColorShaderProp;

/// @brief Field liquidColorShaderPropertyName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidColorShaderPropertyName, put=__cordl_internal_set_liquidColorShaderPropertyName)) ::StringW  liquidColorShaderPropertyName;

/// @brief Field liquidPlaneNormalShaderProp, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidPlaneNormalShaderProp, put=__cordl_internal_set_liquidPlaneNormalShaderProp)) int32_t  liquidPlaneNormalShaderProp;

/// @brief Field liquidPlaneNormalShaderPropertyName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidPlaneNormalShaderPropertyName, put=__cordl_internal_set_liquidPlaneNormalShaderPropertyName)) ::StringW  liquidPlaneNormalShaderPropertyName;

/// @brief Field liquidPlanePositionShaderProp, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidPlanePositionShaderProp, put=__cordl_internal_set_liquidPlanePositionShaderProp)) int32_t  liquidPlanePositionShaderProp;

/// @brief Field liquidPlanePositionShaderPropertyName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidPlanePositionShaderPropertyName, put=__cordl_internal_set_liquidPlanePositionShaderPropertyName)) ::StringW  liquidPlanePositionShaderPropertyName;

 __declspec(property(get=get_liquidPlaneWorldNormal, put=set_liquidPlaneWorldNormal)) ::UnityEngine::Vector3  liquidPlaneWorldNormal;

 __declspec(property(get=get_liquidPlaneWorldPos, put=set_liquidPlaneWorldPos)) ::UnityEngine::Vector3  liquidPlaneWorldPos;

/// @brief Field liquidVolumeMinMax, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidVolumeMinMax, put=__cordl_internal_set_liquidVolumeMinMax)) ::UnityEngine::Vector2  liquidVolumeMinMax;

/// @brief Field localMeshBounds, offset 0x150, size 0x18 
 __declspec(property(get=__cordl_internal_get_localMeshBounds, put=__cordl_internal_set_localMeshBounds)) ::UnityEngine::Bounds  localMeshBounds;

/// @brief Field matPropBlock, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropBlock, put=__cordl_internal_set_matPropBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropBlock;

/// @brief Field maxSpillRate, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpillRate, put=__cordl_internal_set_maxSpillRate)) float_t  maxSpillRate;

/// @brief Field meshFilter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field recovery, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_recovery, put=__cordl_internal_set_recovery)) float_t  recovery;

/// @brief Field refillAmount, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_refillAmount, put=__cordl_internal_set_refillAmount)) float_t  refillAmount;

/// @brief Field refillDelay, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_refillDelay, put=__cordl_internal_set_refillDelay)) float_t  refillDelay;

/// @brief Field refillSoundBankPlayer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_refillSoundBankPlayer, put=__cordl_internal_set_refillSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  refillSoundBankPlayer;

/// @brief Field refillThreshold, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_refillThreshold, put=__cordl_internal_set_refillThreshold)) float_t  refillThreshold;

/// @brief Field refillTimer, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_refillTimer, put=__cordl_internal_set_refillTimer)) float_t  refillTimer;

/// @brief Field spillParticleSystem, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_spillParticleSystem, put=__cordl_internal_set_spillParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  spillParticleSystem;

/// @brief Field spillSoundBankPlayer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_spillSoundBankPlayer, put=__cordl_internal_set_spillSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  spillSoundBankPlayer;

/// @brief Field temporalWobbleAmp, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporalWobbleAmp, put=__cordl_internal_set_temporalWobbleAmp)) ::UnityEngine::Vector2  temporalWobbleAmp;

/// @brief Field thickness, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_thickness, put=__cordl_internal_set_thickness)) float_t  thickness;

/// @brief Field topVerts, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_topVerts, put=__cordl_internal_set_topVerts)) ::ArrayW<::UnityEngine::Vector3>  topVerts;

/// @brief Field useFloater, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_useFloater, put=__cordl_internal_set_useFloater)) bool  useFloater;

/// @brief Field useLiquidShader, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLiquidShader, put=__cordl_internal_set_useLiquidShader)) bool  useLiquidShader;

/// @brief Field useLiquidVolume, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLiquidVolume, put=__cordl_internal_set_useLiquidVolume)) bool  useLiquidVolume;

/// @brief Field wasEmptyLastFrame, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasEmptyLastFrame, put=__cordl_internal_set_wasEmptyLastFrame)) bool  wasEmptyLastFrame;

/// @brief Field wobbleFrequency, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_wobbleFrequency, put=__cordl_internal_set_wobbleFrequency)) float_t  wobbleFrequency;

/// @brief Field wobbleMax, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_wobbleMax, put=__cordl_internal_set_wobbleMax)) float_t  wobbleMax;

/// @brief Method Awake, addr 0x5d1fa00, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetTopVerts, addr 0x5d1fa78, size 0x1c0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetTopVerts() ;

/// @brief Method InitializeLiquidSurface, addr 0x5d1f908, size 0x88, virtual false, abstract: false, final false
inline void InitializeLiquidSurface() ;

/// @brief Method InitializeParticleSystem, addr 0x5d1f990, size 0x70, virtual false, abstract: false, final false
inline void InitializeParticleSystem() ;

/// @brief Method IsValidLiquidSurfaceValues, addr 0x5d1f814, size 0xf4, virtual false, abstract: false, final false
inline bool IsValidLiquidSurfaceValues() ;

/// @brief Method LateUpdate, addr 0x5d1fd1c, size 0x9f8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::ContainerLiquid* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d1fc38, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateRefillTimer, addr 0x5d20714, size 0x60, virtual false, abstract: false, final false
inline void UpdateRefillTimer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__bottomLipWorldPos_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__bottomLipWorldPos_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cupTopWorldPos_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cupTopWorldPos_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__liquidPlaneWorldNormal_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__liquidPlaneWorldNormal_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__liquidPlaneWorldPos_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__liquidPlaneWorldPos_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_emptySoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_emptySoundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_fillAmount() const;

constexpr float_t& __cordl_internal_get_fillAmount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_floater() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_floater() ;

constexpr bool const& __cordl_internal_get_keepMeshHidden() const;

constexpr bool& __cordl_internal_get_keepMeshHidden() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastAngularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastAngularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastRot() ;

constexpr float_t const& __cordl_internal_get_lastSineWave() const;

constexpr float_t& __cordl_internal_get_lastSineWave() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastVelocity() ;

constexpr float_t const& __cordl_internal_get_lastWobble() const;

constexpr float_t& __cordl_internal_get_lastWobble() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_liquidColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_liquidColor() ;

constexpr int32_t const& __cordl_internal_get_liquidColorShaderProp() const;

constexpr int32_t& __cordl_internal_get_liquidColorShaderProp() ;

constexpr ::StringW const& __cordl_internal_get_liquidColorShaderPropertyName() const;

constexpr ::StringW& __cordl_internal_get_liquidColorShaderPropertyName() ;

constexpr int32_t const& __cordl_internal_get_liquidPlaneNormalShaderProp() const;

constexpr int32_t& __cordl_internal_get_liquidPlaneNormalShaderProp() ;

constexpr ::StringW const& __cordl_internal_get_liquidPlaneNormalShaderPropertyName() const;

constexpr ::StringW& __cordl_internal_get_liquidPlaneNormalShaderPropertyName() ;

constexpr int32_t const& __cordl_internal_get_liquidPlanePositionShaderProp() const;

constexpr int32_t& __cordl_internal_get_liquidPlanePositionShaderProp() ;

constexpr ::StringW const& __cordl_internal_get_liquidPlanePositionShaderPropertyName() const;

constexpr ::StringW& __cordl_internal_get_liquidPlanePositionShaderPropertyName() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_liquidVolumeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_liquidVolumeMinMax() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_localMeshBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_localMeshBounds() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropBlock() ;

constexpr float_t const& __cordl_internal_get_maxSpillRate() const;

constexpr float_t& __cordl_internal_get_maxSpillRate() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr float_t const& __cordl_internal_get_recovery() const;

constexpr float_t& __cordl_internal_get_recovery() ;

constexpr float_t const& __cordl_internal_get_refillAmount() const;

constexpr float_t& __cordl_internal_get_refillAmount() ;

constexpr float_t const& __cordl_internal_get_refillDelay() const;

constexpr float_t& __cordl_internal_get_refillDelay() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_refillSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_refillSoundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_refillThreshold() const;

constexpr float_t& __cordl_internal_get_refillThreshold() ;

constexpr float_t const& __cordl_internal_get_refillTimer() const;

constexpr float_t& __cordl_internal_get_refillTimer() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_spillParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_spillParticleSystem() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_spillSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_spillSoundBankPlayer() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_temporalWobbleAmp() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_temporalWobbleAmp() ;

constexpr float_t const& __cordl_internal_get_thickness() const;

constexpr float_t& __cordl_internal_get_thickness() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_topVerts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_topVerts() ;

constexpr bool const& __cordl_internal_get_useFloater() const;

constexpr bool& __cordl_internal_get_useFloater() ;

constexpr bool const& __cordl_internal_get_useLiquidShader() const;

constexpr bool& __cordl_internal_get_useLiquidShader() ;

constexpr bool const& __cordl_internal_get_useLiquidVolume() const;

constexpr bool& __cordl_internal_get_useLiquidVolume() ;

constexpr bool const& __cordl_internal_get_wasEmptyLastFrame() const;

constexpr bool& __cordl_internal_get_wasEmptyLastFrame() ;

constexpr float_t const& __cordl_internal_get_wobbleFrequency() const;

constexpr float_t& __cordl_internal_get_wobbleFrequency() ;

constexpr float_t const& __cordl_internal_get_wobbleMax() const;

constexpr float_t& __cordl_internal_get_wobbleMax() ;

constexpr void __cordl_internal_set__bottomLipWorldPos_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__cupTopWorldPos_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__liquidPlaneWorldNormal_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__liquidPlaneWorldPos_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_emptySoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_fillAmount(float_t  value) ;

constexpr void __cordl_internal_set_floater(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_keepMeshHidden(bool  value) ;

constexpr void __cordl_internal_set_lastAngularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastSineWave(float_t  value) ;

constexpr void __cordl_internal_set_lastVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastWobble(float_t  value) ;

constexpr void __cordl_internal_set_liquidColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_liquidColorShaderProp(int32_t  value) ;

constexpr void __cordl_internal_set_liquidColorShaderPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_liquidPlaneNormalShaderProp(int32_t  value) ;

constexpr void __cordl_internal_set_liquidPlaneNormalShaderPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_liquidPlanePositionShaderProp(int32_t  value) ;

constexpr void __cordl_internal_set_liquidPlanePositionShaderPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_liquidVolumeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_localMeshBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_maxSpillRate(float_t  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_recovery(float_t  value) ;

constexpr void __cordl_internal_set_refillAmount(float_t  value) ;

constexpr void __cordl_internal_set_refillDelay(float_t  value) ;

constexpr void __cordl_internal_set_refillSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_refillThreshold(float_t  value) ;

constexpr void __cordl_internal_set_refillTimer(float_t  value) ;

constexpr void __cordl_internal_set_spillParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_spillSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_temporalWobbleAmp(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_thickness(float_t  value) ;

constexpr void __cordl_internal_set_topVerts(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_useFloater(bool  value) ;

constexpr void __cordl_internal_set_useLiquidShader(bool  value) ;

constexpr void __cordl_internal_set_useLiquidVolume(bool  value) ;

constexpr void __cordl_internal_set_wasEmptyLastFrame(bool  value) ;

constexpr void __cordl_internal_set_wobbleFrequency(float_t  value) ;

constexpr void __cordl_internal_set_wobbleMax(float_t  value) ;

/// @brief Method .ctor, addr 0x5d20774, size 0x118, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_bottomLipWorldPos, addr 0x5d1f7cc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bottomLipWorldPos() ;

/// [CompilerGenerated]
/// @brief Method get_cupTopWorldPos, addr 0x5d1f7b4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_cupTopWorldPos() ;

/// @brief Method get_isEmpty, addr 0x5d1f7a0, size 0x14, virtual false, abstract: false, final false
inline bool get_isEmpty() ;

/// [CompilerGenerated]
/// @brief Method get_liquidPlaneWorldNormal, addr 0x5d1f7fc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_liquidPlaneWorldNormal() ;

/// [CompilerGenerated]
/// @brief Method get_liquidPlaneWorldPos, addr 0x5d1f7e4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_liquidPlaneWorldPos() ;

/// [CompilerGenerated]
/// @brief Method set_bottomLipWorldPos, addr 0x5d1f7d8, size 0xc, virtual false, abstract: false, final false
inline void set_bottomLipWorldPos(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_cupTopWorldPos, addr 0x5d1f7c0, size 0xc, virtual false, abstract: false, final false
inline void set_cupTopWorldPos(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_liquidPlaneWorldNormal, addr 0x5d1f808, size 0xc, virtual false, abstract: false, final false
inline void set_liquidPlaneWorldNormal(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_liquidPlaneWorldPos, addr 0x5d1f7f0, size 0xc, virtual false, abstract: false, final false
inline void set_liquidPlaneWorldPos(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContainerLiquid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContainerLiquid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContainerLiquid(ContainerLiquid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContainerLiquid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContainerLiquid(ContainerLiquid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4592};

/// [Tooltip("Used to determine the world space bounds of the container.")]
/// @brief Field meshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// [Tooltip("Used to determine the local space bounds of the container.")]
/// @brief Field meshFilter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// [Tooltip("If you are only using the liquid mesh to calculate the volume of the container and do not need visuals then set this to true.")]
/// @brief Field keepMeshHidden, offset: 0x30, size: 0x1, def value: None
 bool  ___keepMeshHidden;

/// [Tooltip("The object that will float on top of the liquid.")]
/// @brief Field floater, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___floater;

/// @brief Field useLiquidShader, offset: 0x40, size: 0x1, def value: None
 bool  ___useLiquidShader;

/// @brief Field useLiquidVolume, offset: 0x41, size: 0x1, def value: None
 bool  ___useLiquidVolume;

/// @brief Field liquidVolumeMinMax, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___liquidVolumeMinMax;

/// @brief Field liquidColorShaderPropertyName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___liquidColorShaderPropertyName;

/// @brief Field liquidPlaneNormalShaderPropertyName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___liquidPlaneNormalShaderPropertyName;

/// @brief Field liquidPlanePositionShaderPropertyName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___liquidPlanePositionShaderPropertyName;

/// [Tooltip("Emits drips when pouring.")]
/// @brief Field spillParticleSystem, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___spillParticleSystem;

/// [SoundBankInfo]
/// @brief Field emptySoundBankPlayer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___emptySoundBankPlayer;

/// [SoundBankInfo]
/// @brief Field refillSoundBankPlayer, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___refillSoundBankPlayer;

/// [SoundBankInfo]
/// @brief Field spillSoundBankPlayer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___spillSoundBankPlayer;

/// @brief Field liquidColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___liquidColor;

/// [Tooltip("The amount of liquid currently in the container. This value is passed to the shader.")]
/// [Range(0, 1)]
/// @brief Field fillAmount, offset: 0x98, size: 0x4, def value: None
 float_t  ___fillAmount;

/// [Tooltip("This is what fillAmount will be after automatic refilling.")]
/// @brief Field refillAmount, offset: 0x9c, size: 0x4, def value: None
 float_t  ___refillAmount;

/// [Tooltip("Set to a negative value to disable.")]
/// @brief Field refillDelay, offset: 0xa0, size: 0x4, def value: None
 float_t  ___refillDelay;

/// [Tooltip("The point that the liquid should be considered empty and should be auto refilled.")]
/// @brief Field refillThreshold, offset: 0xa4, size: 0x4, def value: None
 float_t  ___refillThreshold;

/// @brief Field wobbleMax, offset: 0xa8, size: 0x4, def value: None
 float_t  ___wobbleMax;

/// @brief Field wobbleFrequency, offset: 0xac, size: 0x4, def value: None
 float_t  ___wobbleFrequency;

/// @brief Field recovery, offset: 0xb0, size: 0x4, def value: None
 float_t  ___recovery;

/// @brief Field thickness, offset: 0xb4, size: 0x4, def value: None
 float_t  ___thickness;

/// @brief Field maxSpillRate, offset: 0xb8, size: 0x4, def value: None
 float_t  ___maxSpillRate;

/// [CompilerGenerated]
/// @brief Field <cupTopWorldPos>k__BackingField, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cupTopWorldPos_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <bottomLipWorldPos>k__BackingField, offset: 0xc8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____bottomLipWorldPos_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <liquidPlaneWorldPos>k__BackingField, offset: 0xd4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____liquidPlaneWorldPos_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <liquidPlaneWorldNormal>k__BackingField, offset: 0xe0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____liquidPlaneWorldNormal_k__BackingField;

/// [DebugReadout]
/// @brief Field wasEmptyLastFrame, offset: 0xec, size: 0x1, def value: None
 bool  ___wasEmptyLastFrame;

/// @brief Field liquidColorShaderProp, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___liquidColorShaderProp;

/// @brief Field liquidPlaneNormalShaderProp, offset: 0xf4, size: 0x4, def value: None
 int32_t  ___liquidPlaneNormalShaderProp;

/// @brief Field liquidPlanePositionShaderProp, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___liquidPlanePositionShaderProp;

/// @brief Field refillTimer, offset: 0xfc, size: 0x4, def value: None
 float_t  ___refillTimer;

/// @brief Field lastSineWave, offset: 0x100, size: 0x4, def value: None
 float_t  ___lastSineWave;

/// @brief Field lastWobble, offset: 0x104, size: 0x4, def value: None
 float_t  ___lastWobble;

/// @brief Field temporalWobbleAmp, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___temporalWobbleAmp;

/// @brief Field lastPos, offset: 0x110, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPos;

/// @brief Field lastVelocity, offset: 0x11c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastVelocity;

/// @brief Field lastAngularVelocity, offset: 0x128, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastAngularVelocity;

/// @brief Field lastRot, offset: 0x134, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastRot;

/// @brief Field matPropBlock, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropBlock;

/// @brief Field localMeshBounds, offset: 0x150, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___localMeshBounds;

/// @brief Field useFloater, offset: 0x168, size: 0x1, def value: None
 bool  ___useFloater;

/// @brief Field topVerts, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___topVerts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ContainerLiquid, ___meshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___meshFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___keepMeshHidden) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___floater) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___useLiquidShader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___useLiquidVolume) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidVolumeMinMax) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidColorShaderPropertyName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidPlaneNormalShaderPropertyName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidPlanePositionShaderPropertyName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___spillParticleSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___emptySoundBankPlayer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___refillSoundBankPlayer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___spillSoundBankPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___fillAmount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___refillAmount) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___refillDelay) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___refillThreshold) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___wobbleMax) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___wobbleFrequency) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___recovery) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___thickness) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___maxSpillRate) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ____cupTopWorldPos_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ____bottomLipWorldPos_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ____liquidPlaneWorldPos_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ____liquidPlaneWorldNormal_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___wasEmptyLastFrame) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidColorShaderProp) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidPlaneNormalShaderProp) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___liquidPlanePositionShaderProp) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___refillTimer) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___lastSineWave) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___lastWobble) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___temporalWobbleAmp) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___lastPos) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___lastVelocity) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___lastAngularVelocity) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___lastRot) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___matPropBlock) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___localMeshBounds) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___useFloater) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ContainerLiquid, ___topVerts) == 0x170, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ContainerLiquid) == 0x178, "Size mismatch!");

} // namespace end def GorillaTag
