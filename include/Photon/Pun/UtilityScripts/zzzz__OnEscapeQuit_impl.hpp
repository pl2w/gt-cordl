#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnEscapeQuit.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnEscapeQuit_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnEscapeQuit.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnEscapeQuit::*)()>(&::Photon::Pun::UtilityScripts::OnEscapeQuit::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa73abec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnEscapeQuit*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnEscapeQuit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnEscapeQuit::*)()>(&::Photon::Pun::UtilityScripts::OnEscapeQuit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73ac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnEscapeQuit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::OnEscapeQuit::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnEscapeQuit*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnEscapeQuit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnEscapeQuit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::OnEscapeQuit* Photon::Pun::UtilityScripts::OnEscapeQuit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::OnEscapeQuit*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnEscapeQuit::OnEscapeQuit()   {
}
