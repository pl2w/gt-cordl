#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Constants_CMSGameModeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Constants_CMSGameModeType)
// Forward declare root types
namespace GlobalNamespace {
struct Constants_CMSGameModeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Constants_CMSGameModeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Constants_CMSGameModeType, "GT_CustomMapSupportRuntime", "Constants/CMSGameModeType");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.Constants/CMSGameModeType
struct CORDL_TYPE Constants_CMSGameModeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Constants_CMSGameModeType_Unwrapped
enum struct __Constants_CMSGameModeType_Unwrapped : int32_t {
__E_Casual = static_cast<int32_t>(0x0),
__E_Infection = static_cast<int32_t>(0x1),
__E_HuntDown = static_cast<int32_t>(0x2),
__E_Paintbrawl = static_cast<int32_t>(0x3),
__E_Ambush = static_cast<int32_t>(0x4),
__E_FreezeTag = static_cast<int32_t>(0x5),
__E_Ghost = static_cast<int32_t>(0x6),
__E_Custom = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Constants_CMSGameModeType_Unwrapped () const noexcept {
return static_cast<__Constants_CMSGameModeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Constants_CMSGameModeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Constants_CMSGameModeType(int32_t  value__) noexcept;

/// @brief Field Ambush value: I32(4)
static ::GlobalNamespace::Constants_CMSGameModeType const Ambush;

/// @brief Field Casual value: I32(0)
static ::GlobalNamespace::Constants_CMSGameModeType const Casual;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::Constants_CMSGameModeType const Count;

/// @brief Field Custom value: I32(7)
static ::GlobalNamespace::Constants_CMSGameModeType const Custom;

/// @brief Field FreezeTag value: I32(5)
static ::GlobalNamespace::Constants_CMSGameModeType const FreezeTag;

/// @brief Field Ghost value: I32(6)
static ::GlobalNamespace::Constants_CMSGameModeType const Ghost;

/// @brief Field HuntDown value: I32(2)
static ::GlobalNamespace::Constants_CMSGameModeType const HuntDown;

/// @brief Field Infection value: I32(1)
static ::GlobalNamespace::Constants_CMSGameModeType const Infection;

/// @brief Field Paintbrawl value: I32(3)
static ::GlobalNamespace::Constants_CMSGameModeType const Paintbrawl;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Constants_CMSGameModeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Constants_CMSGameModeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
