#pragma once
// IWYU pragma private; include "Oculus/Interaction/NativeMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__NativeMethods_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::NativeMethods.isdk_NativeComponent_Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::Oculus::Interaction::NativeMethods::isdk_NativeComponent_Activate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa48c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::NativeMethods*>(),
                        {"isdk_NativeComponent_Activate", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Oculus::Interaction::NativeMethods::isdk_NativeComponent_Activate(uint64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::NativeMethods*>(),
                        {"isdk_NativeComponent_Activate", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::NativeMethods::NativeMethods()   {
}
