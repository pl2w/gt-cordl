#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableSkeletonOverlays.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnableSkeletonOverlays)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableSkeletonOverlays;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnableSkeletonOverlays*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnableSkeletonOverlays*, "", "EnableSkeletonOverlays");
// Dependencies ShaderHashId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnableSkeletonOverlays
class CORDL_TYPE EnableSkeletonOverlays : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _BlackAndWhite, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__BlackAndWhite, put=__cordl_internal_set__BlackAndWhite)) ::GlobalNamespace::ShaderHashId  _BlackAndWhite;

/// @brief Field bodyMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyMaterial, put=__cordl_internal_set_bodyMaterial)) ::UnityW<::UnityEngine::Material>  bodyMaterial;

/// @brief Field skeletonMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_skeletonMaterial, put=__cordl_internal_set_skeletonMaterial)) ::UnityW<::UnityEngine::Material>  skeletonMaterial;

static inline ::GlobalNamespace::EnableSkeletonOverlays* New_ctor() ;

/// @brief Method OnDisable, addr 0x567330c, size 0x64, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x567329c, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__BlackAndWhite() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__BlackAndWhite() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bodyMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_skeletonMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_skeletonMaterial() ;

constexpr void __cordl_internal_set__BlackAndWhite(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_bodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_skeletonMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x5673370, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableSkeletonOverlays() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableSkeletonOverlays", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableSkeletonOverlays(EnableSkeletonOverlays && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableSkeletonOverlays", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableSkeletonOverlays(EnableSkeletonOverlays const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{820};

/// [SerializeField]
/// @brief Field bodyMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bodyMaterial;

/// [SerializeField]
/// @brief Field skeletonMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___skeletonMaterial;

/// @brief Field _BlackAndWhite, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____BlackAndWhite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnableSkeletonOverlays, ___bodyMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableSkeletonOverlays, ___skeletonMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableSkeletonOverlays, ____BlackAndWhite) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnableSkeletonOverlays) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
