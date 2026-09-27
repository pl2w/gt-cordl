#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewCache.hpp"
#include "Photon/Pun/zzzz__PhotonView_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonViewCache_def.hpp"
#include "Photon/Pun/zzzz__IPunInstantiateMagicCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonViewCache.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonViewCache::*)()>(&::GlobalNamespace::PhotonViewCache::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f71e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonViewCache.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonViewCache::*)(bool)>(&::GlobalNamespace::PhotonViewCache::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f71ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonViewCache.Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonViewCache::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::PhotonViewCache::Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f71f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {"Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonViewCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonViewCache::*)()>(&::GlobalNamespace::PhotonViewCache::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f71f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PhotonViewCache::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::PhotonViewCache::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GlobalNamespace::PhotonViewCache::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>& GlobalNamespace::PhotonViewCache::__cordl_internal_get_m_photonViews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_photonViews;
}
constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> const& GlobalNamespace::PhotonViewCache::__cordl_internal_get_m_photonViews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_photonViews;
}
constexpr void GlobalNamespace::PhotonViewCache::__cordl_internal_set_m_photonViews(::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_photonViews = value;
}
constexpr bool& GlobalNamespace::PhotonViewCache::__cordl_internal_get_m_isRoomObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isRoomObject;
}
constexpr bool const& GlobalNamespace::PhotonViewCache::__cordl_internal_get_m_isRoomObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isRoomObject;
}
constexpr void GlobalNamespace::PhotonViewCache::__cordl_internal_set_m_isRoomObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_isRoomObject = value;
}
inline bool GlobalNamespace::PhotonViewCache::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PhotonViewCache::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PhotonViewCache::Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {"Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::PhotonViewCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonViewCache* GlobalNamespace::PhotonViewCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonViewCache*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr  GlobalNamespace::PhotonViewCache::operator ::Photon::Pun::IPunInstantiateMagicCallback*() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunInstantiateMagicCallback"
constexpr ::Photon::Pun::IPunInstantiateMagicCallback* GlobalNamespace::PhotonViewCache::i___Photon__Pun__IPunInstantiateMagicCallback() noexcept {
return static_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonViewCache::PhotonViewCache()   {
}
