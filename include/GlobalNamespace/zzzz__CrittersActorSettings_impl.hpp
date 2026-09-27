#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorSettings.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSettings.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSettings::*)()>(&::GlobalNamespace::CrittersActorSettings::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55fab48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSettings::*)()>(&::GlobalNamespace::CrittersActorSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55fab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersActorSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersActorSettings::*)()>(&::GlobalNamespace::CrittersActorSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fabc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CrittersActor>& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_parentActor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentActor;
}
constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_parentActor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentActor;
}
constexpr void GlobalNamespace::CrittersActorSettings::__cordl_internal_set_parentActor(::UnityW<::GlobalNamespace::CrittersActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentActor = value;
}
constexpr bool& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_usesRB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usesRB;
}
constexpr bool const& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_usesRB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usesRB;
}
constexpr void GlobalNamespace::CrittersActorSettings::__cordl_internal_set_usesRB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usesRB = value;
}
constexpr bool& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_canBeStored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canBeStored;
}
constexpr bool const& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_canBeStored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canBeStored;
}
constexpr void GlobalNamespace::CrittersActorSettings::__cordl_internal_set_canBeStored(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canBeStored = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_storeCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_storeCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeCollider;
}
constexpr void GlobalNamespace::CrittersActorSettings::__cordl_internal_set_storeCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeCollider = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_equipmentStoreTriggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipmentStoreTriggerCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::CrittersActorSettings::__cordl_internal_get_equipmentStoreTriggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipmentStoreTriggerCollider;
}
constexpr void GlobalNamespace::CrittersActorSettings::__cordl_internal_set_equipmentStoreTriggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equipmentStoreTriggerCollider = value;
}
inline void GlobalNamespace::CrittersActorSettings::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersActorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersActorSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersActorSettings* GlobalNamespace::CrittersActorSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersActorSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersActorSettings::CrittersActorSettings()   {
}
