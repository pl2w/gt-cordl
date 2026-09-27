#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableSystem.hpp"
#include "GlobalNamespace/zzzz__GTSystem_1_impl.hpp"
#include "GlobalNamespace/zzzz__TappableSystem_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableSystem.SendOnTapRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableSystem::*)(int32_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::TappableSystem::SendOnTapRPC)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59612c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableSystem*>(),
                        {"SendOnTapRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableSystem::*)()>(&::GlobalNamespace::TappableSystem::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x596145c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TappableSystem::SendOnTapRPC(int32_t  key, float_t  tapStrength, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableSystem*>(),
                        {"SendOnTapRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, tapStrength, info);
}
inline void GlobalNamespace::TappableSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TappableSystem* GlobalNamespace::TappableSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableSystem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableSystem::TappableSystem()   {
}
