#pragma once
// IWYU pragma private; include "Photon/Voice/Util.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__Util_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Util.SetThreadName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Thread*, ::StringW)>(&::Photon::Voice::Util::SetThreadName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa7487bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Util*>(),
                        {"SetThreadName", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::Util::SetThreadName(::System::Threading::Thread*  t, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Util*>(),
                        {"SetThreadName", {}, {::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, name);
}
// Ctor Parameters []
constexpr ::Photon::Voice::Util::Util()   {
}
