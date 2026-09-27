#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropHuntPools_EState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropHuntPools)
namespace GlobalNamespace {
class PropHuntGrabbableProp;
}
namespace GlobalNamespace {
struct PropHuntPools_EState;
}
namespace GlobalNamespace {
class PropHuntPools___c;
}
namespace GlobalNamespace {
class PropHuntPools___c__DisplayClass53_0;
}
namespace GlobalNamespace {
class PropHuntTaggableProp;
}
namespace GlobalNamespace {
class PropPlacementRB;
}
namespace GorillaTag::CosmeticSystem {
class AllCosmeticsArraySO;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntPools;
}
namespace GlobalNamespace {
class PropHuntPools___c;
}
namespace GlobalNamespace {
class PropHuntPools___c__DisplayClass53_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntPools*);
MARK_REF_T(::GlobalNamespace::PropHuntPools___c*);
MARK_REF_T(::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntPools*, "", "PropHuntPools");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntPools___c*, "", "PropHuntPools/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*, "", "PropHuntPools/<>c__DisplayClass53_0");
// Dependencies PropHuntPools::EState, System.Object, UnityEngine.Component
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntPools
class CORDL_TYPE PropHuntPools : public ::System::Object {
public:
// Declarations
using EState = ::GlobalNamespace::PropHuntPools_EState;

using __c = ::GlobalNamespace::PropHuntPools___c;

using __c__DisplayClass53_0 = ::GlobalNamespace::PropHuntPools___c__DisplayClass53_0;

/// @brief Field OnReady, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnReady, put=setStaticF_OnReady)) ::System::Action*  OnReady;

/// @brief Field _activeDecoy_to_cosmeticId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeDecoy_to_cosmeticId, put=setStaticF__activeDecoy_to_cosmeticId)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>*  _activeDecoy_to_cosmeticId;

/// @brief Field _activeGrabbable_to_cosmeticId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeGrabbable_to_cosmeticId, put=setStaticF__activeGrabbable_to_cosmeticId)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>*  _activeGrabbable_to_cosmeticId;

/// @brief Field _activeTaggable_to_cosmeticId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeTaggable_to_cosmeticId, put=setStaticF__activeTaggable_to_cosmeticId)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>*  _activeTaggable_to_cosmeticId;

/// @brief Field _allCosmeticsArraySO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allCosmeticsArraySO, put=setStaticF__allCosmeticsArraySO)) ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  _allCosmeticsArraySO;

/// @brief Field _allPropCosmeticIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allPropCosmeticIds, put=setStaticF__allPropCosmeticIds)) ::ArrayW<::StringW>  _allPropCosmeticIds;

/// @brief Field _cosmeticId_to_decoyInitialCount, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_decoyInitialCount, put=setStaticF__cosmeticId_to_decoyInitialCount)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _cosmeticId_to_decoyInitialCount;

/// @brief Field _cosmeticId_to_decoyTemplate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_decoyTemplate, put=setStaticF__cosmeticId_to_decoyTemplate)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>*  _cosmeticId_to_decoyTemplate;

/// @brief Field _cosmeticId_to_grabbableTemplate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_grabbableTemplate, put=setStaticF__cosmeticId_to_grabbableTemplate)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*  _cosmeticId_to_grabbableTemplate;

/// @brief Field _cosmeticId_to_inactiveDecoys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_inactiveDecoys, put=setStaticF__cosmeticId_to_inactiveDecoys)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>*  _cosmeticId_to_inactiveDecoys;

/// @brief Field _cosmeticId_to_inactiveGrabbables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_inactiveGrabbables, put=setStaticF__cosmeticId_to_inactiveGrabbables)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>*  _cosmeticId_to_inactiveGrabbables;

/// @brief Field _cosmeticId_to_inactiveTaggables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_inactiveTaggables, put=setStaticF__cosmeticId_to_inactiveTaggables)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>*  _cosmeticId_to_inactiveTaggables;

/// @brief Field _cosmeticId_to_taggableTemplate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cosmeticId_to_taggableTemplate, put=setStaticF__cosmeticId_to_taggableTemplate)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*  _cosmeticId_to_taggableTemplate;

/// @brief Field _debug_decoyMaxCountPerProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__debug_decoyMaxCountPerProp, put=setStaticF__debug_decoyMaxCountPerProp)) int32_t  _debug_decoyMaxCountPerProp;

/// @brief Field _decoyInactivePropsParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__decoyInactivePropsParent, put=setStaticF__decoyInactivePropsParent)) ::UnityW<::UnityEngine::Transform>  _decoyInactivePropsParent;

/// @brief Field _decoyTemplatesParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__decoyTemplatesParent, put=setStaticF__decoyTemplatesParent)) ::UnityW<::UnityEngine::Transform>  _decoyTemplatesParent;

/// @brief Field _fallbackPrefabInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__fallbackPrefabInstance, put=setStaticF__fallbackPrefabInstance)) ::UnityW<::UnityEngine::GameObject>  _fallbackPrefabInstance;

/// @brief Field _fallbackProp_cosmeticSO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__fallbackProp_cosmeticSO, put=setStaticF__fallbackProp_cosmeticSO)) ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  _fallbackProp_cosmeticSO;

/// @brief Field _g_ph_titleDataSeparators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_ph_titleDataSeparators, put=setStaticF__g_ph_titleDataSeparators)) ::ArrayW<::StringW>  _g_ph_titleDataSeparators;

/// @brief Field _grabbableInactivePropsParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__grabbableInactivePropsParent, put=setStaticF__grabbableInactivePropsParent)) ::UnityW<::UnityEngine::Transform>  _grabbableInactivePropsParent;

/// @brief Field _grabbableTemplatesParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__grabbableTemplatesParent, put=setStaticF__grabbableTemplatesParent)) ::UnityW<::UnityEngine::Transform>  _grabbableTemplatesParent;

/// @brief Field _propCosmeticIdsWaitingToLoad, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__propCosmeticIdsWaitingToLoad, put=setStaticF__propCosmeticIdsWaitingToLoad)) ::System::Collections::Generic::HashSet_1<::StringW>*  _propCosmeticIdsWaitingToLoad;

/// @brief Field _propCosmeticIds_uniqueArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__propCosmeticIds_uniqueArray, put=setStaticF__propCosmeticIds_uniqueArray)) ::ArrayW<::StringW>  _propCosmeticIds_uniqueArray;

/// @brief Field _state, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__state, put=setStaticF__state)) ::GlobalNamespace::PropHuntPools_EState  _state;

/// @brief Field _state_hasLocalPlayerVisitedBayou, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__state_hasLocalPlayerVisitedBayou, put=setStaticF__state_hasLocalPlayerVisitedBayou)) bool  _state_hasLocalPlayerVisitedBayou;

/// @brief Field _state_isTitleDataLoaded, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__state_isTitleDataLoaded, put=setStaticF__state_isTitleDataLoaded)) bool  _state_isTitleDataLoaded;

/// @brief Field _taggableInactivePropsParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__taggableInactivePropsParent, put=setStaticF__taggableInactivePropsParent)) ::UnityW<::UnityEngine::Transform>  _taggableInactivePropsParent;

/// @brief Field _taggableTemplatesParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__taggableTemplatesParent, put=setStaticF__taggableTemplatesParent)) ::UnityW<::UnityEngine::Transform>  _taggableTemplatesParent;

/// @brief Field _temp_meshFilters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__temp_meshFilters, put=setStaticF__temp_meshFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  _temp_meshFilters;

/// @brief Field propCosmeticId_to_cosmeticSO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_propCosmeticId_to_cosmeticSO, put=setStaticF_propCosmeticId_to_cosmeticSO)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>*  propCosmeticId_to_cosmeticSO;

/// @brief Method OnLocalPlayerEnteredBayou, addr 0x563c8a4, size 0x98, virtual false, abstract: false, final false
static inline void OnLocalPlayerEnteredBayou() ;

/// @brief Method ReturnDecoyProp, addr 0x563da50, size 0x220, virtual false, abstract: false, final false
static inline void ReturnDecoyProp(::GlobalNamespace::PropPlacementRB*  prop) ;

/// @brief Method ReturnGrabbableProp, addr 0x563de90, size 0x1d0, virtual false, abstract: false, final false
static inline void ReturnGrabbableProp(::GlobalNamespace::PropHuntGrabbableProp*  prop) ;

/// @brief Method ReturnTaggableProp, addr 0x563dc70, size 0x220, virtual false, abstract: false, final false
static inline void ReturnTaggableProp(::GlobalNamespace::PropHuntTaggableProp*  prop) ;

/// @brief Method StartCreatingPools, addr 0x563c304, size 0x5a0, virtual false, abstract: false, final false
static inline void StartCreatingPools() ;

/// @brief Method StartInitializingPropsList, addr 0x563a308, size 0x3f0, virtual false, abstract: false, final false
static inline void StartInitializingPropsList(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*  allCosmeticsArraySO, ::GorillaTag::CosmeticSystem::CosmeticSO*  fallbackCosmeticSO) ;

/// @brief Method TryGetDecoyProp, addr 0x563d050, size 0x38c, virtual false, abstract: false, final false
static inline bool TryGetDecoyProp(::StringW  cosmeticId, ::by_ref<::GlobalNamespace::PropPlacementRB*>  out_prop) ;

/// @brief Method TryGetGrabbableProp, addr 0x563d760, size 0x2f0, virtual false, abstract: false, final false
static inline bool TryGetGrabbableProp(::StringW  cosmeticId, ::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>  out_prop) ;

/// @brief Method TryGetTaggableProp, addr 0x563d3dc, size 0x384, virtual false, abstract: false, final false
static inline bool TryGetTaggableProp(::StringW  cosmeticId, ::by_ref<::GlobalNamespace::PropHuntTaggableProp*>  out_prop) ;

/// @brief Method _CreateInactivePropsParent, addr 0x563a6f8, size 0x198, virtual false, abstract: false, final false
static inline void _CreateInactivePropsParent(::by_ref<::UnityEngine::Transform*>  _inactivePropsParent, ::StringW  name) ;

/// @brief Method _HandleOnPropTemplateLoaded, addr 0x563af98, size 0x136c, virtual false, abstract: false, final false
static inline void _HandleOnPropTemplateLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle, ::StringW  cosmeticId, ::GorillaTag::CosmeticSystem::CosmeticSO*  cosmeticSO) ;

/// @brief Method _HandleOnTitleDataPropsListLoaded, addr 0x563a948, size 0x650, virtual false, abstract: false, final false
static inline void _HandleOnTitleDataPropsListLoaded(::StringW  titleDataPropsString) ;

/// @brief Method _ResetPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void _ResetPool(::System::Collections::Generic::Dictionary_2<::StringW,T>*  cosmeticId_to_propTemplate, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<T>*>*  cosmeticId_to_inactiveProps, ::System::Collections::Generic::Dictionary_2<T,::StringW>*  activeProp_to_cosmeticId) ;

static inline ::System::Action* getStaticF_OnReady() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>* getStaticF__activeDecoy_to_cosmeticId() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>* getStaticF__activeGrabbable_to_cosmeticId() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>* getStaticF__activeTaggable_to_cosmeticId() ;

static inline ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> getStaticF__allCosmeticsArraySO() ;

static inline ::ArrayW<::StringW> getStaticF__allPropCosmeticIds() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF__cosmeticId_to_decoyInitialCount() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>* getStaticF__cosmeticId_to_decoyTemplate() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>* getStaticF__cosmeticId_to_grabbableTemplate() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>* getStaticF__cosmeticId_to_inactiveDecoys() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>* getStaticF__cosmeticId_to_inactiveGrabbables() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>* getStaticF__cosmeticId_to_inactiveTaggables() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>* getStaticF__cosmeticId_to_taggableTemplate() ;

static inline int32_t getStaticF__debug_decoyMaxCountPerProp() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__decoyInactivePropsParent() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__decoyTemplatesParent() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF__fallbackPrefabInstance() ;

static inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> getStaticF__fallbackProp_cosmeticSO() ;

static inline ::ArrayW<::StringW> getStaticF__g_ph_titleDataSeparators() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__grabbableInactivePropsParent() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__grabbableTemplatesParent() ;

static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF__propCosmeticIdsWaitingToLoad() ;

static inline ::ArrayW<::StringW> getStaticF__propCosmeticIds_uniqueArray() ;

static inline ::GlobalNamespace::PropHuntPools_EState getStaticF__state() ;

static inline bool getStaticF__state_hasLocalPlayerVisitedBayou() ;

static inline bool getStaticF__state_isTitleDataLoaded() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__taggableInactivePropsParent() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__taggableTemplatesParent() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* getStaticF__temp_meshFilters() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>* getStaticF_propCosmeticId_to_cosmeticSO() ;

/// @brief Method get_AllPropCosmeticIds, addr 0x563a2b0, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_AllPropCosmeticIds() ;

/// @brief Method get_IsReady, addr 0x563a220, size 0x90, virtual false, abstract: false, final false
static inline bool get_IsReady() ;

/// @brief Method get_State, addr 0x563a1c8, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PropHuntPools_EState get_State() ;

static inline void setStaticF_OnReady(::System::Action*  value) ;

static inline void setStaticF__activeDecoy_to_cosmeticId(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>*  value) ;

static inline void setStaticF__activeGrabbable_to_cosmeticId(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>*  value) ;

static inline void setStaticF__activeTaggable_to_cosmeticId(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>*  value) ;

static inline void setStaticF__allCosmeticsArraySO(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value) ;

static inline void setStaticF__allPropCosmeticIds(::ArrayW<::StringW>  value) ;

static inline void setStaticF__cosmeticId_to_decoyInitialCount(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF__cosmeticId_to_decoyTemplate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>*  value) ;

static inline void setStaticF__cosmeticId_to_grabbableTemplate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*  value) ;

static inline void setStaticF__cosmeticId_to_inactiveDecoys(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>*  value) ;

static inline void setStaticF__cosmeticId_to_inactiveGrabbables(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>*  value) ;

static inline void setStaticF__cosmeticId_to_inactiveTaggables(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>*  value) ;

static inline void setStaticF__cosmeticId_to_taggableTemplate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*  value) ;

static inline void setStaticF__debug_decoyMaxCountPerProp(int32_t  value) ;

static inline void setStaticF__decoyInactivePropsParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__decoyTemplatesParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__fallbackPrefabInstance(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF__fallbackProp_cosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value) ;

static inline void setStaticF__g_ph_titleDataSeparators(::ArrayW<::StringW>  value) ;

static inline void setStaticF__grabbableInactivePropsParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__grabbableTemplatesParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__propCosmeticIdsWaitingToLoad(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

static inline void setStaticF__propCosmeticIds_uniqueArray(::ArrayW<::StringW>  value) ;

static inline void setStaticF__state(::GlobalNamespace::PropHuntPools_EState  value) ;

static inline void setStaticF__state_hasLocalPlayerVisitedBayou(bool  value) ;

static inline void setStaticF__state_isTitleDataLoaded(bool  value) ;

static inline void setStaticF__taggableInactivePropsParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__taggableTemplatesParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__temp_meshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value) ;

static inline void setStaticF_propCosmeticId_to_cosmeticSO(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntPools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntPools(PropHuntPools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntPools(PropHuntPools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{639};

/// @brief Field _k__GT_PROP_HUNT__USE_POOLING__ offset 0xffffffff size 0x1
static constexpr bool  _k__GT_PROP_HUNT__USE_POOLING__{true};

/// @brief Field _k_decoyInitialCountPerPropLine offset 0xffffffff size 0x4
static constexpr int32_t  _k_decoyInitialCountPerPropLine{static_cast<int32_t>(0xa)};

/// @brief Field _k_initialCountPerFollower offset 0xffffffff size 0x4
static constexpr int32_t  _k_initialCountPerFollower{static_cast<int32_t>(0x1)};

/// @brief Field _k_initialCountPerTaggable offset 0xffffffff size 0x4
static constexpr int32_t  _k_initialCountPerTaggable{static_cast<int32_t>(0x2)};

/// @brief Field _k_titleDataKey offset 0xffffffff size 0x8
static constexpr ::ConstString  _k_titleDataKey{u"PropHuntProps"};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  PropHuntPools: "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"ERROR!!!  (beta only log) PropHuntPools: "};

/// @brief Field preErrEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrEd{u"ERROR!!!  (editor only log) PropHuntPools: "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"PropHuntPools: "};

/// @brief Field preLogBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogBeta{u"(beta only log) PropHuntPools: "};

/// @brief Field preLogEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogEd{u"(editor only log) PropHuntPools: "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PropHuntPools) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntPools/<>c__DisplayClass53_0
class CORDL_TYPE PropHuntPools___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field cosmeticId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticId, put=__cordl_internal_set_cosmeticId)) ::StringW  cosmeticId;

/// @brief Field cosmeticSO, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticSO, put=__cordl_internal_set_cosmeticSO)) ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  cosmeticSO;

static inline ::GlobalNamespace::PropHuntPools___c__DisplayClass53_0* New_ctor() ;

/// @brief Method <StartCreatingPools>b__0, addr 0x563e7c0, size 0x98, virtual false, abstract: false, final false
inline void _StartCreatingPools_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle) ;

constexpr ::StringW const& __cordl_internal_get_cosmeticId() const;

constexpr ::StringW& __cordl_internal_get_cosmeticId() ;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> const& __cordl_internal_get_cosmeticSO() const;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>& __cordl_internal_get_cosmeticSO() ;

constexpr void __cordl_internal_set_cosmeticId(::StringW  value) ;

constexpr void __cordl_internal_set_cosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value) ;

/// @brief Method .ctor, addr 0x563c93c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntPools___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools___c__DisplayClass53_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntPools___c__DisplayClass53_0(PropHuntPools___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools___c__DisplayClass53_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntPools___c__DisplayClass53_0(PropHuntPools___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{638};

/// @brief Field cosmeticId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___cosmeticId;

/// @brief Field cosmeticSO, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  ___cosmeticSO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntPools___c__DisplayClass53_0, ___cosmeticId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPools___c__DisplayClass53_0, ___cosmeticSO) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntPools___c__DisplayClass53_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntPools/<>c
class CORDL_TYPE PropHuntPools___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PropHuntPools___c*  __9;

/// @brief Field <>9__48_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__48_0, put=setStaticF___9__48_0)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__48_0;

/// @brief Field <>9__54_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__54_0, put=setStaticF___9__54_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*  __9__54_0;

static inline ::GlobalNamespace::PropHuntPools___c* New_ctor() ;

/// @brief Method <StartInitializingPropsList>b__48_0, addr 0x563e644, size 0xec, virtual false, abstract: false, final false
inline void _StartInitializingPropsList_b__48_0(::PlayFab::PlayFabError*  e) ;

/// @brief Method <_HandleOnPropTemplateLoaded>b__54_0, addr 0x563e730, size 0x90, virtual false, abstract: false, final false
inline int32_t __HandleOnPropTemplateLoaded_b__54_0(::UnityEngine::Transform*  a, ::UnityEngine::Transform*  b) ;

/// @brief Method .ctor, addr 0x563e63c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PropHuntPools___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__48_0() ;

static inline ::System::Comparison_1<::UnityW<::UnityEngine::Transform>>* getStaticF___9__54_0() ;

static inline void setStaticF___9(::GlobalNamespace::PropHuntPools___c*  value) ;

static inline void setStaticF___9__48_0(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__54_0(::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntPools___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntPools___c(PropHuntPools___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntPools___c(PropHuntPools___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{637};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PropHuntPools___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
