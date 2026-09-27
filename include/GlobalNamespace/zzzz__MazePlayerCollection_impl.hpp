#pragma once
// IWYU pragma private; include "GlobalNamespace/MazePlayerCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MazePlayerCollection_def.hpp"
#include "GlobalNamespace/zzzz__MazePlayerCollection_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection::*)()>(&::GlobalNamespace::MazePlayerCollection::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c0152c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection::*)()>(&::GlobalNamespace::MazePlayerCollection::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c01610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MazePlayerCollection::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c016f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MazePlayerCollection::OnTriggerExit)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c018ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MazePlayerCollection::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c01a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection::*)()>(&::GlobalNamespace::MazePlayerCollection::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c01af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::MazePlayerCollection::__cordl_internal_get_containedRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containedRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::MazePlayerCollection::__cordl_internal_get_containedRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containedRigs;
}
constexpr void GlobalNamespace::MazePlayerCollection::__cordl_internal_set_containedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containedRigs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>*& GlobalNamespace::MazePlayerCollection::__cordl_internal_get_monkeyeAis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeyeAis;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>* const& GlobalNamespace::MazePlayerCollection::__cordl_internal_get_monkeyeAis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkeyeAis;
}
constexpr void GlobalNamespace::MazePlayerCollection::__cordl_internal_set_monkeyeAis(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeyeAI>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkeyeAis = value;
}
inline void GlobalNamespace::MazePlayerCollection::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MazePlayerCollection::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MazePlayerCollection::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MazePlayerCollection::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MazePlayerCollection::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::MazePlayerCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MazePlayerCollection* GlobalNamespace::MazePlayerCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MazePlayerCollection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MazePlayerCollection::MazePlayerCollection()   {
}
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::*)()>(&::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c01af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0._OnPlayerLeftRoom_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::_OnPlayerLeftRoom_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c01bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*>(),
                        {"<OnPlayerLeftRoom>b__0", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::__cordl_internal_get_otherPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::__cordl_internal_get_otherPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlayer;
}
constexpr void GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::__cordl_internal_set_otherPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherPlayer = value;
}
inline void GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::_OnPlayerLeftRoom_b__0(::GlobalNamespace::VRRig*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*>(),
                        {"<OnPlayerLeftRoom>b__0", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r);
}
inline ::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0* GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MazePlayerCollection___c__DisplayClass6_0::MazePlayerCollection___c__DisplayClass6_0()   {
}
