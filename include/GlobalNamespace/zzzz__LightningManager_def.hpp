#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightningManager)
namespace GlobalNamespace {
class LightningManager__LightningEffectRunner_d__19;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class LightningManager;
}
namespace GlobalNamespace {
class LightningManager__LightningEffectRunner_d__19;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightningManager*);
MARK_REF_T(::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningManager*, "", "LightningManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightningManager__LightningEffectRunner_d__19*, "", "LightningManager/<LightningEffectRunner>d__19");
// Dependencies SRand, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningManager
class CORDL_TYPE LightningManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LightningEffectRunner_d__19 = ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19;

/// @brief Field currentHourlySeed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentHourlySeed, put=__cordl_internal_set_currentHourlySeed)) int64_t  currentHourlySeed;

/// @brief Field flashFadeInDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashFadeInDuration, put=__cordl_internal_set_flashFadeInDuration)) float_t  flashFadeInDuration;

/// @brief Field flashFadeOutDuration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashFadeOutDuration, put=__cordl_internal_set_flashFadeOutDuration)) float_t  flashFadeOutDuration;

/// @brief Field flashHoldDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashHoldDuration, put=__cordl_internal_set_flashHoldDuration)) float_t  flashHoldDuration;

/// @brief Field lightMapIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightMapIndex, put=__cordl_internal_set_lightMapIndex)) int32_t  lightMapIndex;

/// @brief Field lightningAudio, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightningAudio, put=__cordl_internal_set_lightningAudio)) ::UnityW<::UnityEngine::AudioSource>  lightningAudio;

/// @brief Field lightningRunner, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightningRunner, put=__cordl_internal_set_lightningRunner)) ::UnityEngine::Coroutine*  lightningRunner;

/// @brief Field lightningTimestampsRealtime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightningTimestampsRealtime, put=__cordl_internal_set_lightningTimestampsRealtime)) ::System::Collections::Generic::List_1<float_t>*  lightningTimestampsRealtime;

/// @brief Field maxTimeBetweenFlashes, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimeBetweenFlashes, put=__cordl_internal_set_maxTimeBetweenFlashes)) float_t  maxTimeBetweenFlashes;

/// @brief Field minTimeBetweenFlashes, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenFlashes, put=__cordl_internal_set_minTimeBetweenFlashes)) float_t  minTimeBetweenFlashes;

/// @brief Field muffledLightning, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_muffledLightning, put=__cordl_internal_set_muffledLightning)) ::UnityW<::UnityEngine::AudioClip>  muffledLightning;

/// @brief Field nextLightningTimestampIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLightningTimestampIndex, put=__cordl_internal_set_nextLightningTimestampIndex)) int32_t  nextLightningTimestampIndex;

/// @brief Field regularLightning, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_regularLightning, put=__cordl_internal_set_regularLightning)) ::UnityW<::UnityEngine::AudioClip>  regularLightning;

/// @brief Field rng, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rng, put=__cordl_internal_set_rng)) ::GlobalNamespace::SRand  rng;

/// @brief Method DoLightningStrike, addr 0x5a63ba0, size 0xc0, virtual false, abstract: false, final false
inline void DoLightningStrike() ;

/// @brief Method GetHourStart, addr 0x5a63a08, size 0x198, virtual false, abstract: false, final false
inline void GetHourStart(::by_ref<int64_t>  seed, ::by_ref<float_t>  timestampRealtime) ;

/// @brief Method InitializeRng, addr 0x5a637cc, size 0x1d0, virtual false, abstract: false, final false
inline void InitializeRng() ;

/// [IteratorStateMachine(typeof(LightningManager::<LightningEffectRunner>d__19))]
/// @brief Method LightningEffectRunner, addr 0x5a6399c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LightningEffectRunner() ;

static inline ::GlobalNamespace::LightningManager* New_ctor() ;

/// @brief Method OnTimeChanged, addr 0x5a63774, size 0x58, virtual false, abstract: false, final false
inline void OnTimeChanged() ;

/// @brief Method Start, addr 0x5a6363c, size 0x138, virtual false, abstract: false, final false
inline void Start() ;

constexpr int64_t const& __cordl_internal_get_currentHourlySeed() const;

constexpr int64_t& __cordl_internal_get_currentHourlySeed() ;

constexpr float_t const& __cordl_internal_get_flashFadeInDuration() const;

constexpr float_t& __cordl_internal_get_flashFadeInDuration() ;

constexpr float_t const& __cordl_internal_get_flashFadeOutDuration() const;

constexpr float_t& __cordl_internal_get_flashFadeOutDuration() ;

constexpr float_t const& __cordl_internal_get_flashHoldDuration() const;

constexpr float_t& __cordl_internal_get_flashHoldDuration() ;

constexpr int32_t const& __cordl_internal_get_lightMapIndex() const;

constexpr int32_t& __cordl_internal_get_lightMapIndex() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_lightningAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_lightningAudio() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_lightningRunner() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_lightningRunner() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_lightningTimestampsRealtime() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_lightningTimestampsRealtime() ;

constexpr float_t const& __cordl_internal_get_maxTimeBetweenFlashes() const;

constexpr float_t& __cordl_internal_get_maxTimeBetweenFlashes() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenFlashes() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenFlashes() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_muffledLightning() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_muffledLightning() ;

constexpr int32_t const& __cordl_internal_get_nextLightningTimestampIndex() const;

constexpr int32_t& __cordl_internal_get_nextLightningTimestampIndex() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_regularLightning() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_regularLightning() ;

constexpr ::GlobalNamespace::SRand const& __cordl_internal_get_rng() const;

constexpr ::GlobalNamespace::SRand& __cordl_internal_get_rng() ;

constexpr void __cordl_internal_set_currentHourlySeed(int64_t  value) ;

constexpr void __cordl_internal_set_flashFadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set_flashFadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_flashHoldDuration(float_t  value) ;

constexpr void __cordl_internal_set_lightMapIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lightningAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_lightningRunner(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_lightningTimestampsRealtime(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_maxTimeBetweenFlashes(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenFlashes(float_t  value) ;

constexpr void __cordl_internal_set_muffledLightning(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_nextLightningTimestampIndex(int32_t  value) ;

constexpr void __cordl_internal_set_regularLightning(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_rng(::GlobalNamespace::SRand  value) ;

/// @brief Method .ctor, addr 0x5a63c88, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningManager(LightningManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningManager(LightningManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3074};

/// @brief Field lightMapIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___lightMapIndex;

/// @brief Field minTimeBetweenFlashes, offset: 0x24, size: 0x4, def value: None
 float_t  ___minTimeBetweenFlashes;

/// @brief Field maxTimeBetweenFlashes, offset: 0x28, size: 0x4, def value: None
 float_t  ___maxTimeBetweenFlashes;

/// @brief Field flashFadeInDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___flashFadeInDuration;

/// @brief Field flashHoldDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___flashHoldDuration;

/// @brief Field flashFadeOutDuration, offset: 0x34, size: 0x4, def value: None
 float_t  ___flashFadeOutDuration;

/// @brief Field lightningAudio, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___lightningAudio;

/// @brief Field rng, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::SRand  ___rng;

/// @brief Field currentHourlySeed, offset: 0x48, size: 0x8, def value: None
 int64_t  ___currentHourlySeed;

/// @brief Field lightningTimestampsRealtime, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___lightningTimestampsRealtime;

/// @brief Field nextLightningTimestampIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___nextLightningTimestampIndex;

/// @brief Field regularLightning, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___regularLightning;

/// @brief Field muffledLightning, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___muffledLightning;

/// @brief Field lightningRunner, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___lightningRunner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightningManager, ___lightMapIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___minTimeBetweenFlashes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___maxTimeBetweenFlashes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___flashFadeInDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___flashHoldDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___flashFadeOutDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___lightningAudio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___rng) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___currentHourlySeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___lightningTimestampsRealtime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___nextLightningTimestampIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___regularLightning) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___muffledLightning) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager, ___lightningRunner) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightningManager) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightningManager/<LightningEffectRunner>d__19
class CORDL_TYPE LightningManager__LightningEffectRunner_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LightningManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a63d14, size 0x1a8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LightningManager__LightningEffectRunner_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a63ebc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a63ec4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a63efc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a63d10, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LightningManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LightningManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LightningManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a63c60, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightningManager__LightningEffectRunner_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightningManager__LightningEffectRunner_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightningManager__LightningEffectRunner_d__19(LightningManager__LightningEffectRunner_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightningManager__LightningEffectRunner_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightningManager__LightningEffectRunner_d__19(LightningManager__LightningEffectRunner_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3073};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightningManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightningManager__LightningEffectRunner_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager__LightningEffectRunner_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightningManager__LightningEffectRunner_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightningManager__LightningEffectRunner_d__19) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
