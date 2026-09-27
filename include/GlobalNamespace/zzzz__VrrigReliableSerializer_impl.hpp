#pragma once
// IWYU pragma private; include "GlobalNamespace/VrrigReliableSerializer.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_impl.hpp"
#include "GlobalNamespace/zzzz__VrrigReliableSerializer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer.OnBeforeDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VrrigReliableSerializer::*)()>(&::GlobalNamespace::VrrigReliableSerializer::OnBeforeDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fe32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer.OnFailedSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VrrigReliableSerializer::*)()>(&::GlobalNamespace::VrrigReliableSerializer::OnFailedSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fe330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer.OnSpawnSetupCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VrrigReliableSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped, ::by_ref<::UnityEngine::GameObject*>, ::by_ref<::System::Type*>)>(&::GlobalNamespace::VrrigReliableSerializer::OnSpawnSetupCheck)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58fe334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer.OnSuccesfullySpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VrrigReliableSerializer::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::VrrigReliableSerializer::OnSuccesfullySpawned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fe4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VrrigReliableSerializer::*)()>(&::GlobalNamespace::VrrigReliableSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fe4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VrrigReliableSerializer::*)(bool)>(&::GlobalNamespace::VrrigReliableSerializer::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fe4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VrrigReliableSerializer.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VrrigReliableSerializer::*)()>(&::GlobalNamespace::VrrigReliableSerializer::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fe4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                    {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 24}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VrrigReliableSerializer::OnBeforeDespawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VrrigReliableSerializer::OnFailedSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VrrigReliableSerializer::OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, wrappedInfo, outTargetObject, outTargetType);
}
inline void GlobalNamespace::VrrigReliableSerializer::OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::VrrigReliableSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VrrigReliableSerializer::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::VrrigReliableSerializer::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VrrigReliableSerializer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VrrigReliableSerializer* GlobalNamespace::VrrigReliableSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VrrigReliableSerializer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VrrigReliableSerializer::VrrigReliableSerializer()   {
}
