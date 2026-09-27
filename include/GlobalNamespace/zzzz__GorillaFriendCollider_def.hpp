#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFriendCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaFriendCollider)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class JoinTriggerUI;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class CapsuleCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaFriendCollider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaFriendCollider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFriendCollider*, "", "GorillaFriendCollider");
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaFriendCollider
class CORDL_TYPE GorillaFriendCollider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _nextUpdateTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextUpdateTime, put=__cordl_internal_set__nextUpdateTime)) float_t  _nextUpdateTime;

/// @brief Field applyCapsuleYLimits, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyCapsuleYLimits, put=__cordl_internal_set_applyCapsuleYLimits)) bool  applyCapsuleYLimits;

/// @brief Field capsuleColliderYLimits, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_capsuleColliderYLimits, put=__cordl_internal_set_capsuleColliderYLimits)) ::UnityEngine::Vector2  capsuleColliderYLimits;

/// @brief Field manualRefreshOnly, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_manualRefreshOnly, put=__cordl_internal_set_manualRefreshOnly)) bool  manualRefreshOnly;

/// @brief Field myAllowedMapsToJoin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_myAllowedMapsToJoin, put=__cordl_internal_set_myAllowedMapsToJoin)) ::ArrayW<::StringW>  myAllowedMapsToJoin;

/// @brief Field overlapColliders, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapColliders, put=__cordl_internal_set_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field playerIDsCurrentlyTouching, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerIDsCurrentlyTouching, put=__cordl_internal_set_playerIDsCurrentlyTouching)) ::System::Collections::Generic::List_1<::StringW>*  playerIDsCurrentlyTouching;

/// @brief Field playerRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerRigs, put=setStaticF_playerRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  playerRigs;

/// @brief Field profiler_SliceUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_profiler_SliceUpdate, put=setStaticF_profiler_SliceUpdate)) ::Unity::Profiling::ProfilerMarker  profiler_SliceUpdate;

/// @brief Field runCheckWhileNotInRoom, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_runCheckWhileNotInRoom, put=__cordl_internal_set_runCheckWhileNotInRoom)) bool  runCheckWhileNotInRoom;

/// @brief Field thisBox, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisBox, put=__cordl_internal_set_thisBox)) ::UnityW<::UnityEngine::BoxCollider>  thisBox;

/// @brief Field thisCapsule, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisCapsule, put=__cordl_internal_set_thisCapsule)) ::UnityW<::UnityEngine::CapsuleCollider>  thisCapsule;

/// @brief Field ui, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ui, put=__cordl_internal_set_ui)) ::UnityW<::GlobalNamespace::JoinTriggerUI>  ui;

/// @brief Field updateAdded, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_updateAdded, put=setStaticF_updateAdded)) bool  updateAdded;

/// @brief Field updatePartyZoneCallbacks, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatePartyZoneCallbacks, put=__cordl_internal_set_updatePartyZoneCallbacks)) bool  updatePartyZoneCallbacks;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AddUserID, addr 0x5aad1e4, size 0xe0, virtual false, abstract: false, final false
inline void AddUserID(/* [IsReadOnly] */ ::by_ref<::StringW>  userID) ;

/// @brief Method Awake, addr 0x5aacf84, size 0x168, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaFriendCollider* New_ctor() ;

/// @brief Method OnDisable, addr 0x5aad1c4, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5aad1b8, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshPlayersWithinBounds, addr 0x5aad410, size 0x58c, virtual false, abstract: false, final false
inline void RefreshPlayersWithinBounds() ;

/// @brief Method RegisterUI, addr 0x5aad1d0, size 0x8, virtual false, abstract: false, final false
inline void RegisterUI(::GlobalNamespace::JoinTriggerUI*  joinUI) ;

/// @brief Method SliceUpdate, addr 0x5aad2c4, size 0x14c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UnregisterUI, addr 0x5aad1d8, size 0xc, virtual false, abstract: false, final false
inline void UnregisterUI() ;

/// @brief Method UpdateActiveRigs, addr 0x5aad0ec, size 0xcc, virtual false, abstract: false, final false
static inline void UpdateActiveRigs() ;

constexpr float_t const& __cordl_internal_get__nextUpdateTime() const;

constexpr float_t& __cordl_internal_get__nextUpdateTime() ;

constexpr bool const& __cordl_internal_get_applyCapsuleYLimits() const;

constexpr bool& __cordl_internal_get_applyCapsuleYLimits() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_capsuleColliderYLimits() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_capsuleColliderYLimits() ;

constexpr bool const& __cordl_internal_get_manualRefreshOnly() const;

constexpr bool& __cordl_internal_get_manualRefreshOnly() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_myAllowedMapsToJoin() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_myAllowedMapsToJoin() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overlapColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overlapColliders() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_playerIDsCurrentlyTouching() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_playerIDsCurrentlyTouching() ;

constexpr bool const& __cordl_internal_get_runCheckWhileNotInRoom() const;

constexpr bool& __cordl_internal_get_runCheckWhileNotInRoom() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_thisBox() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_thisBox() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_thisCapsule() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_thisCapsule() ;

constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI> const& __cordl_internal_get_ui() const;

constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI>& __cordl_internal_get_ui() ;

constexpr bool const& __cordl_internal_get_updatePartyZoneCallbacks() const;

constexpr bool& __cordl_internal_get_updatePartyZoneCallbacks() ;

constexpr void __cordl_internal_set__nextUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_applyCapsuleYLimits(bool  value) ;

constexpr void __cordl_internal_set_capsuleColliderYLimits(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_manualRefreshOnly(bool  value) ;

constexpr void __cordl_internal_set_myAllowedMapsToJoin(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_playerIDsCurrentlyTouching(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_runCheckWhileNotInRoom(bool  value) ;

constexpr void __cordl_internal_set_thisBox(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_thisCapsule(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_ui(::UnityW<::GlobalNamespace::JoinTriggerUI>  value) ;

constexpr void __cordl_internal_set_updatePartyZoneCallbacks(bool  value) ;

/// @brief Method .ctor, addr 0x5aad99c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_playerRigs() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_profiler_SliceUpdate() ;

static inline bool getStaticF_updateAdded() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_playerRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_profiler_SliceUpdate(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_updateAdded(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFriendCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFriendCollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFriendCollider(GorillaFriendCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFriendCollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFriendCollider(GorillaFriendCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3275};

/// @brief Field playerIDsCurrentlyTouching, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___playerIDsCurrentlyTouching;

/// @brief Field thisCapsule, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___thisCapsule;

/// @brief Field thisBox, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___thisBox;

/// [Tooltip("If using a capsule collider, the player position can be checked against these minimum and maximum Y limits (world position) to make it behave more like a cylinder check")]
/// @brief Field applyCapsuleYLimits, offset: 0x38, size: 0x1, def value: None
 bool  ___applyCapsuleYLimits;

/// [Tooltip("If the player\'s Y world position is lower than Limits.x or higher than Limits.y, they will not be considered \"Inside\" the friend collider")]
/// @brief Field capsuleColliderYLimits, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___capsuleColliderYLimits;

/// @brief Field runCheckWhileNotInRoom, offset: 0x44, size: 0x1, def value: None
 bool  ___runCheckWhileNotInRoom;

/// @brief Field myAllowedMapsToJoin, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___myAllowedMapsToJoin;

/// @brief Field overlapColliders, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overlapColliders;

/// @brief Field manualRefreshOnly, offset: 0x58, size: 0x1, def value: None
 bool  ___manualRefreshOnly;

/// [Tooltip("If true, then when the number of players in the collider changes call the zone callbacks.")]
/// @brief Field updatePartyZoneCallbacks, offset: 0x59, size: 0x1, def value: None
 bool  ___updatePartyZoneCallbacks;

/// @brief Field ui, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinTriggerUI>  ___ui;

/// @brief Field _nextUpdateTime, offset: 0x68, size: 0x4, def value: None
 float_t  ____nextUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___playerIDsCurrentlyTouching) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___thisCapsule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___thisBox) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___applyCapsuleYLimits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___capsuleColliderYLimits) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___runCheckWhileNotInRoom) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___myAllowedMapsToJoin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___overlapColliders) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___manualRefreshOnly) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___updatePartyZoneCallbacks) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ___ui) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFriendCollider, ____nextUpdateTime) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFriendCollider) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
