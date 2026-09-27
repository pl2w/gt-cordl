#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GTObjectPlaceholder.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EZoneLiquidType_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_ECustomMapCosmeticItem_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_def.hpp"
#include "CustomMapSupport/zzzz__BezierSpline_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ForceVolumeProperties_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_ECustomMapCosmeticItem_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__RopeSwingSegment_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__WaterVolumeProperties_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ZiplineSegment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GTObjectPlaceholder.GetWaterVolumeProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GT_CustomMapSupportRuntime::WaterVolumeProperties (::GT_CustomMapSupportRuntime::GTObjectPlaceholder::*)()>(&::GT_CustomMapSupportRuntime::GTObjectPlaceholder::GetWaterVolumeProperties)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cb6cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {"GetWaterVolumeProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GTObjectPlaceholder.GetForceVolumeProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GT_CustomMapSupportRuntime::ForceVolumeProperties (::GT_CustomMapSupportRuntime::GTObjectPlaceholder::*)()>(&::GT_CustomMapSupportRuntime::GTObjectPlaceholder::GetForceVolumeProperties)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9cb6d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {"GetForceVolumeProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GTObjectPlaceholder.SetForceVolumeProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::GTObjectPlaceholder::*)(::GT_CustomMapSupportRuntime::ForceVolumeProperties)>(&::GT_CustomMapSupportRuntime::GTObjectPlaceholder::SetForceVolumeProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9cb6dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {"SetForceVolumeProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ForceVolumeProperties>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::GTObjectPlaceholder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::GTObjectPlaceholder::*)()>(&::GT_CustomMapSupportRuntime::GTObjectPlaceholder::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9cb6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GT_CustomMapSupportRuntime::GTObject& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_PlaceholderObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaceholderObject;
}
constexpr ::GT_CustomMapSupportRuntime::GTObject const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_PlaceholderObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlaceholderObject;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_PlaceholderObject(::GT_CustomMapSupportRuntime::GTObject  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlaceholderObject = value;
}
constexpr bool& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_useDefaultPlaceholder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDefaultPlaceholder;
}
constexpr bool const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_useDefaultPlaceholder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDefaultPlaceholder;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_useDefaultPlaceholder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useDefaultPlaceholder = value;
}
constexpr bool& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_useCustomMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomMesh;
}
constexpr bool const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_useCustomMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomMesh;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_useCustomMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomMesh = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxDistanceBeforeRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceBeforeRespawn;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxDistanceBeforeRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceBeforeRespawn;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_maxDistanceBeforeRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceBeforeRespawn = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAccel;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAccel;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_maxAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAccel = value;
}
constexpr ::UnityEngine::AnimationCurve*& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_SpeedVSAccelCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeedVSAccelCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_SpeedVSAccelCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeedVSAccelCurve;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_SpeedVSAccelCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeedVSAccelCurve = value;
}
constexpr ::UnityEngine::Vector3& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_localWindDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localWindDirection;
}
constexpr ::UnityEngine::Vector3 const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_localWindDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localWindDirection;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_localWindDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localWindDirection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_useWaterMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWaterMesh;
}
constexpr bool const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_useWaterMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWaterMesh;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_useWaterMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWaterMesh = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_scrollTextureX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollTextureX;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_scrollTextureX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollTextureX;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_scrollTextureX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollTextureX = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_scrollTextureY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollTextureY;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_scrollTextureY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollTextureY;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_scrollTextureY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollTextureY = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_scaleTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTexture;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_scaleTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTexture;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_scaleTexture(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleTexture = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_surfacePlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlane;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_surfacePlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfacePlane;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_surfacePlane(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfacePlane = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_surfaceColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_surfaceColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceColliders;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_surfaceColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceColliders = value;
}
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_liquidType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidType;
}
constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_liquidType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidType;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_liquidType(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidType = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_accel_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_accel_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_accel_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accel_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxDepth_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxDepth_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_maxDepth_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDepth_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxSpeed_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_maxSpeed_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_maxSpeed_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed_FV = value;
}
constexpr bool& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_disableGrip_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip_FV;
}
constexpr bool const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_disableGrip_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_disableGrip_FV(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGrip_FV = value;
}
constexpr bool& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_dampenLatVel_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLatVel_FV;
}
constexpr bool const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_dampenLatVel_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLatVel_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_dampenLatVel_FV(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenLatVel_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_dampenXVel_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVel_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_dampenXVel_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVel_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_dampenXVel_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenXVel_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_dampenZVel_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenZVel_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_dampenZVel_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenZVel_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_dampenZVel_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenZVel_FV = value;
}
constexpr bool& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_applyPull_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPull_FV;
}
constexpr bool const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_applyPull_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPull_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_applyPull_FV(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyPull_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_pullToCenterAccel_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_pullToCenterAccel_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_pullToCenterAccel_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterAccel_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_pullToCenterMaxSpeed_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_pullToCenterMaxSpeed_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_pullToCenterMaxSpeed_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterMaxSpeed_FV = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_pullToCenterMinDist_FV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMinDist_FV;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_pullToCenterMinDist_FV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMinDist_FV;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_pullToCenterMinDist_FV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterMinDist_FV = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_enterClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_enterClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterClip;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_enterClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_exitClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_exitClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitClip;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_exitClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_loopClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_loopClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopClip;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_loopClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_loopCrescendoClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCrescendoClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_loopCrescendoClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCrescendoClip;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_loopCrescendoClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopCrescendoClip = value;
}
constexpr ::StringW& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_defaultCreatorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCreatorCode;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_defaultCreatorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCreatorCode;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_defaultCreatorCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCreatorCode = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeLength;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeLength;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ropeLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeLength = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeSwingSegmentPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingSegmentPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeSwingSegmentPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingSegmentPrefab;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ropeSwingSegmentPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeSwingSegmentPrefab = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeSegmentGenerationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSegmentGenerationOffset;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeSegmentGenerationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSegmentGenerationOffset;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ropeSegmentGenerationOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeSegmentGenerationOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeSwingSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingSegments;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>* const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ropeSwingSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeSwingSegments;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ropeSwingSegments(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::RopeSwingSegment>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeSwingSegments = value;
}
constexpr ::UnityW<::CustomMapSupport::BezierSpline>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::CustomMapSupport::BezierSpline> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_spline(::UnityW<::CustomMapSupport::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ziplineSegmentPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineSegmentPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ziplineSegmentPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineSegmentPrefab;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ziplineSegmentPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineSegmentPrefab = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ziplineSegmentGenerationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineSegmentGenerationOffset;
}
constexpr float_t const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ziplineSegmentGenerationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineSegmentGenerationOffset;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ziplineSegmentGenerationOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineSegmentGenerationOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>*& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ziplineSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineSegments;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>* const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_ziplineSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ziplineSegments;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_ziplineSegments(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::ZiplineSegment>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ziplineSegments = value;
}
constexpr ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_CosmeticItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticItem;
}
constexpr ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem const& GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_get_CosmeticItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CosmeticItem;
}
constexpr void GT_CustomMapSupportRuntime::GTObjectPlaceholder::__cordl_internal_set_CosmeticItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CosmeticItem = value;
}
inline ::GT_CustomMapSupportRuntime::WaterVolumeProperties GT_CustomMapSupportRuntime::GTObjectPlaceholder::GetWaterVolumeProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {"GetWaterVolumeProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GT_CustomMapSupportRuntime::WaterVolumeProperties>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::ForceVolumeProperties GT_CustomMapSupportRuntime::GTObjectPlaceholder::GetForceVolumeProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {"GetForceVolumeProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GT_CustomMapSupportRuntime::ForceVolumeProperties>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::GTObjectPlaceholder::SetForceVolumeProperties(::GT_CustomMapSupportRuntime::ForceVolumeProperties  props)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {"SetForceVolumeProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::ForceVolumeProperties>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, props);
}
inline void GT_CustomMapSupportRuntime::GTObjectPlaceholder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::GTObjectPlaceholder* GT_CustomMapSupportRuntime::GTObjectPlaceholder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::GTObjectPlaceholder*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::GTObjectPlaceholder::GTObjectPlaceholder()   {
}
