#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraAnchorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_CameraAnchorType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_CameraAnchorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_CameraAnchorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_CameraAnchorType, "", "OVRPlugin/CameraAnchorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/CameraAnchorType
struct CORDL_TYPE OVRPlugin_CameraAnchorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_CameraAnchorType_Unwrapped
enum struct __OVRPlugin_CameraAnchorType_Unwrapped : int32_t {
__E_CameraAnchorType_PreDefined = static_cast<int32_t>(0x0),
__E_CameraAnchorType_Custom = static_cast<int32_t>(0x1),
__E_CameraAnchorType_Count = static_cast<int32_t>(0x2),
__E_CameraAnchorType_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_CameraAnchorType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_CameraAnchorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_CameraAnchorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_CameraAnchorType(int32_t  value__) noexcept;

/// @brief Field CameraAnchorType_Count value: I32(2)
static ::GlobalNamespace::OVRPlugin_CameraAnchorType const CameraAnchorType_Count;

/// @brief Field CameraAnchorType_Custom value: I32(1)
static ::GlobalNamespace::OVRPlugin_CameraAnchorType const CameraAnchorType_Custom;

/// @brief Field CameraAnchorType_EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_CameraAnchorType const CameraAnchorType_EnumSize;

/// @brief Field CameraAnchorType_PreDefined value: I32(0)
static ::GlobalNamespace::OVRPlugin_CameraAnchorType const CameraAnchorType_PreDefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12051};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraAnchorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_CameraAnchorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
