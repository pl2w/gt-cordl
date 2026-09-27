#pragma once
// IWYU pragma private; include "System/Net/ContextFlagsAdapterPal.hpp"
#include "System/Net/zzzz__ContextFlagsAdapterPal_ContextFlagMapping_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ContextFlagsAdapterPal_def.hpp"
#include "GlobalNamespace/zzzz__Interop_NetSecurityNative_GssFlags_def.hpp"
#include "System/Net/zzzz__ContextFlagsAdapterPal_ContextFlagMapping_def.hpp"
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
//  Writing Method size for method: ::System::Net::ContextFlagsAdapterPal.GetContextFlagsPalFromInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ContextFlagsPal (*)(::GlobalNamespace::NetSecurityNative_Interop_GssFlags, bool)>(&::System::Net::ContextFlagsAdapterPal::GetContextFlagsPalFromInterop)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xada7ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextFlagsAdapterPal*>(),
                        {"GetContextFlagsPalFromInterop", {}, {::i2c::type_of<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextFlagsAdapterPal.GetInteropFromContextFlagsPal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetSecurityNative_Interop_GssFlags (*)(::System::Net::ContextFlagsPal, bool)>(&::System::Net::ContextFlagsAdapterPal::GetInteropFromContextFlagsPal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xada80bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextFlagsAdapterPal*>(),
                        {"GetInteropFromContextFlagsPal", {}, {::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::ContextFlagsAdapterPal::setStaticF_s_contextFlagMapping(::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>, "s_contextFlagMapping", ::System::Net::ContextFlagsAdapterPal*>(std::forward<::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>>(value));
}
inline ::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping> System::Net::ContextFlagsAdapterPal::getStaticF_s_contextFlagMapping()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>, "s_contextFlagMapping", ::System::Net::ContextFlagsAdapterPal*>();
}
inline ::System::Net::ContextFlagsPal System::Net::ContextFlagsAdapterPal::GetContextFlagsPalFromInterop(::GlobalNamespace::NetSecurityNative_Interop_GssFlags  gssFlags, bool  isServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextFlagsAdapterPal*>(),
                        {"GetContextFlagsPalFromInterop", {}, {::i2c::type_of<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ContextFlagsPal>(nullptr, ___internal_method, gssFlags, isServer);
}
inline ::GlobalNamespace::NetSecurityNative_Interop_GssFlags System::Net::ContextFlagsAdapterPal::GetInteropFromContextFlagsPal(::System::Net::ContextFlagsPal  flags, bool  isServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextFlagsAdapterPal*>(),
                        {"GetInteropFromContextFlagsPal", {}, {::i2c::type_of<::System::Net::ContextFlagsPal>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(nullptr, ___internal_method, flags, isServer);
}
// Ctor Parameters []
constexpr ::System::Net::ContextFlagsAdapterPal::ContextFlagsAdapterPal()   {
}
