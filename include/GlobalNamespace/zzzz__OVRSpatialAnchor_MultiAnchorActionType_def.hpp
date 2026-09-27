#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_MultiAnchorActionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_MultiAnchorActionType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorActionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType, "", "OVRSpatialAnchor/MultiAnchorActionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/MultiAnchorActionType
struct CORDL_TYPE OVRSpatialAnchor_MultiAnchorActionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSpatialAnchor_MultiAnchorActionType_Unwrapped
enum struct __OVRSpatialAnchor_MultiAnchorActionType_Unwrapped : int32_t {
__E_Save = static_cast<int32_t>(0x0),
__E_Share = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSpatialAnchor_MultiAnchorActionType_Unwrapped () const noexcept {
return static_cast<__OVRSpatialAnchor_MultiAnchorActionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_MultiAnchorActionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_MultiAnchorActionType(int32_t  value__) noexcept;

/// @brief Field Save value: I32(0)
static ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType const Save;

/// @brief Field Share value: I32(1)
static ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType const Share;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12462};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
