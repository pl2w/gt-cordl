#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JoinTriggerUI)
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class JoinTriggerUITemplate;
}
namespace GlobalNamespace {
struct JoinTriggerVisualState;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinTriggerUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JoinTriggerUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinTriggerUI*, "", "JoinTriggerUI");
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinTriggerUI
class CORDL_TYPE JoinTriggerUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_FriendJoinCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  FriendJoinCollider;

 __declspec(property(get=get_HasFriendCollider)) bool  HasFriendCollider;

/// @brief Field template, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::UnityW<::GlobalNamespace::JoinTriggerUITemplate>  _cordl_template;

/// @brief Field didStart, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_didStart, put=__cordl_internal_set_didStart)) bool  didStart;

/// @brief Field friendCollider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendCollider, put=__cordl_internal_set_friendCollider)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  friendCollider;

/// @brief Field friendColliderRef, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_friendColliderRef, put=__cordl_internal_set_friendColliderRef)) ::GlobalNamespace::XSceneRef  friendColliderRef;

/// @brief Field friendColliderResolved, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_friendColliderResolved, put=__cordl_internal_set_friendColliderResolved)) bool  friendColliderResolved;

/// @brief Field joinTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinTrigger, put=__cordl_internal_set_joinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  joinTrigger;

/// @brief Field joinTriggerRef, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_joinTriggerRef, put=__cordl_internal_set_joinTriggerRef)) ::GlobalNamespace::XSceneRef  joinTriggerRef;

/// @brief Field joinTriggerResolved, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_joinTriggerResolved, put=__cordl_internal_set_joinTriggerResolved)) bool  joinTriggerResolved;

/// @brief Field milestoneRenderer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_milestoneRenderer, put=__cordl_internal_set_milestoneRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  milestoneRenderer;

/// @brief Field screenBGRenderer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenBGRenderer, put=__cordl_internal_set_screenBGRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  screenBGRenderer;

/// @brief Field screenText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenText, put=__cordl_internal_set_screenText)) ::UnityW<::TMPro::TextMeshPro>  screenText;

/// @brief Method Awake, addr 0x567b390, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsValid, addr 0x567b4f4, size 0x8, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::GlobalNamespace::JoinTriggerUI* New_ctor() ;

/// @brief Method OnDisable, addr 0x567b4fc, size 0x4c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x567b49c, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetState, addr 0x567b56c, size 0x3a0, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::JoinTriggerVisualState  state, ::System::Func_1<::StringW>*  oldZone, ::System::Func_1<::StringW>*  newZone, ::System::Func_1<::StringW>*  oldGameMode, ::System::Func_1<::StringW>*  newGameMode) ;

/// @brief Method Start, addr 0x567b490, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TriggerUpdateUI, addr 0x567b548, size 0x24, virtual false, abstract: false, final false
inline void TriggerUpdateUI() ;

constexpr ::UnityW<::GlobalNamespace::JoinTriggerUITemplate> const& __cordl_internal_get__cordl_template() const;

constexpr ::UnityW<::GlobalNamespace::JoinTriggerUITemplate>& __cordl_internal_get__cordl_template() ;

constexpr bool const& __cordl_internal_get_didStart() const;

constexpr bool& __cordl_internal_get_didStart() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_friendCollider() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_friendCollider() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_friendColliderRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_friendColliderRef() ;

constexpr bool const& __cordl_internal_get_friendColliderResolved() const;

constexpr bool& __cordl_internal_get_friendColliderResolved() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_joinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_joinTrigger() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_joinTriggerRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_joinTriggerRef() ;

constexpr bool const& __cordl_internal_get_joinTriggerResolved() const;

constexpr bool& __cordl_internal_get_joinTriggerResolved() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_milestoneRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_milestoneRenderer() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_screenBGRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_screenBGRenderer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_screenText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_screenText() ;

constexpr void __cordl_internal_set__cordl_template(::UnityW<::GlobalNamespace::JoinTriggerUITemplate>  value) ;

constexpr void __cordl_internal_set_didStart(bool  value) ;

constexpr void __cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_friendColliderRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_friendColliderResolved(bool  value) ;

constexpr void __cordl_internal_set_joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_joinTriggerRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_joinTriggerResolved(bool  value) ;

constexpr void __cordl_internal_set_milestoneRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_screenBGRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_screenText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x567b9c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FriendJoinCollider, addr 0x567b388, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaFriendCollider> get_FriendJoinCollider() ;

/// @brief Method get_HasFriendCollider, addr 0x567b380, size 0x8, virtual false, abstract: false, final false
inline bool get_HasFriendCollider() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoinTriggerUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoinTriggerUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinTriggerUI(JoinTriggerUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinTriggerUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinTriggerUI(JoinTriggerUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{858};

/// [SerializeField]
/// @brief Field joinTriggerRef, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___joinTriggerRef;

/// @brief Field joinTrigger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___joinTrigger;

/// @brief Field joinTriggerResolved, offset: 0x40, size: 0x1, def value: None
 bool  ___joinTriggerResolved;

/// [SerializeField]
/// @brief Field friendColliderRef, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___friendColliderRef;

/// @brief Field friendCollider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___friendCollider;

/// @brief Field friendColliderResolved, offset: 0x68, size: 0x1, def value: None
 bool  ___friendColliderResolved;

/// [SerializeField]
/// @brief Field milestoneRenderer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___milestoneRenderer;

/// [SerializeField]
/// @brief Field screenBGRenderer, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___screenBGRenderer;

/// [SerializeField]
/// @brief Field screenText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___screenText;

/// [SerializeField]
/// @brief Field template, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinTriggerUITemplate>  ____cordl_template;

/// @brief Field didStart, offset: 0x90, size: 0x1, def value: None
 bool  ___didStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___joinTriggerRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___joinTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___joinTriggerResolved) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___friendColliderRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___friendCollider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___friendColliderResolved) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___milestoneRenderer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___screenBGRenderer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___screenText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ____cordl_template) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinTriggerUI, ___didStart) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinTriggerUI) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
