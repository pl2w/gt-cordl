#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/CountdownTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CountdownTimer)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class CountdownTimer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::CountdownTimer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::CountdownTimer*, "Oculus.Interaction.Samples", "CountdownTimer");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.CountdownTimer
class CORDL_TYPE CountdownTimer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CountdownOn, put=set_CountdownOn)) bool  CountdownOn;

/// @brief Field _callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::UnityEngine::Events::UnityEvent*  _callback;

/// @brief Field _countdownOn, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__countdownOn, put=__cordl_internal_set__countdownOn)) bool  _countdownOn;

/// @brief Field _countdownTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__countdownTime, put=__cordl_internal_set__countdownTime)) float_t  _countdownTime;

/// @brief Field _countdownTimer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__countdownTimer, put=__cordl_internal_set__countdownTimer)) float_t  _countdownTimer;

/// @brief Field _progressCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressCallback, put=__cordl_internal_set__progressCallback)) ::UnityEngine::Events::UnityEvent_1<float_t>*  _progressCallback;

/// @brief Method Awake, addr 0xa437368, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::Samples::CountdownTimer* New_ctor() ;

/// @brief Method Update, addr 0xa43736c, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__callback() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__callback() ;

constexpr bool const& __cordl_internal_get__countdownOn() const;

constexpr bool& __cordl_internal_get__countdownOn() ;

constexpr float_t const& __cordl_internal_get__countdownTime() const;

constexpr float_t& __cordl_internal_get__countdownTime() ;

constexpr float_t const& __cordl_internal_get__countdownTimer() const;

constexpr float_t& __cordl_internal_get__countdownTimer() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get__progressCallback() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get__progressCallback() ;

constexpr void __cordl_internal_set__callback(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__countdownOn(bool  value) ;

constexpr void __cordl_internal_set__countdownTime(float_t  value) ;

constexpr void __cordl_internal_set__countdownTimer(float_t  value) ;

constexpr void __cordl_internal_set__progressCallback(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa43743c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CountdownOn, addr 0xa437340, size 0x8, virtual false, abstract: false, final false
inline bool get_CountdownOn() ;

/// @brief Method set_CountdownOn, addr 0xa437348, size 0x20, virtual false, abstract: false, final false
inline void set_CountdownOn(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownTimer(CountdownTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownTimer(CountdownTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28299};

/// [SerializeField]
/// [Min(0)]
/// @brief Field _countdownTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____countdownTime;

/// [SerializeField]
/// @brief Field _countdownOn, offset: 0x24, size: 0x1, def value: None
 bool  ____countdownOn;

/// [SerializeField]
/// @brief Field _callback, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____callback;

/// [SerializeField]
/// @brief Field _progressCallback, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ____progressCallback;

/// @brief Field _countdownTimer, offset: 0x38, size: 0x4, def value: None
 float_t  ____countdownTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::CountdownTimer, ____countdownTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CountdownTimer, ____countdownOn) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CountdownTimer, ____callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CountdownTimer, ____progressCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CountdownTimer, ____countdownTimer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::CountdownTimer) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
