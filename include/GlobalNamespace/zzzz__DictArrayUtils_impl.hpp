#pragma once
// IWYU pragma private; include "GlobalNamespace/DictArrayUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DictArrayUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::DictArrayUtils::TryGetOrAddList(::System::Collections::Generic::Dictionary_2<TKey,::System::Collections::Generic::List_1<TValue>*>*  dict, TKey  key, ::by_ref<::System::Collections::Generic::List_1<TValue>*>  list, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DictArrayUtils*>(),
                    {"TryGetOrAddList", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,::System::Collections::Generic::List_1<TValue>*>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<TValue>*>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dict, key, list, capacity);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::DictArrayUtils::TryGetOrAddArray(::System::Collections::Generic::Dictionary_2<TKey,::ArrayW<TValue>>*  dict, TKey  key, ::by_ref<::ArrayW<TValue>>  array, int32_t  size)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DictArrayUtils*>(),
                    {"TryGetOrAddArray", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,::ArrayW<TValue>>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<::ArrayW<TValue>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dict, key, array, size);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DictArrayUtils::DictArrayUtils()   {
}
