#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SpaceMapGPUMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpaceMapGPUMask)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace Meta::XR::MRUtilityKit {
class SpaceMapGPU;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SpaceMapGPUMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "SpaceMapGPUMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SpaceMapGPUMask
class CORDL_TYPE SpaceMapGPUMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
/// @brief Field spaceMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_spaceMap, put=__cordl_internal_set_spaceMap)) ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  spaceMap;

/// @brief Method Check, addr 0x9f524a8, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f52378, size 0x130, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate) ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU> const& __cordl_internal_get_spaceMap() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>& __cordl_internal_get_spaceMap() ;

constexpr void __cordl_internal_set_spaceMap(::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  value) ;

/// @brief Method .ctor, addr 0x9f524b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceMapGPUMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceMapGPUMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceMapGPUMask(SpaceMapGPUMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceMapGPUMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceMapGPUMask(SpaceMapGPUMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25941};

/// @brief Field spaceMap, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SpaceMapGPU>  ___spaceMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask, ___spaceMap) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SpaceMapGPUMask) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
