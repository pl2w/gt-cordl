#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeAxis_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PokeThresholdData)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeAxis;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdData;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeThresholdData");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Filtering.PokeAxis
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdData
class CORDL_TYPE PokeThresholdData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_enablePokeAngleThreshold, put=set_enablePokeAngleThreshold)) bool  enablePokeAngleThreshold;

 __declspec(property(get=get_interactionDepthOffset, put=set_interactionDepthOffset)) float_t  interactionDepthOffset;

/// @brief Field m_EnablePokeAngleThreshold, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnablePokeAngleThreshold, put=__cordl_internal_set_m_EnablePokeAngleThreshold)) bool  m_EnablePokeAngleThreshold;

/// @brief Field m_InteractionDepthOffset, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InteractionDepthOffset, put=__cordl_internal_set_m_InteractionDepthOffset)) float_t  m_InteractionDepthOffset;

/// @brief Field m_PokeAngleThreshold, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeAngleThreshold, put=__cordl_internal_set_m_PokeAngleThreshold)) float_t  m_PokeAngleThreshold;

/// @brief Field m_PokeDirection, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PokeDirection, put=__cordl_internal_set_m_PokeDirection)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  m_PokeDirection;

 __declspec(property(get=get_pokeAngleThreshold, put=set_pokeAngleThreshold)) float_t  pokeAngleThreshold;

 __declspec(property(get=get_pokeDirection, put=set_pokeDirection)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  pokeDirection;

/// @brief Method GetSelectEntranceVectorDotThreshold, addr 0xb4a5944, size 0x14, virtual false, abstract: false, final false
inline float_t GetSelectEntranceVectorDotThreshold() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_EnablePokeAngleThreshold() const;

constexpr bool& __cordl_internal_get_m_EnablePokeAngleThreshold() ;

constexpr float_t const& __cordl_internal_get_m_InteractionDepthOffset() const;

constexpr float_t& __cordl_internal_get_m_InteractionDepthOffset() ;

constexpr float_t const& __cordl_internal_get_m_PokeAngleThreshold() const;

constexpr float_t& __cordl_internal_get_m_PokeAngleThreshold() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const& __cordl_internal_get_m_PokeDirection() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis& __cordl_internal_get_m_PokeDirection() ;

constexpr void __cordl_internal_set_m_EnablePokeAngleThreshold(bool  value) ;

constexpr void __cordl_internal_set_m_InteractionDepthOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_PokeDirection(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  value) ;

/// @brief Method .ctor, addr 0xb4a5958, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enablePokeAngleThreshold, addr 0xb4a5924, size 0x8, virtual false, abstract: false, final false
inline bool get_enablePokeAngleThreshold() ;

/// @brief Method get_interactionDepthOffset, addr 0xb4a5914, size 0x8, virtual false, abstract: false, final false
inline float_t get_interactionDepthOffset() ;

/// @brief Method get_pokeAngleThreshold, addr 0xb4a5934, size 0x8, virtual false, abstract: false, final false
inline float_t get_pokeAngleThreshold() ;

/// @brief Method get_pokeDirection, addr 0xb4a5904, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis get_pokeDirection() ;

/// @brief Method set_enablePokeAngleThreshold, addr 0xb4a592c, size 0x8, virtual false, abstract: false, final false
inline void set_enablePokeAngleThreshold(bool  value) ;

/// @brief Method set_interactionDepthOffset, addr 0xb4a591c, size 0x8, virtual false, abstract: false, final false
inline void set_interactionDepthOffset(float_t  value) ;

/// @brief Method set_pokeAngleThreshold, addr 0xb4a593c, size 0x8, virtual false, abstract: false, final false
inline void set_pokeAngleThreshold(float_t  value) ;

/// @brief Method set_pokeDirection, addr 0xb4a590c, size 0x8, virtual false, abstract: false, final false
inline void set_pokeDirection(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeThresholdData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeThresholdData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeThresholdData(PokeThresholdData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeThresholdData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeThresholdData(PokeThresholdData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11552};

/// [SerializeField]
/// [Tooltip("The axis along which the poke interaction will be constrained.")]
/// @brief Field m_PokeDirection, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis  ___m_PokeDirection;

/// [SerializeField]
/// [Tooltip("Distance along the poke interactable interaction axis that allows for a poke to be triggered sooner/with less precision.")]
/// @brief Field m_InteractionDepthOffset, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_InteractionDepthOffset;

/// [SerializeField]
/// [Tooltip("When enabled, the filter will check that a poke action is started and moves within the poke angle threshold along the poke direction axis.")]
/// @brief Field m_EnablePokeAngleThreshold, offset: 0x18, size: 0x1, def value: None
 bool  ___m_EnablePokeAngleThreshold;

/// [SerializeField]
/// [Tooltip("The maximum allowed angle (in degrees) from the poke direction axis that will trigger a select interaction.")]
/// [Range(0, 89.9)]
/// @brief Field m_PokeAngleThreshold, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_PokeAngleThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData, ___m_PokeDirection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData, ___m_InteractionDepthOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData, ___m_EnablePokeAngleThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData, ___m_PokeAngleThreshold) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
