#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/WorleyNoise.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WorleyNoise)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class WorleyNoise;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::WorleyNoise*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::WorleyNoise*, "Meta.XR.MRUtilityKit", "WorleyNoise");
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.WorleyNoise
class CORDL_TYPE WorleyNoise : public ::System::Object {
public:
// Declarations
/// @brief Method cellular, addr 0x9f4f528, size 0x480, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 cellular(::UnityEngine::Vector2  P) ;

/// @brief Method mod289, addr 0x9f4f3d4, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 mod289(::UnityEngine::Vector2  v) ;

/// @brief Method mod289, addr 0x9f4f408, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 mod289(::UnityEngine::Vector3  v) ;

/// @brief Method mod7, addr 0x9f4f4f4, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 mod7(::UnityEngine::Vector3  v) ;

/// @brief Method mod7, addr 0x9f4f4dc, size 0x18, virtual false, abstract: false, final false
static inline float_t mod7(float_t  v) ;

/// @brief Method permute, addr 0x9f4f45c, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 permute(::UnityEngine::Vector3  x) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorleyNoise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorleyNoise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorleyNoise(WorleyNoise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorleyNoise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorleyNoise(WorleyNoise const& ) = delete;

/// @brief Field K offset 0xffffffff size 0x4
static constexpr float_t  K{static_cast<float_t>(0.14285715f)};

/// @brief Field Ko offset 0xffffffff size 0x4
static constexpr float_t  Ko{static_cast<float_t>(0.42857143f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25911};

/// @brief Field jitter offset 0xffffffff size 0x4
static constexpr float_t  jitter{static_cast<float_t>(1.0f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::WorleyNoise) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
