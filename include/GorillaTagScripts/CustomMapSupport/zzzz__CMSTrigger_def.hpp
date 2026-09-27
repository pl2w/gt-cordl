#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CMSTrigger)
namespace GT_CustomMapSupportRuntime {
class TriggerSettings;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSTrigger*, "GorillaTagScripts.CustomMapSupport", "CMSTrigger");
// Dependencies GT_CustomMapSupportRuntime.TriggerSource, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSTrigger
class CORDL_TYPE CMSTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enabledTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_enabledTime, put=__cordl_internal_set_enabledTime)) double_t  enabledTime;

/// @brief Field generalRetriggerDelay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_generalRetriggerDelay, put=__cordl_internal_set_generalRetriggerDelay)) double_t  generalRetriggerDelay;

/// @brief Field id, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) uint8_t  id;

/// @brief Field lastTriggerTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTriggerTime, put=__cordl_internal_set_lastTriggerTime)) double_t  lastTriggerTime;

/// @brief Field numAllowedTriggers, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_numAllowedTriggers, put=__cordl_internal_set_numAllowedTriggers)) uint8_t  numAllowedTriggers;

/// @brief Field numTimesTriggered, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_numTimesTriggered, put=__cordl_internal_set_numTimesTriggered)) uint8_t  numTimesTriggered;

/// @brief Field onEnableTriggerDelay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnableTriggerDelay, put=__cordl_internal_set_onEnableTriggerDelay)) double_t  onEnableTriggerDelay;

/// @brief Field retriggerAfterDuration, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_retriggerAfterDuration, put=__cordl_internal_set_retriggerAfterDuration)) bool  retriggerAfterDuration;

/// @brief Field retriggerStayDuration, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_retriggerStayDuration, put=__cordl_internal_set_retriggerStayDuration)) double_t  retriggerStayDuration;

/// @brief Field syncedToAllPlayers, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers, put=__cordl_internal_set_syncedToAllPlayers)) bool  syncedToAllPlayers;

/// @brief Field triggeredBy, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggeredBy, put=__cordl_internal_set_triggeredBy)) ::GT_CustomMapSupportRuntime::TriggerSource  triggeredBy;

/// @brief Field validationDistanceSquared, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_validationDistanceSquared, put=__cordl_internal_set_validationDistanceSquared)) float_t  validationDistanceSquared;

/// @brief Method CanTrigger, addr 0x5bdc330, size 0x170, virtual false, abstract: false, final false
inline bool CanTrigger() ;

/// @brief Method CopyTriggerSettings, addr 0x5bd887c, size 0x2e4, virtual true, abstract: false, final false
inline void CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings) ;

/// @brief Method GetID, addr 0x5bdceb0, size 0x8, virtual false, abstract: false, final false
inline uint8_t GetID() ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSTrigger* New_ctor() ;

/// @brief Method OnEnable, addr 0x5bdce84, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerActivation, addr 0x5bdd2b8, size 0x84, virtual false, abstract: false, final false
inline void OnTriggerActivation(::UnityEngine::Collider*  activatingCollider) ;

/// @brief Method OnTriggerEnter, addr 0x5bdceb8, size 0x30, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  triggeringCollider) ;

/// @brief Method OnTriggerStay, addr 0x5bdd33c, size 0x110, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method ResetTrigger, addr 0x5bd94cc, size 0xf0, virtual false, abstract: false, final false
inline void ResetTrigger(bool  onlyResetTriggerCount) ;

/// @brief Method SetLastTriggerTime, addr 0x5bdd44c, size 0x8, virtual false, abstract: false, final false
inline void SetLastTriggerTime(double_t  value) ;

/// @brief Method SetTriggerCount, addr 0x5bdb7c0, size 0xfc, virtual false, abstract: false, final false
inline void SetTriggerCount(uint8_t  value) ;

/// @brief Method Trigger, addr 0x5bd84c4, size 0x194, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

/// @brief Method ValidateCollider, addr 0x5bdcee8, size 0x3d0, virtual false, abstract: false, final false
inline bool ValidateCollider(::UnityEngine::Collider*  other) ;

constexpr double_t const& __cordl_internal_get_enabledTime() const;

constexpr double_t& __cordl_internal_get_enabledTime() ;

constexpr double_t const& __cordl_internal_get_generalRetriggerDelay() const;

constexpr double_t& __cordl_internal_get_generalRetriggerDelay() ;

constexpr uint8_t const& __cordl_internal_get_id() const;

constexpr uint8_t& __cordl_internal_get_id() ;

constexpr double_t const& __cordl_internal_get_lastTriggerTime() const;

constexpr double_t& __cordl_internal_get_lastTriggerTime() ;

constexpr uint8_t const& __cordl_internal_get_numAllowedTriggers() const;

constexpr uint8_t& __cordl_internal_get_numAllowedTriggers() ;

constexpr uint8_t const& __cordl_internal_get_numTimesTriggered() const;

constexpr uint8_t& __cordl_internal_get_numTimesTriggered() ;

constexpr double_t const& __cordl_internal_get_onEnableTriggerDelay() const;

constexpr double_t& __cordl_internal_get_onEnableTriggerDelay() ;

constexpr bool const& __cordl_internal_get_retriggerAfterDuration() const;

constexpr bool& __cordl_internal_get_retriggerAfterDuration() ;

constexpr double_t const& __cordl_internal_get_retriggerStayDuration() const;

constexpr double_t& __cordl_internal_get_retriggerStayDuration() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers() ;

constexpr ::GT_CustomMapSupportRuntime::TriggerSource const& __cordl_internal_get_triggeredBy() const;

constexpr ::GT_CustomMapSupportRuntime::TriggerSource& __cordl_internal_get_triggeredBy() ;

constexpr float_t const& __cordl_internal_get_validationDistanceSquared() const;

constexpr float_t& __cordl_internal_get_validationDistanceSquared() ;

constexpr void __cordl_internal_set_enabledTime(double_t  value) ;

constexpr void __cordl_internal_set_generalRetriggerDelay(double_t  value) ;

constexpr void __cordl_internal_set_id(uint8_t  value) ;

constexpr void __cordl_internal_set_lastTriggerTime(double_t  value) ;

constexpr void __cordl_internal_set_numAllowedTriggers(uint8_t  value) ;

constexpr void __cordl_internal_set_numTimesTriggered(uint8_t  value) ;

constexpr void __cordl_internal_set_onEnableTriggerDelay(double_t  value) ;

constexpr void __cordl_internal_set_retriggerAfterDuration(bool  value) ;

constexpr void __cordl_internal_set_retriggerStayDuration(double_t  value) ;

constexpr void __cordl_internal_set_syncedToAllPlayers(bool  value) ;

constexpr void __cordl_internal_set_triggeredBy(::GT_CustomMapSupportRuntime::TriggerSource  value) ;

constexpr void __cordl_internal_set_validationDistanceSquared(float_t  value) ;

/// @brief Method .ctor, addr 0x5bd8680, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSTrigger(CMSTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSTrigger(CMSTrigger const& ) = delete;

/// @brief Field INVALID_TRIGGER_ID offset 0xffffffff size 0x1
static constexpr uint8_t  INVALID_TRIGGER_ID{static_cast<uint8_t>(0xffu)};

/// @brief Field MAX_PHOTON_SERVER_TIME offset 0xffffffff size 0x8
static constexpr double_t  MAX_PHOTON_SERVER_TIME{static_cast<double_t>(4294967.295)};

/// @brief Field MINIMUM_VALIDATION_DISTANCE offset 0xffffffff size 0x4
static constexpr float_t  MINIMUM_VALIDATION_DISTANCE{static_cast<float_t>(2.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4033};

/// @brief Field syncedToAllPlayers, offset: 0x20, size: 0x1, def value: None
 bool  ___syncedToAllPlayers;

/// @brief Field validationDistanceSquared, offset: 0x24, size: 0x4, def value: None
 float_t  ___validationDistanceSquared;

/// @brief Field triggeredBy, offset: 0x28, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::TriggerSource  ___triggeredBy;

/// @brief Field onEnableTriggerDelay, offset: 0x30, size: 0x8, def value: None
 double_t  ___onEnableTriggerDelay;

/// @brief Field generalRetriggerDelay, offset: 0x38, size: 0x8, def value: None
 double_t  ___generalRetriggerDelay;

/// @brief Field retriggerAfterDuration, offset: 0x40, size: 0x1, def value: None
 bool  ___retriggerAfterDuration;

/// @brief Field retriggerStayDuration, offset: 0x48, size: 0x8, def value: None
 double_t  ___retriggerStayDuration;

/// @brief Field numAllowedTriggers, offset: 0x50, size: 0x1, def value: None
 uint8_t  ___numAllowedTriggers;

/// @brief Field numTimesTriggered, offset: 0x51, size: 0x1, def value: None
 uint8_t  ___numTimesTriggered;

/// @brief Field lastTriggerTime, offset: 0x58, size: 0x8, def value: None
 double_t  ___lastTriggerTime;

/// @brief Field enabledTime, offset: 0x60, size: 0x8, def value: None
 double_t  ___enabledTime;

/// @brief Field id, offset: 0x68, size: 0x1, def value: None
 uint8_t  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___syncedToAllPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___validationDistanceSquared) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___triggeredBy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___onEnableTriggerDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___generalRetriggerDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___retriggerAfterDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___retriggerStayDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___numAllowedTriggers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___numTimesTriggered) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___lastTriggerTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___enabledTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTrigger, ___id) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSTrigger) == 0x70, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
