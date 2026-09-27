#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPools.hpp"
#include "GlobalNamespace/zzzz__PropHuntPools_EState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "GlobalNamespace/zzzz__PropHuntPools_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntGrabbableProp_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntPools_EState_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntPools_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntTaggableProp_def.hpp"
#include "GlobalNamespace/zzzz__PropPlacementRB_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__AllCosmeticsArraySO_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PropHuntPools_EState (*)()>(&::GlobalNamespace::PropHuntPools::get_State)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x563a1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PropHuntPools::get_IsReady)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x563a220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.get_AllPropCosmeticIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::GlobalNamespace::PropHuntPools::get_AllPropCosmeticIds)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x563a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"get_AllPropCosmeticIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.StartInitializingPropsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*, ::GorillaTag::CosmeticSystem::CosmeticSO*)>(&::GlobalNamespace::PropHuntPools::StartInitializingPropsList)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x563a308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"StartInitializingPropsList", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools._CreateInactivePropsParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Transform*>, ::StringW)>(&::GlobalNamespace::PropHuntPools::_CreateInactivePropsParent)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x563a6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"_CreateInactivePropsParent", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools._HandleOnTitleDataPropsListLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PropHuntPools::_HandleOnTitleDataPropsListLoaded)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x563a948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"_HandleOnTitleDataPropsListLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.OnLocalPlayerEnteredBayou
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PropHuntPools::OnLocalPlayerEnteredBayou)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x563c8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"OnLocalPlayerEnteredBayou", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.StartCreatingPools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PropHuntPools::StartCreatingPools)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x563c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"StartCreatingPools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools._HandleOnPropTemplateLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, ::StringW, ::GorillaTag::CosmeticSystem::CosmeticSO*)>(&::GlobalNamespace::PropHuntPools::_HandleOnPropTemplateLoaded)> {
  constexpr static std::size_t size = 0x136c;
  constexpr static std::size_t addrs = 0x563af98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"_HandleOnPropTemplateLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.TryGetDecoyProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::PropPlacementRB*>)>(&::GlobalNamespace::PropHuntPools::TryGetDecoyProp)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x563d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"TryGetDecoyProp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropPlacementRB*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.TryGetTaggableProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::PropHuntTaggableProp*>)>(&::GlobalNamespace::PropHuntPools::TryGetTaggableProp)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x563d3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"TryGetTaggableProp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntTaggableProp*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.TryGetGrabbableProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>)>(&::GlobalNamespace::PropHuntPools::TryGetGrabbableProp)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x563d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"TryGetGrabbableProp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.ReturnDecoyProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropPlacementRB*)>(&::GlobalNamespace::PropHuntPools::ReturnDecoyProp)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x563da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"ReturnDecoyProp", {}, {::i2c::type_of<::GlobalNamespace::PropPlacementRB*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.ReturnTaggableProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropHuntTaggableProp*)>(&::GlobalNamespace::PropHuntPools::ReturnTaggableProp)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x563dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"ReturnTaggableProp", {}, {::i2c::type_of<::GlobalNamespace::PropHuntTaggableProp*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools.ReturnGrabbableProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropHuntGrabbableProp*)>(&::GlobalNamespace::PropHuntPools::ReturnGrabbableProp)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x563de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"ReturnGrabbableProp", {}, {::i2c::type_of<::GlobalNamespace::PropHuntGrabbableProp*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropHuntPools::setStaticF__state(::GlobalNamespace::PropHuntPools_EState  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PropHuntPools_EState, "_state", ::GlobalNamespace::PropHuntPools*>(std::forward<::GlobalNamespace::PropHuntPools_EState>(value));
}
inline ::GlobalNamespace::PropHuntPools_EState GlobalNamespace::PropHuntPools::getStaticF__state()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PropHuntPools_EState, "_state", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__state_isTitleDataLoaded(bool  value)  {
::cordl_internals::setStaticField<bool, "_state_isTitleDataLoaded", ::GlobalNamespace::PropHuntPools*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::PropHuntPools::getStaticF__state_isTitleDataLoaded()  {
return ::cordl_internals::getStaticField<bool, "_state_isTitleDataLoaded", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__state_hasLocalPlayerVisitedBayou(bool  value)  {
::cordl_internals::setStaticField<bool, "_state_hasLocalPlayerVisitedBayou", ::GlobalNamespace::PropHuntPools*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::PropHuntPools::getStaticF__state_hasLocalPlayerVisitedBayou()  {
return ::cordl_internals::getStaticField<bool, "_state_hasLocalPlayerVisitedBayou", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF_OnReady(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnReady", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::PropHuntPools::getStaticF_OnReady()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnReady", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__allCosmeticsArraySO(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>, "_allCosmeticsArraySO", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>>(value));
}
inline ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> GlobalNamespace::PropHuntPools::getStaticF__allCosmeticsArraySO()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>, "_allCosmeticsArraySO", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__g_ph_titleDataSeparators(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_g_ph_titleDataSeparators", ::GlobalNamespace::PropHuntPools*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PropHuntPools::getStaticF__g_ph_titleDataSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_g_ph_titleDataSeparators", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__allPropCosmeticIds(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_allPropCosmeticIds", ::GlobalNamespace::PropHuntPools*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PropHuntPools::getStaticF__allPropCosmeticIds()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_allPropCosmeticIds", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__fallbackProp_cosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>, "_fallbackProp_cosmeticSO", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>(value));
}
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> GlobalNamespace::PropHuntPools::getStaticF__fallbackProp_cosmeticSO()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>, "_fallbackProp_cosmeticSO", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF_propCosmeticId_to_cosmeticSO(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>*, "propCosmeticId_to_cosmeticSO", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>* GlobalNamespace::PropHuntPools::getStaticF_propCosmeticId_to_cosmeticSO()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>*, "propCosmeticId_to_cosmeticSO", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__propCosmeticIdsWaitingToLoad(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "_propCosmeticIdsWaitingToLoad", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::PropHuntPools::getStaticF__propCosmeticIdsWaitingToLoad()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "_propCosmeticIdsWaitingToLoad", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__propCosmeticIds_uniqueArray(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_propCosmeticIds_uniqueArray", ::GlobalNamespace::PropHuntPools*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PropHuntPools::getStaticF__propCosmeticIds_uniqueArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_propCosmeticIds_uniqueArray", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__fallbackPrefabInstance(::UnityW<::UnityEngine::GameObject>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::GameObject>, "_fallbackPrefabInstance", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::GameObject>>(value));
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::PropHuntPools::getStaticF__fallbackPrefabInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GameObject>, "_fallbackPrefabInstance", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__decoyTemplatesParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_decoyTemplatesParent", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PropHuntPools::getStaticF__decoyTemplatesParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_decoyTemplatesParent", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__decoyInactivePropsParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_decoyInactivePropsParent", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PropHuntPools::getStaticF__decoyInactivePropsParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_decoyInactivePropsParent", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__debug_decoyMaxCountPerProp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_debug_decoyMaxCountPerProp", ::GlobalNamespace::PropHuntPools*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PropHuntPools::getStaticF__debug_decoyMaxCountPerProp()  {
return ::cordl_internals::getStaticField<int32_t, "_debug_decoyMaxCountPerProp", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_decoyInitialCount(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "_cosmeticId_to_decoyInitialCount", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_decoyInitialCount()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "_cosmeticId_to_decoyInitialCount", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_decoyTemplate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>*, "_cosmeticId_to_decoyTemplate", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_decoyTemplate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropPlacementRB>>*, "_cosmeticId_to_decoyTemplate", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_inactiveDecoys(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>*, "_cosmeticId_to_inactiveDecoys", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_inactiveDecoys()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*>*, "_cosmeticId_to_inactiveDecoys", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__activeDecoy_to_cosmeticId(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>*, "_activeDecoy_to_cosmeticId", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>* GlobalNamespace::PropHuntPools::getStaticF__activeDecoy_to_cosmeticId()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropPlacementRB>,::StringW>*, "_activeDecoy_to_cosmeticId", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__taggableTemplatesParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_taggableTemplatesParent", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PropHuntPools::getStaticF__taggableTemplatesParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_taggableTemplatesParent", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__taggableInactivePropsParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_taggableInactivePropsParent", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PropHuntPools::getStaticF__taggableInactivePropsParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_taggableInactivePropsParent", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_taggableTemplate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*, "_cosmeticId_to_taggableTemplate", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_taggableTemplate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*, "_cosmeticId_to_taggableTemplate", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_inactiveTaggables(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>*, "_cosmeticId_to_inactiveTaggables", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_inactiveTaggables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntTaggableProp>>*>*, "_cosmeticId_to_inactiveTaggables", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__activeTaggable_to_cosmeticId(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>*, "_activeTaggable_to_cosmeticId", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>* GlobalNamespace::PropHuntPools::getStaticF__activeTaggable_to_cosmeticId()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntTaggableProp>,::StringW>*, "_activeTaggable_to_cosmeticId", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__grabbableTemplatesParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_grabbableTemplatesParent", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PropHuntPools::getStaticF__grabbableTemplatesParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_grabbableTemplatesParent", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__grabbableInactivePropsParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_grabbableInactivePropsParent", ::GlobalNamespace::PropHuntPools*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PropHuntPools::getStaticF__grabbableInactivePropsParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_grabbableInactivePropsParent", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_grabbableTemplate(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*, "_cosmeticId_to_grabbableTemplate", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_grabbableTemplate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*, "_cosmeticId_to_grabbableTemplate", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__cosmeticId_to_inactiveGrabbables(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>*, "_cosmeticId_to_inactiveGrabbables", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>* GlobalNamespace::PropHuntPools::getStaticF__cosmeticId_to_inactiveGrabbables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>>*>*, "_cosmeticId_to_inactiveGrabbables", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__activeGrabbable_to_cosmeticId(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>*, "_activeGrabbable_to_cosmeticId", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>* GlobalNamespace::PropHuntPools::getStaticF__activeGrabbable_to_cosmeticId()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PropHuntGrabbableProp>,::StringW>*, "_activeGrabbable_to_cosmeticId", ::GlobalNamespace::PropHuntPools*>();
}
inline void GlobalNamespace::PropHuntPools::setStaticF__temp_meshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, "_temp_meshFilters", ::GlobalNamespace::PropHuntPools*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* GlobalNamespace::PropHuntPools::getStaticF__temp_meshFilters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, "_temp_meshFilters", ::GlobalNamespace::PropHuntPools*>();
}
inline ::GlobalNamespace::PropHuntPools_EState GlobalNamespace::PropHuntPools::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PropHuntPools_EState>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PropHuntPools::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::PropHuntPools::get_AllPropCosmeticIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"get_AllPropCosmeticIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropHuntPools::StartInitializingPropsList(::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*  allCosmeticsArraySO, ::GorillaTag::CosmeticSystem::CosmeticSO*  fallbackCosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"StartInitializingPropsList", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allCosmeticsArraySO, fallbackCosmeticSO);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GlobalNamespace::PropHuntPools::_ResetPool(::System::Collections::Generic::Dictionary_2<::StringW,T>*  cosmeticId_to_propTemplate, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<T>*>*  cosmeticId_to_inactiveProps, ::System::Collections::Generic::Dictionary_2<T,::StringW>*  activeProp_to_cosmeticId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                    {"_ResetPool", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,T>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<T>*>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<T,::StringW>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cosmeticId_to_propTemplate, cosmeticId_to_inactiveProps, activeProp_to_cosmeticId);
}
inline void GlobalNamespace::PropHuntPools::_CreateInactivePropsParent(::by_ref<::UnityEngine::Transform*>  _inactivePropsParent, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"_CreateInactivePropsParent", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _inactivePropsParent, name);
}
inline void GlobalNamespace::PropHuntPools::_HandleOnTitleDataPropsListLoaded(::StringW  titleDataPropsString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"_HandleOnTitleDataPropsListLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, titleDataPropsString);
}
inline void GlobalNamespace::PropHuntPools::OnLocalPlayerEnteredBayou()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"OnLocalPlayerEnteredBayou", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropHuntPools::StartCreatingPools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"StartCreatingPools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PropHuntPools::_HandleOnPropTemplateLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle, ::StringW  cosmeticId, ::GorillaTag::CosmeticSystem::CosmeticSO*  cosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"_HandleOnPropTemplateLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, cosmeticId, cosmeticSO);
}
inline bool GlobalNamespace::PropHuntPools::TryGetDecoyProp(::StringW  cosmeticId, ::by_ref<::GlobalNamespace::PropPlacementRB*>  out_prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"TryGetDecoyProp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropPlacementRB*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cosmeticId, out_prop);
}
inline bool GlobalNamespace::PropHuntPools::TryGetTaggableProp(::StringW  cosmeticId, ::by_ref<::GlobalNamespace::PropHuntTaggableProp*>  out_prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"TryGetTaggableProp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntTaggableProp*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cosmeticId, out_prop);
}
inline bool GlobalNamespace::PropHuntPools::TryGetGrabbableProp(::StringW  cosmeticId, ::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>  out_prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"TryGetGrabbableProp", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PropHuntGrabbableProp*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cosmeticId, out_prop);
}
inline void GlobalNamespace::PropHuntPools::ReturnDecoyProp(::GlobalNamespace::PropPlacementRB*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"ReturnDecoyProp", {}, {::i2c::type_of<::GlobalNamespace::PropPlacementRB*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop);
}
inline void GlobalNamespace::PropHuntPools::ReturnTaggableProp(::GlobalNamespace::PropHuntTaggableProp*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"ReturnTaggableProp", {}, {::i2c::type_of<::GlobalNamespace::PropHuntTaggableProp*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop);
}
inline void GlobalNamespace::PropHuntPools::ReturnGrabbableProp(::GlobalNamespace::PropHuntGrabbableProp*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools*>(),
                        {"ReturnGrabbableProp", {}, {::i2c::type_of<::GlobalNamespace::PropHuntGrabbableProp*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntPools::PropHuntPools()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools___c__DisplayClass53_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools___c__DisplayClass53_0::*)()>(&::GlobalNamespace::PropHuntPools___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools___c__DisplayClass53_0._StartCreatingPools_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools___c__DisplayClass53_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GlobalNamespace::PropHuntPools___c__DisplayClass53_0::_StartCreatingPools_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x563e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*>(),
                        {"<StartCreatingPools>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PropHuntPools___c__DisplayClass53_0::__cordl_internal_get_cosmeticId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticId;
}
constexpr ::StringW const& GlobalNamespace::PropHuntPools___c__DisplayClass53_0::__cordl_internal_get_cosmeticId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticId;
}
constexpr void GlobalNamespace::PropHuntPools___c__DisplayClass53_0::__cordl_internal_set_cosmeticId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticId = value;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>& GlobalNamespace::PropHuntPools___c__DisplayClass53_0::__cordl_internal_get_cosmeticSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticSO;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> const& GlobalNamespace::PropHuntPools___c__DisplayClass53_0::__cordl_internal_get_cosmeticSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticSO;
}
constexpr void GlobalNamespace::PropHuntPools___c__DisplayClass53_0::__cordl_internal_set_cosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticSO = value;
}
inline void GlobalNamespace::PropHuntPools___c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPools___c__DisplayClass53_0::_StartCreatingPools_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*>(),
                        {"<StartCreatingPools>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::GlobalNamespace::PropHuntPools___c__DisplayClass53_0* GlobalNamespace::PropHuntPools___c__DisplayClass53_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntPools___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntPools___c__DisplayClass53_0::PropHuntPools___c__DisplayClass53_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools___c::*)()>(&::GlobalNamespace::PropHuntPools___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563e63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools___c._StartInitializingPropsList_b__48_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHuntPools___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::PropHuntPools___c::_StartInitializingPropsList_b__48_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x563e644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c*>(),
                        {"<StartInitializingPropsList>b__48_0", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHuntPools___c.__HandleOnPropTemplateLoaded_b__54_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PropHuntPools___c::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::PropHuntPools___c::__HandleOnPropTemplateLoaded_b__54_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x563e730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c*>(),
                        {"<_HandleOnPropTemplateLoaded>b__54_0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PropHuntPools___c::setStaticF___9(::GlobalNamespace::PropHuntPools___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PropHuntPools___c*, "<>9", ::GlobalNamespace::PropHuntPools___c*>(std::forward<::GlobalNamespace::PropHuntPools___c*>(value));
}
inline ::GlobalNamespace::PropHuntPools___c* GlobalNamespace::PropHuntPools___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PropHuntPools___c*, "<>9", ::GlobalNamespace::PropHuntPools___c*>();
}
inline void GlobalNamespace::PropHuntPools___c::setStaticF___9__48_0(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__48_0", ::GlobalNamespace::PropHuntPools___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::PropHuntPools___c::getStaticF___9__48_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__48_0", ::GlobalNamespace::PropHuntPools___c*>();
}
inline void GlobalNamespace::PropHuntPools___c::setStaticF___9__54_0(::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*, "<>9__54_0", ::GlobalNamespace::PropHuntPools___c*>(std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Transform>>* GlobalNamespace::PropHuntPools___c::getStaticF___9__54_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*, "<>9__54_0", ::GlobalNamespace::PropHuntPools___c*>();
}
inline void GlobalNamespace::PropHuntPools___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHuntPools___c::_StartInitializingPropsList_b__48_0(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c*>(),
                        {"<StartInitializingPropsList>b__48_0", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline int32_t GlobalNamespace::PropHuntPools___c::__HandleOnPropTemplateLoaded_b__54_0(::UnityEngine::Transform*  a, ::UnityEngine::Transform*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHuntPools___c*>(),
                        {"<_HandleOnPropTemplateLoaded>b__54_0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::PropHuntPools___c* GlobalNamespace::PropHuntPools___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHuntPools___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntPools___c::PropHuntPools___c()   {
}
