#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigCollection.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigCollection_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.get_Rigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* (::GlobalNamespace::VRRigCollection::*)()>(&::GlobalNamespace::VRRigCollection::get_Rigs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1cdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"get_Rigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCollection::*)()>(&::GlobalNamespace::VRRigCollection::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b1cdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCollection::*)()>(&::GlobalNamespace::VRRigCollection::OnDisable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b1ceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.OnRigTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCollection::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VRRigCollection::OnRigTriggerEnter)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5b1d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnRigTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.OnRigTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCollection::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VRRigCollection::OnRigTriggerExit)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b1d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnRigTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.RigDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCollection::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::VRRigCollection::RigDisabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b1cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"RigDisabled", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.HasRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigCollection::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::VRRigCollection::HasRig)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b1d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"HasRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection.HasRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigCollection::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::VRRigCollection::HasRig)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b1d528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"HasRig", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCollection::*)()>(&::GlobalNamespace::VRRigCollection::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b1d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*& GlobalNamespace::VRRigCollection::__cordl_internal_get_containedRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containedRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* const& GlobalNamespace::VRRigCollection::__cordl_internal_get_containedRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containedRigs;
}
constexpr void GlobalNamespace::VRRigCollection::__cordl_internal_set_containedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containedRigs = value;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& GlobalNamespace::VRRigCollection::__cordl_internal_get_collisionTriggerEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTriggerEvents;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& GlobalNamespace::VRRigCollection::__cordl_internal_get_collisionTriggerEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionTriggerEvents;
}
constexpr void GlobalNamespace::VRRigCollection::__cordl_internal_set_collisionTriggerEvents(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionTriggerEvents = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*& GlobalNamespace::VRRigCollection::__cordl_internal_get_playerEnteredCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEnteredCollection;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* const& GlobalNamespace::VRRigCollection::__cordl_internal_get_playerEnteredCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEnteredCollection;
}
constexpr void GlobalNamespace::VRRigCollection::__cordl_internal_set_playerEnteredCollection(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerEnteredCollection = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*& GlobalNamespace::VRRigCollection::__cordl_internal_get_playerLeftCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLeftCollection;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* const& GlobalNamespace::VRRigCollection::__cordl_internal_get_playerLeftCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLeftCollection;
}
constexpr void GlobalNamespace::VRRigCollection::__cordl_internal_set_playerLeftCollection(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLeftCollection = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCollection::get_Rigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"get_Rigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCollection::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCollection::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCollection::OnRigTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnRigTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VRRigCollection::OnRigTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"OnRigTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VRRigCollection::RigDisabled(::GlobalNamespace::RigContainer*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"RigDisabled", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline bool GlobalNamespace::VRRigCollection::HasRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"HasRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig);
}
inline bool GlobalNamespace::VRRigCollection::HasRig(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {"HasRig", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::VRRigCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRigCollection* GlobalNamespace::VRRigCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRigCollection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigCollection::VRRigCollection()   {
}
