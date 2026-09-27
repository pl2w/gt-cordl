#pragma once
// IWYU pragma private; include "GorillaTag/DrinkableHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__DrinkableHoldable_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTag/zzzz__ContainerLiquid_def.hpp"
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DrinkableHoldable::*)()>(&::GorillaTag::DrinkableHoldable::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d28a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                    {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DrinkableHoldable::*)()>(&::GorillaTag::DrinkableHoldable::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x5d28c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                    {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DrinkableHoldable::*)()>(&::GorillaTag::DrinkableHoldable::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d292f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                    {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DrinkableHoldable::*)()>(&::GorillaTag::DrinkableHoldable::LateUpdateShared)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d293f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                    {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.PackValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, float_t, bool)>(&::GorillaTag::DrinkableHoldable::PackValues)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d28b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"PackValues", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.UnpackValuesNonstatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DrinkableHoldable::*)(::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<bool>)>(&::GorillaTag::DrinkableHoldable::UnpackValuesNonstatic)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d29344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"UnpackValuesNonstatic", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::ArrayW<uint8_t>>)>(&::GorillaTag::DrinkableHoldable::GetBytes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d29440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"GetBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable.UnpackValuesStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<bool>)>(&::GorillaTag::DrinkableHoldable::UnpackValuesStatic)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d29498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"UnpackValuesStatic", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DrinkableHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DrinkableHoldable::*)()>(&::GorillaTag::DrinkableHoldable::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d29544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::ContainerLiquid>& GorillaTag::DrinkableHoldable::__cordl_internal_get_containerLiquid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containerLiquid;
}
constexpr ::UnityW<::GorillaTag::ContainerLiquid> const& GorillaTag::DrinkableHoldable::__cordl_internal_get_containerLiquid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containerLiquid;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_containerLiquid(::UnityW<::GorillaTag::ContainerLiquid>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containerLiquid = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipSoundBankPlayer;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_sipSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sipSoundBankPlayer = value;
}
constexpr float_t& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipRate;
}
constexpr float_t const& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipRate;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_sipRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sipRate = value;
}
constexpr float_t& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipSoundCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipSoundCooldown;
}
constexpr float_t const& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipSoundCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipSoundCooldown;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_sipSoundCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sipSoundCooldown = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::DrinkableHoldable::__cordl_internal_get_headToMouthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToMouthOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::DrinkableHoldable::__cordl_internal_get_headToMouthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headToMouthOffset;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_headToMouthOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headToMouthOffset = value;
}
constexpr float_t& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipRadius;
}
constexpr float_t const& GorillaTag::DrinkableHoldable::__cordl_internal_get_sipRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sipRadius;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_sipRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sipRadius = value;
}
constexpr float_t& GorillaTag::DrinkableHoldable::__cordl_internal_get_lastTimeSipSoundPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeSipSoundPlayed;
}
constexpr float_t const& GorillaTag::DrinkableHoldable::__cordl_internal_get_lastTimeSipSoundPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeSipSoundPlayed;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_lastTimeSipSoundPlayed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTimeSipSoundPlayed = value;
}
constexpr bool& GorillaTag::DrinkableHoldable::__cordl_internal_get_wasSipping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSipping;
}
constexpr bool const& GorillaTag::DrinkableHoldable::__cordl_internal_get_wasSipping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSipping;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_wasSipping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSipping = value;
}
constexpr bool& GorillaTag::DrinkableHoldable::__cordl_internal_get_coolingDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolingDown;
}
constexpr bool const& GorillaTag::DrinkableHoldable::__cordl_internal_get_coolingDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolingDown;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_coolingDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolingDown = value;
}
constexpr bool& GorillaTag::DrinkableHoldable::__cordl_internal_get_wasCoolingDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasCoolingDown;
}
constexpr bool const& GorillaTag::DrinkableHoldable::__cordl_internal_get_wasCoolingDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasCoolingDown;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_wasCoolingDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasCoolingDown = value;
}
constexpr ::ArrayW<uint8_t>& GorillaTag::DrinkableHoldable::__cordl_internal_get_myByteArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myByteArray;
}
constexpr ::ArrayW<uint8_t> const& GorillaTag::DrinkableHoldable::__cordl_internal_get_myByteArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myByteArray;
}
constexpr void GorillaTag::DrinkableHoldable::__cordl_internal_set_myByteArray(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myByteArray = value;
}
inline void GorillaTag::DrinkableHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DrinkableHoldable::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DrinkableHoldable::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DrinkableHoldable::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::DrinkableHoldable*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::DrinkableHoldable::PackValues(float_t  cooldownStartTime, float_t  fillAmount, bool  coolingDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"PackValues", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cooldownStartTime, fillAmount, coolingDown);
}
inline void GorillaTag::DrinkableHoldable::UnpackValuesNonstatic(/* [IsReadOnly] */ ::by_ref<int32_t>  packed, ::by_ref<float_t>  cooldownStartTime, ::by_ref<float_t>  fillAmount, ::by_ref<bool>  coolingDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"UnpackValuesNonstatic", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packed, cooldownStartTime, fillAmount, coolingDown);
}
inline void GorillaTag::DrinkableHoldable::GetBytes(int32_t  value, ::by_ref<::ArrayW<uint8_t>>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"GetBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, bytes);
}
inline void GorillaTag::DrinkableHoldable::UnpackValuesStatic(/* [IsReadOnly] */ ::by_ref<int32_t>  packed, ::by_ref<float_t>  cooldownStartTime, ::by_ref<float_t>  fillAmount, ::by_ref<bool>  coolingDown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {"UnpackValuesStatic", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packed, cooldownStartTime, fillAmount, coolingDown);
}
inline void GorillaTag::DrinkableHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DrinkableHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::DrinkableHoldable* GorillaTag::DrinkableHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DrinkableHoldable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::DrinkableHoldable::DrinkableHoldable()   {
}
