#pragma once
// IWYU pragma private; include "UnityEngine/Gizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gizmos)
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Write type traits
MARK_REF_T(::UnityEngine::Gizmos*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
// [NativeHeader("Runtime/Export/Gizmos/Gizmos.bindings.h")]
// [StaticAccessor("GizmoBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gizmos
class CORDL_TYPE Gizmos : public ::System::Object {
public:
// Declarations
/// [NativeThrows]
/// @brief Method DrawCube, addr 0xb5787a0, size 0x50, virtual false, abstract: false, final false
static inline void DrawCube(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method DrawCube_Injected, addr 0xb5787f0, size 0x44, virtual false, abstract: false, final false
static inline void DrawCube_Injected(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  size) ;

/// [NativeThrows]
/// @brief Method DrawIcon, addr 0xb578a94, size 0x188, virtual false, abstract: false, final false
static inline void DrawIcon(::UnityEngine::Vector3  center, ::StringW  name, /* [DefaultValue("true")] */ bool  allowScaling, /* [DefaultValue("Color(255,255,255,255)")] */ ::UnityEngine::Color  tint) ;

/// @brief Method DrawIcon_Injected, addr 0xb578c1c, size 0x5c, virtual false, abstract: false, final false
static inline void DrawIcon_Injected(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, /* [DefaultValue("true")] */ bool  allowScaling, /* [DefaultValue("Color(255,255,255,255)")] */ ::by_ref<::UnityEngine::Color>  tint) ;

/// [NativeThrows]
/// @brief Method DrawLine, addr 0xb5782b8, size 0x50, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method DrawLineList, addr 0xb57853c, size 0x90, virtual false, abstract: false, final false
static inline void DrawLineList(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  points) ;

/// [NativeMethod(Name = "DrawLineList", ThrowsException = true)]
/// @brief Method DrawLineListInternal, addr 0xb57844c, size 0xb4, virtual false, abstract: false, final false
static inline void DrawLineListInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  points) ;

/// @brief Method DrawLineListInternal_Injected, addr 0xb578500, size 0x3c, virtual false, abstract: false, final false
static inline void DrawLineListInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  points) ;

/// [NativeThrows]
/// @brief Method DrawLineStrip, addr 0xb57834c, size 0xbc, virtual false, abstract: false, final false
static inline void DrawLineStrip(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  points, bool  looped) ;

/// @brief Method DrawLineStrip_Injected, addr 0xb578408, size 0x44, virtual false, abstract: false, final false
static inline void DrawLineStrip_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  points, bool  looped) ;

/// @brief Method DrawLine_Injected, addr 0xb578308, size 0x44, virtual false, abstract: false, final false
static inline void DrawLine_Injected(::by_ref<::UnityEngine::Vector3>  from, ::by_ref<::UnityEngine::Vector3>  to) ;

/// @brief Method DrawMesh, addr 0xb578ea4, size 0x18, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale) ;

/// [NativeThrows]
/// @brief Method DrawMesh, addr 0xb578834, size 0xc4, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale) ;

/// @brief Method DrawMesh_Injected, addr 0xb5788f8, size 0x6c, virtual false, abstract: false, final false
static inline void DrawMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::by_ref<::UnityEngine::Vector3>  position, /* [DefaultValue("Quaternion.identity")] */ ::by_ref<::UnityEngine::Quaternion>  rotation, /* [DefaultValue("Vector3.one")] */ ::by_ref<::UnityEngine::Vector3>  scale) ;

/// @brief Method DrawRay, addr 0xb578e94, size 0x10, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  direction) ;

/// [NativeThrows]
/// @brief Method DrawSphere, addr 0xb57866c, size 0x54, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method DrawSphere_Injected, addr 0xb5786c0, size 0x4c, virtual false, abstract: false, final false
static inline void DrawSphere_Injected(::by_ref<::UnityEngine::Vector3>  center, float_t  radius) ;

/// [NativeThrows]
/// @brief Method DrawWireCube, addr 0xb57870c, size 0x50, virtual false, abstract: false, final false
static inline void DrawWireCube(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method DrawWireCube_Injected, addr 0xb57875c, size 0x44, virtual false, abstract: false, final false
static inline void DrawWireCube_Injected(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  size) ;

/// @brief Method DrawWireMesh, addr 0xb578ebc, size 0x1110, virtual false, abstract: false, final false
static inline void DrawWireMesh(::UnityEngine::Mesh*  mesh, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale) ;

/// [NativeThrows]
/// @brief Method DrawWireMesh, addr 0xb578964, size 0xc4, virtual false, abstract: false, final false
static inline void DrawWireMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale) ;

/// @brief Method DrawWireMesh_Injected, addr 0xb578a28, size 0x6c, virtual false, abstract: false, final false
static inline void DrawWireMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::by_ref<::UnityEngine::Vector3>  position, /* [DefaultValue("Quaternion.identity")] */ ::by_ref<::UnityEngine::Quaternion>  rotation, /* [DefaultValue("Vector3.one")] */ ::by_ref<::UnityEngine::Vector3>  scale) ;

/// [NativeThrows]
/// @brief Method DrawWireSphere, addr 0xb5785cc, size 0x54, virtual false, abstract: false, final false
static inline void DrawWireSphere(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method DrawWireSphere_Injected, addr 0xb578620, size 0x4c, virtual false, abstract: false, final false
static inline void DrawWireSphere_Injected(::by_ref<::UnityEngine::Vector3>  center, float_t  radius) ;

/// @brief Method get_color, addr 0xb578c78, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0xb578cc0, size 0x3c, virtual false, abstract: false, final false
static inline void get_color_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_matrix, addr 0xb578d7c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 get_matrix() ;

/// @brief Method get_matrix_Injected, addr 0xb578de0, size 0x3c, virtual false, abstract: false, final false
static inline void get_matrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method set_color, addr 0xb578cfc, size 0x44, virtual false, abstract: false, final false
static inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0xb578d40, size 0x3c, virtual false, abstract: false, final false
static inline void set_color_Injected(::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_matrix, addr 0xb578e1c, size 0x3c, virtual false, abstract: false, final false
static inline void set_matrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_matrix_Injected, addr 0xb578e58, size 0x3c, virtual false, abstract: false, final false
static inline void set_matrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gizmos(Gizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gizmos(Gizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Gizmos) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
