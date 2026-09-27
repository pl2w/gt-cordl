#pragma once
// IWYU pragma private; include "System/Net/CommandStream_PipelineEntryFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandStream_PipelineEntryFlags)
// Forward declare root types
namespace GlobalNamespace {
struct CommandStream_PipelineEntryFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CommandStream_PipelineEntryFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandStream_PipelineEntryFlags, "System.Net", "CommandStream/PipelineEntryFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.CommandStream/PipelineEntryFlags
struct CORDL_TYPE CommandStream_PipelineEntryFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommandStream_PipelineEntryFlags_Unwrapped
enum struct __CommandStream_PipelineEntryFlags_Unwrapped : int32_t {
__E_UserCommand = static_cast<int32_t>(0x1),
__E_GiveDataStream = static_cast<int32_t>(0x2),
__E_CreateDataConnection = static_cast<int32_t>(0x4),
__E_DontLogParameter = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommandStream_PipelineEntryFlags_Unwrapped () const noexcept {
return static_cast<__CommandStream_PipelineEntryFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommandStream_PipelineEntryFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CommandStream_PipelineEntryFlags(int32_t  value__) noexcept;

/// @brief Field CreateDataConnection value: I32(4)
static ::GlobalNamespace::CommandStream_PipelineEntryFlags const CreateDataConnection;

/// @brief Field DontLogParameter value: I32(8)
static ::GlobalNamespace::CommandStream_PipelineEntryFlags const DontLogParameter;

/// @brief Field GiveDataStream value: I32(2)
static ::GlobalNamespace::CommandStream_PipelineEntryFlags const GiveDataStream;

/// @brief Field UserCommand value: I32(1)
static ::GlobalNamespace::CommandStream_PipelineEntryFlags const UserCommand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandStream_PipelineEntryFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandStream_PipelineEntryFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
