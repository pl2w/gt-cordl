#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_TableEntry.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_TableEntry_def.hpp"
// Ctor Parameters [CppParam { name: "function", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AllocatorManager_TableEntry::AllocatorManager_TableEntry(::System::IntPtr  function, ::System::IntPtr  state) noexcept  {
this->function = function;
this->state = state;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AllocatorManager_TableEntry::AllocatorManager_TableEntry()   {
}
