#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_Command.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuilder_Command)
// Forward declare root types
namespace GlobalNamespace {
struct CommandBuilder_Command;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandBuilder_Command);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandBuilder_Command, "Drawing", "CommandBuilder/Command");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.CommandBuilder/Command
struct CORDL_TYPE CommandBuilder_Command {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommandBuilder_Command_Unwrapped
enum struct __CommandBuilder_Command_Unwrapped : int32_t {
__E_PushColorInline = static_cast<int32_t>(0x100),
__E_PushColor = static_cast<int32_t>(0x0),
__E_PopColor = static_cast<int32_t>(0x1),
__E_PushMatrix = static_cast<int32_t>(0x2),
__E_PushSetMatrix = static_cast<int32_t>(0x3),
__E_PopMatrix = static_cast<int32_t>(0x4),
__E_Line = static_cast<int32_t>(0x5),
__E_Circle = static_cast<int32_t>(0x6),
__E_CircleXZ = static_cast<int32_t>(0x7),
__E_Disc = static_cast<int32_t>(0x8),
__E_DiscXZ = static_cast<int32_t>(0x9),
__E_SphereOutline = static_cast<int32_t>(0xa),
__E_Box = static_cast<int32_t>(0xb),
__E_WirePlane = static_cast<int32_t>(0xc),
__E_WireBox = static_cast<int32_t>(0xd),
__E_SolidTriangle = static_cast<int32_t>(0xe),
__E_PushPersist = static_cast<int32_t>(0xf),
__E_PopPersist = static_cast<int32_t>(0x10),
__E_Text = static_cast<int32_t>(0x11),
__E_Text3D = static_cast<int32_t>(0x12),
__E_PushLineWidth = static_cast<int32_t>(0x13),
__E_PopLineWidth = static_cast<int32_t>(0x14),
__E_CaptureState = static_cast<int32_t>(0x15),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommandBuilder_Command_Unwrapped () const noexcept {
return static_cast<__CommandBuilder_Command_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilder_Command() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandBuilder_Command(int32_t  value__) noexcept;

/// @brief Field Box value: I32(11)
static ::GlobalNamespace::CommandBuilder_Command const Box;

/// @brief Field CaptureState value: I32(21)
static ::GlobalNamespace::CommandBuilder_Command const CaptureState;

/// @brief Field Circle value: I32(6)
static ::GlobalNamespace::CommandBuilder_Command const Circle;

/// @brief Field CircleXZ value: I32(7)
static ::GlobalNamespace::CommandBuilder_Command const CircleXZ;

/// @brief Field Disc value: I32(8)
static ::GlobalNamespace::CommandBuilder_Command const Disc;

/// @brief Field DiscXZ value: I32(9)
static ::GlobalNamespace::CommandBuilder_Command const DiscXZ;

/// @brief Field Line value: I32(5)
static ::GlobalNamespace::CommandBuilder_Command const Line;

/// @brief Field PopColor value: I32(1)
static ::GlobalNamespace::CommandBuilder_Command const PopColor;

/// @brief Field PopLineWidth value: I32(20)
static ::GlobalNamespace::CommandBuilder_Command const PopLineWidth;

/// @brief Field PopMatrix value: I32(4)
static ::GlobalNamespace::CommandBuilder_Command const PopMatrix;

/// @brief Field PopPersist value: I32(16)
static ::GlobalNamespace::CommandBuilder_Command const PopPersist;

/// @brief Field PushColor value: I32(0)
static ::GlobalNamespace::CommandBuilder_Command const PushColor;

/// @brief Field PushColorInline value: I32(256)
static ::GlobalNamespace::CommandBuilder_Command const PushColorInline;

/// @brief Field PushLineWidth value: I32(19)
static ::GlobalNamespace::CommandBuilder_Command const PushLineWidth;

/// @brief Field PushMatrix value: I32(2)
static ::GlobalNamespace::CommandBuilder_Command const PushMatrix;

/// @brief Field PushPersist value: I32(15)
static ::GlobalNamespace::CommandBuilder_Command const PushPersist;

/// @brief Field PushSetMatrix value: I32(3)
static ::GlobalNamespace::CommandBuilder_Command const PushSetMatrix;

/// @brief Field SolidTriangle value: I32(14)
static ::GlobalNamespace::CommandBuilder_Command const SolidTriangle;

/// @brief Field SphereOutline value: I32(10)
static ::GlobalNamespace::CommandBuilder_Command const SphereOutline;

/// @brief Field Text value: I32(17)
static ::GlobalNamespace::CommandBuilder_Command const Text;

/// @brief Field Text3D value: I32(18)
static ::GlobalNamespace::CommandBuilder_Command const Text3D;

/// @brief Field WireBox value: I32(13)
static ::GlobalNamespace::CommandBuilder_Command const WireBox;

/// @brief Field WirePlane value: I32(12)
static ::GlobalNamespace::CommandBuilder_Command const WirePlane;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27695};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBuilder_Command, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandBuilder_Command) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
