#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SerializationHelpers_CoordinateSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationHelpers_CoordinateSystem)
// Forward declare root types
namespace GlobalNamespace {
struct SerializationHelpers_CoordinateSystem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializationHelpers_CoordinateSystem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializationHelpers_CoordinateSystem, "Meta.XR.MRUtilityKit", "SerializationHelpers/CoordinateSystem");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// [Obsolete("Coordinate system is now obsolete, JSON files are now always serialized in OpenXR coordinate system")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SerializationHelpers/CoordinateSystem
struct CORDL_TYPE SerializationHelpers_CoordinateSystem {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SerializationHelpers_CoordinateSystem_Unwrapped
enum struct __SerializationHelpers_CoordinateSystem_Unwrapped : int32_t {
__E_Unity = static_cast<int32_t>(0x0),
__E_Unreal = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SerializationHelpers_CoordinateSystem_Unwrapped () const noexcept {
return static_cast<__SerializationHelpers_CoordinateSystem_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SerializationHelpers_CoordinateSystem() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializationHelpers_CoordinateSystem(int32_t  value__) noexcept;

/// @brief Field Unity value: I32(0)
static ::GlobalNamespace::SerializationHelpers_CoordinateSystem const Unity;

/// @brief Field Unreal value: I32(1)
static ::GlobalNamespace::SerializationHelpers_CoordinateSystem const Unreal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25899};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializationHelpers_CoordinateSystem, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializationHelpers_CoordinateSystem) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
