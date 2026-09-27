#pragma once
// IWYU pragma private; include "System/Diagnostics/Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Debug_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Debug.WriteLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Diagnostics::Debug::WriteLine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xad269c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Debug*>(),
                        {"WriteLine", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Diagnostics::Debug::WriteLine(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::Debug*>(),
                        {"WriteLine", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Debug::Debug()   {
}
