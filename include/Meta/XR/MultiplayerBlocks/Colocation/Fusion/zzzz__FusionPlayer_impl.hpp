#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionPlayer.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionPlayer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Player_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::*)(::Meta::XR::MultiplayerBlocks::Colocation::Player)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f63d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Player>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::Player (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::GetPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9f64268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(),
                        {"GetPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f661dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_get_playerId()  {
return this->___playerId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_get_playerId() const {
return this->___playerId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_set_playerId(uint64_t  value)  {
this->___playerId = value;
}
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_get_oculusId()  {
return this->___oculusId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_get_oculusId() const {
return this->___oculusId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_set_oculusId(uint64_t  value)  {
this->___oculusId = value;
}
constexpr uint32_t& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_get_colocationGroupId()  {
return this->___colocationGroupId;
}
constexpr uint32_t const& Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_get_colocationGroupId() const {
return this->___colocationGroupId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::__cordl_internal_set_colocationGroupId(uint32_t  value)  {
this->___colocationGroupId = value;
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::_ctor(::Meta::XR::MultiplayerBlocks::Colocation::Player  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Player>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, player);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::Player Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::GetPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(),
                        {"GetPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::Player>(*this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::Equals(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr  Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*()  {
return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionPlayer_()  {
return static_cast<::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "playerId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "oculusId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::FusionPlayer(uint64_t  playerId, uint64_t  oculusId, uint32_t  colocationGroupId) noexcept  {
this->playerId = playerId;
this->oculusId = oculusId;
this->colocationGroupId = colocationGroupId;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer::FusionPlayer()   {
}
