#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/SphereFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SphereFitter)
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
class Sphere;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class SphereFitter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::SphereFitter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::SphereFitter*, "Technie.PhysicsCreator", "SphereFitter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.SphereFitter
class CORDL_TYPE SphereFitter : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateBoundingSphere, addr 0xadc82dc, size 0x334, virtual false, abstract: false, final false
inline bool CalculateBoundingSphere(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::UnityEngine::Vector3>  sphereCenter, ::by_ref<float_t>  sphereRadius) ;

/// @brief Method Fit, addr 0xadc81cc, size 0x100, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Sphere* Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method Fit, addr 0xadc8610, size 0xbc, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Sphere* Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices) ;

static inline ::Technie::PhysicsCreator::SphereFitter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc88f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereFitter(SphereFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereFitter(SphereFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30495};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::SphereFitter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
