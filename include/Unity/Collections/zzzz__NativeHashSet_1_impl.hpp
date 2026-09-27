#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashSet_1.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet`1_Enumerator_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet`1_ReadOnly_def.hpp"
template<typename T>
inline void Unity::Collections::NativeHashSet_1<T>::_ctor(int32_t  initialCapacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator);
}
template<typename T>
inline int32_t Unity::Collections::NativeHashSet_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline bool Unity::Collections::NativeHashSet_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::NativeHashSet_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::NativeHashSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool Unity::Collections::NativeHashSet_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template<typename T>
inline bool Unity::Collections::NativeHashSet_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template<typename T>
inline bool Unity::Collections::NativeHashSet_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template<typename T>
inline ::GlobalNamespace::NativeHashSet_1_Enumerator<T> Unity::Collections::NativeHashSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NativeHashSet_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::NativeHashSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Unity::Collections::NativeHashSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::NativeHashSet_1_ReadOnly<T> Unity::Collections::NativeHashSet_1<T>::AsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeHashSet_1<T>>(),
                        {"AsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NativeHashSet_1_ReadOnly<T>>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Unity::Collections::NativeHashSet_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Unity::Collections::NativeHashSet_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Unity::Collections::NativeHashSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::NativeHashSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Unity::Collections::NativeHashSet_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Unity::Collections::NativeHashSet_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::Collections::NativeHashSet_1<T>::NativeHashSet_1(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>*  m_Data) noexcept  {
this->m_Data = m_Data;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::NativeHashSet_1<T>::NativeHashSet_1()   {
}
