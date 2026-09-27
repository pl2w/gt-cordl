#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCameraTriggerIndex.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaCameraTriggerIndex_def.hpp"
#include "GlobalNamespace/zzzz__GorillaCameraSceneTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraTriggerIndex.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraTriggerIndex::*)()>(&::GlobalNamespace::GorillaCameraTriggerIndex::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x579d784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraTriggerIndex.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraTriggerIndex::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x579d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraTriggerIndex.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraTriggerIndex::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerExit)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x579d874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCameraTriggerIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCameraTriggerIndex::*)()>(&::GlobalNamespace::GorillaCameraTriggerIndex::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaCameraTriggerIndex::__cordl_internal_get_sceneTriggerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTriggerIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaCameraTriggerIndex::__cordl_internal_get_sceneTriggerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTriggerIndex;
}
constexpr void GlobalNamespace::GorillaCameraTriggerIndex::__cordl_internal_set_sceneTriggerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneTriggerIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger>& GlobalNamespace::GorillaCameraTriggerIndex::__cordl_internal_get_parentTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTrigger;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger> const& GlobalNamespace::GorillaCameraTriggerIndex::__cordl_internal_get_parentTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTrigger;
}
constexpr void GlobalNamespace::GorillaCameraTriggerIndex::__cordl_internal_set_parentTrigger(::UnityW<::GlobalNamespace::GorillaCameraSceneTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTrigger = value;
}
inline void GlobalNamespace::GorillaCameraTriggerIndex::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaCameraTriggerIndex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCameraTriggerIndex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaCameraTriggerIndex* GlobalNamespace::GorillaCameraTriggerIndex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaCameraTriggerIndex*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaCameraTriggerIndex::GorillaCameraTriggerIndex()   {
}
