#pragma once
// IWYU pragma private; include "GlobalNamespace/FlockingManager.hpp"
#include "GlobalNamespace/zzzz__FlockingData_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BoxCollider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FlockingManager_def.hpp"
#include "GlobalNamespace/zzzz__FlockingData_def.hpp"
#include "GlobalNamespace/zzzz__FlockingManager_def.hpp"
#include "GlobalNamespace/zzzz__Flocking_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::Awake)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5808ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5809124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::OnDestroy)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x58091a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::Update)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5809530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.GetRandomPointInsideCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FlockingManager::*)(::GlobalNamespace::FlockingManager_FishArea*)>(&::GlobalNamespace::FlockingManager::GetRandomPointInsideCollider)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5807bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"GetRandomPointInsideCollider", {}, {::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.IsInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FlockingManager::*)(::UnityEngine::Vector3, ::GlobalNamespace::FlockingManager_FishArea*)>(&::GlobalNamespace::FlockingManager::IsInside)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58076dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"IsInside", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.RestrictPointToArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FlockingManager::*)(::UnityEngine::Vector3, ::GlobalNamespace::FlockingManager_FishArea*)>(&::GlobalNamespace::FlockingManager::RestrictPointToArea)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5807fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"RestrictPointToArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.ProjectileHitReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collider*)>(&::GlobalNamespace::FlockingManager::ProjectileHitReceiver)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5809844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"ProjectileHitReceiver", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.ProjectileHitExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collider*)>(&::GlobalNamespace::FlockingManager::ProjectileHitExit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58099a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"ProjectileHitExit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FlockingData (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5809a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)(::GlobalNamespace::FlockingData)>(&::GlobalNamespace::FlockingManager::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5809aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::FlockingData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5809b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5809d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FlockingManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580a12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FlockingManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.RegisterAvoidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FlockingManager::RegisterAvoidPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x580a134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"RegisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.UnregisterAvoidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::FlockingManager::UnregisterAvoidPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x580a208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"UnregisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x580a288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)(bool)>(&::GlobalNamespace::FlockingManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x580a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager::*)()>(&::GlobalNamespace::FlockingManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x580a4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::FlockingManager::__cordl_internal_get_fishAreaContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishAreaContainer;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::FlockingManager::__cordl_internal_get_fishAreaContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishAreaContainer;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_fishAreaContainer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fishAreaContainer = value;
}
constexpr ::StringW& GlobalNamespace::FlockingManager::__cordl_internal_get_foodProjectileTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodProjectileTag;
}
constexpr ::StringW const& GlobalNamespace::FlockingManager::__cordl_internal_get_foodProjectileTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foodProjectileTag;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_foodProjectileTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foodProjectileTag = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>*& GlobalNamespace::FlockingManager::__cordl_internal_get_areaToWaypointDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaToWaypointDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>* const& GlobalNamespace::FlockingManager::__cordl_internal_get_areaToWaypointDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaToWaypointDict;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_areaToWaypointDict(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areaToWaypointDict = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>*& GlobalNamespace::FlockingManager::__cordl_internal_get_fishAreaList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishAreaList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>* const& GlobalNamespace::FlockingManager::__cordl_internal_get_fishAreaList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishAreaList;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_fishAreaList(::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fishAreaList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*& GlobalNamespace::FlockingManager::__cordl_internal_get_allFish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFish;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>* const& GlobalNamespace::FlockingManager::__cordl_internal_get_allFish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allFish;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_allFish(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allFish = value;
}
constexpr ::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>*& GlobalNamespace::FlockingManager::__cordl_internal_get_onFoodDetected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFoodDetected;
}
constexpr ::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>* const& GlobalNamespace::FlockingManager::__cordl_internal_get_onFoodDetected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFoodDetected;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_onFoodDetected(::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFoodDetected = value;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>*& GlobalNamespace::FlockingManager::__cordl_internal_get_onFoodDestroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFoodDestroyed;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>* const& GlobalNamespace::FlockingManager::__cordl_internal_get_onFoodDestroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFoodDestroyed;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_onFoodDestroyed(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFoodDestroyed = value;
}
constexpr bool& GlobalNamespace::FlockingManager::__cordl_internal_get_hasBeenSerialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenSerialized;
}
constexpr bool const& GlobalNamespace::FlockingManager::__cordl_internal_get_hasBeenSerialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenSerialized;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set_hasBeenSerialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBeenSerialized = value;
}
constexpr ::GlobalNamespace::FlockingData& GlobalNamespace::FlockingManager::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::FlockingData const& GlobalNamespace::FlockingManager::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::FlockingManager::__cordl_internal_set__Data(::GlobalNamespace::FlockingData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::FlockingManager::setStaticF_avoidPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "avoidPoints", ::GlobalNamespace::FlockingManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::FlockingManager::getStaticF_avoidPoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "avoidPoints", ::GlobalNamespace::FlockingManager*>();
}
inline void GlobalNamespace::FlockingManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FlockingManager::GetRandomPointInsideCollider(::GlobalNamespace::FlockingManager_FishArea*  fishArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"GetRandomPointInsideCollider", {}, {::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, fishArea);
}
inline bool GlobalNamespace::FlockingManager::IsInside(::UnityEngine::Vector3  point, ::GlobalNamespace::FlockingManager_FishArea*  fish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"IsInside", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, fish);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FlockingManager::RestrictPointToArea(::UnityEngine::Vector3  point, ::GlobalNamespace::FlockingManager_FishArea*  fish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"RestrictPointToArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::FlockingManager_FishArea*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, fish);
}
inline void GlobalNamespace::FlockingManager::ProjectileHitReceiver(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"ProjectileHitReceiver", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collider1);
}
inline void GlobalNamespace::FlockingManager::ProjectileHitExit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"ProjectileHitExit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collider2);
}
inline ::GlobalNamespace::FlockingData GlobalNamespace::FlockingManager::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FlockingData>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::set_Data(::GlobalNamespace::FlockingData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::FlockingData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FlockingManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::FlockingManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::FlockingManager::RegisterAvoidPoint(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"RegisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::FlockingManager::UnregisterAvoidPoint(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {"UnregisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::FlockingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::FlockingManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FlockingManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlockingManager* GlobalNamespace::FlockingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlockingManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlockingManager::FlockingManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::FlockingManager_FishFood._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager_FishFood::*)()>(&::GlobalNamespace::FlockingManager_FishFood::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58099a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager_FishFood*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::FlockingManager_FishFood::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::FlockingManager_FishFood::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GlobalNamespace::FlockingManager_FishFood::__cordl_internal_set_collider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr bool& GlobalNamespace::FlockingManager_FishFood::__cordl_internal_get_isRealFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRealFood;
}
constexpr bool const& GlobalNamespace::FlockingManager_FishFood::__cordl_internal_get_isRealFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRealFood;
}
constexpr void GlobalNamespace::FlockingManager_FishFood::__cordl_internal_set_isRealFood(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRealFood = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile>& GlobalNamespace::FlockingManager_FishFood::__cordl_internal_get_slingshotProjectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slingshotProjectile;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile> const& GlobalNamespace::FlockingManager_FishFood::__cordl_internal_get_slingshotProjectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slingshotProjectile;
}
constexpr void GlobalNamespace::FlockingManager_FishFood::__cordl_internal_set_slingshotProjectile(::UnityW<::GlobalNamespace::SlingshotProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slingshotProjectile = value;
}
inline void GlobalNamespace::FlockingManager_FishFood::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager_FishFood*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlockingManager_FishFood* GlobalNamespace::FlockingManager_FishFood::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlockingManager_FishFood*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlockingManager_FishFood::FlockingManager_FishFood()   {
}
//  Writing Method size for method: ::GlobalNamespace::FlockingManager_FishArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingManager_FishArea::*)()>(&::GlobalNamespace::FlockingManager_FishArea::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x580905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager_FishArea*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::FlockingManager_FishArea::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_fishList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>* const& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_fishList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fishList;
}
constexpr void GlobalNamespace::FlockingManager_FishArea::__cordl_internal_set_fishList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fishList = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_colliderCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_colliderCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderCenter;
}
constexpr void GlobalNamespace::FlockingManager_FishArea::__cordl_internal_set_colliderCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderCenter = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>> const& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::FlockingManager_FishArea::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_nextWaypoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWaypoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_nextWaypoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextWaypoint;
}
constexpr void GlobalNamespace::FlockingManager_FishArea::__cordl_internal_set_nextWaypoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextWaypoint = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_zoneBasedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneBasedObject;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& GlobalNamespace::FlockingManager_FishArea::__cordl_internal_get_zoneBasedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneBasedObject;
}
constexpr void GlobalNamespace::FlockingManager_FishArea::__cordl_internal_set_zoneBasedObject(::UnityW<::GlobalNamespace::ZoneBasedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneBasedObject = value;
}
inline void GlobalNamespace::FlockingManager_FishArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingManager_FishArea*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlockingManager_FishArea* GlobalNamespace::FlockingManager_FishArea::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlockingManager_FishArea*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlockingManager_FishArea::FlockingManager_FishArea()   {
}
