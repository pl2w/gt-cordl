#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_SpawnArgs.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_SpawnFlagsInternal_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__NetworkRunner_SpawnArgs_def.hpp"
#include "Fusion/zzzz__NetworkObjectSpawnDelegate_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkSpawnFlags_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkRunner_SpawnArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkRunner_SpawnArgs::*)(::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>, ::Fusion::NetworkObjectSpawnDelegate*)>(&::GlobalNamespace::NetworkRunner_SpawnArgs::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fd1b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkRunner_SpawnArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkRunner_SpawnArgs::*)(::Fusion::NetworkObjectTypeId, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::Fusion::PlayerRef>, ::System::Object*, ::Fusion::NetworkSpawnFlags, ::Fusion::NetworkObjectSpawnDelegate*, bool, ::Fusion::NetworkObject*)>(&::GlobalNamespace::NetworkRunner_SpawnArgs::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fd1bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkRunner_SpawnArgs.get_Synchronous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkRunner_SpawnArgs::*)()>(&::GlobalNamespace::NetworkRunner_SpawnArgs::get_Synchronous)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd1c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {"get_Synchronous", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkRunner_SpawnArgs.get_DontDestroyOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkRunner_SpawnArgs::*)()>(&::GlobalNamespace::NetworkRunner_SpawnArgs::get_DontDestroyOnLoad)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fd1c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {"get_DontDestroyOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkRunner_SpawnArgs.get_MasterClientOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::GlobalNamespace::NetworkRunner_SpawnArgs::*)()>(&::GlobalNamespace::NetworkRunner_SpawnArgs::get_MasterClientOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fd1c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {"get_MasterClientOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkRunner_SpawnArgs.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkRunner_SpawnArgs::*)()>(&::GlobalNamespace::NetworkRunner_SpawnArgs::ToString)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5fd1d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkRunner_SpawnArgs::_ctor(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  other, ::Fusion::NetworkObjectSpawnDelegate*  del)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other, del);
}
inline void GlobalNamespace::NetworkRunner_SpawnArgs::_ctor(::Fusion::NetworkObjectTypeId  typeId, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::System::Object*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  spawned, bool  synchronous, ::Fusion::NetworkObject*  resumeNO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Nullable_1<::Fusion::PlayerRef>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Fusion::NetworkSpawnFlags>(), ::i2c::type_of<::Fusion::NetworkObjectSpawnDelegate*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, typeId, position, rotation, inputAuthority, onBeforeSpawned, flags, spawned, synchronous, resumeNO);
}
inline bool GlobalNamespace::NetworkRunner_SpawnArgs::get_Synchronous()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {"get_Synchronous", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::NetworkRunner_SpawnArgs::get_DontDestroyOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {"get_DontDestroyOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Nullable_1<bool> GlobalNamespace::NetworkRunner_SpawnArgs::get_MasterClientOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(),
                        {"get_MasterClientOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkRunner_SpawnArgs::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkRunner_SpawnArgs>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "TypeId", ty: "::Fusion::NetworkObjectTypeId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputAuthority", ty: "::System::Nullable_1<::Fusion::PlayerRef>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnBeforeSpawned", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Spawned", ty: "::Fusion::NetworkObjectSpawnDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SpawnFlags", ty: "::GlobalNamespace::NetworkRunner_SpawnFlagsInternal", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResumeNO", ty: "::UnityW<::Fusion::NetworkObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_SpawnArgs::NetworkRunner_SpawnArgs(::Fusion::NetworkObjectTypeId  TypeId, ::System::Nullable_1<::UnityEngine::Vector3>  Position, ::System::Nullable_1<::UnityEngine::Quaternion>  Rotation, ::System::Nullable_1<::Fusion::PlayerRef>  InputAuthority, ::System::Object*  OnBeforeSpawned, ::Fusion::NetworkObjectSpawnDelegate*  Spawned, ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  SpawnFlags, ::UnityW<::Fusion::NetworkObject>  ResumeNO) noexcept  {
this->TypeId = TypeId;
this->Position = Position;
this->Rotation = Rotation;
this->InputAuthority = InputAuthority;
this->OnBeforeSpawned = OnBeforeSpawned;
this->Spawned = Spawned;
this->SpawnFlags = SpawnFlags;
this->ResumeNO = ResumeNO;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_SpawnArgs::NetworkRunner_SpawnArgs()   {
}
