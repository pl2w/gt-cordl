#pragma once
// IWYU pragma private; include "GorillaTagScripts/FlowersManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_impl.hpp"
#include "GorillaTagScripts/zzzz__FlowersDataStruct_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__FlowersManager_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GorillaTagScripts/zzzz__Flower_def.hpp"
#include "GorillaTagScripts/zzzz__FlowersDataStruct_def.hpp"
#include "GorillaTagScripts/zzzz__FlowersManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::FlowersManager> (*)()>(&::GorillaTagScripts::FlowersManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bb9db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::FlowersManager*)>(&::GorillaTagScripts::FlowersManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bb9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::FlowersManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::Awake)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5bb9e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::Start)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5bba370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::OnDestroy)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5bba5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.ProjectileHitReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collider*)>(&::GorillaTagScripts::FlowersManager::ProjectileHitReceiver)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bba884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"ProjectileHitReceiver", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.WaterFlowers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::FlowersManager::WaterFlowers)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5bba908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"WaterFlowers", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.HandleOnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::HandleOnZoneChanged)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5bbab18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"HandleOnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.GetHealthyFlowersInZoneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::FlowersManager::*)(::GlobalNamespace::GTZone)>(&::GorillaTagScripts::FlowersManager::GetHealthyFlowersInZoneCount)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5bbae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"GetHealthyFlowersInZoneCount", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FlowersManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5bbb0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::FlowersManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bbb264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::FlowersDataStruct (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::get_Data)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bbb428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)(::GorillaTagScripts::FlowersDataStruct)>(&::GorillaTagScripts::FlowersManager::set_Data)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bbb498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GorillaTagScripts::FlowersDataStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bbb508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5bbb790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bbbbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bbbc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)(bool)>(&::GorillaTagScripts::FlowersManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bbbda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager::*)()>(&::GorillaTagScripts::FlowersManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5bbbe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>*& GorillaTagScripts::FlowersManager::__cordl_internal_get_sections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sections;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>* const& GorillaTagScripts::FlowersManager::__cordl_internal_get_sections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sections;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_sections(::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sections = value;
}
constexpr int32_t& GorillaTagScripts::FlowersManager::__cordl_internal_get_flowersToCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowersToCheck;
}
constexpr int32_t const& GorillaTagScripts::FlowersManager::__cordl_internal_get_flowersToCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowersToCheck;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_flowersToCheck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowersToCheck = value;
}
constexpr int32_t& GorillaTagScripts::FlowersManager::__cordl_internal_get_flowerCheckIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerCheckIndex;
}
constexpr int32_t const& GorillaTagScripts::FlowersManager::__cordl_internal_get_flowerCheckIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerCheckIndex;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_flowerCheckIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerCheckIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*& GorillaTagScripts::FlowersManager::__cordl_internal_get_allFlowers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFlowers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>* const& GorillaTagScripts::FlowersManager::__cordl_internal_get_allFlowers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFlowers;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_allFlowers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allFlowers = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>>& GorillaTagScripts::FlowersManager::__cordl_internal_get_hitNotifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitNotifiers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>> const& GorillaTagScripts::FlowersManager::__cordl_internal_get_hitNotifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitNotifiers;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_hitNotifiers(::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitNotifiers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>*& GorillaTagScripts::FlowersManager::__cordl_internal_get_sectionToFlowersDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionToFlowersDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>* const& GorillaTagScripts::FlowersManager::__cordl_internal_get_sectionToFlowersDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionToFlowersDict;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_sectionToFlowersDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionToFlowersDict = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>*& GorillaTagScripts::FlowersManager::__cordl_internal_get_sectionToZonesDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionToZonesDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>* const& GorillaTagScripts::FlowersManager::__cordl_internal_get_sectionToZonesDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionToZonesDict;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_sectionToZonesDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionToZonesDict = value;
}
constexpr bool& GorillaTagScripts::FlowersManager::__cordl_internal_get_hasBeenSerialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenSerialized;
}
constexpr bool const& GorillaTagScripts::FlowersManager::__cordl_internal_get_hasBeenSerialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenSerialized;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set_hasBeenSerialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBeenSerialized = value;
}
constexpr ::GorillaTagScripts::FlowersDataStruct& GorillaTagScripts::FlowersManager::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GorillaTagScripts::FlowersDataStruct const& GorillaTagScripts::FlowersManager::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTagScripts::FlowersManager::__cordl_internal_set__Data(::GorillaTagScripts::FlowersDataStruct  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTagScripts::FlowersManager::setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::FlowersManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::FlowersManager>, "<Instance>k__BackingField", ::GorillaTagScripts::FlowersManager*>(std::forward<::UnityW<::GorillaTagScripts::FlowersManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::FlowersManager> GorillaTagScripts::FlowersManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::FlowersManager>, "<Instance>k__BackingField", ::GorillaTagScripts::FlowersManager*>();
}
inline ::UnityW<::GorillaTagScripts::FlowersManager> GorillaTagScripts::FlowersManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::FlowersManager>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::set_Instance(::GorillaTagScripts::FlowersManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::FlowersManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTagScripts::FlowersManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::ProjectileHitReceiver(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"ProjectileHitReceiver", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collider);
}
inline void GorillaTagScripts::FlowersManager::WaterFlowers(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"WaterFlowers", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GorillaTagScripts::FlowersManager::HandleOnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"HandleOnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::FlowersManager::GetHealthyFlowersInZoneCount(::GlobalNamespace::GTZone  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"GetHealthyFlowersInZoneCount", {}, {::i2c::type_of<::GlobalNamespace::GTZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zone);
}
inline void GorillaTagScripts::FlowersManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::FlowersManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::GorillaTagScripts::FlowersDataStruct GorillaTagScripts::FlowersManager::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::FlowersDataStruct>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::set_Data(::GorillaTagScripts::FlowersDataStruct  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GorillaTagScripts::FlowersDataStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::FlowersManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::FlowersManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::FlowersManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::FlowersManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::FlowersManager* GorillaTagScripts::FlowersManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::FlowersManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::FlowersManager::FlowersManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::FlowersManager_FlowersInZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersManager_FlowersInZone::*)()>(&::GorillaTagScripts::FlowersManager_FlowersInZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbe8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager_FlowersInZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GorillaTagScripts::FlowersManager_FlowersInZone::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaTagScripts::FlowersManager_FlowersInZone::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaTagScripts::FlowersManager_FlowersInZone::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::FlowersManager_FlowersInZone::__cordl_internal_get_sections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sections;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::FlowersManager_FlowersInZone::__cordl_internal_get_sections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sections;
}
constexpr void GorillaTagScripts::FlowersManager_FlowersInZone::__cordl_internal_set_sections(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sections = value;
}
inline void GorillaTagScripts::FlowersManager_FlowersInZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersManager_FlowersInZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::FlowersManager_FlowersInZone* GorillaTagScripts::FlowersManager_FlowersInZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::FlowersManager_FlowersInZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::FlowersManager_FlowersInZone::FlowersManager_FlowersInZone()   {
}
