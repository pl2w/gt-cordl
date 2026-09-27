#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor_GLTFBufferView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAccessor_GLTFBufferView)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFBufferView;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, "", "OVRGLTFAccessor/GLTFBufferView");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAccessor/GLTFBufferView
struct CORDL_TYPE OVRGLTFAccessor_GLTFBufferView {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAccessor_GLTFBufferView() ;

// Ctor Parameters [CppParam { name: "BufferIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ByteLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ByteStride", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRGLTFAccessor_GLTFBufferView(int32_t  BufferIndex, int32_t  ByteOffset, int32_t  ByteLength, int32_t  ByteStride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field BufferIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  BufferIndex;

/// @brief Field ByteOffset, offset: 0x4, size: 0x4, def value: None
 int32_t  ByteOffset;

/// @brief Field ByteLength, offset: 0x8, size: 0x4, def value: None
 int32_t  ByteLength;

/// @brief Field ByteStride, offset: 0xc, size: 0x4, def value: None
 int32_t  ByteStride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, BufferIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, ByteOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, ByteLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView, ByteStride) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAccessor_GLTFBufferView) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
