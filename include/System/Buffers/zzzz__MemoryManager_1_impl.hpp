#pragma once
// IWYU pragma private; include "System/Buffers/MemoryManager_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__MemoryManager_1_def.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/Buffers/zzzz__IPinnable_def.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template<typename T>
inline ::System::Memory_1<T> System::Buffers::MemoryManager_1<T>::get_Memory()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Memory_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Span_1<T> System::Buffers::MemoryManager_1<T>::GetSpan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<T>::Pin(int32_t  elementIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryHandle>(this, ___internal_method, elementIndex);
}
template<typename T>
inline void System::Buffers::MemoryManager_1<T>::Unpin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool System::Buffers::MemoryManager_1<T>::TryGetArray(::by_ref<::System::ArraySegment_1<T>>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segment);
}
template<typename T>
inline void System::Buffers::MemoryManager_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void System::Buffers::MemoryManager_1<T>::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Buffers::MemoryManager_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
/// @brief Convert operator to "::System::Buffers::IMemoryOwner_1<T>"
template<typename T>
constexpr  System::Buffers::MemoryManager_1<T>::operator ::System::Buffers::IMemoryOwner_1<T>*() noexcept {
return static_cast<::System::Buffers::IMemoryOwner_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Buffers::IMemoryOwner_1<T>"
template<typename T>
constexpr ::System::Buffers::IMemoryOwner_1<T>* System::Buffers::MemoryManager_1<T>::i___System__Buffers__IMemoryOwner_1_T_() noexcept {
return static_cast<::System::Buffers::IMemoryOwner_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  System::Buffers::MemoryManager_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* System::Buffers::MemoryManager_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Buffers::IPinnable"
template<typename T>
constexpr  System::Buffers::MemoryManager_1<T>::operator ::System::Buffers::IPinnable*() noexcept {
return static_cast<::System::Buffers::IPinnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Buffers::IPinnable"
template<typename T>
constexpr ::System::Buffers::IPinnable* System::Buffers::MemoryManager_1<T>::i___System__Buffers__IPinnable() noexcept {
return static_cast<::System::Buffers::IPinnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Buffers::MemoryManager_1<T>::MemoryManager_1()   {
}
