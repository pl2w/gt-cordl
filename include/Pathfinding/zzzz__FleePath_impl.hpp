#pragma once
// IWYU pragma private; include "Pathfinding/FleePath.hpp"
#include "Pathfinding/zzzz__RandomPath_impl.hpp"
#include "Pathfinding/zzzz__FleePath_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::FleePath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FleePath::*)()>(&::Pathfinding::FleePath::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eae084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FleePath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FleePath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::FleePath* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FleePath::Construct)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5eae128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FleePath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::FleePath.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::FleePath::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::FleePath::Setup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5eae218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FleePath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::FleePath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FleePath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::FleePath* Pathfinding::FleePath::Construct(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  avoid, int32_t  searchLength, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FleePath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::FleePath*>(nullptr, ___internal_method, start, avoid, searchLength, callback);
}
inline void Pathfinding::FleePath::Setup(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  avoid, int32_t  searchLength, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::FleePath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, avoid, searchLength, callback);
}
inline ::Pathfinding::FleePath* Pathfinding::FleePath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::FleePath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::FleePath::FleePath()   {
}
