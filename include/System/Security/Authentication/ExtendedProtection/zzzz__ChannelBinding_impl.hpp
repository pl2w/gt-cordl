#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ChannelBinding.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBinding_def.hpp"
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ChannelBinding.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Authentication::ExtendedProtection::ChannelBinding::*)()>(&::System::Security::Authentication::ExtendedProtection::ChannelBinding::get_Size)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>(),
                    {::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>(), 8}
                ));
    return ___internal_method;
  }
};
inline int32_t System::Security::Authentication::ExtendedProtection::ChannelBinding::get_Size()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding::ChannelBinding()   {
}
