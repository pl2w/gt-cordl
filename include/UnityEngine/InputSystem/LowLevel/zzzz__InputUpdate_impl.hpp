#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_UpdateStepCount_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_SerializedState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_UpdateStepCount_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnBeforeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaff5f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"OnBeforeUpdate", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaff6018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputUpdate_SerializedState (*)()>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::Save)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaff60bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.Restore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::InputUpdate_SerializedState)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::Restore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaff6128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"Restore", {}, {::i2c::type_of<::GlobalNamespace::InputUpdate_SerializedState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.GetUpdateTypeForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaff61bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"GetUpdateTypeForPlayer", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputUpdate.IsPlayerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaff61d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"IsPlayerUpdate", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_UpdateStepCount(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "s_UpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_UpdateStepCount()  {
return ::cordl_internals::getStaticField<uint32_t, "s_UpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>(std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_LatestUpdateType()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::InputUpdateType, "s_LatestUpdateType", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::setStaticF_s_PlayerUpdateStepCount(::GlobalNamespace::InputUpdate_UpdateStepCount  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InputUpdate_UpdateStepCount, "s_PlayerUpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>(std::forward<::GlobalNamespace::InputUpdate_UpdateStepCount>(value));
}
inline ::GlobalNamespace::InputUpdate_UpdateStepCount UnityEngine::InputSystem::LowLevel::InputUpdate::getStaticF_s_PlayerUpdateStepCount()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InputUpdate_UpdateStepCount, "s_PlayerUpdateStepCount", ::UnityEngine::InputSystem::LowLevel::InputUpdate*>();
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"OnBeforeUpdate", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::GlobalNamespace::InputUpdate_SerializedState UnityEngine::InputSystem::LowLevel::InputUpdate::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputUpdate_SerializedState>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputUpdate::Restore(::GlobalNamespace::InputUpdate_SerializedState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"Restore", {}, {::i2c::type_of<::GlobalNamespace::InputUpdate_SerializedState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"GetUpdateTypeForPlayer", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateType>(nullptr, ___internal_method, mask);
}
inline bool UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputUpdate*>(),
                        {"IsPlayerUpdate", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, updateType);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdate::InputUpdate()   {
}
