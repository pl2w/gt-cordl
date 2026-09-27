#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/MethodImplOptions.hpp"
#include "System/Runtime/CompilerServices/zzzz__MethodImplOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Runtime::CompilerServices::MethodImplOptions::MethodImplOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::MethodImplOptions::MethodImplOptions()   {
}
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::Unmanaged{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::ForwardRef{static_cast<int32_t>(0x10)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::PreserveSig{static_cast<int32_t>(0x80)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::InternalCall{static_cast<int32_t>(0x1000)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::Synchronized{static_cast<int32_t>(0x20)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::NoInlining{static_cast<int32_t>(0x8)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::AggressiveInlining{static_cast<int32_t>(0x100)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::NoOptimization{static_cast<int32_t>(0x40)};
constexpr ::System::Runtime::CompilerServices::MethodImplOptions  System::Runtime::CompilerServices::MethodImplOptions::SecurityMitigations{static_cast<int32_t>(0x400)};
