#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/TriggerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerSettings)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class TriggerSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::TriggerSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::TriggerSettings*, "GT_CustomMapSupportRuntime", "TriggerSettings");
// Dependencies GT_CustomMapSupportRuntime.TriggerSource, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.TriggerSettings
class CORDL_TYPE TriggerSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field generalRetriggerDelay, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_generalRetriggerDelay, put=__cordl_internal_set_generalRetriggerDelay)) double_t  generalRetriggerDelay;

/// @brief Field numAllowedTriggers, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_numAllowedTriggers, put=__cordl_internal_set_numAllowedTriggers)) uint8_t  numAllowedTriggers;

/// @brief Field onEnableTriggerDelay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnableTriggerDelay, put=__cordl_internal_set_onEnableTriggerDelay)) double_t  onEnableTriggerDelay;

/// @brief Field retriggerAfterDuration, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_retriggerAfterDuration, put=__cordl_internal_set_retriggerAfterDuration)) bool  retriggerAfterDuration;

/// @brief Field retriggerDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_retriggerDelay, put=__cordl_internal_set_retriggerDelay)) float_t  retriggerDelay;

/// @brief Field retriggerStayDuration, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_retriggerStayDuration, put=__cordl_internal_set_retriggerStayDuration)) double_t  retriggerStayDuration;

/// @brief Field syncedToAllPlayers_private, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers_private, put=__cordl_internal_set_syncedToAllPlayers_private)) bool  syncedToAllPlayers_private;

/// @brief Field triggerId, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerId, put=__cordl_internal_set_triggerId)) uint8_t  triggerId;

/// @brief Field triggeredBy, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggeredBy, put=__cordl_internal_set_triggeredBy)) ::GT_CustomMapSupportRuntime::TriggerSource  triggeredBy;

/// @brief Field triggeredByBody, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggeredByBody, put=__cordl_internal_set_triggeredByBody)) bool  triggeredByBody;

/// @brief Field triggeredByHands, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggeredByHands, put=__cordl_internal_set_triggeredByHands)) bool  triggeredByHands;

/// @brief Field triggeredByHead, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggeredByHead, put=__cordl_internal_set_triggeredByHead)) bool  triggeredByHead;

/// @brief Field validationDistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_validationDistance, put=__cordl_internal_set_validationDistance)) float_t  validationDistance;

/// @brief Field validationDistanceOverride, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_validationDistanceOverride, put=__cordl_internal_set_validationDistanceOverride)) float_t  validationDistanceOverride;

static inline ::GT_CustomMapSupportRuntime::TriggerSettings* New_ctor() ;

/// @brief Method PropagateProperties, addr 0x9cb8d90, size 0x4, virtual true, abstract: false, final false
inline void PropagateProperties() ;

constexpr double_t const& __cordl_internal_get_generalRetriggerDelay() const;

constexpr double_t& __cordl_internal_get_generalRetriggerDelay() ;

constexpr uint8_t const& __cordl_internal_get_numAllowedTriggers() const;

constexpr uint8_t& __cordl_internal_get_numAllowedTriggers() ;

constexpr double_t const& __cordl_internal_get_onEnableTriggerDelay() const;

constexpr double_t& __cordl_internal_get_onEnableTriggerDelay() ;

constexpr bool const& __cordl_internal_get_retriggerAfterDuration() const;

constexpr bool& __cordl_internal_get_retriggerAfterDuration() ;

constexpr float_t const& __cordl_internal_get_retriggerDelay() const;

constexpr float_t& __cordl_internal_get_retriggerDelay() ;

constexpr double_t const& __cordl_internal_get_retriggerStayDuration() const;

constexpr double_t& __cordl_internal_get_retriggerStayDuration() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers_private() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers_private() ;

constexpr uint8_t const& __cordl_internal_get_triggerId() const;

constexpr uint8_t& __cordl_internal_get_triggerId() ;

constexpr ::GT_CustomMapSupportRuntime::TriggerSource const& __cordl_internal_get_triggeredBy() const;

constexpr ::GT_CustomMapSupportRuntime::TriggerSource& __cordl_internal_get_triggeredBy() ;

constexpr bool const& __cordl_internal_get_triggeredByBody() const;

constexpr bool& __cordl_internal_get_triggeredByBody() ;

constexpr bool const& __cordl_internal_get_triggeredByHands() const;

constexpr bool& __cordl_internal_get_triggeredByHands() ;

constexpr bool const& __cordl_internal_get_triggeredByHead() const;

constexpr bool& __cordl_internal_get_triggeredByHead() ;

constexpr float_t const& __cordl_internal_get_validationDistance() const;

constexpr float_t& __cordl_internal_get_validationDistance() ;

constexpr float_t const& __cordl_internal_get_validationDistanceOverride() const;

constexpr float_t& __cordl_internal_get_validationDistanceOverride() ;

constexpr void __cordl_internal_set_generalRetriggerDelay(double_t  value) ;

constexpr void __cordl_internal_set_numAllowedTriggers(uint8_t  value) ;

constexpr void __cordl_internal_set_onEnableTriggerDelay(double_t  value) ;

constexpr void __cordl_internal_set_retriggerAfterDuration(bool  value) ;

constexpr void __cordl_internal_set_retriggerDelay(float_t  value) ;

constexpr void __cordl_internal_set_retriggerStayDuration(double_t  value) ;

constexpr void __cordl_internal_set_syncedToAllPlayers_private(bool  value) ;

constexpr void __cordl_internal_set_triggerId(uint8_t  value) ;

constexpr void __cordl_internal_set_triggeredBy(::GT_CustomMapSupportRuntime::TriggerSource  value) ;

constexpr void __cordl_internal_set_triggeredByBody(bool  value) ;

constexpr void __cordl_internal_set_triggeredByHands(bool  value) ;

constexpr void __cordl_internal_set_triggeredByHead(bool  value) ;

constexpr void __cordl_internal_set_validationDistance(float_t  value) ;

constexpr void __cordl_internal_set_validationDistanceOverride(float_t  value) ;

/// @brief Method .ctor, addr 0x9cb71bc, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerSettings(TriggerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerSettings(TriggerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30935};

/// [Tooltip("Hands and Body/Head colliders have inherently different settings in GorillaTag and cannot be detected on the same trigger.")]
/// @brief Field triggeredBy, offset: 0x20, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::TriggerSource  ___triggeredBy;

/// [Tooltip("Deprecated, use the \'triggeredBy\' property instead. \nHands and Body/Head colliders have inherently different settings in GorillaTag and cannot be detected on the same trigger.")]
/// [HideInInspector]
/// @brief Field triggeredByHands, offset: 0x24, size: 0x1, def value: None
 bool  ___triggeredByHands;

/// [Tooltip("Deprecated, use the \'triggeredBy\' property instead. \nHands and Body/Head colliders have inherently different settings in GorillaTag and cannot be detected on the same trigger.")]
/// [HideInInspector]
/// @brief Field triggeredByBody, offset: 0x25, size: 0x1, def value: None
 bool  ___triggeredByBody;

/// [Tooltip("Deprecated, use the \'triggeredBy\' property instead. \nHands and Body/Head colliders have inherently different settings in GorillaTag and cannot be detected on the same trigger.")]
/// [HideInInspector]
/// @brief Field triggeredByHead, offset: 0x26, size: 0x1, def value: None
 bool  ___triggeredByHead;

/// [Tooltip("Should this Trigger re-trigger if a player stays inside it for long enough?")]
/// @brief Field retriggerAfterDuration, offset: 0x27, size: 0x1, def value: None
 bool  ___retriggerAfterDuration;

/// [Tooltip("(Seconds) If \'retriggerAfterDuration\' is TRUE, how long does a player need to Stay inside the Trigger before it re-triggers? If \'generalRetriggerDelay\' is larger, that value will be used instead.")]
/// @brief Field retriggerStayDuration, offset: 0x28, size: 0x8, def value: None
 double_t  ___retriggerStayDuration;

/// [HideInInspector]
/// @brief Field retriggerDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ___retriggerDelay;

/// [Tooltip("(Seconds) When this trigger is Enabled/Activated, it can\'t be triggered until this duration has passed.")]
/// @brief Field onEnableTriggerDelay, offset: 0x38, size: 0x8, def value: None
 double_t  ___onEnableTriggerDelay;

/// [Tooltip("(Seconds) After being triggered, how long before this trigger can be triggered again?")]
/// @brief Field generalRetriggerDelay, offset: 0x40, size: 0x8, def value: None
 double_t  ___generalRetriggerDelay;

/// [Tooltip("How many times is this Trigger allowed to trigger? 0 means infinite")]
/// @brief Field numAllowedTriggers, offset: 0x48, size: 0x1, def value: None
 uint8_t  ___numAllowedTriggers;

/// [Tooltip("Validation Distance is used to validate network synced trigger activations and is automatically calculated during the Map Export process for single-collider triggers using a Box, Sphere, or Capsule collider. To customize this, or if using a MeshCollider or multi-collider setup, you can set this override to a positive, non-zero value. Generally it should be equal to about 1.5 times the full collider radius (including scale). For example: if using a Sphere collider with radius 2.0 and its GameObject has a scale of 3.0 (resulting in an actual radius of 6.0), you would set this value to (2.0 * 3.0) * 1.5 = 9.0")]
/// @brief Field validationDistanceOverride, offset: 0x4c, size: 0x4, def value: None
 float_t  ___validationDistanceOverride;

/// [HideInInspector]
/// @brief Field triggerId, offset: 0x50, size: 0x1, def value: None
 uint8_t  ___triggerId;

/// [HideInInspector]
/// @brief Field validationDistance, offset: 0x54, size: 0x4, def value: None
 float_t  ___validationDistance;

/// [HideInInspector]
/// @brief Field syncedToAllPlayers_private, offset: 0x58, size: 0x1, def value: None
 bool  ___syncedToAllPlayers_private;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___triggeredBy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___triggeredByHands) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___triggeredByBody) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___triggeredByHead) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___retriggerAfterDuration) == 0x27, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___retriggerStayDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___retriggerDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___onEnableTriggerDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___generalRetriggerDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___numAllowedTriggers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___validationDistanceOverride) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___triggerId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___validationDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::TriggerSettings, ___syncedToAllPlayers_private) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::TriggerSettings) == 0x60, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
