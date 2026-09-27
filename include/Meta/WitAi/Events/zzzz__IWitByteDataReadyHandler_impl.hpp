#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/IWitByteDataReadyHandler.hpp"
#include "Meta/WitAi/Events/zzzz__IWitByteDataReadyHandler_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::IWitByteDataReadyHandler.OnWitDataReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::IWitByteDataReadyHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Events::IWitByteDataReadyHandler::OnWitDataReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Events::IWitByteDataReadyHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Events::IWitByteDataReadyHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::IWitByteDataReadyHandler::OnWitDataReady(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Events::IWitByteDataReadyHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
