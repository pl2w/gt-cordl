#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/NotInsideMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NotInsideMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class NotInsideMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "NotInsideMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, Meta.XR.MRUtilityKit.SceneDecorator.Mask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.NotInsideMask
class CORDL_TYPE NotInsideMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
/// @brief Field Labels, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Labels, put=__cordl_internal_set_Labels)) ::GlobalNamespace::MRUKAnchor_SceneLabels  Labels;

/// @brief Method Check, addr 0x9f51f6c, size 0x310, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f51f64, size 0x8, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_Labels() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_Labels() ;

constexpr void __cordl_internal_set_Labels(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

/// @brief Method .ctor, addr 0x9f5227c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotInsideMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotInsideMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NotInsideMask(NotInsideMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotInsideMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotInsideMask(NotInsideMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25936};

/// [SerializeField]
/// @brief Field Labels, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___Labels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask, ___Labels) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::NotInsideMask) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
