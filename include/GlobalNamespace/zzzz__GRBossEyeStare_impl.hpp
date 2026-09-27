#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBossEyeStare.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRBossEyeStare_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBossEyeStare.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBossEyeStare::*)()>(&::GlobalNamespace::GRBossEyeStare::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5873464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBossEyeStare.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBossEyeStare::*)()>(&::GlobalNamespace::GRBossEyeStare::OnEnable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58734bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBossEyeStare.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBossEyeStare::*)()>(&::GlobalNamespace::GRBossEyeStare::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58734f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBossEyeStare.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBossEyeStare::*)()>(&::GlobalNamespace::GRBossEyeStare::SliceUpdate)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x58734fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBossEyeStare._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBossEyeStare::*)()>(&::GlobalNamespace::GRBossEyeStare::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5873bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lastLocalRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLocalRot;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lastLocalRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLocalRot;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_lastLocalRot(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLocalRot = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>*& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_noUpdateAbilities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noUpdateAbilities;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>* const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_noUpdateAbilities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noUpdateAbilities;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_noUpdateAbilities(::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilityBase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noUpdateAbilities = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_boss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boss;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_boss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boss;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_boss(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boss = value;
}
constexpr ::GlobalNamespace::GRAbilityBase*& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lastAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAbility;
}
constexpr ::GlobalNamespace::GRAbilityBase* const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lastAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAbility;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_lastAbility(::GlobalNamespace::GRAbilityBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAbility = value;
}
constexpr float_t& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lastCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr float_t const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lastCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCheck;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_lastCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCheck = value;
}
constexpr float_t& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_checkForClosestPlayerCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForClosestPlayerCooldown;
}
constexpr float_t const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_checkForClosestPlayerCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForClosestPlayerCooldown;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_checkForClosestPlayerCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkForClosestPlayerCooldown = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_closestPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestPlayer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_closestPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestPlayer;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_closestPlayer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closestPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_rigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigs = value;
}
constexpr float_t& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lerpAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpAmount;
}
constexpr float_t const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_lerpAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpAmount;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_lerpAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpAmount = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRBossEyeStare::__cordl_internal_get_rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotOffset;
}
constexpr void GlobalNamespace::GRBossEyeStare::__cordl_internal_set_rotOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotOffset = value;
}
inline void GlobalNamespace::GRBossEyeStare::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBossEyeStare::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBossEyeStare::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBossEyeStare::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBossEyeStare::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBossEyeStare*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBossEyeStare* GlobalNamespace::GRBossEyeStare::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBossEyeStare*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GRBossEyeStare::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GRBossEyeStare::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBossEyeStare::GRBossEyeStare()   {
}
