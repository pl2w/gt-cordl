#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_OccluderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderer_OccluderPass)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderer_OccluderPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderer_OccluderPass);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderer_OccluderPass, "UnityEngine.Rendering.Universal", "UniversalRenderer/OccluderPass");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/OccluderPass
struct CORDL_TYPE UniversalRenderer_OccluderPass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UniversalRenderer_OccluderPass_Unwrapped
enum struct __UniversalRenderer_OccluderPass_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DepthPrepass = static_cast<int32_t>(0x1),
__E_ForwardOpaque = static_cast<int32_t>(0x2),
__E_GBuffer = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UniversalRenderer_OccluderPass_Unwrapped () const noexcept {
return static_cast<__UniversalRenderer_OccluderPass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_OccluderPass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderer_OccluderPass(int32_t  value__) noexcept;

/// @brief Field DepthPrepass value: I32(1)
static ::GlobalNamespace::UniversalRenderer_OccluderPass const DepthPrepass;

/// @brief Field ForwardOpaque value: I32(2)
static ::GlobalNamespace::UniversalRenderer_OccluderPass const ForwardOpaque;

/// @brief Field GBuffer value: I32(3)
static ::GlobalNamespace::UniversalRenderer_OccluderPass const GBuffer;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::UniversalRenderer_OccluderPass const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderer_OccluderPass, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderer_OccluderPass) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
