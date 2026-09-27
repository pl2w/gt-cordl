#pragma once
// IWYU pragma private; include "System/Net/TransportContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__TransportContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBindingKind_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ChannelBinding_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__TokenBinding_def.hpp"
//  Writing Method size for method: ::System::Net::TransportContext.GetChannelBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ChannelBinding* (::System::Net::TransportContext::*)(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind)>(&::System::Net::TransportContext::GetChannelBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TransportContext*>(),
                    {::i2c::class_of<::System::Net::TransportContext*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TransportContext.GetTlsTokenBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Authentication::ExtendedProtection::TokenBinding*>* (::System::Net::TransportContext::*)()>(&::System::Net::TransportContext::GetTlsTokenBindings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac5cec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TransportContext*>(),
                    {::i2c::class_of<::System::Net::TransportContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TransportContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TransportContext::*)()>(&::System::Net::TransportContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TransportContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Security::Authentication::ExtendedProtection::ChannelBinding* System::Net::TransportContext::GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind  kind)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TransportContext*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ChannelBinding*>(this, ___internal_method, kind);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Authentication::ExtendedProtection::TokenBinding*>* System::Net::TransportContext::GetTlsTokenBindings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TransportContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Security::Authentication::ExtendedProtection::TokenBinding*>*>(this, ___internal_method);
}
inline void System::Net::TransportContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TransportContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::TransportContext* System::Net::TransportContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TransportContext*>());
}
// Ctor Parameters []
constexpr ::System::Net::TransportContext::TransportContext()   {
}
