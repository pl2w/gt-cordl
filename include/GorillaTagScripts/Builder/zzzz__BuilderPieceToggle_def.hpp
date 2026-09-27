#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_ToggleStates_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceToggle_ToggleType_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceToggle)
namespace GlobalNamespace {
struct BuilderPieceToggle_ToggleStates;
}
namespace GlobalNamespace {
struct BuilderPieceToggle_ToggleType;
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
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceToggle;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceToggle*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceToggle*, "GorillaTagScripts.Builder", "BuilderPieceToggle");
// Dependencies GorillaTagScripts.Builder.BuilderPieceToggle::ToggleStates, GorillaTagScripts.Builder.BuilderPieceToggle::ToggleType, GorillaTagScripts.Builder.BuilderSmallHandTrigger, GorillaTagScripts.Builder.BuilderSmallMonkeTrigger, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceToggle
class CORDL_TYPE BuilderPieceToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ToggleStates = ::GlobalNamespace::BuilderPieceToggle_ToggleStates;

using ToggleType = ::GlobalNamespace::BuilderPieceToggle_ToggleType;

/// @brief Field ToggledOff, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggledOff, put=__cordl_internal_set_ToggledOff)) ::UnityEngine::Events::UnityEvent*  ToggledOff;

/// @brief Field ToggledOn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggledOn, put=__cordl_internal_set_ToggledOn)) ::UnityEngine::Events::UnityEvent*  ToggledOn;

/// @brief Field bodyTriggers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyTriggers, put=__cordl_internal_set_bodyTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  bodyTriggers;

/// @brief Field colliders, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field handTriggers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTriggers, put=__cordl_internal_set_handTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  handTriggers;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field onlySmallMonkeTaps, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlySmallMonkeTaps, put=__cordl_internal_set_onlySmallMonkeTaps)) bool  onlySmallMonkeTaps;

/// @brief Field toggleState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleState, put=__cordl_internal_set_toggleState)) ::GlobalNamespace::BuilderPieceToggle_ToggleStates  toggleState;

/// @brief Field toggleType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleType, put=__cordl_internal_set_toggleType)) ::GlobalNamespace::BuilderPieceToggle_ToggleType  toggleType;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderTappable"
constexpr operator  ::GlobalNamespace::IBuilderTappable*() noexcept;

/// @brief Method Awake, addr 0x5c2b318, size 0x348, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanTap, addr 0x5c2b994, size 0x104, virtual false, abstract: false, final false
inline bool CanTap() ;

/// @brief Method CanTrigger, addr 0x5c2bcb0, size 0x34, virtual false, abstract: false, final false
inline bool CanTrigger() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c2c4cc, size 0x4, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsStateValid, addr 0x5c2c208, size 0xb8, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderPieceToggle* New_ctor() ;

/// @brief Method OnBodyTriggerEntered, addr 0x5c2bd80, size 0x144, virtual false, abstract: false, final false
inline void OnBodyTriggerEntered(int32_t  playerNumber) ;

/// @brief Method OnDestroy, addr 0x5c2b710, size 0x1d4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHandTriggerEntered, addr 0x5c2bce4, size 0x9c, virtual false, abstract: false, final false
inline void OnHandTriggerEntered() ;

/// @brief Method OnPieceActivate, addr 0x5c2c4dc, size 0x134, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c2c4d0, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c2c610, size 0x1b8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c2c4d4, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c2c4d8, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c2c048, size 0x1c0, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c2c2c0, size 0x20c, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnTapLocal, addr 0x5c2ba98, size 0xb4, virtual true, abstract: false, final true
inline void OnTapLocal(float_t  tapStrength) ;

/// @brief Method ToggleStateMaster, addr 0x5c2bec4, size 0x184, virtual false, abstract: false, final false
inline void ToggleStateMaster(::Photon::Realtime::Player*  instigator) ;

/// @brief Method ToggleStateRequest, addr 0x5c2bb4c, size 0x164, virtual false, abstract: false, final false
inline void ToggleStateRequest() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ToggledOff() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ToggledOff() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ToggledOn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ToggledOn() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& __cordl_internal_get_bodyTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& __cordl_internal_get_bodyTriggers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>> const& __cordl_internal_get_handTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>& __cordl_internal_get_handTriggers() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr bool const& __cordl_internal_get_onlySmallMonkeTaps() const;

constexpr bool& __cordl_internal_get_onlySmallMonkeTaps() ;

constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleStates const& __cordl_internal_get_toggleState() const;

constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleStates& __cordl_internal_get_toggleState() ;

constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleType const& __cordl_internal_get_toggleType() const;

constexpr ::GlobalNamespace::BuilderPieceToggle_ToggleType& __cordl_internal_get_toggleType() ;

constexpr void __cordl_internal_set_ToggledOff(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ToggledOn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_bodyTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_handTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_onlySmallMonkeTaps(bool  value) ;

constexpr void __cordl_internal_set_toggleState(::GlobalNamespace::BuilderPieceToggle_ToggleStates  value) ;

constexpr void __cordl_internal_set_toggleType(::GlobalNamespace::BuilderPieceToggle_ToggleType  value) ;

/// @brief Method .ctor, addr 0x5c2c7c8, size 0x8c, virtual false, abstract: false, final false
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
constexpr BuilderPieceToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceToggle(BuilderPieceToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceToggle(BuilderPieceToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4164};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field toggleType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceToggle_ToggleType  ___toggleType;

/// @brief Field onlySmallMonkeTaps, offset: 0x2c, size: 0x1, def value: None
 bool  ___onlySmallMonkeTaps;

/// [SerializeField]
/// @brief Field handTriggers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  ___handTriggers;

/// [SerializeField]
/// @brief Field bodyTriggers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  ___bodyTriggers;

/// [SerializeField]
/// @brief Field ToggledOn, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ToggledOn;

/// [SerializeField]
/// @brief Field ToggledOff, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ToggledOff;

/// @brief Field colliders, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field toggleState, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceToggle_ToggleStates  ___toggleState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___toggleType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___onlySmallMonkeTaps) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___handTriggers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___bodyTriggers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___ToggledOn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___ToggledOff) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___colliders) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceToggle, ___toggleState) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceToggle) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
