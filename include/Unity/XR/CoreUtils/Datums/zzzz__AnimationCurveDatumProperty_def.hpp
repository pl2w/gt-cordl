#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/AnimationCurveDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(AnimationCurveDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatum;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatumProperty;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*, "Unity.XR.CoreUtils.Datums", "AnimationCurveDatumProperty");
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty
class CORDL_TYPE AnimationCurveDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::AnimationCurve*,::UnityW<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum>> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*  datum) ;

static inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* New_ctor(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0xb3fd094, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*  datum) ;

/// @brief Method .ctor, addr 0xb3fd03c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurveDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationCurveDatumProperty(AnimationCurveDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationCurveDatumProperty(AnimationCurveDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
