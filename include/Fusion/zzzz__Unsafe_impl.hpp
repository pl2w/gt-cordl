#pragma once
// IWYU pragma private; include "Fusion/Unsafe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Unsafe_def.hpp"
template<typename TFrom,typename TTo>
inline ::by_ref<TTo> Fusion::Unsafe::As(::by_ref<TFrom>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Unsafe*>(),
                    {"As", {::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>()}, {::i2c::type_of<::by_ref<TFrom>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFrom>(), ::i2c::class_of<TTo>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<TTo>>(nullptr, ___internal_method, source);
}
template<typename T>
inline void* Fusion::Unsafe::AsPointer(::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Unsafe*>(),
                    {"AsPointer", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Fusion::Unsafe::Unsafe()   {
}
