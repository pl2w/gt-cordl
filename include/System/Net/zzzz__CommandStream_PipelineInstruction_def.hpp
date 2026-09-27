#pragma once
// IWYU pragma private; include "System/Net/CommandStream_PipelineInstruction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandStream_PipelineInstruction)
// Forward declare root types
namespace GlobalNamespace {
struct CommandStream_PipelineInstruction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandStream_PipelineInstruction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandStream_PipelineInstruction, "System.Net", "CommandStream/PipelineInstruction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.CommandStream/PipelineInstruction
struct CORDL_TYPE CommandStream_PipelineInstruction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommandStream_PipelineInstruction_Unwrapped
enum struct __CommandStream_PipelineInstruction_Unwrapped : int32_t {
__E_Abort = static_cast<int32_t>(0x0),
__E_Advance = static_cast<int32_t>(0x1),
__E_Pause = static_cast<int32_t>(0x2),
__E_Reread = static_cast<int32_t>(0x3),
__E_GiveStream = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommandStream_PipelineInstruction_Unwrapped () const noexcept {
return static_cast<__CommandStream_PipelineInstruction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommandStream_PipelineInstruction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandStream_PipelineInstruction(int32_t  value__) noexcept;

/// @brief Field Abort value: I32(0)
static ::GlobalNamespace::CommandStream_PipelineInstruction const Abort;

/// @brief Field Advance value: I32(1)
static ::GlobalNamespace::CommandStream_PipelineInstruction const Advance;

/// @brief Field GiveStream value: I32(4)
static ::GlobalNamespace::CommandStream_PipelineInstruction const GiveStream;

/// @brief Field Pause value: I32(2)
static ::GlobalNamespace::CommandStream_PipelineInstruction const Pause;

/// @brief Field Reread value: I32(3)
static ::GlobalNamespace::CommandStream_PipelineInstruction const Reread;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandStream_PipelineInstruction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandStream_PipelineInstruction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
