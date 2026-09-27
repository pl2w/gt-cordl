#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ListExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
requires(::cordl_internals::default_constructor_constraint<T>)
inline ::System::Collections::Generic::List_1<T>* Unity::XR::CoreUtils::ListExtensions::Fill(::System::Collections::Generic::List_1<T>*  list, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::ListExtensions*>(),
                    {"Fill", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, list, count);
}
template<typename T>
inline void Unity::XR::CoreUtils::ListExtensions::EnsureCapacity(::System::Collections::Generic::List_1<T>*  list, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::ListExtensions*>(),
                    {"EnsureCapacity", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, capacity);
}
template<typename T>
inline void Unity::XR::CoreUtils::ListExtensions::SwapAtIndices(::System::Collections::Generic::List_1<T>*  list, int32_t  first, int32_t  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::ListExtensions*>(),
                    {"SwapAtIndices", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, first, second);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ListExtensions::ListExtensions()   {
}
