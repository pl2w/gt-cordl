#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TexArraySliceRendererMatPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MB_TexArraySliceRendererMatPair)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_TexArraySliceRendererMatPair;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TexArraySliceRendererMatPair*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TexArraySliceRendererMatPair*, "", "MB_TexArraySliceRendererMatPair");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TexArraySliceRendererMatPair
class CORDL_TYPE MB_TexArraySliceRendererMatPair : public ::System::Object {
public:
// Declarations
/// @brief Field renderer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::GameObject>  renderer;

/// @brief Field sourceMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMaterial, put=__cordl_internal_set_sourceMaterial)) ::UnityW<::UnityEngine::Material>  sourceMaterial;

static inline ::GlobalNamespace::MB_TexArraySliceRendererMatPair* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_renderer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_sourceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_sourceMaterial() ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sourceMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x9d722d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TexArraySliceRendererMatPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TexArraySliceRendererMatPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TexArraySliceRendererMatPair(MB_TexArraySliceRendererMatPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexArraySliceRendererMatPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexArraySliceRendererMatPair(MB_TexArraySliceRendererMatPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22551};

/// @brief Field sourceMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___sourceMaterial;

/// @brief Field renderer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TexArraySliceRendererMatPair, ___sourceMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TexArraySliceRendererMatPair, ___renderer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TexArraySliceRendererMatPair) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
