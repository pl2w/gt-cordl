#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonPrefabPool.hpp"
#include "GlobalNamespace/zzzz__PrefabType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonPrefabPool_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPre_def.hpp"
#include "GlobalNamespace/zzzz__PrefabType_def.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPoolVerify_def.hpp"
#include "Photon/Pun/zzzz__IPunPrefabPool_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.ITickSystemPre_get_PreTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonPrefabPool::*)()>(&::GlobalNamespace::PhotonPrefabPool::ITickSystemPre_get_PreTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f5c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"ITickSystemPre.get_PreTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.ITickSystemPre_set_PreTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)(bool)>(&::GlobalNamespace::PhotonPrefabPool::ITickSystemPre_set_PreTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f5c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"ITickSystemPre.set_PreTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)()>(&::GlobalNamespace::PhotonPrefabPool::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58f5c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)()>(&::GlobalNamespace::PhotonPrefabPool::Start)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58f5d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.Photon_Pun_IPunPrefabPoolVerify_VerifyInstantiation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonPrefabPool::*)(::Photon::Realtime::Player*, ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::ArrayW<int32_t>, ::by_ref<::UnityEngine::GameObject*>)>(&::GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPoolVerify_VerifyInstantiation)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x58f5ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPoolVerify.VerifyInstantiation", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.Photon_Pun_IPunPrefabPoolVerify_Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::PhotonPrefabPool::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPoolVerify_Instantiate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58f62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPoolVerify.Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.Photon_Pun_IPunPrefabPool_Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::PhotonPrefabPool::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Instantiate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x58f640c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPool.Instantiate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.Photon_Pun_IPunPrefabPool_Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Destroy)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x58f6558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPool.Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.ITickSystemPre_PreTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)()>(&::GlobalNamespace::PhotonPrefabPool::ITickSystemPre_PreTick)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58f67ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"ITickSystemPre.PreTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)()>(&::GlobalNamespace::PhotonPrefabPool::OnLeftRoom)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58f6a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool.CheckVOIPSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&::GlobalNamespace::PhotonPrefabPool::CheckVOIPSettings)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x58f6c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"CheckVOIPSettings", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonPrefabPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonPrefabPool::*)()>(&::GlobalNamespace::PhotonPrefabPool::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x58f6f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPre_PreTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPre_PreTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set__ITickSystemPre_PreTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPre_PreTickRunning_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::PrefabType>& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_networkPrefabsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkPrefabsData;
}
constexpr ::ArrayW<::GlobalNamespace::PrefabType> const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_networkPrefabsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkPrefabsData;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_networkPrefabsData(::ArrayW<::GlobalNamespace::PrefabType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkPrefabsData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_networkPrefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkPrefabs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_networkPrefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkPrefabs;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_networkPrefabs(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkPrefabs = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_objectsWaiting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsWaiting;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_objectsWaiting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsWaiting;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_objectsWaiting(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsWaiting = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_queueBeingProcssed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueBeingProcssed;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_queueBeingProcssed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queueBeingProcssed;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_queueBeingProcssed(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queueBeingProcssed = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_objectsQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsQueued;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_objectsQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsQueued;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_objectsQueued(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsQueued = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_netInstantiedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netInstantiedObjects;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_netInstantiedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netInstantiedObjects;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_netInstantiedObjects(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netInstantiedObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_tempViews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempViews;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_tempViews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempViews;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_tempViews(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempViews = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_m_invalidCreatePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_invalidCreatePool;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_m_invalidCreatePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_invalidCreatePool;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_m_invalidCreatePool(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_invalidCreatePool = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_m_m_invalidCreatePoolLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_m_invalidCreatePoolLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_m_m_invalidCreatePoolLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_m_invalidCreatePoolLookup;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_m_m_invalidCreatePoolLookup(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_m_invalidCreatePoolLookup = value;
}
constexpr bool& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_waiting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waiting;
}
constexpr bool const& GlobalNamespace::PhotonPrefabPool::__cordl_internal_get_waiting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waiting;
}
constexpr void GlobalNamespace::PhotonPrefabPool::__cordl_internal_set_waiting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waiting = value;
}
inline bool GlobalNamespace::PhotonPrefabPool::ITickSystemPre_get_PreTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"ITickSystemPre.get_PreTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonPrefabPool::ITickSystemPre_set_PreTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"ITickSystemPre.set_PreTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PhotonPrefabPool::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonPrefabPool::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPoolVerify_VerifyInstantiation(::Photon::Realtime::Player*  sender, ::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::ArrayW<int32_t>  viewIDs, ::by_ref<::UnityEngine::GameObject*>  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPoolVerify.VerifyInstantiation", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, prefabName, position, rotation, viewIDs, prefab);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPoolVerify_Instantiate(::UnityEngine::GameObject*  prefabInstance, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPoolVerify.Instantiate", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefabInstance, position, rotation);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Instantiate(::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPool.Instantiate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefabId, position, rotation);
}
inline void GlobalNamespace::PhotonPrefabPool::Photon_Pun_IPunPrefabPool_Destroy(::UnityEngine::GameObject*  netObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"Photon.Pun.IPunPrefabPool.Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netObj);
}
inline void GlobalNamespace::PhotonPrefabPool::ITickSystemPre_PreTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"ITickSystemPre.PreTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonPrefabPool::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonPrefabPool::CheckVOIPSettings(::Photon::Voice::Unity::RemoteVoiceLink*  voiceLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {"CheckVOIPSettings", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceLink);
}
inline void GlobalNamespace::PhotonPrefabPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonPrefabPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonPrefabPool* GlobalNamespace::PhotonPrefabPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonPrefabPool*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunPrefabPoolVerify"
constexpr  GlobalNamespace::PhotonPrefabPool::operator ::Photon::Pun::IPunPrefabPoolVerify*() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPoolVerify*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunPrefabPoolVerify"
constexpr ::Photon::Pun::IPunPrefabPoolVerify* GlobalNamespace::PhotonPrefabPool::i___Photon__Pun__IPunPrefabPoolVerify() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPoolVerify*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
constexpr  GlobalNamespace::PhotonPrefabPool::operator ::Photon::Pun::IPunPrefabPool*() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunPrefabPool"
constexpr ::Photon::Pun::IPunPrefabPool* GlobalNamespace::PhotonPrefabPool::i___Photon__Pun__IPunPrefabPool() noexcept {
return static_cast<::Photon::Pun::IPunPrefabPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr  GlobalNamespace::PhotonPrefabPool::operator ::GlobalNamespace::ITickSystemPre*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* GlobalNamespace::PhotonPrefabPool::i___GlobalNamespace__ITickSystemPre() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonPrefabPool::PhotonPrefabPool()   {
}
