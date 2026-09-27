#pragma once
// IWYU pragma private; include "GorillaTagScripts/Mole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GorillaTagScripts/zzzz__MoleTypes_def.hpp"
#include "GorillaTagScripts/zzzz__Mole_MoleState_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Mole)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct Mole_MoleState;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaTagScripts {
class MoleTypes;
}
namespace GorillaTagScripts {
class Mole_MoleTapEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class Mole;
}
namespace GorillaTagScripts {
class Mole_MoleTapEvent;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Mole*);
MARK_REF_T(::GorillaTagScripts::Mole_MoleTapEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Mole*, "GorillaTagScripts", "Mole");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Mole_MoleTapEvent*, "GorillaTagScripts", "Mole/MoleTapEvent");
// Dependencies GorillaTagScripts.Mole::MoleState, GorillaTagScripts.MoleTypes, Tappable, UnityEngine.Vector3
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.Mole
class CORDL_TYPE Mole : public ::GlobalNamespace::Tappable {
public:
// Declarations
using MoleState = ::GlobalNamespace::Mole_MoleState;

using MoleTapEvent = ::GorillaTagScripts::Mole_MoleTapEvent;

 __declspec(property(get=get_IsLeftSideMole, put=set_IsLeftSideMole)) bool  IsLeftSideMole;

/// @brief Field OnTapped, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTapped, put=__cordl_internal_set_OnTapped)) ::GorillaTagScripts::Mole_MoleTapEvent*  OnTapped;

/// @brief Field <IsLeftSideMole>k__BackingField, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLeftSideMole_k__BackingField, put=__cordl_internal_set__IsLeftSideMole_k__BackingField)) bool  _IsLeftSideMole_k__BackingField;

/// @brief Field animCurve, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_animCurve, put=__cordl_internal_set_animCurve)) ::UnityEngine::AnimationCurve*  animCurve;

/// @brief Field animStartTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_animStartTime, put=__cordl_internal_set_animStartTime)) float_t  animStartTime;

/// @brief Field currentState, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::Mole_MoleState  currentState;

/// @brief Field currentTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) float_t  currentTime;

/// @brief Field hazardMoles, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hazardMoles, put=__cordl_internal_set_hazardMoles)) ::System::Collections::Generic::List_1<int32_t>*  hazardMoles;

/// @brief Field hiddenPosition, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_hiddenPosition, put=__cordl_internal_set_hiddenPosition)) ::UnityEngine::Vector3  hiddenPosition;

/// @brief Field hitAnimCurve, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitAnimCurve, put=__cordl_internal_set_hitAnimCurve)) ::UnityEngine::AnimationCurve*  hitAnimCurve;

/// @brief Field hitTravelTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitTravelTime, put=__cordl_internal_set_hitTravelTime)) float_t  hitTravelTime;

/// @brief Field moleScore, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_moleScore, put=__cordl_internal_set_moleScore)) int32_t  moleScore;

/// @brief Field moleTypes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_moleTypes, put=__cordl_internal_set_moleTypes)) ::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>>  moleTypes;

/// @brief Field normalAnimCurve, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalAnimCurve, put=__cordl_internal_set_normalAnimCurve)) ::UnityEngine::AnimationCurve*  normalAnimCurve;

/// @brief Field normalTravelTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalTravelTime, put=__cordl_internal_set_normalTravelTime)) float_t  normalTravelTime;

/// @brief Field origin, offset 0xa4, size 0xc 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::UnityEngine::Vector3  origin;

/// @brief Field positionOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionOffset, put=__cordl_internal_set_positionOffset)) float_t  positionOffset;

/// @brief Field randomMolePickedIndex, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomMolePickedIndex, put=__cordl_internal_set_randomMolePickedIndex)) int32_t  randomMolePickedIndex;

/// @brief Field rpcCooldown, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rpcCooldown, put=__cordl_internal_set_rpcCooldown)) ::GlobalNamespace::CallLimiter*  rpcCooldown;

/// @brief Field safeMoles, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_safeMoles, put=__cordl_internal_set_safeMoles)) ::System::Collections::Generic::List_1<int32_t>*  safeMoles;

/// @brief Field showMoleDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_showMoleDuration, put=__cordl_internal_set_showMoleDuration)) float_t  showMoleDuration;

/// @brief Field target, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityEngine::Vector3  target;

/// @brief Field travelTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_travelTime, put=__cordl_internal_set_travelTime)) float_t  travelTime;

/// @brief Field visiblePosition, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_visiblePosition, put=__cordl_internal_set_visiblePosition)) ::UnityEngine::Vector3  visiblePosition;

/// @brief Method Awake, addr 0x5b7bbc4, size 0x1a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanPickMole, addr 0x5b7bf68, size 0x10, virtual false, abstract: false, final false
inline bool CanPickMole() ;

/// @brief Method CanTap, addr 0x5b7c128, size 0x14, virtual false, abstract: false, final false
inline bool CanTap() ;

/// @brief Method CanTap, addr 0x5b7c13c, size 0x14, virtual true, abstract: false, final false
inline bool CanTap(bool  isLeftHand) ;

/// @brief Method GetMoleTypeIndex, addr 0x5b7c3bc, size 0x84, virtual false, abstract: false, final false
inline int32_t GetMoleTypeIndex(bool  useHazardMole) ;

/// @brief Method HideMole, addr 0x5b7bec8, size 0xa0, virtual false, abstract: false, final false
inline void HideMole(bool  isHit) ;

/// @brief Method InvokeUpdate, addr 0x5b7bd6c, size 0x15c, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

static inline ::GorillaTagScripts::Mole* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x5b7c150, size 0x238, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method ResetPosition, addr 0x5b7c388, size 0x34, virtual false, abstract: false, final false
inline void ResetPosition() ;

/// @brief Method ShowMole, addr 0x5b7bf78, size 0x1b0, virtual false, abstract: false, final false
inline void ShowMole(float_t  _showMoleDuration, int32_t  randomMoleTypeIndex) ;

constexpr ::GorillaTagScripts::Mole_MoleTapEvent* const& __cordl_internal_get_OnTapped() const;

constexpr ::GorillaTagScripts::Mole_MoleTapEvent*& __cordl_internal_get_OnTapped() ;

constexpr bool const& __cordl_internal_get__IsLeftSideMole_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLeftSideMole_k__BackingField() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_animCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_animCurve() ;

constexpr float_t const& __cordl_internal_get_animStartTime() const;

constexpr float_t& __cordl_internal_get_animStartTime() ;

constexpr ::GlobalNamespace::Mole_MoleState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::Mole_MoleState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_currentTime() const;

constexpr float_t& __cordl_internal_get_currentTime() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_hazardMoles() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_hazardMoles() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hiddenPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hiddenPosition() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_hitAnimCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_hitAnimCurve() ;

constexpr float_t const& __cordl_internal_get_hitTravelTime() const;

constexpr float_t& __cordl_internal_get_hitTravelTime() ;

constexpr int32_t const& __cordl_internal_get_moleScore() const;

constexpr int32_t& __cordl_internal_get_moleScore() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>> const& __cordl_internal_get_moleTypes() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>>& __cordl_internal_get_moleTypes() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_normalAnimCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_normalAnimCurve() ;

constexpr float_t const& __cordl_internal_get_normalTravelTime() const;

constexpr float_t& __cordl_internal_get_normalTravelTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_origin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_origin() ;

constexpr float_t const& __cordl_internal_get_positionOffset() const;

constexpr float_t& __cordl_internal_get_positionOffset() ;

constexpr int32_t const& __cordl_internal_get_randomMolePickedIndex() const;

constexpr int32_t& __cordl_internal_get_randomMolePickedIndex() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_rpcCooldown() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_rpcCooldown() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_safeMoles() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_safeMoles() ;

constexpr float_t const& __cordl_internal_get_showMoleDuration() const;

constexpr float_t& __cordl_internal_get_showMoleDuration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_target() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_target() ;

constexpr float_t const& __cordl_internal_get_travelTime() const;

constexpr float_t& __cordl_internal_get_travelTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_visiblePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_visiblePosition() ;

constexpr void __cordl_internal_set_OnTapped(::GorillaTagScripts::Mole_MoleTapEvent*  value) ;

constexpr void __cordl_internal_set__IsLeftSideMole_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_animCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_animStartTime(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::Mole_MoleState  value) ;

constexpr void __cordl_internal_set_currentTime(float_t  value) ;

constexpr void __cordl_internal_set_hazardMoles(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_hiddenPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hitAnimCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_hitTravelTime(float_t  value) ;

constexpr void __cordl_internal_set_moleScore(int32_t  value) ;

constexpr void __cordl_internal_set_moleTypes(::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>>  value) ;

constexpr void __cordl_internal_set_normalAnimCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_normalTravelTime(float_t  value) ;

constexpr void __cordl_internal_set_origin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_positionOffset(float_t  value) ;

constexpr void __cordl_internal_set_randomMolePickedIndex(int32_t  value) ;

constexpr void __cordl_internal_set_rpcCooldown(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_safeMoles(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_showMoleDuration(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_travelTime(float_t  value) ;

constexpr void __cordl_internal_set_visiblePosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5b7c440, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnTapped, addr 0x5b7ba7c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnTapped(::GorillaTagScripts::Mole_MoleTapEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method get_IsLeftSideMole, addr 0x5b7bbb4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLeftSideMole() ;

/// [CompilerGenerated]
/// @brief Method remove_OnTapped, addr 0x5b7bb18, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnTapped(::GorillaTagScripts::Mole_MoleTapEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsLeftSideMole, addr 0x5b7bbbc, size 0x8, virtual false, abstract: false, final false
inline void set_IsLeftSideMole(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mole", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mole(Mole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mole", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mole(Mole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3907};

/// @brief Field positionOffset, offset: 0x48, size: 0x4, def value: None
 float_t  ___positionOffset;

/// @brief Field moleTypes, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::MoleTypes>>  ___moleTypes;

/// @brief Field showMoleDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___showMoleDuration;

/// @brief Field visiblePosition, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___visiblePosition;

/// @brief Field hiddenPosition, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hiddenPosition;

/// @brief Field currentTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___currentTime;

/// @brief Field animStartTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___animStartTime;

/// @brief Field travelTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___travelTime;

/// @brief Field normalTravelTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___normalTravelTime;

/// @brief Field hitTravelTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___hitTravelTime;

/// @brief Field animCurve, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___animCurve;

/// @brief Field normalAnimCurve, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___normalAnimCurve;

/// @brief Field hitAnimCurve, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___hitAnimCurve;

/// @brief Field currentState, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::Mole_MoleState  ___currentState;

/// @brief Field origin, offset: 0xa4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___origin;

/// @brief Field target, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___target;

/// @brief Field randomMolePickedIndex, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___randomMolePickedIndex;

/// [CompilerGenerated]
/// @brief Field OnTapped, offset: 0xc0, size: 0x8, def value: None
 ::GorillaTagScripts::Mole_MoleTapEvent*  ___OnTapped;

/// @brief Field rpcCooldown, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___rpcCooldown;

/// @brief Field moleScore, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___moleScore;

/// @brief Field safeMoles, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___safeMoles;

/// @brief Field hazardMoles, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___hazardMoles;

/// [CompilerGenerated]
/// @brief Field <IsLeftSideMole>k__BackingField, offset: 0xe8, size: 0x1, def value: None
 bool  ____IsLeftSideMole_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Mole, ___positionOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___moleTypes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___showMoleDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___visiblePosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___hiddenPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___currentTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___animStartTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___travelTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___normalTravelTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___hitTravelTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___animCurve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___normalAnimCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___hitAnimCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___currentState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___origin) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___target) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___randomMolePickedIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___OnTapped) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___rpcCooldown) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___moleScore) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___safeMoles) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ___hazardMoles) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Mole, ____IsLeftSideMole_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Mole) == 0xf0, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.Mole/MoleTapEvent
class CORDL_TYPE Mole_MoleTapEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b7c624, size 0xd8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GorillaTagScripts::MoleTypes*  moleType, ::UnityEngine::Vector3  position, bool  isLocalTap, bool  isLeft, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b7c6fc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b7c610, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GorillaTagScripts::MoleTypes*  moleType, ::UnityEngine::Vector3  position, bool  isLocalTap, bool  isLeft) ;

static inline ::GorillaTagScripts::Mole_MoleTapEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b7c504, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mole_MoleTapEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mole_MoleTapEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mole_MoleTapEvent(Mole_MoleTapEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mole_MoleTapEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mole_MoleTapEvent(Mole_MoleTapEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3905};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::Mole_MoleTapEvent) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts
