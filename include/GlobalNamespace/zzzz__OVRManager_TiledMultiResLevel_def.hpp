#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_TiledMultiResLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_TiledMultiResLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_TiledMultiResLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_TiledMultiResLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_TiledMultiResLevel, "", "OVRManager/TiledMultiResLevel");
// [Obsolete("Please use FoveatedRenderingLevel instead")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/TiledMultiResLevel
struct CORDL_TYPE OVRManager_TiledMultiResLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_TiledMultiResLevel_Unwrapped
enum struct __OVRManager_TiledMultiResLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_LMSLow = static_cast<int32_t>(0x1),
__E_LMSMedium = static_cast<int32_t>(0x2),
__E_LMSHigh = static_cast<int32_t>(0x3),
__E_LMSHighTop = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_TiledMultiResLevel_Unwrapped () const noexcept {
return static_cast<__OVRManager_TiledMultiResLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_TiledMultiResLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_TiledMultiResLevel(int32_t  value__) noexcept;

/// @brief Field LMSHigh value: I32(3)
static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSHigh;

/// @brief Field LMSHighTop value: I32(4)
static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSHighTop;

/// @brief Field LMSLow value: I32(1)
static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSLow;

/// @brief Field LMSMedium value: I32(2)
static ::GlobalNamespace::OVRManager_TiledMultiResLevel const LMSMedium;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::OVRManager_TiledMultiResLevel const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_TiledMultiResLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_TiledMultiResLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
