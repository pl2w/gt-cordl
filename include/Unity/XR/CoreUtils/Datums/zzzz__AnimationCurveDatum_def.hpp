#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/AnimationCurveDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
CORDL_MODULE_EXPORT(AnimationCurveDatum)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class AnimationCurveDatum;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*, "Unity.XR.CoreUtils.Datums", "AnimationCurveDatum");
// [CreateAssetMenu(fileName = "AnimationCurveDatum", menuName = "XR/Value Datums/AnimationCurve Datum", order = 0)]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.AnimationCurveDatum
class CORDL_TYPE AnimationCurveDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::AnimationCurve*> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb3fcff4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurveDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationCurveDatum(AnimationCurveDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurveDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationCurveDatum(AnimationCurveDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::AnimationCurveDatum) == 0x38, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
