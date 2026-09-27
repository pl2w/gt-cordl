#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MonkeGravityControllerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__MonkeGravityControllerSettings_RotationDirection_def.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonkeGravityControllerSettings)
namespace GT_CustomMapSupportRuntime {
class BasicGravityZoneSettings;
}
namespace GlobalNamespace {
struct MonkeGravityControllerSettings_RotationDirection;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MonkeGravityControllerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings*, "GT_CustomMapSupportRuntime", "MonkeGravityControllerSettings");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies GT_CustomMapSupportRuntime.MonkeGravityControllerSettings::RotationDirection, UnityEngine.ForceMode, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MonkeGravityControllerSettings
class CORDL_TYPE MonkeGravityControllerSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationDirection = ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection;

/// @brief Field activatorCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activatorCollider, put=__cordl_internal_set_activatorCollider)) ::UnityW<::UnityEngine::Collider>  activatorCollider;

/// @brief Field alwaysInZone, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_alwaysInZone, put=__cordl_internal_set_alwaysInZone)) ::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>  alwaysInZone;

/// @brief Field forceModeOverride, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_forceModeOverride, put=__cordl_internal_set_forceModeOverride)) ::UnityEngine::ForceMode  forceModeOverride;

/// @brief Field instantRotation, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_instantRotation, put=__cordl_internal_set_instantRotation)) bool  instantRotation;

/// @brief Field overrideForceMode, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideForceMode, put=__cordl_internal_set_overrideForceMode)) bool  overrideForceMode;

/// @brief Field preferredRotationDirection, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_preferredRotationDirection, put=__cordl_internal_set_preferredRotationDirection)) ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection  preferredRotationDirection;

/// @brief Field targetRigidbody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRigidbody, put=__cordl_internal_set_targetRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  targetRigidbody;

/// @brief Field targetTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

/// @brief Field useRotation, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRotation, put=__cordl_internal_set_useRotation)) bool  useRotation;

static inline ::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_activatorCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_activatorCollider() ;

constexpr ::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings> const& __cordl_internal_get_alwaysInZone() const;

constexpr ::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>& __cordl_internal_get_alwaysInZone() ;

constexpr ::UnityEngine::ForceMode const& __cordl_internal_get_forceModeOverride() const;

constexpr ::UnityEngine::ForceMode& __cordl_internal_get_forceModeOverride() ;

constexpr bool const& __cordl_internal_get_instantRotation() const;

constexpr bool& __cordl_internal_get_instantRotation() ;

constexpr bool const& __cordl_internal_get_overrideForceMode() const;

constexpr bool& __cordl_internal_get_overrideForceMode() ;

constexpr ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const& __cordl_internal_get_preferredRotationDirection() const;

constexpr ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection& __cordl_internal_get_preferredRotationDirection() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_targetRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_targetRigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr bool const& __cordl_internal_get_useRotation() const;

constexpr bool& __cordl_internal_get_useRotation() ;

constexpr void __cordl_internal_set_activatorCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_alwaysInZone(::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>  value) ;

constexpr void __cordl_internal_set_forceModeOverride(::UnityEngine::ForceMode  value) ;

constexpr void __cordl_internal_set_instantRotation(bool  value) ;

constexpr void __cordl_internal_set_overrideForceMode(bool  value) ;

constexpr void __cordl_internal_set_preferredRotationDirection(::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection  value) ;

constexpr void __cordl_internal_set_targetRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_useRotation(bool  value) ;

/// @brief Method .ctor, addr 0x9cb7d5c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeGravityControllerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeGravityControllerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeGravityControllerSettings(MonkeGravityControllerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeGravityControllerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeGravityControllerSettings(MonkeGravityControllerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30917};

/// [Tooltip("Collider used by gravity zones to detect this object. Optional when Always In Zone is set; otherwise falls back to a collider on this GameObject.")]
/// @brief Field activatorCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___activatorCollider;

/// [Tooltip("Rigidbody the gravity forces are applied to. Falls back to a rigidbody on this GameObject.")]
/// @brief Field targetRigidbody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___targetRigidbody;

/// [Tooltip("Transform used for position/rotation. Falls back to this GameObject\'s transform.")]
/// @brief Field targetTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

/// [Header("Rotation Settings")]
/// [Tooltip("If enabled, the target snaps to the gravity up direction instead of rotating over time.")]
/// @brief Field instantRotation, offset: 0x38, size: 0x1, def value: None
 bool  ___instantRotation;

/// [Tooltip("If enabled, the target rotates to align with the gravity up direction.")]
/// @brief Field useRotation, offset: 0x39, size: 0x1, def value: None
 bool  ___useRotation;

/// [Tooltip("The direction we wish to rotate if the target is 180 degrees off.")]
/// @brief Field preferredRotationDirection, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection  ___preferredRotationDirection;

/// [Header("Force Settings")]
/// [Tooltip("If enabled, gravity forces are applied with the Force Mode Override instead of the mode requested by the zone.")]
/// @brief Field overrideForceMode, offset: 0x40, size: 0x1, def value: None
 bool  ___overrideForceMode;

/// @brief Field forceModeOverride, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::ForceMode  ___forceModeOverride;

/// [Tooltip("Optional gravity zone this controller is permanently inside, without needing trigger contact. When set, the Activator Collider is not required.")]
/// @brief Field alwaysInZone, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>  ___alwaysInZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___activatorCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___targetRigidbody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___targetTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___instantRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___useRotation) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___preferredRotationDirection) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___overrideForceMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___forceModeOverride) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings, ___alwaysInZone) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings) == 0x50, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
