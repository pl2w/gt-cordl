#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAnchor_ComponentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKAnchor_ComponentType)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKAnchor_ComponentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKAnchor_ComponentType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKAnchor_ComponentType, "Meta.XR.MRUtilityKit", "MRUKAnchor/ComponentType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKAnchor/ComponentType
struct CORDL_TYPE MRUKAnchor_ComponentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKAnchor_ComponentType_Unwrapped
enum struct __MRUKAnchor_ComponentType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Plane = static_cast<int32_t>(0x1),
__E_Volume = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKAnchor_ComponentType_Unwrapped () const noexcept {
return static_cast<__MRUKAnchor_ComponentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKAnchor_ComponentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKAnchor_ComponentType(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::GlobalNamespace::MRUKAnchor_ComponentType const All;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MRUKAnchor_ComponentType const None;

/// @brief Field Plane value: I32(1)
static ::GlobalNamespace::MRUKAnchor_ComponentType const Plane;

/// @brief Field Volume value: I32(2)
static ::GlobalNamespace::MRUKAnchor_ComponentType const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKAnchor_ComponentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKAnchor_ComponentType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
