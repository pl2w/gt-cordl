#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoRenderer_RenderMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoRenderer_RenderMode)
// Forward declare root types
namespace GlobalNamespace {
struct GizmoRenderer_RenderMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GizmoRenderer_RenderMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GizmoRenderer_RenderMode, "", "GizmoRenderer/RenderMode");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GizmoRenderer/RenderMode
struct CORDL_TYPE GizmoRenderer_RenderMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GizmoRenderer_RenderMode_Unwrapped
enum struct __GizmoRenderer_RenderMode_Unwrapped : uint32_t {
__E_Never = static_cast<uint32_t>(0x0u),
__E_InEditor = static_cast<uint32_t>(0x1u),
__E_InBuild = static_cast<uint32_t>(0x2u),
__E_Always = static_cast<uint32_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GizmoRenderer_RenderMode_Unwrapped () const noexcept {
return static_cast<__GizmoRenderer_RenderMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GizmoRenderer_RenderMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GizmoRenderer_RenderMode(uint32_t  value__) noexcept;

/// @brief Field Always value: U32(3)
static ::GlobalNamespace::GizmoRenderer_RenderMode const Always;

/// @brief Field InBuild value: U32(2)
static ::GlobalNamespace::GizmoRenderer_RenderMode const InBuild;

/// @brief Field InEditor value: U32(1)
static ::GlobalNamespace::GizmoRenderer_RenderMode const InEditor;

/// @brief Field Never value: U32(0)
static ::GlobalNamespace::GizmoRenderer_RenderMode const Never;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GizmoRenderer_RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GizmoRenderer_RenderMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
