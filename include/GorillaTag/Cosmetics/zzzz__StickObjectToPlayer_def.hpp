#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StickObjectToPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__StickObjectToPlayer_SpawnLocation_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StickObjectToPlayer)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct StickObjectToPlayer_SpawnLocation;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class StickObjectToPlayer;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::StickObjectToPlayer*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::StickObjectToPlayer*, "GorillaTag.Cosmetics", "StickObjectToPlayer");
// Dependencies GorillaTag.Cosmetics.StickObjectToPlayer::SpawnLocation, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.StickObjectToPlayer
class CORDL_TYPE StickObjectToPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnLocation = ::GlobalNamespace::StickObjectToPlayer_SpawnLocation;

/// @brief Field FPVOffset, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_FPVOffset, put=__cordl_internal_set_FPVOffset)) ::UnityEngine::Vector3  FPVOffset;

/// @brief Field FPVlocalEulerAngles, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_FPVlocalEulerAngles, put=__cordl_internal_set_FPVlocalEulerAngles)) ::UnityEngine::Vector3  FPVlocalEulerAngles;

/// @brief Field OnStickShared, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStickShared, put=__cordl_internal_set_OnStickShared)) ::UnityEngine::Events::UnityEvent*  OnStickShared;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field alignToHitNormal, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_alignToHitNormal, put=__cordl_internal_set_alignToHitNormal)) bool  alignToHitNormal;

/// @brief Field canSpawn, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSpawn, put=__cordl_internal_set_canSpawn)) bool  canSpawn;

/// @brief Field cooldown, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field firstPersonView, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstPersonView, put=__cordl_internal_set_firstPersonView)) bool  firstPersonView;

/// @brief Field lastSpawnedTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSpawnedTime, put=__cordl_internal_set_lastSpawnedTime)) float_t  lastSpawnedTime;

/// @brief Field localEulerAngles, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localEulerAngles, put=__cordl_internal_set_localEulerAngles)) ::UnityEngine::Vector3  localEulerAngles;

/// @brief Field maxActiveStickies, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxActiveStickies, put=__cordl_internal_set_maxActiveStickies)) int32_t  maxActiveStickies;

/// @brief Field objectToSpawn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectToSpawn, put=__cordl_internal_set_objectToSpawn)) ::UnityW<::UnityEngine::GameObject>  objectToSpawn;

/// @brief Field ownerPlayer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerPlayer, put=__cordl_internal_set_ownerPlayer)) ::GlobalNamespace::NetPlayer*  ownerPlayer;

/// @brief Field parentTag, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTag, put=__cordl_internal_set_parentTag)) ::StringW  parentTag;

/// @brief Field positionOffset, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionOffset, put=__cordl_internal_set_positionOffset)) ::UnityEngine::Vector3  positionOffset;

/// @brief Field spawnLocation, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnLocation, put=__cordl_internal_set_spawnLocation)) ::GlobalNamespace::StickObjectToPlayer_SpawnLocation  spawnLocation;

/// @brief Field spawnerRigidbody, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnerRigidbody, put=__cordl_internal_set_spawnerRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  spawnerRigidbody;

/// @brief Field stickRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickRadius, put=__cordl_internal_set_stickRadius)) float_t  stickRadius;

/// @brief Field stickyObject, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyObject, put=__cordl_internal_set_stickyObject)) ::UnityW<::UnityEngine::GameObject>  stickyObject;

/// @brief Field thirdPersonView, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_thirdPersonView, put=__cordl_internal_set_thirdPersonView)) bool  thirdPersonView;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Debug_StickToLocalPlayer, addr 0x5d78478, size 0x134, virtual false, abstract: false, final false
inline void Debug_StickToLocalPlayer() ;

/// @brief Method Debug_StickToLocalPlayerFPV, addr 0x5d785ac, size 0x4, virtual false, abstract: false, final false
inline void Debug_StickToLocalPlayerFPV() ;

/// @brief Method GetSpawnPosition, addr 0x5d7811c, size 0x68, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnPosition(::GlobalNamespace::StickObjectToPlayer_SpawnLocation  spawnType, ::GlobalNamespace::VRRig*  hitRig) ;

/// @brief Method MakeOrGetStickyContainer, addr 0x5d77a4c, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> MakeOrGetStickyContainer(::UnityEngine::Transform*  parent) ;

static inline ::GorillaTag::Cosmetics::StickObjectToPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d779d8, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d77960, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetOwner, addr 0x5d77a44, size 0x8, virtual false, abstract: false, final false
inline void SetOwner(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method Stick, addr 0x5d77c18, size 0x504, virtual false, abstract: false, final false
inline void Stick(bool  leftHand, ::UnityEngine::Collider*  other) ;

/// @brief Method StickFirstPersonView, addr 0x5d78184, size 0xf4, virtual false, abstract: false, final false
inline void StickFirstPersonView() ;

/// @brief Method StickTo, addr 0x5d78278, size 0x200, virtual false, abstract: false, final false
inline void StickTo(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  eulerAngle) ;

/// @brief Method Tick, addr 0x5d77920, size 0x40, virtual true, abstract: false, final true
inline void Tick() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_FPVOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_FPVOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_FPVlocalEulerAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_FPVlocalEulerAngles() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnStickShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnStickShared() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get_alignToHitNormal() const;

constexpr bool& __cordl_internal_get_alignToHitNormal() ;

constexpr bool const& __cordl_internal_get_canSpawn() const;

constexpr bool& __cordl_internal_get_canSpawn() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr bool const& __cordl_internal_get_firstPersonView() const;

constexpr bool& __cordl_internal_get_firstPersonView() ;

constexpr float_t const& __cordl_internal_get_lastSpawnedTime() const;

constexpr float_t& __cordl_internal_get_lastSpawnedTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localEulerAngles() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localEulerAngles() ;

constexpr int32_t const& __cordl_internal_get_maxActiveStickies() const;

constexpr int32_t& __cordl_internal_get_maxActiveStickies() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_objectToSpawn() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_objectToSpawn() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_ownerPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_ownerPlayer() ;

constexpr ::StringW const& __cordl_internal_get_parentTag() const;

constexpr ::StringW& __cordl_internal_get_parentTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionOffset() ;

constexpr ::GlobalNamespace::StickObjectToPlayer_SpawnLocation const& __cordl_internal_get_spawnLocation() const;

constexpr ::GlobalNamespace::StickObjectToPlayer_SpawnLocation& __cordl_internal_get_spawnLocation() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_spawnerRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_spawnerRigidbody() ;

constexpr float_t const& __cordl_internal_get_stickRadius() const;

constexpr float_t& __cordl_internal_get_stickRadius() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stickyObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stickyObject() ;

constexpr bool const& __cordl_internal_get_thirdPersonView() const;

constexpr bool& __cordl_internal_get_thirdPersonView() ;

constexpr void __cordl_internal_set_FPVOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_FPVlocalEulerAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_OnStickShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_alignToHitNormal(bool  value) ;

constexpr void __cordl_internal_set_canSpawn(bool  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_firstPersonView(bool  value) ;

constexpr void __cordl_internal_set_lastSpawnedTime(float_t  value) ;

constexpr void __cordl_internal_set_localEulerAngles(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxActiveStickies(int32_t  value) ;

constexpr void __cordl_internal_set_objectToSpawn(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ownerPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_parentTag(::StringW  value) ;

constexpr void __cordl_internal_set_positionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_spawnLocation(::GlobalNamespace::StickObjectToPlayer_SpawnLocation  value) ;

constexpr void __cordl_internal_set_spawnerRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_stickRadius(float_t  value) ;

constexpr void __cordl_internal_set_stickyObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_thirdPersonView(bool  value) ;

/// @brief Method .ctor, addr 0x5d785b0, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d77910, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d77918, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickObjectToPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickObjectToPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StickObjectToPlayer(StickObjectToPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickObjectToPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickObjectToPlayer(StickObjectToPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4864};

/// [Header("Shared Settings")]
/// [Tooltip("Must be in the global object pool and have a tag.")]
/// [SerializeField]
/// @brief Field objectToSpawn, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___objectToSpawn;

/// [Tooltip("Optional: how many objects can be active at once")]
/// [SerializeField]
/// @brief Field maxActiveStickies, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxActiveStickies;

/// [SerializeField]
/// @brief Field spawnLocation, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::StickObjectToPlayer_SpawnLocation  ___spawnLocation;

/// [SerializeField]
/// @brief Field stickRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___stickRadius;

/// [SerializeField]
/// @brief Field alignToHitNormal, offset: 0x34, size: 0x1, def value: None
 bool  ___alignToHitNormal;

/// [SerializeField]
/// @brief Field spawnerRigidbody, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___spawnerRigidbody;

/// [SerializeField]
/// @brief Field parentTag, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___parentTag;

/// [SerializeField]
/// @brief Field cooldown, offset: 0x48, size: 0x4, def value: None
 float_t  ___cooldown;

/// [Header("Third Person View")]
/// [Tooltip("If you are only interested in the FPV, don\'t check this box so that others don\'t see it.")]
/// [SerializeField]
/// @brief Field thirdPersonView, offset: 0x4c, size: 0x1, def value: None
 bool  ___thirdPersonView;

/// [SerializeField]
/// @brief Field positionOffset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionOffset;

/// [Tooltip("Local rotation to apply to the spawned object (Euler angles, degrees)")]
/// [SerializeField]
/// @brief Field localEulerAngles, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localEulerAngles;

/// [Header("First Person View")]
/// [SerializeField]
/// @brief Field firstPersonView, offset: 0x68, size: 0x1, def value: None
 bool  ___firstPersonView;

/// [SerializeField]
/// @brief Field FPVOffset, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___FPVOffset;

/// [Tooltip("Local rotation to apply to the spawned object (Euler angles, degrees)")]
/// [SerializeField]
/// @brief Field FPVlocalEulerAngles, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___FPVlocalEulerAngles;

/// [Header("Events")]
/// @brief Field OnStickShared, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnStickShared;

/// @brief Field stickyObject, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stickyObject;

/// @brief Field lastSpawnedTime, offset: 0x98, size: 0x4, def value: None
 float_t  ___lastSpawnedTime;

/// @brief Field canSpawn, offset: 0x9c, size: 0x1, def value: None
 bool  ___canSpawn;

/// @brief Field ownerPlayer, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___ownerPlayer;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___objectToSpawn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___maxActiveStickies) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___spawnLocation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___stickRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___alignToHitNormal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___spawnerRigidbody) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___parentTag) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___cooldown) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___thirdPersonView) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___positionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___localEulerAngles) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___firstPersonView) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___FPVOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___FPVlocalEulerAngles) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___OnStickShared) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___stickyObject) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___lastSpawnedTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___canSpawn) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ___ownerPlayer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickObjectToPlayer, ____TickRunning_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::StickObjectToPlayer) == 0xb0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
