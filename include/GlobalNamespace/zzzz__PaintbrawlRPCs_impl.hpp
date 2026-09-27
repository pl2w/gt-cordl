#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintbrawlRPCs.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_impl.hpp"
#include "GlobalNamespace/zzzz__PaintbrawlRPCs_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlRPCs.SetClassTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlRPCs::*)(::GlobalNamespace::IWrappedSerializable*, ::GlobalNamespace::GorillaWrappedSerializer*)>(&::GlobalNamespace::PaintbrawlRPCs::SetClassTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ac6454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(),
                    {::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlRPCs.RPC_ReportSlingshotHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlRPCs::*)(::Photon::Realtime::Player*, ::UnityEngine::Vector3, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::PaintbrawlRPCs::RPC_ReportSlingshotHit)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ac6564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(),
                        {"RPC_ReportSlingshotHit", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlRPCs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaintbrawlRPCs::*)()>(&::GlobalNamespace::PaintbrawlRPCs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& GlobalNamespace::PaintbrawlRPCs::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& GlobalNamespace::PaintbrawlRPCs::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr void GlobalNamespace::PaintbrawlRPCs::__cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& GlobalNamespace::PaintbrawlRPCs::__cordl_internal_get_paintbrawlManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintbrawlManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& GlobalNamespace::PaintbrawlRPCs::__cordl_internal_get_paintbrawlManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintbrawlManager;
}
constexpr void GlobalNamespace::PaintbrawlRPCs::__cordl_internal_set_paintbrawlManager(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintbrawlManager = value;
}
inline void GlobalNamespace::PaintbrawlRPCs::SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, netHandler);
}
inline void GlobalNamespace::PaintbrawlRPCs::RPC_ReportSlingshotHit(::Photon::Realtime::Player*  taggedPlayer, ::UnityEngine::Vector3  hitLocation, int32_t  projectileCount, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(),
                        {"RPC_ReportSlingshotHit", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, hitLocation, projectileCount, info);
}
inline void GlobalNamespace::PaintbrawlRPCs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlRPCs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PaintbrawlRPCs* GlobalNamespace::PaintbrawlRPCs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaintbrawlRPCs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaintbrawlRPCs::PaintbrawlRPCs()   {
}
