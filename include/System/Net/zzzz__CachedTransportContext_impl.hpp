#pragma once
// IWYU pragma private; include "System/Net/CachedTransportContext.hpp"
#include "System/Net/zzzz__TransportContext_impl.hpp"
#include "System/Net/zzzz__CachedTransportContext_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBindingKind_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBinding_def.hpp"
//  Writing Method size for method: ::System::Net::CachedTransportContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CachedTransportContext::*)(::System::Security::Authentication::ExtendedProtection::ChannelBinding*)>(&::System::Net::CachedTransportContext::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac5cf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CachedTransportContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CachedTransportContext.GetChannelBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ChannelBinding* (::System::Net::CachedTransportContext::*)(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind)>(&::System::Net::CachedTransportContext::GetChannelBinding)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac5cf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::CachedTransportContext*>(),
                    {::i2c::class_of<::System::Net::CachedTransportContext*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding*& System::Net::CachedTransportContext::__cordl_internal_get_binding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ChannelBinding* const& System::Net::CachedTransportContext::__cordl_internal_get_binding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
constexpr void System::Net::CachedTransportContext::__cordl_internal_set_binding(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binding = value;
}
inline void System::Net::CachedTransportContext::_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CachedTransportContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline ::System::Security::Authentication::ExtendedProtection::ChannelBinding* System::Net::CachedTransportContext::GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  kind)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::CachedTransportContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>(this, ___internal_method, kind);
}
inline ::System::Net::CachedTransportContext* System::Net::CachedTransportContext::New_ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding*  binding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CachedTransportContext*>(binding));
}
// Ctor Parameters []
constexpr ::System::Net::CachedTransportContext::CachedTransportContext()   {
}
