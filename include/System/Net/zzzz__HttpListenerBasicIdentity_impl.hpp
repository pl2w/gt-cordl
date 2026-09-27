#pragma once
// IWYU pragma private; include "System/Net/HttpListenerBasicIdentity.hpp"
#include "System/Security/Principal/zzzz__GenericIdentity_impl.hpp"
#include "System/Net/zzzz__HttpListenerBasicIdentity_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerBasicIdentity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerBasicIdentity::*)(::StringW, ::StringW)>(&::System::Net::HttpListenerBasicIdentity::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac9a788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerBasicIdentity*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerBasicIdentity.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerBasicIdentity::*)()>(&::System::Net::HttpListenerBasicIdentity::get_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac9a7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::HttpListenerBasicIdentity*>(),
                    {::i2c::class_of<::System::Net::HttpListenerBasicIdentity*>(), 13}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::HttpListenerBasicIdentity::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& System::Net::HttpListenerBasicIdentity::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void System::Net::HttpListenerBasicIdentity::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___password = value;
}
inline void System::Net::HttpListenerBasicIdentity::_ctor(::StringW  username, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::HttpListenerBasicIdentity*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, username, password);
}
inline ::StringW System::Net::HttpListenerBasicIdentity::get_Password()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::HttpListenerBasicIdentity*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::HttpListenerBasicIdentity* System::Net::HttpListenerBasicIdentity::New_ctor(::StringW  username, ::StringW  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerBasicIdentity*>(username, password));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerBasicIdentity::HttpListenerBasicIdentity()   {
}
