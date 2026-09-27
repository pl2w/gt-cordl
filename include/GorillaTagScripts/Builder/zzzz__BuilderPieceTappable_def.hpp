#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceTappable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_FunctionalState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceTappable)
namespace GlobalNamespace {
struct BuilderPieceTappable_FunctionalState;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class IBuilderTappable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceTappable;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceTappable*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceTappable*, "GorillaTagScripts.Builder", "BuilderPieceTappable");
// [RequireComponent(typeof(UnityEngine.Collider))]
// [RequireComponent(typeof(GorillaSurfaceOverride))]
// Dependencies GorillaTagScripts.Builder.BuilderPieceTappable::FunctionalState, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceTappable
class CORDL_TYPE BuilderPieceTappable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FunctionalState = ::GlobalNamespace::BuilderPieceTappable_FunctionalState;

/// @brief Field OnTapped, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTapped, put=__cordl_internal_set_OnTapped)) ::UnityEngine::Events::UnityEvent*  OnTapped;

/// @brief Field currentState, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BuilderPieceTappable_FunctionalState  currentState;

/// @brief Field isPieceActive, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPieceActive, put=__cordl_internal_set_isPieceActive)) bool  isPieceActive;

/// @brief Field lastTapTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTapTime, put=__cordl_internal_set_lastTapTime)) float_t  lastTapTime;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field tapCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapCooldown, put=__cordl_internal_set_tapCooldown)) float_t  tapCooldown;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderTappable"
constexpr operator  ::GlobalNamespace::IBuilderTappable*() noexcept;

/// @brief Method CanTap, addr 0x5c29e80, size 0x3c, virtual true, abstract: false, final false
inline bool CanTap() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c2a228, size 0x100, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsStateValid, addr 0x5c2a10c, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderPieceTappable* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x5c29fa0, size 0xc, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c29f90, size 0x8, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c29fac, size 0xe8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c29f98, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c29f9c, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c2a094, size 0x78, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c2a11c, size 0x10c, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnTapLocal, addr 0x5c29ebc, size 0xc0, virtual true, abstract: false, final true
inline void OnTapLocal(float_t  tapStrength) ;

/// @brief Method OnTapReplicated, addr 0x5c29f7c, size 0x14, virtual true, abstract: false, final false
inline void OnTapReplicated() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTapped() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTapped() ;

constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_isPieceActive() const;

constexpr bool& __cordl_internal_get_isPieceActive() ;

constexpr float_t const& __cordl_internal_get_lastTapTime() const;

constexpr float_t& __cordl_internal_get_lastTapTime() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr float_t const& __cordl_internal_get_tapCooldown() const;

constexpr float_t& __cordl_internal_get_tapCooldown() ;

constexpr void __cordl_internal_set_OnTapped(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BuilderPieceTappable_FunctionalState  value) ;

constexpr void __cordl_internal_set_isPieceActive(bool  value) ;

constexpr void __cordl_internal_set_lastTapTime(float_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_tapCooldown(float_t  value) ;

/// @brief Method .ctor, addr 0x5c2a328, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderTappable"
constexpr ::GlobalNamespace::IBuilderTappable* i___GlobalNamespace__IBuilderTappable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceTappable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceTappable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceTappable(BuilderPieceTappable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceTappable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceTappable(BuilderPieceTappable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4160};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field tapCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___tapCooldown;

/// @brief Field isPieceActive, offset: 0x2c, size: 0x1, def value: None
 bool  ___isPieceActive;

/// @brief Field lastTapTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___lastTapTime;

/// @brief Field currentState, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceTappable_FunctionalState  ___currentState;

/// [Tooltip("Called on all clients when this collider is tapped by anyone")]
/// [SerializeField]
/// @brief Field OnTapped, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTapped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTappable, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTappable, ___tapCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTappable, ___isPieceActive) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTappable, ___lastTapTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTappable, ___currentState) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceTappable, ___OnTapped) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceTappable) == 0x40, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
