#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapSpawnManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapSpawnManager_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapEntity_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapSpawnPoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.get_HasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GT_CustomMapSupportRuntime::MapSpawnManager::get_HasInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cb73e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"get_HasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapSpawnManager::*)()>(&::GT_CustomMapSupportRuntime::MapSpawnManager::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cb7430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.FindSpawnPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapSpawnManager::*)()>(&::GT_CustomMapSupportRuntime::MapSpawnManager::FindSpawnPoints)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cb7684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"FindSpawnPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.GetSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::MapSpawnManager::*)(::StringW, ::by_ref<::GT_CustomMapSupportRuntime::MapSpawnPoint*>)>(&::GT_CustomMapSupportRuntime::MapSpawnManager::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9cb7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"GetSpawnPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::MapSpawnPoint*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.GetEntityType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::MapSpawnManager::*)(int32_t, ::by_ref<::UnityEngine::GameObject*>)>(&::GT_CustomMapSupportRuntime::MapSpawnManager::GetEntityType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9cb77f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"GetEntityType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.SpawnEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::MapSpawnManager::*)(::StringW, int32_t, ::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>)>(&::GT_CustomMapSupportRuntime::MapSpawnManager::SpawnEntity)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x9cb78ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"SpawnEntity", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.SpawnEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GT_CustomMapSupportRuntime::MapSpawnManager::*)(int32_t, ::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>)>(&::GT_CustomMapSupportRuntime::MapSpawnManager::SpawnEntity)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9cb7abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"SpawnEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager.GetEntityTypeTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapSpawnManager::*)()>(&::GT_CustomMapSupportRuntime::MapSpawnManager::GetEntityTypeTemplates)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9cb751c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"GetEntityTypeTemplates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapSpawnManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapSpawnManager::*)()>(&::GT_CustomMapSupportRuntime::MapSpawnManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cb7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& GT_CustomMapSupportRuntime::MapSpawnManager::__cordl_internal_get_entityTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& GT_CustomMapSupportRuntime::MapSpawnManager::__cordl_internal_get_entityTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypes;
}
constexpr void GT_CustomMapSupportRuntime::MapSpawnManager::__cordl_internal_set_entityTypes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityTypes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>*& GT_CustomMapSupportRuntime::MapSpawnManager::__cordl_internal_get_spawnPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoints;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>* const& GT_CustomMapSupportRuntime::MapSpawnManager::__cordl_internal_get_spawnPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoints;
}
constexpr void GT_CustomMapSupportRuntime::MapSpawnManager::__cordl_internal_set_spawnPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GT_CustomMapSupportRuntime::MapSpawnPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoints = value;
}
inline void GT_CustomMapSupportRuntime::MapSpawnManager::setStaticF_instance(::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager>, "instance", ::GT_CustomMapSupportRuntime::MapSpawnManager*>(std::forward<::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager>>(value));
}
inline ::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager> GT_CustomMapSupportRuntime::MapSpawnManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GT_CustomMapSupportRuntime::MapSpawnManager>, "instance", ::GT_CustomMapSupportRuntime::MapSpawnManager*>();
}
inline void GT_CustomMapSupportRuntime::MapSpawnManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GT_CustomMapSupportRuntime::MapSpawnManager*>(std::forward<bool>(value));
}
inline bool GT_CustomMapSupportRuntime::MapSpawnManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GT_CustomMapSupportRuntime::MapSpawnManager*>();
}
inline bool GT_CustomMapSupportRuntime::MapSpawnManager::get_HasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"get_HasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MapSpawnManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MapSpawnManager::FindSpawnPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"FindSpawnPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GT_CustomMapSupportRuntime::MapSpawnManager::GetSpawnPoint(::StringW  spawnPointID, ::by_ref<::GT_CustomMapSupportRuntime::MapSpawnPoint*>  spawnPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"GetSpawnPoint", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::MapSpawnPoint*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spawnPointID, spawnPoint);
}
inline bool GT_CustomMapSupportRuntime::MapSpawnManager::GetEntityType(int32_t  enemyTypeIndex, ::by_ref<::UnityEngine::GameObject*>  newEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"GetEntityType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enemyTypeIndex, newEntity);
}
inline bool GT_CustomMapSupportRuntime::MapSpawnManager::SpawnEntity(::StringW  spawnPointID, int32_t  enemyTypeIndex, /* [Nullable(2)] */ ::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>  newEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"SpawnEntity", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spawnPointID, enemyTypeIndex, newEntity);
}
inline bool GT_CustomMapSupportRuntime::MapSpawnManager::SpawnEntity(int32_t  enemyTypeIndex, ::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>  newEnemy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"SpawnEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GT_CustomMapSupportRuntime::MapEntity*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enemyTypeIndex, newEnemy);
}
inline void GT_CustomMapSupportRuntime::MapSpawnManager::GetEntityTypeTemplates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {"GetEntityTypeTemplates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MapSpawnManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapSpawnManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MapSpawnManager* GT_CustomMapSupportRuntime::MapSpawnManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MapSpawnManager*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MapSpawnManager::MapSpawnManager()   {
}
