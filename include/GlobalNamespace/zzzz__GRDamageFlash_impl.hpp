#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDamageFlash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRDamageFlash_def.hpp"
#include "GlobalNamespace/zzzz__GRDamageFlash_State_def.hpp"
#include "GlobalNamespace/zzzz__SimpleStateMachine_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)()>(&::GlobalNamespace::GRDamageFlash::Setup)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x587ea74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)()>(&::GlobalNamespace::GRDamageFlash::Play)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x587ed1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.OnStateStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)(::GlobalNamespace::GRDamageFlash_State)>(&::GlobalNamespace::GRDamageFlash::OnStateStart)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x587ed94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"OnStateStart", {}, {::i2c::type_of<::GlobalNamespace::GRDamageFlash_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.OnStateEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)(::GlobalNamespace::GRDamageFlash_State)>(&::GlobalNamespace::GRDamageFlash::OnStateEnd)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x587ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"OnStateEnd", {}, {::i2c::type_of<::GlobalNamespace::GRDamageFlash_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.OnStateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)(::GlobalNamespace::GRDamageFlash_State)>(&::GlobalNamespace::GRDamageFlash::OnStateUpdate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x587ef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"OnStateUpdate", {}, {::i2c::type_of<::GlobalNamespace::GRDamageFlash_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)()>(&::GlobalNamespace::GRDamageFlash::Stop)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x587f00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)()>(&::GlobalNamespace::GRDamageFlash::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x587f064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDamageFlash._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDamageFlash::*)()>(&::GlobalNamespace::GRDamageFlash::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x587f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashMaterial;
}
constexpr void GlobalNamespace::GRDamageFlash::__cordl_internal_set_flashMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashMaterial = value;
}
constexpr float_t& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDuration;
}
constexpr float_t const& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashDuration;
}
constexpr void GlobalNamespace::GRDamageFlash::__cordl_internal_set_flashDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashDuration = value;
}
constexpr float_t& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashCooldown;
}
constexpr float_t const& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashCooldown;
}
constexpr void GlobalNamespace::GRDamageFlash::__cordl_internal_set_flashCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashCooldown = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashRenderers;
}
constexpr void GlobalNamespace::GRDamageFlash::__cordl_internal_set_flashRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashRenderers = value;
}
constexpr ::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>*& GlobalNamespace::GRDamageFlash::__cordl_internal_get_stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
constexpr ::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>* const& GlobalNamespace::GRDamageFlash::__cordl_internal_get_stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateMachine;
}
constexpr void GlobalNamespace::GRDamageFlash::__cordl_internal_set_stateMachine(::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateMachine = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashRendererDefaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashRendererDefaultMaterial;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::GRDamageFlash::__cordl_internal_get_flashRendererDefaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashRendererDefaultMaterial;
}
constexpr void GlobalNamespace::GRDamageFlash::__cordl_internal_set_flashRendererDefaultMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashRendererDefaultMaterial = value;
}
inline void GlobalNamespace::GRDamageFlash::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDamageFlash::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDamageFlash::OnStateStart(::GlobalNamespace::GRDamageFlash_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"OnStateStart", {}, {::i2c::type_of<::GlobalNamespace::GRDamageFlash_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GRDamageFlash::OnStateEnd(::GlobalNamespace::GRDamageFlash_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"OnStateEnd", {}, {::i2c::type_of<::GlobalNamespace::GRDamageFlash_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GRDamageFlash::OnStateUpdate(::GlobalNamespace::GRDamageFlash_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"OnStateUpdate", {}, {::i2c::type_of<::GlobalNamespace::GRDamageFlash_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GRDamageFlash::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDamageFlash::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDamageFlash::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDamageFlash*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDamageFlash* GlobalNamespace::GRDamageFlash::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDamageFlash*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDamageFlash::GRDamageFlash()   {
}
