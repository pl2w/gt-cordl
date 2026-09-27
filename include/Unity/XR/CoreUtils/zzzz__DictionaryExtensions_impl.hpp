#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/DictionaryExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__DictionaryExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> Unity::XR::CoreUtils::DictionaryExtensions::First(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::DictionaryExtensions*>(),
                    {"First", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(nullptr, ___internal_method, dictionary);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::DictionaryExtensions::DictionaryExtensions()   {
}
