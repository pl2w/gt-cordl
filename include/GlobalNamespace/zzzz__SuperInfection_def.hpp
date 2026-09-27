#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceDeposit_def.hpp"
#include "GlobalNamespace/zzzz__SIResourceRegion_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SuperInfection)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SIGadget;
}
namespace GlobalNamespace {
class SIPurchaseTerminal;
}
namespace GlobalNamespace {
class SIQuestBoard;
}
namespace GlobalNamespace {
class SIResource;
}
namespace GlobalNamespace {
class SITechTreeSO;
}
namespace GlobalNamespace {
class SuperInfectionManager;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SuperInfection;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfection*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfection*, "", "SuperInfection");
// [DefaultExecutionOrder(1)]
// Dependencies GTZone, SICombinedTerminal, SIResourceDeposit, SIResourceRegion, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfection
class CORDL_TYPE SuperInfection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsAuthorityAndActive)) bool  IsAuthorityAndActive;

 __declspec(property(get=get_ResourcePrefabs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>*  ResourcePrefabs;

 __declspec(property(get=get_ResourceSpawnInterval)) float_t  ResourceSpawnInterval;

 __declspec(property(get=get_TimeSinceLastSpawn)) float_t  TimeSinceLastSpawn;

 __declspec(property(get=get_TimeToNextSpawn)) float_t  TimeToNextSpawn;

/// @brief Field _lastResourceSpawnTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastResourceSpawnTime, put=__cordl_internal_set__lastResourceSpawnTime)) float_t  _lastResourceSpawnTime;

/// @brief Field _nextResourceUpdateTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextResourceUpdateTime, put=__cordl_internal_set__nextResourceUpdateTime)) float_t  _nextResourceUpdateTime;

/// @brief Field _resourcePrefabs, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__resourcePrefabs, put=__cordl_internal_set__resourcePrefabs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>*  _resourcePrefabs;

/// @brief Field activeGadgets, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeGadgets, put=__cordl_internal_set_activeGadgets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  activeGadgets;

/// @brief Field authorityActorNumber, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_authorityActorNumber, put=__cordl_internal_set_authorityActorNumber)) int32_t  authorityActorNumber;

/// @brief Field authorityName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_authorityName, put=__cordl_internal_set_authorityName)) ::UnityW<::TMPro::TextMeshProUGUI>  authorityName;

/// @brief Field minRoomPopulation, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRoomPopulation, put=__cordl_internal_set_minRoomPopulation)) int32_t  minRoomPopulation;

/// @brief Field perPlayerHourlyResourceRate, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_perPlayerHourlyResourceRate, put=__cordl_internal_set_perPlayerHourlyResourceRate)) int32_t  perPlayerHourlyResourceRate;

/// @brief Field perRoundResourceNodeParent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_perRoundResourceNodeParent, put=__cordl_internal_set_perRoundResourceNodeParent)) ::UnityW<::UnityEngine::Transform>  perRoundResourceNodeParent;

/// @brief Field perRoundResourceRegions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_perRoundResourceRegions, put=__cordl_internal_set_perRoundResourceRegions)) ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>  perRoundResourceRegions;

/// @brief Field purchaseTerminal, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseTerminal, put=__cordl_internal_set_purchaseTerminal)) ::UnityW<::GlobalNamespace::SIPurchaseTerminal>  purchaseTerminal;

/// @brief Field questBoard, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_questBoard, put=__cordl_internal_set_questBoard)) ::UnityW<::GlobalNamespace::SIQuestBoard>  questBoard;

/// @brief Field resourceNodeParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceNodeParent, put=__cordl_internal_set_resourceNodeParent)) ::UnityW<::UnityEngine::Transform>  resourceNodeParent;

/// @brief Field resourceRegions, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceRegions, put=__cordl_internal_set_resourceRegions)) ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>  resourceRegions;

/// @brief Field resourceResetHeight, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_resourceResetHeight, put=__cordl_internal_set_resourceResetHeight)) float_t  resourceResetHeight;

/// @brief Field resourceResetLoc, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceResetLoc, put=__cordl_internal_set_resourceResetLoc)) ::UnityW<::UnityEngine::Transform>  resourceResetLoc;

/// @brief Field retryCreatePerRoundResources, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_retryCreatePerRoundResources, put=__cordl_internal_set_retryCreatePerRoundResources)) bool  retryCreatePerRoundResources;

/// @brief Field siDeposits, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_siDeposits, put=__cordl_internal_set_siDeposits)) ::ArrayW<::UnityW<::GlobalNamespace::SIResourceDeposit>>  siDeposits;

/// @brief Field siManager, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_siManager, put=__cordl_internal_set_siManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  siManager;

/// @brief Field siTerminals, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_siTerminals, put=__cordl_internal_set_siTerminals)) ::ArrayW<::UnityW<::GlobalNamespace::SICombinedTerminal>>  siTerminals;

/// @brief Field techTreeSO, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_techTreeSO, put=__cordl_internal_set_techTreeSO)) ::UnityW<::GlobalNamespace::SITechTreeSO>  techTreeSO;

/// @brief Field zone, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Field zoneObjects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneObjects, put=__cordl_internal_set_zoneObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  zoneObjects;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AddGadget, addr 0x5afb8c4, size 0xac, virtual false, abstract: false, final false
inline void AddGadget(::GlobalNamespace::SIGadget*  gadget) ;

/// @brief Method Awake, addr 0x5af8a44, size 0x35c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckResourceSpawn, addr 0x5afab34, size 0x5ec, virtual false, abstract: false, final false
inline void CheckResourceSpawn() ;

/// @brief Method ClearPerRoundResources, addr 0x5afb9e0, size 0x1e8, virtual false, abstract: false, final false
inline void ClearPerRoundResources() ;

/// @brief Method CreatePerRoundResources, addr 0x5afa650, size 0x4e4, virtual false, abstract: false, final false
inline void CreatePerRoundResources() ;

/// @brief Method DisableStations, addr 0x5af9290, size 0x3d4, virtual false, abstract: false, final false
inline void DisableStations() ;

/// @brief Method EnableStations, addr 0x5afa060, size 0x35c, virtual false, abstract: false, final false
inline void EnableStations() ;

/// @brief Method GetNextResourceSpawnTime, addr 0x5afb120, size 0x2c, virtual false, abstract: false, final false
inline float_t GetNextResourceSpawnTime() ;

/// @brief Method GetResourceSpawnInterval, addr 0x5af88c0, size 0xd0, virtual false, abstract: false, final false
inline float_t GetResourceSpawnInterval() ;

static inline ::GlobalNamespace::SuperInfection* New_ctor() ;

/// @brief Method OnDisable, addr 0x5af9664, size 0x1d4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5af8da0, size 0x290, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnZoneClear, addr 0x5afa3bc, size 0x5c, virtual false, abstract: false, final false
inline void OnZoneClear(::GlobalNamespace::ZoneClearReason  reason) ;

/// @brief Method OnZoneInit, addr 0x5af9838, size 0x18, virtual false, abstract: false, final false
inline void OnZoneInit() ;

/// @brief Method RebuildRegionItemsFromEntities, addr 0x5af9850, size 0x810, virtual false, abstract: false, final false
inline void RebuildRegionItemsFromEntities() ;

/// @brief Method RefreshStations, addr 0x5afb2ec, size 0x254, virtual false, abstract: false, final false
inline void RefreshStations(int32_t  actorNr) ;

/// @brief Method RemoveGadget, addr 0x5afb970, size 0x58, virtual false, abstract: false, final false
inline void RemoveGadget(::GlobalNamespace::SIGadget*  gadget) ;

/// @brief Method RemovePlayerGadgetsOnLeave, addr 0x5afb14c, size 0x1a0, virtual false, abstract: false, final false
inline void RemovePlayerGadgetsOnLeave(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ResetPerRoundResources, addr 0x5afb9c8, size 0x18, virtual false, abstract: false, final false
inline void ResetPerRoundResources() ;

/// @brief Method SliceUpdate, addr 0x5afb540, size 0x298, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateResources, addr 0x5afa43c, size 0x214, virtual false, abstract: false, final false
inline void UpdateResources() ;

constexpr float_t const& __cordl_internal_get__lastResourceSpawnTime() const;

constexpr float_t& __cordl_internal_get__lastResourceSpawnTime() ;

constexpr float_t const& __cordl_internal_get__nextResourceUpdateTime() const;

constexpr float_t& __cordl_internal_get__nextResourceUpdateTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>* const& __cordl_internal_get__resourcePrefabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>*& __cordl_internal_get__resourcePrefabs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>* const& __cordl_internal_get_activeGadgets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*& __cordl_internal_get_activeGadgets() ;

constexpr int32_t const& __cordl_internal_get_authorityActorNumber() const;

constexpr int32_t& __cordl_internal_get_authorityActorNumber() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_authorityName() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_authorityName() ;

constexpr int32_t const& __cordl_internal_get_minRoomPopulation() const;

constexpr int32_t& __cordl_internal_get_minRoomPopulation() ;

constexpr int32_t const& __cordl_internal_get_perPlayerHourlyResourceRate() const;

constexpr int32_t& __cordl_internal_get_perPlayerHourlyResourceRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_perRoundResourceNodeParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_perRoundResourceNodeParent() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>> const& __cordl_internal_get_perRoundResourceRegions() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>& __cordl_internal_get_perRoundResourceRegions() ;

constexpr ::UnityW<::GlobalNamespace::SIPurchaseTerminal> const& __cordl_internal_get_purchaseTerminal() const;

constexpr ::UnityW<::GlobalNamespace::SIPurchaseTerminal>& __cordl_internal_get_purchaseTerminal() ;

constexpr ::UnityW<::GlobalNamespace::SIQuestBoard> const& __cordl_internal_get_questBoard() const;

constexpr ::UnityW<::GlobalNamespace::SIQuestBoard>& __cordl_internal_get_questBoard() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_resourceNodeParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_resourceNodeParent() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>> const& __cordl_internal_get_resourceRegions() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>& __cordl_internal_get_resourceRegions() ;

constexpr float_t const& __cordl_internal_get_resourceResetHeight() const;

constexpr float_t& __cordl_internal_get_resourceResetHeight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_resourceResetLoc() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_resourceResetLoc() ;

constexpr bool const& __cordl_internal_get_retryCreatePerRoundResources() const;

constexpr bool& __cordl_internal_get_retryCreatePerRoundResources() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIResourceDeposit>> const& __cordl_internal_get_siDeposits() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIResourceDeposit>>& __cordl_internal_get_siDeposits() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager> const& __cordl_internal_get_siManager() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager>& __cordl_internal_get_siManager() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SICombinedTerminal>> const& __cordl_internal_get_siTerminals() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SICombinedTerminal>>& __cordl_internal_get_siTerminals() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO> const& __cordl_internal_get_techTreeSO() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeSO>& __cordl_internal_get_techTreeSO() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_zoneObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_zoneObjects() ;

constexpr void __cordl_internal_set__lastResourceSpawnTime(float_t  value) ;

constexpr void __cordl_internal_set__nextResourceUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__resourcePrefabs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>*  value) ;

constexpr void __cordl_internal_set_activeGadgets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  value) ;

constexpr void __cordl_internal_set_authorityActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_authorityName(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_minRoomPopulation(int32_t  value) ;

constexpr void __cordl_internal_set_perPlayerHourlyResourceRate(int32_t  value) ;

constexpr void __cordl_internal_set_perRoundResourceNodeParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_perRoundResourceRegions(::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>  value) ;

constexpr void __cordl_internal_set_purchaseTerminal(::UnityW<::GlobalNamespace::SIPurchaseTerminal>  value) ;

constexpr void __cordl_internal_set_questBoard(::UnityW<::GlobalNamespace::SIQuestBoard>  value) ;

constexpr void __cordl_internal_set_resourceNodeParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_resourceRegions(::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>  value) ;

constexpr void __cordl_internal_set_resourceResetHeight(float_t  value) ;

constexpr void __cordl_internal_set_resourceResetLoc(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_retryCreatePerRoundResources(bool  value) ;

constexpr void __cordl_internal_set_siDeposits(::ArrayW<::UnityW<::GlobalNamespace::SIResourceDeposit>>  value) ;

constexpr void __cordl_internal_set_siManager(::UnityW<::GlobalNamespace::SuperInfectionManager>  value) ;

constexpr void __cordl_internal_set_siTerminals(::ArrayW<::UnityW<::GlobalNamespace::SICombinedTerminal>>  value) ;

constexpr void __cordl_internal_set_techTreeSO(::UnityW<::GlobalNamespace::SITechTreeSO>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_zoneObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5afbbc8, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsAuthorityAndActive, addr 0x5af8794, size 0xbc, virtual false, abstract: false, final false
inline bool get_IsAuthorityAndActive() ;

/// @brief Method get_ResourcePrefabs, addr 0x5afb8bc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>* get_ResourcePrefabs() ;

/// @brief Method get_ResourceSpawnInterval, addr 0x5af8850, size 0x70, virtual false, abstract: false, final false
inline float_t get_ResourceSpawnInterval() ;

/// @brief Method get_TimeSinceLastSpawn, addr 0x5af8990, size 0x20, virtual false, abstract: false, final false
inline float_t get_TimeSinceLastSpawn() ;

/// @brief Method get_TimeToNextSpawn, addr 0x5af89b0, size 0x94, virtual false, abstract: false, final false
inline float_t get_TimeToNextSpawn() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfection(SuperInfection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfection(SuperInfection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{384};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/SuperInfection]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/SuperInfection]  "};

/// @brief Field siTerminals, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SICombinedTerminal>>  ___siTerminals;

/// @brief Field siDeposits, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SIResourceDeposit>>  ___siDeposits;

/// @brief Field questBoard, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIQuestBoard>  ___questBoard;

/// @brief Field purchaseTerminal, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIPurchaseTerminal>  ___purchaseTerminal;

/// [Tooltip("Add miscellaneous zone objects here.  They\'ll be disabled when not in this mode.")]
/// @brief Field zoneObjects, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___zoneObjects;

/// @brief Field resourceNodeParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___resourceNodeParent;

/// @brief Field resourceRegions, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>  ___resourceRegions;

/// @brief Field perPlayerHourlyResourceRate, offset: 0x58, size: 0x4, def value: None
 int32_t  ___perPlayerHourlyResourceRate;

/// [Tooltip("Resource generation rate varies based on population.  We\'ll assume at least this many players are present.")]
/// @brief Field minRoomPopulation, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___minRoomPopulation;

/// @brief Field perRoundResourceNodeParent, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___perRoundResourceNodeParent;

/// @brief Field perRoundResourceRegions, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SIResourceRegion>>  ___perRoundResourceRegions;

/// @brief Field siManager, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionManager>  ___siManager;

/// @brief Field resourceResetLoc, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___resourceResetLoc;

/// @brief Field resourceResetHeight, offset: 0x80, size: 0x4, def value: None
 float_t  ___resourceResetHeight;

/// @brief Field activeGadgets, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  ___activeGadgets;

/// @brief Field zone, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field techTreeSO, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeSO>  ___techTreeSO;

/// @brief Field retryCreatePerRoundResources, offset: 0xa0, size: 0x1, def value: None
 bool  ___retryCreatePerRoundResources;

/// @brief Field _nextResourceUpdateTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ____nextResourceUpdateTime;

/// @brief Field _lastResourceSpawnTime, offset: 0xa8, size: 0x4, def value: None
 float_t  ____lastResourceSpawnTime;

/// @brief Field authorityActorNumber, offset: 0xac, size: 0x4, def value: None
 int32_t  ___authorityActorNumber;

/// @brief Field authorityName, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___authorityName;

/// @brief Field _resourcePrefabs, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIResource>>*  ____resourcePrefabs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfection, ___siTerminals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___siDeposits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___questBoard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___purchaseTerminal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___zoneObjects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___resourceNodeParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___resourceRegions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___perPlayerHourlyResourceRate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___minRoomPopulation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___perRoundResourceNodeParent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___perRoundResourceRegions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___siManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___resourceResetLoc) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___resourceResetHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___activeGadgets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___zone) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___techTreeSO) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___retryCreatePerRoundResources) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ____nextResourceUpdateTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ____lastResourceSpawnTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___authorityActorNumber) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ___authorityName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfection, ____resourcePrefabs) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfection) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
