#pragma once
// IWYU pragma private; include "System/Threading/ThreadLocal`1_LinkedSlotVolatile.hpp"
#include "System/Threading/zzzz__ThreadLocal`1_LinkedSlotVolatile_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::ThreadLocal_1_LinkedSlot<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ThreadLocal_1_LinkedSlotVolatile<T>::ThreadLocal_1_LinkedSlotVolatile(::System::Threading::ThreadLocal_1_LinkedSlot<T>*  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ThreadLocal_1_LinkedSlotVolatile<T>::ThreadLocal_1_LinkedSlotVolatile()   {
}
