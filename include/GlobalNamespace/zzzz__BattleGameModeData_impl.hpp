#pragma once
// IWYU pragma private; include "GlobalNamespace/BattleGameModeData.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_impl.hpp"
#include "GlobalNamespace/zzzz__PaintbrawlData_impl.hpp"
#include "GlobalNamespace/zzzz__BattleGameModeData_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_def.hpp"
#include "GlobalNamespace/zzzz__PaintbrawlData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.get_PaintbrawlData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PaintbrawlData (::GlobalNamespace::BattleGameModeData::*)()>(&::GlobalNamespace::BattleGameModeData::get_PaintbrawlData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x579b478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"get_PaintbrawlData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.set_PaintbrawlData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)(::GlobalNamespace::PaintbrawlData)>(&::GlobalNamespace::BattleGameModeData::set_PaintbrawlData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579b4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"set_PaintbrawlData", {}, {::i2c::type_of<::GlobalNamespace::PaintbrawlData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BattleGameModeData::*)()>(&::GlobalNamespace::BattleGameModeData::get_Data)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x579b534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)(::System::Object*)>(&::GlobalNamespace::BattleGameModeData::set_Data)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579b5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)()>(&::GlobalNamespace::BattleGameModeData::Spawned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x579b69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.RPC_ReportSlinshotHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)(int32_t, ::UnityEngine::Vector3, int32_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::BattleGameModeData::RPC_ReportSlinshotHit)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x579b75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"RPC_ReportSlinshotHit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)()>(&::GlobalNamespace::BattleGameModeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579ba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)(bool)>(&::GlobalNamespace::BattleGameModeData::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579baa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BattleGameModeData::*)()>(&::GlobalNamespace::BattleGameModeData::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x579bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BattleGameModeData.RPC_ReportSlinshotHit@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::BattleGameModeData::RPC_ReportSlinshotHit@Invoker)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x579bb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"RPC_ReportSlinshotHit@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PaintbrawlData& GlobalNamespace::BattleGameModeData::__cordl_internal_get__PaintbrawlData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PaintbrawlData;
}
constexpr ::GlobalNamespace::PaintbrawlData const& GlobalNamespace::BattleGameModeData::__cordl_internal_get__PaintbrawlData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PaintbrawlData;
}
constexpr void GlobalNamespace::BattleGameModeData::__cordl_internal_set__PaintbrawlData(::GlobalNamespace::PaintbrawlData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PaintbrawlData = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& GlobalNamespace::BattleGameModeData::__cordl_internal_get_battleTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___battleTarget;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& GlobalNamespace::BattleGameModeData::__cordl_internal_get_battleTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___battleTarget;
}
constexpr void GlobalNamespace::BattleGameModeData::__cordl_internal_set_battleTarget(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___battleTarget = value;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& GlobalNamespace::BattleGameModeData::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& GlobalNamespace::BattleGameModeData::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr void GlobalNamespace::BattleGameModeData::__cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
inline ::GlobalNamespace::PaintbrawlData GlobalNamespace::BattleGameModeData::get_PaintbrawlData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"get_PaintbrawlData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PaintbrawlData>(this, ___internal_method);
}
inline void GlobalNamespace::BattleGameModeData::set_PaintbrawlData(::GlobalNamespace::PaintbrawlData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"set_PaintbrawlData", {}, {::i2c::type_of<::GlobalNamespace::PaintbrawlData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* GlobalNamespace::BattleGameModeData::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BattleGameModeData::set_Data(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BattleGameModeData::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BattleGameModeData::RPC_ReportSlinshotHit(int32_t  taggedPlayerID, ::UnityEngine::Vector3  hitLocation, int32_t  projectileCount, ::Fusion::RpcInfo  rpcInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"RPC_ReportSlinshotHit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayerID, hitLocation, projectileCount, rpcInfo);
}
inline void GlobalNamespace::BattleGameModeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BattleGameModeData::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::BattleGameModeData::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BattleGameModeData::RPC_ReportSlinshotHit@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BattleGameModeData*>(),
                        {"RPC_ReportSlinshotHit@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GlobalNamespace::BattleGameModeData* GlobalNamespace::BattleGameModeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BattleGameModeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BattleGameModeData::BattleGameModeData()   {
}
