#pragma once
// IWYU pragma private; include "GorillaNetworking/ExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__ExtensionMethods_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
inline void GorillaNetworking::ExtensionMethods::SafeInvoke(::System::Action_1<T>*  action, T  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::ExtensionMethods*>(),
                    {"SafeInvoke", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action, data);
}
template<typename TKey,typename TValue>
inline void GorillaNetworking::ExtensionMethods::AddOrUpdate(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict, TKey  key, TValue  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::ExtensionMethods*>(),
                    {"AddOrUpdate", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dict, key, value);
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ExtensionMethods::ExtensionMethods()   {
}
