#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterSpawnTrigger.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CritterSpawnTrigger_def.hpp"
#include "Sirenix/OdinInspector/zzzz__ValueDropdownList_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CritterSpawnTrigger.GetCritterTypeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Sirenix::OdinInspector::ValueDropdownList_1<int32_t>* (::GlobalNamespace::CritterSpawnTrigger::*)()>(&::GlobalNamespace::CritterSpawnTrigger::GetCritterTypeList)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56f2ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {"GetCritterTypeList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterSpawnTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterSpawnTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CritterSpawnTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x56f2b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterSpawnTrigger.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterSpawnTrigger::*)()>(&::GlobalNamespace::CritterSpawnTrigger::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56f2d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CritterSpawnTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CritterSpawnTrigger::*)()>(&::GlobalNamespace::CritterSpawnTrigger::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56f2dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_triggerActorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerActorType;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_triggerActorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerActorType;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set_triggerActorType(::GlobalNamespace::CrittersActor_CrittersActorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerActorType = value;
}
constexpr int32_t& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_requiredSubObjectIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredSubObjectIndex;
}
constexpr int32_t const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_requiredSubObjectIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredSubObjectIndex;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set_requiredSubObjectIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredSubObjectIndex = value;
}
constexpr ::StringW& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_triggerActorName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerActorName;
}
constexpr ::StringW const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_triggerActorName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerActorName;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set_triggerActorName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerActorName = value;
}
constexpr float_t& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_triggerCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCooldown;
}
constexpr float_t const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_triggerCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCooldown;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set_triggerCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCooldown = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_spawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_spawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoint;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoint = value;
}
constexpr int32_t& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_critterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterType;
}
constexpr int32_t const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get_critterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___critterType;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set_critterType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___critterType = value;
}
constexpr float_t& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get__nextSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextSpawnTime;
}
constexpr float_t const& GlobalNamespace::CritterSpawnTrigger::__cordl_internal_get__nextSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextSpawnTime;
}
constexpr void GlobalNamespace::CritterSpawnTrigger::__cordl_internal_set__nextSpawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextSpawnTime = value;
}
inline ::Sirenix::OdinInspector::ValueDropdownList_1<int32_t>* GlobalNamespace::CritterSpawnTrigger::GetCritterTypeList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {"GetCritterTypeList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Sirenix::OdinInspector::ValueDropdownList_1<int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::CritterSpawnTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CritterSpawnTrigger::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CritterSpawnTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CritterSpawnTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CritterSpawnTrigger* GlobalNamespace::CritterSpawnTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CritterSpawnTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CritterSpawnTrigger::CritterSpawnTrigger()   {
}
