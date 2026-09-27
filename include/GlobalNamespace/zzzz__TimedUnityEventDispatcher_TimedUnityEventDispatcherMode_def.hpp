#pragma once
// IWYU pragma private; include "GlobalNamespace/TimedUnityEventDispatcher_TimedUnityEventDispatcherMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimedUnityEventDispatcher_TimedUnityEventDispatcherMode)
// Forward declare root types
namespace GlobalNamespace {
struct TimedUnityEventDispatcher_TimedUnityEventDispatcherMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode, "", "TimedUnityEventDispatcher/TimedUnityEventDispatcherMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TimedUnityEventDispatcher/TimedUnityEventDispatcherMode
struct CORDL_TYPE TimedUnityEventDispatcher_TimedUnityEventDispatcherMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_Unwrapped
enum struct __TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_Unwrapped : int32_t {
__E_FIXED = static_cast<int32_t>(0x0),
__E_TITLE_DATA = static_cast<int32_t>(0x1),
__E_SCHEDULED_EVENT = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_Unwrapped () const noexcept {
return static_cast<__TimedUnityEventDispatcher_TimedUnityEventDispatcherMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimedUnityEventDispatcher_TimedUnityEventDispatcherMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimedUnityEventDispatcher_TimedUnityEventDispatcherMode(int32_t  value__) noexcept;

/// @brief Field FIXED value: I32(0)
static ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode const FIXED;

/// @brief Field SCHEDULED_EVENT value: I32(2)
static ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode const SCHEDULED_EVENT;

/// @brief Field TITLE_DATA value: I32(1)
static ::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode const TITLE_DATA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3673};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimedUnityEventDispatcher_TimedUnityEventDispatcherMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
