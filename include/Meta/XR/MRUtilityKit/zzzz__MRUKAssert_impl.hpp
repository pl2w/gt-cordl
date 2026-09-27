#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAssert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAssert_def.hpp"
template<typename T>
inline void Meta::XR::MRUtilityKit::MRUKAssert::AreEqual(T  expected, T  actual, ::StringW  message)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKAssert*>(),
                    {"AreEqual", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expected, actual, message);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKAssert::MRUKAssert()   {
}
