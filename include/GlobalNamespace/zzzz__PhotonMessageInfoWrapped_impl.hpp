#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped.get_SentServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::PhotonMessageInfoWrapped::*)()>(&::GlobalNamespace::PhotonMessageInfoWrapped::get_SentServerTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56e7740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"get_SentServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonMessageInfoWrapped::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::PhotonMessageInfoWrapped::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x56e7758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonMessageInfoWrapped::*)(::Fusion::RpcInfo)>(&::GlobalNamespace::PhotonMessageInfoWrapped::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56e7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonMessageInfoWrapped::*)(int32_t, int32_t)>(&::GlobalNamespace::PhotonMessageInfoWrapped::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56e7918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonMessageInfoWrapped::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::PhotonMessageInfoWrapped::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56e79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped.op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonMessageInfoWrapped (*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::PhotonMessageInfoWrapped::op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56e7a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped.op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonMessageInfoWrapped (*)(::Fusion::RpcInfo)>(&::GlobalNamespace::PhotonMessageInfoWrapped::op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56e7a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonMessageInfoWrapped.GetLocalDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonMessageInfoWrapped (*)()>(&::GlobalNamespace::PhotonMessageInfoWrapped::GetLocalDefault)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56e7ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"GetLocalDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::PhotonMessageInfoWrapped::get_SentServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"get_SentServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void GlobalNamespace::PhotonMessageInfoWrapped::_ctor(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info);
}
inline void GlobalNamespace::PhotonMessageInfoWrapped::_ctor(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info);
}
inline void GlobalNamespace::PhotonMessageInfoWrapped::_ctor(int32_t  playerID, int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerID, tick);
}
inline void GlobalNamespace::PhotonMessageInfoWrapped::_ctor(::GlobalNamespace::NetPlayer*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline ::GlobalNamespace::PhotonMessageInfoWrapped GlobalNamespace::PhotonMessageInfoWrapped::op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonMessageInfoWrapped>(nullptr, ___internal_method, info);
}
inline ::GlobalNamespace::PhotonMessageInfoWrapped GlobalNamespace::PhotonMessageInfoWrapped::op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonMessageInfoWrapped>(nullptr, ___internal_method, info);
}
inline ::GlobalNamespace::PhotonMessageInfoWrapped GlobalNamespace::PhotonMessageInfoWrapped::GetLocalDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonMessageInfoWrapped>(),
                        {"GetLocalDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonMessageInfoWrapped>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "senderID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sentTick", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "punInfo", ty: "::Photon::Pun::PhotonMessageInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sender", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonMessageInfoWrapped::PhotonMessageInfoWrapped(int32_t  senderID, int32_t  sentTick, ::Photon::Pun::PhotonMessageInfo  punInfo, ::GlobalNamespace::NetPlayer*  Sender) noexcept  {
this->senderID = senderID;
this->sentTick = sentTick;
this->punInfo = punInfo;
this->Sender = Sender;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonMessageInfoWrapped::PhotonMessageInfoWrapped()   {
}
