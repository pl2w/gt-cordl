#pragma once
// IWYU pragma private; include "Fusion/RunnerVisibilityLink_ComponentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RunnerVisibilityLink_ComponentType)
// Forward declare root types
namespace GlobalNamespace {
struct RunnerVisibilityLink_ComponentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RunnerVisibilityLink_ComponentType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RunnerVisibilityLink_ComponentType, "Fusion", "RunnerVisibilityLink/ComponentType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.RunnerVisibilityLink/ComponentType
struct CORDL_TYPE RunnerVisibilityLink_ComponentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RunnerVisibilityLink_ComponentType_Unwrapped
enum struct __RunnerVisibilityLink_ComponentType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Renderer = static_cast<int32_t>(0x1),
__E_Behaviour = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RunnerVisibilityLink_ComponentType_Unwrapped () const noexcept {
return static_cast<__RunnerVisibilityLink_ComponentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RunnerVisibilityLink_ComponentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RunnerVisibilityLink_ComponentType(int32_t  value__) noexcept;

/// @brief Field Behaviour value: I32(2)
static ::GlobalNamespace::RunnerVisibilityLink_ComponentType const Behaviour;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RunnerVisibilityLink_ComponentType const None;

/// @brief Field Renderer value: I32(1)
static ::GlobalNamespace::RunnerVisibilityLink_ComponentType const Renderer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunnerVisibilityLink_ComponentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RunnerVisibilityLink_ComponentType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
