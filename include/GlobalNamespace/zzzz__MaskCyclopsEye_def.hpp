#pragma once
// IWYU pragma private; include "GlobalNamespace/MaskCyclopsEye.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaskCyclopsEye)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class MaskCyclopsEye;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaskCyclopsEye*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaskCyclopsEye*, "", "MaskCyclopsEye");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaskCyclopsEye
class CORDL_TYPE MaskCyclopsEye : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnBlink, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBlink, put=__cordl_internal_set_OnBlink)) ::UnityEngine::Events::UnityEvent*  OnBlink;

/// @brief Field maxWaitTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxWaitTime, put=__cordl_internal_set_maxWaitTime)) float_t  maxWaitTime;

/// @brief Field minWaitTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minWaitTime, put=__cordl_internal_set_minWaitTime)) float_t  minWaitTime;

/// @brief Field nextBlinkTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextBlinkTime, put=__cordl_internal_set_nextBlinkTime)) float_t  nextBlinkTime;

static inline ::GlobalNamespace::MaskCyclopsEye* New_ctor() ;

/// @brief Method OnDisable, addr 0x57f04d8, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57f0468, size 0x38, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ScheduleNextBlink, addr 0x57f04a0, size 0x38, virtual false, abstract: false, final false
inline void ScheduleNextBlink() ;

/// @brief Method Tick, addr 0x57f0538, size 0x5c, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method Update, addr 0x57f04dc, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnBlink() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnBlink() ;

constexpr float_t const& __cordl_internal_get_maxWaitTime() const;

constexpr float_t& __cordl_internal_get_maxWaitTime() ;

constexpr float_t const& __cordl_internal_get_minWaitTime() const;

constexpr float_t& __cordl_internal_get_minWaitTime() ;

constexpr float_t const& __cordl_internal_get_nextBlinkTime() const;

constexpr float_t& __cordl_internal_get_nextBlinkTime() ;

constexpr void __cordl_internal_set_OnBlink(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_maxWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_minWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_nextBlinkTime(float_t  value) ;

/// @brief Method .ctor, addr 0x57f0594, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskCyclopsEye() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskCyclopsEye", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskCyclopsEye(MaskCyclopsEye && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskCyclopsEye", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskCyclopsEye(MaskCyclopsEye const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{188};

/// [Tooltip("Invoked when it\'s time to trigger a blink (e.g., play animation one-shot).")]
/// @brief Field OnBlink, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnBlink;

/// [Tooltip("Minimum time in seconds between blinks.")]
/// [SerializeField]
/// @brief Field minWaitTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___minWaitTime;

/// [Tooltip("Maximum time in seconds between blinks.")]
/// [SerializeField]
/// @brief Field maxWaitTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxWaitTime;

/// @brief Field nextBlinkTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___nextBlinkTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaskCyclopsEye, ___OnBlink) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaskCyclopsEye, ___minWaitTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaskCyclopsEye, ___maxWaitTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaskCyclopsEye, ___nextBlinkTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaskCyclopsEye) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
