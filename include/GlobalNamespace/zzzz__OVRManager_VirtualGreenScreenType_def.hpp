#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_VirtualGreenScreenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_VirtualGreenScreenType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_VirtualGreenScreenType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_VirtualGreenScreenType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_VirtualGreenScreenType, "", "OVRManager/VirtualGreenScreenType");
// [Obsolete("Deprecated", false)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/VirtualGreenScreenType
struct CORDL_TYPE OVRManager_VirtualGreenScreenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_VirtualGreenScreenType_Unwrapped
enum struct __OVRManager_VirtualGreenScreenType_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_OuterBoundary = static_cast<int32_t>(0x1),
__E_PlayArea = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_VirtualGreenScreenType_Unwrapped () const noexcept {
return static_cast<__OVRManager_VirtualGreenScreenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_VirtualGreenScreenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_VirtualGreenScreenType(int32_t  value__) noexcept;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::OVRManager_VirtualGreenScreenType const Off;

/// @brief Field OuterBoundary value: I32(1)
static ::GlobalNamespace::OVRManager_VirtualGreenScreenType const OuterBoundary;

/// @brief Field PlayArea value: I32(2)
static ::GlobalNamespace::OVRManager_VirtualGreenScreenType const PlayArea;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_VirtualGreenScreenType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_VirtualGreenScreenType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
