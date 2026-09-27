#pragma once
// IWYU pragma private; include "Fusion/FixedArray.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FixedArray_def.hpp"
#include "Fusion/zzzz__FixedArray_1_def.hpp"
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Fusion::FixedArray_1<T> Fusion::FixedArray::CreateFromFieldSequence(::by_ref<T>  firstField, ::by_ref<T>  lastField)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FixedArray*>(),
                    {"CreateFromFieldSequence", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FixedArray_1<T>>(nullptr, ___internal_method, firstField, lastField);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Fusion::FixedArray_1<T> Fusion::FixedArray::Create(::by_ref<T>  firstField, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FixedArray*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FixedArray_1<T>>(nullptr, ___internal_method, firstField, length);
}
template<typename TActual,typename TAdapted>
requires(::cordl_internals::value_type_constraint<TActual> && ::cordl_internals::default_constructor_constraint<TActual> && ::cordl_internals::value_type_constraint<TAdapted> && ::cordl_internals::default_constructor_constraint<TAdapted>)
inline ::Fusion::FixedArray_1<TAdapted> Fusion::FixedArray::Create(::by_ref<TActual>  firstField, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FixedArray*>(),
                    {"Create", {::i2c::class_of<TActual>(), ::i2c::class_of<TAdapted>()}, {::i2c::type_of<::by_ref<TActual>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TActual>(), ::i2c::class_of<TAdapted>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FixedArray_1<TAdapted>>(nullptr, ___internal_method, firstField, length);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::FixedArray::IndexOf(::Fusion::FixedArray_1<T>  array, T  elem)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FixedArray*>(),
                    {"IndexOf", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::FixedArray_1<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, elem);
}
// Ctor Parameters []
constexpr ::Fusion::FixedArray::FixedArray()   {
}
