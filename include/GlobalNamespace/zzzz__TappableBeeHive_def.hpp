#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableBeeHive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TappableBeeHive)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TappableBeeHive;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TappableBeeHive*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableBeeHive*, "", "TappableBeeHive");
// Dependencies Tappable, TimeSince
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableBeeHive
class CORDL_TYPE TappableBeeHive : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field _timeSinceLastTap, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSinceLastTap, put=__cordl_internal_set__timeSinceLastTap)) ::GlobalNamespace::TimeSince  _timeSinceLastTap;

/// @brief Field honeycombDisableDuration, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_honeycombDisableDuration, put=__cordl_internal_set_honeycombDisableDuration)) float_t  honeycombDisableDuration;

/// @brief Field honeycombSurface, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_honeycombSurface, put=__cordl_internal_set_honeycombSurface)) ::UnityW<::UnityEngine::GameObject>  honeycombSurface;

/// @brief Field reenableHoneycombAtTimestamp, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_reenableHoneycombAtTimestamp, put=__cordl_internal_set_reenableHoneycombAtTimestamp)) float_t  reenableHoneycombAtTimestamp;

/// @brief Field reenableHoneycombCoroutine, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_reenableHoneycombCoroutine, put=__cordl_internal_set_reenableHoneycombCoroutine)) ::UnityEngine::Coroutine*  reenableHoneycombCoroutine;

/// @brief Field swarmEmergeFromPoint, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_swarmEmergeFromPoint, put=__cordl_internal_set_swarmEmergeFromPoint)) ::UnityW<::UnityEngine::GameObject>  swarmEmergeFromPoint;

/// @brief Field swarmEmergeToPoint, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_swarmEmergeToPoint, put=__cordl_internal_set_swarmEmergeToPoint)) ::UnityW<::UnityEngine::GameObject>  swarmEmergeToPoint;

/// @brief Method Awake, addr 0x598ce70, size 0x1dc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TappableBeeHive* New_ctor() ;

/// @brief Method OnSlingshotHit, addr 0x598d21c, size 0x1bc, virtual false, abstract: false, final false
inline void OnSlingshotHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnTapLocal, addr 0x598d04c, size 0x1d0, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__timeSinceLastTap() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__timeSinceLastTap() ;

constexpr float_t const& __cordl_internal_get_honeycombDisableDuration() const;

constexpr float_t& __cordl_internal_get_honeycombDisableDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_honeycombSurface() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_honeycombSurface() ;

constexpr float_t const& __cordl_internal_get_reenableHoneycombAtTimestamp() const;

constexpr float_t& __cordl_internal_get_reenableHoneycombAtTimestamp() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_reenableHoneycombCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_reenableHoneycombCoroutine() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_swarmEmergeFromPoint() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_swarmEmergeFromPoint() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_swarmEmergeToPoint() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_swarmEmergeToPoint() ;

constexpr void __cordl_internal_set__timeSinceLastTap(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_honeycombDisableDuration(float_t  value) ;

constexpr void __cordl_internal_set_honeycombSurface(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_reenableHoneycombAtTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_reenableHoneycombCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_swarmEmergeFromPoint(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_swarmEmergeToPoint(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x598d3d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableBeeHive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableBeeHive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableBeeHive(TappableBeeHive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableBeeHive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableBeeHive(TappableBeeHive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2563};

/// [SerializeField]
/// @brief Field swarmEmergeFromPoint, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___swarmEmergeFromPoint;

/// [SerializeField]
/// @brief Field swarmEmergeToPoint, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___swarmEmergeToPoint;

/// [SerializeField]
/// @brief Field honeycombSurface, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___honeycombSurface;

/// [SerializeField]
/// @brief Field honeycombDisableDuration, offset: 0x60, size: 0x4, def value: None
 float_t  ___honeycombDisableDuration;

/// @brief Field _timeSinceLastTap, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____timeSinceLastTap;

/// @brief Field reenableHoneycombAtTimestamp, offset: 0x70, size: 0x4, def value: None
 float_t  ___reenableHoneycombAtTimestamp;

/// @brief Field reenableHoneycombCoroutine, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___reenableHoneycombCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ___swarmEmergeFromPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ___swarmEmergeToPoint) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ___honeycombSurface) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ___honeycombDisableDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ____timeSinceLastTap) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ___reenableHoneycombAtTimestamp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableBeeHive, ___reenableHoneycombCoroutine) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableBeeHive) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
