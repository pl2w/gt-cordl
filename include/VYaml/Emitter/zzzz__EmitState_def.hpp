#pragma once
// IWYU pragma private; include "VYaml/Emitter/EmitState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmitState)
// Forward declare root types
namespace VYaml::Emitter {
struct EmitState;
}
// Write type traits
MARK_VAL_T(::VYaml::Emitter::EmitState);
DEFINE_IL2CPP_CLASS(::VYaml::Emitter::EmitState, "VYaml.Emitter", "EmitState");
// Dependencies 
namespace VYaml::Emitter {
// Is value type: true
// CS Name: VYaml.Emitter.EmitState
struct CORDL_TYPE EmitState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EmitState_Unwrapped
enum struct __EmitState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BlockSequenceEntry = static_cast<int32_t>(0x1),
__E_BlockMappingKey = static_cast<int32_t>(0x2),
__E_BlockMappingValue = static_cast<int32_t>(0x3),
__E_FlowSequenceEntry = static_cast<int32_t>(0x4),
__E_FlowMappingKey = static_cast<int32_t>(0x5),
__E_FlowMappingValue = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EmitState_Unwrapped () const noexcept {
return static_cast<__EmitState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EmitState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EmitState(int32_t  value__) noexcept;

/// @brief Field BlockMappingKey value: I32(2)
static ::VYaml::Emitter::EmitState const BlockMappingKey;

/// @brief Field BlockMappingValue value: I32(3)
static ::VYaml::Emitter::EmitState const BlockMappingValue;

/// @brief Field BlockSequenceEntry value: I32(1)
static ::VYaml::Emitter::EmitState const BlockSequenceEntry;

/// @brief Field FlowMappingKey value: I32(5)
static ::VYaml::Emitter::EmitState const FlowMappingKey;

/// @brief Field FlowMappingValue value: I32(6)
static ::VYaml::Emitter::EmitState const FlowMappingValue;

/// @brief Field FlowSequenceEntry value: I32(4)
static ::VYaml::Emitter::EmitState const FlowSequenceEntry;

/// @brief Field None value: I32(0)
static ::VYaml::Emitter::EmitState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Emitter::EmitState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Emitter::EmitState) == 0x4, "Size mismatch!");

} // namespace end def VYaml::Emitter
