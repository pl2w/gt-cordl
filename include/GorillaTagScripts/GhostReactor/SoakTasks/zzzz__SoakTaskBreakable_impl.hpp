#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/SoakTaskBreakable.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__SoakTaskBreakable_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__IGhostReactorSoakTask_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable.get_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::get_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"get_Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable.set_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::*)(bool)>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::set_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1cda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"set_Complete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::*)(::GlobalNamespace::GRPlayer*)>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c1cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::Update)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x5c1cde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1d370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__Complete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Complete_k__BackingField;
}
constexpr bool const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__Complete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Complete_k__BackingField;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_set__Complete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Complete_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__grPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__grPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__breakable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakable;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__breakable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakable;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_set__breakable(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breakable = value;
}
constexpr ::System::Nullable_1<float_t>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__nextHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextHitTime;
}
constexpr ::System::Nullable_1<float_t> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_get__nextHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextHitTime;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::__cordl_internal_set__nextHitTime(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextHitTime = value;
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::get_Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"get_Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::set_Complete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"set_Complete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::_ctor(::GlobalNamespace::GRPlayer*  grPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grPlayer);
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable* GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::New_ctor(::GlobalNamespace::GRPlayer*  grPlayer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*>(grPlayer));
}
/// @brief Convert operator to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr  GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::operator ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*() noexcept {
return static_cast<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::i___GorillaTagScripts__GhostReactor__SoakTasks__IGhostReactorSoakTask() noexcept {
return static_cast<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable::SoakTaskBreakable()   {
}
