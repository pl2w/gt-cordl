#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorBlendShapeTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorBlendShapeTarget)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorBlendShapeTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*, "", "VoiceLoudnessReactorBlendShapeTarget");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorBlendShapeTarget
class CORDL_TYPE VoiceLoudnessReactorBlendShapeTarget : public ::System::Object {
public:
// Declarations
/// @brief Field BlendShapeIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlendShapeIndex, put=__cordl_internal_set_BlendShapeIndex)) int32_t  BlendShapeIndex;

/// @brief Field SkinnedMeshRenderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkinnedMeshRenderer, put=__cordl_internal_set_SkinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  SkinnedMeshRenderer;

/// @brief Field UseSmoothedLoudness, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSmoothedLoudness, put=__cordl_internal_set_UseSmoothedLoudness)) bool  UseSmoothedLoudness;

/// @brief Field maxValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) float_t  maxValue;

/// @brief Field minValue, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) float_t  minValue;

static inline ::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_BlendShapeIndex() const;

constexpr int32_t& __cordl_internal_get_BlendShapeIndex() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_SkinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_SkinnedMeshRenderer() ;

constexpr bool const& __cordl_internal_get_UseSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_UseSmoothedLoudness() ;

constexpr float_t const& __cordl_internal_get_maxValue() const;

constexpr float_t& __cordl_internal_get_maxValue() ;

constexpr float_t const& __cordl_internal_get_minValue() const;

constexpr float_t& __cordl_internal_get_minValue() ;

constexpr void __cordl_internal_set_BlendShapeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_SkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_UseSmoothedLoudness(bool  value) ;

constexpr void __cordl_internal_set_maxValue(float_t  value) ;

constexpr void __cordl_internal_set_minValue(float_t  value) ;

/// @brief Method .ctor, addr 0x5b40f64, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorBlendShapeTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorBlendShapeTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorBlendShapeTarget(VoiceLoudnessReactorBlendShapeTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorBlendShapeTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorBlendShapeTarget(VoiceLoudnessReactorBlendShapeTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3718};

/// @brief Field SkinnedMeshRenderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___SkinnedMeshRenderer;

/// @brief Field BlendShapeIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___BlendShapeIndex;

/// [Tooltip("Blend shape weight at minimum loudness ")]
/// @brief Field minValue, offset: 0x1c, size: 0x4, def value: None
 float_t  ___minValue;

/// [Tooltip("Blend shape weight at maximum loudness (use 100 for full weighting)\nA number higher than 100 can be used to have full weighting at lower voice loudness")]
/// @brief Field maxValue, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxValue;

/// @brief Field UseSmoothedLoudness, offset: 0x24, size: 0x1, def value: None
 bool  ___UseSmoothedLoudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget, ___SkinnedMeshRenderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget, ___BlendShapeIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget, ___minValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget, ___maxValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget, ___UseSmoothedLoudness) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
