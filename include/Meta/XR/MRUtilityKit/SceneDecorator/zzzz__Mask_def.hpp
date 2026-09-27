#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Mask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Mask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class Mask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::Mask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Mask*, "Meta.XR.MRUtilityKit.SceneDecorator", "Mask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies UnityEngine.ScriptableObject
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Mask
class CORDL_TYPE Mask : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::Mask* New_ctor() ;

/// @brief Method SampleMask, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

/// @brief Method SampleMask, addr 0x9f51468, size 0x9c, virtual false, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate, float_t  limitMin, float_t  limitMax, float_t  scale, float_t  offset) ;

/// @brief Method SampleMask, addr 0x9f51d94, size 0x5c, virtual false, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate, float_t  scale, float_t  offset) ;

/// @brief Method .ctor, addr 0x9f509bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mask(Mask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mask(Mask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25934};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
