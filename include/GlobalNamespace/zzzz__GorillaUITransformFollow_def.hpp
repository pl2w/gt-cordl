#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaUITransformFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GorillaUITransformFollow)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaUITransformFollow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaUITransformFollow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaUITransformFollow*, "", "GorillaUITransformFollow");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaUITransformFollow
class CORDL_TYPE GorillaUITransformFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field doesMove, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_doesMove, put=__cordl_internal_set_doesMove)) bool  doesMove;

/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field transformToFollow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformToFollow, put=__cordl_internal_set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Method LateUpdate, addr 0x594722c, size 0xe0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaUITransformFollow* New_ctor() ;

/// @brief Method Start, addr 0x5947228, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_doesMove() const;

constexpr bool& __cordl_internal_get_doesMove() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformToFollow() ;

constexpr void __cordl_internal_set_doesMove(bool  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x594730c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaUITransformFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaUITransformFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaUITransformFollow(GorillaUITransformFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaUITransformFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaUITransformFollow(GorillaUITransformFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2278};

/// @brief Field transformToFollow, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformToFollow;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field doesMove, offset: 0x34, size: 0x1, def value: None
 bool  ___doesMove;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaUITransformFollow, ___transformToFollow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaUITransformFollow, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaUITransformFollow, ___doesMove) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaUITransformFollow) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
