#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)(::System::Threading::Tasks::ValueTask)>(&::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1e4aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter (::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)()>(&::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa1e4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::_ctor(::System::Threading::Tasks::ValueTask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::ValueTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask  _value) noexcept  {
this->_value = _value;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaitable()   {
}
