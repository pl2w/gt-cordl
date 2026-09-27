#pragma once
// IWYU pragma private; include "GlobalNamespace/BoxColliderUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoxColliderUtils)
namespace GlobalNamespace {
struct BoundsInt;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BoxColliderUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BoxColliderUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoxColliderUtils*, "", "BoxColliderUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BoxColliderUtils
class CORDL_TYPE BoxColliderUtils : public ::System::Object {
public:
// Declarations
/// @brief Method DoesBoxContainBox, addr 0x5b43064, size 0x2d4, virtual false, abstract: false, final false
static inline bool DoesBoxContainBox(::UnityEngine::BoxCollider*  containerBox, ::UnityEngine::BoxCollider*  containedBox) ;

/// @brief Method DoesBoxContainPoint, addr 0x5b42fdc, size 0x88, virtual false, abstract: false, final false
static inline bool DoesBoxContainPoint(::UnityEngine::BoxCollider*  boxCollider, ::UnityEngine::Vector3  worldPoint) ;

/// @brief Method DoesBoxContainRegion, addr 0x5b43338, size 0x1d4, virtual false, abstract: false, final false
static inline bool DoesBoxContainRegion(::UnityEngine::BoxCollider*  box, ::GlobalNamespace::BoundsInt  regionBounds) ;

/// @brief Method GetWorldToNormalizedBoxMatrix, addr 0x5b42e54, size 0x188, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetWorldToNormalizedBoxMatrix(::UnityEngine::BoxCollider*  boxCollider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxColliderUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxColliderUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxColliderUtils(BoxColliderUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxColliderUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxColliderUtils(BoxColliderUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BoxColliderUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
