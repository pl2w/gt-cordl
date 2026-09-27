#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DreidelHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DreidelHoldable)
namespace GlobalNamespace {
struct Dreidel_Side;
}
namespace GlobalNamespace {
struct Dreidel_Variation;
}
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
class Dreidel;
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
class DreidelHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::DreidelHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::DreidelHoldable*, "GorillaTag.Cosmetics", "DreidelHoldable");
// Dependencies TransferrableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.DreidelHoldable
class CORDL_TYPE DreidelHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _events, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field dreidelAnimation, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreidelAnimation, put=__cordl_internal_set_dreidelAnimation)) ::UnityW<::GorillaTag::Cosmetics::Dreidel>  dreidelAnimation;

/// @brief Method DebugSpinDreidel, addr 0x5d71d88, size 0x620, virtual false, abstract: false, final false
inline void DebugSpinDreidel() ;

static inline ::GorillaTag::Cosmetics::DreidelHoldable* New_ctor() ;

/// @brief Method OnActivate, addr 0x5d71a0c, size 0x37c, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDisable, addr 0x5d7115c, size 0x144, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDreidelSpin, addr 0x5d712a0, size 0x4e0, virtual false, abstract: false, final false
inline void OnDreidelSpin(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnEnable, addr 0x5d70e8c, size 0x2d0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5d718b4, size 0xac, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5d71960, size 0xac, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method StartSpinLocal, addr 0x5d71780, size 0x134, virtual false, abstract: false, final false
inline void StartSpinLocal(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  duration, bool  counterClockwise, ::GlobalNamespace::Dreidel_Side  side, ::GlobalNamespace::Dreidel_Variation  variation, double_t  startTime) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::Dreidel> const& __cordl_internal_get_dreidelAnimation() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::Dreidel>& __cordl_internal_get_dreidelAnimation() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_dreidelAnimation(::UnityW<::GorillaTag::Cosmetics::Dreidel>  value) ;

/// @brief Method .ctor, addr 0x5d723a8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DreidelHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DreidelHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DreidelHoldable(DreidelHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DreidelHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DreidelHoldable(DreidelHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4852};

/// [SerializeField]
/// @brief Field dreidelAnimation, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::Dreidel>  ___dreidelAnimation;

/// @brief Field _events, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Size padding 0x378 - 0x348 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::DreidelHoldable, ___dreidelAnimation) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DreidelHoldable, ____events) == 0x340, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::DreidelHoldable) == 0x378, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
