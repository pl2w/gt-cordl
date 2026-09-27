#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerCrank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BatteryChargerCrank)
namespace GlobalNamespace {
class BatteryCharger;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BatteryChargerCrank;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BatteryChargerCrank*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BatteryChargerCrank*, "", "BatteryChargerCrank");
// Dependencies HoldableObject, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: BatteryChargerCrank
class CORDL_TYPE BatteryChargerCrank : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
 __declspec(property(get=get_CrankIndex)) int32_t  CrankIndex;

 __declspec(property(get=get_CurrentAngle)) float_t  CurrentAngle;

 __declspec(property(get=get_IsHeld)) bool  IsHeld;

 __declspec(property(get=get_IsHeldLeftHand)) bool  IsHeldLeftHand;

/// @brief Field baseLocalAngle, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseLocalAngle, put=__cordl_internal_set_baseLocalAngle)) ::UnityEngine::Quaternion  baseLocalAngle;

/// @brief Field baseLocalAngleInverse, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseLocalAngleInverse, put=__cordl_internal_set_baseLocalAngleInverse)) ::UnityEngine::Quaternion  baseLocalAngleInverse;

/// @brief Field charger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_charger, put=__cordl_internal_set_charger)) ::UnityW<::GlobalNamespace::BatteryCharger>  charger;

/// @brief Field crankAngleOffset, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankAngleOffset, put=__cordl_internal_set_crankAngleOffset)) float_t  crankAngleOffset;

/// @brief Field crankHandleMaxZ, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleMaxZ, put=__cordl_internal_set_crankHandleMaxZ)) float_t  crankHandleMaxZ;

/// @brief Field crankHandleMinZ, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleMinZ, put=__cordl_internal_set_crankHandleMinZ)) float_t  crankHandleMinZ;

/// @brief Field crankHandleX, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleX, put=__cordl_internal_set_crankHandleX)) float_t  crankHandleX;

/// @brief Field crankHandleY, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleY, put=__cordl_internal_set_crankHandleY)) float_t  crankHandleY;

/// @brief Field crankIndex, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankIndex, put=__cordl_internal_set_crankIndex)) int32_t  crankIndex;

/// @brief Field crankRadius, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankRadius, put=__cordl_internal_set_crankRadius)) float_t  crankRadius;

/// @brief Field crankSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_crankSound, put=__cordl_internal_set_crankSound)) ::UnityW<::UnityEngine::AudioSource>  crankSound;

/// @brief Field crankSoundMaxPitch, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankSoundMaxPitch, put=__cordl_internal_set_crankSoundMaxPitch)) float_t  crankSoundMaxPitch;

/// @brief Field crankSoundMinPitch, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankSoundMinPitch, put=__cordl_internal_set_crankSoundMinPitch)) float_t  crankSoundMinPitch;

/// @brief Field currentAngle, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAngle, put=__cordl_internal_set_currentAngle)) float_t  currentAngle;

/// @brief Field isHeld, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Field isHeldLeftHand, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldLeftHand, put=__cordl_internal_set_isHeldLeftHand)) bool  isHeldLeftHand;

/// @brief Field lastAngle, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngle, put=__cordl_internal_set_lastAngle)) float_t  lastAngle;

/// @brief Field maxHandSnapDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHandSnapDistance, put=__cordl_internal_set_maxHandSnapDistance)) float_t  maxHandSnapDistance;

/// @brief Field rotatingPart, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingPart, put=__cordl_internal_set_rotatingPart)) ::UnityW<::UnityEngine::Transform>  rotatingPart;

/// @brief Field smoothCrankSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothCrankSpeed, put=__cordl_internal_set_smoothCrankSpeed)) float_t  smoothCrankSpeed;

/// @brief Field vibrationAmplitude, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationAmplitude, put=__cordl_internal_set_vibrationAmplitude)) float_t  vibrationAmplitude;

/// @brief Method ApplyVisualAngle, addr 0x5bfe3f8, size 0x104, virtual false, abstract: false, final false
inline void ApplyVisualAngle(float_t  angle) ;

/// @brief Method Awake, addr 0x5bfdac0, size 0x1cc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeAngleFromWorldPos, addr 0x5bfe158, size 0x12c, virtual false, abstract: false, final false
inline float_t ComputeAngleFromWorldPos(::UnityEngine::Vector3  worldPos) ;

/// @brief Method DropItemCleanup, addr 0x5bfe858, size 0x44, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method LateUpdate, addr 0x5bfdcb4, size 0x4a4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::BatteryChargerCrank* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5bfe960, size 0x104, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnGrab, addr 0x5bfe594, size 0x2c4, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5bfe590, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x5bfe89c, size 0xc4, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method SetVisualAngle, addr 0x5bfcfb0, size 0x90, virtual false, abstract: false, final false
inline void SetVisualAngle(float_t  angle) ;

/// @brief Method Start, addr 0x5bfdc8c, size 0x28, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopCrankSound, addr 0x5bfe4fc, size 0x94, virtual false, abstract: false, final false
inline void StopCrankSound() ;

/// @brief Method UpdateCrankSound, addr 0x5bfe284, size 0x174, virtual false, abstract: false, final false
inline void UpdateCrankSound(float_t  crankAmount) ;

/// @brief Method UpdateFromRemoteHand, addr 0x5bfce24, size 0x18c, virtual false, abstract: false, final false
inline void UpdateFromRemoteHand(::GlobalNamespace::VRRig*  rig, bool  leftHand) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseLocalAngle() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseLocalAngle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseLocalAngleInverse() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseLocalAngleInverse() ;

constexpr ::UnityW<::GlobalNamespace::BatteryCharger> const& __cordl_internal_get_charger() const;

constexpr ::UnityW<::GlobalNamespace::BatteryCharger>& __cordl_internal_get_charger() ;

constexpr float_t const& __cordl_internal_get_crankAngleOffset() const;

constexpr float_t& __cordl_internal_get_crankAngleOffset() ;

constexpr float_t const& __cordl_internal_get_crankHandleMaxZ() const;

constexpr float_t& __cordl_internal_get_crankHandleMaxZ() ;

constexpr float_t const& __cordl_internal_get_crankHandleMinZ() const;

constexpr float_t& __cordl_internal_get_crankHandleMinZ() ;

constexpr float_t const& __cordl_internal_get_crankHandleX() const;

constexpr float_t& __cordl_internal_get_crankHandleX() ;

constexpr float_t const& __cordl_internal_get_crankHandleY() const;

constexpr float_t& __cordl_internal_get_crankHandleY() ;

constexpr int32_t const& __cordl_internal_get_crankIndex() const;

constexpr int32_t& __cordl_internal_get_crankIndex() ;

constexpr float_t const& __cordl_internal_get_crankRadius() const;

constexpr float_t& __cordl_internal_get_crankRadius() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_crankSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_crankSound() ;

constexpr float_t const& __cordl_internal_get_crankSoundMaxPitch() const;

constexpr float_t& __cordl_internal_get_crankSoundMaxPitch() ;

constexpr float_t const& __cordl_internal_get_crankSoundMinPitch() const;

constexpr float_t& __cordl_internal_get_crankSoundMinPitch() ;

constexpr float_t const& __cordl_internal_get_currentAngle() const;

constexpr float_t& __cordl_internal_get_currentAngle() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr bool const& __cordl_internal_get_isHeldLeftHand() const;

constexpr bool& __cordl_internal_get_isHeldLeftHand() ;

constexpr float_t const& __cordl_internal_get_lastAngle() const;

constexpr float_t& __cordl_internal_get_lastAngle() ;

constexpr float_t const& __cordl_internal_get_maxHandSnapDistance() const;

constexpr float_t& __cordl_internal_get_maxHandSnapDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rotatingPart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rotatingPart() ;

constexpr float_t const& __cordl_internal_get_smoothCrankSpeed() const;

constexpr float_t& __cordl_internal_get_smoothCrankSpeed() ;

constexpr float_t const& __cordl_internal_get_vibrationAmplitude() const;

constexpr float_t& __cordl_internal_get_vibrationAmplitude() ;

constexpr void __cordl_internal_set_baseLocalAngle(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_baseLocalAngleInverse(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_charger(::UnityW<::GlobalNamespace::BatteryCharger>  value) ;

constexpr void __cordl_internal_set_crankAngleOffset(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleMaxZ(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleMinZ(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleX(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleY(float_t  value) ;

constexpr void __cordl_internal_set_crankIndex(int32_t  value) ;

constexpr void __cordl_internal_set_crankRadius(float_t  value) ;

constexpr void __cordl_internal_set_crankSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_crankSoundMaxPitch(float_t  value) ;

constexpr void __cordl_internal_set_crankSoundMinPitch(float_t  value) ;

constexpr void __cordl_internal_set_currentAngle(float_t  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

constexpr void __cordl_internal_set_isHeldLeftHand(bool  value) ;

constexpr void __cordl_internal_set_lastAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxHandSnapDistance(float_t  value) ;

constexpr void __cordl_internal_set_rotatingPart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_smoothCrankSpeed(float_t  value) ;

constexpr void __cordl_internal_set_vibrationAmplitude(float_t  value) ;

/// @brief Method .ctor, addr 0x5bfea64, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CrankIndex, addr 0x5bfdab8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CrankIndex() ;

/// @brief Method get_CurrentAngle, addr 0x5bfdab0, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentAngle() ;

/// @brief Method get_IsHeld, addr 0x5bfdaa0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHeld() ;

/// @brief Method get_IsHeldLeftHand, addr 0x5bfdaa8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHeldLeftHand() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatteryChargerCrank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatteryChargerCrank", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BatteryChargerCrank(BatteryChargerCrank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatteryChargerCrank", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatteryChargerCrank(BatteryChargerCrank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{408};

/// [SerializeField]
/// @brief Field charger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BatteryCharger>  ___charger;

/// [SerializeField]
/// @brief Field crankHandleX, offset: 0x28, size: 0x4, def value: None
 float_t  ___crankHandleX;

/// [SerializeField]
/// @brief Field crankHandleY, offset: 0x2c, size: 0x4, def value: None
 float_t  ___crankHandleY;

/// [SerializeField]
/// @brief Field crankHandleMinZ, offset: 0x30, size: 0x4, def value: None
 float_t  ___crankHandleMinZ;

/// [SerializeField]
/// @brief Field crankHandleMaxZ, offset: 0x34, size: 0x4, def value: None
 float_t  ___crankHandleMaxZ;

/// [SerializeField]
/// @brief Field maxHandSnapDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxHandSnapDistance;

/// [SerializeField]
/// @brief Field rotatingPart, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rotatingPart;

/// [SerializeField]
/// @brief Field vibrationAmplitude, offset: 0x48, size: 0x4, def value: None
 float_t  ___vibrationAmplitude;

/// [SerializeField]
/// @brief Field crankSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___crankSound;

/// [SerializeField]
/// @brief Field crankSoundMinPitch, offset: 0x58, size: 0x4, def value: None
 float_t  ___crankSoundMinPitch;

/// [SerializeField]
/// @brief Field crankSoundMaxPitch, offset: 0x5c, size: 0x4, def value: None
 float_t  ___crankSoundMaxPitch;

/// @brief Field crankAngleOffset, offset: 0x60, size: 0x4, def value: None
 float_t  ___crankAngleOffset;

/// @brief Field crankRadius, offset: 0x64, size: 0x4, def value: None
 float_t  ___crankRadius;

/// @brief Field lastAngle, offset: 0x68, size: 0x4, def value: None
 float_t  ___lastAngle;

/// @brief Field currentAngle, offset: 0x6c, size: 0x4, def value: None
 float_t  ___currentAngle;

/// @brief Field smoothCrankSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___smoothCrankSpeed;

/// @brief Field baseLocalAngle, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseLocalAngle;

/// @brief Field baseLocalAngleInverse, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseLocalAngleInverse;

/// @brief Field crankIndex, offset: 0x94, size: 0x4, def value: None
 int32_t  ___crankIndex;

/// @brief Field isHeld, offset: 0x98, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field isHeldLeftHand, offset: 0x99, size: 0x1, def value: None
 bool  ___isHeldLeftHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___charger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankHandleX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankHandleY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankHandleMinZ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankHandleMaxZ) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___maxHandSnapDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___rotatingPart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___vibrationAmplitude) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankSoundMinPitch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankSoundMaxPitch) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankAngleOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___lastAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___currentAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___smoothCrankSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___baseLocalAngle) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___baseLocalAngleInverse) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___crankIndex) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___isHeld) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BatteryChargerCrank, ___isHeldLeftHand) == 0x99, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BatteryChargerCrank) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
