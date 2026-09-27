#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshAdd_MeshType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshAdd_MeshType)
// Forward declare root types
namespace GlobalNamespace {
struct NavmeshAdd_MeshType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NavmeshAdd_MeshType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NavmeshAdd_MeshType, "Pathfinding", "NavmeshAdd/MeshType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.NavmeshAdd/MeshType
struct CORDL_TYPE NavmeshAdd_MeshType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NavmeshAdd_MeshType_Unwrapped
enum struct __NavmeshAdd_MeshType_Unwrapped : int32_t {
__E_Rectangle = static_cast<int32_t>(0x0),
__E_CustomMesh = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavmeshAdd_MeshType_Unwrapped () const noexcept {
return static_cast<__NavmeshAdd_MeshType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NavmeshAdd_MeshType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavmeshAdd_MeshType(int32_t  value__) noexcept;

/// @brief Field CustomMesh value: I32(1)
static ::GlobalNamespace::NavmeshAdd_MeshType const CustomMesh;

/// @brief Field Rectangle value: I32(0)
static ::GlobalNamespace::NavmeshAdd_MeshType const Rectangle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NavmeshAdd_MeshType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NavmeshAdd_MeshType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
