#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceCheckpoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RaceCheckpoint_def.hpp"
#include "GlobalNamespace/zzzz__RaceCheckpointManager_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpoint.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpoint::*)(::GlobalNamespace::RaceCheckpointManager*, int32_t)>(&::GlobalNamespace::RaceCheckpoint::Init)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x568e49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::RaceCheckpointManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpoint.SetIsCorrectCheckpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpoint::*)(bool)>(&::GlobalNamespace::RaceCheckpoint::SetIsCorrectCheckpoint)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x568e4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {"SetIsCorrectCheckpoint", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpoint.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpoint::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RaceCheckpoint::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x568e504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceCheckpoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceCheckpoint::*)()>(&::GlobalNamespace::RaceCheckpoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568e6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_banner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___banner;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_banner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___banner;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_banner(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___banner = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_activeCheckpointMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCheckpointMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_activeCheckpointMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCheckpointMat;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_activeCheckpointMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCheckpointMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_wrongCheckpointMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongCheckpointMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_wrongCheckpointMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongCheckpointMat;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_wrongCheckpointMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrongCheckpointMat = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_checkpointSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpointSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_checkpointSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpointSound;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_checkpointSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkpointSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_wrongCheckpointSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongCheckpointSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_wrongCheckpointSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongCheckpointSound;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_wrongCheckpointSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrongCheckpointSound = value;
}
constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager>& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager> const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::RaceCheckpointManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr int32_t& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_checkpointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpointIndex;
}
constexpr int32_t const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_checkpointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpointIndex;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_checkpointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkpointIndex = value;
}
constexpr bool& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_isCorrect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCorrect;
}
constexpr bool const& GlobalNamespace::RaceCheckpoint::__cordl_internal_get_isCorrect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCorrect;
}
constexpr void GlobalNamespace::RaceCheckpoint::__cordl_internal_set_isCorrect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCorrect = value;
}
inline void GlobalNamespace::RaceCheckpoint::Init(::GlobalNamespace::RaceCheckpointManager*  manager, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::RaceCheckpointManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, index);
}
inline void GlobalNamespace::RaceCheckpoint::SetIsCorrectCheckpoint(bool  isCorrect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {"SetIsCorrectCheckpoint", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCorrect);
}
inline void GlobalNamespace::RaceCheckpoint::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RaceCheckpoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceCheckpoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RaceCheckpoint* GlobalNamespace::RaceCheckpoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RaceCheckpoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RaceCheckpoint::RaceCheckpoint()   {
}
