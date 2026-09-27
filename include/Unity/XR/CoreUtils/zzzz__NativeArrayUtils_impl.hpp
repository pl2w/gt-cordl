#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/NativeArrayUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__NativeArrayUtils_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Unity::XR::CoreUtils::NativeArrayUtils::EnsureCapacity(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, int32_t  capacity, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::NativeArrayUtils*>(),
                    {"EnsureCapacity", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, capacity, allocator, options);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::NativeArrayUtils::NativeArrayUtils()   {
}
