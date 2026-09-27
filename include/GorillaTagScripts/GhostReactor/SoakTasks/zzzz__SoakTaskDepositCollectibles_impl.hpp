#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/SoakTaskDepositCollectibles.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__SoakTaskDepositCollectibles_def.hpp"
#include "GlobalNamespace/zzzz__GRCurrencyDepositor_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__IGhostReactorSoakTask_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles.get_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::get_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1d398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"get_Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles.set_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::*)(bool)>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::set_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1d3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"set_Complete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::*)(::GlobalNamespace::GRPlayer*)>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c1d3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::Update)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x5c1d3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c1dbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__Complete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Complete_k__BackingField;
}
constexpr bool const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__Complete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Complete_k__BackingField;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_set__Complete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Complete_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__grPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__grPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__coreDepositor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coreDepositor;
}
constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__coreDepositor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coreDepositor;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_set__coreDepositor(::UnityW<::GlobalNamespace::GRCurrencyDepositor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coreDepositor = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__seedExtractorTriggerLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seedExtractorTriggerLocation;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__seedExtractorTriggerLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seedExtractorTriggerLocation;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_set__seedExtractorTriggerLocation(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____seedExtractorTriggerLocation = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__heldEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__heldEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldEntity;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_set__heldEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldEntity = value;
}
constexpr ::System::Nullable_1<float_t>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__depositCollectibleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depositCollectibleTime;
}
constexpr ::System::Nullable_1<float_t> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_get__depositCollectibleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depositCollectibleTime;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::__cordl_internal_set__depositCollectibleTime(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depositCollectibleTime = value;
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::get_Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"get_Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::set_Complete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"set_Complete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::_ctor(::GlobalNamespace::GRPlayer*  grPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grPlayer);
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles* GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::New_ctor(::GlobalNamespace::GRPlayer*  grPlayer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*>(grPlayer));
}
/// @brief Convert operator to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr  GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::operator ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*() noexcept {
return static_cast<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::i___GorillaTagScripts__GhostReactor__SoakTasks__IGhostReactorSoakTask() noexcept {
return static_cast<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles::SoakTaskDepositCollectibles()   {
}
