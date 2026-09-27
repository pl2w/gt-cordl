#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSemanticLabels_Classification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSemanticLabels_Classification)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSemanticLabels_Classification);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSemanticLabels_Classification, "", "OVRSemanticLabels/Classification");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSemanticLabels/Classification
struct CORDL_TYPE OVRSemanticLabels_Classification {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSemanticLabels_Classification_Unwrapped
enum struct __OVRSemanticLabels_Classification_Unwrapped : int32_t {
__E_Floor = static_cast<int32_t>(0x0),
__E_Ceiling = static_cast<int32_t>(0x1),
__E_WallFace = static_cast<int32_t>(0x2),
__E_Table = static_cast<int32_t>(0x3),
__E_Couch = static_cast<int32_t>(0x4),
__E_DoorFrame = static_cast<int32_t>(0x5),
__E_WindowFrame = static_cast<int32_t>(0x6),
__E_Other = static_cast<int32_t>(0x7),
__E_Storage = static_cast<int32_t>(0x8),
__E_Bed = static_cast<int32_t>(0x9),
__E_Screen = static_cast<int32_t>(0xa),
__E_Lamp = static_cast<int32_t>(0xb),
__E_Plant = static_cast<int32_t>(0xc),
__E_WallArt = static_cast<int32_t>(0xd),
__E_SceneMesh = static_cast<int32_t>(0xe),
__E_InvisibleWallFace = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSemanticLabels_Classification_Unwrapped () const noexcept {
return static_cast<__OVRSemanticLabels_Classification_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSemanticLabels_Classification() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSemanticLabels_Classification(int32_t  value__) noexcept;

/// @brief Field Bed value: I32(9)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Bed;

/// @brief Field Ceiling value: I32(1)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Ceiling;

/// @brief Field Couch value: I32(4)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Couch;

/// @brief Field DoorFrame value: I32(5)
static ::GlobalNamespace::OVRSemanticLabels_Classification const DoorFrame;

/// @brief Field Floor value: I32(0)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Floor;

/// @brief Field InvisibleWallFace value: I32(15)
static ::GlobalNamespace::OVRSemanticLabels_Classification const InvisibleWallFace;

/// @brief Field Lamp value: I32(11)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Lamp;

/// @brief Field Other value: I32(7)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Other;

/// @brief Field Plant value: I32(12)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Plant;

/// @brief Field SceneMesh value: I32(14)
static ::GlobalNamespace::OVRSemanticLabels_Classification const SceneMesh;

/// @brief Field Screen value: I32(10)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Screen;

/// @brief Field Storage value: I32(8)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Storage;

/// @brief Field Table value: I32(3)
static ::GlobalNamespace::OVRSemanticLabels_Classification const Table;

/// @brief Field WallArt value: I32(13)
static ::GlobalNamespace::OVRSemanticLabels_Classification const WallArt;

/// @brief Field WallFace value: I32(2)
static ::GlobalNamespace::OVRSemanticLabels_Classification const WallFace;

/// @brief Field WindowFrame value: I32(6)
static ::GlobalNamespace::OVRSemanticLabels_Classification const WindowFrame;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11853};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSemanticLabels_Classification, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSemanticLabels_Classification) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
