#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::*)(::System::Threading::Tasks::ValueTask)>(&::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1e4b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::*)()>(&::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa1e4b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::*)()>(&::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa1e4c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::*)(::System::Action*)>(&::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa1e4db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::*)(::System::Action*)>(&::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa1e4f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::_ctor(::System::Threading::Tasks::ValueTask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask  _value) noexcept  {
this->_value = _value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter()   {
}
