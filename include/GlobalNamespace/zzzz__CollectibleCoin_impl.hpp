#pragma once
// IWYU pragma private; include "GlobalNamespace/CollectibleCoin.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CollectibleCoin_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CollectibleCoin.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollectibleCoin::*)()>(&::GlobalNamespace::CollectibleCoin::Update)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x55e7e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollectibleCoin*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollectibleCoin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollectibleCoin::*)()>(&::GlobalNamespace::CollectibleCoin::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e827c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollectibleCoin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CollectibleCoin::__cordl_internal_get_RespawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RespawnTime;
}
constexpr float_t const& GlobalNamespace::CollectibleCoin::__cordl_internal_get_RespawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RespawnTime;
}
constexpr void GlobalNamespace::CollectibleCoin::__cordl_internal_set_RespawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RespawnTime = value;
}
constexpr bool& GlobalNamespace::CollectibleCoin::__cordl_internal_get_m_taken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_taken;
}
constexpr bool const& GlobalNamespace::CollectibleCoin::__cordl_internal_get_m_taken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_taken;
}
constexpr void GlobalNamespace::CollectibleCoin::__cordl_internal_set_m_taken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_taken = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollectibleCoin::__cordl_internal_get_m_respawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_respawnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollectibleCoin::__cordl_internal_get_m_respawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_respawnPosition;
}
constexpr void GlobalNamespace::CollectibleCoin::__cordl_internal_set_m_respawnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_respawnPosition = value;
}
constexpr float_t& GlobalNamespace::CollectibleCoin::__cordl_internal_get_m_respawnTimerStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_respawnTimerStartTime;
}
constexpr float_t const& GlobalNamespace::CollectibleCoin::__cordl_internal_get_m_respawnTimerStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_respawnTimerStartTime;
}
constexpr void GlobalNamespace::CollectibleCoin::__cordl_internal_set_m_respawnTimerStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_respawnTimerStartTime = value;
}
inline void GlobalNamespace::CollectibleCoin::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollectibleCoin*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollectibleCoin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollectibleCoin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CollectibleCoin* GlobalNamespace::CollectibleCoin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CollectibleCoin*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollectibleCoin::CollectibleCoin()   {
}
