#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DiceHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiceHoldable)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GorillaTag::Cosmetics {
class DicePhysics;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class DiceHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::DiceHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::DiceHoldable*, "GorillaTag.Cosmetics", "DiceHoldable");
// Dependencies TransferrableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.DiceHoldable
class CORDL_TYPE DiceHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _events, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field dicePhysics, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_dicePhysics, put=__cordl_internal_set_dicePhysics)) ::UnityW<::GorillaTag::Cosmetics::DicePhysics>  dicePhysics;

static inline ::GorillaTag::Cosmetics::DiceHoldable* New_ctor() ;

/// @brief Method OnDiceEvent, addr 0x5d61244, size 0x608, virtual false, abstract: false, final false
inline void OnDiceEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnDisable, addr 0x5d610e4, size 0x160, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d60e20, size 0x2c4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5d61ad0, size 0x310, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5d61de0, size 0x570, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method ThrowDiceLocal, addr 0x5d6184c, size 0x1c, virtual false, abstract: false, final false
inline void ThrowDiceLocal(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  throwVelocity, float_t  playerScale, int32_t  landingSide, double_t  startTime) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::DicePhysics> const& __cordl_internal_get_dicePhysics() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::DicePhysics>& __cordl_internal_get_dicePhysics() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_dicePhysics(::UnityW<::GorillaTag::Cosmetics::DicePhysics>  value) ;

/// @brief Method .ctor, addr 0x5d62630, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiceHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiceHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DiceHoldable(DiceHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiceHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiceHoldable(DiceHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4828};

/// [SerializeField]
/// @brief Field dicePhysics, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::DicePhysics>  ___dicePhysics;

/// @brief Field _events, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Size padding 0x378 - 0x348 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::DiceHoldable, ___dicePhysics) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DiceHoldable, ____events) == 0x340, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::DiceHoldable) == 0x378, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
