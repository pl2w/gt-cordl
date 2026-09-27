#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilder_CameraInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GeometryBuilder_CameraInfo)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct GeometryBuilder_CameraInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GeometryBuilder_CameraInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeometryBuilder_CameraInfo, "Drawing", "GeometryBuilder/CameraInfo");
// Dependencies Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.GeometryBuilder/CameraInfo
struct CORDL_TYPE GeometryBuilder_CameraInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x55cee9c, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Camera*  camera) ;

// Ctor Parameters []
// @brief default ctor
constexpr GeometryBuilder_CameraInfo() ;

// Ctor Parameters [CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraRotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraDepthToPixelSize", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraIsOrthographic", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GeometryBuilder_CameraInfo(::Unity::Mathematics::float3  cameraPosition, ::Unity::Mathematics::quaternion  cameraRotation, ::Unity::Mathematics::float2  cameraDepthToPixelSize, bool  cameraIsOrthographic) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field cameraPosition, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  cameraPosition;

/// @brief Field cameraRotation, offset: 0xc, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  cameraRotation;

/// @brief Field cameraDepthToPixelSize, offset: 0x1c, size: 0x8, def value: None
 ::Unity::Mathematics::float2  cameraDepthToPixelSize;

/// @brief Field cameraIsOrthographic, offset: 0x24, size: 0x1, def value: None
 bool  cameraIsOrthographic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeometryBuilder_CameraInfo, cameraPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilder_CameraInfo, cameraRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilder_CameraInfo, cameraDepthToPixelSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeometryBuilder_CameraInfo, cameraIsOrthographic) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeometryBuilder_CameraInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
