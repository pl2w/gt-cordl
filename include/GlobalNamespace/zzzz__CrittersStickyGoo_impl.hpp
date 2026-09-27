#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersStickyGoo.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersStickyGoo_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersStickyGoo.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersStickyGoo::*)()>(&::GlobalNamespace::CrittersStickyGoo::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56f4558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersStickyGoo.CanAffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersStickyGoo::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersStickyGoo::CanAffect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56f4574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                        {"CanAffect", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersStickyGoo.EffectApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersStickyGoo::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersStickyGoo::EffectApplied)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56f463c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                        {"EffectApplied", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersStickyGoo.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersStickyGoo::*)()>(&::GlobalNamespace::CrittersStickyGoo::ProcessLocal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56f4740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersStickyGoo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersStickyGoo::*)()>(&::GlobalNamespace::CrittersStickyGoo::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56f4788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GlobalNamespace::CrittersStickyGoo::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr float_t& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_slowModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowModifier;
}
constexpr float_t const& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_slowModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowModifier;
}
constexpr void GlobalNamespace::CrittersStickyGoo::__cordl_internal_set_slowModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowModifier = value;
}
constexpr float_t& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_slowDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowDuration;
}
constexpr float_t const& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_slowDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowDuration;
}
constexpr void GlobalNamespace::CrittersStickyGoo::__cordl_internal_set_slowDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowDuration = value;
}
constexpr bool& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_destroyOnApply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnApply;
}
constexpr bool const& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_destroyOnApply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnApply;
}
constexpr void GlobalNamespace::CrittersStickyGoo::__cordl_internal_set_destroyOnApply(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyOnApply = value;
}
constexpr bool& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_readyToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToDisable;
}
constexpr bool const& GlobalNamespace::CrittersStickyGoo::__cordl_internal_get_readyToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToDisable;
}
constexpr void GlobalNamespace::CrittersStickyGoo::__cordl_internal_set_readyToDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyToDisable = value;
}
inline void GlobalNamespace::CrittersStickyGoo::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CrittersStickyGoo::CanAffect(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                        {"CanAffect", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline void GlobalNamespace::CrittersStickyGoo::EffectApplied(::GlobalNamespace::CrittersPawn*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                        {"EffectApplied", {}, {::i2c::type_of<::GlobalNamespace::CrittersPawn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline bool GlobalNamespace::CrittersStickyGoo::ProcessLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersStickyGoo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStickyGoo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersStickyGoo* GlobalNamespace::CrittersStickyGoo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersStickyGoo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersStickyGoo::CrittersStickyGoo()   {
}
