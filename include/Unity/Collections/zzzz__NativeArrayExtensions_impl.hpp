#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayExtensions.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArrayExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Unity::Collections::NativeArrayExtensions::Contains(::Unity::Collections::NativeArray_1<T>  array, U  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                    {"Contains", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Unity::Collections::NativeArrayExtensions::Contains(::GlobalNamespace::NativeArray_1_ReadOnly<T>  array, U  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                    {"Contains", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Unity::Collections::NativeArrayExtensions::IndexOf(void*  ptr, int32_t  length, U  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                    {"IndexOf", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeArrayExtensions::NativeArrayExtensions()   {
}
