#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXSpaceableBinder_BinderSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXSpaceableBinder_BinderSpace)
// Forward declare root types
namespace GlobalNamespace {
struct VFXSpaceableBinder_BinderSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VFXSpaceableBinder_BinderSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VFXSpaceableBinder_BinderSpace, "UnityEngine.VFX.Utility", "VFXSpaceableBinder/BinderSpace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXSpaceableBinder/BinderSpace
struct CORDL_TYPE VFXSpaceableBinder_BinderSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VFXSpaceableBinder_BinderSpace_Unwrapped
enum struct __VFXSpaceableBinder_BinderSpace_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_World = static_cast<int32_t>(0x1),
__E_Local = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VFXSpaceableBinder_BinderSpace_Unwrapped () const noexcept {
return static_cast<__VFXSpaceableBinder_BinderSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VFXSpaceableBinder_BinderSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VFXSpaceableBinder_BinderSpace(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::GlobalNamespace::VFXSpaceableBinder_BinderSpace const Automatic;

/// @brief Field Local value: I32(2)
static ::GlobalNamespace::VFXSpaceableBinder_BinderSpace const Local;

/// @brief Field World value: I32(1)
static ::GlobalNamespace::VFXSpaceableBinder_BinderSpace const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VFXSpaceableBinder_BinderSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VFXSpaceableBinder_BinderSpace) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
