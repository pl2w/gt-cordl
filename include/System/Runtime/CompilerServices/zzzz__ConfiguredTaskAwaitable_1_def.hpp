#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable_1)
namespace GlobalNamespace {
template<typename TResult>
struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredTaskAwaitable_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1);
DEFINE_IL2CPP_GEN_CLASS(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1");
// [IsReadOnly]
// Dependencies System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace System::Runtime::CompilerServices {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1 {
public:
// Declarations
using ConfiguredTaskAwaiter = ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>;

/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult> GetAwaiter() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::Task_1<TResult>*  task, bool  continueOnCapturedContext) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfiguredTaskAwaitable_1() ;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value: None, comment: None }]
constexpr ConfiguredTaskAwaitable_1(::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_configuredTaskAwaiter, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<TResult>  m_configuredTaskAwaiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
