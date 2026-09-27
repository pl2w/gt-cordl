#pragma once
// IWYU pragma private; include "Docking/Dockable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Docking/zzzz__Dockable_def.hpp"
#include "Docking/zzzz__Dock_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Docking::Dockable.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dockable::*)(::UnityEngine::Collider*)>(&::Docking::Dockable::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ddcab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Docking::Dockable*>(),
                    {::i2c::class_of<::Docking::Dockable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dockable.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dockable::*)(::UnityEngine::Collider*)>(&::Docking::Dockable::OnTriggerExit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ddcb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Docking::Dockable*>(),
                    {::i2c::class_of<::Docking::Dockable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dockable.Dock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dockable::*)()>(&::Docking::Dockable::Dock)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ddcbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Docking::Dockable*>(),
                    {::i2c::class_of<::Docking::Dockable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dockable.UnDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dockable::*)()>(&::Docking::Dockable::UnDock)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ddcd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Docking::Dockable*>(),
                    {::i2c::class_of<::Docking::Dockable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dockable.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dockable::*)()>(&::Docking::Dockable::LateUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ddce14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dockable*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dockable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dockable::*)()>(&::Docking::Dockable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ddcf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dockable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Docking::Dock>& Docking::Dockable::__cordl_internal_get_currentDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDock;
}
constexpr ::UnityW<::Docking::Dock> const& Docking::Dockable::__cordl_internal_get_currentDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDock;
}
constexpr void Docking::Dockable::__cordl_internal_set_currentDock(::UnityW<::Docking::Dock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDock = value;
}
constexpr ::UnityW<::Docking::Dock>& Docking::Dockable::__cordl_internal_get_potentialDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialDock;
}
constexpr ::UnityW<::Docking::Dock> const& Docking::Dockable::__cordl_internal_get_potentialDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialDock;
}
constexpr void Docking::Dockable::__cordl_internal_set_potentialDock(::UnityW<::Docking::Dock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialDock = value;
}
constexpr float_t& Docking::Dockable::__cordl_internal_get_undockTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undockTime;
}
constexpr float_t const& Docking::Dockable::__cordl_internal_get_undockTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undockTime;
}
constexpr void Docking::Dockable::__cordl_internal_set_undockTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___undockTime = value;
}
constexpr bool& Docking::Dockable::__cordl_internal_get_rotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotate;
}
constexpr bool const& Docking::Dockable::__cordl_internal_get_rotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotate;
}
constexpr void Docking::Dockable::__cordl_internal_set_rotate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotate = value;
}
inline void Docking::Dockable::OnTriggerEnter(::UnityEngine::Collider*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Docking::Dockable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Docking::Dockable::OnTriggerExit(::UnityEngine::Collider*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Docking::Dockable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Docking::Dockable::Dock()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Docking::Dockable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::Dockable::UnDock()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Docking::Dockable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::Dockable::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dockable*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::Dockable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dockable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Docking::Dockable* Docking::Dockable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Docking::Dockable*>());
}
// Ctor Parameters []
constexpr ::Docking::Dockable::Dockable()   {
}
