#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask`1_Awaiter.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::UniTask_1_Awaiter<T>::_ctor(/* [IsReadOnly] */ ::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
template<typename T>
inline bool GlobalNamespace::UniTask_1_Awaiter<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::UniTask_1_Awaiter<T>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UniTask_1_Awaiter<T>::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template<typename T>
inline void GlobalNamespace::UniTask_1_Awaiter<T>::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
template<typename T>
inline void GlobalNamespace::UniTask_1_Awaiter<T>::SourceOnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(),
                        {"SourceOnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation, state);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename T>
constexpr  GlobalNamespace::UniTask_1_Awaiter<T>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename T>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::UniTask_1_Awaiter<T>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename T>
constexpr  GlobalNamespace::UniTask_1_Awaiter<T>::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename T>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::UniTask_1_Awaiter<T>::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<T>::UniTask_1_Awaiter(::Cysharp::Threading::Tasks::UniTask_1<T>  task) noexcept  {
this->task = task;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<T>::UniTask_1_Awaiter()   {
}
