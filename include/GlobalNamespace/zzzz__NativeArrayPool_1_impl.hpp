#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeArrayPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NativeArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeArrayPool_1<T>::setStaticF__lookup(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>*, "_lookup", ::GlobalNamespace::NativeArrayPool_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>* GlobalNamespace::NativeArrayPool_1<T>::getStaticF__lookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>*, "_lookup", ::GlobalNamespace::NativeArrayPool_1<T>*>();
}
template<typename T>
inline void GlobalNamespace::NativeArrayPool_1<T>::OnQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArrayPool_1<T>*>(),
                        {"OnQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::NativeArrayPool_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArrayPool_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GlobalNamespace::NativeArrayPool_1<T>::Get(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArrayPool_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, length);
}
template<typename T>
inline void GlobalNamespace::NativeArrayPool_1<T>::Return(::Unity::Collections::NativeArray_1<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArrayPool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
template<typename T>
inline ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>* GlobalNamespace::NativeArrayPool_1<T>::GetCollectionForLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArrayPool_1<T>*>(),
                        {"GetCollectionForLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>(nullptr, ___internal_method, length);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeArrayPool_1<T>::NativeArrayPool_1()   {
}
