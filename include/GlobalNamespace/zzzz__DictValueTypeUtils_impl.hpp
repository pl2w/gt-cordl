#pragma once
// IWYU pragma private; include "GlobalNamespace/DictValueTypeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DictValueTypeUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<typename TKey,typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void GlobalNamespace::DictValueTypeUtils::TryGetOrAdd(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict, TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DictValueTypeUtils*>(),
                    {"TryGetOrAdd", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dict, key, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DictValueTypeUtils::DictValueTypeUtils()   {
}
