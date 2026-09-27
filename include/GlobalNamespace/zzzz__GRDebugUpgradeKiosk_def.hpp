#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDebugUpgradeKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GRDebugUpgradeKiosk)
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDebugUpgradeKiosk;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDebugUpgradeKiosk*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDebugUpgradeKiosk*, "", "GRDebugUpgradeKiosk");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDebugUpgradeKiosk
class CORDL_TYPE GRDebugUpgradeKiosk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enemySpawnNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemySpawnNode, put=__cordl_internal_set_enemySpawnNode)) ::UnityW<::UnityEngine::Transform>  enemySpawnNode;

/// @brief Field grManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field reactor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field spawnedEntities, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedEntities, put=__cordl_internal_set_spawnedEntities)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  spawnedEntities;

/// @brief Field toolSpawnNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolSpawnNode, put=__cordl_internal_set_toolSpawnNode)) ::UnityW<::UnityEngine::Transform>  toolSpawnNode;

/// @brief Field upgradeSpawnNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeSpawnNode, put=__cordl_internal_set_upgradeSpawnNode)) ::UnityW<::UnityEngine::Transform>  upgradeSpawnNode;

/// @brief Method Init, addr 0x5875878, size 0x30, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactorManager*  grManager, ::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method KillAllEnemies, addr 0x5875f18, size 0x16c, virtual false, abstract: false, final false
inline void KillAllEnemies() ;

static inline ::GlobalNamespace::GRDebugUpgradeKiosk* New_ctor() ;

/// @brief Method OnButtonKillAllEnemies, addr 0x5875f14, size 0x4, virtual false, abstract: false, final false
inline void OnButtonKillAllEnemies() ;

/// @brief Method OnButtonSpawnChaosSeed, addr 0x58764f8, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnChaosSeed() ;

/// @brief Method OnButtonSpawnChaser, addr 0x58760d0, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnChaser() ;

/// @brief Method OnButtonSpawnClub, addr 0x58758ac, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnClub() ;

/// @brief Method OnButtonSpawnCollector, addr 0x5875c68, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnCollector() ;

/// @brief Method OnButtonSpawnDirectionalShield, addr 0x5875de4, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnDirectionalShield() ;

/// @brief Method OnButtonSpawnDockWrist, addr 0x5875e7c, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnDockWrist() ;

/// @brief Method OnButtonSpawnEntity, addr 0x58758f8, size 0x370, virtual false, abstract: false, final false
inline void OnButtonSpawnEntity(::StringW  entityName, ::UnityEngine::Transform*  location) ;

/// @brief Method OnButtonSpawnFlash, addr 0x5875d00, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnFlash() ;

/// @brief Method OnButtonSpawnIceRanged, addr 0x5876200, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnIceRanged() ;

/// @brief Method OnButtonSpawnLantern, addr 0x5875cb4, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnLantern() ;

/// @brief Method OnButtonSpawnPest, addr 0x5876084, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnPest() ;

/// @brief Method OnButtonSpawnPhantom, addr 0x587611c, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnPhantom() ;

/// @brief Method OnButtonSpawnRanged, addr 0x5876168, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnRanged() ;

/// @brief Method OnButtonSpawnRevive, addr 0x5875d98, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnRevive() ;

/// @brief Method OnButtonSpawnShieldGun, addr 0x5875d4c, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnShieldGun() ;

/// @brief Method OnButtonSpawnSmallBackpack, addr 0x5875ec8, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnSmallBackpack() ;

/// @brief Method OnButtonSpawnStatusWatch, addr 0x5875e30, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnStatusWatch() ;

/// @brief Method OnButtonSpawnSummoner, addr 0x58761b4, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnSummoner() ;

/// @brief Method OnButtonSpawnUpgBatonDmg1, addr 0x5876330, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgBatonDmg1() ;

/// @brief Method OnButtonSpawnUpgBatonDmg2, addr 0x587637c, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgBatonDmg2() ;

/// @brief Method OnButtonSpawnUpgBatonDmg3, addr 0x58763c8, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgBatonDmg3() ;

/// @brief Method OnButtonSpawnUpgEff1, addr 0x587624c, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgEff1() ;

/// @brief Method OnButtonSpawnUpgEff2, addr 0x5876298, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgEff2() ;

/// @brief Method OnButtonSpawnUpgEff3, addr 0x58762e4, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgEff3() ;

/// @brief Method OnButtonSpawnUpgEfficiency1, addr 0x5876414, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgEfficiency1() ;

/// @brief Method OnButtonSpawnUpgEfficiency2, addr 0x5876460, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgEfficiency2() ;

/// @brief Method OnButtonSpawnUpgEfficiency3, addr 0x58764ac, size 0x4c, virtual false, abstract: false, final false
inline void OnButtonSpawnUpgEfficiency3() ;

/// @brief Method Start, addr 0x58758a8, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_enemySpawnNode() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_enemySpawnNode() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* const& __cordl_internal_get_spawnedEntities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*& __cordl_internal_get_spawnedEntities() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_toolSpawnNode() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_toolSpawnNode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_upgradeSpawnNode() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_upgradeSpawnNode() ;

constexpr void __cordl_internal_set_enemySpawnNode(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_spawnedEntities(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value) ;

constexpr void __cordl_internal_set_toolSpawnNode(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_upgradeSpawnNode(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5876544, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDebugUpgradeKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDebugUpgradeKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDebugUpgradeKiosk(GRDebugUpgradeKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDebugUpgradeKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDebugUpgradeKiosk(GRDebugUpgradeKiosk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1905};

/// @brief Field upgradeSpawnNode, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___upgradeSpawnNode;

/// @brief Field toolSpawnNode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___toolSpawnNode;

/// @brief Field enemySpawnNode, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___enemySpawnNode;

/// @brief Field grManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// @brief Field reactor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field spawnedEntities, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  ___spawnedEntities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDebugUpgradeKiosk, ___upgradeSpawnNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDebugUpgradeKiosk, ___toolSpawnNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDebugUpgradeKiosk, ___enemySpawnNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDebugUpgradeKiosk, ___grManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDebugUpgradeKiosk, ___reactor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDebugUpgradeKiosk, ___spawnedEntities) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDebugUpgradeKiosk) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
