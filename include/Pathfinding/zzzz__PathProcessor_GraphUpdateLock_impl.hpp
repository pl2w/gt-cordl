#pragma once
// IWYU pragma private; include "Pathfinding/PathProcessor_GraphUpdateLock.hpp"
#include "Pathfinding/zzzz__PathProcessor_GraphUpdateLock_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PathProcessor_GraphUpdateLock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PathProcessor_GraphUpdateLock::*)(::Pathfinding::PathProcessor*, bool)>(&::GlobalNamespace::PathProcessor_GraphUpdateLock::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e6450c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathProcessor_GraphUpdateLock>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::PathProcessor*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathProcessor_GraphUpdateLock.get_Held
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PathProcessor_GraphUpdateLock::*)()>(&::GlobalNamespace::PathProcessor_GraphUpdateLock::get_Held)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e65cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathProcessor_GraphUpdateLock>(),
                        {"get_Held", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PathProcessor_GraphUpdateLock.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PathProcessor_GraphUpdateLock::*)()>(&::GlobalNamespace::PathProcessor_GraphUpdateLock::Release)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e65d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathProcessor_GraphUpdateLock>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PathProcessor_GraphUpdateLock::_ctor(::Pathfinding::PathProcessor*  pathProcessor, bool  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathProcessor_GraphUpdateLock>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::PathProcessor*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pathProcessor, block);
}
inline bool GlobalNamespace::PathProcessor_GraphUpdateLock::get_Held()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathProcessor_GraphUpdateLock>(),
                        {"get_Held", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PathProcessor_GraphUpdateLock::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PathProcessor_GraphUpdateLock>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "pathProcessor", ty: "::Pathfinding::PathProcessor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock::PathProcessor_GraphUpdateLock(::Pathfinding::PathProcessor*  pathProcessor, int32_t  id) noexcept  {
this->pathProcessor = pathProcessor;
this->id = id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock::PathProcessor_GraphUpdateLock()   {
}
