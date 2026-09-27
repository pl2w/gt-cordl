#pragma once
// IWYU pragma private; include "GlobalNamespace/RCShip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RCHoverboard_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RCShip)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RCShip;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RCShip*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RCShip*, "", "RCShip");
// Dependencies RCHoverboard
namespace GlobalNamespace {
// Is value type: false
// CS Name: RCShip
class CORDL_TYPE RCShip : public ::GlobalNamespace::RCHoverboard {
public:
// Declarations
/// @brief Field OnCannonSideChanged, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCannonSideChanged, put=__cordl_internal_set_OnCannonSideChanged)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnCannonSideChanged;

/// @brief Field OnFire, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFire, put=__cordl_internal_set_OnFire)) ::UnityEngine::Events::UnityEvent*  OnFire;

/// @brief Field OnMoveStarted, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveStarted, put=__cordl_internal_set_OnMoveStarted)) ::UnityEngine::Events::UnityEvent*  OnMoveStarted;

/// @brief Field OnMoveStopped, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveStopped, put=__cordl_internal_set_OnMoveStopped)) ::UnityEngine::Events::UnityEvent*  OnMoveStopped;

/// @brief Field armedAfterMobilize, offset 0x2dc, size 0x1 
 __declspec(property(get=__cordl_internal_get_armedAfterMobilize, put=__cordl_internal_set_armedAfterMobilize)) bool  armedAfterMobilize;

/// @brief Field cannonToLeft, offset 0x2dd, size 0x1 
 __declspec(property(get=__cordl_internal_get_cannonToLeft, put=__cordl_internal_set_cannonToLeft)) bool  cannonToLeft;

/// @brief Field cannonTransform, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cannonTransform, put=__cordl_internal_set_cannonTransform)) ::UnityW<::UnityEngine::Transform>  cannonTransform;

/// @brief Field cannonYawSpeed, offset 0x2c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cannonYawSpeed, put=__cordl_internal_set_cannonYawSpeed)) float_t  cannonYawSpeed;

/// @brief Field faceIsDown, offset 0x2da, size 0x1 
 __declspec(property(get=__cordl_internal_get_faceIsDown, put=__cordl_internal_set_faceIsDown)) bool  faceIsDown;

/// @brief Field facePressThreshold, offset 0x2cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_facePressThreshold, put=__cordl_internal_set_facePressThreshold)) float_t  facePressThreshold;

/// @brief Field faceReleaseThreshold, offset 0x2d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_faceReleaseThreshold, put=__cordl_internal_set_faceReleaseThreshold)) float_t  faceReleaseThreshold;

/// @brief Field isMovingShared, offset 0x2e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMovingShared, put=__cordl_internal_set_isMovingShared)) bool  isMovingShared;

/// @brief Field lastCannonToLeft, offset 0x2df, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastCannonToLeft, put=__cordl_internal_set_lastCannonToLeft)) bool  lastCannonToLeft;

/// @brief Field lastFireFlip, offset 0x2de, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastFireFlip, put=__cordl_internal_set_lastFireFlip)) bool  lastFireFlip;

/// @brief Field lastIsMoving, offset 0x2e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastIsMoving, put=__cordl_internal_set_lastIsMoving)) bool  lastIsMoving;

/// @brief Field leftYaw, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftYaw, put=__cordl_internal_set_leftYaw)) float_t  leftYaw;

/// @brief Field movingSpeedThreshold, offset 0x2d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_movingSpeedThreshold, put=__cordl_internal_set_movingSpeedThreshold)) float_t  movingSpeedThreshold;

/// @brief Field prevFaceDown, offset 0x2d9, size 0x1 
 __declspec(property(get=__cordl_internal_get_prevFaceDown, put=__cordl_internal_set_prevFaceDown)) bool  prevFaceDown;

/// @brief Field prevTriggerDown, offset 0x2d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_prevTriggerDown, put=__cordl_internal_set_prevTriggerDown)) bool  prevTriggerDown;

/// @brief Field rightYaw, offset 0x2bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightYaw, put=__cordl_internal_set_rightYaw)) float_t  rightYaw;

/// @brief Field triggerIsDown, offset 0x2db, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerIsDown, put=__cordl_internal_set_triggerIsDown)) bool  triggerIsDown;

/// @brief Field triggerPressThreshold, offset 0x2c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerPressThreshold, put=__cordl_internal_set_triggerPressThreshold)) float_t  triggerPressThreshold;

/// @brief Field triggerReleaseThreshold, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerReleaseThreshold, put=__cordl_internal_set_triggerReleaseThreshold)) float_t  triggerReleaseThreshold;

/// @brief Method AuthorityUpdate, addr 0x5617f94, size 0x2e4, virtual true, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method GetDataB, addr 0x5617ec4, size 0x28, virtual false, abstract: false, final false
inline uint8_t GetDataB() ;

static inline ::GlobalNamespace::RCShip* New_ctor() ;

/// @brief Method ReadCannonBit, addr 0x5617f34, size 0x34, virtual false, abstract: false, final false
inline bool ReadCannonBit() ;

/// @brief Method ReadFireFlip, addr 0x5617f68, size 0x2c, virtual false, abstract: false, final false
inline bool ReadFireFlip() ;

/// @brief Method RemoteUpdate, addr 0x5618278, size 0x140, virtual true, abstract: false, final false
inline void RemoteUpdate(float_t  dt) ;

/// @brief Method SetDataB, addr 0x5617eec, size 0x20, virtual false, abstract: false, final false
inline void SetDataB(uint8_t  b) ;

/// @brief Method SharedUpdate, addr 0x56183b8, size 0x1dc, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

/// @brief Method WriteCannonBit, addr 0x5617f0c, size 0x28, virtual false, abstract: false, final false
inline void WriteCannonBit(bool  toLeft) ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnCannonSideChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnCannonSideChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnFire() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnFire() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnMoveStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnMoveStarted() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnMoveStopped() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnMoveStopped() ;

constexpr bool const& __cordl_internal_get_armedAfterMobilize() const;

constexpr bool& __cordl_internal_get_armedAfterMobilize() ;

constexpr bool const& __cordl_internal_get_cannonToLeft() const;

constexpr bool& __cordl_internal_get_cannonToLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cannonTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cannonTransform() ;

constexpr float_t const& __cordl_internal_get_cannonYawSpeed() const;

constexpr float_t& __cordl_internal_get_cannonYawSpeed() ;

constexpr bool const& __cordl_internal_get_faceIsDown() const;

constexpr bool& __cordl_internal_get_faceIsDown() ;

constexpr float_t const& __cordl_internal_get_facePressThreshold() const;

constexpr float_t& __cordl_internal_get_facePressThreshold() ;

constexpr float_t const& __cordl_internal_get_faceReleaseThreshold() const;

constexpr float_t& __cordl_internal_get_faceReleaseThreshold() ;

constexpr bool const& __cordl_internal_get_isMovingShared() const;

constexpr bool& __cordl_internal_get_isMovingShared() ;

constexpr bool const& __cordl_internal_get_lastCannonToLeft() const;

constexpr bool& __cordl_internal_get_lastCannonToLeft() ;

constexpr bool const& __cordl_internal_get_lastFireFlip() const;

constexpr bool& __cordl_internal_get_lastFireFlip() ;

constexpr bool const& __cordl_internal_get_lastIsMoving() const;

constexpr bool& __cordl_internal_get_lastIsMoving() ;

constexpr float_t const& __cordl_internal_get_leftYaw() const;

constexpr float_t& __cordl_internal_get_leftYaw() ;

constexpr float_t const& __cordl_internal_get_movingSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_movingSpeedThreshold() ;

constexpr bool const& __cordl_internal_get_prevFaceDown() const;

constexpr bool& __cordl_internal_get_prevFaceDown() ;

constexpr bool const& __cordl_internal_get_prevTriggerDown() const;

constexpr bool& __cordl_internal_get_prevTriggerDown() ;

constexpr float_t const& __cordl_internal_get_rightYaw() const;

constexpr float_t& __cordl_internal_get_rightYaw() ;

constexpr bool const& __cordl_internal_get_triggerIsDown() const;

constexpr bool& __cordl_internal_get_triggerIsDown() ;

constexpr float_t const& __cordl_internal_get_triggerPressThreshold() const;

constexpr float_t& __cordl_internal_get_triggerPressThreshold() ;

constexpr float_t const& __cordl_internal_get_triggerReleaseThreshold() const;

constexpr float_t& __cordl_internal_get_triggerReleaseThreshold() ;

constexpr void __cordl_internal_set_OnCannonSideChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnFire(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveStarted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveStopped(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_armedAfterMobilize(bool  value) ;

constexpr void __cordl_internal_set_cannonToLeft(bool  value) ;

constexpr void __cordl_internal_set_cannonTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cannonYawSpeed(float_t  value) ;

constexpr void __cordl_internal_set_faceIsDown(bool  value) ;

constexpr void __cordl_internal_set_facePressThreshold(float_t  value) ;

constexpr void __cordl_internal_set_faceReleaseThreshold(float_t  value) ;

constexpr void __cordl_internal_set_isMovingShared(bool  value) ;

constexpr void __cordl_internal_set_lastCannonToLeft(bool  value) ;

constexpr void __cordl_internal_set_lastFireFlip(bool  value) ;

constexpr void __cordl_internal_set_lastIsMoving(bool  value) ;

constexpr void __cordl_internal_set_leftYaw(float_t  value) ;

constexpr void __cordl_internal_set_movingSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_prevFaceDown(bool  value) ;

constexpr void __cordl_internal_set_prevTriggerDown(bool  value) ;

constexpr void __cordl_internal_set_rightYaw(float_t  value) ;

constexpr void __cordl_internal_set_triggerIsDown(bool  value) ;

constexpr void __cordl_internal_set_triggerPressThreshold(float_t  value) ;

constexpr void __cordl_internal_set_triggerReleaseThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x5618594, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCShip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCShip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCShip(RCShip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCShip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCShip(RCShip const& ) = delete;

/// @brief Field CannonLeftBit offset 0xffffffff size 0x1
static constexpr uint8_t  CannonLeftBit{static_cast<uint8_t>(0x1u)};

/// @brief Field FireFlipBit offset 0xffffffff size 0x1
static constexpr uint8_t  FireFlipBit{static_cast<uint8_t>(0x2u)};

/// @brief Field MovingBit offset 0xffffffff size 0x1
static constexpr uint8_t  MovingBit{static_cast<uint8_t>(0x4u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{560};

/// [Header("RCShip - Events")]
/// @brief Field OnFire, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnFire;

/// @brief Field OnCannonSideChanged, offset: 0x298, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnCannonSideChanged;

/// @brief Field OnMoveStarted, offset: 0x2a0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnMoveStarted;

/// @brief Field OnMoveStopped, offset: 0x2a8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnMoveStopped;

/// [Header("RCShip - Cannon Rotation")]
/// [SerializeField]
/// @brief Field cannonTransform, offset: 0x2b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cannonTransform;

/// [SerializeField]
/// @brief Field leftYaw, offset: 0x2b8, size: 0x4, def value: None
 float_t  ___leftYaw;

/// [SerializeField]
/// @brief Field rightYaw, offset: 0x2bc, size: 0x4, def value: None
 float_t  ___rightYaw;

/// [SerializeField]
/// @brief Field cannonYawSpeed, offset: 0x2c0, size: 0x4, def value: None
 float_t  ___cannonYawSpeed;

/// [Header("RCShip - Input")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field triggerPressThreshold, offset: 0x2c4, size: 0x4, def value: None
 float_t  ___triggerPressThreshold;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field triggerReleaseThreshold, offset: 0x2c8, size: 0x4, def value: None
 float_t  ___triggerReleaseThreshold;

/// @brief Size padding 0x2c8 - 0x2e8 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field facePressThreshold, offset: 0x2cc, size: 0x4, def value: None
 float_t  ___facePressThreshold;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field faceReleaseThreshold, offset: 0x2d0, size: 0x4, def value: None
 float_t  ___faceReleaseThreshold;

/// [Header("RCShip - Movement Detection")]
/// [Tooltip("Minimum speed to consider the ship moving")]
/// [SerializeField]
/// @brief Field movingSpeedThreshold, offset: 0x2d4, size: 0x4, def value: None
 float_t  ___movingSpeedThreshold;

/// @brief Field prevTriggerDown, offset: 0x2d8, size: 0x1, def value: None
 bool  ___prevTriggerDown;

/// @brief Field prevFaceDown, offset: 0x2d9, size: 0x1, def value: None
 bool  ___prevFaceDown;

/// @brief Field faceIsDown, offset: 0x2da, size: 0x1, def value: None
 bool  ___faceIsDown;

/// @brief Field triggerIsDown, offset: 0x2db, size: 0x1, def value: None
 bool  ___triggerIsDown;

/// @brief Field armedAfterMobilize, offset: 0x2dc, size: 0x1, def value: None
 bool  ___armedAfterMobilize;

/// @brief Field cannonToLeft, offset: 0x2dd, size: 0x1, def value: None
 bool  ___cannonToLeft;

/// @brief Field lastFireFlip, offset: 0x2de, size: 0x1, def value: None
 bool  ___lastFireFlip;

/// @brief Field lastCannonToLeft, offset: 0x2df, size: 0x1, def value: None
 bool  ___lastCannonToLeft;

/// @brief Field lastIsMoving, offset: 0x2e0, size: 0x1, def value: None
 bool  ___lastIsMoving;

/// @brief Field isMovingShared, offset: 0x2e1, size: 0x1, def value: None
 bool  ___isMovingShared;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RCShip, ___OnFire) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___OnCannonSideChanged) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___OnMoveStarted) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___OnMoveStopped) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___cannonTransform) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___leftYaw) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___rightYaw) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___cannonYawSpeed) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___triggerPressThreshold) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___triggerReleaseThreshold) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___facePressThreshold) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___faceReleaseThreshold) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___movingSpeedThreshold) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___prevTriggerDown) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___prevFaceDown) == 0x2d9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___faceIsDown) == 0x2da, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___triggerIsDown) == 0x2db, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___armedAfterMobilize) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___cannonToLeft) == 0x2dd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___lastFireFlip) == 0x2de, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___lastCannonToLeft) == 0x2df, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___lastIsMoving) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCShip, ___isMovingShared) == 0x2e1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RCShip) == 0x2c8, "Size mismatch!");

} // namespace end def GlobalNamespace
