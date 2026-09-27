#pragma once
// IWYU pragma private; include "Pathfinding/RecastTileUpdate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__RecastTileUpdate_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Pathfinding::RecastTileUpdate.add_OnNeedUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Bounds>*)>(&::Pathfinding::RecastTileUpdate::add_OnNeedUpdates)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e6b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"add_OnNeedUpdates", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Bounds>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdate.remove_OnNeedUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Bounds>*)>(&::Pathfinding::RecastTileUpdate::remove_OnNeedUpdates)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e6b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"remove_OnNeedUpdates", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Bounds>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdate::*)()>(&::Pathfinding::RecastTileUpdate::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6b498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdate.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdate::*)()>(&::Pathfinding::RecastTileUpdate::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdate.ScheduleUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdate::*)()>(&::Pathfinding::RecastTileUpdate::ScheduleUpdate)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e6b49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"ScheduleUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RecastTileUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RecastTileUpdate::*)()>(&::Pathfinding::RecastTileUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6b644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::RecastTileUpdate::setStaticF_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Bounds>*, "OnNeedUpdates", ::Pathfinding::RecastTileUpdate*>(std::forward<::System::Action_1<::UnityEngine::Bounds>*>(value));
}
inline ::System::Action_1<::UnityEngine::Bounds>* Pathfinding::RecastTileUpdate::getStaticF_OnNeedUpdates()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Bounds>*, "OnNeedUpdates", ::Pathfinding::RecastTileUpdate*>();
}
inline void Pathfinding::RecastTileUpdate::add_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"add_OnNeedUpdates", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Bounds>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Pathfinding::RecastTileUpdate::remove_OnNeedUpdates(::System::Action_1<::UnityEngine::Bounds>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"remove_OnNeedUpdates", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Bounds>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Pathfinding::RecastTileUpdate::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdate::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdate::ScheduleUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {"ScheduleUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RecastTileUpdate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RecastTileUpdate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RecastTileUpdate* Pathfinding::RecastTileUpdate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RecastTileUpdate*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RecastTileUpdate::RecastTileUpdate()   {
}
