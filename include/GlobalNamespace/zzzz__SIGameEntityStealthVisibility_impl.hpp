#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGameEntityStealthVisibility.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__SIGameEntityStealthVisibility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGameEntityStealthVisibility.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGameEntityStealthVisibility::*)()>(&::GlobalNamespace::SIGameEntityStealthVisibility::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d5f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGameEntityStealthVisibility.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGameEntityStealthVisibility::*)()>(&::GlobalNamespace::SIGameEntityStealthVisibility::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d5f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGameEntityStealthVisibility.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGameEntityStealthVisibility::*)()>(&::GlobalNamespace::SIGameEntityStealthVisibility::LateUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59d6000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGameEntityStealthVisibility.SetVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGameEntityStealthVisibility::*)(bool)>(&::GlobalNamespace::SIGameEntityStealthVisibility::SetVisibility)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59d5f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"SetVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGameEntityStealthVisibility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGameEntityStealthVisibility::*)()>(&::GlobalNamespace::SIGameEntityStealthVisibility::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d6144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_stealthedComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealthedComponents;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_stealthedComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealthedComponents;
}
constexpr void GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_set_stealthedComponents(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stealthedComponents = value;
}
constexpr float_t& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_revealRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revealRange;
}
constexpr float_t const& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_revealRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revealRange;
}
constexpr void GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_set_revealRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___revealRange = value;
}
constexpr float_t& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_hideRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideRange;
}
constexpr float_t const& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_hideRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideRange;
}
constexpr void GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_set_hideRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideRange = value;
}
constexpr bool& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_isStealthed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStealthed;
}
constexpr bool const& GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_get_isStealthed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStealthed;
}
constexpr void GlobalNamespace::SIGameEntityStealthVisibility::__cordl_internal_set_isStealthed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStealthed = value;
}
inline void GlobalNamespace::SIGameEntityStealthVisibility::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGameEntityStealthVisibility::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGameEntityStealthVisibility::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGameEntityStealthVisibility::SetVisibility(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {"SetVisibility", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::SIGameEntityStealthVisibility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGameEntityStealthVisibility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGameEntityStealthVisibility* GlobalNamespace::SIGameEntityStealthVisibility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGameEntityStealthVisibility*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGameEntityStealthVisibility::SIGameEntityStealthVisibility()   {
}
