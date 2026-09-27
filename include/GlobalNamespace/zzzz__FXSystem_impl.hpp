#pragma once
// IWYU pragma private; include "GlobalNamespace/FXSystem.hpp"
#include "GlobalNamespace/zzzz__FXSArgs_impl.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContextObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FXSystem_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__FXType_def.hpp"
#include "GlobalNamespace/zzzz__IFXContextParems_1_def.hpp"
#include "GlobalNamespace/zzzz__IFXContext_def.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContextObject_def.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContext_1_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FXSystem.PlayFXForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FXType, ::GlobalNamespace::IFXContext*, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::FXSystem::PlayFXForRig)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ac43e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"PlayFXForRig", {}, {::i2c::type_of<::GlobalNamespace::FXType>(), ::i2c::type_of<::GlobalNamespace::IFXContext*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FXSystem.PlayFXForRigValidated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<int32_t>*, ::GlobalNamespace::FXType, ::GlobalNamespace::IFXContext*, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::FXSystem::PlayFXForRigValidated)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ac45c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"PlayFXForRigValidated", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::GlobalNamespace::FXType>(), ::i2c::type_of<::GlobalNamespace::IFXContext*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FXSystem.PlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IFXEffectContextObject*)>(&::GlobalNamespace::FXSystem::PlayFX)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x5ac46e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"PlayFX", {}, {::i2c::type_of<::GlobalNamespace::IFXEffectContextObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FXSystem.CheckCallSpam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::FXSystemSettings*, int32_t, double_t)>(&::GlobalNamespace::FXSystem::CheckCallSpam)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ac455c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"CheckCallSpam", {}, {::i2c::type_of<::GlobalNamespace::FXSystemSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FXSystem::PlayFXForRig(::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXContext*  context, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"PlayFXForRig", {}, {::i2c::type_of<::GlobalNamespace::FXType>(), ::i2c::type_of<::GlobalNamespace::IFXContext*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fxType, context, info);
}
inline void GlobalNamespace::FXSystem::PlayFXForRigValidated(::System::Collections::Generic::List_1<int32_t>*  hashes, ::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXContext*  context, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"PlayFXForRigValidated", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::GlobalNamespace::FXType>(), ::i2c::type_of<::GlobalNamespace::IFXContext*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashes, fxType, context, info);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::FXSArgs*>)
inline void GlobalNamespace::FXSystem::PlayFX(::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXContextParems_1<T>*  context, T  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                    {"PlayFX", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::FXType>(), ::i2c::type_of<::GlobalNamespace::IFXContextParems_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fxType, context, args, info);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IFXEffectContextObject*>)
inline void GlobalNamespace::FXSystem::PlayFXForRig(::GlobalNamespace::FXType  fxType, ::GlobalNamespace::IFXEffectContext_1<T>*  context, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                    {"PlayFXForRig", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::FXType>(), ::i2c::type_of<::GlobalNamespace::IFXEffectContext_1<T>*>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fxType, context, info);
}
inline void GlobalNamespace::FXSystem::PlayFX(::GlobalNamespace::IFXEffectContextObject*  effectContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"PlayFX", {}, {::i2c::type_of<::GlobalNamespace::IFXEffectContextObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, effectContext);
}
inline bool GlobalNamespace::FXSystem::CheckCallSpam(::GlobalNamespace::FXSystemSettings*  settings, int32_t  index, double_t  serverTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FXSystem*>(),
                        {"CheckCallSpam", {}, {::i2c::type_of<::GlobalNamespace::FXSystemSettings*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, index, serverTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FXSystem::FXSystem()   {
}
