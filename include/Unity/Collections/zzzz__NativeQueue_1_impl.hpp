#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueue_1.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue`1_ParallelWriter_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue_1_def.hpp"
template<typename T>
inline void Unity::Collections::NativeQueue_1<T>::_ctor(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
template<typename T>
inline bool Unity::Collections::NativeQueue_1<T>::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline T Unity::Collections::NativeQueue_1<T>::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::NativeQueue_1<T>::Enqueue(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline T Unity::Collections::NativeQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline bool Unity::Collections::NativeQueue_1<T>::TryDequeue(::by_ref<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"TryDequeue", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template<typename T>
inline void Unity::Collections::NativeQueue_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline bool Unity::Collections::NativeQueue_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::NativeQueue_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::NativeQueue_1_ParallelWriter<T> Unity::Collections::NativeQueue_1<T>::AsParallelWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::NativeQueue_1<T>>(),
                        {"AsParallelWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NativeQueue_1_ParallelWriter<T>>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Unity::Collections::NativeQueue_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Unity::Collections::NativeQueue_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Queue", ty: "::Unity::Collections::UnsafeQueue_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::Collections::NativeQueue_1<T>::NativeQueue_1(::Unity::Collections::UnsafeQueue_1<T>*  m_Queue) noexcept  {
this->m_Queue = m_Queue;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::NativeQueue_1<T>::NativeQueue_1()   {
}
