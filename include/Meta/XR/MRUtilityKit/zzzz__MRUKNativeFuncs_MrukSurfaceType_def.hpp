#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukSurfaceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukSurfaceType)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSurfaceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukSurfaceType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukSurfaceType
struct CORDL_TYPE MRUKNativeFuncs_MrukSurfaceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKNativeFuncs_MrukSurfaceType_Unwrapped
enum struct __MRUKNativeFuncs_MrukSurfaceType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Plane = static_cast<int32_t>(0x1),
__E_Volume = static_cast<int32_t>(0x2),
__E_Mesh = static_cast<int32_t>(0x4),
__E_All = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKNativeFuncs_MrukSurfaceType_Unwrapped () const noexcept {
return static_cast<__MRUKNativeFuncs_MrukSurfaceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukSurfaceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukSurfaceType(int32_t  value__) noexcept;

/// @brief Field All value: I32(7)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType const All;

/// @brief Field Mesh value: I32(4)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType const Mesh;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType const None;

/// @brief Field Plane value: I32(1)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType const Plane;

/// @brief Field Volume value: I32(2)
static ::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukSurfaceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
