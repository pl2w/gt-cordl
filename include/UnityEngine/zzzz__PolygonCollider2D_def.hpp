#pragma once
// IWYU pragma private; include "UnityEngine/PolygonCollider2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PolygonCollider2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class PolygonCollider2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::PolygonCollider2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PolygonCollider2D*, "UnityEngine", "PolygonCollider2D");
// [NativeHeader("Modules/Physics2D/Public/PolygonCollider2D.h")]
// Dependencies UnityEngine.Collider2D
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PolygonCollider2D
class CORDL_TYPE PolygonCollider2D : public ::UnityEngine::Collider2D {
public:
// Declarations
 __declspec(property(get=get_pathCount)) int32_t  pathCount;

 __declspec(property(get=get_points)) ::ArrayW<::UnityEngine::Vector2>  points;

/// @brief Method GetPath, addr 0xb67db54, size 0xcc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetPath(int32_t  index) ;

/// [NativeMethod("GetPath_Binding")]
/// @brief Method GetPath_Internal, addr 0xb67dc20, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> GetPath_Internal(int32_t  index) ;

/// @brief Method GetPath_Internal_Injected, addr 0xb67dd80, size 0x54, virtual false, abstract: false, final false
static inline void GetPath_Internal_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [NativeMethod("GetPointCount")]
/// @brief Method GetTotalPointCount, addr 0xb67d854, size 0x78, virtual false, abstract: false, final false
inline int32_t GetTotalPointCount() ;

/// @brief Method GetTotalPointCount_Injected, addr 0xb67d8cc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetTotalPointCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pathCount, addr 0xb67daa0, size 0x78, virtual false, abstract: false, final false
inline int32_t get_pathCount() ;

/// @brief Method get_pathCount_Injected, addr 0xb67db18, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_pathCount_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetPoints_Binding")]
/// @brief Method get_points, addr 0xb67d908, size 0x154, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_points() ;

/// @brief Method get_points_Injected, addr 0xb67da5c, size 0x44, virtual false, abstract: false, final false
static inline void get_points_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolygonCollider2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolygonCollider2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolygonCollider2D(PolygonCollider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolygonCollider2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolygonCollider2D(PolygonCollider2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32219};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PolygonCollider2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
