#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor_GLTFBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAccessor_GLTFBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer, "", "OVRGLTFAccessor/GLTFBuffer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAccessor/GLTFBuffer
struct CORDL_TYPE OVRGLTFAccessor_GLTFBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAccessor_GLTFBuffer() ;

// Ctor Parameters [CppParam { name: "ByteLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRGLTFAccessor_GLTFBuffer(int32_t  ByteLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ByteLength, offset: 0x0, size: 0x4, def value: None
 int32_t  ByteLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer, ByteLength) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAccessor_GLTFBuffer) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
