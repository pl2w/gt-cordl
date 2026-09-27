#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnClickRpc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "Photon/Pun/zzzz__RpcTarget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_InputButton_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OnClickRpc)
namespace Photon::Pun::UtilityScripts {
class OnClickRpc__ClickFlash_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnClickRpc;
}
namespace Photon::Pun::UtilityScripts {
class OnClickRpc__ClickFlash_d__8;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::OnClickRpc*);
MARK_REF_T(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::OnClickRpc*, "Photon.Pun.UtilityScripts", "OnClickRpc");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8*, "Photon.Pun.UtilityScripts", "OnClickRpc/<ClickFlash>d__8");
// Dependencies Photon.Pun.MonoBehaviourPun, Photon.Pun.RpcTarget, UnityEngine.Color, UnityEngine.EventSystems.PointerEventData::InputButton, UnityEngine.KeyCode
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.OnClickRpc
class CORDL_TYPE OnClickRpc : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using _ClickFlash_d__8 = ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8;

/// @brief Field Button, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Button, put=__cordl_internal_set_Button)) ::GlobalNamespace::PointerEventData_InputButton  Button;

/// @brief Field ModifierKey, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ModifierKey, put=__cordl_internal_set_ModifierKey)) ::UnityEngine::KeyCode  ModifierKey;

/// @brief Field Target, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::Photon::Pun::RpcTarget  Target;

/// @brief Field isFlashing, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFlashing, put=__cordl_internal_set_isFlashing)) bool  isFlashing;

/// @brief Field originalColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_originalColor, put=__cordl_internal_set_originalColor)) ::UnityEngine::Color  originalColor;

/// @brief Field originalMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalMaterial, put=__cordl_internal_set_originalMaterial)) ::UnityW<::UnityEngine::Material>  originalMaterial;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// [IteratorStateMachine(typeof(Photon.Pun.UtilityScripts.OnClickRpc::<ClickFlash>d__8))]
/// @brief Method ClickFlash, addr 0xa73a81c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ClickFlash() ;

/// [PunRPC]
/// @brief Method ClickRpc, addr 0xa73a7fc, size 0x20, virtual false, abstract: false, final false
inline void ClickRpc() ;

static inline ::Photon::Pun::UtilityScripts::OnClickRpc* New_ctor() ;

/// @brief Method UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick, addr 0xa73a6b0, size 0x14c, virtual true, abstract: false, final true
inline void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

constexpr ::GlobalNamespace::PointerEventData_InputButton const& __cordl_internal_get_Button() const;

constexpr ::GlobalNamespace::PointerEventData_InputButton& __cordl_internal_get_Button() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_ModifierKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_ModifierKey() ;

constexpr ::Photon::Pun::RpcTarget const& __cordl_internal_get_Target() const;

constexpr ::Photon::Pun::RpcTarget& __cordl_internal_get_Target() ;

constexpr bool const& __cordl_internal_get_isFlashing() const;

constexpr bool& __cordl_internal_get_isFlashing() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_originalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_originalColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_originalMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_originalMaterial() ;

constexpr void __cordl_internal_set_Button(::GlobalNamespace::PointerEventData_InputButton  value) ;

constexpr void __cordl_internal_set_ModifierKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_Target(::Photon::Pun::RpcTarget  value) ;

constexpr void __cordl_internal_set_isFlashing(bool  value) ;

constexpr void __cordl_internal_set_originalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_originalMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0xa73a8b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnClickRpc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnClickRpc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnClickRpc(OnClickRpc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnClickRpc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnClickRpc(OnClickRpc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31230};

/// @brief Field Button, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::PointerEventData_InputButton  ___Button;

/// @brief Field ModifierKey, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___ModifierKey;

/// @brief Field Target, offset: 0x30, size: 0x4, def value: None
 ::Photon::Pun::RpcTarget  ___Target;

/// @brief Field originalMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___originalMaterial;

/// @brief Field originalColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___originalColor;

/// @brief Field isFlashing, offset: 0x50, size: 0x1, def value: None
 bool  ___isFlashing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc, ___Button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc, ___ModifierKey) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc, ___Target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc, ___originalMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc, ___originalColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc, ___isFlashing) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::OnClickRpc) == 0x58, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
class CORDL_TYPE OnClickRpc__ClickFlash_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc>  __4__this;

/// @brief Field <f>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__f_5__3, put=__cordl_internal_set__f_5__3)) float_t  _f_5__3;

/// @brief Field <wasEmissive>5__2, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasEmissive_5__2, put=__cordl_internal_set__wasEmissive_5__2)) bool  _wasEmissive_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa73a8bc, size 0x2e8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa73aba4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa73abac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa73abe4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa73a8b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__f_5__3() const;

constexpr float_t& __cordl_internal_get__f_5__3() ;

constexpr bool const& __cordl_internal_get__wasEmissive_5__2() const;

constexpr bool& __cordl_internal_get__wasEmissive_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc>  value) ;

constexpr void __cordl_internal_set__f_5__3(float_t  value) ;

constexpr void __cordl_internal_set__wasEmissive_5__2(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa73a888, size 0x28, virtual false, abstract: false, final false
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
constexpr OnClickRpc__ClickFlash_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnClickRpc__ClickFlash_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnClickRpc__ClickFlash_d__8(OnClickRpc__ClickFlash_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnClickRpc__ClickFlash_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnClickRpc__ClickFlash_d__8(OnClickRpc__ClickFlash_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31229};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::UtilityScripts::OnClickRpc>  _____4__this;

/// @brief Field <wasEmissive>5__2, offset: 0x28, size: 0x1, def value: None
 bool  ____wasEmissive_5__2;

/// @brief Field <f>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____f_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8, ____wasEmissive_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8, ____f_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::OnClickRpc__ClickFlash_d__8) == 0x30, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
