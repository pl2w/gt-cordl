#pragma once
// IWYU pragma private; include "GlobalNamespace/DearLemmingKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DearLemmingKiosk)
namespace GlobalNamespace {
class DearLemmingController_DearLemmingResponse;
}
namespace GlobalNamespace {
class SimpleCountdown;
}
namespace GlobalNamespace {
class TypingTarget;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DearLemmingKiosk;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DearLemmingKiosk*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DearLemmingKiosk*, "", "DearLemmingKiosk");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DearLemmingKiosk
class CORDL_TYPE DearLemmingKiosk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanSubmit)) bool  CanSubmit;

 __declspec(property(get=get_NextSubmit)) int32_t  NextSubmit;

/// @brief Field Refreshed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Refreshed, put=__cordl_internal_set_Refreshed)) ::UnityEngine::Events::UnityEvent*  Refreshed;

/// @brief Field SubmitFail, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubmitFail, put=__cordl_internal_set_SubmitFail)) ::UnityEngine::Events::UnityEvent*  SubmitFail;

/// @brief Field SubmitSuccess, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubmitSuccess, put=__cordl_internal_set_SubmitSuccess)) ::UnityEngine::Events::UnityEvent*  SubmitSuccess;

/// @brief Field canSubmit, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSubmit, put=__cordl_internal_set_canSubmit)) bool  canSubmit;

/// @brief Field countDown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_countDown, put=__cordl_internal_set_countDown)) ::UnityW<::GlobalNamespace::SimpleCountdown>  countDown;

/// @brief Field fetchTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_fetchTime, put=__cordl_internal_set_fetchTime)) float_t  fetchTime;

/// @brief Field nextSubmit, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSubmit, put=__cordl_internal_set_nextSubmit)) int32_t  nextSubmit;

/// @brief Field popUp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_popUp, put=__cordl_internal_set_popUp)) ::UnityW<::TMPro::TMP_Text>  popUp;

/// @brief Field ready, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ready, put=__cordl_internal_set_ready)) ::UnityW<::UnityEngine::GameObject>  ready;

/// @brief Field src, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_src, put=__cordl_internal_set_src)) ::UnityW<::GlobalNamespace::TypingTarget>  src;

/// @brief Method Fetch, addr 0x5796c20, size 0x90, virtual false, abstract: false, final false
inline void Fetch() ;

/// @brief Method Instance_OnCheckComplete, addr 0x5797428, size 0xac, virtual false, abstract: false, final false
inline void Instance_OnCheckComplete(::GlobalNamespace::DearLemmingController_DearLemmingResponse*  obj) ;

/// @brief Method Instance_OnSubmitComplete, addr 0x57977a4, size 0x12c, virtual false, abstract: false, final false
inline void Instance_OnSubmitComplete(::GlobalNamespace::DearLemmingController_DearLemmingResponse*  obj) ;

static inline ::GlobalNamespace::DearLemmingKiosk* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5797bac, size 0x1d4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x57979d8, size 0x1d4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57972ec, size 0x13c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Send, addr 0x5796cb0, size 0x198, virtual false, abstract: false, final false
inline void Send() ;

/// @brief Method SetData, addr 0x57974d4, size 0x2d0, virtual false, abstract: false, final false
inline void SetData(::GlobalNamespace::DearLemmingController_DearLemmingResponse*  obj) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_Refreshed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_Refreshed() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_SubmitFail() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_SubmitFail() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_SubmitSuccess() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_SubmitSuccess() ;

constexpr bool const& __cordl_internal_get_canSubmit() const;

constexpr bool& __cordl_internal_get_canSubmit() ;

constexpr ::UnityW<::GlobalNamespace::SimpleCountdown> const& __cordl_internal_get_countDown() const;

constexpr ::UnityW<::GlobalNamespace::SimpleCountdown>& __cordl_internal_get_countDown() ;

constexpr float_t const& __cordl_internal_get_fetchTime() const;

constexpr float_t& __cordl_internal_get_fetchTime() ;

constexpr int32_t const& __cordl_internal_get_nextSubmit() const;

constexpr int32_t& __cordl_internal_get_nextSubmit() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_popUp() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_popUp() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ready() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ready() ;

constexpr ::UnityW<::GlobalNamespace::TypingTarget> const& __cordl_internal_get_src() const;

constexpr ::UnityW<::GlobalNamespace::TypingTarget>& __cordl_internal_get_src() ;

constexpr void __cordl_internal_set_Refreshed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_SubmitFail(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_SubmitSuccess(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_canSubmit(bool  value) ;

constexpr void __cordl_internal_set_countDown(::UnityW<::GlobalNamespace::SimpleCountdown>  value) ;

constexpr void __cordl_internal_set_fetchTime(float_t  value) ;

constexpr void __cordl_internal_set_nextSubmit(int32_t  value) ;

constexpr void __cordl_internal_set_popUp(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_ready(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_src(::UnityW<::GlobalNamespace::TypingTarget>  value) ;

/// @brief Method .ctor, addr 0x5797d80, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method countDownComplete, addr 0x57978d0, size 0x108, virtual false, abstract: false, final false
inline void countDownComplete() ;

/// @brief Method get_CanSubmit, addr 0x5796c18, size 0x8, virtual false, abstract: false, final false
inline bool get_CanSubmit() ;

/// @brief Method get_NextSubmit, addr 0x5796c10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NextSubmit() ;

/// @brief Method secondsToTimeSpanString, addr 0x5796e48, size 0x4a4, virtual false, abstract: false, final false
inline ::StringW secondsToTimeSpanString(float_t  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DearLemmingKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DearLemmingKiosk(DearLemmingKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DearLemmingKiosk(DearLemmingKiosk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1462};

/// [SerializeField]
/// @brief Field src, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TypingTarget>  ___src;

/// [SerializeField]
/// @brief Field popUp, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___popUp;

/// [SerializeField]
/// @brief Field countDown, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SimpleCountdown>  ___countDown;

/// [SerializeField]
/// @brief Field ready, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ready;

/// [SerializeField]
/// @brief Field Refreshed, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___Refreshed;

/// [SerializeField]
/// @brief Field SubmitSuccess, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___SubmitSuccess;

/// [SerializeField]
/// @brief Field SubmitFail, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___SubmitFail;

/// @brief Field canSubmit, offset: 0x58, size: 0x1, def value: None
 bool  ___canSubmit;

/// @brief Field nextSubmit, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___nextSubmit;

/// @brief Field fetchTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___fetchTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___src) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___popUp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___countDown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___ready) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___Refreshed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___SubmitSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___SubmitFail) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___canSubmit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___nextSubmit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingKiosk, ___fetchTime) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DearLemmingKiosk) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
