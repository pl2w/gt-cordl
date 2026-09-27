#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerUI.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerUI_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerUITemplate_def.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerVisualState_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.get_HasFriendCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::get_HasFriendCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"get_HasFriendCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.get_FriendJoinCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaFriendCollider> (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::get_FriendJoinCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"get_FriendJoinCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x567b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x567b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x567b49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::OnDisable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x567b4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.TriggerUpdateUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::TriggerUpdateUI)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x567b548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"TriggerUpdateUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)(::GlobalNamespace::JoinTriggerVisualState, ::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*)>(&::GlobalNamespace::JoinTriggerUI::SetState)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x567b56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerVisualState>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinTriggerUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinTriggerUI::*)()>(&::GlobalNamespace::JoinTriggerUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_joinTriggerRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTriggerRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_joinTriggerRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTriggerRef;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_joinTriggerRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinTriggerRef = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_joinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_joinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTrigger;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinTrigger = value;
}
constexpr bool& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_joinTriggerResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTriggerResolved;
}
constexpr bool const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_joinTriggerResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTriggerResolved;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_joinTriggerResolved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinTriggerResolved = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_friendColliderRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendColliderRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_friendColliderRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendColliderRef;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_friendColliderRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendColliderRef = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_friendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_friendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendCollider = value;
}
constexpr bool& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_friendColliderResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendColliderResolved;
}
constexpr bool const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_friendColliderResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendColliderResolved;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_friendColliderResolved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendColliderResolved = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_milestoneRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___milestoneRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_milestoneRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___milestoneRenderer;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_milestoneRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___milestoneRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_screenBGRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenBGRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_screenBGRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenBGRenderer;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_screenBGRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenBGRenderer = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_screenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_screenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_screenText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenText = value;
}
constexpr ::UnityW<::GlobalNamespace::JoinTriggerUITemplate>& GlobalNamespace::JoinTriggerUI::__cordl_internal_get__cordl_template()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr ::UnityW<::GlobalNamespace::JoinTriggerUITemplate> const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get__cordl_template() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_template;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set__cordl_template(::UnityW<::GlobalNamespace::JoinTriggerUITemplate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_template = value;
}
constexpr bool& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_didStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didStart;
}
constexpr bool const& GlobalNamespace::JoinTriggerUI::__cordl_internal_get_didStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didStart;
}
constexpr void GlobalNamespace::JoinTriggerUI::__cordl_internal_set_didStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didStart = value;
}
inline bool GlobalNamespace::JoinTriggerUI::get_HasFriendCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"get_HasFriendCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GorillaFriendCollider> GlobalNamespace::JoinTriggerUI::get_FriendJoinCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"get_FriendJoinCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaFriendCollider>>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::TriggerUpdateUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"TriggerUpdateUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::SetState(::GlobalNamespace::JoinTriggerVisualState  state, ::System::Func_1<::StringW>*  oldZone, ::System::Func_1<::StringW>*  newZone, ::System::Func_1<::StringW>*  oldGameMode, ::System::Func_1<::StringW>*  newGameMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerVisualState>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>(), ::i2c::type_of<::System::Func_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, oldZone, newZone, oldGameMode, newGameMode);
}
inline bool GlobalNamespace::JoinTriggerUI::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::JoinTriggerUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinTriggerUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JoinTriggerUI* GlobalNamespace::JoinTriggerUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JoinTriggerUI*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinTriggerUI::JoinTriggerUI()   {
}
