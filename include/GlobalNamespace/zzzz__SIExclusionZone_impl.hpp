#pragma once
// IWYU pragma private; include "GlobalNamespace/SIExclusionZone.hpp"
#include "GlobalNamespace/zzzz__SIExclusionType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIExclusionZone_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIExclusionZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIExclusionZone::*)()>(&::GlobalNamespace::SIExclusionZone::OnDisable)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x59dc784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIExclusionZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIExclusionZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIExclusionZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x59dcaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIExclusionZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIExclusionZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIExclusionZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59dcd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIExclusionZone.ClearGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIExclusionZone::*)(::GlobalNamespace::SIGadget*)>(&::GlobalNamespace::SIExclusionZone::ClearGadget)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59dcecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"ClearGadget", {}, {::i2c::type_of<::GlobalNamespace::SIGadget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIExclusionZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIExclusionZone::*)()>(&::GlobalNamespace::SIExclusionZone::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59dcf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIExclusionType& GlobalNamespace::SIExclusionZone::__cordl_internal_get_exclusionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionType;
}
constexpr ::GlobalNamespace::SIExclusionType const& GlobalNamespace::SIExclusionZone::__cordl_internal_get_exclusionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionType;
}
constexpr void GlobalNamespace::SIExclusionZone::__cordl_internal_set_exclusionType(::GlobalNamespace::SIExclusionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exclusionType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*& GlobalNamespace::SIExclusionZone::__cordl_internal_get_gadgetsInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetsInZone;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>* const& GlobalNamespace::SIExclusionZone::__cordl_internal_get_gadgetsInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetsInZone;
}
constexpr void GlobalNamespace::SIExclusionZone::__cordl_internal_set_gadgetsInZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetsInZone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>*& GlobalNamespace::SIExclusionZone::__cordl_internal_get_playersInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInZone;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>* const& GlobalNamespace::SIExclusionZone::__cordl_internal_get_playersInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInZone;
}
constexpr void GlobalNamespace::SIExclusionZone::__cordl_internal_set_playersInZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInZone = value;
}
inline void GlobalNamespace::SIExclusionZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIExclusionZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIExclusionZone::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIExclusionZone::ClearGadget(::GlobalNamespace::SIGadget*  gadget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {"ClearGadget", {}, {::i2c::type_of<::GlobalNamespace::SIGadget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gadget);
}
inline void GlobalNamespace::SIExclusionZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIExclusionZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIExclusionZone* GlobalNamespace::SIExclusionZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIExclusionZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIExclusionZone::SIExclusionZone()   {
}
