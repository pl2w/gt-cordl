#pragma once
// IWYU pragma private; include "UnityEngine/Collider2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Collider2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Collider2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Collider2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Collider2D*, "UnityEngine", "Collider2D");
// [RequiredByNativeCode(Optional = true)]
// [NativeHeader("Modules/Physics2D/Public/Collider2D.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collider2D
class CORDL_TYPE Collider2D : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_attachedRigidbody)) ::UnityW<::UnityEngine::Rigidbody2D>  attachedRigidbody;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_offset)) ::UnityEngine::Vector2  offset;

static inline ::UnityEngine::Collider2D* New_ctor() ;

/// @brief Method OverlapPoint, addr 0xb67d6b4, size 0x88, virtual false, abstract: false, final false
inline bool OverlapPoint(::UnityEngine::Vector2  point) ;

/// @brief Method OverlapPoint_Injected, addr 0xb67d73c, size 0x44, virtual false, abstract: false, final false
static inline bool OverlapPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  point) ;

/// @brief Method .ctor, addr 0xb67d780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [NativeMethod("GetAttachedRigidbody_Binding")]
/// @brief Method get_attachedRigidbody, addr 0xb67d4fc, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody2D> get_attachedRigidbody() ;

/// @brief Method get_attachedRigidbody_Injected, addr 0xb67d590, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_attachedRigidbody_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bounds, addr 0xb67d5cc, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0xb67d670, size 0x44, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_offset, addr 0xb67d430, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_offset() ;

/// @brief Method get_offset_Injected, addr 0xb67d4b8, size 0x44, virtual false, abstract: false, final false
static inline void get_offset_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collider2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Collider2D(Collider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collider2D(Collider2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32217};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Collider2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
