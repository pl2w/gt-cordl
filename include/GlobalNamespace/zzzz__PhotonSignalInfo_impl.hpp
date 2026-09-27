#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignalInfo.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonSignalInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonSignalInfo::*)(::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::PhotonSignalInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5abeaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignalInfo.get_sentServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::PhotonSignalInfo::*)()>(&::GlobalNamespace::PhotonSignalInfo::get_sentServerTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5abeb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                        {"get_sentServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignalInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PhotonSignalInfo::*)()>(&::GlobalNamespace::PhotonSignalInfo::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5abeb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonSignalInfo.op_Implicit___Photon__Pun__PhotonMessageInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Pun::PhotonMessageInfo (*)(::GlobalNamespace::PhotonSignalInfo)>(&::GlobalNamespace::PhotonSignalInfo::op_Implicit___Photon__Pun__PhotonMessageInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5abec0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonSignalInfo::_ctor(::GlobalNamespace::NetPlayer*  sender, int32_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender, timestamp);
}
inline double_t GlobalNamespace::PhotonSignalInfo::get_sentServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                        {"get_sentServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::PhotonSignalInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Photon::Pun::PhotonMessageInfo GlobalNamespace::PhotonSignalInfo::op_Implicit___Photon__Pun__PhotonMessageInfo(::GlobalNamespace::PhotonSignalInfo  psi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonSignalInfo>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Pun::PhotonMessageInfo>(nullptr, ___internal_method, psi);
}
// Ctor Parameters [CppParam { name: "timestamp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sender", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonSignalInfo::PhotonSignalInfo(int32_t  timestamp, ::GlobalNamespace::NetPlayer*  sender) noexcept  {
this->timestamp = timestamp;
this->sender = sender;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonSignalInfo::PhotonSignalInfo()   {
}
