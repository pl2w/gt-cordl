#pragma once
// IWYU pragma private; include "GlobalNamespace/SteeringWheelCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SteeringWheelCosmetic)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class SteeringWheelCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteeringWheelCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteeringWheelCosmetic*, "", "SteeringWheelCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteeringWheelCosmetic
class CORDL_TYPE SteeringWheelCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cooldown, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field dramaticTurnThreshold, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_dramaticTurnThreshold, put=__cordl_internal_set_dramaticTurnThreshold)) float_t  dramaticTurnThreshold;

/// @brief Field lastHornTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHornTime, put=__cordl_internal_set_lastHornTime)) float_t  lastHornTime;

/// @brief Field lastZAngle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastZAngle, put=__cordl_internal_set_lastZAngle)) float_t  lastZAngle;

/// @brief Field onDramaticTurn, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDramaticTurn, put=__cordl_internal_set_onDramaticTurn)) ::UnityEngine::Events::UnityEvent*  onDramaticTurn;

/// @brief Field onHornHit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHornHit, put=__cordl_internal_set_onHornHit)) ::UnityEngine::Events::UnityEvent*  onHornHit;

static inline ::GlobalNamespace::SteeringWheelCosmetic* New_ctor() ;

/// @brief Method Start, addr 0x57f4530, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryHornHit, addr 0x57f4534, size 0x4c, virtual false, abstract: false, final false
inline void TryHornHit() ;

/// @brief Method Update, addr 0x57f4580, size 0xa8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_dramaticTurnThreshold() const;

constexpr float_t& __cordl_internal_get_dramaticTurnThreshold() ;

constexpr float_t const& __cordl_internal_get_lastHornTime() const;

constexpr float_t& __cordl_internal_get_lastHornTime() ;

constexpr float_t const& __cordl_internal_get_lastZAngle() const;

constexpr float_t& __cordl_internal_get_lastZAngle() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onDramaticTurn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onDramaticTurn() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onHornHit() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onHornHit() ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_dramaticTurnThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lastHornTime(float_t  value) ;

constexpr void __cordl_internal_set_lastZAngle(float_t  value) ;

constexpr void __cordl_internal_set_onDramaticTurn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onHornHit(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x57f4628, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteeringWheelCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteeringWheelCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteeringWheelCosmetic(SteeringWheelCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteeringWheelCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteeringWheelCosmetic(SteeringWheelCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{206};

/// [SerializeField]
/// @brief Field cooldown, offset: 0x20, size: 0x4, def value: None
 float_t  ___cooldown;

/// [SerializeField]
/// @brief Field dramaticTurnThreshold, offset: 0x24, size: 0x4, def value: None
 float_t  ___dramaticTurnThreshold;

/// [SerializeField]
/// @brief Field onHornHit, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onHornHit;

/// [SerializeField]
/// @brief Field onDramaticTurn, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onDramaticTurn;

/// @brief Field lastHornTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___lastHornTime;

/// @brief Field lastZAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  ___lastZAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteeringWheelCosmetic, ___cooldown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteeringWheelCosmetic, ___dramaticTurnThreshold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteeringWheelCosmetic, ___onHornHit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteeringWheelCosmetic, ___onDramaticTurn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteeringWheelCosmetic, ___lastHornTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteeringWheelCosmetic, ___lastZAngle) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteeringWheelCosmetic) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
