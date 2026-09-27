#pragma once
// IWYU pragma private; include "Unity/Cinemachine/OutputChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OutputChannels)
// Forward declare root types
namespace Unity::Cinemachine {
struct OutputChannels;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::OutputChannels);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::OutputChannels, "Unity.Cinemachine", "OutputChannels");
// [Flags]
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.OutputChannels
struct CORDL_TYPE OutputChannels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OutputChannels_Unwrapped
enum struct __OutputChannels_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x1),
__E_Channel01 = static_cast<int32_t>(0x2),
__E_Channel02 = static_cast<int32_t>(0x4),
__E_Channel03 = static_cast<int32_t>(0x8),
__E_Channel04 = static_cast<int32_t>(0x10),
__E_Channel05 = static_cast<int32_t>(0x20),
__E_Channel06 = static_cast<int32_t>(0x40),
__E_Channel07 = static_cast<int32_t>(0x80),
__E_Channel08 = static_cast<int32_t>(0x100),
__E_Channel09 = static_cast<int32_t>(0x200),
__E_Channel10 = static_cast<int32_t>(0x400),
__E_Channel11 = static_cast<int32_t>(0x800),
__E_Channel12 = static_cast<int32_t>(0x1000),
__E_Channel13 = static_cast<int32_t>(0x2000),
__E_Channel14 = static_cast<int32_t>(0x4000),
__E_Channel15 = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OutputChannels_Unwrapped () const noexcept {
return static_cast<__OutputChannels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OutputChannels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OutputChannels(int32_t  value__) noexcept;

/// @brief Field Channel01 value: I32(2)
static ::Unity::Cinemachine::OutputChannels const Channel01;

/// @brief Field Channel02 value: I32(4)
static ::Unity::Cinemachine::OutputChannels const Channel02;

/// @brief Field Channel03 value: I32(8)
static ::Unity::Cinemachine::OutputChannels const Channel03;

/// @brief Field Channel04 value: I32(16)
static ::Unity::Cinemachine::OutputChannels const Channel04;

/// @brief Field Channel05 value: I32(32)
static ::Unity::Cinemachine::OutputChannels const Channel05;

/// @brief Field Channel06 value: I32(64)
static ::Unity::Cinemachine::OutputChannels const Channel06;

/// @brief Field Channel07 value: I32(128)
static ::Unity::Cinemachine::OutputChannels const Channel07;

/// @brief Field Channel08 value: I32(256)
static ::Unity::Cinemachine::OutputChannels const Channel08;

/// @brief Field Channel09 value: I32(512)
static ::Unity::Cinemachine::OutputChannels const Channel09;

/// @brief Field Channel10 value: I32(1024)
static ::Unity::Cinemachine::OutputChannels const Channel10;

/// @brief Field Channel11 value: I32(2048)
static ::Unity::Cinemachine::OutputChannels const Channel11;

/// @brief Field Channel12 value: I32(4096)
static ::Unity::Cinemachine::OutputChannels const Channel12;

/// @brief Field Channel13 value: I32(8192)
static ::Unity::Cinemachine::OutputChannels const Channel13;

/// @brief Field Channel14 value: I32(16384)
static ::Unity::Cinemachine::OutputChannels const Channel14;

/// @brief Field Channel15 value: I32(32768)
static ::Unity::Cinemachine::OutputChannels const Channel15;

/// @brief Field Default value: I32(1)
static ::Unity::Cinemachine::OutputChannels const Default;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::OutputChannels, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::OutputChannels) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine
