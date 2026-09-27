#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/PolyShape_PolyEditMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyShape_PolyEditMode)
// Forward declare root types
namespace GlobalNamespace {
struct PolyShape_PolyEditMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PolyShape_PolyEditMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PolyShape_PolyEditMode, "UnityEngine.ProBuilder", "PolyShape/PolyEditMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.PolyShape/PolyEditMode
struct CORDL_TYPE PolyShape_PolyEditMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PolyShape_PolyEditMode_Unwrapped
enum struct __PolyShape_PolyEditMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Path = static_cast<int32_t>(0x1),
__E_Height = static_cast<int32_t>(0x2),
__E_Edit = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PolyShape_PolyEditMode_Unwrapped () const noexcept {
return static_cast<__PolyShape_PolyEditMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PolyShape_PolyEditMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PolyShape_PolyEditMode(int32_t  value__) noexcept;

/// @brief Field Edit value: I32(3)
static ::GlobalNamespace::PolyShape_PolyEditMode const Edit;

/// @brief Field Height value: I32(2)
static ::GlobalNamespace::PolyShape_PolyEditMode const Height;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PolyShape_PolyEditMode const None;

/// @brief Field Path value: I32(1)
static ::GlobalNamespace::PolyShape_PolyEditMode const Path;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PolyShape_PolyEditMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PolyShape_PolyEditMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
