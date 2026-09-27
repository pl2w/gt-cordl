#pragma once
// IWYU pragma private; include "Fusion/UnityPlayerLoopSystemUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__UnityPlayerLoopSystemUtils_def.hpp"
#include "Fusion/zzzz__UnityPlayerLoopSystemAddMode_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::Fusion::UnityPlayerLoopSystemUtils.AddToPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*, ::Fusion::UnityPlayerLoopSystemAddMode, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*)>(&::Fusion::UnityPlayerLoopSystemUtils::AddToPlayerLoop)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5fa7678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPlayerLoopSystemUtils*>(),
                        {"AddToPlayerLoop", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Fusion::UnityPlayerLoopSystemAddMode>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityPlayerLoopSystemUtils.RemoveFromPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*)>(&::Fusion::UnityPlayerLoopSystemUtils::RemoveFromPlayerLoop)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fa7a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPlayerLoopSystemUtils*>(),
                        {"RemoveFromPlayerLoop", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::UnityPlayerLoopSystemUtils.InsertSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>, int32_t, ::System::Type*, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*)>(&::Fusion::UnityPlayerLoopSystemUtils::InsertSystem)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5fa7864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPlayerLoopSystemUtils*>(),
                        {"InsertSystem", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::UnityPlayerLoopSystemUtils::AddToPlayerLoop(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentSystem, ::System::Type*  referenceSystemType, ::Fusion::UnityPlayerLoopSystemAddMode  addMode, ::System::Type*  ownerType, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  updateDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPlayerLoopSystemUtils*>(),
                        {"AddToPlayerLoop", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Fusion::UnityPlayerLoopSystemAddMode>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parentSystem, referenceSystemType, addMode, ownerType, updateDelegate);
}
inline bool Fusion::UnityPlayerLoopSystemUtils::RemoveFromPlayerLoop(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  parentSystem, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPlayerLoopSystemUtils*>(),
                        {"RemoveFromPlayerLoop", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, parentSystem, type);
}
inline void Fusion::UnityPlayerLoopSystemUtils::InsertSystem(::by_ref<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>  systems, int32_t  position, ::System::Type*  ownerType, ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  updateDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityPlayerLoopSystemUtils*>(),
                        {"InsertSystem", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, systems, position, ownerType, updateDelegate);
}
// Ctor Parameters []
constexpr ::Fusion::UnityPlayerLoopSystemUtils::UnityPlayerLoopSystemUtils()   {
}
