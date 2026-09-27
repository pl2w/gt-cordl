#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenade.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__ThrownGadget_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58de2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58de40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade.HandleActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::HandleActivated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade.HandleThrown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::HandleThrown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade.HandleHitSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::HandleHitSurface)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::OnEntityInit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58de4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetGrenade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetGrenade::*)()>(&::GlobalNamespace::SIGadgetGrenade::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58de784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_GrenadeFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrenadeFinished;
}
constexpr ::System::Action* const& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_GrenadeFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrenadeFinished;
}
constexpr void GlobalNamespace::SIGadgetGrenade::__cordl_internal_set_GrenadeFinished(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrenadeFinished = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_grenadeRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grenadeRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_grenadeRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grenadeRenderer;
}
constexpr void GlobalNamespace::SIGadgetGrenade::__cordl_internal_set_grenadeRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grenadeRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::ThrownGadget>& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_thrownGadget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrownGadget;
}
constexpr ::UnityW<::GlobalNamespace::ThrownGadget> const& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_thrownGadget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thrownGadget;
}
constexpr void GlobalNamespace::SIGadgetGrenade::__cordl_internal_set_thrownGadget(::UnityW<::GlobalNamespace::ThrownGadget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thrownGadget = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::SIGadgetGrenade::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_parentEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::SIGadgetGrenade::__cordl_internal_get_parentEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentEntity;
}
constexpr void GlobalNamespace::SIGadgetGrenade::__cordl_internal_set_parentEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentEntity = value;
}
inline void GlobalNamespace::SIGadgetGrenade::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenade::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenade::HandleActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenade::HandleThrown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenade::HandleHitSurface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenade::OnEntityInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetGrenade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetGrenade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetGrenade* GlobalNamespace::SIGadgetGrenade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetGrenade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetGrenade::SIGadgetGrenade()   {
}
