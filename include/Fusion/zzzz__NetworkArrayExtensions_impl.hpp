#pragma once
// IWYU pragma private; include "Fusion/NetworkArrayExtensions.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkArrayExtensions_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::NetworkArrayExtensions::IndexOf(::Fusion::NetworkArray_1<T>  array, T  elem)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkArrayExtensions*>(),
                    {"IndexOf", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, elem);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::NetworkArrayExtensions::GetRef(::Fusion::NetworkArray_1<T>  array, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkArrayExtensions*>(),
                    {"GetRef", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkArrayExtensions::NetworkArrayExtensions()   {
}
