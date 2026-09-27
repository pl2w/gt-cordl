#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCritterManager)
namespace GlobalNamespace {
struct CosmeticCritterAction;
}
namespace GlobalNamespace {
class CosmeticCritterCatcher;
}
namespace GlobalNamespace {
class CosmeticCritterHoldable;
}
namespace GlobalNamespace {
class CosmeticCritterSpawnerIndependent;
}
namespace GlobalNamespace {
class CosmeticCritterSpawner;
}
namespace GlobalNamespace {
class CosmeticCritter;
}
namespace GlobalNamespace {
class ICosmeticCritterTickForEach;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterManager*, "", "CosmeticCritterManager");
// Dependencies NetworkSceneObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterManager
class CORDL_TYPE CosmeticCritterManager : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::CosmeticCritterManager>  _Instance_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field activeCritters, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCritters, put=__cordl_internal_set_activeCritters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*  activeCritters;

/// @brief Field activeCrittersBySeed, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCrittersBySeed, put=__cordl_internal_set_activeCrittersBySeed)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>*  activeCrittersBySeed;

/// @brief Field activeCrittersPerType, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCrittersPerType, put=__cordl_internal_set_activeCrittersPerType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  activeCrittersPerType;

/// @brief Field inactiveCrittersByType, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_inactiveCrittersByType, put=__cordl_internal_set_inactiveCrittersByType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>*  inactiveCrittersByType;

/// @brief Field localCritterCatchers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_localCritterCatchers, put=__cordl_internal_set_localCritterCatchers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  localCritterCatchers;

/// @brief Field localCritterSpawners, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_localCritterSpawners, put=__cordl_internal_set_localCritterSpawners)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  localCritterSpawners;

/// @brief Field localHoldables, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_localHoldables, put=__cordl_internal_set_localHoldables)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>*  localHoldables;

/// @brief Field remoteCritterCatchers, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteCritterCatchers, put=__cordl_internal_set_remoteCritterCatchers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  remoteCritterCatchers;

/// @brief Field remoteCritterSpawners, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteCritterSpawners, put=__cordl_internal_set_remoteCritterSpawners)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  remoteCritterSpawners;

/// @brief Field tickForEachCritterOfType, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickForEachCritterOfType, put=__cordl_internal_set_tickForEachCritterOfType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>*  tickForEachCritterOfType;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x57e9098, size 0x520, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CatchCosmeticCritterRPC, addr 0x57ea3e8, size 0x238, virtual false, abstract: false, final false
inline void CatchCosmeticCritterRPC(::GlobalNamespace::CosmeticCritterAction  catchAction, int32_t  catcherID, int32_t  seed, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method CosmeticCritterRPC, addr 0x57ea108, size 0x150, virtual false, abstract: false, final false
inline void CosmeticCritterRPC(::GlobalNamespace::CosmeticCritterAction  action, int32_t  holdableID, int32_t  seed, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method FreeCritter, addr 0x57e8e18, size 0x280, virtual false, abstract: false, final false
inline void FreeCritter(::GlobalNamespace::CosmeticCritter*  critter) ;

static inline ::GlobalNamespace::CosmeticCritterManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x57e87f8, size 0x118, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57e86e0, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterCatcher, addr 0x57e80f4, size 0xac, virtual false, abstract: false, final false
inline void RegisterCatcher(::GlobalNamespace::CosmeticCritterCatcher*  catcher) ;

/// @brief Method RegisterIndependentSpawner, addr 0x57e8910, size 0xac, virtual false, abstract: false, final false
inline void RegisterIndependentSpawner(::GlobalNamespace::CosmeticCritterSpawnerIndependent*  spawner) ;

/// @brief Method RegisterLocalHoldable, addr 0x57e8584, size 0xac, virtual false, abstract: false, final false
inline void RegisterLocalHoldable(::GlobalNamespace::CosmeticCritterHoldable*  holdable) ;

/// @brief Method RegisterTickForEachCritter, addr 0x57e8a34, size 0x134, virtual false, abstract: false, final false
inline void RegisterTickForEachCritter(::System::Type*  type, ::GlobalNamespace::ICosmeticCritterTickForEach*  target) ;

/// @brief Method ResetCosmeticCritters, addr 0x57e8d34, size 0xe4, virtual false, abstract: false, final false
inline void ResetCosmeticCritters(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ResetLocalCallLimiters, addr 0x57e8c04, size 0x130, virtual false, abstract: false, final false
inline void ResetLocalCallLimiters() ;

/// @brief Method ReuseOrSpawnNewCritter, addr 0x57e95b8, size 0x3d8, virtual false, abstract: false, final false
inline void ReuseOrSpawnNewCritter(::GlobalNamespace::CosmeticCritterSpawner*  spawner, int32_t  seed, double_t  time) ;

/// @brief Method SpawnCosmeticCritterRPC, addr 0x57ea258, size 0x190, virtual false, abstract: false, final false
inline void SpawnCosmeticCritterRPC(int32_t  spawnerID, int32_t  seed, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Tick, addr 0x57e9990, size 0x778, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UnregisterCatcher, addr 0x57e81fc, size 0x78, virtual false, abstract: false, final false
inline void UnregisterCatcher(::GlobalNamespace::CosmeticCritterCatcher*  catcher) ;

/// @brief Method UnregisterIndependentSpawner, addr 0x57e89bc, size 0x78, virtual false, abstract: false, final false
inline void UnregisterIndependentSpawner(::GlobalNamespace::CosmeticCritterSpawnerIndependent*  spawner) ;

/// @brief Method UnregisterTickForEachCritter, addr 0x57e8b68, size 0x9c, virtual false, abstract: false, final false
inline void UnregisterTickForEachCritter(::System::Type*  type, ::GlobalNamespace::ICosmeticCritterTickForEach*  target) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>* const& __cordl_internal_get_activeCritters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*& __cordl_internal_get_activeCritters() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>* const& __cordl_internal_get_activeCrittersBySeed() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>*& __cordl_internal_get_activeCrittersBySeed() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* const& __cordl_internal_get_activeCrittersPerType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*& __cordl_internal_get_activeCrittersPerType() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>* const& __cordl_internal_get_inactiveCrittersByType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>*& __cordl_internal_get_inactiveCrittersByType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>* const& __cordl_internal_get_localCritterCatchers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*& __cordl_internal_get_localCritterCatchers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>* const& __cordl_internal_get_localCritterSpawners() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*& __cordl_internal_get_localCritterSpawners() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>* const& __cordl_internal_get_localHoldables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>*& __cordl_internal_get_localHoldables() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>* const& __cordl_internal_get_remoteCritterCatchers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*& __cordl_internal_get_remoteCritterCatchers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>* const& __cordl_internal_get_remoteCritterSpawners() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*& __cordl_internal_get_remoteCritterSpawners() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>* const& __cordl_internal_get_tickForEachCritterOfType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>*& __cordl_internal_get_tickForEachCritterOfType() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeCritters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*  value) ;

constexpr void __cordl_internal_set_activeCrittersBySeed(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>*  value) ;

constexpr void __cordl_internal_set_activeCrittersPerType(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

constexpr void __cordl_internal_set_inactiveCrittersByType(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>*  value) ;

constexpr void __cordl_internal_set_localCritterCatchers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  value) ;

constexpr void __cordl_internal_set_localCritterSpawners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  value) ;

constexpr void __cordl_internal_set_localHoldables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>*  value) ;

constexpr void __cordl_internal_set_remoteCritterCatchers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  value) ;

constexpr void __cordl_internal_set_remoteCritterSpawners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  value) ;

constexpr void __cordl_internal_set_tickForEachCritterOfType(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>*  value) ;

/// @brief Method .ctor, addr 0x57ea620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::CosmeticCritterManager> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x57e8630, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::CosmeticCritterManager> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x57e86d0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::CosmeticCritterManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x57e8678, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::CosmeticCritterManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x57e86d8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterManager(CosmeticCritterManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterManager(CosmeticCritterManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1668};

/// @brief Field localHoldables, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>*  ___localHoldables;

/// @brief Field localCritterSpawners, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  ___localCritterSpawners;

/// @brief Field remoteCritterSpawners, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  ___remoteCritterSpawners;

/// @brief Field localCritterCatchers, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  ___localCritterCatchers;

/// @brief Field remoteCritterCatchers, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  ___remoteCritterCatchers;

/// @brief Field activeCritters, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*  ___activeCritters;

/// @brief Field activeCrittersPerType, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  ___activeCrittersPerType;

/// @brief Field activeCrittersBySeed, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>*  ___activeCrittersBySeed;

/// @brief Field inactiveCrittersByType, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>*  ___inactiveCrittersByType;

/// @brief Field tickForEachCritterOfType, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>*  ___tickForEachCritterOfType;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xa0, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___localHoldables) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___localCritterSpawners) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___remoteCritterSpawners) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___localCritterCatchers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___remoteCritterCatchers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___activeCritters) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___activeCrittersPerType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___activeCrittersBySeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___inactiveCrittersByType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ___tickForEachCritterOfType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterManager, ____TickRunning_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterManager) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
