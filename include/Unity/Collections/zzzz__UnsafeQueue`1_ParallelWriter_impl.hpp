#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueue`1_ParallelWriter.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue`1_ParallelWriter_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueData_def.hpp"
template<typename T>
inline void GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>::Enqueue(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AllocatorLabel", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>::UnsafeQueue_1_ParallelWriter(::Unity::Collections::UnsafeQueueData*  m_Buffer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  m_AllocatorLabel, int32_t  m_ThreadIndex) noexcept  {
this->m_Buffer = m_Buffer;
this->m_AllocatorLabel = m_AllocatorLabel;
this->m_ThreadIndex = m_ThreadIndex;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>::UnsafeQueue_1_ParallelWriter()   {
}
