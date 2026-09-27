#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipClientContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipClientContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipClientContext.IsClientLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::MothershipClientContext::IsClientLoggedIn)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x53b94b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientContext*>(),
                        {"IsClientLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientContext.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MothershipClientContext::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x53b9528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientContext*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipClientContext::setStaticF_MothershipId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "MothershipId", ::GlobalNamespace::MothershipClientContext*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientContext::getStaticF_MothershipId()  {
return ::cordl_internals::getStaticField<::StringW, "MothershipId", ::GlobalNamespace::MothershipClientContext*>();
}
inline void GlobalNamespace::MothershipClientContext::setStaticF_Token(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Token", ::GlobalNamespace::MothershipClientContext*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientContext::getStaticF_Token()  {
return ::cordl_internals::getStaticField<::StringW, "Token", ::GlobalNamespace::MothershipClientContext*>();
}
inline bool GlobalNamespace::MothershipClientContext::IsClientLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientContext*>(),
                        {"IsClientLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipClientContext::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientContext*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipClientContext::MothershipClientContext()   {
}
