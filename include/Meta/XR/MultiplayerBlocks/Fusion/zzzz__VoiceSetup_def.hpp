#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/VoiceSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceSetup)
namespace Fusion {
class NetworkRunner;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class VoiceSetup__SpawnSpeaker_d__10;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class VoiceSetup___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class VoiceSetup;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class VoiceSetup__SpawnSpeaker_d__10;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class VoiceSetup___c;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup*, "Meta.XR.MultiplayerBlocks.Fusion", "VoiceSetup");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10*, "Meta.XR.MultiplayerBlocks.Fusion", "VoiceSetup/<SpawnSpeaker>d__10");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*, "Meta.XR.MultiplayerBlocks.Fusion", "VoiceSetup/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup
class CORDL_TYPE VoiceSetup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SpawnSpeaker_d__10 = ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10;

using __c = ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c;

 __declspec(property(get=get_Speaker, put=set_Speaker)) ::UnityW<::UnityEngine::GameObject>  Speaker;

/// @brief Field <Speaker>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Speaker_k__BackingField, put=__cordl_internal_set__Speaker_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _Speaker_k__BackingField;

/// @brief Field centerEyeAnchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerEyeAnchor, put=__cordl_internal_set_centerEyeAnchor)) ::UnityW<::UnityEngine::Transform>  centerEyeAnchor;

/// @brief Method Awake, addr 0x9f6104c, size 0x104, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup* New_ctor() ;

/// @brief Method OnDisable, addr 0x9f611cc, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f61150, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoaded, addr 0x9f61248, size 0x20, virtual false, abstract: false, final false
inline void OnLoaded(::Fusion::NetworkRunner*  networkRunner) ;

/// [IteratorStateMachine(typeof(Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup::<SpawnSpeaker>d__10))]
/// @brief Method SpawnSpeaker, addr 0x9f61268, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpawnSpeaker(::Fusion::NetworkRunner*  networkRunner) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__Speaker_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__Speaker_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_centerEyeAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_centerEyeAnchor() ;

constexpr void __cordl_internal_set__Speaker_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_centerEyeAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9f61318, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Speaker, addr 0x9f6103c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Speaker() ;

/// [CompilerGenerated]
/// @brief Method set_Speaker, addr 0x9f61044, size 0x8, virtual false, abstract: false, final false
inline void set_Speaker(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSetup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSetup(VoiceSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSetup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSetup(VoiceSetup const& ) = delete;

/// @brief Field CustomSpeakerPrefabID offset 0xffffffff size 0x4
static constexpr uint32_t  CustomSpeakerPrefabID{static_cast<uint32_t>(0x186a0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31185};

/// @brief Field centerEyeAnchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___centerEyeAnchor;

/// [CompilerGenerated]
/// @brief Field <Speaker>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____Speaker_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup, ___centerEyeAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup, ____Speaker_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup/<SpawnSpeaker>d__10
class CORDL_TYPE VoiceSetup__SpawnSpeaker_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup>  __4__this;

/// @brief Field networkRunner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkRunner, put=__cordl_internal_set_networkRunner)) ::UnityW<::Fusion::NetworkRunner>  networkRunner;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9f616d8, size 0x200, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9f618d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9f618e0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9f61918, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9f616d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get_networkRunner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get_networkRunner() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup>  value) ;

constexpr void __cordl_internal_set_networkRunner(::UnityW<::Fusion::NetworkRunner>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9f612f0, size 0x28, virtual false, abstract: false, final false
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
constexpr VoiceSetup__SpawnSpeaker_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSetup__SpawnSpeaker_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSetup__SpawnSpeaker_d__10(VoiceSetup__SpawnSpeaker_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSetup__SpawnSpeaker_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSetup__SpawnSpeaker_d__10(VoiceSetup__SpawnSpeaker_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31184};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field networkRunner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ___networkRunner;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10, ___networkRunner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup__SpawnSpeaker_d__10) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup/<>c
class CORDL_TYPE VoiceSetup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_1<::UnityW<::UnityEngine::GameObject>>*  __9__6_0;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c* New_ctor() ;

/// @brief Method <Awake>b__6_0, addr 0x9f61390, size 0x344, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> _Awake_b__6_0() ;

/// @brief Method .ctor, addr 0x9f61388, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityW<::UnityEngine::GameObject>>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSetup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSetup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSetup___c(VoiceSetup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSetup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSetup___c(VoiceSetup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::VoiceSetup___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
