#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GeometryUtility)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class GeometryUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::GeometryUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GeometryUtility*, "UnityEngine", "GeometryUtility");
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [StaticAccessor("GeometryUtilityScripting", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GeometryUtility
class CORDL_TYPE GeometryUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateBounds, addr 0xb57592c, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::UnityEngine::Matrix4x4  transform) ;

/// @brief Method CalculateFrustumPlanes, addr 0xb57565c, size 0x60, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Plane> CalculateFrustumPlanes(::UnityEngine::Camera*  camera) ;

/// @brief Method CalculateFrustumPlanes, addr 0xb5756bc, size 0x80, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanes(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Plane>  planes) ;

/// @brief Method CalculateFrustumPlanes, addr 0xb57573c, size 0xdc, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanes(::UnityEngine::Matrix4x4  worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane>  planes) ;

/// [NativeName("CalculateBounds")]
/// @brief Method Internal_CalculateBounds, addr 0xb575a14, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds Internal_CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::UnityEngine::Matrix4x4  transform) ;

/// @brief Method Internal_CalculateBounds_Injected, addr 0xb575c74, size 0x54, virtual false, abstract: false, final false
static inline void Internal_CalculateBounds_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions, ::by_ref<::UnityEngine::Matrix4x4>  transform, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// [NativeName("ExtractPlanes")]
/// @brief Method Internal_ExtractPlanes, addr 0xb575818, size 0x114, virtual false, abstract: false, final false
static inline void Internal_ExtractPlanes(::by_ref<::ArrayW<::UnityEngine::Plane>>  planes, ::UnityEngine::Matrix4x4  worldToProjectionMatrix) ;

/// @brief Method Internal_ExtractPlanes_Injected, addr 0xb575c30, size 0x44, virtual false, abstract: false, final false
static inline void Internal_ExtractPlanes_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  planes, ::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix) ;

/// @brief Method TestPlanesAABB, addr 0xb575b14, size 0xd8, virtual false, abstract: false, final false
static inline bool TestPlanesAABB(::ArrayW<::UnityEngine::Plane>  planes, ::UnityEngine::Bounds  bounds) ;

/// @brief Method TestPlanesAABB_Injected, addr 0xb575bec, size 0x44, virtual false, abstract: false, final false
static inline bool TestPlanesAABB_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  planes, ::by_ref<::UnityEngine::Bounds>  bounds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeometryUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryUtility(GeometryUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryUtility(GeometryUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GeometryUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
