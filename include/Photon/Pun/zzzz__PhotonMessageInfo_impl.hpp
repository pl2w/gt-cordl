#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonMessageInfo.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonMessageInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonMessageInfo::*)(::Photon::Realtime::Player*, int32_t, ::Photon::Pun::PhotonView*)>(&::Photon::Pun::PhotonMessageInfo::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa71fb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonMessageInfo.get_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Photon::Pun::PhotonMessageInfo::*)()>(&::Photon::Pun::PhotonMessageInfo::get_timestamp)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa72b858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {"get_timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonMessageInfo.get_SentServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Photon::Pun::PhotonMessageInfo::*)()>(&::Photon::Pun::PhotonMessageInfo::get_SentServerTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa72b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {"get_SentServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonMessageInfo.get_SentServerTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::PhotonMessageInfo::*)()>(&::Photon::Pun::PhotonMessageInfo::get_SentServerTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72b888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {"get_SentServerTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonMessageInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Pun::PhotonMessageInfo::*)()>(&::Photon::Pun::PhotonMessageInfo::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa72b890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                    {::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::PhotonMessageInfo::_ctor(::Photon::Realtime::Player*  player, int32_t  timestamp, ::Photon::Pun::PhotonView*  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, player, timestamp, view);
}
inline double_t Photon::Pun::PhotonMessageInfo::get_timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {"get_timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Photon::Pun::PhotonMessageInfo::get_SentServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {"get_SentServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline int32_t Photon::Pun::PhotonMessageInfo::get_SentServerTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(),
                        {"get_SentServerTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Photon::Pun::PhotonMessageInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::PhotonMessageInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "timeInt", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sender", ty: "::Photon::Realtime::Player*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "photonView", ty: "::UnityW<::Photon::Pun::PhotonView>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Pun::PhotonMessageInfo::PhotonMessageInfo(int32_t  timeInt, ::Photon::Realtime::Player*  Sender, ::UnityW<::Photon::Pun::PhotonView>  photonView) noexcept  {
this->timeInt = timeInt;
this->Sender = Sender;
this->photonView = photonView;
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonMessageInfo::PhotonMessageInfo()   {
}
