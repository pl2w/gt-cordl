#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MonkeGravityControllerSettings.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MonkeGravityControllerSettings_RotationDirection_impl.hpp"
#include "UnityEngine/zzzz__ForceMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MonkeGravityControllerSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MonkeGravityControllerSettings_RotationDirection_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::*)()>(&::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cb7d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_activatorCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatorCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_activatorCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatorCollider;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_activatorCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatorCollider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_targetRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_targetRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigidbody;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_instantRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instantRotation;
}
constexpr bool const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_instantRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instantRotation;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_instantRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instantRotation = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_useRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotation;
}
constexpr bool const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_useRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRotation;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_useRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRotation = value;
}
constexpr ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_preferredRotationDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preferredRotationDirection;
}
constexpr ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_preferredRotationDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preferredRotationDirection;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_preferredRotationDirection(::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preferredRotationDirection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_overrideForceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideForceMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_overrideForceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideForceMode;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_overrideForceMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideForceMode = value;
}
constexpr ::UnityEngine::ForceMode& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_forceModeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceModeOverride;
}
constexpr ::UnityEngine::ForceMode const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_forceModeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceModeOverride;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_forceModeOverride(::UnityEngine::ForceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceModeOverride = value;
}
constexpr ::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_alwaysInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysInZone;
}
constexpr ::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings> const& GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_get_alwaysInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysInZone;
}
constexpr void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::__cordl_internal_set_alwaysInZone(::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysInZone = value;
}
inline void GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings* GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings::MonkeGravityControllerSettings()   {
}
