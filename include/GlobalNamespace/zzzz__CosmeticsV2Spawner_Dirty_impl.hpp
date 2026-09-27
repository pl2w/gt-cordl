#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsV2Spawner_Dirty.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty_LoadOpInfo_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty_VRRigData_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty____Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun|44_0_d_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsV2Spawner_Dirty_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "GlobalNamespace/zzzz__SnowballMaker_def.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_def.hpp"
#include "GlobalNamespace/zzzz__StringEnum_1_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemRegistry_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPart_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.get_isPrepared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::get_isPrepared)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5666634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"get_isPrepared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.set_isPrepared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::set_isPrepared)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x566668c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"set_isPrepared", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty::*)(int32_t)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x56666ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.PrepareLoadOpInfos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::PrepareLoadOpInfos)> {
  constexpr static std::size_t size = 0xfac;
  constexpr static std::size_t addrs = 0x56675d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"PrepareLoadOpInfos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.AddEachAttachInfoToLoadOpInfosList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::CosmeticSystem::CosmeticPart, int32_t, ::GorillaTag::CosmeticSystem::CosmeticInfoV2, int32_t, ::by_ref<int32_t>)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::AddEachAttachInfoToLoadOpInfosList)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x5668998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"AddEachAttachInfoToLoadOpInfosList", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticPart>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.GetPlayfabIdFromThrowableIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, int32_t, ::by_ref<::StringW>)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::GetPlayfabIdFromThrowableIndex)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x566944c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"GetPlayfabIdFromThrowableIndex", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.GetThrowableIDFromMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, int32_t, ::by_ref<::StringW>)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::GetThrowableIDFromMaterialIndex)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5669580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"GetThrowableIDFromMaterialIndex", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.ProcessLoadOpInfos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::StringW, ::GorillaNetworking::CosmeticItemRegistry*)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::ProcessLoadOpInfos)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x56696b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"ProcessLoadOpInfos", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._ProcessLoadOpInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_ProcessLoadOpInfo)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x5669da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_ProcessLoadOpInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._Step3_HandleLoadOpCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_Step3_HandleLoadOpCompleted)> {
  constexpr static std::size_t size = 0x1300;
  constexpr static std::size_t addrs = 0x566a2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_Step3_HandleLoadOpCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._RetryDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_RetryDownload)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x5666800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_RetryDownload", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.AddPartToThrowableLists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, ::GlobalNamespace::SnowballThrowable*)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::AddPartToThrowableLists)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x566b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"AddPartToThrowableLists", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>(), ::i2c::type_of<::GlobalNamespace::SnowballThrowable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._Step4_PopulateAllArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_Step4_PopulateAllArrays)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x566913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_Step4_PopulateAllArrays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._Step5_InitializeVRRigsAndCosmeticsControllerFinalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_Step5_InitializeVRRigsAndCosmeticsControllerFinalize)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x5666e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_Step5_InitializeVRRigsAndCosmeticsControllerFinalize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.RigDataForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData (*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::RigDataForRig)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x566bc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"RigDataForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty::*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5668584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._ProcessLoadOpInfos_g__PostCompletionProcess_37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_ProcessLoadOpInfos_g__PostCompletionProcess_37_0)> {
  constexpr static std::size_t size = 0xf1c;
  constexpr static std::size_t addrs = 0x566c0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"<ProcessLoadOpInfos>g__PostCompletionProcess|37_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty._ProcessLoadOpInfos_g__ObjectToInitialize_37_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::_ProcessLoadOpInfos_g__ObjectToInitialize_37_1)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x566cfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"<ProcessLoadOpInfos>g__ObjectToInitialize|37_1", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty.__Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty::__Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x566bb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"<_Step5_InitializeVRRigsAndCosmeticsControllerFinalize>g__StartupRerun|44_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__instance(::GlobalNamespace::CosmeticsV2Spawner_Dirty*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CosmeticsV2Spawner_Dirty*, "_instance", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(value));
}
inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CosmeticsV2Spawner_Dirty*, "_instance", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_OnPostInstantiateAllPrefabs(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnPostInstantiateAllPrefabs", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_OnPostInstantiateAllPrefabs()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnPostInstantiateAllPrefabs", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__isPrepared_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<isPrepared>k__BackingField", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__isPrepared_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<isPrepared>k__BackingField", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gDeactivatedSpawnParent(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "_gDeactivatedSpawnParent", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gDeactivatedSpawnParent()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "_gDeactivatedSpawnParent", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__g_loadOpsCountCompleted(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_g_loadOpsCountCompleted", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__g_loadOpsCountCompleted()  {
return ::cordl_internals::getStaticField<int32_t, "_g_loadOpsCountCompleted", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__g_loadOpInfos(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*, "_g_loadOpInfos", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__g_loadOpInfos()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*, "_g_loadOpInfos", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__g_loadOpInfosForRigAndCosmeticIDDicts(::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*>, "_g_loadOpInfosForRigAndCosmeticIDDicts", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*> GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__g_loadOpInfosForRigAndCosmeticIDDicts()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*>, "_g_loadOpInfosForRigAndCosmeticIDDicts", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__g_loadOp_to_index(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>*, "_g_loadOp_to_index", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__g_loadOp_to_index()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>*, "_g_loadOp_to_index", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gSnowballMakerLeft(::UnityW<::GlobalNamespace::SnowballMaker>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "_gSnowballMakerLeft", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::UnityW<::GlobalNamespace::SnowballMaker>>(value));
}
inline ::UnityW<::GlobalNamespace::SnowballMaker> GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gSnowballMakerLeft()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "_gSnowballMakerLeft", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gSnowballMakerLeft_throwables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*, "_gSnowballMakerLeft_throwables", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gSnowballMakerLeft_throwables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*, "_gSnowballMakerLeft_throwables", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gSnowballMakerRight(::UnityW<::GlobalNamespace::SnowballMaker>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "_gSnowballMakerRight", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::UnityW<::GlobalNamespace::SnowballMaker>>(value));
}
inline ::UnityW<::GlobalNamespace::SnowballMaker> GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gSnowballMakerRight()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "_gSnowballMakerRight", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gSnowballMakerRight_throwables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*, "_gSnowballMakerRight_throwables", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gSnowballMakerRight_throwables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*, "_gSnowballMakerRight_throwables", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_g_gorillaPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaLocomotion::GTPlayer>, "g_gorillaPlayer", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::UnityW<::GorillaLocomotion::GTPlayer>>(value));
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_g_gorillaPlayer()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaLocomotion::GTPlayer>, "g_gorillaPlayer", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_k_stopwatch(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::Stopwatch*, "k_stopwatch", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Diagnostics::Stopwatch*>(value));
}
inline ::System::Diagnostics::Stopwatch* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_k_stopwatch()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::Stopwatch*, "k_stopwatch", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gVRRigDatas(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*, "_gVRRigDatas", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gVRRigDatas()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*, "_gVRRigDatas", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF__gVRRigDatasIndexByRig(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>*, "_gVRRigDatasIndexByRig", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF__gVRRigDatasIndexByRig()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>*, "_gVRRigDatasIndexByRig", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_materialIndexToSnowballThrowablePlayfabIdStringLeft(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "materialIndexToSnowballThrowablePlayfabIdStringLeft", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_materialIndexToSnowballThrowablePlayfabIdStringLeft()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "materialIndexToSnowballThrowablePlayfabIdStringLeft", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_materialIndexToSnowballThrowablePlayfabIdStringRight(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "materialIndexToSnowballThrowablePlayfabIdStringRight", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_materialIndexToSnowballThrowablePlayfabIdStringRight()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "materialIndexToSnowballThrowablePlayfabIdStringRight", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_throwableIndexPlayfabIdStringRight(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "throwableIndexPlayfabIdStringRight", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_throwableIndexPlayfabIdStringRight()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "throwableIndexPlayfabIdStringRight", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_throwableIndexPlayfabIdStringLeft(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "throwableIndexPlayfabIdStringLeft", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_throwableIndexPlayfabIdStringLeft()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "throwableIndexPlayfabIdStringLeft", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_processedIdsByRig(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>*, "processedIdsByRig", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_processedIdsByRig()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>*, "processedIdsByRig", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_currentGOBatchByRegistry(::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*, "currentGOBatchByRegistry", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_currentGOBatchByRegistry()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*, "currentGOBatchByRegistry", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_sides(::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>*, "sides", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_sides()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>*, "sides", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::setStaticF_overrides(::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>*, "overrides", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(std::forward<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>* GlobalNamespace::CosmeticsV2Spawner_Dirty::getStaticF_overrides()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>*, "overrides", ::GlobalNamespace::CosmeticsV2Spawner_Dirty*>();
}
inline bool GlobalNamespace::CosmeticsV2Spawner_Dirty::get_isPrepared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"get_isPrepared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::set_isPrepared(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"set_isPrepared", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::IDelayedExecListener_OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::PrepareLoadOpInfos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"PrepareLoadOpInfos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::AddEachAttachInfoToLoadOpInfosList(::GorillaTag::CosmeticSystem::CosmeticPart  part, int32_t  partIndex, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfo, int32_t  vrRigIndex, ::by_ref<int32_t>  partCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"AddEachAttachInfoToLoadOpInfosList", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticPart>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, part, partIndex, cosmeticInfo, vrRigIndex, partCount);
}
inline bool GlobalNamespace::CosmeticsV2Spawner_Dirty::GetPlayfabIdFromThrowableIndex(bool  isLeft, int32_t  throwableIndex, ::by_ref<::StringW>  playfabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"GetPlayfabIdFromThrowableIndex", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, isLeft, throwableIndex, playfabId);
}
inline bool GlobalNamespace::CosmeticsV2Spawner_Dirty::GetThrowableIDFromMaterialIndex(bool  isLeft, int32_t  matIndex, ::by_ref<::StringW>  throwableId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"GetThrowableIDFromMaterialIndex", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, isLeft, matIndex, throwableId);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::ProcessLoadOpInfos(::GlobalNamespace::VRRig*  rig, ::StringW  playfabId, ::GorillaNetworking::CosmeticItemRegistry*  registry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"ProcessLoadOpInfos", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::CosmeticItemRegistry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, playfabId, registry);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_ProcessLoadOpInfo(int32_t  currentIndex, ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo  loadOpInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_ProcessLoadOpInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentIndex, loadOpInfo);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_Step3_HandleLoadOpCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_Step3_HandleLoadOpCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadOp);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_RetryDownload(int32_t  loadOpIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_RetryDownload", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadOpIndex);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::AddPartToThrowableLists(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo  loadOpInfo, ::GlobalNamespace::SnowballThrowable*  throwable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"AddPartToThrowableLists", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>(), ::i2c::type_of<::GlobalNamespace::SnowballThrowable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, loadOpInfo, throwable);
}
template<typename T>
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::ResizeAndSetAtIndex(::System::Collections::Generic::List_1<T>*  list, T  item, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                    {"ResizeAndSetAtIndex", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, item, index);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_Step4_PopulateAllArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_Step4_PopulateAllArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_Step5_InitializeVRRigsAndCosmeticsControllerFinalize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"_Step5_InitializeVRRigsAndCosmeticsControllerFinalize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData GlobalNamespace::CosmeticsV2Spawner_Dirty::RigDataForRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"RigDataForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>(nullptr, ___internal_method, rig);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::_ProcessLoadOpInfos_g__PostCompletionProcess_37_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"<ProcessLoadOpInfos>g__PostCompletionProcess|37_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CosmeticsV2Spawner_Dirty::_ProcessLoadOpInfos_g__ObjectToInitialize_37_1(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo  loadOpInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"<ProcessLoadOpInfos>g__ObjectToInitialize|37_1", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, loadOpInfo);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty::__Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>(),
                        {"<_Step5_InitializeVRRigsAndCosmeticsControllerFinalize>g__StartupRerun|44_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty* GlobalNamespace::CosmeticsV2Spawner_Dirty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticsV2Spawner_Dirty*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::CosmeticsV2Spawner_Dirty::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::CosmeticsV2Spawner_Dirty::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty::CosmeticsV2Spawner_Dirty()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5669da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1._ProcessLoadOpInfos_g__AddToRegistryWhenCompleted_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::_ProcessLoadOpInfos_g__AddToRegistryWhenCompleted_2)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x566d464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*>(),
                        {"<ProcessLoadOpInfos>g__AddToRegistryWhenCompleted|2", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*& GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0* const& GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::_ProcessLoadOpInfos_g__AddToRegistryWhenCompleted_2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*>(),
                        {"<ProcessLoadOpInfos>g__AddToRegistryWhenCompleted|2", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOp);
}
inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1* GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::*)()>(&::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5669d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaNetworking::CosmeticItemRegistry*& GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::__cordl_internal_get_registry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr ::GorillaNetworking::CosmeticItemRegistry* const& GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::__cordl_internal_get_registry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr void GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::__cordl_internal_set_registry(::GorillaNetworking::CosmeticItemRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registry = value;
}
inline void GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0* GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0()   {
}
