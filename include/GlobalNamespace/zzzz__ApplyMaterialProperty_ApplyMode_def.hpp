#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplyMaterialProperty_ApplyMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplyMaterialProperty_ApplyMode)
// Forward declare root types
namespace GlobalNamespace {
struct ApplyMaterialProperty_ApplyMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ApplyMaterialProperty_ApplyMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApplyMaterialProperty_ApplyMode, "", "ApplyMaterialProperty/ApplyMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ApplyMaterialProperty/ApplyMode
struct CORDL_TYPE ApplyMaterialProperty_ApplyMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApplyMaterialProperty_ApplyMode_Unwrapped
enum struct __ApplyMaterialProperty_ApplyMode_Unwrapped : int32_t {
__E_MaterialInstance = static_cast<int32_t>(0x0),
__E_MaterialPropertyBlock = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApplyMaterialProperty_ApplyMode_Unwrapped () const noexcept {
return static_cast<__ApplyMaterialProperty_ApplyMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApplyMaterialProperty_ApplyMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ApplyMaterialProperty_ApplyMode(int32_t  value__) noexcept;

/// @brief Field MaterialInstance value: I32(0)
static ::GlobalNamespace::ApplyMaterialProperty_ApplyMode const MaterialInstance;

/// @brief Field MaterialPropertyBlock value: I32(1)
static ::GlobalNamespace::ApplyMaterialProperty_ApplyMode const MaterialPropertyBlock;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{677};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_ApplyMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ApplyMaterialProperty_ApplyMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
