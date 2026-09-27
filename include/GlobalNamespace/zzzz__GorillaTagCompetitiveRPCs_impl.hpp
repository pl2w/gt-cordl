#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveRPCs.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveRPCs_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRPCs.SetClassTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRPCs::*)(::GlobalNamespace::IWrappedSerializable*, ::GlobalNamespace::GorillaWrappedSerializer*)>(&::GlobalNamespace::GorillaTagCompetitiveRPCs::SetClassTarget)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ac520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRPCs.SendScoresToLateJoinerRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRPCs::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<float_t>, ::ArrayW<float_t>, ::ArrayW<bool>, ::ArrayW<float_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaTagCompetitiveRPCs::SendScoresToLateJoinerRPC)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5ac5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(),
                        {"SendScoresToLateJoinerRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveRPCs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveRPCs::*)()>(&::GlobalNamespace::GorillaTagCompetitiveRPCs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& GlobalNamespace::GorillaTagCompetitiveRPCs::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& GlobalNamespace::GorillaTagCompetitiveRPCs::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRPCs::__cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>& GlobalNamespace::GorillaTagCompetitiveRPCs::__cordl_internal_get_tagCompManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCompManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager> const& GlobalNamespace::GorillaTagCompetitiveRPCs::__cordl_internal_get_tagCompManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCompManager;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveRPCs::__cordl_internal_set_tagCompManager(::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCompManager = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveRPCs::SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, netHandler);
}
inline void GlobalNamespace::GorillaTagCompetitiveRPCs::SendScoresToLateJoinerRPC(::ArrayW<int32_t>  playerId, ::ArrayW<int32_t>  numTags, ::ArrayW<float_t>  pointsOnDefense, ::ArrayW<float_t>  joinTime, ::ArrayW<bool>  infected, ::ArrayW<float_t>  taggedTime, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(),
                        {"SendScoresToLateJoinerRPC", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, numTags, pointsOnDefense, joinTime, infected, taggedTime, info);
}
inline void GlobalNamespace::GorillaTagCompetitiveRPCs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveRPCs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveRPCs* GlobalNamespace::GorillaTagCompetitiveRPCs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveRPCs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveRPCs::GorillaTagCompetitiveRPCs()   {
}
