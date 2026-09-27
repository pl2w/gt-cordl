#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredValueTaskAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable)
namespace GlobalNamespace {
struct ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable");
// [IsReadOnly]
// Dependencies System.Threading.Tasks.ValueTask
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct CORDL_TYPE ConfiguredValueTaskAwaitable {
public:
// Declarations
using ConfiguredValueTaskAwaiter = ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter;

/// @brief Method GetAwaiter, addr 0xa1e4afc, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0xa1e4aec, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::ValueTask  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfiguredValueTaskAwaitable() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None, comment: None }]
constexpr ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask  _value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _value, offset: 0x0, size: 0x10, def value: None
 ::System::Threading::Tasks::ValueTask  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, _value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
