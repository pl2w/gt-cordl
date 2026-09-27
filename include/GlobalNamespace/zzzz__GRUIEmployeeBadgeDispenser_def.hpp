#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIEmployeeBadgeDispenser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIEmployeeBadgeDispenser)
namespace GlobalNamespace {
class GRBadge;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Coroutine;
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
namespace GlobalNamespace {
class GRUIEmployeeBadgeDispenser;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIEmployeeBadgeDispenser*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIEmployeeBadgeDispenser*, "", "GRUIEmployeeBadgeDispenser");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIEmployeeBadgeDispenser
class CORDL_TYPE GRUIEmployeeBadgeDispenser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field actorNr, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorNr, put=__cordl_internal_set_actorNr)) int32_t  actorNr;

/// @brief Field badgeLayerMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_badgeLayerMask, put=__cordl_internal_set_badgeLayerMask)) ::UnityEngine::LayerMask  badgeLayerMask;

/// @brief Field getSpawnedBadgeCoroutine, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_getSpawnedBadgeCoroutine, put=__cordl_internal_set_getSpawnedBadgeCoroutine)) ::UnityEngine::Coroutine*  getSpawnedBadgeCoroutine;

/// @brief Field idBadge, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_idBadge, put=__cordl_internal_set_idBadge)) ::UnityW<::GlobalNamespace::GRBadge>  idBadge;

/// @brief Field idBadgePrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_idBadgePrefab, put=__cordl_internal_set_idBadgePrefab)) ::UnityW<::GlobalNamespace::GameEntity>  idBadgePrefab;

/// @brief Field index, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field isEmployee, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEmployee, put=__cordl_internal_set_isEmployee)) bool  isEmployee;

/// @brief Field msg, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_msg, put=__cordl_internal_set_msg)) ::UnityW<::TMPro::TMP_Text>  msg;

/// @brief Field overlapColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapColliders, put=setStaticF_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field playerName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::TMPro::TMP_Text>  playerName;

/// @brief Field reactor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field spawnLocation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLocation, put=__cordl_internal_set_spawnLocation)) ::UnityW<::UnityEngine::Transform>  spawnLocation;

/// @brief Method AttachIDBadge, addr 0x58d19bc, size 0xc0, virtual false, abstract: false, final false
inline void AttachIDBadge(::GlobalNamespace::GRBadge*  linkedBadge, ::GlobalNamespace::NetPlayer*  _player) ;

/// @brief Method ClearBadge, addr 0x58d19a8, size 0x14, virtual false, abstract: false, final false
inline void ClearBadge() ;

/// @brief Method CreateBadge, addr 0x58d17d4, size 0x130, virtual false, abstract: false, final false
inline void CreateBadge(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::GameEntityManager*  entityManager) ;

/// @brief Method GetSpawnMarker, addr 0x58d1904, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnMarker() ;

/// @brief Method GetSpawnPosition, addr 0x58d1978, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSpawnPosition() ;

/// @brief Method GetSpawnRotation, addr 0x58d1990, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetSpawnRotation() ;

/// @brief Method IsDispenserForBadge, addr 0x58d190c, size 0x6c, virtual false, abstract: false, final false
inline bool IsDispenserForBadge(::GlobalNamespace::GRBadge*  badge) ;

static inline ::GlobalNamespace::GRUIEmployeeBadgeDispenser* New_ctor() ;

/// @brief Method Refresh, addr 0x58d167c, size 0x158, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method Setup, addr 0x58d1674, size 0x8, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::GhostReactor*  reactor, int32_t  employeeIndex) ;

constexpr int32_t const& __cordl_internal_get_actorNr() const;

constexpr int32_t& __cordl_internal_get_actorNr() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_badgeLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_badgeLayerMask() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_getSpawnedBadgeCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_getSpawnedBadgeCoroutine() ;

constexpr ::UnityW<::GlobalNamespace::GRBadge> const& __cordl_internal_get_idBadge() const;

constexpr ::UnityW<::GlobalNamespace::GRBadge>& __cordl_internal_get_idBadge() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_idBadgePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_idBadgePrefab() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr bool const& __cordl_internal_get_isEmployee() const;

constexpr bool& __cordl_internal_get_isEmployee() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_msg() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_msg() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerName() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnLocation() ;

constexpr void __cordl_internal_set_actorNr(int32_t  value) ;

constexpr void __cordl_internal_set_badgeLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_getSpawnedBadgeCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_idBadge(::UnityW<::GlobalNamespace::GRBadge>  value) ;

constexpr void __cordl_internal_set_idBadgePrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_isEmployee(bool  value) ;

constexpr void __cordl_internal_set_msg(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58d1a7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_overlapColliders() ;

static inline void setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIEmployeeBadgeDispenser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIEmployeeBadgeDispenser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIEmployeeBadgeDispenser(GRUIEmployeeBadgeDispenser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIEmployeeBadgeDispenser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIEmployeeBadgeDispenser(GRUIEmployeeBadgeDispenser const& ) = delete;

/// @brief Field GR_DATA_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GR_DATA_KEY{u"GRData"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2099};

/// [SerializeField]
/// @brief Field msg, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___msg;

/// [SerializeField]
/// @brief Field playerName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerName;

/// [SerializeField]
/// @brief Field spawnLocation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnLocation;

/// [SerializeField]
/// @brief Field idBadgePrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___idBadgePrefab;

/// [SerializeField]
/// @brief Field badgeLayerMask, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___badgeLayerMask;

/// @brief Field index, offset: 0x44, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field actorNr, offset: 0x48, size: 0x4, def value: None
 int32_t  ___actorNr;

/// @brief Field idBadge, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBadge>  ___idBadge;

/// @brief Field reactor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field getSpawnedBadgeCoroutine, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___getSpawnedBadgeCoroutine;

/// @brief Field isEmployee, offset: 0x68, size: 0x1, def value: None
 bool  ___isEmployee;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___msg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___playerName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___spawnLocation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___idBadgePrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___badgeLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___index) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___actorNr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___idBadge) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___reactor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___getSpawnedBadgeCoroutine) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIEmployeeBadgeDispenser, ___isEmployee) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIEmployeeBadgeDispenser) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
