#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::*)(::System::Threading::Tasks::Task*, bool)>(&::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa1e681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter (::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::*)()>(&::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa1e688c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::ConfiguredTaskAwaitable::_ctor(::System::Threading::Tasks::Task*  task, bool  continueOnCapturedContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task, continueOnCapturedContext);
}
inline ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaitable(::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  m_configuredTaskAwaiter) noexcept  {
this->m_configuredTaskAwaiter = m_configuredTaskAwaiter;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaitable()   {
}
