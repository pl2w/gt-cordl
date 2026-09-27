#pragma once
// IWYU pragma private; include "Pathfinding/RecastTileUpdateHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__RecastTileUpdateHandler_def.hpp"
#include "Pathfinding/zzzz__RecastGraph_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler.SetGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)(::Pathfinding::RecastGraph*)>(&::Pathfinding::RecastTileUpdateHandler::SetGraph)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e6b64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"SetGraph", {}, {::i2c::type_of<::Pathfinding::RecastGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler.ScheduleUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)(::UnityEngine::Bounds)>(&::Pathfinding::RecastTileUpdateHandler::ScheduleUpdate)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5e6b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"ScheduleUpdate", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)()>(&::Pathfinding::RecastTileUpdateHandler::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e6b9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)()>(&::Pathfinding::RecastTileUpdateHandler::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e6ba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)()>(&::Pathfinding::RecastTileUpdateHandler::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e6baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler.UpdateDirtyTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)()>(&::Pathfinding::RecastTileUpdateHandler::UpdateDirtyTiles)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5e6bae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"UpdateDirtyTiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdateHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdateHandler::*)()>(&::Pathfinding::RecastTileUpdateHandler::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e6bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::RecastGraph*& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::RecastGraph* const& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::RecastTileUpdateHandler::__cordl_internal_set_graph(::Pathfinding::RecastGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr ::ArrayW<bool>& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_dirtyTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyTiles;
}
constexpr ::ArrayW<bool> const& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_dirtyTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyTiles;
}
constexpr void Pathfinding::RecastTileUpdateHandler::__cordl_internal_set_dirtyTiles(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtyTiles = value;
}
constexpr bool& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_anyDirtyTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyDirtyTiles;
}
constexpr bool const& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_anyDirtyTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anyDirtyTiles;
}
constexpr void Pathfinding::RecastTileUpdateHandler::__cordl_internal_set_anyDirtyTiles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anyDirtyTiles = value;
}
constexpr float_t& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_earliestDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earliestDirty;
}
constexpr float_t const& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_earliestDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___earliestDirty;
}
constexpr void Pathfinding::RecastTileUpdateHandler::__cordl_internal_set_earliestDirty(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___earliestDirty = value;
}
constexpr float_t& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_maxThrottlingDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThrottlingDelay;
}
constexpr float_t const& Pathfinding::RecastTileUpdateHandler::__cordl_internal_get_maxThrottlingDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxThrottlingDelay;
}
constexpr void Pathfinding::RecastTileUpdateHandler::__cordl_internal_set_maxThrottlingDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxThrottlingDelay = value;
}
inline void Pathfinding::RecastTileUpdateHandler::SetGraph(::Pathfinding::RecastGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"SetGraph", {}, {::i2c::type_of<::Pathfinding::RecastGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Pathfinding::RecastTileUpdateHandler::ScheduleUpdate(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"ScheduleUpdate", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void Pathfinding::RecastTileUpdateHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdateHandler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdateHandler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdateHandler::UpdateDirtyTiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {"UpdateDirtyTiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdateHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdateHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RecastTileUpdateHandler* Pathfinding::RecastTileUpdateHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastTileUpdateHandler*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastTileUpdateHandler::RecastTileUpdateHandler()   {
}
