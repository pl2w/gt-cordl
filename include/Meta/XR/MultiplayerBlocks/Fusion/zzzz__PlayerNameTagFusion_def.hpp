#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/PlayerNameTagFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___64_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNameTagFusion)
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _64;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class PlayerNameTagFusion__UpdateNameUI_d__11;
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
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class PlayerNameTagFusion;
}
namespace Meta::XR::MultiplayerBlocks::Fusion {
class PlayerNameTagFusion__UpdateNameUI_d__11;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion*, "Meta.XR.MultiplayerBlocks.Fusion", "PlayerNameTagFusion");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11*, "Meta.XR.MultiplayerBlocks.Fusion", "PlayerNameTagFusion/<UpdateNameUI>d__11");
// [NetworkBehaviourWeaved(65)]
// Dependencies Fusion.NetworkBehaviour, Fusion.NetworkString`1<TSize>, Fusion._64
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.PlayerNameTagFusion
class CORDL_TYPE PlayerNameTagFusion : public ::Fusion::NetworkBehaviour {
public:
// Declarations
using _UpdateNameUI_d__11 = ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11;

/// [Networked]
/// [OnChangedRender("OnPlayerNameChange")]
/// @brief [NetworkedWeaved(0, 65)]
 __declspec(property(get=get_OculusName, put=set_OculusName)) ::Fusion::NetworkString_1<::Fusion::_64>  OculusName;

/// @brief Field _OculusName, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__OculusName, put=__cordl_internal_set__OculusName)) ::Fusion::NetworkString_1<::Fusion::_64>  _OculusName;

/// @brief Field _centerEye, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__centerEye, put=__cordl_internal_set__centerEye)) ::UnityW<::UnityEngine::Transform>  _centerEye;

/// @brief Field heightOffset, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightOffset, put=__cordl_internal_set_heightOffset)) float_t  heightOffset;

/// @brief Field nameTag, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTag, put=__cordl_internal_set_nameTag)) ::UnityW<::UnityEngine::UI::Text>  nameTag;

/// @brief Field nameTagContainer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTagContainer, put=__cordl_internal_set_nameTagContainer)) ::UnityW<::UnityEngine::Transform>  nameTagContainer;

/// @brief Field nameTagGO, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTagGO, put=__cordl_internal_set_nameTagGO)) ::UnityW<::UnityEngine::GameObject>  nameTagGO;

/// @brief Field nameTagPanel, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTagPanel, put=__cordl_internal_set_nameTagPanel)) ::UnityW<::UnityEngine::GameObject>  nameTagPanel;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x9f60a80, size 0x5c, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x9f60adc, size 0x58, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FixedUpdateNetwork, addr 0x9f60804, size 0x140, virtual true, abstract: false, final false
inline void FixedUpdateNetwork() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion* New_ctor() ;

/// @brief Method OnPlayerNameChange, addr 0x9f606a0, size 0xb4, virtual false, abstract: false, final false
inline void OnPlayerNameChange() ;

/// @brief Method Start, addr 0x9f60514, size 0x18c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9f60944, size 0x128, virtual false, abstract: false, final false
inline void Update() ;

/// [IteratorStateMachine(typeof(Meta.XR.MultiplayerBlocks.Fusion.PlayerNameTagFusion::<UpdateNameUI>d__11))]
/// @brief Method UpdateNameUI, addr 0x9f60754, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateNameUI(::StringW  playerName) ;

constexpr ::Fusion::NetworkString_1<::Fusion::_64> const& __cordl_internal_get__OculusName() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_64>& __cordl_internal_get__OculusName() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerEye() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerEye() ;

constexpr float_t const& __cordl_internal_get_heightOffset() const;

constexpr float_t& __cordl_internal_get_heightOffset() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameTag() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameTag() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_nameTagContainer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_nameTagContainer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nameTagGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nameTagGO() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nameTagPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nameTagPanel() ;

constexpr void __cordl_internal_set__OculusName(::Fusion::NetworkString_1<::Fusion::_64>  value) ;

constexpr void __cordl_internal_set__centerEye(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_heightOffset(float_t  value) ;

constexpr void __cordl_internal_set_nameTag(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_nameTagContainer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nameTagGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nameTagPanel(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9f60a6c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OculusName, addr 0x9f60458, size 0x60, virtual false, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_64> get_OculusName() ;

/// @brief Method set_OculusName, addr 0x9f604b8, size 0x5c, virtual false, abstract: false, final false
inline void set_OculusName(::Fusion::NetworkString_1<::Fusion::_64>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNameTagFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNameTagFusion(PlayerNameTagFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNameTagFusion(PlayerNameTagFusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31180};

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("OculusName", 0, 65)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _OculusName, offset: 0x80, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_64>  ____OculusName;

/// [SerializeField]
/// @brief Field nameTag, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___nameTag;

/// [SerializeField]
/// @brief Field nameTagGO, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nameTagGO;

/// [SerializeField]
/// @brief Field nameTagPanel, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nameTagPanel;

/// [SerializeField]
/// @brief Field nameTagContainer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___nameTagContainer;

/// [SerializeField]
/// @brief Field heightOffset, offset: 0xb0, size: 0x4, def value: None
 float_t  ___heightOffset;

/// @brief Field _centerEye, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____centerEye;

/// @brief Size padding 0x1b8 - 0xc0 = 0xf8, packed as 0xf8
 uint8_t  _cordl_size_padding[0xf8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ____OculusName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ___nameTag) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ___nameTagGO) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ___nameTagPanel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ___nameTagContainer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ___heightOffset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion, ____centerEye) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion) == 0x1b8, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.PlayerNameTagFusion/<UpdateNameUI>d__11
class CORDL_TYPE PlayerNameTagFusion__UpdateNameUI_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion>  __4__this;

/// @brief Field playerName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::StringW  playerName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9f60b38, size 0x10c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9f60c44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9f60c4c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9f60c84, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9f60b34, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_playerName() const;

constexpr ::StringW& __cordl_internal_get_playerName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion>  value) ;

constexpr void __cordl_internal_set_playerName(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9f607dc, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayerNameTagFusion__UpdateNameUI_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagFusion__UpdateNameUI_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNameTagFusion__UpdateNameUI_d__11(PlayerNameTagFusion__UpdateNameUI_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNameTagFusion__UpdateNameUI_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNameTagFusion__UpdateNameUI_d__11(PlayerNameTagFusion__UpdateNameUI_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31179};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion>  _____4__this;

/// @brief Field playerName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___playerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11, ___playerName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagFusion__UpdateNameUI_d__11) == 0x30, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
