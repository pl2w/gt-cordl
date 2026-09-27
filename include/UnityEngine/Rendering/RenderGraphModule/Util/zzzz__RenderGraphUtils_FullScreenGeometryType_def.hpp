#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils_FullScreenGeometryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtils_FullScreenGeometryType)
// Forward declare root types
namespace GlobalNamespace {
struct RenderGraphUtils_FullScreenGeometryType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/FullScreenGeometryType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/FullScreenGeometryType
struct CORDL_TYPE RenderGraphUtils_FullScreenGeometryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderGraphUtils_FullScreenGeometryType_Unwrapped
enum struct __RenderGraphUtils_FullScreenGeometryType_Unwrapped : int32_t {
__E_Mesh = static_cast<int32_t>(0x0),
__E_ProceduralTriangle = static_cast<int32_t>(0x1),
__E_ProceduralQuad = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderGraphUtils_FullScreenGeometryType_Unwrapped () const noexcept {
return static_cast<__RenderGraphUtils_FullScreenGeometryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphUtils_FullScreenGeometryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraphUtils_FullScreenGeometryType(int32_t  value__) noexcept;

/// @brief Field Mesh value: I32(0)
static ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType const Mesh;

/// @brief Field ProceduralQuad value: I32(2)
static ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType const ProceduralQuad;

/// @brief Field ProceduralTriangle value: I32(1)
static ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType const ProceduralTriangle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
