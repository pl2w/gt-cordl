#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderSizeConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderSizeConstraint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ColliderSizeConstraint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderSizeConstraint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderSizeConstraint*, "", "ColliderSizeConstraint");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColliderSizeConstraint
class CORDL_TYPE ColliderSizeConstraint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field expandingAxis, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_expandingAxis, put=__cordl_internal_set_expandingAxis)) int32_t  expandingAxis;

/// @brief Field pointA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointA, put=__cordl_internal_set_pointA)) ::UnityW<::UnityEngine::Transform>  pointA;

/// @brief Field pointB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointB, put=__cordl_internal_set_pointB)) ::UnityW<::UnityEngine::Transform>  pointB;

/// @brief Field size, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Field wideSideOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_wideSideOffset, put=__cordl_internal_set_wideSideOffset)) float_t  wideSideOffset;

static inline ::GlobalNamespace::ColliderSizeConstraint* New_ctor() ;

/// @brief Method Update, addr 0xa427c28, size 0x1dc, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_expandingAxis() const;

constexpr int32_t& __cordl_internal_get_expandingAxis() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pointA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pointA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pointB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pointB() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr float_t const& __cordl_internal_get_wideSideOffset() const;

constexpr float_t& __cordl_internal_get_wideSideOffset() ;

constexpr void __cordl_internal_set_expandingAxis(int32_t  value) ;

constexpr void __cordl_internal_set_pointA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pointB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_wideSideOffset(float_t  value) ;

/// @brief Method .ctor, addr 0xa427e04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderSizeConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderSizeConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderSizeConstraint(ColliderSizeConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderSizeConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderSizeConstraint(ColliderSizeConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28242};

/// @brief Field size, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

/// @brief Field expandingAxis, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___expandingAxis;

/// @brief Field pointA, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pointA;

/// @brief Field pointB, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pointB;

/// @brief Field wideSideOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ___wideSideOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColliderSizeConstraint, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderSizeConstraint, ___expandingAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderSizeConstraint, ___pointA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderSizeConstraint, ___pointB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderSizeConstraint, ___wideSideOffset) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColliderSizeConstraint) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
