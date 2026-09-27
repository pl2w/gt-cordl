#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_FixedFoveatedRenderingLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_FixedFoveatedRenderingLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_FixedFoveatedRenderingLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, "", "OVRManager/FixedFoveatedRenderingLevel");
// [Obsolete("Please use FoveatedRenderingLevel instead")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/FixedFoveatedRenderingLevel
struct CORDL_TYPE OVRManager_FixedFoveatedRenderingLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_FixedFoveatedRenderingLevel_Unwrapped
enum struct __OVRManager_FixedFoveatedRenderingLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_HighTop = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_FixedFoveatedRenderingLevel_Unwrapped () const noexcept {
return static_cast<__OVRManager_FixedFoveatedRenderingLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_FixedFoveatedRenderingLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_FixedFoveatedRenderingLevel(int32_t  value__) noexcept;

/// @brief Field High value: I32(3)
static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const High;

/// @brief Field HighTop value: I32(4)
static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const HighTop;

/// @brief Field Low value: I32(1)
static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const Low;

/// @brief Field Medium value: I32(2)
static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const Medium;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
