#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ContinuousTurnProviderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousTurnProviderBase)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ContinuousTurnProviderBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "ContinuousTurnProviderBase");
// [Obsolete("The ContinuousMoveProviderBase has been deprecated in XRI 3.0.0 and will be removed in a future version of XRI. Please use ContinuousTurnProvider instead.", false)]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
class CORDL_TYPE ContinuousTurnProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
/// @brief Field m_IsTurningXROrigin, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsTurningXROrigin, put=__cordl_internal_set_m_IsTurningXROrigin)) bool  m_IsTurningXROrigin;

/// @brief Field m_TurnSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnSpeed, put=__cordl_internal_set_m_TurnSpeed)) float_t  m_TurnSpeed;

 __declspec(property(get=get_turnSpeed, put=set_turnSpeed)) float_t  turnSpeed;

/// @brief Method GetTurnAmount, addr 0xb4186c0, size 0x114, virtual true, abstract: false, final false
inline float_t GetTurnAmount(::UnityEngine::Vector2  input) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase* New_ctor() ;

/// @brief Method ReadInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method TurnRig, addr 0xb418584, size 0x13c, virtual false, abstract: false, final false
inline void TurnRig(float_t  turnAmount) ;

/// @brief Method Update, addr 0xb418508, size 0x7c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_m_IsTurningXROrigin() const;

constexpr bool& __cordl_internal_get_m_IsTurningXROrigin() ;

constexpr float_t const& __cordl_internal_get_m_TurnSpeed() const;

constexpr float_t& __cordl_internal_get_m_TurnSpeed() ;

constexpr void __cordl_internal_set_m_IsTurningXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_TurnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xb4187d4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_turnSpeed, addr 0xb4184f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_turnSpeed() ;

/// @brief Method set_turnSpeed, addr 0xb418500, size 0x8, virtual false, abstract: false, final false
inline void set_turnSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousTurnProviderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousTurnProviderBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousTurnProviderBase(ContinuousTurnProviderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousTurnProviderBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousTurnProviderBase(ContinuousTurnProviderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11117};

/// [SerializeField]
/// [Tooltip("The number of degrees/second clockwise to rotate when turning clockwise.")]
/// @brief Field m_TurnSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_TurnSpeed;

/// @brief Field m_IsTurningXROrigin, offset: 0x9c, size: 0x1, def value: None
 bool  ___m_IsTurningXROrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase, ___m_TurnSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase, ___m_IsTurningXROrigin) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
