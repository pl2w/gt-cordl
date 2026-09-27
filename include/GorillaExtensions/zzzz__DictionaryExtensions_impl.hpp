#pragma once
// IWYU pragma private; include "GorillaExtensions/DictionaryExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__DictionaryExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
template<typename TKey,typename TValue>
requires(::cordl_internals::default_constructor_constraint<TValue>)
inline TValue GorillaExtensions::DictionaryExtensions::GetOrCreate(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dict, TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::DictionaryExtensions*>(),
                    {"GetOrCreate", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(), ::i2c::type_of<TKey>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, dict, key);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::DictionaryExtensions::DictionaryExtensions()   {
}
