#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateBonesLol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CreateBonesLol)
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateBonesLol;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreateBonesLol*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreateBonesLol*, "", "CreateBonesLol");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateBonesLol
class CORDL_TYPE CreateBonesLol : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cube, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cube, put=__cordl_internal_set_cube)) ::UnityW<::UnityEngine::GameObject>  cube;

/// @brief Field skeleton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_skeleton, put=__cordl_internal_set_skeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton>  skeleton;

static inline ::GlobalNamespace::CreateBonesLol* New_ctor() ;

/// @brief Method Update, addr 0x5796744, size 0x4c4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cube() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cube() ;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get_skeleton() const;

constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get_skeleton() ;

constexpr void __cordl_internal_set_cube(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_skeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value) ;

/// @brief Method .ctor, addr 0x5796c08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreateBonesLol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreateBonesLol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreateBonesLol(CreateBonesLol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreateBonesLol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreateBonesLol(CreateBonesLol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1461};

/// @brief Field cube, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cube;

/// @brief Field skeleton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSkeleton>  ___skeleton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateBonesLol, ___cube) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateBonesLol, ___skeleton) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreateBonesLol) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
