#pragma once
// IWYU pragma private; include "UnityEngine/MainThreadAwaitable.hpp"
#include "UnityEngine/zzzz__MainThreadAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::MainThreadAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MainThreadAwaitable::*)(::System::Threading::SynchronizationContext*, int32_t)>(&::UnityEngine::MainThreadAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5d9624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MainThreadAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MainThreadAwaitable (::UnityEngine::MainThreadAwaitable::*)()>(&::UnityEngine::MainThreadAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5db6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MainThreadAwaitable.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::MainThreadAwaitable::*)()>(&::UnityEngine::MainThreadAwaitable::get_IsCompleted)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb5db708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MainThreadAwaitable.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MainThreadAwaitable::*)()>(&::UnityEngine::MainThreadAwaitable::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5db73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MainThreadAwaitable.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MainThreadAwaitable::*)(::System::Action*)>(&::UnityEngine::MainThreadAwaitable::OnCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb5db740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MainThreadAwaitable.DoOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::MainThreadAwaitable::DoOnCompleted)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5db7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"DoOnCompleted", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::MainThreadAwaitable::_ctor(::System::Threading::SynchronizationContext*  syncContext, int32_t  mainThreadId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, syncContext, mainThreadId);
}
inline ::UnityEngine::MainThreadAwaitable UnityEngine::MainThreadAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MainThreadAwaitable>(*this, ___internal_method);
}
inline bool UnityEngine::MainThreadAwaitable::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::MainThreadAwaitable::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::MainThreadAwaitable::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void UnityEngine::MainThreadAwaitable::DoOnCompleted(::System::Object*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::MainThreadAwaitable>(),
                        {"DoOnCompleted", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  UnityEngine::MainThreadAwaitable::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* UnityEngine::MainThreadAwaitable::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mainThreadId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::MainThreadAwaitable::MainThreadAwaitable(::System::Threading::SynchronizationContext*  _synchronizationContext, int32_t  _mainThreadId) noexcept  {
this->_synchronizationContext = _synchronizationContext;
this->_mainThreadId = _mainThreadId;
}
// Ctor Parameters []
constexpr ::UnityEngine::MainThreadAwaitable::MainThreadAwaitable()   {
}
