#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisColumns_RenderPipelineType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthesisColumns_RenderPipelineType)
// Forward declare root types
namespace GlobalNamespace {
struct SynthesisColumns_RenderPipelineType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynthesisColumns_RenderPipelineType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns_RenderPipelineType, "", "SynthesisColumns/RenderPipelineType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynthesisColumns/RenderPipelineType
struct CORDL_TYPE SynthesisColumns_RenderPipelineType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SynthesisColumns_RenderPipelineType_Unwrapped
enum struct __SynthesisColumns_RenderPipelineType_Unwrapped : int32_t {
__E_Builtin = static_cast<int32_t>(0x0),
__E_SRP_URP = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SynthesisColumns_RenderPipelineType_Unwrapped () const noexcept {
return static_cast<__SynthesisColumns_RenderPipelineType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns_RenderPipelineType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SynthesisColumns_RenderPipelineType(int32_t  value__) noexcept;

/// @brief Field Builtin value: I32(0)
static ::GlobalNamespace::SynthesisColumns_RenderPipelineType const Builtin;

/// @brief Field SRP_URP value: I32(1)
static ::GlobalNamespace::SynthesisColumns_RenderPipelineType const SRP_URP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns_RenderPipelineType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns_RenderPipelineType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
