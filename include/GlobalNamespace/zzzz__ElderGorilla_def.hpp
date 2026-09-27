#pragma once
// IWYU pragma private; include "GlobalNamespace/ElderGorilla.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ElderGorilla)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ElderGorilla;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ElderGorilla*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ElderGorilla*, "", "ElderGorilla");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ElderGorilla
class CORDL_TYPE ElderGorilla : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field countValidArmDists, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_countValidArmDists, put=__cordl_internal_set_countValidArmDists)) int32_t  countValidArmDists;

/// @brief Field savedHeadHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedHeadHeight, put=__cordl_internal_set_savedHeadHeight)) float_t  savedHeadHeight;

/// @brief Field tHMD, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tHMD, put=__cordl_internal_set_tHMD)) ::UnityW<::UnityEngine::Transform>  tHMD;

/// @brief Field tLeftHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tLeftHand, put=__cordl_internal_set_tLeftHand)) ::UnityW<::UnityEngine::Transform>  tLeftHand;

/// @brief Field tRightHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tRightHand, put=__cordl_internal_set_tRightHand)) ::UnityW<::UnityEngine::Transform>  tRightHand;

/// @brief Field timeLastValidArmDist, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastValidArmDist, put=__cordl_internal_set_timeLastValidArmDist)) float_t  timeLastValidArmDist;

/// @brief Field timerTrackedHeadHeight, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_timerTrackedHeadHeight, put=__cordl_internal_set_timerTrackedHeadHeight)) float_t  timerTrackedHeadHeight;

/// @brief Field trackedHeadHeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackedHeadHeight, put=__cordl_internal_set_trackedHeadHeight)) float_t  trackedHeadHeight;

/// @brief Field trackingHeadHeight, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_trackingHeadHeight, put=__cordl_internal_set_trackingHeadHeight)) bool  trackingHeadHeight;

/// @brief Method CheckHandDistance, addr 0x58031bc, size 0xf4, virtual false, abstract: false, final false
inline void CheckHandDistance(::UnityEngine::Transform*  hand) ;

/// @brief Method CheckHeight, addr 0x58032b0, size 0x84, virtual false, abstract: false, final false
inline void CheckHeight() ;

/// @brief Method CheckMicVolume, addr 0x5803334, size 0x114, virtual false, abstract: false, final false
inline void CheckMicVolume() ;

static inline ::GlobalNamespace::ElderGorilla* New_ctor() ;

/// @brief Method Update, addr 0x5802edc, size 0x2e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_countValidArmDists() const;

constexpr int32_t& __cordl_internal_get_countValidArmDists() ;

constexpr float_t const& __cordl_internal_get_savedHeadHeight() const;

constexpr float_t& __cordl_internal_get_savedHeadHeight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tHMD() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tHMD() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tLeftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tLeftHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tRightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tRightHand() ;

constexpr float_t const& __cordl_internal_get_timeLastValidArmDist() const;

constexpr float_t& __cordl_internal_get_timeLastValidArmDist() ;

constexpr float_t const& __cordl_internal_get_timerTrackedHeadHeight() const;

constexpr float_t& __cordl_internal_get_timerTrackedHeadHeight() ;

constexpr float_t const& __cordl_internal_get_trackedHeadHeight() const;

constexpr float_t& __cordl_internal_get_trackedHeadHeight() ;

constexpr bool const& __cordl_internal_get_trackingHeadHeight() const;

constexpr bool& __cordl_internal_get_trackingHeadHeight() ;

constexpr void __cordl_internal_set_countValidArmDists(int32_t  value) ;

constexpr void __cordl_internal_set_savedHeadHeight(float_t  value) ;

constexpr void __cordl_internal_set_tHMD(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tLeftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tRightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_timeLastValidArmDist(float_t  value) ;

constexpr void __cordl_internal_set_timerTrackedHeadHeight(float_t  value) ;

constexpr void __cordl_internal_set_trackedHeadHeight(float_t  value) ;

constexpr void __cordl_internal_set_trackingHeadHeight(bool  value) ;

/// @brief Method .ctor, addr 0x5803448, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElderGorilla() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElderGorilla", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ElderGorilla(ElderGorilla && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElderGorilla", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElderGorilla(ElderGorilla const& ) = delete;

/// @brief Field COOLDOWN_HAND_DIST offset 0xffffffff size 0x4
static constexpr float_t  COOLDOWN_HAND_DIST{static_cast<float_t>(1.0f)};

/// @brief Field MAX_HAND_DIST offset 0xffffffff size 0x4
static constexpr float_t  MAX_HAND_DIST{static_cast<float_t>(1.0f)};

/// @brief Field TIME_VALID_HEAD_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  TIME_VALID_HEAD_HEIGHT{static_cast<float_t>(1.0f)};

/// @brief Field VALID_HAND_DIST offset 0xffffffff size 0x4
static constexpr float_t  VALID_HAND_DIST{static_cast<float_t>(0.75f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1684};

/// @brief Field tHMD, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tHMD;

/// @brief Field tLeftHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tLeftHand;

/// @brief Field tRightHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tRightHand;

/// @brief Field countValidArmDists, offset: 0x38, size: 0x4, def value: None
 int32_t  ___countValidArmDists;

/// @brief Field timeLastValidArmDist, offset: 0x3c, size: 0x4, def value: None
 float_t  ___timeLastValidArmDist;

/// @brief Field trackingHeadHeight, offset: 0x40, size: 0x1, def value: None
 bool  ___trackingHeadHeight;

/// @brief Field trackedHeadHeight, offset: 0x44, size: 0x4, def value: None
 float_t  ___trackedHeadHeight;

/// @brief Field timerTrackedHeadHeight, offset: 0x48, size: 0x4, def value: None
 float_t  ___timerTrackedHeadHeight;

/// @brief Field savedHeadHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ___savedHeadHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___tHMD) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___tLeftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___tRightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___countValidArmDists) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___timeLastValidArmDist) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___trackingHeadHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___trackedHeadHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___timerTrackedHeadHeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ElderGorilla, ___savedHeadHeight) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ElderGorilla) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
