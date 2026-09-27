#pragma once
// IWYU pragma private; include "UnityEngine/CompositeCollider2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeCollider2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class CompositeCollider2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::CompositeCollider2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CompositeCollider2D*, "UnityEngine", "CompositeCollider2D");
// [NativeHeader("Modules/Physics2D/Public/CompositeCollider2D.h")]
// [RequireComponent(typeof(UnityEngine.Rigidbody2D))]
// Dependencies UnityEngine.Collider2D
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CompositeCollider2D
class CORDL_TYPE CompositeCollider2D : public ::UnityEngine::Collider2D {
public:
// Declarations
 __declspec(property(get=get_pathCount)) int32_t  pathCount;

 __declspec(property(get=get_pointCount)) int32_t  pointCount;

/// @brief Method GetPath, addr 0xb67df3c, size 0x140, virtual false, abstract: false, final false
inline int32_t GetPath(int32_t  index, ::ArrayW<::UnityEngine::Vector2>  points) ;

/// [NativeMethod("GetPathArray_Binding")]
/// @brief Method GetPathArray_Internal, addr 0xb67e07c, size 0x134, virtual false, abstract: false, final false
inline int32_t GetPathArray_Internal(int32_t  index, /* [NotNull] */ ::ArrayW<::UnityEngine::Vector2>  points) ;

/// @brief Method GetPathArray_Internal_Injected, addr 0xb67e1b0, size 0x524, virtual false, abstract: false, final false
static inline int32_t GetPathArray_Internal_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  points) ;

/// @brief Method get_pathCount, addr 0xb67ddd4, size 0x78, virtual false, abstract: false, final false
inline int32_t get_pathCount() ;

/// @brief Method get_pathCount_Injected, addr 0xb67de4c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_pathCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pointCount, addr 0xb67de88, size 0x78, virtual false, abstract: false, final false
inline int32_t get_pointCount() ;

/// @brief Method get_pointCount_Injected, addr 0xb67df00, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_pointCount_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompositeCollider2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompositeCollider2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompositeCollider2D(CompositeCollider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompositeCollider2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompositeCollider2D(CompositeCollider2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CompositeCollider2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
