#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaKeyboardBindingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindingExtensions_def.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindings_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaKeyboardBindingExtensions.FromNumberBindingToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::GorillaKeyboardBindings, ::by_ref<int32_t>)>(&::GorillaNetworking::GorillaKeyboardBindingExtensions::FromNumberBindingToInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c877b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaKeyboardBindingExtensions*>(),
                        {"FromNumberBindingToInt", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GorillaNetworking::GorillaKeyboardBindingExtensions::FromNumberBindingToInt(::GorillaNetworking::GorillaKeyboardBindings  binding, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaKeyboardBindingExtensions*>(),
                        {"FromNumberBindingToInt", {}, {::i2c::type_of<::GorillaNetworking::GorillaKeyboardBindings>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, binding, result);
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaKeyboardBindingExtensions::GorillaKeyboardBindingExtensions()   {
}
