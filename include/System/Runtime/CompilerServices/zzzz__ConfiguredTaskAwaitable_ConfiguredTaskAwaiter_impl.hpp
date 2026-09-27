#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::*)(::System::Threading::Tasks::Task*, bool)>(&::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa1e6864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::*)()>(&::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa1e6898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::*)(::System::Action*)>(&::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa1e68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::*)(::System::Action*)>(&::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa1e68c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::*)()>(&::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::GetResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa1e68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::_ctor(::System::Threading::Tasks::Task*  task, bool  continueOnCapturedContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task, continueOnCapturedContext);
}
inline bool GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter(::System::Threading::Tasks::Task*  m_task, bool  m_continueOnCapturedContext) noexcept  {
this->m_task = m_task;
this->m_continueOnCapturedContext = m_continueOnCapturedContext;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter()   {
}
