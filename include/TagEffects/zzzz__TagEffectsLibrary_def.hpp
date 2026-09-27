#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsLibrary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TagEffects/zzzz__ModeTagEffect_def.hpp"
#include "TagEffects/zzzz__TagEffectsComboResult_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TagEffectsLibrary)
namespace GlobalNamespace {
struct TagEffectsLibrary_EffectType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
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
namespace TagEffects {
class GameObjectOnDisableDispatcher;
}
namespace TagEffects {
class TagEffectPack;
}
namespace TagEffects {
class TagEffectsCombo;
}
namespace TagEffects {
class TagEffectsLibrary__ReclaimDisabled_d__22;
}
namespace TagEffects {
class TagEffectsLibrary__RecycleGameObject_d__21;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace TagEffects {
class TagEffectsLibrary;
}
namespace TagEffects {
class TagEffectsLibrary__ReclaimDisabled_d__22;
}
namespace TagEffects {
class TagEffectsLibrary__RecycleGameObject_d__21;
}
// Write type traits
MARK_REF_T(::TagEffects::TagEffectsLibrary*);
MARK_REF_T(::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*);
MARK_REF_T(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*);
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectsLibrary*, "TagEffects", "TagEffectsLibrary");
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22*, "TagEffects", "TagEffectsLibrary/<ReclaimDisabled>d__22");
DEFINE_IL2CPP_CLASS(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21*, "TagEffects", "TagEffectsLibrary/<RecycleGameObject>d__21");
// Dependencies TagEffects.ModeTagEffect, TagEffects.TagEffectsComboResult, UnityEngine.MonoBehaviour
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectsLibrary
class CORDL_TYPE TagEffectsLibrary : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EffectType = ::GlobalNamespace::TagEffectsLibrary_EffectType;

using _ReclaimDisabled_d__22 = ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22;

using _RecycleGameObject_d__21 = ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::TagEffects::TagEffectsLibrary>  _instance;

/// @brief Field debugMode, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugMode, put=__cordl_internal_set_debugMode)) bool  debugMode;

/// @brief Field defaultTagEffects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultTagEffects, put=__cordl_internal_set_defaultTagEffects)) ::ArrayW<::TagEffects::ModeTagEffect*>  defaultTagEffects;

/// @brief Field fistBumpSpeedThreshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fistBumpSpeedThreshold, put=__cordl_internal_set_fistBumpSpeedThreshold)) float_t  fistBumpSpeedThreshold;

/// @brief Field highFiveSpeedThreshold, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_highFiveSpeedThreshold, put=__cordl_internal_set_highFiveSpeedThreshold)) float_t  highFiveSpeedThreshold;

/// @brief Field tagEffectsComboLookUp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagEffectsComboLookUp, put=__cordl_internal_set_tagEffectsComboLookUp)) ::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>*  tagEffectsComboLookUp;

/// @brief Field tagEffectsCombos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagEffectsCombos, put=__cordl_internal_set_tagEffectsCombos)) ::ArrayW<::TagEffects::TagEffectsComboResult*>  tagEffectsCombos;

/// @brief Field tagEffectsPool, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagEffectsPool, put=__cordl_internal_set_tagEffectsPool)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>*  tagEffectsPool;

/// @brief Method Awake, addr 0x5cd84a4, size 0x178, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method NewGameObjectOnDisableDispatcher_OnDisabled, addr 0x5cd8b30, size 0x78, virtual false, abstract: false, final false
static inline void NewGameObjectOnDisableDispatcher_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher*  goodd) ;

static inline ::TagEffects::TagEffectsLibrary* New_ctor() ;

/// @brief Method PlayEffect, addr 0x5cd7d44, size 0x540, virtual false, abstract: false, final false
static inline void PlayEffect(::UnityEngine::Transform*  target, bool  isLeftHand, float_t  rigScale, ::GlobalNamespace::TagEffectsLibrary_EffectType  effectType, ::TagEffects::TagEffectPack*  playerCosmeticTagEffectPack, ::TagEffects::TagEffectPack*  otherPlayerCosmeticTagEffectPack, ::UnityEngine::Quaternion  rotation) ;

/// [IteratorStateMachine(typeof(TagEffects.TagEffectsLibrary::<ReclaimDisabled>d__22))]
/// @brief Method ReclaimDisabled, addr 0x5cd8ba8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReclaimDisabled(::UnityEngine::Transform*  transform) ;

/// [IteratorStateMachine(typeof(TagEffects.TagEffectsLibrary::<RecycleGameObject>d__21))]
/// @brief Method RecycleGameObject, addr 0x5cd8a78, size 0xb8, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RecycleGameObject(::TagEffects::GameObjectOnDisableDispatcher*  recycledGameObject, ::UnityEngine::Transform*  target, float_t  scale, bool  flipZAxis, bool  parentEffect) ;

constexpr bool const& __cordl_internal_get_debugMode() const;

constexpr bool& __cordl_internal_get_debugMode() ;

constexpr ::ArrayW<::TagEffects::ModeTagEffect*> const& __cordl_internal_get_defaultTagEffects() const;

constexpr ::ArrayW<::TagEffects::ModeTagEffect*>& __cordl_internal_get_defaultTagEffects() ;

constexpr float_t const& __cordl_internal_get_fistBumpSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_fistBumpSpeedThreshold() ;

constexpr float_t const& __cordl_internal_get_highFiveSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_highFiveSpeedThreshold() ;

constexpr ::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>* const& __cordl_internal_get_tagEffectsComboLookUp() const;

constexpr ::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>*& __cordl_internal_get_tagEffectsComboLookUp() ;

constexpr ::ArrayW<::TagEffects::TagEffectsComboResult*> const& __cordl_internal_get_tagEffectsCombos() const;

constexpr ::ArrayW<::TagEffects::TagEffectsComboResult*>& __cordl_internal_get_tagEffectsCombos() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>* const& __cordl_internal_get_tagEffectsPool() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>*& __cordl_internal_get_tagEffectsPool() ;

constexpr void __cordl_internal_set_debugMode(bool  value) ;

constexpr void __cordl_internal_set_defaultTagEffects(::ArrayW<::TagEffects::ModeTagEffect*>  value) ;

constexpr void __cordl_internal_set_fistBumpSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_highFiveSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_tagEffectsComboLookUp(::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>*  value) ;

constexpr void __cordl_internal_set_tagEffectsCombos(::ArrayW<::TagEffects::TagEffectsComboResult*>  value) ;

constexpr void __cordl_internal_set_tagEffectsPool(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>*  value) ;

/// @brief Method .ctor, addr 0x5cd8c64, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method comboLookup, addr 0x5cd86b4, size 0x218, virtual false, abstract: false, final false
static inline ::UnityW<::TagEffects::TagEffectPack> comboLookup(::TagEffects::TagEffectPack*  playerCosmeticTagEffectPack, ::TagEffects::TagEffectPack*  otherPlayerCosmeticTagEffectPack) ;

static inline ::UnityW<::TagEffects::TagEffectsLibrary> getStaticF__instance() ;

/// @brief Method get_DebugMode, addr 0x5cd6078, size 0x54, virtual false, abstract: false, final false
static inline bool get_DebugMode() ;

/// @brief Method get_FistBumpSpeedThreshold, addr 0x5cd6ad0, size 0x54, virtual false, abstract: false, final false
static inline float_t get_FistBumpSpeedThreshold() ;

/// @brief Method get_HighFiveSpeedThreshold, addr 0x5cd77dc, size 0x54, virtual false, abstract: false, final false
static inline float_t get_HighFiveSpeedThreshold() ;

/// @brief Method placeEffects, addr 0x5cd78ac, size 0x498, virtual false, abstract: false, final false
static inline void placeEffects(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  target, float_t  scale, bool  flipZAxis, bool  parentEffect, ::UnityEngine::Quaternion  rotation) ;

static inline void setStaticF__instance(::UnityW<::TagEffects::TagEffectsLibrary>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TagEffectsLibrary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsLibrary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectsLibrary(TagEffectsLibrary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsLibrary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectsLibrary(TagEffectsLibrary const& ) = delete;

/// @brief Field OBJECT_QUEUE_LIMIT offset 0xffffffff size 0x4
static constexpr int32_t  OBJECT_QUEUE_LIMIT{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4489};

/// [SerializeField]
/// @brief Field fistBumpSpeedThreshold, offset: 0x20, size: 0x4, def value: None
 float_t  ___fistBumpSpeedThreshold;

/// [SerializeField]
/// @brief Field highFiveSpeedThreshold, offset: 0x24, size: 0x4, def value: None
 float_t  ___highFiveSpeedThreshold;

/// [SerializeField]
/// @brief Field defaultTagEffects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::TagEffects::ModeTagEffect*>  ___defaultTagEffects;

/// [SerializeField]
/// @brief Field tagEffectsCombos, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::TagEffects::TagEffectsComboResult*>  ___tagEffectsCombos;

/// [SerializeField]
/// @brief Field debugMode, offset: 0x38, size: 0x1, def value: None
 bool  ___debugMode;

/// @brief Field tagEffectsPool, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Queue_1<::UnityW<::TagEffects::GameObjectOnDisableDispatcher>>*>*  ___tagEffectsPool;

/// @brief Field tagEffectsComboLookUp, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::TagEffects::TagEffectsCombo*,::ArrayW<::UnityW<::TagEffects::TagEffectPack>>>*  ___tagEffectsComboLookUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___fistBumpSpeedThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___highFiveSpeedThreshold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___defaultTagEffects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___tagEffectsCombos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___debugMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___tagEffectsPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary, ___tagEffectsComboLookUp) == 0x48, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectsLibrary) == 0x50, "Size mismatch!");

} // namespace end def TagEffects
// [CompilerGenerated]
// Dependencies System.Object
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectsLibrary/<RecycleGameObject>d__21
class CORDL_TYPE TagEffectsLibrary__RecycleGameObject_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field flipZAxis, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_flipZAxis, put=__cordl_internal_set_flipZAxis)) bool  flipZAxis;

/// @brief Field parentEffect, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_parentEffect, put=__cordl_internal_set_parentEffect)) bool  parentEffect;

/// @brief Field recycledGameObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_recycledGameObject, put=__cordl_internal_set_recycledGameObject)) ::UnityW<::TagEffects::GameObjectOnDisableDispatcher>  recycledGameObject;

/// @brief Field scale, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cd8d7c, size 0x338, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cd9150, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cd9158, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cd9190, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cd8d78, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr bool const& __cordl_internal_get_flipZAxis() const;

constexpr bool& __cordl_internal_get_flipZAxis() ;

constexpr bool const& __cordl_internal_get_parentEffect() const;

constexpr bool& __cordl_internal_get_parentEffect() ;

constexpr ::UnityW<::TagEffects::GameObjectOnDisableDispatcher> const& __cordl_internal_get_recycledGameObject() const;

constexpr ::UnityW<::TagEffects::GameObjectOnDisableDispatcher>& __cordl_internal_get_recycledGameObject() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_flipZAxis(bool  value) ;

constexpr void __cordl_internal_set_parentEffect(bool  value) ;

constexpr void __cordl_internal_set_recycledGameObject(::UnityW<::TagEffects::GameObjectOnDisableDispatcher>  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cd8c14, size 0x28, virtual false, abstract: false, final false
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
constexpr TagEffectsLibrary__RecycleGameObject_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsLibrary__RecycleGameObject_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectsLibrary__RecycleGameObject_d__21(TagEffectsLibrary__RecycleGameObject_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsLibrary__RecycleGameObject_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectsLibrary__RecycleGameObject_d__21(TagEffectsLibrary__RecycleGameObject_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4488};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field recycledGameObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TagEffects::GameObjectOnDisableDispatcher>  ___recycledGameObject;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field flipZAxis, offset: 0x30, size: 0x1, def value: None
 bool  ___flipZAxis;

/// @brief Field scale, offset: 0x34, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field parentEffect, offset: 0x38, size: 0x1, def value: None
 bool  ___parentEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, ___recycledGameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, ___flipZAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, ___scale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21, ___parentEffect) == 0x38, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectsLibrary__RecycleGameObject_d__21) == 0x40, "Size mismatch!");

} // namespace end def TagEffects
// [CompilerGenerated]
// Dependencies System.Object
namespace TagEffects {
// Is value type: false
// CS Name: TagEffects.TagEffectsLibrary/<ReclaimDisabled>d__22
class CORDL_TYPE TagEffectsLibrary__ReclaimDisabled_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field transform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cd8c78, size 0xb8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cd8d30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cd8d38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cd8d70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cd8c74, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cd8c3c, size 0x28, virtual false, abstract: false, final false
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
constexpr TagEffectsLibrary__ReclaimDisabled_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsLibrary__ReclaimDisabled_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TagEffectsLibrary__ReclaimDisabled_d__22(TagEffectsLibrary__ReclaimDisabled_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagEffectsLibrary__ReclaimDisabled_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagEffectsLibrary__ReclaimDisabled_d__22(TagEffectsLibrary__ReclaimDisabled_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4487};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field transform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22, ___transform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::TagEffects::TagEffectsLibrary__ReclaimDisabled_d__22) == 0x28, "Size mismatch!");

} // namespace end def TagEffects
