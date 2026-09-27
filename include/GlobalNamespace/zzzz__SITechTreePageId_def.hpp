#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreePageId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreePageId)
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreePageId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreePageId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreePageId, "", "SITechTreePageId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreePageId
struct CORDL_TYPE SITechTreePageId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SITechTreePageId_Unwrapped
enum struct __SITechTreePageId_Unwrapped : int32_t {
__E_Thruster = static_cast<int32_t>(0x0),
__E_Stilt = static_cast<int32_t>(0x1),
__E_Grenades = static_cast<int32_t>(0x2),
__E_Dash = static_cast<int32_t>(0x3),
__E_Platform = static_cast<int32_t>(0x4),
__E_TapTeleport = static_cast<int32_t>(0x5),
__E_Tentacle = static_cast<int32_t>(0x6),
__E_AirControl = static_cast<int32_t>(0x7),
__E_Prototype = static_cast<int32_t>(0x8),
__E_Unused9 = static_cast<int32_t>(0x9),
__E_Blaster = static_cast<int32_t>(0xa),
__E_Count = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SITechTreePageId_Unwrapped () const noexcept {
return static_cast<__SITechTreePageId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SITechTreePageId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreePageId(int32_t  value__) noexcept;

/// @brief Field AirControl value: I32(7)
static ::GlobalNamespace::SITechTreePageId const AirControl;

/// @brief Field Blaster value: I32(10)
static ::GlobalNamespace::SITechTreePageId const Blaster;

/// @brief Field Count value: I32(11)
static ::GlobalNamespace::SITechTreePageId const Count;

/// @brief Field Dash value: I32(3)
static ::GlobalNamespace::SITechTreePageId const Dash;

/// @brief Field Grenades value: I32(2)
static ::GlobalNamespace::SITechTreePageId const Grenades;

/// @brief Field Platform value: I32(4)
static ::GlobalNamespace::SITechTreePageId const Platform;

/// @brief Field Prototype value: I32(8)
static ::GlobalNamespace::SITechTreePageId const Prototype;

/// @brief Field Stilt value: I32(1)
static ::GlobalNamespace::SITechTreePageId const Stilt;

/// @brief Field TapTeleport value: I32(5)
static ::GlobalNamespace::SITechTreePageId const TapTeleport;

/// @brief Field Tentacle value: I32(6)
static ::GlobalNamespace::SITechTreePageId const Tentacle;

/// @brief Field Thruster value: I32(0)
static ::GlobalNamespace::SITechTreePageId const Thruster;

/// @brief Field Unused9 value: I32(9)
static ::GlobalNamespace::SITechTreePageId const Unused9;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreePageId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreePageId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
