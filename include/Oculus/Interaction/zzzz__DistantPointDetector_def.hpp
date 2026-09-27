#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistantPointDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DistantPointDetector)
namespace Oculus::Interaction {
class ConicalFrustum;
}
namespace Oculus::Interaction {
struct DistantPointDetectorFrustums;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class DistantPointDetector;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistantPointDetector*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistantPointDetector*, "Oculus.Interaction", "DistantPointDetector");
// Dependencies Oculus.Interaction.DistantPointDetectorFrustums, System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DistantPointDetector
class CORDL_TYPE DistantPointDetector : public ::System::Object {
public:
// Declarations
/// @brief Field _frustums, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get__frustums, put=__cordl_internal_set__frustums)) ::Oculus::Interaction::DistantPointDetectorFrustums  _frustums;

/// @brief Method ComputeIsPointing, addr 0xa400898, size 0x21c, virtual false, abstract: false, final false
inline bool ComputeIsPointing(::ArrayW<::UnityEngine::Collider*>  colliders, bool  isSelecting, ::by_ref<float_t>  bestScore, ::by_ref<::UnityEngine::Vector3>  bestHitPoint) ;

/// @brief Method IsPointingAtColliders, addr 0xa400d58, size 0xec, virtual false, abstract: false, final false
inline bool IsPointingAtColliders(::ArrayW<::UnityEngine::Collider*>  colliders, ::Oculus::Interaction::ConicalFrustum*  frustum) ;

/// @brief Method IsPointingAtColliders, addr 0xa400ba0, size 0x178, virtual false, abstract: false, final false
inline bool IsPointingAtColliders(::ArrayW<::UnityEngine::Collider*>  colliders, ::Oculus::Interaction::ConicalFrustum*  frustum, ::by_ref<::UnityEngine::Vector3>  bestHitPoint) ;

/// @brief Method IsPointingWithoutAid, addr 0xa400ab4, size 0xec, virtual false, abstract: false, final false
inline bool IsPointingWithoutAid(::ArrayW<::UnityEngine::Collider*>  colliders, ::by_ref<::UnityEngine::Vector3>  bestHitPoint) ;

/// @brief Method IsWithinDeselectionRange, addr 0xa400d18, size 0x40, virtual false, abstract: false, final false
inline bool IsWithinDeselectionRange(::ArrayW<::UnityEngine::Collider*>  colliders) ;

static inline ::Oculus::Interaction::DistantPointDetector* New_ctor(::Oculus::Interaction::DistantPointDetectorFrustums  frustums) ;

constexpr ::Oculus::Interaction::DistantPointDetectorFrustums const& __cordl_internal_get__frustums() const;

constexpr ::Oculus::Interaction::DistantPointDetectorFrustums& __cordl_internal_get__frustums() ;

constexpr void __cordl_internal_set__frustums(::Oculus::Interaction::DistantPointDetectorFrustums  value) ;

/// @brief Method .ctor, addr 0xa400864, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::DistantPointDetectorFrustums  frustums) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantPointDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantPointDetector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantPointDetector(DistantPointDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantPointDetector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantPointDetector(DistantPointDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15697};

/// @brief Field _frustums, offset: 0x10, size: 0x20, def value: None
 ::Oculus::Interaction::DistantPointDetectorFrustums  ____frustums;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistantPointDetector, ____frustums) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistantPointDetector) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
