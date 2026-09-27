#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/BindingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingMode)
// Forward declare root types
namespace Unity::Cinemachine::TargetTracking {
struct BindingMode;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::TargetTracking::BindingMode);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetTracking::BindingMode, "Unity.Cinemachine.TargetTracking", "BindingMode");
// Dependencies 
namespace Unity::Cinemachine::TargetTracking {
// Is value type: true
// CS Name: Unity.Cinemachine.TargetTracking.BindingMode
struct CORDL_TYPE BindingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindingMode_Unwrapped
enum struct __BindingMode_Unwrapped : int32_t {
__E_LockToTargetOnAssign = static_cast<int32_t>(0x0),
__E_LockToTargetWithWorldUp = static_cast<int32_t>(0x1),
__E_LockToTargetNoRoll = static_cast<int32_t>(0x2),
__E_LockToTarget = static_cast<int32_t>(0x3),
__E_WorldSpace = static_cast<int32_t>(0x4),
__E_LazyFollow = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingMode_Unwrapped () const noexcept {
return static_cast<__BindingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BindingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BindingMode(int32_t  value__) noexcept;

/// @brief Field LazyFollow value: I32(5)
static ::Unity::Cinemachine::TargetTracking::BindingMode const LazyFollow;

/// @brief Field LockToTarget value: I32(3)
static ::Unity::Cinemachine::TargetTracking::BindingMode const LockToTarget;

/// @brief Field LockToTargetNoRoll value: I32(2)
static ::Unity::Cinemachine::TargetTracking::BindingMode const LockToTargetNoRoll;

/// @brief Field LockToTargetOnAssign value: I32(0)
static ::Unity::Cinemachine::TargetTracking::BindingMode const LockToTargetOnAssign;

/// @brief Field LockToTargetWithWorldUp value: I32(1)
static ::Unity::Cinemachine::TargetTracking::BindingMode const LockToTargetWithWorldUp;

/// @brief Field WorldSpace value: I32(4)
static ::Unity::Cinemachine::TargetTracking::BindingMode const WorldSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::TargetTracking::BindingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::TargetTracking::BindingMode) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine::TargetTracking
