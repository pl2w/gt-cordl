#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPosRotConstraints.hpp"
#include "GlobalNamespace/zzzz__GorillaPosRotConstraint_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTPosRotConstraints_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5679ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5679de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)(bool)>(&::GlobalNamespace::GTPosRotConstraints::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5679de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5679df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5679df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x5679e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x567aa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x567aa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x567aa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTPosRotConstraints._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTPosRotConstraints::*)()>(&::GlobalNamespace::GTPosRotConstraints::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567aadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__shouldCallOnSpawnDuringAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldCallOnSpawnDuringAwake;
}
constexpr bool const& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__shouldCallOnSpawnDuringAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldCallOnSpawnDuringAwake;
}
constexpr void GlobalNamespace::GTPosRotConstraints::__cordl_internal_set__shouldCallOnSpawnDuringAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldCallOnSpawnDuringAwake = value;
}
constexpr bool& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__registerOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registerOnEnable;
}
constexpr bool const& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__registerOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registerOnEnable;
}
constexpr void GlobalNamespace::GTPosRotConstraints::__cordl_internal_set__registerOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registerOnEnable = value;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaPosRotConstraint>& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get_constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaPosRotConstraint> const& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get_constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr void GlobalNamespace::GTPosRotConstraints::__cordl_internal_set_constraints(::ArrayW<::GlobalNamespace::GorillaPosRotConstraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraints = value;
}
constexpr bool& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::GTPosRotConstraints::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::GTPosRotConstraints::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::GTPosRotConstraints::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline void GlobalNamespace::GTPosRotConstraints::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GTPosRotConstraints::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraints::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::GTPosRotConstraints::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraints::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraints::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTPosRotConstraints::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTPosRotConstraints*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTPosRotConstraints* GlobalNamespace::GTPosRotConstraints::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTPosRotConstraints*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::GTPosRotConstraints::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::GTPosRotConstraints::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPosRotConstraints::GTPosRotConstraints()   {
}
