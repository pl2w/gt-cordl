#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRoomBoundary.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderRoomBoundary_def.hpp"
#include "GlobalNamespace/zzzz__SizeChangerTrigger_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderRoomBoundary.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRoomBoundary::*)()>(&::GlobalNamespace::BuilderRoomBoundary::Awake)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x57d78c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRoomBoundary.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRoomBoundary::*)()>(&::GlobalNamespace::BuilderRoomBoundary::OnDestroy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x57d7a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRoomBoundary.OnEnteredBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRoomBoundary::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BuilderRoomBoundary::OnEnteredBoundary)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x57d7c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"OnEnteredBoundary", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRoomBoundary.OnExitedBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRoomBoundary::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BuilderRoomBoundary::OnExitedBoundary)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x57d7e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"OnExitedBoundary", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRoomBoundary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRoomBoundary::*)()>(&::GlobalNamespace::BuilderRoomBoundary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d7f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>*& GlobalNamespace::BuilderRoomBoundary::__cordl_internal_get_enableOnEnterTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableOnEnterTrigger;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>* const& GlobalNamespace::BuilderRoomBoundary::__cordl_internal_get_enableOnEnterTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableOnEnterTrigger;
}
constexpr void GlobalNamespace::BuilderRoomBoundary::__cordl_internal_set_enableOnEnterTrigger(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableOnEnterTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& GlobalNamespace::BuilderRoomBoundary::__cordl_internal_get_disableOnExitTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableOnExitTrigger;
}
constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& GlobalNamespace::BuilderRoomBoundary::__cordl_internal_get_disableOnExitTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableOnExitTrigger;
}
constexpr void GlobalNamespace::BuilderRoomBoundary::__cordl_internal_set_disableOnExitTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableOnExitTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::BuilderRoomBoundary::__cordl_internal_get_rigRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRef;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::BuilderRoomBoundary::__cordl_internal_get_rigRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigRef;
}
constexpr void GlobalNamespace::BuilderRoomBoundary::__cordl_internal_set_rigRef(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigRef = value;
}
inline void GlobalNamespace::BuilderRoomBoundary::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRoomBoundary::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRoomBoundary::OnEnteredBoundary(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"OnEnteredBoundary", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BuilderRoomBoundary::OnExitedBoundary(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {"OnExitedBoundary", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BuilderRoomBoundary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoomBoundary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderRoomBoundary* GlobalNamespace::BuilderRoomBoundary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderRoomBoundary*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderRoomBoundary::BuilderRoomBoundary()   {
}
