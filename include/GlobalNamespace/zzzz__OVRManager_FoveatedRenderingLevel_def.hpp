#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_FoveatedRenderingLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_FoveatedRenderingLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_FoveatedRenderingLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_FoveatedRenderingLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_FoveatedRenderingLevel, "", "OVRManager/FoveatedRenderingLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/FoveatedRenderingLevel
struct CORDL_TYPE OVRManager_FoveatedRenderingLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_FoveatedRenderingLevel_Unwrapped
enum struct __OVRManager_FoveatedRenderingLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_HighTop = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_FoveatedRenderingLevel_Unwrapped () const noexcept {
return static_cast<__OVRManager_FoveatedRenderingLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_FoveatedRenderingLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_FoveatedRenderingLevel(int32_t  value__) noexcept;

/// @brief Field High value: I32(3)
static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const High;

/// @brief Field HighTop value: I32(4)
static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const HighTop;

/// @brief Field Low value: I32(1)
static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const Low;

/// @brief Field Medium value: I32(2)
static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const Medium;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::OVRManager_FoveatedRenderingLevel const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_FoveatedRenderingLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
