#pragma once
// IWYU pragma private; include "Pathfinding/PathModifier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathModifier_def.hpp"
#include "Pathfinding/zzzz__IPathModifier_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathModifier.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::PathModifier::*)()>(&::Pathfinding::PathModifier::get_Order)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PathModifier*>(),
                    {::i2c::class_of<::Pathfinding::PathModifier*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathModifier.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathModifier::*)(::Pathfinding::Seeker*)>(&::Pathfinding::PathModifier::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ea107c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathModifier*>(),
                        {"Awake", {}, {::i2c::type_of<::Pathfinding::Seeker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathModifier.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathModifier::*)(::Pathfinding::Seeker*)>(&::Pathfinding::PathModifier::OnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ea1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathModifier*>(),
                        {"OnDestroy", {}, {::i2c::type_of<::Pathfinding::Seeker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathModifier.PreProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::PathModifier::PreProcess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ea11b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PathModifier*>(),
                    {::i2c::class_of<::Pathfinding::PathModifier*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathModifier.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathModifier::*)(::Pathfinding::Path*)>(&::Pathfinding::PathModifier::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PathModifier*>(),
                    {::i2c::class_of<::Pathfinding::PathModifier*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::PathModifier::*)()>(&::Pathfinding::PathModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ea11b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::Seeker>& Pathfinding::PathModifier::__cordl_internal_get_seeker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr ::UnityW<::Pathfinding::Seeker> const& Pathfinding::PathModifier::__cordl_internal_get_seeker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr void Pathfinding::PathModifier::__cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seeker = value;
}
inline int32_t Pathfinding::PathModifier::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PathModifier*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::PathModifier::Awake(::Pathfinding::Seeker*  seeker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathModifier*>(),
                        {"Awake", {}, {::i2c::type_of<::Pathfinding::Seeker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seeker);
}
inline void Pathfinding::PathModifier::OnDestroy(::Pathfinding::Seeker*  seeker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathModifier*>(),
                        {"OnDestroy", {}, {::i2c::type_of<::Pathfinding::Seeker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seeker);
}
inline void Pathfinding::PathModifier::PreProcess(::Pathfinding::Path*  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PathModifier*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::PathModifier::Apply(::Pathfinding::Path*  path)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::PathModifier*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::PathModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::PathModifier* Pathfinding::PathModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::PathModifier*>());
}
/// @brief Convert operator to "::Pathfinding::IPathModifier"
constexpr  Pathfinding::PathModifier::operator ::Pathfinding::IPathModifier*() noexcept {
return static_cast<::Pathfinding::IPathModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IPathModifier"
constexpr ::Pathfinding::IPathModifier* Pathfinding::PathModifier::i___Pathfinding__IPathModifier() noexcept {
return static_cast<::Pathfinding::IPathModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::PathModifier::PathModifier()   {
}
