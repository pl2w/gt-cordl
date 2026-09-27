#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableOtherObjectsWhileActive.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOtherObjectsWhileActive_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableOtherObjectsWhileActive.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOtherObjectsWhileActive::*)()>(&::GlobalNamespace::DisableOtherObjectsWhileActive::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableOtherObjectsWhileActive.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOtherObjectsWhileActive::*)()>(&::GlobalNamespace::DisableOtherObjectsWhileActive::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableOtherObjectsWhileActive.SetAllActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOtherObjectsWhileActive::*)(bool)>(&::GlobalNamespace::DisableOtherObjectsWhileActive::SetAllActive)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5673114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {"SetAllActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableOtherObjectsWhileActive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOtherObjectsWhileActive::*)()>(&::GlobalNamespace::DisableOtherObjectsWhileActive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5673294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::DisableOtherObjectsWhileActive::__cordl_internal_get_otherObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::DisableOtherObjectsWhileActive::__cordl_internal_get_otherObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherObjects;
}
constexpr void GlobalNamespace::DisableOtherObjectsWhileActive::__cordl_internal_set_otherObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherObjects = value;
}
constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& GlobalNamespace::DisableOtherObjectsWhileActive::__cordl_internal_get_otherXSceneObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherXSceneObjects;
}
constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& GlobalNamespace::DisableOtherObjectsWhileActive::__cordl_internal_get_otherXSceneObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherXSceneObjects;
}
constexpr void GlobalNamespace::DisableOtherObjectsWhileActive::__cordl_internal_set_otherXSceneObjects(::ArrayW<::GlobalNamespace::XSceneRef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherXSceneObjects = value;
}
inline void GlobalNamespace::DisableOtherObjectsWhileActive::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableOtherObjectsWhileActive::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DisableOtherObjectsWhileActive::SetAllActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {"SetAllActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::DisableOtherObjectsWhileActive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DisableOtherObjectsWhileActive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableOtherObjectsWhileActive* GlobalNamespace::DisableOtherObjectsWhileActive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableOtherObjectsWhileActive*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableOtherObjectsWhileActive::DisableOtherObjectsWhileActive()   {
}
