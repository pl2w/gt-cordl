#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_MeshVertexChannelFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_MeshVertexChannelFlags)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct MB_MeshVertexChannelFlags;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, "DigitalOpus.MB.Core", "MB_MeshVertexChannelFlags");
// [Flags]
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB_MeshVertexChannelFlags
struct CORDL_TYPE MB_MeshVertexChannelFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB_MeshVertexChannelFlags_Unwrapped
enum struct __MB_MeshVertexChannelFlags_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_vertex = static_cast<int32_t>(0x1),
__E_normal = static_cast<int32_t>(0x2),
__E_tangent = static_cast<int32_t>(0x4),
__E_colors = static_cast<int32_t>(0x8),
__E_uv0 = static_cast<int32_t>(0x10),
__E_nuvsSliceIdx = static_cast<int32_t>(0x20),
__E_uv2 = static_cast<int32_t>(0x40),
__E_uv3 = static_cast<int32_t>(0x80),
__E_uv4 = static_cast<int32_t>(0x100),
__E_uv5 = static_cast<int32_t>(0x200),
__E_uv6 = static_cast<int32_t>(0x400),
__E_uv7 = static_cast<int32_t>(0x800),
__E_uv8 = static_cast<int32_t>(0x1000),
__E_blendWeight = static_cast<int32_t>(0x2000),
__E_blendIndices = static_cast<int32_t>(0x4000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB_MeshVertexChannelFlags_Unwrapped () const noexcept {
return static_cast<__MB_MeshVertexChannelFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB_MeshVertexChannelFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB_MeshVertexChannelFlags(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field blendIndices value: I32(16384)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const blendIndices;

/// @brief Field blendWeight value: I32(8192)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const blendWeight;

/// @brief Field colors value: I32(8)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const colors;

/// @brief Field none value: I32(0)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const none;

/// @brief Field normal value: I32(2)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const normal;

/// @brief Field nuvsSliceIdx value: I32(32)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const nuvsSliceIdx;

/// @brief Field tangent value: I32(4)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const tangent;

/// @brief Field uv0 value: I32(16)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv0;

/// @brief Field uv2 value: I32(64)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv2;

/// @brief Field uv3 value: I32(128)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv3;

/// @brief Field uv4 value: I32(256)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv4;

/// @brief Field uv5 value: I32(512)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv5;

/// @brief Field uv6 value: I32(1024)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv6;

/// @brief Field uv7 value: I32(2048)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv7;

/// @brief Field uv8 value: I32(4096)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const uv8;

/// @brief Field vertex value: I32(1)
static ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags const vertex;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags) == 0x4, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
