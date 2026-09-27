#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshUpdates.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__NavmeshUpdates_def.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/zzzz__NavmeshClipper_def.hpp"
#include "Pathfinding/zzzz__NavmeshTile_def.hpp"
#include "Pathfinding/zzzz__NavmeshUpdates_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)()>(&::Pathfinding::NavmeshUpdates::OnEnable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ea991c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)()>(&::Pathfinding::NavmeshUpdates::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ea99f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.DiscardPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)()>(&::Pathfinding::NavmeshUpdates::DiscardPending)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5ea9ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"DiscardPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.HandleOnEnableCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)(::Pathfinding::NavmeshClipper*)>(&::Pathfinding::NavmeshUpdates::HandleOnEnableCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ea9ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"HandleOnEnableCallback", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.HandleOnDisableCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)(::Pathfinding::NavmeshClipper*)>(&::Pathfinding::NavmeshUpdates::HandleOnDisableCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ea9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"HandleOnDisableCallback", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)()>(&::Pathfinding::NavmeshUpdates::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5eaa118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates.ForceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)()>(&::Pathfinding::NavmeshUpdates::ForceUpdate)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5eaa678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"ForceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates::*)()>(&::Pathfinding::NavmeshUpdates::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5eaab14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::NavmeshUpdates::__cordl_internal_get_updateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateInterval;
}
constexpr float_t const& Pathfinding::NavmeshUpdates::__cordl_internal_get_updateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateInterval;
}
constexpr void Pathfinding::NavmeshUpdates::__cordl_internal_set_updateInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateInterval = value;
}
constexpr float_t& Pathfinding::NavmeshUpdates::__cordl_internal_get_lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateTime;
}
constexpr float_t const& Pathfinding::NavmeshUpdates::__cordl_internal_get_lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdateTime;
}
constexpr void Pathfinding::NavmeshUpdates::__cordl_internal_set_lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdateTime = value;
}
inline void Pathfinding::NavmeshUpdates::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshUpdates::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshUpdates::DiscardPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"DiscardPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshUpdates::HandleOnEnableCallback(::Pathfinding::NavmeshClipper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"HandleOnEnableCallback", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Pathfinding::NavmeshUpdates::HandleOnDisableCallback(::Pathfinding::NavmeshClipper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"HandleOnDisableCallback", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Pathfinding::NavmeshUpdates::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshUpdates::ForceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {"ForceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshUpdates::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshUpdates* Pathfinding::NavmeshUpdates::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshUpdates*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshUpdates::NavmeshUpdates()   {
}
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::*)(::Pathfinding::NavmeshBase*)>(&::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5eaab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::*)(bool)>(&::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::Refresh)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5eaa2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"Refresh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings.OnRecalculatedTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::*)(::ArrayW<::Pathfinding::NavmeshTile*>)>(&::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::OnRecalculatedTiles)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5eaabc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"OnRecalculatedTiles", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings.AddClipper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::*)(::Pathfinding::NavmeshClipper*)>(&::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::AddClipper)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ea9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"AddClipper", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings.RemoveClipper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::*)(::Pathfinding::NavmeshClipper*)>(&::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::RemoveClipper)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ea9ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"RemoveClipper", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Util::TileHandler*& Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::Pathfinding::Util::TileHandler* const& Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_set_handler(::Pathfinding::Util::TileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::IntRect>*& Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_get_forcedReloadRects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedReloadRects;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::IntRect>* const& Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_get_forcedReloadRects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedReloadRects;
}
constexpr void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_set_forcedReloadRects(::System::Collections::Generic::List_1<::Pathfinding::IntRect>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedReloadRects = value;
}
constexpr ::Pathfinding::NavmeshBase*& Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::NavmeshBase* const& Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::__cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
inline void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::_ctor(::Pathfinding::NavmeshBase*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::Refresh(bool  forceCreate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"Refresh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceCreate);
}
inline void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::OnRecalculatedTiles(::ArrayW<::Pathfinding::NavmeshTile*>  tiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"OnRecalculatedTiles", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tiles);
}
inline void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::AddClipper(::Pathfinding::NavmeshClipper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"AddClipper", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::RemoveClipper(::Pathfinding::NavmeshClipper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(),
                        {"RemoveClipper", {}, {::i2c::type_of<::Pathfinding::NavmeshClipper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings* Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::New_ctor(::Pathfinding::NavmeshBase*  graph)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*>(graph));
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings::NavmeshUpdates_NavmeshUpdateSettings()   {
}
