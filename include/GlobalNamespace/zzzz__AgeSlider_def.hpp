#pragma once
// IWYU pragma private; include "GlobalNamespace/AgeSlider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AgeSlider)
namespace GlobalNamespace {
class AgeSlider_SliderHeldEvent;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class AgeSlider;
}
namespace GlobalNamespace {
class AgeSlider_SliderHeldEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AgeSlider*);
MARK_REF_T(::GlobalNamespace::AgeSlider_SliderHeldEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AgeSlider*, "", "AgeSlider");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AgeSlider_SliderHeldEvent*, "", "AgeSlider/SliderHeldEvent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AgeSlider
class CORDL_TYPE AgeSlider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SliderHeldEvent = ::GlobalNamespace::AgeSlider_SliderHeldEvent;

/// @brief Field _ageGateActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ageGateActive, put=setStaticF__ageGateActive)) bool  _ageGateActive;

/// @brief Field _ageValueTxt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageValueTxt, put=__cordl_internal_set__ageValueTxt)) ::UnityW<::TMPro::TMP_Text>  _ageValueTxt;

/// @brief Field _confirmButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::UnityEngine::GameObject>  _confirmButton;

/// @brief Field _currentAge, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAge, put=__cordl_internal_set__currentAge)) int32_t  _currentAge;

/// @brief Field _maxAge, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAge, put=__cordl_internal_set__maxAge)) int32_t  _maxAge;

/// @brief Field holdTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_holdTime, put=__cordl_internal_set_holdTime)) float_t  holdTime;

/// @brief Field m_OnHoldComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnHoldComplete, put=__cordl_internal_set_m_OnHoldComplete)) ::GlobalNamespace::AgeSlider_SliderHeldEvent*  m_OnHoldComplete;

 __declspec(property(get=get_onHoldComplete, put=set_onHoldComplete)) ::GlobalNamespace::AgeSlider_SliderHeldEvent*  onHoldComplete;

/// @brief Field progress, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressBar, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBar, put=__cordl_internal_set_progressBar)) ::UnityW<::UnityEngine::LineRenderer>  progressBar;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5a24118, size 0xb8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

static inline ::GlobalNamespace::AgeSlider* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a23b30, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a239f8, size 0x138, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostUpdate, addr 0x5a23e58, size 0x270, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method ToggleAgeGate, addr 0x5a240c8, size 0x50, virtual false, abstract: false, final false
static inline void ToggleAgeGate(bool  state) ;

/// @brief Method Update, addr 0x5a23c68, size 0x1f0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__ageValueTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__ageValueTxt() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__confirmButton() ;

constexpr int32_t const& __cordl_internal_get__currentAge() const;

constexpr int32_t& __cordl_internal_get__currentAge() ;

constexpr int32_t const& __cordl_internal_get__maxAge() const;

constexpr int32_t& __cordl_internal_get__maxAge() ;

constexpr float_t const& __cordl_internal_get_holdTime() const;

constexpr float_t& __cordl_internal_get_holdTime() ;

constexpr ::GlobalNamespace::AgeSlider_SliderHeldEvent* const& __cordl_internal_get_m_OnHoldComplete() const;

constexpr ::GlobalNamespace::AgeSlider_SliderHeldEvent*& __cordl_internal_get_m_OnHoldComplete() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_progressBar() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_progressBar() ;

constexpr void __cordl_internal_set__ageValueTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__currentAge(int32_t  value) ;

constexpr void __cordl_internal_set__maxAge(int32_t  value) ;

constexpr void __cordl_internal_set_holdTime(float_t  value) ;

constexpr void __cordl_internal_set_m_OnHoldComplete(::GlobalNamespace::AgeSlider_SliderHeldEvent*  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressBar(::UnityW<::UnityEngine::LineRenderer>  value) ;

/// @brief Method .ctor, addr 0x5a241d0, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__ageGateActive() ;

/// @brief Method get_onHoldComplete, addr 0x5a239e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AgeSlider_SliderHeldEvent* get_onHoldComplete() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF__ageGateActive(bool  value) ;

/// @brief Method set_onHoldComplete, addr 0x5a239f0, size 0x8, virtual false, abstract: false, final false
inline void set_onHoldComplete(::GlobalNamespace::AgeSlider_SliderHeldEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeSlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeSlider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeSlider(AgeSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeSlider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeSlider(AgeSlider const& ) = delete;

/// @brief Field MIN_AGE offset 0xffffffff size 0x4
static constexpr int32_t  MIN_AGE{static_cast<int32_t>(0xd)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2853};

/// [SerializeField]
/// @brief Field m_OnHoldComplete, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::AgeSlider_SliderHeldEvent*  ___m_OnHoldComplete;

/// [SerializeField]
/// @brief Field _maxAge, offset: 0x28, size: 0x4, def value: None
 int32_t  ____maxAge;

/// [SerializeField]
/// @brief Field _ageValueTxt, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____ageValueTxt;

/// [SerializeField]
/// @brief Field _confirmButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____confirmButton;

/// [SerializeField]
/// @brief Field holdTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___holdTime;

/// [SerializeField]
/// @brief Field progressBar, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___progressBar;

/// @brief Field _currentAge, offset: 0x50, size: 0x4, def value: None
 int32_t  ____currentAge;

/// @brief Field progress, offset: 0x54, size: 0x4, def value: None
 float_t  ___progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AgeSlider, ___m_OnHoldComplete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ____maxAge) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ____ageValueTxt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ____confirmButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ___holdTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ___progressBar) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ____currentAge) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSlider, ___progress) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AgeSlider) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: AgeSlider/SliderHeldEvent
class CORDL_TYPE AgeSlider_SliderHeldEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
static inline ::GlobalNamespace::AgeSlider_SliderHeldEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a24248, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeSlider_SliderHeldEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeSlider_SliderHeldEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeSlider_SliderHeldEvent(AgeSlider_SliderHeldEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeSlider_SliderHeldEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeSlider_SliderHeldEvent(AgeSlider_SliderHeldEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2852};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AgeSlider_SliderHeldEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
