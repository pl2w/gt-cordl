#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable)
namespace GlobalNamespace {
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
// [IsReadOnly]
// Dependencies System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct CORDL_TYPE ConfiguredTaskAwaitable {
public:
// Declarations
using ConfiguredTaskAwaiter = ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter;

/// @brief Method GetAwaiter, addr 0xa1e688c, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0xa1e681c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::Task*  task, bool  continueOnCapturedContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfiguredTaskAwaitable() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ConfiguredTaskAwaitable(::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  m_configuredTaskAwaiter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  m_configuredTaskAwaiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, m_configuredTaskAwaiter) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
