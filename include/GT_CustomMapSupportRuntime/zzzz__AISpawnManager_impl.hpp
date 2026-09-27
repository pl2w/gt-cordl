#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AISpawnManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AISpawnManager_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AIAgent_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AISpawnPoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.get_HasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GT_CustomMapSupportRuntime::AISpawnManager::get_HasInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cb0ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"get_HasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AISpawnManager::*)()>(&::GT_CustomMapSupportRuntime::AISpawnManager::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cb0f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.FindSpawnPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AISpawnManager::*)()>(&::GT_CustomMapSupportRuntime::AISpawnManager::FindSpawnPoints)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cb1184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"FindSpawnPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.GetSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::AISpawnManager::*)(::StringW, ::by_ref<::GT_CustomMapSupportRuntime::AISpawnPoint*>)>(&::GT_CustomMapSupportRuntime::AISpawnManager::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9cb1290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"GetSpawnPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::AISpawnPoint*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.GetEnemyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::AISpawnManager::*)(int32_t, ::by_ref<::UnityEngine::GameObject*>)>(&::GT_CustomMapSupportRuntime::AISpawnManager::GetEnemyType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9cb12f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"GetEnemyType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.SpawnEnemy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::AISpawnManager::*)(::StringW, int32_t, ::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>)>(&::GT_CustomMapSupportRuntime::AISpawnManager::SpawnEnemy)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9cb13ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"SpawnEnemy", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.SpawnEnemy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::AISpawnManager::*)(int32_t, ::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>)>(&::GT_CustomMapSupportRuntime::AISpawnManager::SpawnEnemy)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9cb15bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"SpawnEnemy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager.GetEnemyTypeTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AISpawnManager::*)()>(&::GT_CustomMapSupportRuntime::AISpawnManager::GetEnemyTypeTemplates)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9cb101c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"GetEnemyTypeTemplates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AISpawnManager::*)()>(&::GT_CustomMapSupportRuntime::AISpawnManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cb1720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& GT_CustomMapSupportRuntime::AISpawnManager::__cordl_internal_get_enemyTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& GT_CustomMapSupportRuntime::AISpawnManager::__cordl_internal_get_enemyTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyTypes;
}
constexpr void GT_CustomMapSupportRuntime::AISpawnManager::__cordl_internal_set_enemyTypes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyTypes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>*& GT_CustomMapSupportRuntime::AISpawnManager::__cordl_internal_get_spawnPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoints;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>* const& GT_CustomMapSupportRuntime::AISpawnManager::__cordl_internal_get_spawnPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoints;
}
constexpr void GT_CustomMapSupportRuntime::AISpawnManager::__cordl_internal_set_spawnPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::AISpawnPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoints = value;
}
inline void GT_CustomMapSupportRuntime::AISpawnManager::setStaticF_instance(::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager>, "instance", ::GT_CustomMapSupportRuntime::AISpawnManager*>(std::forward<::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager>>(value));
}
inline ::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager> GT_CustomMapSupportRuntime::AISpawnManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GT_CustomMapSupportRuntime::AISpawnManager>, "instance", ::GT_CustomMapSupportRuntime::AISpawnManager*>();
}
inline void GT_CustomMapSupportRuntime::AISpawnManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GT_CustomMapSupportRuntime::AISpawnManager*>(std::forward<bool>(value));
}
inline bool GT_CustomMapSupportRuntime::AISpawnManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GT_CustomMapSupportRuntime::AISpawnManager*>();
}
inline bool GT_CustomMapSupportRuntime::AISpawnManager::get_HasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"get_HasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::AISpawnManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::AISpawnManager::FindSpawnPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"FindSpawnPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GT_CustomMapSupportRuntime::AISpawnManager::GetSpawnPoint(::StringW  spawnPointID, ::by_ref<::GT_CustomMapSupportRuntime::AISpawnPoint*>  spawnPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"GetSpawnPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::AISpawnPoint*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spawnPointID, spawnPoint);
}
inline bool GT_CustomMapSupportRuntime::AISpawnManager::GetEnemyType(int32_t  enemyTypeIndex, ::by_ref<::UnityEngine::GameObject*>  newEnemy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"GetEnemyType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enemyTypeIndex, newEnemy);
}
inline bool GT_CustomMapSupportRuntime::AISpawnManager::SpawnEnemy(::StringW  spawnPointID, int32_t  enemyTypeIndex, /* [Nullable(2)] */ ::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>  newEnemy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"SpawnEnemy", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spawnPointID, enemyTypeIndex, newEnemy);
}
inline bool GT_CustomMapSupportRuntime::AISpawnManager::SpawnEnemy(int32_t  enemyTypeIndex, ::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>  newEnemy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"SpawnEnemy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::AIAgent*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enemyTypeIndex, newEnemy);
}
inline void GT_CustomMapSupportRuntime::AISpawnManager::GetEnemyTypeTemplates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {"GetEnemyTypeTemplates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::AISpawnManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::AISpawnManager* GT_CustomMapSupportRuntime::AISpawnManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::AISpawnManager*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::AISpawnManager::AISpawnManager()   {
}
