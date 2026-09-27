#pragma once
// IWYU pragma private; include "GTMathUtil/WithinBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WithinBounds)
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GTMathUtil {
class WithinBounds;
}
// Write type traits
MARK_REF_T(::GTMathUtil::WithinBounds*);
DEFINE_IL2CPP_CLASS(::GTMathUtil::WithinBounds*, "GTMathUtil", "WithinBounds");
// Dependencies System.Object
namespace GTMathUtil {
// Is value type: false
// CS Name: GTMathUtil.WithinBounds
class CORDL_TYPE WithinBounds : public ::System::Object {
public:
// Declarations
static inline ::GTMathUtil::WithinBounds* New_ctor() ;

/// @brief Method PointWithinBoxColliderBounds, addr 0x5b795ac, size 0xd0, virtual false, abstract: false, final false
static inline bool PointWithinBoxColliderBounds(::UnityEngine::Vector3  point, ::UnityEngine::BoxCollider*  boxCollider) ;

/// @brief Method PointWithinCapsuleColliderBounds, addr 0x5b7967c, size 0x424, virtual false, abstract: false, final false
static inline bool PointWithinCapsuleColliderBounds(::UnityEngine::Vector3  point, ::UnityEngine::CapsuleCollider*  capsuleCollider) ;

/// @brief Method PointWithinSphereColliderBounds, addr 0x5b79aa0, size 0xfc, virtual false, abstract: false, final false
static inline bool PointWithinSphereColliderBounds(::UnityEngine::Vector3  point, ::UnityEngine::SphereCollider*  sphereCollider) ;

/// @brief Method .ctor, addr 0x5b79b9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WithinBounds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WithinBounds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WithinBounds(WithinBounds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WithinBounds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WithinBounds(WithinBounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GTMathUtil::WithinBounds) == 0x10, "Size mismatch!");

} // namespace end def GTMathUtil
