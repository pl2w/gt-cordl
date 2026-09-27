#pragma once
// IWYU pragma private; include "Pathfinding/TileHandlerHelper.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__TileHandlerHelper_def.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_def.hpp"
//  Writing Method size for method: ::Pathfinding::TileHandlerHelper.get_updateInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::TileHandlerHelper::*)()>(&::Pathfinding::TileHandlerHelper::get_updateInterval)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5eab370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"get_updateInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TileHandlerHelper.set_updateInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TileHandlerHelper::*)(float_t)>(&::Pathfinding::TileHandlerHelper::set_updateInterval)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5eab3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"set_updateInterval", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TileHandlerHelper.UseSpecifiedHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TileHandlerHelper::*)(::Pathfinding::Util::TileHandler*)>(&::Pathfinding::TileHandlerHelper::UseSpecifiedHandler)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5eab454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"UseSpecifiedHandler", {}, {::i2c::type_of<::Pathfinding::Util::TileHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TileHandlerHelper.DiscardPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TileHandlerHelper::*)()>(&::Pathfinding::TileHandlerHelper::DiscardPending)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5eab4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"DiscardPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TileHandlerHelper.ForceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TileHandlerHelper::*)()>(&::Pathfinding::TileHandlerHelper::ForceUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5eab508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"ForceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TileHandlerHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TileHandlerHelper::*)()>(&::Pathfinding::TileHandlerHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eab570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Pathfinding::TileHandlerHelper::get_updateInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"get_updateInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::TileHandlerHelper::set_updateInterval(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"set_updateInterval", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::TileHandlerHelper::UseSpecifiedHandler(::Pathfinding::Util::TileHandler*  newHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"UseSpecifiedHandler", {}, {::i2c::type_of<::Pathfinding::Util::TileHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newHandler);
}
inline void Pathfinding::TileHandlerHelper::DiscardPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"DiscardPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::TileHandlerHelper::ForceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {"ForceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::TileHandlerHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TileHandlerHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::TileHandlerHelper* Pathfinding::TileHandlerHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::TileHandlerHelper*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::TileHandlerHelper::TileHandlerHelper()   {
}
