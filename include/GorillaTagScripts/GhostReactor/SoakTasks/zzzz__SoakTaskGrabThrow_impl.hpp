#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/SoakTaskGrabThrow.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__SoakTaskGrabThrow_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__IGhostReactorSoakTask_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow.get_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::get_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"get_Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow.set_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::*)(bool)>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::set_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c1dc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"set_Complete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::*)(::GlobalNamespace::GRPlayer*)>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c1dc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::Update)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x5c1dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::*)()>(&::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c1e264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__Complete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Complete_k__BackingField;
}
constexpr bool const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__Complete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Complete_k__BackingField;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_set__Complete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Complete_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__grPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__grPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grPlayer;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grPlayer = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::GameEntityId>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__heldEntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldEntityId;
}
constexpr ::System::Nullable_1<::GlobalNamespace::GameEntityId> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__heldEntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldEntityId;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_set__heldEntityId(::System::Nullable_1<::GlobalNamespace::GameEntityId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldEntityId = value;
}
constexpr ::System::Nullable_1<float_t>& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__dropEntityTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dropEntityTime;
}
constexpr ::System::Nullable_1<float_t> const& GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_get__dropEntityTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dropEntityTime;
}
constexpr void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::__cordl_internal_set__dropEntityTime(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dropEntityTime = value;
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::get_Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"get_Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::set_Complete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"set_Complete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::_ctor(::GlobalNamespace::GRPlayer*  grPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grPlayer);
}
inline bool GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow* GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::New_ctor(::GlobalNamespace::GRPlayer*  grPlayer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*>(grPlayer));
}
/// @brief Convert operator to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr  GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::operator ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*() noexcept {
return static_cast<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::i___GorillaTagScripts__GhostReactor__SoakTasks__IGhostReactorSoakTask() noexcept {
return static_cast<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow::SoakTaskGrabThrow()   {
}
