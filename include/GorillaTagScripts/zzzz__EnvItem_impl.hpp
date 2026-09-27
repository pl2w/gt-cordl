#pragma once
// IWYU pragma private; include "GorillaTagScripts/EnvItem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__EnvItem_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::EnvItem.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::EnvItem::*)()>(&::GorillaTagScripts::EnvItem::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb93a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::EnvItem.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::EnvItem::*)()>(&::GorillaTagScripts::EnvItem::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb93a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::EnvItem.OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::EnvItem::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::EnvItem::OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bb93ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::EnvItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::EnvItem::*)()>(&::GorillaTagScripts::EnvItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb9414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::EnvItem::__cordl_internal_get_spawnedByPhotonViewId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedByPhotonViewId;
}
constexpr int32_t const& GorillaTagScripts::EnvItem::__cordl_internal_get_spawnedByPhotonViewId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedByPhotonViewId;
}
constexpr void GorillaTagScripts::EnvItem::__cordl_internal_set_spawnedByPhotonViewId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedByPhotonViewId = value;
}
inline void GorillaTagScripts::EnvItem::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::EnvItem::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::EnvItem::OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {"OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::EnvItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::EnvItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::EnvItem* GorillaTagScripts::EnvItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::EnvItem*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GorillaTagScripts::EnvItem::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GorillaTagScripts::EnvItem::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::EnvItem::EnvItem()   {
}
