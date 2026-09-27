#pragma once
// IWYU pragma private; include "Photon/Realtime/OperationCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__OperationCode_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::OperationCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::OperationCode::*)()>(&::Photon::Realtime::OperationCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7095cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::OperationCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::OperationCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::OperationCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::OperationCode* Photon::Realtime::OperationCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::OperationCode*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::OperationCode::OperationCode()   {
}
