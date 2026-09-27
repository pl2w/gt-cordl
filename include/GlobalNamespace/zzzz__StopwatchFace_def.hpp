#pragma once
// IWYU pragma private; include "GlobalNamespace/StopwatchFace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StopwatchFace)
namespace GlobalNamespace {
template<typename T>
class LerpTask_1;
}
namespace GlobalNamespace {
class StopwatchCosmetic;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class StopwatchFace;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StopwatchFace*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StopwatchFace*, "", "StopwatchFace");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StopwatchFace
class CORDL_TYPE StopwatchFace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioClick, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioClick, put=__cordl_internal_set__audioClick)) ::UnityW<::UnityEngine::AudioClip>  _audioClick;

/// @brief Field _audioReset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioReset, put=__cordl_internal_set__audioReset)) ::UnityW<::UnityEngine::AudioClip>  _audioReset;

/// @brief Field _audioTick, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioTick, put=__cordl_internal_set__audioTick)) ::UnityW<::UnityEngine::AudioClip>  _audioTick;

/// @brief Field _cosmetic, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmetic, put=__cordl_internal_set__cosmetic)) ::UnityW<::GlobalNamespace::StopwatchCosmetic>  _cosmetic;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Transform>  _hand;

/// @brief Field _lerpToZero, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__lerpToZero, put=__cordl_internal_set__lerpToZero)) ::GlobalNamespace::LerpTask_1<int32_t>*  _lerpToZero;

/// @brief Field _millisElapsed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__millisElapsed, put=__cordl_internal_set__millisElapsed)) int32_t  _millisElapsed;

/// @brief Field _text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::UnityEngine::UI::Text>  _text;

/// @brief Field _watchActive, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__watchActive, put=__cordl_internal_set__watchActive)) bool  _watchActive;

 __declspec(property(get=get_digitsMmSsMs)) ::UnityEngine::Vector3Int  digitsMmSsMs;

 __declspec(property(get=get_millisElapsed)) int32_t  millisElapsed;

 __declspec(property(get=get_watchActive)) bool  watchActive;

/// @brief Method Awake, addr 0x59872d4, size 0x144, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::StopwatchFace* New_ctor() ;

/// @brief Method OnDisable, addr 0x59875e0, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59875d8, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLerpEnd, addr 0x59874d4, size 0x8, virtual false, abstract: false, final false
inline void OnLerpEnd() ;

/// @brief Method OnLerpToZero, addr 0x5987418, size 0xbc, virtual false, abstract: false, final false
inline void OnLerpToZero(int32_t  a, int32_t  b, float_t  t) ;

/// @brief Method ParseDigits, addr 0x5986ef8, size 0x16c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int ParseDigits(::System::TimeSpan  time) ;

/// @brief Method SetMillisElapsed, addr 0x5987064, size 0x24, virtual false, abstract: false, final false
inline void SetMillisElapsed(int32_t  millis, bool  updateFace) ;

/// @brief Method Update, addr 0x59875e8, size 0x10c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateHand, addr 0x5987270, size 0x64, virtual false, abstract: false, final false
inline void UpdateHand() ;

/// @brief Method UpdateText, addr 0x5987088, size 0x1e8, virtual false, abstract: false, final false
inline void UpdateText() ;

/// @brief Method WatchReset, addr 0x5987780, size 0x8, virtual false, abstract: false, final false
inline void WatchReset() ;

/// @brief Method WatchReset, addr 0x59874dc, size 0xfc, virtual false, abstract: false, final false
inline void WatchReset(bool  doLerp) ;

/// @brief Method WatchStart, addr 0x5987734, size 0x28, virtual false, abstract: false, final false
inline void WatchStart() ;

/// @brief Method WatchStop, addr 0x598775c, size 0x24, virtual false, abstract: false, final false
inline void WatchStop() ;

/// @brief Method WatchToggle, addr 0x59876f4, size 0x40, virtual false, abstract: false, final false
inline void WatchToggle() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClick() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClick() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioReset() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioReset() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioTick() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioTick() ;

constexpr ::UnityW<::GlobalNamespace::StopwatchCosmetic> const& __cordl_internal_get__cosmetic() const;

constexpr ::UnityW<::GlobalNamespace::StopwatchCosmetic>& __cordl_internal_get__cosmetic() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hand() ;

constexpr ::GlobalNamespace::LerpTask_1<int32_t>* const& __cordl_internal_get__lerpToZero() const;

constexpr ::GlobalNamespace::LerpTask_1<int32_t>*& __cordl_internal_get__lerpToZero() ;

constexpr int32_t const& __cordl_internal_get__millisElapsed() const;

constexpr int32_t& __cordl_internal_get__millisElapsed() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__text() ;

constexpr bool const& __cordl_internal_get__watchActive() const;

constexpr bool& __cordl_internal_get__watchActive() ;

constexpr void __cordl_internal_set__audioClick(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__audioReset(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__audioTick(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__cosmetic(::UnityW<::GlobalNamespace::StopwatchCosmetic>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__lerpToZero(::GlobalNamespace::LerpTask_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__millisElapsed(int32_t  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__watchActive(bool  value) ;

/// @brief Method .ctor, addr 0x5987788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_digitsMmSsMs, addr 0x5986e90, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int get_digitsMmSsMs() ;

/// @brief Method get_millisElapsed, addr 0x5986e88, size 0x8, virtual false, abstract: false, final false
inline int32_t get_millisElapsed() ;

/// @brief Method get_watchActive, addr 0x5986e80, size 0x8, virtual false, abstract: false, final false
inline bool get_watchActive() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StopwatchFace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StopwatchFace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StopwatchFace(StopwatchFace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StopwatchFace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StopwatchFace(StopwatchFace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2553};

/// [SerializeField]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____hand;

/// [SerializeField]
/// @brief Field _text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____text;

/// [Space]
/// [SerializeField]
/// @brief Field _cosmetic, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StopwatchCosmetic>  ____cosmetic;

/// [Space]
/// [SerializeField]
/// @brief Field _audioClick, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____audioClick;

/// [SerializeField]
/// @brief Field _audioReset, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____audioReset;

/// [SerializeField]
/// @brief Field _audioTick, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____audioTick;

/// [Space]
/// @brief Field _millisElapsed, offset: 0x50, size: 0x4, def value: None
 int32_t  ____millisElapsed;

/// @brief Field _watchActive, offset: 0x54, size: 0x1, def value: None
 bool  ____watchActive;

/// @brief Field _lerpToZero, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::LerpTask_1<int32_t>*  ____lerpToZero;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____cosmetic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____audioClick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____audioReset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____audioTick) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____millisElapsed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____watchActive) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchFace, ____lerpToZero) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StopwatchFace) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
