#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/SnapTurnProviderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SnapTurnProviderBase)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class SnapTurnProviderBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "SnapTurnProviderBase");
// [Obsolete("SnapTurnProviderBase has been deprecated in XRI 3.0.0 and will be removed in a future version of XRI. Please use SnapTurnProvider instead.", false)]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase
class CORDL_TYPE SnapTurnProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider {
public:
// Declarations
 __declspec(property(get=get_debounceTime, put=set_debounceTime)) float_t  debounceTime;

 __declspec(property(get=get_delayTime, put=set_delayTime)) float_t  delayTime;

 __declspec(property(get=get_enableTurnAround, put=set_enableTurnAround)) bool  enableTurnAround;

 __declspec(property(get=get_enableTurnLeftRight, put=set_enableTurnLeftRight)) bool  enableTurnLeftRight;

/// @brief Field m_CurrentTurnAmount, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentTurnAmount, put=__cordl_internal_set_m_CurrentTurnAmount)) float_t  m_CurrentTurnAmount;

/// @brief Field m_DebounceTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DebounceTime, put=__cordl_internal_set_m_DebounceTime)) float_t  m_DebounceTime;

/// @brief Field m_DelayStartTime, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DelayStartTime, put=__cordl_internal_set_m_DelayStartTime)) float_t  m_DelayStartTime;

/// @brief Field m_DelayTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DelayTime, put=__cordl_internal_set_m_DelayTime)) float_t  m_DelayTime;

/// @brief Field m_EnableTurnAround, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTurnAround, put=__cordl_internal_set_m_EnableTurnAround)) bool  m_EnableTurnAround;

/// @brief Field m_EnableTurnLeftRight, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableTurnLeftRight, put=__cordl_internal_set_m_EnableTurnLeftRight)) bool  m_EnableTurnLeftRight;

/// @brief Field m_TimeStarted, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeStarted, put=__cordl_internal_set_m_TimeStarted)) float_t  m_TimeStarted;

/// @brief Field m_TurnAmount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnAmount, put=__cordl_internal_set_m_TurnAmount)) float_t  m_TurnAmount;

/// @brief Field m_TurnAroundActivated, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TurnAroundActivated, put=__cordl_internal_set_m_TurnAroundActivated)) bool  m_TurnAroundActivated;

 __declspec(property(get=get_turnAmount, put=set_turnAmount)) float_t  turnAmount;

/// @brief Method Awake, addr 0xb419d7c, size 0x140, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetTurnAmount, addr 0xb41a2e8, size 0xf8, virtual true, abstract: false, final false
inline float_t GetTurnAmount(::UnityEngine::Vector2  input) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase* New_ctor() ;

/// @brief Method ReadInput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 ReadInput() ;

/// @brief Method StartTurn, addr 0xb41a194, size 0x154, virtual false, abstract: false, final false
inline void StartTurn(float_t  amount) ;

/// @brief Method Update, addr 0xb419ebc, size 0x2d8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_m_CurrentTurnAmount() const;

constexpr float_t& __cordl_internal_get_m_CurrentTurnAmount() ;

constexpr float_t const& __cordl_internal_get_m_DebounceTime() const;

constexpr float_t& __cordl_internal_get_m_DebounceTime() ;

constexpr float_t const& __cordl_internal_get_m_DelayStartTime() const;

constexpr float_t& __cordl_internal_get_m_DelayStartTime() ;

constexpr float_t const& __cordl_internal_get_m_DelayTime() const;

constexpr float_t& __cordl_internal_get_m_DelayTime() ;

constexpr bool const& __cordl_internal_get_m_EnableTurnAround() const;

constexpr bool& __cordl_internal_get_m_EnableTurnAround() ;

constexpr bool const& __cordl_internal_get_m_EnableTurnLeftRight() const;

constexpr bool& __cordl_internal_get_m_EnableTurnLeftRight() ;

constexpr float_t const& __cordl_internal_get_m_TimeStarted() const;

constexpr float_t& __cordl_internal_get_m_TimeStarted() ;

constexpr float_t const& __cordl_internal_get_m_TurnAmount() const;

constexpr float_t& __cordl_internal_get_m_TurnAmount() ;

constexpr bool const& __cordl_internal_get_m_TurnAroundActivated() const;

constexpr bool& __cordl_internal_get_m_TurnAroundActivated() ;

constexpr void __cordl_internal_set_m_CurrentTurnAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_DebounceTime(float_t  value) ;

constexpr void __cordl_internal_set_m_DelayStartTime(float_t  value) ;

constexpr void __cordl_internal_set_m_DelayTime(float_t  value) ;

constexpr void __cordl_internal_set_m_EnableTurnAround(bool  value) ;

constexpr void __cordl_internal_set_m_EnableTurnLeftRight(bool  value) ;

constexpr void __cordl_internal_set_m_TimeStarted(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnAroundActivated(bool  value) ;

/// @brief Method .ctor, addr 0xb4196dc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_debounceTime, addr 0xb419d3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_debounceTime() ;

/// @brief Method get_delayTime, addr 0xb419d6c, size 0x8, virtual false, abstract: false, final false
inline float_t get_delayTime() ;

/// @brief Method get_enableTurnAround, addr 0xb419d5c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTurnAround() ;

/// @brief Method get_enableTurnLeftRight, addr 0xb419d4c, size 0x8, virtual false, abstract: false, final false
inline bool get_enableTurnLeftRight() ;

/// @brief Method get_turnAmount, addr 0xb419d2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_turnAmount() ;

/// @brief Method set_debounceTime, addr 0xb419d44, size 0x8, virtual false, abstract: false, final false
inline void set_debounceTime(float_t  value) ;

/// @brief Method set_delayTime, addr 0xb419d74, size 0x8, virtual false, abstract: false, final false
inline void set_delayTime(float_t  value) ;

/// @brief Method set_enableTurnAround, addr 0xb419d64, size 0x8, virtual false, abstract: false, final false
inline void set_enableTurnAround(bool  value) ;

/// @brief Method set_enableTurnLeftRight, addr 0xb419d54, size 0x8, virtual false, abstract: false, final false
inline void set_enableTurnLeftRight(bool  value) ;

/// @brief Method set_turnAmount, addr 0xb419d34, size 0x8, virtual false, abstract: false, final false
inline void set_turnAmount(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapTurnProviderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapTurnProviderBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapTurnProviderBase(SnapTurnProviderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapTurnProviderBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapTurnProviderBase(SnapTurnProviderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11127};

/// [SerializeField]
/// [Tooltip("The number of degrees clockwise to rotate when snap turning clockwise.")]
/// @brief Field m_TurnAmount, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_TurnAmount;

/// [SerializeField]
/// [Tooltip("The amount of time that the system will wait before starting another snap turn.")]
/// @brief Field m_DebounceTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___m_DebounceTime;

/// [SerializeField]
/// [Tooltip("Controls whether to enable left & right snap turns.")]
/// @brief Field m_EnableTurnLeftRight, offset: 0xa0, size: 0x1, def value: None
 bool  ___m_EnableTurnLeftRight;

/// [SerializeField]
/// [Tooltip("Controls whether to enable 180\u{b0} snap turns.")]
/// @brief Field m_EnableTurnAround, offset: 0xa1, size: 0x1, def value: None
 bool  ___m_EnableTurnAround;

/// [SerializeField]
/// [Tooltip("The time (in seconds) to delay the first turn after receiving initial input for the turn.")]
/// @brief Field m_DelayTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_DelayTime;

/// @brief Field m_CurrentTurnAmount, offset: 0xa8, size: 0x4, def value: None
 float_t  ___m_CurrentTurnAmount;

/// @brief Field m_TimeStarted, offset: 0xac, size: 0x4, def value: None
 float_t  ___m_TimeStarted;

/// @brief Field m_DelayStartTime, offset: 0xb0, size: 0x4, def value: None
 float_t  ___m_DelayStartTime;

/// @brief Field m_TurnAroundActivated, offset: 0xb4, size: 0x1, def value: None
 bool  ___m_TurnAroundActivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_TurnAmount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_DebounceTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_EnableTurnLeftRight) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_EnableTurnAround) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_DelayTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_CurrentTurnAmount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_TimeStarted) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_DelayStartTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase, ___m_TurnAroundActivated) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
