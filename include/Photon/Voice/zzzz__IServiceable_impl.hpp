#pragma once
// IWYU pragma private; include "Photon/Voice/IServiceable.hpp"
#include "Photon/Voice/zzzz__IServiceable_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IServiceable.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IServiceable::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::IServiceable::Service)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IServiceable*>(),
                    {::i2c::class_of<::Photon::Voice::IServiceable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::IServiceable::Service(::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IServiceable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localVoice);
}
