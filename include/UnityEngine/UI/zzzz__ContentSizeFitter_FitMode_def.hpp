#pragma once
// IWYU pragma private; include "UnityEngine/UI/ContentSizeFitter_FitMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentSizeFitter_FitMode)
// Forward declare root types
namespace GlobalNamespace {
struct ContentSizeFitter_FitMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContentSizeFitter_FitMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContentSizeFitter_FitMode, "UnityEngine.UI", "ContentSizeFitter/FitMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.ContentSizeFitter/FitMode
struct CORDL_TYPE ContentSizeFitter_FitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContentSizeFitter_FitMode_Unwrapped
enum struct __ContentSizeFitter_FitMode_Unwrapped : int32_t {
__E_Unconstrained = static_cast<int32_t>(0x0),
__E_MinSize = static_cast<int32_t>(0x1),
__E_PreferredSize = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContentSizeFitter_FitMode_Unwrapped () const noexcept {
return static_cast<__ContentSizeFitter_FitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContentSizeFitter_FitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContentSizeFitter_FitMode(int32_t  value__) noexcept;

/// @brief Field MinSize value: I32(1)
static ::GlobalNamespace::ContentSizeFitter_FitMode const MinSize;

/// @brief Field PreferredSize value: I32(2)
static ::GlobalNamespace::ContentSizeFitter_FitMode const PreferredSize;

/// @brief Field Unconstrained value: I32(0)
static ::GlobalNamespace::ContentSizeFitter_FitMode const Unconstrained;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContentSizeFitter_FitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContentSizeFitter_FitMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
