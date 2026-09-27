#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFireballControllerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaFireballControllerManager)
// Forward declare root types
namespace GlobalNamespace {
class GorillaFireballControllerManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaFireballControllerManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFireballControllerManager*, "", "GorillaFireballControllerManager");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaFireballControllerManager
class CORDL_TYPE GorillaFireballControllerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hasInitialized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitialized, put=__cordl_internal_set_hasInitialized)) bool  hasInitialized;

/// @brief Field leftHand, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityEngine::XR::InputDevice  leftHand;

/// @brief Field leftHandLastState, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftHandLastState, put=__cordl_internal_set_leftHandLastState)) float_t  leftHandLastState;

/// @brief Field rightHand, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityEngine::XR::InputDevice  rightHand;

/// @brief Field rightHandLastState, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightHandLastState, put=__cordl_internal_set_rightHandLastState)) float_t  rightHandLastState;

/// @brief Field throwingThreshold, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwingThreshold, put=__cordl_internal_set_throwingThreshold)) float_t  throwingThreshold;

/// @brief Method CreateFireball, addr 0x59a5350, size 0x26c, virtual false, abstract: false, final false
inline void CreateFireball(bool  isLeftHand) ;

static inline ::GlobalNamespace::GorillaFireballControllerManager* New_ctor() ;

/// @brief Method TryThrowFireball, addr 0x59a55bc, size 0x204, virtual false, abstract: false, final false
inline void TryThrowFireball(bool  isLeftHand) ;

/// @brief Method Update, addr 0x59a5124, size 0x22c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_hasInitialized() const;

constexpr bool& __cordl_internal_get_hasInitialized() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_leftHand() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_leftHand() ;

constexpr float_t const& __cordl_internal_get_leftHandLastState() const;

constexpr float_t& __cordl_internal_get_leftHandLastState() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_rightHand() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_rightHand() ;

constexpr float_t const& __cordl_internal_get_rightHandLastState() const;

constexpr float_t& __cordl_internal_get_rightHandLastState() ;

constexpr float_t const& __cordl_internal_get_throwingThreshold() const;

constexpr float_t& __cordl_internal_get_throwingThreshold() ;

constexpr void __cordl_internal_set_hasInitialized(bool  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_leftHandLastState(float_t  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_rightHandLastState(float_t  value) ;

constexpr void __cordl_internal_set_throwingThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x59a57c0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFireballControllerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFireballControllerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFireballControllerManager(GorillaFireballControllerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFireballControllerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFireballControllerManager(GorillaFireballControllerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2631};

/// @brief Field leftHand, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___leftHand;

/// @brief Field rightHand, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___rightHand;

/// @brief Field hasInitialized, offset: 0x40, size: 0x1, def value: None
 bool  ___hasInitialized;

/// @brief Field leftHandLastState, offset: 0x44, size: 0x4, def value: None
 float_t  ___leftHandLastState;

/// @brief Field rightHandLastState, offset: 0x48, size: 0x4, def value: None
 float_t  ___rightHandLastState;

/// @brief Field throwingThreshold, offset: 0x4c, size: 0x4, def value: None
 float_t  ___throwingThreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFireballControllerManager, ___leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireballControllerManager, ___rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireballControllerManager, ___hasInitialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireballControllerManager, ___leftHandLastState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireballControllerManager, ___rightHandLastState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFireballControllerManager, ___throwingThreshold) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFireballControllerManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
