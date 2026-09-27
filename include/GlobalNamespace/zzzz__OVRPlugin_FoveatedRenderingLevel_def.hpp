#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FoveatedRenderingLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_FoveatedRenderingLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FoveatedRenderingLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel, "", "OVRPlugin/FoveatedRenderingLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FoveatedRenderingLevel
struct CORDL_TYPE OVRPlugin_FoveatedRenderingLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_FoveatedRenderingLevel_Unwrapped
enum struct __OVRPlugin_FoveatedRenderingLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_HighTop = static_cast<int32_t>(0x4),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_FoveatedRenderingLevel_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_FoveatedRenderingLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FoveatedRenderingLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FoveatedRenderingLevel(int32_t  value__) noexcept;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel const EnumSize;

/// @brief Field High value: I32(3)
static ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel const High;

/// @brief Field HighTop value: I32(4)
static ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel const HighTop;

/// @brief Field Low value: I32(1)
static ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel const Low;

/// @brief Field Medium value: I32(2)
static ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel const Medium;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
