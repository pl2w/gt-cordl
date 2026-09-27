#pragma once
// IWYU pragma private; include "Unity/Collections/NativeListExtensions.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeListExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<U>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Unity::Collections::NativeListExtensions::Contains(::Unity::Collections::NativeList_1<T>  list, U  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                    {"Contains", {::i2c::class_of<T>(), ::i2c::class_of<U>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<U>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeListExtensions::NativeListExtensions()   {
}
