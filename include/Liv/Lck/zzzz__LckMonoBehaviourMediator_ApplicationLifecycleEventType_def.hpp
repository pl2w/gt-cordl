#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonoBehaviourMediator_ApplicationLifecycleEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckMonoBehaviourMediator_ApplicationLifecycleEventType)
// Forward declare root types
namespace GlobalNamespace {
struct LckMonoBehaviourMediator_ApplicationLifecycleEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType, "Liv.Lck", "LckMonoBehaviourMediator/ApplicationLifecycleEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckMonoBehaviourMediator/ApplicationLifecycleEventType
struct CORDL_TYPE LckMonoBehaviourMediator_ApplicationLifecycleEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckMonoBehaviourMediator_ApplicationLifecycleEventType_Unwrapped
enum struct __LckMonoBehaviourMediator_ApplicationLifecycleEventType_Unwrapped : int32_t {
__E_Quit = static_cast<int32_t>(0x0),
__E_Pause = static_cast<int32_t>(0x1),
__E_Resume = static_cast<int32_t>(0x2),
__E_HMDIdle = static_cast<int32_t>(0x3),
__E_HMDActive = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckMonoBehaviourMediator_ApplicationLifecycleEventType_Unwrapped () const noexcept {
return static_cast<__LckMonoBehaviourMediator_ApplicationLifecycleEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckMonoBehaviourMediator_ApplicationLifecycleEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckMonoBehaviourMediator_ApplicationLifecycleEventType(int32_t  value__) noexcept;

/// @brief Field HMDActive value: I32(4)
static ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType const HMDActive;

/// @brief Field HMDIdle value: I32(3)
static ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType const HMDIdle;

/// @brief Field Pause value: I32(1)
static ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType const Pause;

/// @brief Field Quit value: I32(0)
static ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType const Quit;

/// @brief Field Resume value: I32(2)
static ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType const Resume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
