#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/PlayerNameTagSpawnerFusion.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__PlayerNameTagSpawnerFusion_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__INameTagSpawner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f60c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f60d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion.OnLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::*)(::Fusion::NetworkRunner*)>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::OnLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f60d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"OnLoaded", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::get_IsConnected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f60d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::Spawn)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9f60e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"Spawn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6102c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_get_playerNameTagPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameTagPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_get_playerNameTagPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameTagPrefab;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_set_playerNameTagPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameTagPrefab = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_get__networkRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkRunner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_get__networkRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkRunner;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_set__networkRunner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkRunner = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_get__sceneLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneLoaded;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_get__sceneLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneLoaded;
}
constexpr void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::__cordl_internal_set__sceneLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneLoaded = value;
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::OnLoaded(::Fusion::NetworkRunner*  networkRunner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"OnLoaded", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkRunner);
}
inline bool Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::Spawn(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {"Spawn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion*>());
}
/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner"
constexpr  Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::operator ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner* Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::i___Meta__XR__MultiplayerBlocks__Shared__INameTagSpawner() noexcept {
return static_cast<::Meta::XR::MultiplayerBlocks::Shared::INameTagSpawner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::PlayerNameTagSpawnerFusion::PlayerNameTagSpawnerFusion()   {
}
