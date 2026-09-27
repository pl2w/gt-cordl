#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CuratedDestinationsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CuratedDestinationsManager)
namespace GlobalNamespace {
struct CuratedDestinationsManager_CuratedDoorway;
}
namespace GlobalNamespace {
struct CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CuratedDestinationsManager___c;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CuratedDestinationsManager;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CuratedDestinationsManager___c;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager*, "GorillaTagScripts.VirtualStumpCustomMaps", "CuratedDestinationsManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*, "GorillaTagScripts.VirtualStumpCustomMaps", "CuratedDestinationsManager/<>c");
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CuratedDestinationsManager
class CORDL_TYPE CuratedDestinationsManager : public ::System::Object {
public:
// Declarations
using CuratedDoorway = ::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway;

using _OnGetCuratedMapsTitleData_d__12 = ::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12;

using __c = ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c;

/// @brief Field OnCuratedMapsUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCuratedMapsUpdated, put=setStaticF_OnCuratedMapsUpdated)) ::UnityEngine::Events::UnityEvent*  OnCuratedMapsUpdated;

/// @brief Field curatedMapsRetrieved, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_curatedMapsRetrieved, put=setStaticF_curatedMapsRetrieved)) bool  curatedMapsRetrieved;

/// @brief Field curatedModIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_curatedModIds, put=setStaticF_curatedModIds)) ::System::Collections::Generic::List_1<int64_t>*  curatedModIds;

/// @brief Field curatedMods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_curatedMods, put=setStaticF_curatedMods)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  curatedMods;

/// @brief Field loadingCuratedMaps, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loadingCuratedMaps, put=setStaticF_loadingCuratedMaps)) bool  loadingCuratedMaps;

/// @brief Method AddEmptySlot, addr 0x5bdd850, size 0x148, virtual false, abstract: false, final false
static inline void AddEmptySlot() ;

/// @brief Method FinishRetrieval, addr 0x5bdd998, size 0x154, virtual false, abstract: false, final false
static inline void FinishRetrieval(bool  succeeded) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CuratedDestinationsManager::<OnGetCuratedMapsTitleData>d__12))]
/// @brief Method OnGetCuratedMapsTitleData, addr 0x5bdd7a4, size 0xac, virtual false, abstract: false, final false
static inline void OnGetCuratedMapsTitleData(::StringW  data) ;

/// @brief Method RetrieveCuratedMaps, addr 0x5bdd650, size 0x154, virtual false, abstract: false, final false
static inline void RetrieveCuratedMaps(bool  forceRefresh) ;

/// @brief Method TryGetCuratedMod, addr 0x5bddcd4, size 0x128, virtual false, abstract: false, final false
static inline bool TryGetCuratedMod(int32_t  doorwayIndex, ::by_ref<::Modio::Mods::Mod*>  mod) ;

/// @brief Method TryGetCuratedMod, addr 0x5bddc70, size 0x64, virtual false, abstract: false, final false
static inline void TryGetCuratedMod(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  doorway, ::by_ref<::Modio::Mods::Mod*>  mod) ;

/// @brief Method TryGetCuratedModId, addr 0x5bddaec, size 0x64, virtual false, abstract: false, final false
static inline bool TryGetCuratedModId(::GlobalNamespace::CuratedDestinationsManager_CuratedDoorway  doorway, ::by_ref<::Modio::Mods::ModId>  modId) ;

/// @brief Method TryGetCuratedModId, addr 0x5bddb50, size 0x120, virtual false, abstract: false, final false
static inline bool TryGetCuratedModId(int32_t  doorwayIndex, ::by_ref<::Modio::Mods::ModId>  modId) ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnCuratedMapsUpdated() ;

static inline bool getStaticF_curatedMapsRetrieved() ;

static inline ::System::Collections::Generic::List_1<int64_t>* getStaticF_curatedModIds() ;

static inline ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* getStaticF_curatedMods() ;

static inline bool getStaticF_loadingCuratedMaps() ;

/// @brief Method get_HasRetrievedCuratedMaps, addr 0x5bdd5f8, size 0x58, virtual false, abstract: false, final false
static inline bool get_HasRetrievedCuratedMaps() ;

/// @brief Method get_IsLoading, addr 0x5bdd5a0, size 0x58, virtual false, abstract: false, final false
static inline bool get_IsLoading() ;

static inline void setStaticF_OnCuratedMapsUpdated(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_curatedMapsRetrieved(bool  value) ;

static inline void setStaticF_curatedModIds(::System::Collections::Generic::List_1<int64_t>*  value) ;

static inline void setStaticF_curatedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

static inline void setStaticF_loadingCuratedMaps(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CuratedDestinationsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CuratedDestinationsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CuratedDestinationsManager(CuratedDestinationsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuratedDestinationsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuratedDestinationsManager(CuratedDestinationsManager const& ) = delete;

/// @brief Field CURATED_MAPS_PLAYFAB_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CURATED_MAPS_PLAYFAB_KEY{u"DestinationsCurated"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CuratedDestinationsManager/<>c
class CORDL_TYPE CuratedDestinationsManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__11_1;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c* New_ctor() ;

/// @brief Method <RetrieveCuratedMaps>b__11_0, addr 0x5bddf98, size 0x15c, virtual false, abstract: false, final false
inline void _RetrieveCuratedMaps_b__11_0(::GorillaNetworking::PlayFabTitleDataCache*  cache) ;

/// @brief Method <RetrieveCuratedMaps>b__11_1, addr 0x5bde0f4, size 0xd8, virtual false, abstract: false, final false
inline void _RetrieveCuratedMaps_b__11_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5bddf90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>* getStaticF___9__11_0() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__11_1() ;

static inline void setStaticF___9(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c*  value) ;

static inline void setStaticF___9__11_0(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  value) ;

static inline void setStaticF___9__11_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CuratedDestinationsManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CuratedDestinationsManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CuratedDestinationsManager___c(CuratedDestinationsManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuratedDestinationsManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuratedDestinationsManager___c(CuratedDestinationsManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CuratedDestinationsManager___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
