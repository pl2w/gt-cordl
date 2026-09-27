#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/UpdateBlendShapeCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateBlendShapeCosmetic)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class UpdateBlendShapeCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic*, "GorillaTag.Cosmetics", "UpdateBlendShapeCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.UpdateBlendShapeCosmetic
class CORDL_TYPE UpdateBlendShapeCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blendShapeIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendShapeIndex, put=__cordl_internal_set_blendShapeIndex)) int32_t  blendShapeIndex;

/// @brief Field blendSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendSpeed, put=__cordl_internal_set_blendSpeed)) float_t  blendSpeed;

/// @brief Field blendStartWeight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendStartWeight, put=__cordl_internal_set_blendStartWeight)) float_t  blendStartWeight;

/// @brief Field currentWeight, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentWeight, put=__cordl_internal_set_currentWeight)) float_t  currentWeight;

/// @brief Field invertPassedBlend, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertPassedBlend, put=__cordl_internal_set_invertPassedBlend)) bool  invertPassedBlend;

/// @brief Field maxBlendShapeWeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxBlendShapeWeight, put=__cordl_internal_set_maxBlendShapeWeight)) float_t  maxBlendShapeWeight;

/// @brief Field skinnedMeshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMeshRenderer, put=__cordl_internal_set_skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMeshRenderer;

/// @brief Field targetWeight, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetWeight, put=__cordl_internal_set_targetWeight)) float_t  targetWeight;

/// @brief Method Awake, addr 0x5da42d0, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FullyBlend, addr 0x5da43b8, size 0xc, virtual false, abstract: false, final false
inline void FullyBlend() ;

/// @brief Method GetBlendValue, addr 0x5da2e70, size 0x20, virtual false, abstract: false, final false
inline float_t GetBlendValue() ;

static inline ::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic* New_ctor() ;

/// @brief Method ResetBlend, addr 0x5da43c4, size 0x8, virtual false, abstract: false, final false
inline void ResetBlend() ;

/// @brief Method SetBlendValue, addr 0x5da4348, size 0x38, virtual false, abstract: false, final false
inline void SetBlendValue(bool  leftHand, float_t  value) ;

/// @brief Method SetBlendValue, addr 0x5da4380, size 0x38, virtual false, abstract: false, final false
inline void SetBlendValue(float_t  value) ;

/// @brief Method Update, addr 0x5da42e0, size 0x68, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_blendShapeIndex() const;

constexpr int32_t& __cordl_internal_get_blendShapeIndex() ;

constexpr float_t const& __cordl_internal_get_blendSpeed() const;

constexpr float_t& __cordl_internal_get_blendSpeed() ;

constexpr float_t const& __cordl_internal_get_blendStartWeight() const;

constexpr float_t& __cordl_internal_get_blendStartWeight() ;

constexpr float_t const& __cordl_internal_get_currentWeight() const;

constexpr float_t& __cordl_internal_get_currentWeight() ;

constexpr bool const& __cordl_internal_get_invertPassedBlend() const;

constexpr bool& __cordl_internal_get_invertPassedBlend() ;

constexpr float_t const& __cordl_internal_get_maxBlendShapeWeight() const;

constexpr float_t& __cordl_internal_get_maxBlendShapeWeight() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMeshRenderer() ;

constexpr float_t const& __cordl_internal_get_targetWeight() const;

constexpr float_t& __cordl_internal_get_targetWeight() ;

constexpr void __cordl_internal_set_blendShapeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_blendSpeed(float_t  value) ;

constexpr void __cordl_internal_set_blendStartWeight(float_t  value) ;

constexpr void __cordl_internal_set_currentWeight(float_t  value) ;

constexpr void __cordl_internal_set_invertPassedBlend(bool  value) ;

constexpr void __cordl_internal_set_maxBlendShapeWeight(float_t  value) ;

constexpr void __cordl_internal_set_skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_targetWeight(float_t  value) ;

/// @brief Method .ctor, addr 0x5da43cc, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateBlendShapeCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateBlendShapeCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateBlendShapeCosmetic(UpdateBlendShapeCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateBlendShapeCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateBlendShapeCosmetic(UpdateBlendShapeCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4980};

/// [Tooltip("The SkinnedMeshRenderer whose BlendShape weight will be updated. This must reference a mesh that has BlendShapes defined in its import settings.")]
/// [SerializeField]
/// @brief Field skinnedMeshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMeshRenderer;

/// [Tooltip("Maximum blend shape weight applied when fully blended. Usually 100 for standard Unity BlendShapes.")]
/// @brief Field maxBlendShapeWeight, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxBlendShapeWeight;

/// [Tooltip("Index of the BlendShape to control. You can find this index in the SkinnedMeshRenderer inspector under \'BlendShapes\'.")]
/// [SerializeField]
/// @brief Field blendShapeIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___blendShapeIndex;

/// [Tooltip("Speed at which the BlendShape transitions toward its target weight. Higher values make blending more responsive, lower values make it smoother.")]
/// [SerializeField]
/// @brief Field blendSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___blendSpeed;

/// [Tooltip("Initial BlendShape weight set when the component awakens. Useful for setting a default deformation state.")]
/// [SerializeField]
/// @brief Field blendStartWeight, offset: 0x34, size: 0x4, def value: None
 float_t  ___blendStartWeight;

/// [Tooltip("If enabled, inverts the incoming blend value (e.g. 0 \u{2192} 1, 0.2 \u{2192} 0.8). Useful when an input should drive the opposite direction of deformation.")]
/// [SerializeField]
/// @brief Field invertPassedBlend, offset: 0x38, size: 0x1, def value: None
 bool  ___invertPassedBlend;

/// @brief Field targetWeight, offset: 0x3c, size: 0x4, def value: None
 float_t  ___targetWeight;

/// @brief Field currentWeight, offset: 0x40, size: 0x4, def value: None
 float_t  ___currentWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___skinnedMeshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___maxBlendShapeWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___blendShapeIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___blendSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___blendStartWeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___invertPassedBlend) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___targetWeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic, ___currentWeight) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
