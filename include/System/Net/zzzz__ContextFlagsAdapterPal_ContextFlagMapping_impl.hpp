#pragma once
// IWYU pragma private; include "System/Net/ContextFlagsAdapterPal_ContextFlagMapping.hpp"
#include "GlobalNamespace/zzzz__Interop_NetSecurityNative_GssFlags_impl.hpp"
#include "System/Net/zzzz__ContextFlagsPal_impl.hpp"
#include "System/Net/zzzz__ContextFlagsAdapterPal_ContextFlagMapping_def.hpp"
#include "GlobalNamespace/zzzz__Interop_NetSecurityNative_GssFlags_def.hpp"
#include "System/Net/zzzz__ContextFlagsPal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping::*)(::GlobalNamespace::NetSecurityNative_Interop_GssFlags, ::System::Net::ContextFlagsPal)>(&::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada8264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(), ::i2c::type_of<::System::Net::ContextFlagsPal>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping::_ctor(::GlobalNamespace::NetSecurityNative_Interop_GssFlags  gssFlag, ::System::Net::ContextFlagsPal  contextFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::NetSecurityNative_Interop_GssFlags>(), ::i2c::type_of<::System::Net::ContextFlagsPal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gssFlag, contextFlag);
}
// Ctor Parameters [CppParam { name: "GssFlags", ty: "::GlobalNamespace::NetSecurityNative_Interop_GssFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ContextFlag", ty: "::System::Net::ContextFlagsPal", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping::ContextFlagsAdapterPal_ContextFlagMapping(::GlobalNamespace::NetSecurityNative_Interop_GssFlags  GssFlags, ::System::Net::ContextFlagsPal  ContextFlag) noexcept  {
this->GssFlags = GssFlags;
this->ContextFlag = ContextFlag;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContextFlagsAdapterPal_ContextFlagMapping::ContextFlagsAdapterPal_ContextFlagMapping()   {
}
