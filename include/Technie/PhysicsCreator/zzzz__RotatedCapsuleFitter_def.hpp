#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedCapsuleFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RotatedCapsuleFitter)
namespace System {
class Random;
}
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
struct CapsuleDef;
}
namespace Technie::PhysicsCreator {
class ConstructionPlane;
}
namespace Technie::PhysicsCreator {
struct RotatedCapsule;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class RotatedCapsuleFitter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::RotatedCapsuleFitter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::RotatedCapsuleFitter*, "Technie.PhysicsCreator", "RotatedCapsuleFitter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.RotatedCapsuleFitter
class CORDL_TYPE RotatedCapsuleFitter : public ::System::Object {
public:
// Declarations
/// @brief Method FindBestCapsulePlane, addr 0xadc7c10, size 0x2f0, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::ConstructionPlane* FindBestCapsulePlane(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices) ;

/// @brief Method FindCenter, addr 0xadc80ec, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FindCenter(::ArrayW<::UnityEngine::Vector3>  vertices) ;

/// @brief Method Fit, addr 0xadc7b30, size 0xe0, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CapsuleDef Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method Fit, addr 0xadc7f98, size 0xbc, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CapsuleDef Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices) ;

/// @brief Method FitCapsule, addr 0xadc3ca0, size 0x1d4, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::RotatedCapsule FitCapsule(::Technie::PhysicsCreator::ConstructionPlane*  plane, ::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method Jitter, addr 0xadc8054, size 0x44, virtual false, abstract: false, final false
static inline float_t Jitter(float_t  magnitude, ::System::Random*  random) ;

static inline ::Technie::PhysicsCreator::RotatedCapsuleFitter* New_ctor() ;

/// @brief Method ProjectOntoAxis, addr 0xadc8098, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectOntoAxis(::Technie::PhysicsCreator::ConstructionPlane*  plane, ::UnityEngine::Vector3  point) ;

/// @brief Method Refine, addr 0xadc3e74, size 0x208, virtual false, abstract: false, final false
static inline void Refine(::Technie::PhysicsCreator::RotatedCapsule  inputCapule, ::Technie::PhysicsCreator::ConstructionPlane*  inputPlane, ::ArrayW<::UnityEngine::Vector3>  hullVertices, ::by_ref<::Technie::PhysicsCreator::RotatedCapsule>  bestCapsule, ::by_ref<::Technie::PhysicsCreator::ConstructionPlane*>  bestPlane) ;

/// @brief Method ToDef, addr 0xadc7f00, size 0x98, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::CapsuleDef ToDef(::Technie::PhysicsCreator::RotatedCapsule  capsule, ::Technie::PhysicsCreator::ConstructionPlane*  plane) ;

/// @brief Method .ctor, addr 0xadc81c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatedCapsuleFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatedCapsuleFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatedCapsuleFitter(RotatedCapsuleFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatedCapsuleFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatedCapsuleFitter(RotatedCapsuleFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::RotatedCapsuleFitter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
