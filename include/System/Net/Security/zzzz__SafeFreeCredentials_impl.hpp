#pragma once
// IWYU pragma private; include "System/Net/Security/SafeFreeCredentials.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SafeFreeCredentials._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeFreeCredentials::*)(::System::IntPtr, bool)>(&::System::Net::Security::SafeFreeCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf49b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Security::SafeFreeCredentials::_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeFreeCredentials*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, ownsHandle);
}
inline ::System::Net::Security::SafeFreeCredentials* System::Net::Security::SafeFreeCredentials::New_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SafeFreeCredentials*>(handle, ownsHandle));
}
// Ctor Parameters []
constexpr ::System::Net::Security::SafeFreeCredentials::SafeFreeCredentials()   {
}
