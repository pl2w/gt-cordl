#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceComponentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceComponentType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceComponentType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceComponentType, "", "OVRPlugin/SpaceComponentType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceComponentType
struct CORDL_TYPE OVRPlugin_SpaceComponentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_SpaceComponentType_Unwrapped
enum struct __OVRPlugin_SpaceComponentType_Unwrapped : int32_t {
__E_Locatable = static_cast<int32_t>(0x0),
__E_Storable = static_cast<int32_t>(0x1),
__E_Sharable = static_cast<int32_t>(0x2),
__E_Bounded2D = static_cast<int32_t>(0x3),
__E_Bounded3D = static_cast<int32_t>(0x4),
__E_SemanticLabels = static_cast<int32_t>(0x5),
__E_RoomLayout = static_cast<int32_t>(0x6),
__E_SpaceContainer = static_cast<int32_t>(0x7),
__E_MarkerPayload = static_cast<int32_t>(0x3ba39400),
__E_TriangleMesh = static_cast<int32_t>(0x3b9ee4c8),
__E_DynamicObject = static_cast<int32_t>(0x3b9f2f07),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SpaceComponentType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SpaceComponentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceComponentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceComponentType(int32_t  value__) noexcept;

/// @brief Field Bounded2D value: I32(3)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const Bounded2D;

/// @brief Field Bounded3D value: I32(4)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const Bounded3D;

/// @brief Field DynamicObject value: I32(1000288007)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const DynamicObject;

/// @brief Field Locatable value: I32(0)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const Locatable;

/// @brief Field MarkerPayload value: I32(1000576000)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const MarkerPayload;

/// @brief Field RoomLayout value: I32(6)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const RoomLayout;

/// @brief Field SemanticLabels value: I32(5)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const SemanticLabels;

/// @brief Field Sharable value: I32(2)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const Sharable;

/// @brief Field SpaceContainer value: I32(7)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const SpaceContainer;

/// @brief Field Storable value: I32(1)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const Storable;

/// @brief Field TriangleMesh value: I32(1000269000)
static ::GlobalNamespace::OVRPlugin_SpaceComponentType const TriangleMesh;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceComponentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceComponentType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
