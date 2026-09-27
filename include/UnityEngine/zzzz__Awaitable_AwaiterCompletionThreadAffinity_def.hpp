#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaiterCompletionThreadAffinity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Awaitable_AwaiterCompletionThreadAffinity)
// Forward declare root types
namespace GlobalNamespace {
struct Awaitable_AwaiterCompletionThreadAffinity;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity, "UnityEngine", "Awaitable/AwaiterCompletionThreadAffinity");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaiterCompletionThreadAffinity
struct CORDL_TYPE Awaitable_AwaiterCompletionThreadAffinity {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Awaitable_AwaiterCompletionThreadAffinity_Unwrapped
enum struct __Awaitable_AwaiterCompletionThreadAffinity_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MainThread = static_cast<int32_t>(0x1),
__E_BackgroundThread = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Awaitable_AwaiterCompletionThreadAffinity_Unwrapped () const noexcept {
return static_cast<__Awaitable_AwaiterCompletionThreadAffinity_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_AwaiterCompletionThreadAffinity() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Awaitable_AwaiterCompletionThreadAffinity(int32_t  value__) noexcept;

/// @brief Field BackgroundThread value: I32(2)
static ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity const BackgroundThread;

/// @brief Field MainThread value: I32(1)
static ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity const MainThread;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
