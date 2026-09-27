#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer_Target.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBuffer_Target)
// Forward declare root types
namespace GlobalNamespace {
struct GraphicsBuffer_Target;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphicsBuffer_Target);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphicsBuffer_Target, "UnityEngine", "GraphicsBuffer/Target");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.GraphicsBuffer/Target
struct CORDL_TYPE GraphicsBuffer_Target {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBuffer_Target_Unwrapped
enum struct __GraphicsBuffer_Target_Unwrapped : int32_t {
__E_Vertex = static_cast<int32_t>(0x1),
__E_Index = static_cast<int32_t>(0x2),
__E_CopySource = static_cast<int32_t>(0x4),
__E_CopyDestination = static_cast<int32_t>(0x8),
__E_Structured = static_cast<int32_t>(0x10),
__E_Raw = static_cast<int32_t>(0x20),
__E_Append = static_cast<int32_t>(0x40),
__E_Counter = static_cast<int32_t>(0x80),
__E_IndirectArguments = static_cast<int32_t>(0x100),
__E_Constant = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBuffer_Target_Unwrapped () const noexcept {
return static_cast<__GraphicsBuffer_Target_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBuffer_Target() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphicsBuffer_Target(int32_t  value__) noexcept;

/// @brief Field Append value: I32(64)
static ::GlobalNamespace::GraphicsBuffer_Target const Append;

/// @brief Field Constant value: I32(512)
static ::GlobalNamespace::GraphicsBuffer_Target const Constant;

/// @brief Field CopyDestination value: I32(8)
static ::GlobalNamespace::GraphicsBuffer_Target const CopyDestination;

/// @brief Field CopySource value: I32(4)
static ::GlobalNamespace::GraphicsBuffer_Target const CopySource;

/// @brief Field Counter value: I32(128)
static ::GlobalNamespace::GraphicsBuffer_Target const Counter;

/// @brief Field Index value: I32(2)
static ::GlobalNamespace::GraphicsBuffer_Target const Index;

/// @brief Field IndirectArguments value: I32(256)
static ::GlobalNamespace::GraphicsBuffer_Target const IndirectArguments;

/// @brief Field Raw value: I32(32)
static ::GlobalNamespace::GraphicsBuffer_Target const Raw;

/// @brief Field Structured value: I32(16)
static ::GlobalNamespace::GraphicsBuffer_Target const Structured;

/// @brief Field Vertex value: I32(1)
static ::GlobalNamespace::GraphicsBuffer_Target const Vertex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicsBuffer_Target, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphicsBuffer_Target) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
