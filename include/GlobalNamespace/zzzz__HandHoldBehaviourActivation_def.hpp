#pragma once
// IWYU pragma private; include "GlobalNamespace/HandHoldBehaviourActivation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandHoldBehaviourActivation)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class HandHoldBehaviourActivation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandHoldBehaviourActivation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandHoldBehaviourActivation*, "", "HandHoldBehaviourActivation");
// Dependencies Tappable
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandHoldBehaviourActivation
class CORDL_TYPE HandHoldBehaviourActivation : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field ActivationStart, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActivationStart, put=__cordl_internal_set_ActivationStart)) ::UnityEngine::Events::UnityEvent*  ActivationStart;

/// @brief Field ActivationStop, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActivationStop, put=__cordl_internal_set_ActivationStop)) ::UnityEngine::Events::UnityEvent*  ActivationStop;

/// @brief Field grabs, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabs, put=__cordl_internal_set_grabs)) int32_t  grabs;

/// @brief Field m_playerGrabCounts, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_playerGrabCounts, put=__cordl_internal_set_m_playerGrabCounts)) ::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>*  m_playerGrabCounts;

static inline ::GlobalNamespace::HandHoldBehaviourActivation* New_ctor() ;

/// @brief Method OnEnable, addr 0x56bf5b0, size 0x188, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrabLocal, addr 0x56bf738, size 0x104, virtual true, abstract: false, final false
inline void OnGrabLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// @brief Method OnLeftRoom, addr 0x56bfa38, size 0x164, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerLeftRoom, addr 0x56bf93c, size 0xfc, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnReleaseLocal, addr 0x56bf83c, size 0x100, virtual true, abstract: false, final false
inline void OnReleaseLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ActivationStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ActivationStart() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ActivationStop() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ActivationStop() ;

constexpr int32_t const& __cordl_internal_get_grabs() const;

constexpr int32_t& __cordl_internal_get_grabs() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>* const& __cordl_internal_get_m_playerGrabCounts() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>*& __cordl_internal_get_m_playerGrabCounts() ;

constexpr void __cordl_internal_set_ActivationStart(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ActivationStop(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_grabs(int32_t  value) ;

constexpr void __cordl_internal_set_m_playerGrabCounts(::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>*  value) ;

/// @brief Method .ctor, addr 0x56bfb9c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandHoldBehaviourActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandHoldBehaviourActivation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandHoldBehaviourActivation(HandHoldBehaviourActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandHoldBehaviourActivation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandHoldBehaviourActivation(HandHoldBehaviourActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{994};

/// [SerializeField]
/// @brief Field ActivationStart, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ActivationStart;

/// [SerializeField]
/// @brief Field ActivationStop, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ActivationStop;

/// @brief Field grabs, offset: 0x58, size: 0x4, def value: None
 int32_t  ___grabs;

/// @brief Field m_playerGrabCounts, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>*  ___m_playerGrabCounts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandHoldBehaviourActivation, ___ActivationStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHoldBehaviourActivation, ___ActivationStop) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHoldBehaviourActivation, ___grabs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandHoldBehaviourActivation, ___m_playerGrabCounts) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandHoldBehaviourActivation) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
