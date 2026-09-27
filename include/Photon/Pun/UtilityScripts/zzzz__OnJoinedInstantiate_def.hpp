#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnJoinedInstantiate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_SpawnSequence_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OnJoinedInstantiate)
namespace GlobalNamespace {
struct OnJoinedInstantiate_SpawnSequence;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnJoinedInstantiate;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::OnJoinedInstantiate*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::OnJoinedInstantiate*, "Photon.Pun.UtilityScripts", "OnJoinedInstantiate");
// Dependencies Photon.Pun.UtilityScripts.OnJoinedInstantiate::SpawnSequence, UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.OnJoinedInstantiate
class CORDL_TYPE OnJoinedInstantiate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnSequence = ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence;

/// @brief Field AutoSpawnObjects, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoSpawnObjects, put=__cordl_internal_set_AutoSpawnObjects)) bool  AutoSpawnObjects;

/// @brief Field ClampY, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClampY, put=__cordl_internal_set_ClampY)) bool  ClampY;

/// @brief Field PrefabsToInstantiate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrefabsToInstantiate, put=__cordl_internal_set_PrefabsToInstantiate)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  PrefabsToInstantiate;

/// @brief Field RandomOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RandomOffset, put=__cordl_internal_set_RandomOffset)) float_t  RandomOffset;

/// @brief Field Sequence, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Sequence, put=__cordl_internal_set_Sequence)) ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence  Sequence;

/// @brief Field SpawnPoints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnPoints, put=__cordl_internal_set_SpawnPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  SpawnPoints;

/// @brief Field SpawnPosition, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnPosition, put=__cordl_internal_set_SpawnPosition)) ::UnityW<::UnityEngine::Transform>  SpawnPosition;

/// @brief Field SpawnedObjects, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnedObjects, put=__cordl_internal_set_SpawnedObjects)) ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  SpawnedObjects;

/// @brief Field UseRandomOffset, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseRandomOffset, put=__cordl_internal_set_UseRandomOffset)) bool  UseRandomOffset;

/// @brief Field lastUsedSpawnPointIndex, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUsedSpawnPointIndex, put=__cordl_internal_set_lastUsedSpawnPointIndex)) int32_t  lastUsedSpawnPointIndex;

/// @brief Field spawnedAsActorId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnedAsActorId, put=__cordl_internal_set_spawnedAsActorId)) int32_t  spawnedAsActorId;

/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method DespawnObjects, addr 0xa73b010, size 0x118, virtual true, abstract: false, final false
inline void DespawnObjects(bool  localOnly) ;

/// @brief Method GetRandomOffset, addr 0xa73b3c0, size 0x100, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetRandomOffset() ;

/// @brief Method GetSpawnPoint, addr 0xa73b294, size 0x12c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnPoint() ;

/// @brief Method GetSpawnPoint, addr 0xa73b144, size 0x150, virtual true, abstract: false, final false
inline void GetSpawnPoint(::by_ref<::UnityEngine::Vector3>  spawnPos, ::by_ref<::UnityEngine::Quaternion>  spawnRot) ;

static inline ::Photon::Pun::UtilityScripts::OnJoinedInstantiate* New_ctor() ;

/// @brief Method OnCreateRoomFailed, addr 0xa73b130, size 0x4, virtual true, abstract: false, final false
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0xa73b12c, size 0x4, virtual true, abstract: false, final false
inline void OnCreatedRoom() ;

/// @brief Method OnDisable, addr 0xa73acac, size 0x58, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa73ac54, size 0x58, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFriendListUpdate, addr 0xa73b128, size 0x4, virtual true, abstract: false, final false
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0xa73b138, size 0x4, virtual true, abstract: false, final false
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0xa73b134, size 0x4, virtual true, abstract: false, final false
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0xa73ad04, size 0x8c, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0xa73b13c, size 0x4, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPreLeavingRoom, addr 0xa73b140, size 0x4, virtual true, abstract: false, final false
inline void OnPreLeavingRoom() ;

/// @brief Method SpawnObjects, addr 0xa73ad90, size 0x280, virtual true, abstract: false, final false
inline void SpawnObjects() ;

constexpr bool const& __cordl_internal_get_AutoSpawnObjects() const;

constexpr bool& __cordl_internal_get_AutoSpawnObjects() ;

constexpr bool const& __cordl_internal_get_ClampY() const;

constexpr bool& __cordl_internal_get_ClampY() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_PrefabsToInstantiate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_PrefabsToInstantiate() ;

constexpr float_t const& __cordl_internal_get_RandomOffset() const;

constexpr float_t& __cordl_internal_get_RandomOffset() ;

constexpr ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence const& __cordl_internal_get_Sequence() const;

constexpr ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence& __cordl_internal_get_Sequence() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_SpawnPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_SpawnPoints() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SpawnPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SpawnPosition() ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_SpawnedObjects() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_SpawnedObjects() ;

constexpr bool const& __cordl_internal_get_UseRandomOffset() const;

constexpr bool& __cordl_internal_get_UseRandomOffset() ;

constexpr int32_t const& __cordl_internal_get_lastUsedSpawnPointIndex() const;

constexpr int32_t& __cordl_internal_get_lastUsedSpawnPointIndex() ;

constexpr int32_t const& __cordl_internal_get_spawnedAsActorId() const;

constexpr int32_t& __cordl_internal_get_spawnedAsActorId() ;

constexpr void __cordl_internal_set_AutoSpawnObjects(bool  value) ;

constexpr void __cordl_internal_set_ClampY(bool  value) ;

constexpr void __cordl_internal_set_PrefabsToInstantiate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_RandomOffset(float_t  value) ;

constexpr void __cordl_internal_set_Sequence(::GlobalNamespace::OnJoinedInstantiate_SpawnSequence  value) ;

constexpr void __cordl_internal_set_SpawnPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_SpawnPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_SpawnedObjects(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_UseRandomOffset(bool  value) ;

constexpr void __cordl_internal_set_lastUsedSpawnPointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_spawnedAsActorId(int32_t  value) ;

/// @brief Method .ctor, addr 0xa73b4c0, size 0x23c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinedInstantiate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinedInstantiate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinedInstantiate(OnJoinedInstantiate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinedInstantiate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinedInstantiate(OnJoinedInstantiate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31233};

/// [HideInInspector]
/// @brief Field SpawnPosition, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___SpawnPosition;

/// [HideInInspector]
/// @brief Field Sequence, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence  ___Sequence;

/// [HideInInspector]
/// @brief Field SpawnPoints, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___SpawnPoints;

/// [Tooltip("Add a random variance to a spawn point position. GetRandomOffset() can be overridden with your own method for producing offsets.")]
/// [HideInInspector]
/// @brief Field UseRandomOffset, offset: 0x38, size: 0x1, def value: None
 bool  ___UseRandomOffset;

/// [Tooltip("Radius of the RandomOffset.")]
/// [FormerlySerializedAs("PositionOffset")]
/// [HideInInspector]
/// @brief Field RandomOffset, offset: 0x3c, size: 0x4, def value: None
 float_t  ___RandomOffset;

/// [Tooltip("Disables the Y axis of RandomOffset. The Y value of the spawn point will be used.")]
/// [HideInInspector]
/// @brief Field ClampY, offset: 0x40, size: 0x1, def value: None
 bool  ___ClampY;

/// [HideInInspector]
/// @brief Field PrefabsToInstantiate, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___PrefabsToInstantiate;

/// [FormerlySerializedAs("autoSpawnObjects")]
/// [HideInInspector]
/// @brief Field AutoSpawnObjects, offset: 0x50, size: 0x1, def value: None
 bool  ___AutoSpawnObjects;

/// @brief Field SpawnedObjects, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  ___SpawnedObjects;

/// @brief Field spawnedAsActorId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___spawnedAsActorId;

/// @brief Field lastUsedSpawnPointIndex, offset: 0x64, size: 0x4, def value: None
 int32_t  ___lastUsedSpawnPointIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___SpawnPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___Sequence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___SpawnPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___UseRandomOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___RandomOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___ClampY) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___PrefabsToInstantiate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___AutoSpawnObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___SpawnedObjects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___spawnedAsActorId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___lastUsedSpawnPointIndex) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate) == 0x68, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
