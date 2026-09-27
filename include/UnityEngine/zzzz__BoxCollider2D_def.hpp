#pragma once
// IWYU pragma private; include "UnityEngine/BoxCollider2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider2D_def.hpp"
CORDL_MODULE_EXPORT(BoxCollider2D)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class BoxCollider2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::BoxCollider2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::BoxCollider2D*, "UnityEngine", "BoxCollider2D");
// [NativeHeader("Modules/Physics2D/Public/BoxCollider2D.h")]
// Dependencies UnityEngine.Collider2D
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BoxCollider2D
class CORDL_TYPE BoxCollider2D : public ::UnityEngine::Collider2D {
public:
// Declarations
 __declspec(property(get=get_size)) ::UnityEngine::Vector2  size;

/// @brief Method get_size, addr 0xb67d788, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_size() ;

/// @brief Method get_size_Injected, addr 0xb67d810, size 0x44, virtual false, abstract: false, final false
static inline void get_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxCollider2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxCollider2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxCollider2D(BoxCollider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxCollider2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxCollider2D(BoxCollider2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::BoxCollider2D) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
