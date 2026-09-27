#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsManager.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager_FeatureState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager_def.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager_<>c__DisplayClass34_0___GetCosmeticsForPlayersAsync_b__0_d_def.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager_FeatureState_def.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager__GetCosmeticsForPlayersAsync_d__34_def.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager__InitializeFeatureAsync_d__27_def.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__ILckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
#include "Liv/Lck/zzzz__ILckCosmeticsFeatureFlagManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.get_LckEntitlementsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::LckEntitlementsManager::get_LckEntitlementsEnabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56c602c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"get_LckEntitlementsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.set_LckEntitlementsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::LckEntitlementsManager::set_LckEntitlementsEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56c6074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"set_LckEntitlementsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LckEntitlementsManager> (*)()>(&::GlobalNamespace::LckEntitlementsManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56c60c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LckEntitlementsManager*)>(&::GlobalNamespace::LckEntitlementsManager::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56c610c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::LckEntitlementsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x56c615c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56c62b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56c64c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.InitializeFeatureAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::InitializeFeatureAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56c6314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"InitializeFeatureAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.OnLocalPlayerSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager::*)(::StringW)>(&::GlobalNamespace::LckEntitlementsManager::OnLocalPlayerSpawned)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56c6534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnLocalPlayerSpawned", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.OnRemotePlayerSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager::*)(::StringW)>(&::GlobalNamespace::LckEntitlementsManager::OnRemotePlayerSpawned)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56c6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnRemotePlayerSpawned", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.ProcessLocalPlayerSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LckEntitlementsManager::*)(::StringW)>(&::GlobalNamespace::LckEntitlementsManager::ProcessLocalPlayerSpawn)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56c66c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"ProcessLocalPlayerSpawn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.ShouldProcessPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager::*)(::StringW)>(&::GlobalNamespace::LckEntitlementsManager::ShouldProcessPlayer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x56c657c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"ShouldProcessPlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.ProcessBatchedRemotePlayersCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::ProcessBatchedRemotePlayersCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56c6458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"ProcessBatchedRemotePlayersCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.AnnouncePlayerPresenceForSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LckEntitlementsManager::*)(::StringW)>(&::GlobalNamespace::LckEntitlementsManager::AnnouncePlayerPresenceForSession)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56c68cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"AnnouncePlayerPresenceForSession", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.GetCosmeticsForPlayersAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LckEntitlementsManager::*)(::System::Collections::Generic::List_1<::StringW>*, ::StringW)>(&::GlobalNamespace::LckEntitlementsManager::GetCosmeticsForPlayersAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x56c697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"GetCosmeticsForPlayersAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager.CleanupProcessedPlayersCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::CleanupProcessedPlayersCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56c63ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"CleanupProcessedPlayersCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56c6aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager._ProcessLocalPlayerSpawn_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager::*)()>(&::GlobalNamespace::LckEntitlementsManager::_ProcessLocalPlayerSpawn_b__30_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56c6b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"<ProcessLocalPlayerSpawn>b__30_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__lckCosmeticsCoordinator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCosmeticsCoordinator;
}
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__lckCosmeticsCoordinator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCosmeticsCoordinator;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__lckCosmeticsCoordinator(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckCosmeticsCoordinator = value;
}
constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager*& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__featureFlagManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureFlagManager;
}
constexpr ::Liv::Lck::ILckCosmeticsFeatureFlagManager* const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__featureFlagManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureFlagManager;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__featureFlagManager(::Liv::Lck::ILckCosmeticsFeatureFlagManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureFlagManager = value;
}
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__currentState(::GlobalNamespace::LckEntitlementsManager_FeatureState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__remotePlayersToGetEntitlementsFor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remotePlayersToGetEntitlementsFor;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__remotePlayersToGetEntitlementsFor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remotePlayersToGetEntitlementsFor;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__remotePlayersToGetEntitlementsFor(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remotePlayersToGetEntitlementsFor = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__getEntitlementsBatchingCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getEntitlementsBatchingCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__getEntitlementsBatchingCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getEntitlementsBatchingCoroutine;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__getEntitlementsBatchingCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getEntitlementsBatchingCoroutine = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__processedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processedPlayers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>* const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__processedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____processedPlayers;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__processedPlayers(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____processedPlayers = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__cleanupProcessedPlayersCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cleanupProcessedPlayersCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__cleanupProcessedPlayersCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cleanupProcessedPlayersCoroutine;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__cleanupProcessedPlayersCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cleanupProcessedPlayersCoroutine = value;
}
constexpr bool& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__isProcessingBatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isProcessingBatch;
}
constexpr bool const& GlobalNamespace::LckEntitlementsManager::__cordl_internal_get__isProcessingBatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isProcessingBatch;
}
constexpr void GlobalNamespace::LckEntitlementsManager::__cordl_internal_set__isProcessingBatch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isProcessingBatch = value;
}
inline void GlobalNamespace::LckEntitlementsManager::setStaticF__LckEntitlementsEnabled_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<LckEntitlementsEnabled>k__BackingField", ::GlobalNamespace::LckEntitlementsManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LckEntitlementsManager::getStaticF__LckEntitlementsEnabled_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<LckEntitlementsEnabled>k__BackingField", ::GlobalNamespace::LckEntitlementsManager*>();
}
inline void GlobalNamespace::LckEntitlementsManager::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::LckEntitlementsManager>, "<Instance>k__BackingField", ::GlobalNamespace::LckEntitlementsManager*>(std::forward<::UnityW<::GlobalNamespace::LckEntitlementsManager>>(value));
}
inline ::UnityW<::GlobalNamespace::LckEntitlementsManager> GlobalNamespace::LckEntitlementsManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::LckEntitlementsManager>, "<Instance>k__BackingField", ::GlobalNamespace::LckEntitlementsManager*>();
}
inline bool GlobalNamespace::LckEntitlementsManager::get_LckEntitlementsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"get_LckEntitlementsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager::set_LckEntitlementsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"set_LckEntitlementsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LckEntitlementsManager> GlobalNamespace::LckEntitlementsManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LckEntitlementsManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager::set_Instance(::GlobalNamespace::LckEntitlementsManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::LckEntitlementsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::LckEntitlementsManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LckEntitlementsManager::InitializeFeatureAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"InitializeFeatureAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager::OnLocalPlayerSpawned(::StringW  localUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnLocalPlayerSpawned", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localUserId);
}
inline void GlobalNamespace::LckEntitlementsManager::OnRemotePlayerSpawned(::StringW  remoteUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"OnRemotePlayerSpawned", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteUserId);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager::ProcessLocalPlayerSpawn(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"ProcessLocalPlayerSpawn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, userId);
}
inline bool GlobalNamespace::LckEntitlementsManager::ShouldProcessPlayer(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"ShouldProcessPlayer", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager::ProcessBatchedRemotePlayersCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"ProcessBatchedRemotePlayersCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager::AnnouncePlayerPresenceForSession(::StringW  localPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"AnnouncePlayerPresenceForSession", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, localPlayerId);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LckEntitlementsManager::GetCosmeticsForPlayersAsync(::System::Collections::Generic::List_1<::StringW>*  userIdList, ::StringW  methodNameForLogging)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"GetCosmeticsForPlayersAsync", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, userIdList, methodNameForLogging);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager::CleanupProcessedPlayersCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"CleanupProcessedPlayersCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckEntitlementsManager::_ProcessLocalPlayerSpawn_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager*>(),
                        {"<ProcessLocalPlayerSpawn>b__30_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::LckEntitlementsManager* GlobalNamespace::LckEntitlementsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager::LckEntitlementsManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::*)(int32_t)>(&::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56c6874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c8804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56c8808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c8924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56c892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c8964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get_userId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_get_userId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::__cordl_internal_set_userId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userId = value;
}
inline void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30* GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30::LckEntitlementsManager__ProcessLocalPlayerSpawn_d__30()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::*)(int32_t)>(&::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56c68a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c8568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x56c856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c87bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56c87c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::*)()>(&::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c87fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32* GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32::LckEntitlementsManager__ProcessBatchedRemotePlayersCoroutine_d__32()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::*)(int32_t)>(&::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56c6a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::*)()>(&::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c7734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::*)()>(&::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x56c7738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::*)()>(&::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c7b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::*)()>(&::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56c7b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::*)()>(&::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c7bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get__playersToRemove_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersToRemove_5__2;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_get__playersToRemove_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playersToRemove_5__2;
}
constexpr void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::__cordl_internal_set__playersToRemove_5__2(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playersToRemove_5__2 = value;
}
inline void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35* GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35::LckEntitlementsManager__CleanupProcessedPlayersCoroutine_d__35()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::*)(int32_t)>(&::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56c6954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::*)()>(&::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c72a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::*)()>(&::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x56c72ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::*)()>(&::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c76ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::*)()>(&::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56c76f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::*)()>(&::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c772c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get_localPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerId;
}
constexpr ::StringW const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get_localPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerId;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set_localPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerId = value;
}
constexpr ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0* const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set___8__1(::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::StringW& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get__sessionId_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionId_5__2;
}
constexpr ::StringW const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get__sessionId_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionId_5__2;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set__sessionId_5__2(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionId_5__2 = value;
}
constexpr int32_t& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get__attempt_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attempt_5__3;
}
constexpr int32_t const& GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_get__attempt_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attempt_5__3;
}
constexpr void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::__cordl_internal_set__attempt_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attempt_5__3 = value;
}
inline void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33* GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33::LckEntitlementsManager__AnnouncePlayerPresenceForSession_d__33()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::*)()>(&::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c6bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0._GetCosmeticsForPlayersAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::*)()>(&::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::_GetCosmeticsForPlayersAsync_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56c6bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*>(),
                        {"<GetCosmeticsForPlayersAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager>& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LckEntitlementsManager> const& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LckEntitlementsManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get_userIdList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userIdList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get_userIdList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userIdList;
}
constexpr void GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_set_userIdList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userIdList = value;
}
constexpr ::StringW& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get_methodNameForLogging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodNameForLogging;
}
constexpr ::StringW const& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get_methodNameForLogging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodNameForLogging;
}
constexpr void GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_set_methodNameForLogging(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodNameForLogging = value;
}
constexpr ::StringW& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionId = value;
}
inline void GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::_GetCosmeticsForPlayersAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*>(),
                        {"<GetCosmeticsForPlayersAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0* GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass34_0::LckEntitlementsManager___c__DisplayClass34_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::*)()>(&::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0._AnnouncePlayerPresenceForSession_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::*)()>(&::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::_AnnouncePlayerPresenceForSession_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56c6ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*>(),
                        {"<AnnouncePlayerPresenceForSession>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*& GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::__cordl_internal_get_announcementAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announcementAsync;
}
constexpr ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* const& GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::__cordl_internal_get_announcementAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announcementAsync;
}
constexpr void GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::__cordl_internal_set_announcementAsync(::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announcementAsync = value;
}
inline void GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::_AnnouncePlayerPresenceForSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*>(),
                        {"<AnnouncePlayerPresenceForSession>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0* GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager___c__DisplayClass33_0::LckEntitlementsManager___c__DisplayClass33_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::*)()>(&::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_get_AttemptCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttemptCount;
}
constexpr int32_t const& GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_get_AttemptCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttemptCount;
}
constexpr void GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_set_AttemptCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttemptCount = value;
}
constexpr float_t& GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_get_TimeoutUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeoutUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_get_TimeoutUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeoutUntilTimestamp;
}
constexpr void GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_set_TimeoutUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeoutUntilTimestamp = value;
}
constexpr float_t& GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_get_LastSeenTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastSeenTimestamp;
}
constexpr float_t const& GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_get_LastSeenTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastSeenTimestamp;
}
constexpr void GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::__cordl_internal_set_LastSeenTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastSeenTimestamp = value;
}
inline void GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord* GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager_PlayerProcessRecord::LckEntitlementsManager_PlayerProcessRecord()   {
}
