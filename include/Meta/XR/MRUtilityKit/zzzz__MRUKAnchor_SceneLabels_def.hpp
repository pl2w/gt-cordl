#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKAnchor_SceneLabels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKAnchor_SceneLabels)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKAnchor_SceneLabels);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKAnchor_SceneLabels, "Meta.XR.MRUtilityKit", "MRUKAnchor/SceneLabels");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKAnchor/SceneLabels
struct CORDL_TYPE MRUKAnchor_SceneLabels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKAnchor_SceneLabels_Unwrapped
enum struct __MRUKAnchor_SceneLabels_Unwrapped : int32_t {
__E_FLOOR = static_cast<int32_t>(0x1),
__E_CEILING = static_cast<int32_t>(0x2),
__E_WALL_FACE = static_cast<int32_t>(0x4),
__E_TABLE = static_cast<int32_t>(0x8),
__E_COUCH = static_cast<int32_t>(0x10),
__E_DOOR_FRAME = static_cast<int32_t>(0x20),
__E_WINDOW_FRAME = static_cast<int32_t>(0x40),
__E_OTHER = static_cast<int32_t>(0x80),
__E_STORAGE = static_cast<int32_t>(0x100),
__E_BED = static_cast<int32_t>(0x200),
__E_SCREEN = static_cast<int32_t>(0x400),
__E_LAMP = static_cast<int32_t>(0x800),
__E_PLANT = static_cast<int32_t>(0x1000),
__E_WALL_ART = static_cast<int32_t>(0x2000),
__E_GLOBAL_MESH = static_cast<int32_t>(0x4000),
__E_INVISIBLE_WALL_FACE = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKAnchor_SceneLabels_Unwrapped () const noexcept {
return static_cast<__MRUKAnchor_SceneLabels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKAnchor_SceneLabels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKAnchor_SceneLabels(int32_t  value__) noexcept;

/// @brief Field BED value: I32(512)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const BED;

/// @brief Field CEILING value: I32(2)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const CEILING;

/// @brief Field COUCH value: I32(16)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const COUCH;

/// @brief Field DOOR_FRAME value: I32(32)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const DOOR_FRAME;

/// @brief Field FLOOR value: I32(1)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const FLOOR;

/// @brief Field GLOBAL_MESH value: I32(16384)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const GLOBAL_MESH;

/// @brief Field INVISIBLE_WALL_FACE value: I32(32768)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const INVISIBLE_WALL_FACE;

/// @brief Field LAMP value: I32(2048)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const LAMP;

/// @brief Field OTHER value: I32(128)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const OTHER;

/// @brief Field PLANT value: I32(4096)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const PLANT;

/// @brief Field SCREEN value: I32(1024)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const SCREEN;

/// @brief Field STORAGE value: I32(256)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const STORAGE;

/// @brief Field TABLE value: I32(8)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const TABLE;

/// @brief Field WALL_ART value: I32(8192)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const WALL_ART;

/// @brief Field WALL_FACE value: I32(4)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const WALL_FACE;

/// @brief Field WINDOW_FRAME value: I32(64)
static ::GlobalNamespace::MRUKAnchor_SceneLabels const WINDOW_FRAME;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKAnchor_SceneLabels, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKAnchor_SceneLabels) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
