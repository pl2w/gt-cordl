#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GTObjectPlaceholder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EZoneLiquidType_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_ECustomMapCosmeticItem_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTObjectPlaceholder)
namespace CustomMapSupport {
class BezierSpline;
}
namespace GT_CustomMapSupportRuntime {
struct ForceVolumeProperties;
}
namespace GT_CustomMapSupportRuntime {
class RopeSwingSegment;
}
namespace GT_CustomMapSupportRuntime {
struct WaterVolumeProperties;
}
namespace GT_CustomMapSupportRuntime {
class ZiplineSegment;
}
namespace GlobalNamespace {
struct GTObjectPlaceholder_ECustomMapCosmeticItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class GTObjectPlaceholder;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::GTObjectPlaceholder*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::GTObjectPlaceholder*, "GT_CustomMapSupportRuntime", "GTObjectPlaceholder");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies GT_CustomMapSupportRuntime.CMSZoneShaderSettings::EZoneLiquidType, GT_CustomMapSupportRuntime.GTObject, GT_CustomMapSupportRuntime.GTObjectPlaceholder::ECustomMapCosmeticItem, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.GTObjectPlaceholder
class CORDL_TYPE GTObjectPlaceholder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ECustomMapCosmeticItem = ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem;

/// @brief Field CosmeticItem, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_CosmeticItem, put=__cordl_internal_set_CosmeticItem)) ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  CosmeticItem;

/// @brief Field PlaceholderObject, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlaceholderObject, put=__cordl_internal_set_PlaceholderObject)) ::GT_CustomMapSupportRuntime::GTObject  PlaceholderObject;

/// @brief Field SpeedVSAccelCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpeedVSAccelCurve, put=__cordl_internal_set_SpeedVSAccelCurve)) ::UnityEngine::AnimationCurve*  SpeedVSAccelCurve;

/// @brief Field accel_FV, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_accel_FV, put=__cordl_internal_set_accel_FV)) float_t  accel_FV;

/// @brief Field applyPull_FV, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyPull_FV, put=__cordl_internal_set_applyPull_FV)) bool  applyPull_FV;

/// @brief Field dampenLatVel_FV, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_dampenLatVel_FV, put=__cordl_internal_set_dampenLatVel_FV)) bool  dampenLatVel_FV;

/// @brief Field dampenXVel_FV, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenXVel_FV, put=__cordl_internal_set_dampenXVel_FV)) float_t  dampenXVel_FV;

/// @brief Field dampenZVel_FV, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampenZVel_FV, put=__cordl_internal_set_dampenZVel_FV)) float_t  dampenZVel_FV;

/// @brief Field defaultCreatorCode, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultCreatorCode, put=__cordl_internal_set_defaultCreatorCode)) ::StringW  defaultCreatorCode;

/// @brief Field disableGrip_FV, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableGrip_FV, put=__cordl_internal_set_disableGrip_FV)) bool  disableGrip_FV;

/// @brief Field enterClip, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterClip, put=__cordl_internal_set_enterClip)) ::UnityW<::UnityEngine::AudioClip>  enterClip;

/// @brief Field exitClip, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitClip, put=__cordl_internal_set_exitClip)) ::UnityW<::UnityEngine::AudioClip>  exitClip;

/// @brief Field liquidType, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidType, put=__cordl_internal_set_liquidType)) ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  liquidType;

/// @brief Field localWindDirection, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_localWindDirection, put=__cordl_internal_set_localWindDirection)) ::UnityEngine::Vector3  localWindDirection;

/// @brief Field loopClip, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopClip, put=__cordl_internal_set_loopClip)) ::UnityW<::UnityEngine::AudioClip>  loopClip;

/// @brief Field loopCrescendoClip, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopCrescendoClip, put=__cordl_internal_set_loopCrescendoClip)) ::UnityW<::UnityEngine::AudioClip>  loopCrescendoClip;

/// @brief Field maxAccel, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAccel, put=__cordl_internal_set_maxAccel)) float_t  maxAccel;

/// @brief Field maxDepth_FV, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDepth_FV, put=__cordl_internal_set_maxDepth_FV)) float_t  maxDepth_FV;

/// @brief Field maxDistanceBeforeRespawn, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceBeforeRespawn, put=__cordl_internal_set_maxDistanceBeforeRespawn)) float_t  maxDistanceBeforeRespawn;

/// @brief Field maxSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field maxSpeed_FV, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed_FV, put=__cordl_internal_set_maxSpeed_FV)) float_t  maxSpeed_FV;

/// @brief Field pullToCenterAccel_FV, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterAccel_FV, put=__cordl_internal_set_pullToCenterAccel_FV)) float_t  pullToCenterAccel_FV;

/// @brief Field pullToCenterMaxSpeed_FV, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterMaxSpeed_FV, put=__cordl_internal_set_pullToCenterMaxSpeed_FV)) float_t  pullToCenterMaxSpeed_FV;

/// @brief Field pullToCenterMinDist_FV, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullToCenterMinDist_FV, put=__cordl_internal_set_pullToCenterMinDist_FV)) float_t  pullToCenterMinDist_FV;

/// @brief Field ropeLength, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeLength, put=__cordl_internal_set_ropeLength)) int32_t  ropeLength;

/// @brief Field ropeSegmentGenerationOffset, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ropeSegmentGenerationOffset, put=__cordl_internal_set_ropeSegmentGenerationOffset)) float_t  ropeSegmentGenerationOffset;

/// @brief Field ropeSwingSegmentPrefab, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeSwingSegmentPrefab, put=__cordl_internal_set_ropeSwingSegmentPrefab)) ::UnityW<::UnityEngine::GameObject>  ropeSwingSegmentPrefab;

/// @brief Field ropeSwingSegments, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeSwingSegments, put=__cordl_internal_set_ropeSwingSegments)) ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  ropeSwingSegments;

/// @brief Field scaleTexture, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleTexture, put=__cordl_internal_set_scaleTexture)) float_t  scaleTexture;

/// @brief Field scrollTextureX, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_scrollTextureX, put=__cordl_internal_set_scrollTextureX)) float_t  scrollTextureX;

/// @brief Field scrollTextureY, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_scrollTextureY, put=__cordl_internal_set_scrollTextureY)) float_t  scrollTextureY;

/// @brief Field spline, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::CustomMapSupport::BezierSpline>  spline;

/// @brief Field surfaceColliders, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceColliders, put=__cordl_internal_set_surfaceColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  surfaceColliders;

/// @brief Field surfacePlane, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfacePlane, put=__cordl_internal_set_surfacePlane)) ::UnityW<::UnityEngine::Transform>  surfacePlane;

/// @brief Field useCustomMesh, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomMesh, put=__cordl_internal_set_useCustomMesh)) bool  useCustomMesh;

/// @brief Field useDefaultPlaceholder, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_useDefaultPlaceholder, put=__cordl_internal_set_useDefaultPlaceholder)) bool  useDefaultPlaceholder;

/// @brief Field useWaterMesh, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWaterMesh, put=__cordl_internal_set_useWaterMesh)) bool  useWaterMesh;

/// @brief Field ziplineSegmentGenerationOffset, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ziplineSegmentGenerationOffset, put=__cordl_internal_set_ziplineSegmentGenerationOffset)) float_t  ziplineSegmentGenerationOffset;

/// @brief Field ziplineSegmentPrefab, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ziplineSegmentPrefab, put=__cordl_internal_set_ziplineSegmentPrefab)) ::UnityW<::UnityEngine::GameObject>  ziplineSegmentPrefab;

/// @brief Field ziplineSegments, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_ziplineSegments, put=__cordl_internal_set_ziplineSegments)) ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>*  ziplineSegments;

/// @brief Method GetForceVolumeProperties, addr 0x9cb6d14, size 0xc0, virtual false, abstract: false, final false
inline ::GT_CustomMapSupportRuntime::ForceVolumeProperties GetForceVolumeProperties() ;

/// @brief Method GetWaterVolumeProperties, addr 0x9cb6cb0, size 0x64, virtual false, abstract: false, final false
inline ::GT_CustomMapSupportRuntime::WaterVolumeProperties GetWaterVolumeProperties() ;

static inline ::GT_CustomMapSupportRuntime::GTObjectPlaceholder* New_ctor() ;

/// @brief Method SetForceVolumeProperties, addr 0x9cb6dd4, size 0xb8, virtual false, abstract: false, final false
inline void SetForceVolumeProperties(::GT_CustomMapSupportRuntime::ForceVolumeProperties  props) ;

constexpr ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const& __cordl_internal_get_CosmeticItem() const;

constexpr ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem& __cordl_internal_get_CosmeticItem() ;

constexpr ::GT_CustomMapSupportRuntime::GTObject const& __cordl_internal_get_PlaceholderObject() const;

constexpr ::GT_CustomMapSupportRuntime::GTObject& __cordl_internal_get_PlaceholderObject() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_SpeedVSAccelCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_SpeedVSAccelCurve() ;

constexpr float_t const& __cordl_internal_get_accel_FV() const;

constexpr float_t& __cordl_internal_get_accel_FV() ;

constexpr bool const& __cordl_internal_get_applyPull_FV() const;

constexpr bool& __cordl_internal_get_applyPull_FV() ;

constexpr bool const& __cordl_internal_get_dampenLatVel_FV() const;

constexpr bool& __cordl_internal_get_dampenLatVel_FV() ;

constexpr float_t const& __cordl_internal_get_dampenXVel_FV() const;

constexpr float_t& __cordl_internal_get_dampenXVel_FV() ;

constexpr float_t const& __cordl_internal_get_dampenZVel_FV() const;

constexpr float_t& __cordl_internal_get_dampenZVel_FV() ;

constexpr ::StringW const& __cordl_internal_get_defaultCreatorCode() const;

constexpr ::StringW& __cordl_internal_get_defaultCreatorCode() ;

constexpr bool const& __cordl_internal_get_disableGrip_FV() const;

constexpr bool& __cordl_internal_get_disableGrip_FV() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_enterClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_enterClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_exitClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_exitClip() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType const& __cordl_internal_get_liquidType() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType& __cordl_internal_get_liquidType() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localWindDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localWindDirection() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_loopClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_loopClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_loopCrescendoClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_loopCrescendoClip() ;

constexpr float_t const& __cordl_internal_get_maxAccel() const;

constexpr float_t& __cordl_internal_get_maxAccel() ;

constexpr float_t const& __cordl_internal_get_maxDepth_FV() const;

constexpr float_t& __cordl_internal_get_maxDepth_FV() ;

constexpr float_t const& __cordl_internal_get_maxDistanceBeforeRespawn() const;

constexpr float_t& __cordl_internal_get_maxDistanceBeforeRespawn() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_maxSpeed_FV() const;

constexpr float_t& __cordl_internal_get_maxSpeed_FV() ;

constexpr float_t const& __cordl_internal_get_pullToCenterAccel_FV() const;

constexpr float_t& __cordl_internal_get_pullToCenterAccel_FV() ;

constexpr float_t const& __cordl_internal_get_pullToCenterMaxSpeed_FV() const;

constexpr float_t& __cordl_internal_get_pullToCenterMaxSpeed_FV() ;

constexpr float_t const& __cordl_internal_get_pullToCenterMinDist_FV() const;

constexpr float_t& __cordl_internal_get_pullToCenterMinDist_FV() ;

constexpr int32_t const& __cordl_internal_get_ropeLength() const;

constexpr int32_t& __cordl_internal_get_ropeLength() ;

constexpr float_t const& __cordl_internal_get_ropeSegmentGenerationOffset() const;

constexpr float_t& __cordl_internal_get_ropeSegmentGenerationOffset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ropeSwingSegmentPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ropeSwingSegmentPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>* const& __cordl_internal_get_ropeSwingSegments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*& __cordl_internal_get_ropeSwingSegments() ;

constexpr float_t const& __cordl_internal_get_scaleTexture() const;

constexpr float_t& __cordl_internal_get_scaleTexture() ;

constexpr float_t const& __cordl_internal_get_scrollTextureX() const;

constexpr float_t& __cordl_internal_get_scrollTextureX() ;

constexpr float_t const& __cordl_internal_get_scrollTextureY() const;

constexpr float_t& __cordl_internal_get_scrollTextureY() ;

constexpr ::UnityW<::CustomMapSupport::BezierSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::CustomMapSupport::BezierSpline>& __cordl_internal_get_spline() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& __cordl_internal_get_surfaceColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& __cordl_internal_get_surfaceColliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_surfacePlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_surfacePlane() ;

constexpr bool const& __cordl_internal_get_useCustomMesh() const;

constexpr bool& __cordl_internal_get_useCustomMesh() ;

constexpr bool const& __cordl_internal_get_useDefaultPlaceholder() const;

constexpr bool& __cordl_internal_get_useDefaultPlaceholder() ;

constexpr bool const& __cordl_internal_get_useWaterMesh() const;

constexpr bool& __cordl_internal_get_useWaterMesh() ;

constexpr float_t const& __cordl_internal_get_ziplineSegmentGenerationOffset() const;

constexpr float_t& __cordl_internal_get_ziplineSegmentGenerationOffset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ziplineSegmentPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ziplineSegmentPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>* const& __cordl_internal_get_ziplineSegments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>*& __cordl_internal_get_ziplineSegments() ;

constexpr void __cordl_internal_set_CosmeticItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  value) ;

constexpr void __cordl_internal_set_PlaceholderObject(::GT_CustomMapSupportRuntime::GTObject  value) ;

constexpr void __cordl_internal_set_SpeedVSAccelCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_accel_FV(float_t  value) ;

constexpr void __cordl_internal_set_applyPull_FV(bool  value) ;

constexpr void __cordl_internal_set_dampenLatVel_FV(bool  value) ;

constexpr void __cordl_internal_set_dampenXVel_FV(float_t  value) ;

constexpr void __cordl_internal_set_dampenZVel_FV(float_t  value) ;

constexpr void __cordl_internal_set_defaultCreatorCode(::StringW  value) ;

constexpr void __cordl_internal_set_disableGrip_FV(bool  value) ;

constexpr void __cordl_internal_set_enterClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_exitClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_liquidType(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  value) ;

constexpr void __cordl_internal_set_localWindDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_loopClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_loopCrescendoClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_maxAccel(float_t  value) ;

constexpr void __cordl_internal_set_maxDepth_FV(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceBeforeRespawn(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed_FV(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterAccel_FV(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterMaxSpeed_FV(float_t  value) ;

constexpr void __cordl_internal_set_pullToCenterMinDist_FV(float_t  value) ;

constexpr void __cordl_internal_set_ropeLength(int32_t  value) ;

constexpr void __cordl_internal_set_ropeSegmentGenerationOffset(float_t  value) ;

constexpr void __cordl_internal_set_ropeSwingSegmentPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ropeSwingSegments(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  value) ;

constexpr void __cordl_internal_set_scaleTexture(float_t  value) ;

constexpr void __cordl_internal_set_scrollTextureX(float_t  value) ;

constexpr void __cordl_internal_set_scrollTextureY(float_t  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::CustomMapSupport::BezierSpline>  value) ;

constexpr void __cordl_internal_set_surfaceColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value) ;

constexpr void __cordl_internal_set_surfacePlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_useCustomMesh(bool  value) ;

constexpr void __cordl_internal_set_useDefaultPlaceholder(bool  value) ;

constexpr void __cordl_internal_set_useWaterMesh(bool  value) ;

constexpr void __cordl_internal_set_ziplineSegmentGenerationOffset(float_t  value) ;

constexpr void __cordl_internal_set_ziplineSegmentPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ziplineSegments(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>*  value) ;

/// @brief Method .ctor, addr 0x9cb6e8c, size 0x224, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTObjectPlaceholder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTObjectPlaceholder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTObjectPlaceholder(GTObjectPlaceholder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTObjectPlaceholder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTObjectPlaceholder(GTObjectPlaceholder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30902};

/// @brief Field PlaceholderObject, offset: 0x20, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::GTObject  ___PlaceholderObject;

/// @brief Field useDefaultPlaceholder, offset: 0x24, size: 0x1, def value: None
 bool  ___useDefaultPlaceholder;

/// @brief Field useCustomMesh, offset: 0x25, size: 0x1, def value: None
 bool  ___useCustomMesh;

/// @brief Field maxDistanceBeforeRespawn, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxDistanceBeforeRespawn;

/// @brief Field maxSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field maxAccel, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxAccel;

/// [Nullable(1)]
/// @brief Field SpeedVSAccelCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___SpeedVSAccelCurve;

/// @brief Field localWindDirection, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localWindDirection;

/// @brief Field useWaterMesh, offset: 0x4c, size: 0x1, def value: None
 bool  ___useWaterMesh;

/// @brief Field scrollTextureX, offset: 0x50, size: 0x4, def value: None
 float_t  ___scrollTextureX;

/// @brief Field scrollTextureY, offset: 0x54, size: 0x4, def value: None
 float_t  ___scrollTextureY;

/// @brief Field scaleTexture, offset: 0x58, size: 0x4, def value: None
 float_t  ___scaleTexture;

/// [Tooltip("Transform for your flat Water Surface Plane. Y-Axis should point towards the Top of the water")]
/// @brief Field surfacePlane, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___surfacePlane;

/// [Nullable(1)]
/// [Tooltip("Put any mesh colliders here that are used for your Water Surface if they aren\'t flat and aligned with the surfacePlane Transform")]
/// @brief Field surfaceColliders, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  ___surfaceColliders;

/// [Tooltip("Type of liquid for this Water Volume. This will also determine the Splash Effects that are used.")]
/// @brief Field liquidType, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  ___liquidType;

/// [Tooltip("How fast to accelerate to the max speed of the Force Volume.\n\nExample: An acceleration of 10 would get to a max speed of 50 over 5 seconds.")]
/// [Range(0, 120)]
/// @brief Field accel_FV, offset: 0x74, size: 0x4, def value: None
 float_t  ___accel_FV;

/// [Tooltip("Max depth towards the center of the volume before forcing closing velocity to 0 (-1 to not use max depth)")]
/// [Range(-1, 100)]
/// @brief Field maxDepth_FV, offset: 0x78, size: 0x4, def value: None
 float_t  ___maxDepth_FV;

/// [Tooltip("Maximum speed, in meters per second, the player can move along the direction of the volume\'s Y-Axis.")]
/// [Range(0, 120)]
/// @brief Field maxSpeed_FV, offset: 0x7c, size: 0x4, def value: None
 float_t  ___maxSpeed_FV;

/// [Tooltip("If true, all surfaces become maximum slippery while in the force volume")]
/// @brief Field disableGrip_FV, offset: 0x80, size: 0x1, def value: None
 bool  ___disableGrip_FV;

/// @brief Field dampenLatVel_FV, offset: 0x81, size: 0x1, def value: None
 bool  ___dampenLatVel_FV;

/// [Tooltip("Dampen current velocity on the X axis")]
/// [Range(0, 100)]
/// @brief Field dampenXVel_FV, offset: 0x84, size: 0x4, def value: None
 float_t  ___dampenXVel_FV;

/// [Tooltip("Dampen current velocity on the Z axis")]
/// [Range(0, 100)]
/// @brief Field dampenZVel_FV, offset: 0x88, size: 0x4, def value: None
 float_t  ___dampenZVel_FV;

/// [Tooltip("If true, pulls player to center of the volume (towards Y-Axis)")]
/// @brief Field applyPull_FV, offset: 0x8c, size: 0x1, def value: None
 bool  ___applyPull_FV;

/// [Range(0, 500)]
/// @brief Field pullToCenterAccel_FV, offset: 0x90, size: 0x4, def value: None
 float_t  ___pullToCenterAccel_FV;

/// [Range(0, 500)]
/// @brief Field pullToCenterMaxSpeed_FV, offset: 0x94, size: 0x4, def value: None
 float_t  ___pullToCenterMaxSpeed_FV;

/// [Tooltip("The Minimum distance before the centering force is applied")]
/// [Range(0.0001, 0.5)]
/// @brief Field pullToCenterMinDist_FV, offset: 0x98, size: 0x4, def value: None
 float_t  ___pullToCenterMinDist_FV;

/// @brief Field enterClip, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___enterClip;

/// @brief Field exitClip, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___exitClip;

/// @brief Field loopClip, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___loopClip;

/// @brief Field loopCrescendoClip, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___loopCrescendoClip;

/// [Nullable(1)]
/// [Tooltip("Creator Code that is pre-filled on this specific ATM")]
/// @brief Field defaultCreatorCode, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___defaultCreatorCode;

/// [Range(3, 31)]
/// @brief Field ropeLength, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___ropeLength;

/// @brief Field ropeSwingSegmentPrefab, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ropeSwingSegmentPrefab;

/// @brief Field ropeSegmentGenerationOffset, offset: 0xd8, size: 0x4, def value: None
 float_t  ___ropeSegmentGenerationOffset;

/// [Nullable(1)]
/// @brief Field ropeSwingSegments, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  ___ropeSwingSegments;

/// @brief Field spline, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::CustomMapSupport::BezierSpline>  ___spline;

/// @brief Field ziplineSegmentPrefab, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ziplineSegmentPrefab;

/// @brief Field ziplineSegmentGenerationOffset, offset: 0xf8, size: 0x4, def value: None
 float_t  ___ziplineSegmentGenerationOffset;

/// [Nullable(1)]
/// @brief Field ziplineSegments, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>*  ___ziplineSegments;

/// @brief Field CosmeticItem, offset: 0x108, size: 0x4, def value: None
 ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  ___CosmeticItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___PlaceholderObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___useDefaultPlaceholder) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___useCustomMesh) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___maxDistanceBeforeRespawn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___maxSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___maxAccel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___SpeedVSAccelCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___localWindDirection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___useWaterMesh) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___scrollTextureX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___scrollTextureY) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___scaleTexture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___surfacePlane) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___surfaceColliders) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___liquidType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___accel_FV) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___maxDepth_FV) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___maxSpeed_FV) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___disableGrip_FV) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___dampenLatVel_FV) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___dampenXVel_FV) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___dampenZVel_FV) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___applyPull_FV) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___pullToCenterAccel_FV) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___pullToCenterMaxSpeed_FV) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___pullToCenterMinDist_FV) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___enterClip) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___exitClip) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___loopClip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___loopCrescendoClip) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___defaultCreatorCode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ropeLength) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ropeSwingSegmentPrefab) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ropeSegmentGenerationOffset) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ropeSwingSegments) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___spline) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ziplineSegmentPrefab) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ziplineSegmentGenerationOffset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___ziplineSegments) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder, ___CosmeticItem) == 0x108, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::GTObjectPlaceholder) == 0x110, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
