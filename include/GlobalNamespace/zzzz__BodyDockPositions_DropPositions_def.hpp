#pragma once
// IWYU pragma private; include "GlobalNamespace/BodyDockPositions_DropPositions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BodyDockPositions_DropPositions)
// Forward declare root types
namespace GlobalNamespace {
struct BodyDockPositions_DropPositions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BodyDockPositions_DropPositions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BodyDockPositions_DropPositions, "", "BodyDockPositions/DropPositions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BodyDockPositions/DropPositions
struct CORDL_TYPE BodyDockPositions_DropPositions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BodyDockPositions_DropPositions_Unwrapped
enum struct __BodyDockPositions_DropPositions_Unwrapped : int32_t {
__E_LeftArm = static_cast<int32_t>(0x1),
__E_RightArm = static_cast<int32_t>(0x2),
__E_Chest = static_cast<int32_t>(0x4),
__E_LeftBack = static_cast<int32_t>(0x8),
__E_RightBack = static_cast<int32_t>(0x10),
__E_MaxDropPostions = static_cast<int32_t>(0x5),
__E_All = static_cast<int32_t>(0x1f),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BodyDockPositions_DropPositions_Unwrapped () const noexcept {
return static_cast<__BodyDockPositions_DropPositions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BodyDockPositions_DropPositions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BodyDockPositions_DropPositions(int32_t  value__) noexcept;

/// @brief Field All value: I32(31)
static ::GlobalNamespace::BodyDockPositions_DropPositions const All;

/// @brief Field Chest value: I32(4)
static ::GlobalNamespace::BodyDockPositions_DropPositions const Chest;

/// @brief Field LeftArm value: I32(1)
static ::GlobalNamespace::BodyDockPositions_DropPositions const LeftArm;

/// @brief Field LeftBack value: I32(8)
static ::GlobalNamespace::BodyDockPositions_DropPositions const LeftBack;

/// @brief Field MaxDropPostions value: I32(5)
static ::GlobalNamespace::BodyDockPositions_DropPositions const MaxDropPostions;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::BodyDockPositions_DropPositions const None;

/// @brief Field RightArm value: I32(2)
static ::GlobalNamespace::BodyDockPositions_DropPositions const RightArm;

/// @brief Field RightBack value: I32(16)
static ::GlobalNamespace::BodyDockPositions_DropPositions const RightBack;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BodyDockPositions_DropPositions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BodyDockPositions_DropPositions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
