#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAccessor_GLTFAccessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAccessor_GLTFAccessor)
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAccessor_GLTFAccessor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, "", "OVRGLTFAccessor/GLTFAccessor");
// Dependencies OVRGLTFComponentType, OVRGLTFType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAccessor/GLTFAccessor
struct CORDL_TYPE OVRGLTFAccessor_GLTFAccessor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAccessor_GLTFAccessor() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRGLTFType", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRGLTFComponentType", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentTypeStride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BufferViewIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ByteOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Min", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Max", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: None, comment: None }]
constexpr OVRGLTFAccessor_GLTFAccessor(::GlobalNamespace::OVRGLTFType  Type, ::GlobalNamespace::OVRGLTFComponentType  ComponentType, int32_t  ComponentTypeStride, int32_t  BufferViewIndex, int32_t  ByteOffset, int32_t  Count, ::OVRSimpleJSON::JSONNode*  Min, ::OVRSimpleJSON::JSONNode*  Max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRGLTFType  Type;

/// @brief Field ComponentType, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::OVRGLTFComponentType  ComponentType;

/// @brief Field ComponentTypeStride, offset: 0x8, size: 0x4, def value: None
 int32_t  ComponentTypeStride;

/// @brief Field BufferViewIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  BufferViewIndex;

/// @brief Field ByteOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  ByteOffset;

/// @brief Field Count, offset: 0x14, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Min, offset: 0x18, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  Min;

/// @brief Field Max, offset: 0x20, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, ComponentType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, ComponentTypeStride) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, BufferViewIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, ByteOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Count) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor, Max) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAccessor_GLTFAccessor) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
