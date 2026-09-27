#pragma once
// IWYU pragma private; include "Docking/Dock.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Docking/zzzz__Dock_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Docking::Dock.get_Moveable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Docking::Dock::*)()>(&::Docking::Dock::get_Moveable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"get_Moveable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dock.get_ForceUndockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Docking::Dock::*)()>(&::Docking::Dock::get_ForceUndockTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddca78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"get_ForceUndockTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dock.NotifyDocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dock::*)()>(&::Docking::Dock::NotifyDocked)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ddca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"NotifyDocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dock.NotifyUnDocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dock::*)()>(&::Docking::Dock::NotifyUnDocked)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ddca94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"NotifyUnDocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::Dock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::Dock::*)()>(&::Docking::Dock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddcaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Docking::Dock::__cordl_internal_get_moveable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveable;
}
constexpr bool const& Docking::Dock::__cordl_internal_get_moveable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveable;
}
constexpr void Docking::Dock::__cordl_internal_set_moveable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveable = value;
}
constexpr float_t& Docking::Dock::__cordl_internal_get_forceUndockTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceUndockTime;
}
constexpr float_t const& Docking::Dock::__cordl_internal_get_forceUndockTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceUndockTime;
}
constexpr void Docking::Dock::__cordl_internal_set_forceUndockTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceUndockTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Docking::Dock::__cordl_internal_get_OnDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDock;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Docking::Dock::__cordl_internal_get_OnDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDock;
}
constexpr void Docking::Dock::__cordl_internal_set_OnDock(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDock = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Docking::Dock::__cordl_internal_get_OnUnDock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnDock;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Docking::Dock::__cordl_internal_get_OnUnDock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnDock;
}
constexpr void Docking::Dock::__cordl_internal_set_OnUnDock(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUnDock = value;
}
inline bool Docking::Dock::get_Moveable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"get_Moveable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Docking::Dock::get_ForceUndockTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"get_ForceUndockTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Docking::Dock::NotifyDocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"NotifyDocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::Dock::NotifyUnDocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {"NotifyUnDocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::Dock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::Dock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Docking::Dock* Docking::Dock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Docking::Dock*>());
}
// Ctor Parameters []
constexpr ::Docking::Dock::Dock()   {
}
