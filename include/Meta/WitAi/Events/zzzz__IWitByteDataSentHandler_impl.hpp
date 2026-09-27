#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/IWitByteDataSentHandler.hpp"
#include "Meta/WitAi/Events/zzzz__IWitByteDataSentHandler_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::IWitByteDataSentHandler.OnWitDataSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::IWitByteDataSentHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Events::IWitByteDataSentHandler::OnWitDataSent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Events::IWitByteDataSentHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Events::IWitByteDataSentHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::IWitByteDataSentHandler::OnWitDataSent(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Events::IWitByteDataSentHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
