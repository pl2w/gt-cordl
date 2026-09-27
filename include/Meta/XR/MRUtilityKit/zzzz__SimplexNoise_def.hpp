#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SimplexNoise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimplexNoise)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class SimplexNoise;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SimplexNoise*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SimplexNoise*, "Meta.XR.MRUtilityKit", "SimplexNoise");
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SimplexNoise
class CORDL_TYPE SimplexNoise : public ::System::Object {
public:
// Declarations
/// @brief Method srdnoise, addr 0x9f4f9e4, size 0x1d8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 srdnoise(::UnityEngine::Vector2  pos, float_t  rot) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimplexNoise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimplexNoise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimplexNoise(SimplexNoise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimplexNoise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimplexNoise(SimplexNoise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SimplexNoise) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
