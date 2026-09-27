#pragma once
// IWYU pragma private; include "Unity/Cinemachine/VertexFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexFlags)
// Forward declare root types
namespace Unity::Cinemachine {
struct VertexFlags;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::VertexFlags);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::VertexFlags, "Unity.Cinemachine", "VertexFlags");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.VertexFlags
struct CORDL_TYPE VertexFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VertexFlags_Unwrapped
enum struct __VertexFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OpenStart = static_cast<int32_t>(0x1),
__E_OpenEnd = static_cast<int32_t>(0x2),
__E_LocalMax = static_cast<int32_t>(0x4),
__E_LocalMin = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexFlags_Unwrapped () const noexcept {
return static_cast<__VertexFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VertexFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VertexFlags(int32_t  value__) noexcept;

/// @brief Field LocalMax value: I32(4)
static ::Unity::Cinemachine::VertexFlags const LocalMax;

/// @brief Field LocalMin value: I32(8)
static ::Unity::Cinemachine::VertexFlags const LocalMin;

/// @brief Field None value: I32(0)
static ::Unity::Cinemachine::VertexFlags const None;

/// @brief Field OpenEnd value: I32(2)
static ::Unity::Cinemachine::VertexFlags const OpenEnd;

/// @brief Field OpenStart value: I32(1)
static ::Unity::Cinemachine::VertexFlags const OpenStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22505};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::VertexFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::VertexFlags) == 0x4, "Size mismatch!");

} // namespace end def Unity::Cinemachine
