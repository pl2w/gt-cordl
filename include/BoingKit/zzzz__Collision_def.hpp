#pragma once
// IWYU pragma private; include "BoingKit/Collision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Collision)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BoingKit {
class Collision;
}
// Write type traits
MARK_REF_T(::BoingKit::Collision*);
DEFINE_IL2CPP_CLASS(::BoingKit::Collision*, "BoingKit", "Collision");
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.Collision
class CORDL_TYPE Collision : public ::System::Object {
public:
// Declarations
static inline ::BoingKit::Collision* New_ctor() ;

/// @brief Method SphereBox, addr 0x5e2b6c8, size 0x2b0, virtual false, abstract: false, final false
static inline bool SphereBox(::UnityEngine::Vector3  centerOffsetA, float_t  radiusA, ::UnityEngine::Vector3  halfExtentB, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method SphereBoxInverse, addr 0x5e2b978, size 0x5c, virtual false, abstract: false, final false
static inline bool SphereBoxInverse(::UnityEngine::Vector3  centerOffsetA, float_t  radiusA, ::UnityEngine::Vector3  halfExtentB, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method SphereCapsule, addr 0x5e2b2f8, size 0x1f4, virtual false, abstract: false, final false
static inline bool SphereCapsule(::UnityEngine::Vector3  centerA, float_t  radiusA, ::UnityEngine::Vector3  headB, ::UnityEngine::Vector3  tailB, float_t  radiusB, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method SphereCapsuleInverse, addr 0x5e2b4ec, size 0x1dc, virtual false, abstract: false, final false
static inline bool SphereCapsuleInverse(::UnityEngine::Vector3  centerA, float_t  radiusA, ::UnityEngine::Vector3  headB, ::UnityEngine::Vector3  tailB, float_t  radiusB, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method SphereSphere, addr 0x5e24acc, size 0x164, virtual false, abstract: false, final false
static inline bool SphereSphere(::UnityEngine::Vector3  centerA, float_t  radiusA, ::UnityEngine::Vector3  centerB, float_t  radiusB, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method SphereSphereInverse, addr 0x5e2b194, size 0x164, virtual false, abstract: false, final false
static inline bool SphereSphereInverse(::UnityEngine::Vector3  centerA, float_t  radiusA, ::UnityEngine::Vector3  centerB, float_t  radiusB, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method .ctor, addr 0x5e2b9d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Collision(Collision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collision(Collision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5223};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::Collision) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
