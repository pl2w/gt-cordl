#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFriendCollider.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerUI_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::Awake)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5aacf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.UpdateActiveRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaFriendCollider::UpdateActiveRigs)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5aad0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"UpdateActiveRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aad1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aad1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.RegisterUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)(::GlobalNamespace::JoinTriggerUI*)>(&::GlobalNamespace::GorillaFriendCollider::RegisterUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aad1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"RegisterUI", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerUI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.UnregisterUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::UnregisterUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aad1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"UnregisterUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.AddUserID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)(::by_ref<::StringW>)>(&::GlobalNamespace::GorillaFriendCollider::AddUserID)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5aad1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"AddUserID", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::SliceUpdate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5aad2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider.RefreshPlayersWithinBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::RefreshPlayersWithinBounds)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x5aad410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"RefreshPlayersWithinBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFriendCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFriendCollider::*)()>(&::GlobalNamespace::GorillaFriendCollider::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5aad99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_playerIDsCurrentlyTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIDsCurrentlyTouching;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_playerIDsCurrentlyTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIDsCurrentlyTouching;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_playerIDsCurrentlyTouching(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIDsCurrentlyTouching = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_thisCapsule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisCapsule;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_thisCapsule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisCapsule;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_thisCapsule(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisCapsule = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_thisBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisBox;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_thisBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisBox;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_thisBox(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisBox = value;
}
constexpr bool& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_applyCapsuleYLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyCapsuleYLimits;
}
constexpr bool const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_applyCapsuleYLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyCapsuleYLimits;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_applyCapsuleYLimits(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyCapsuleYLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_capsuleColliderYLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capsuleColliderYLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_capsuleColliderYLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capsuleColliderYLimits;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_capsuleColliderYLimits(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capsuleColliderYLimits = value;
}
constexpr bool& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_runCheckWhileNotInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runCheckWhileNotInRoom;
}
constexpr bool const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_runCheckWhileNotInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runCheckWhileNotInRoom;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_runCheckWhileNotInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runCheckWhileNotInRoom = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_myAllowedMapsToJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myAllowedMapsToJoin;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_myAllowedMapsToJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myAllowedMapsToJoin;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_myAllowedMapsToJoin(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myAllowedMapsToJoin = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_overlapColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_overlapColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapColliders = value;
}
constexpr bool& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_manualRefreshOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualRefreshOnly;
}
constexpr bool const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_manualRefreshOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualRefreshOnly;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_manualRefreshOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manualRefreshOnly = value;
}
constexpr bool& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_updatePartyZoneCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePartyZoneCallbacks;
}
constexpr bool const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_updatePartyZoneCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePartyZoneCallbacks;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_updatePartyZoneCallbacks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatePartyZoneCallbacks = value;
}
constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI>& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ui;
}
constexpr ::UnityW<::GlobalNamespace::JoinTriggerUI> const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get_ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ui;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set_ui(::UnityW<::GlobalNamespace::JoinTriggerUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ui = value;
}
constexpr float_t& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get__nextUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextUpdateTime;
}
constexpr float_t const& GlobalNamespace::GorillaFriendCollider::__cordl_internal_get__nextUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextUpdateTime;
}
constexpr void GlobalNamespace::GorillaFriendCollider::__cordl_internal_set__nextUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextUpdateTime = value;
}
inline void GlobalNamespace::GorillaFriendCollider::setStaticF_playerRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "playerRigs", ::GlobalNamespace::GorillaFriendCollider*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GorillaFriendCollider::getStaticF_playerRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "playerRigs", ::GlobalNamespace::GorillaFriendCollider*>();
}
inline void GlobalNamespace::GorillaFriendCollider::setStaticF_updateAdded(bool  value)  {
::cordl_internals::setStaticField<bool, "updateAdded", ::GlobalNamespace::GorillaFriendCollider*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaFriendCollider::getStaticF_updateAdded()  {
return ::cordl_internals::getStaticField<bool, "updateAdded", ::GlobalNamespace::GorillaFriendCollider*>();
}
inline void GlobalNamespace::GorillaFriendCollider::setStaticF_profiler_SliceUpdate(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "profiler_SliceUpdate", ::GlobalNamespace::GorillaFriendCollider*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker GlobalNamespace::GorillaFriendCollider::getStaticF_profiler_SliceUpdate()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "profiler_SliceUpdate", ::GlobalNamespace::GorillaFriendCollider*>();
}
inline void GlobalNamespace::GorillaFriendCollider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::UpdateActiveRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"UpdateActiveRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::RegisterUI(::GlobalNamespace::JoinTriggerUI*  joinUI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"RegisterUI", {}, {::i2c::type_of<::GlobalNamespace::JoinTriggerUI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joinUI);
}
inline void GlobalNamespace::GorillaFriendCollider::UnregisterUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"UnregisterUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::AddUserID(/* [IsReadOnly] */ ::by_ref<::StringW>  userID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"AddUserID", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userID);
}
inline void GlobalNamespace::GorillaFriendCollider::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::RefreshPlayersWithinBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {"RefreshPlayersWithinBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFriendCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFriendCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaFriendCollider* GlobalNamespace::GorillaFriendCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaFriendCollider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GorillaFriendCollider::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GorillaFriendCollider::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaFriendCollider::GorillaFriendCollider()   {
}
