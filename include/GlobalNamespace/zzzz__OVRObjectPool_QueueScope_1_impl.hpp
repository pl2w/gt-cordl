#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_QueueScope_1.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_QueueScope_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline void GlobalNamespace::OVRObjectPool_QueueScope_1<T>::_ctor(::by_ref<::System::Collections::Generic::Queue_1<T>*>  queue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRObjectPool_QueueScope_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Queue_1<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queue);
}
template<typename T>
inline void GlobalNamespace::OVRObjectPool_QueueScope_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRObjectPool_QueueScope_1<T>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::OVRObjectPool_QueueScope_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_QueueScope_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>::OVRObjectPool_QueueScope_1(::System::Collections::Generic::Queue_1<T>*  _queue) noexcept  {
this->_queue = _queue;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>::OVRObjectPool_QueueScope_1()   {
}
