#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeList_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
template<typename T>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline T Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::ElementAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"ElementAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::_ctor(T*  ptr, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::_ctor(int32_t  initialCapacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator, options);
}
template<typename T>
template<typename U>
requires(::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Create(int32_t  initialCapacity, ::by_ref<U>  allocator, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                    {"Create", {::i2c::class_of<U>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>(nullptr, ___internal_method, initialCapacity, allocator, options);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  listData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"Destroy", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listData);
}
template<typename T>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Resize(int32_t  length, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, options);
}
template<typename T>
template<typename U>
requires(::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::ResizeExact(::by_ref<U>  allocator, int32_t  newCapacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                    {"ResizeExact", {::i2c::class_of<U>()}, {::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator, newCapacity);
}
template<typename T>
template<typename U>
requires(::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::SetCapacity(::by_ref<U>  allocator, int32_t  capacity)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                    {"SetCapacity", {::i2c::class_of<U>()}, {::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<U>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator, capacity);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::SetCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"SetCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddNoResize(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"AddNoResize", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Add(/* [IsReadOnly] */ ::by_ref<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"Add", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddRange(void*  ptr, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"AddRange", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::RemoveAtSwapBack(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"RemoveAtSwapBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template<typename T>
inline ::System::Collections::IEnumerator* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
template<typename T>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::Unity::Collections::INativeList_1<T>*()  {
return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
template<typename T>
constexpr ::Unity::Collections::INativeList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___Unity__Collections__INativeList_1_T_()  {
return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::Unity::Collections::IIndexable_1<T>*()  {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___Unity__Collections__IIndexable_1_T_()  {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::UnsafeList_1(T*  Ptr, int32_t  m_length, int32_t  m_capacity, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator, int32_t  padding) noexcept  {
this->Ptr = Ptr;
this->m_length = m_length;
this->m_capacity = m_capacity;
this->Allocator = Allocator;
this->padding = padding;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::UnsafeList_1()   {
}
