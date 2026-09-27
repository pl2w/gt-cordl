#pragma once
// IWYU pragma private; include "Unity/Burst/Unsafe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__Unsafe_def.hpp"
template<typename T>
inline ::by_ref<T> Unity::Burst::Unsafe::AsRef(void*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Burst::Unsafe*>(),
                    {"AsRef", {::i2c::class_of<T>()}, {::i2c::type_of<void*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Unity::Burst::Unsafe::Unsafe()   {
}
