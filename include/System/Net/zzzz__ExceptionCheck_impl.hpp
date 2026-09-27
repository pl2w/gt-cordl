#pragma once
// IWYU pragma private; include "System/Net/ExceptionCheck.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ExceptionCheck_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Net::ExceptionCheck.IsFatal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::System::Net::ExceptionCheck::IsFatal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xada826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ExceptionCheck*>(),
                        {"IsFatal", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Net::ExceptionCheck::IsFatal(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ExceptionCheck*>(),
                        {"IsFatal", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::System::Net::ExceptionCheck::ExceptionCheck()   {
}
