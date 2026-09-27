#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ArrayPoolUtil_RentArray_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPoolUtil_RentArray_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ArrayPool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::_ctor(::ArrayW<T>  array, int32_t  length, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, length, pool);
}
template<typename T>
inline void GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::DisposeManually(bool  clearArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>>(),
                        {"DisposeManually", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clearArray);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Array", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pool", ty: "::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::ArrayPoolUtil_RentArray_1(::ArrayW<T>  Array, int32_t  Length, ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>*  pool) noexcept  {
this->Array = Array;
this->Length = Length;
this->pool = pool;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ArrayPoolUtil_RentArray_1<T>::ArrayPoolUtil_RentArray_1()   {
}
