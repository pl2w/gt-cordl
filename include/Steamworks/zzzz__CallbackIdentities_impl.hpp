#pragma once
// IWYU pragma private; include "Steamworks/CallbackIdentities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__CallbackIdentities_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Steamworks::CallbackIdentities.GetCallbackIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Steamworks::CallbackIdentities::GetCallbackIdentity)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f310f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentities*>(),
                        {"GetCallbackIdentity", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Steamworks::CallbackIdentities::GetCallbackIdentity(::System::Type*  callbackStruct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentities*>(),
                        {"GetCallbackIdentity", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callbackStruct);
}
// Ctor Parameters []
constexpr ::Steamworks::CallbackIdentities::CallbackIdentities()   {
}
