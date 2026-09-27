#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeRingQueue_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeRingQueue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(),
                        {"Free", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
template<typename T>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Filled", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Write", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Read", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::UnsafeRingQueue_1(T*  Ptr, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator, int32_t  m_Capacity, int32_t  m_Filled, int32_t  m_Write, int32_t  m_Read) noexcept  {
this->Ptr = Ptr;
this->Allocator = Allocator;
this->m_Capacity = m_Capacity;
this->m_Filled = m_Filled;
this->m_Write = m_Write;
this->m_Read = m_Read;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::UnsafeRingQueue_1()   {
}
