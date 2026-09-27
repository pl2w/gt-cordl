#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IDataUploadHandler.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDataUploadHandler_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IDataUploadHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::IDataUploadHandler::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Interfaces::IDataUploadHandler::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IDataUploadHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IDataUploadHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Interfaces::IDataUploadHandler::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IDataUploadHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
