#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionManager_RoomFXType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SuperInfectionManager_RoomFXType)
// Forward declare root types
namespace GlobalNamespace {
struct SuperInfectionManager_RoomFXType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SuperInfectionManager_RoomFXType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionManager_RoomFXType, "", "SuperInfectionManager/RoomFXType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SuperInfectionManager/RoomFXType
struct CORDL_TYPE SuperInfectionManager_RoomFXType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SuperInfectionManager_RoomFXType_Unwrapped
enum struct __SuperInfectionManager_RoomFXType_Unwrapped : int32_t {
__E_Underwater = static_cast<int32_t>(0x0),
__E_LunarMode = static_cast<int32_t>(0x1),
__E_ConstLowG = static_cast<int32_t>(0x2),
__E_Bouncy = static_cast<int32_t>(0x3),
__E_Supercharge = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SuperInfectionManager_RoomFXType_Unwrapped () const noexcept {
return static_cast<__SuperInfectionManager_RoomFXType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionManager_RoomFXType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SuperInfectionManager_RoomFXType(int32_t  value__) noexcept;

/// @brief Field Bouncy value: I32(3)
static ::GlobalNamespace::SuperInfectionManager_RoomFXType const Bouncy;

/// @brief Field ConstLowG value: I32(2)
static ::GlobalNamespace::SuperInfectionManager_RoomFXType const ConstLowG;

/// @brief Field LunarMode value: I32(1)
static ::GlobalNamespace::SuperInfectionManager_RoomFXType const LunarMode;

/// @brief Field Supercharge value: I32(4)
static ::GlobalNamespace::SuperInfectionManager_RoomFXType const Supercharge;

/// @brief Field Underwater value: I32(0)
static ::GlobalNamespace::SuperInfectionManager_RoomFXType const Underwater;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionManager_RoomFXType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionManager_RoomFXType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
