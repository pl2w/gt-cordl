#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRHandSkeletonPokeDisplacer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRHandSkeletonPokeDisplacer)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IPokeStateDataProvider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRHandSkeletonPokeDisplacer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRHandSkeletonPokeDisplacer");
// [AddComponentMenu("XR/XR Hand Skeleton Poke Displacer", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.XRHandSkeletonPokeDisplacer.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRHandSkeletonPokeDisplacer
class CORDL_TYPE XRHandSkeletonPokeDisplacer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_fixedOffset, put=set_fixedOffset)) float_t  fixedOffset;

/// @brief Field m_FixedOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FixedOffset, put=__cordl_internal_set_m_FixedOffset)) float_t  m_FixedOffset;

/// @brief Field m_PokeInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeInteractor, put=__cordl_internal_set_m_PokeInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*  m_PokeInteractor;

/// @brief Field m_PokeInteractorObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PokeInteractorObject, put=__cordl_internal_set_m_PokeInteractorObject)) ::UnityW<::UnityEngine::Object>  m_PokeInteractorObject;

/// @brief Field m_PokeStrengthSnapThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeStrengthSnapThreshold, put=__cordl_internal_set_m_PokeStrengthSnapThreshold)) float_t  m_PokeStrengthSnapThreshold;

/// @brief Field m_SmoothingAmount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothingAmount, put=__cordl_internal_set_m_SmoothingAmount)) float_t  m_SmoothingAmount;

 __declspec(property(get=get_pokeInteractor, put=set_pokeInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*  pokeInteractor;

 __declspec(property(get=get_pokeStrengthSnapThreshold, put=set_pokeStrengthSnapThreshold)) float_t  pokeStrengthSnapThreshold;

 __declspec(property(get=get_smoothingAmount, put=set_smoothingAmount)) float_t  smoothingAmount;

/// @brief Method Awake, addr 0xb4b1a1c, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4b1b7c, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4b1af0, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0xb4b1b80, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_FixedOffset() const;

constexpr float_t& __cordl_internal_get_m_FixedOffset() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* const& __cordl_internal_get_m_PokeInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*& __cordl_internal_get_m_PokeInteractor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_PokeInteractorObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_PokeInteractorObject() ;

constexpr float_t const& __cordl_internal_get_m_PokeStrengthSnapThreshold() const;

constexpr float_t& __cordl_internal_get_m_PokeStrengthSnapThreshold() ;

constexpr float_t const& __cordl_internal_get_m_SmoothingAmount() const;

constexpr float_t& __cordl_internal_get_m_SmoothingAmount() ;

constexpr void __cordl_internal_set_m_FixedOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeInteractor(::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*  value) ;

constexpr void __cordl_internal_set_m_PokeInteractorObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_PokeStrengthSnapThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothingAmount(float_t  value) ;

/// @brief Method .ctor, addr 0xb4b1b84, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_fixedOffset, addr 0xb4b1a0c, size 0x8, virtual false, abstract: false, final false
inline float_t get_fixedOffset() ;

/// @brief Method get_pokeInteractor, addr 0xb4b18e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider* get_pokeInteractor() ;

/// @brief Method get_pokeStrengthSnapThreshold, addr 0xb4b19bc, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeStrengthSnapThreshold() ;

/// @brief Method get_smoothingAmount, addr 0xb4b19e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_smoothingAmount() ;

/// @brief Method set_fixedOffset, addr 0xb4b1a14, size 0x8, virtual false, abstract: false, final false
inline void set_fixedOffset(float_t  value) ;

/// @brief Method set_pokeInteractor, addr 0xb4b18ec, size 0xd0, virtual false, abstract: false, final false
inline void set_pokeInteractor(::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*  value) ;

/// @brief Method set_pokeStrengthSnapThreshold, addr 0xb4b19c4, size 0x20, virtual false, abstract: false, final false
inline void set_pokeStrengthSnapThreshold(float_t  value) ;

/// @brief Method set_smoothingAmount, addr 0xb4b19ec, size 0x20, virtual false, abstract: false, final false
inline void set_smoothingAmount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRHandSkeletonPokeDisplacer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRHandSkeletonPokeDisplacer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRHandSkeletonPokeDisplacer(XRHandSkeletonPokeDisplacer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRHandSkeletonPokeDisplacer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRHandSkeletonPokeDisplacer(XRHandSkeletonPokeDisplacer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11593};

/// @brief Field k_MaxSmoothingAmount offset 0xffffffff size 0x4
static constexpr float_t  k_MaxSmoothingAmount{static_cast<float_t>(30.0f)};

/// @brief Field k_MinSmoothingAmount offset 0xffffffff size 0x4
static constexpr float_t  k_MinSmoothingAmount{static_cast<float_t>(0.0f)};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IPokeStateDataProvider))]
/// [Tooltip("Poke interactor reference used to get poke data.")]
/// @brief Field m_PokeInteractorObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_PokeInteractorObject;

/// @brief Field m_PokeInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::IPokeStateDataProvider*  ___m_PokeInteractor;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Threshold poke interaction strength must be above to snap the poke pose to the current pose.")]
/// @brief Field m_PokeStrengthSnapThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_PokeStrengthSnapThreshold;

/// [SerializeField]
/// [Range(0, 30)]
/// [Tooltip("Smoothing to apply to the offset root. If smoothing amount is 0, no smoothing will be applied.")]
/// @brief Field m_SmoothingAmount, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_SmoothingAmount;

/// [SerializeField]
/// [Tooltip("Additional offset subtracted along the poke interaction axis to apply to the root pose when poking. Default value accounts for the width of the finger mesh.")]
/// @brief Field m_FixedOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_FixedOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer, ___m_PokeInteractorObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer, ___m_PokeInteractor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer, ___m_PokeStrengthSnapThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer, ___m_SmoothingAmount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer, ___m_FixedOffset) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRHandSkeletonPokeDisplacer) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
