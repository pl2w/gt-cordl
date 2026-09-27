#pragma once
// IWYU pragma private; include "GlobalNamespace/TestSpawnGadget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TestSpawnGadget_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__TestSpawnGadget_SpawnTypeWithUpgrades_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestSpawnGadget.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestSpawnGadget::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::TestSpawnGadget::Spawn)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5bf8208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestSpawnGadget*>(),
                        {"Spawn", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestSpawnGadget.SpawnGadgetBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestSpawnGadget::*)(::GlobalNamespace::GameEntityManager*, ::GlobalNamespace::GameEntity*, ::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::TestSpawnGadget::SpawnGadgetBatch)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5bf8554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestSpawnGadget*>(),
                        {"SpawnGadgetBatch", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestSpawnGadget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestSpawnGadget::*)()>(&::GlobalNamespace::TestSpawnGadget::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bf8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestSpawnGadget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_spawnBatchSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnBatchSize;
}
constexpr int32_t const& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_spawnBatchSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnBatchSize;
}
constexpr void GlobalNamespace::TestSpawnGadget::__cordl_internal_set_spawnBatchSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnBatchSize = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_testSpawnList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSpawnList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>* const& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_testSpawnList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSpawnList;
}
constexpr void GlobalNamespace::TestSpawnGadget::__cordl_internal_set_testSpawnList(::System::Collections::Generic::List_1<::GlobalNamespace::TestSpawnGadget_SpawnTypeWithUpgrades>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testSpawnList = value;
}
constexpr bool& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_spawnAllGadgets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAllGadgets;
}
constexpr bool const& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_spawnAllGadgets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAllGadgets;
}
constexpr void GlobalNamespace::TestSpawnGadget::__cordl_internal_set_spawnAllGadgets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAllGadgets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_skipEntityList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipEntityList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::TestSpawnGadget::__cordl_internal_get_skipEntityList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipEntityList;
}
constexpr void GlobalNamespace::TestSpawnGadget::__cordl_internal_set_skipEntityList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipEntityList = value;
}
inline void GlobalNamespace::TestSpawnGadget::Spawn(::GlobalNamespace::GameEntityManager*  gameEntityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestSpawnGadget*>(),
                        {"Spawn", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityManager);
}
inline void GlobalNamespace::TestSpawnGadget::SpawnGadgetBatch(::GlobalNamespace::GameEntityManager*  gameEntityManager, ::GlobalNamespace::GameEntity*  entityToSpawn, ::GlobalNamespace::SIUpgradeSet  upgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestSpawnGadget*>(),
                        {"SpawnGadgetBatch", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityManager, entityToSpawn, upgrades);
}
inline void GlobalNamespace::TestSpawnGadget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestSpawnGadget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestSpawnGadget* GlobalNamespace::TestSpawnGadget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestSpawnGadget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestSpawnGadget::TestSpawnGadget()   {
}
