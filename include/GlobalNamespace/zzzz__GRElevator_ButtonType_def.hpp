#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevator_ButtonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRElevator_ButtonType)
// Forward declare root types
namespace GlobalNamespace {
struct GRElevator_ButtonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRElevator_ButtonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevator_ButtonType, "", "GRElevator/ButtonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRElevator/ButtonType
struct CORDL_TYPE GRElevator_ButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRElevator_ButtonType_Unwrapped
enum struct __GRElevator_ButtonType_Unwrapped : int32_t {
__E_Mall = static_cast<int32_t>(0x1),
__E_City = static_cast<int32_t>(0x2),
__E_GhostReactor = static_cast<int32_t>(0x3),
__E_Open = static_cast<int32_t>(0x4),
__E_Close = static_cast<int32_t>(0x5),
__E_Summon = static_cast<int32_t>(0x6),
__E_MonkeBlocks = static_cast<int32_t>(0x7),
__E_VIMExperience1 = static_cast<int32_t>(0x8),
__E_VIMExperience2 = static_cast<int32_t>(0x9),
__E_VIMExperience3 = static_cast<int32_t>(0xa),
__E_VIMExperience4 = static_cast<int32_t>(0xb),
__E_GhostEntrance = static_cast<int32_t>(0xc),
__E_Count = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRElevator_ButtonType_Unwrapped () const noexcept {
return static_cast<__GRElevator_ButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRElevator_ButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRElevator_ButtonType(int32_t  value__) noexcept;

/// @brief Field City value: I32(2)
static ::GlobalNamespace::GRElevator_ButtonType const City;

/// @brief Field Close value: I32(5)
static ::GlobalNamespace::GRElevator_ButtonType const Close;

/// @brief Field Count value: I32(13)
static ::GlobalNamespace::GRElevator_ButtonType const Count;

/// @brief Field GhostEntrance value: I32(12)
static ::GlobalNamespace::GRElevator_ButtonType const GhostEntrance;

/// @brief Field GhostReactor value: I32(3)
static ::GlobalNamespace::GRElevator_ButtonType const GhostReactor;

/// @brief Field Mall value: I32(1)
static ::GlobalNamespace::GRElevator_ButtonType const Mall;

/// @brief Field MonkeBlocks value: I32(7)
static ::GlobalNamespace::GRElevator_ButtonType const MonkeBlocks;

/// @brief Field Open value: I32(4)
static ::GlobalNamespace::GRElevator_ButtonType const Open;

/// @brief Field Summon value: I32(6)
static ::GlobalNamespace::GRElevator_ButtonType const Summon;

/// @brief Field VIMExperience1 value: I32(8)
static ::GlobalNamespace::GRElevator_ButtonType const VIMExperience1;

/// @brief Field VIMExperience2 value: I32(9)
static ::GlobalNamespace::GRElevator_ButtonType const VIMExperience2;

/// @brief Field VIMExperience3 value: I32(10)
static ::GlobalNamespace::GRElevator_ButtonType const VIMExperience3;

/// @brief Field VIMExperience4 value: I32(11)
static ::GlobalNamespace::GRElevator_ButtonType const VIMExperience4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1913};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevator_ButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevator_ButtonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
