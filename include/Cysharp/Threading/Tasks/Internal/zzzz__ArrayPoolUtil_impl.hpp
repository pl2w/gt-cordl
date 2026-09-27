#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayPoolUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPoolUtil_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPoolUtil_RentArray_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayPoolUtil::EnsureCapacity(::by_ref<::ArrayW<T>>  array, int32_t  index, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil*>(),
                    {"EnsureCapacity", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, pool);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Internal::ArrayPoolUtil::EnsureCapacityCore(::by_ref<::ArrayW<T>>  array, int32_t  index, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil*>(),
                    {"EnsureCapacityCore", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, pool);
}
template<typename T>
inline ::GlobalNamespace::ArrayPoolUtil_RentArray_1<T> Cysharp::Threading::Tasks::Internal::ArrayPoolUtil::Materialize(::System::Collections::Generic::IEnumerable_1<T>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil*>(),
                    {"Materialize", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::ArrayPoolUtil::ArrayPoolUtil()   {
}
