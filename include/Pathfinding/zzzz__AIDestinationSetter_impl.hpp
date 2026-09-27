#pragma once
// IWYU pragma private; include "Pathfinding/AIDestinationSetter.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__AIDestinationSetter_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::AIDestinationSetter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIDestinationSetter::*)()>(&::Pathfinding::AIDestinationSetter::OnEnable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5e37c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIDestinationSetter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIDestinationSetter::*)()>(&::Pathfinding::AIDestinationSetter::OnDisable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e37e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIDestinationSetter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIDestinationSetter::*)()>(&::Pathfinding::AIDestinationSetter::Update)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5e38010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIDestinationSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIDestinationSetter::*)()>(&::Pathfinding::AIDestinationSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3813c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::AIDestinationSetter::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::AIDestinationSetter::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::AIDestinationSetter::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::Pathfinding::IAstarAI*& Pathfinding::AIDestinationSetter::__cordl_internal_get_ai()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr ::Pathfinding::IAstarAI* const& Pathfinding::AIDestinationSetter::__cordl_internal_get_ai() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ai;
}
constexpr void Pathfinding::AIDestinationSetter::__cordl_internal_set_ai(::Pathfinding::IAstarAI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ai = value;
}
inline void Pathfinding::AIDestinationSetter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIDestinationSetter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIDestinationSetter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIDestinationSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIDestinationSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AIDestinationSetter* Pathfinding::AIDestinationSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AIDestinationSetter*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AIDestinationSetter::AIDestinationSetter()   {
}
