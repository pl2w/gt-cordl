#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeCollectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NativeCollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::ArrayW<T> GlobalNamespace::NativeCollectionExtensions::ToArray(::Unity::Collections::NativeList_1<T>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NativeCollectionExtensions*>(),
                    {"ToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::NativeCollectionExtensions::ToList(::Unity::Collections::NativeList_1<T>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NativeCollectionExtensions*>(),
                    {"ToList", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeList_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeCollectionExtensions::NativeCollectionExtensions()   {
}
