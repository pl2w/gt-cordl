#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukLabel)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLabel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukLabel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukLabel, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukLabel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukLabel
struct CORDL_TYPE MRUKNativeFuncs_MrukLabel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKNativeFuncs_MrukLabel_Unwrapped
enum struct __MRUKNativeFuncs_MrukLabel_Unwrapped : int32_t {
__E_Floor = static_cast<int32_t>(0x1),
__E_Ceiling = static_cast<int32_t>(0x2),
__E_WallFace = static_cast<int32_t>(0x4),
__E_Table = static_cast<int32_t>(0x8),
__E_Couch = static_cast<int32_t>(0x10),
__E_DoorFrame = static_cast<int32_t>(0x20),
__E_WindowFrame = static_cast<int32_t>(0x40),
__E_Other = static_cast<int32_t>(0x80),
__E_Storage = static_cast<int32_t>(0x100),
__E_Bed = static_cast<int32_t>(0x200),
__E_Screen = static_cast<int32_t>(0x400),
__E_Lamp = static_cast<int32_t>(0x800),
__E_Plant = static_cast<int32_t>(0x1000),
__E_WallArt = static_cast<int32_t>(0x2000),
__E_SceneMesh = static_cast<int32_t>(0x4000),
__E_InvisibleWallFace = static_cast<int32_t>(0x8000),
__E_Unknown = static_cast<int32_t>(0x20000),
__E_InnerWallFace = static_cast<int32_t>(0x40000),
__E_Tabletop = static_cast<int32_t>(0x80000),
__E_SittingArea = static_cast<int32_t>(0x100000),
__E_SleepingArea = static_cast<int32_t>(0x200000),
__E_StorageTop = static_cast<int32_t>(0x400000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKNativeFuncs_MrukLabel_Unwrapped () const noexcept {
return static_cast<__MRUKNativeFuncs_MrukLabel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukLabel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukLabel(int32_t  value__) noexcept;

/// @brief Field Bed value: I32(512)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Bed;

/// @brief Field Ceiling value: I32(2)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Ceiling;

/// @brief Field Couch value: I32(16)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Couch;

/// @brief Field DoorFrame value: I32(32)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const DoorFrame;

/// @brief Field Floor value: I32(1)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Floor;

/// @brief Field InnerWallFace value: I32(262144)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const InnerWallFace;

/// @brief Field InvisibleWallFace value: I32(32768)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const InvisibleWallFace;

/// @brief Field Lamp value: I32(2048)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Lamp;

/// @brief Field Other value: I32(128)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Other;

/// @brief Field Plant value: I32(4096)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Plant;

/// @brief Field SceneMesh value: I32(16384)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const SceneMesh;

/// @brief Field Screen value: I32(1024)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Screen;

/// @brief Field SittingArea value: I32(1048576)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const SittingArea;

/// @brief Field SleepingArea value: I32(2097152)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const SleepingArea;

/// @brief Field Storage value: I32(256)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Storage;

/// @brief Field StorageTop value: I32(4194304)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const StorageTop;

/// @brief Field Table value: I32(8)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Table;

/// @brief Field Tabletop value: I32(524288)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Tabletop;

/// @brief Field Unknown value: I32(131072)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const Unknown;

/// @brief Field WallArt value: I32(8192)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const WallArt;

/// @brief Field WallFace value: I32(4)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const WallFace;

/// @brief Field WindowFrame value: I32(64)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLabel const WindowFrame;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25785};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukLabel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukLabel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
