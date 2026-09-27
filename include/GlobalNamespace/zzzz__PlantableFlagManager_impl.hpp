#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantableFlagManager.hpp"
#include "GlobalNamespace/zzzz__FlagCauldronColorer_ColorMode_impl.hpp"
#include "GlobalNamespace/zzzz__FlagCauldronColorer_impl.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_AppliedColors_impl.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlantableFlagManager_def.hpp"
#include "GlobalNamespace/zzzz__PlantableFlagManager_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.ResetMyFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)()>(&::GlobalNamespace::PlantableFlagManager::ResetMyFlags)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x567f438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"ResetMyFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.ResetAllFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)()>(&::GlobalNamespace::PlantableFlagManager::ResetAllFlags)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x567f4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"ResetAllFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.RainbowifyAllFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)(float_t, float_t)>(&::GlobalNamespace::PlantableFlagManager::RainbowifyAllFlags)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x567f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"RainbowifyAllFlags", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)()>(&::GlobalNamespace::PlantableFlagManager::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x567f7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)()>(&::GlobalNamespace::PlantableFlagManager::Update)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x567f90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.UpdateFlagColorRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::PlantableFlagManager::UpdateFlagColorRPC)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x567fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"UpdateFlagColorRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.UpdateFlagColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)()>(&::GlobalNamespace::PlantableFlagManager::UpdateFlagColors)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x567fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"UpdateFlagColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::PlantableFlagManager::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x567fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager::*)()>(&::GlobalNamespace::PlantableFlagManager::_ctor)> {
  constexpr static std::size_t size = 0xcc4;
  constexpr static std::size_t addrs = 0x567fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>>& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>> const& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flags;
}
constexpr void GlobalNamespace::PlantableFlagManager::__cordl_internal_set_flags(::ArrayW<::UnityW<::GlobalNamespace::PlantableObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flags = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>>& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_cauldrons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cauldrons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>> const& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_cauldrons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cauldrons;
}
constexpr void GlobalNamespace::PlantableFlagManager::__cordl_internal_set_cauldrons(::ArrayW<::UnityW<::GlobalNamespace::FlagCauldronColorer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cauldrons = value;
}
constexpr ::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode>& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode> const& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::PlantableFlagManager::__cordl_internal_set_mode(::ArrayW<::GlobalNamespace::FlagCauldronColorer_ColorMode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>>& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_flagColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagColors;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>> const& GlobalNamespace::PlantableFlagManager::__cordl_internal_get_flagColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagColors;
}
constexpr void GlobalNamespace::PlantableFlagManager::__cordl_internal_set_flagColors(::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagColors = value;
}
inline void GlobalNamespace::PlantableFlagManager::ResetMyFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"ResetMyFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableFlagManager::ResetAllFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"ResetAllFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableFlagManager::RainbowifyAllFlags(float_t  saturation, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"RainbowifyAllFlags", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saturation, value);
}
inline void GlobalNamespace::PlantableFlagManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableFlagManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableFlagManager::UpdateFlagColorRPC(int32_t  flagIndex, int32_t  colorIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"UpdateFlagColorRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flagIndex, colorIndex, info);
}
inline void GlobalNamespace::PlantableFlagManager::UpdateFlagColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"UpdateFlagColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableFlagManager::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::PlantableFlagManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlantableFlagManager* GlobalNamespace::PlantableFlagManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlantableFlagManager*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::PlantableFlagManager::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::PlantableFlagManager::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlantableFlagManager::PlantableFlagManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager___c::*)()>(&::GlobalNamespace::PlantableFlagManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568e324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableFlagManager___c._ResetAllFlags_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableFlagManager___c::*)()>(&::GlobalNamespace::PlantableFlagManager___c::_ResetAllFlags_b__2_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x568e32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager___c*>(),
                        {"<ResetAllFlags>b__2_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlantableFlagManager___c::setStaticF___9(::GlobalNamespace::PlantableFlagManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlantableFlagManager___c*, "<>9", ::GlobalNamespace::PlantableFlagManager___c*>(std::forward<::GlobalNamespace::PlantableFlagManager___c*>(value));
}
inline ::GlobalNamespace::PlantableFlagManager___c* GlobalNamespace::PlantableFlagManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlantableFlagManager___c*, "<>9", ::GlobalNamespace::PlantableFlagManager___c*>();
}
inline void GlobalNamespace::PlantableFlagManager___c::setStaticF___9__2_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__2_0", ::GlobalNamespace::PlantableFlagManager___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::PlantableFlagManager___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__2_0", ::GlobalNamespace::PlantableFlagManager___c*>();
}
inline void GlobalNamespace::PlantableFlagManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableFlagManager___c::_ResetAllFlags_b__2_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableFlagManager___c*>(),
                        {"<ResetAllFlags>b__2_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlantableFlagManager___c* GlobalNamespace::PlantableFlagManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlantableFlagManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlantableFlagManager___c::PlantableFlagManager___c()   {
}
