#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectFromRoom.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectFromRoom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisconnectFromRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisconnectFromRoom::*)()>(&::GlobalNamespace::DisconnectFromRoom::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adf60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectFromRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DisconnectFromRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisconnectFromRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisconnectFromRoom* GlobalNamespace::DisconnectFromRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisconnectFromRoom*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectFromRoom::DisconnectFromRoom()   {
}
