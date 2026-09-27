#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CookieMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CookieMask_SampleMode_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CookieMask)
namespace GlobalNamespace {
struct CookieMask_SampleMode;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class CookieMask;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask*, "Meta.XR.MRUtilityKit.SceneDecorator", "CookieMask");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.CookieMask::SampleMode, Meta.XR.MRUtilityKit.SceneDecorator.Mask2D
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.CookieMask
class CORDL_TYPE CookieMask : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D {
public:
// Declarations
using SampleMode = ::GlobalNamespace::CookieMask_SampleMode;

/// @brief Field cookie, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cookie, put=__cordl_internal_set_cookie)) ::UnityW<::UnityEngine::Texture2D>  cookie;

/// @brief Field sampleMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleMode, put=__cordl_internal_set_sampleMode)) ::GlobalNamespace::CookieMask_SampleMode  sampleMode;

/// @brief Method Check, addr 0x9f51c84, size 0x8, virtual true, abstract: false, final false
inline bool Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask* New_ctor() ;

/// @brief Method SampleMask, addr 0x9f51950, size 0x308, virtual true, abstract: false, final false
inline float_t SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c) ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cookie() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cookie() ;

constexpr ::GlobalNamespace::CookieMask_SampleMode const& __cordl_internal_get_sampleMode() const;

constexpr ::GlobalNamespace::CookieMask_SampleMode& __cordl_internal_get_sampleMode() ;

constexpr void __cordl_internal_set_cookie(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_sampleMode(::GlobalNamespace::CookieMask_SampleMode  value) ;

/// @brief Method .ctor, addr 0x9f51c8c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CookieMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CookieMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CookieMask(CookieMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CookieMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CookieMask(CookieMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25931};

/// [SerializeField]
/// @brief Field cookie, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cookie;

/// [SerializeField]
/// @brief Field sampleMode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::CookieMask_SampleMode  ___sampleMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask, ___cookie) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask, ___sampleMode) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::CookieMask) == 0x48, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
