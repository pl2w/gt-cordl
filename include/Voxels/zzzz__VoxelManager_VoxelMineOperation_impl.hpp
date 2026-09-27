#pragma once
// IWYU pragma private; include "Voxels/VoxelManager_VoxelMineOperation.hpp"
#include "GlobalNamespace/zzzz__VoxelOperation_impl.hpp"
#include "Unity/Mathematics/zzzz__half3_impl.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelMineOperation_def.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.get_localHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)()>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::get_localHitPoint)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5dcd4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"get_localHitPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.set_localHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::set_localHitPoint)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5dcd740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"set_localHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.get_hitNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)()>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::get_hitNormal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5dcd888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"get_hitNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.set_hitNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::set_hitNormal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5dcd8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"set_hitNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::_ctor)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x5dca210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.NormalToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<uint8_t,uint8_t,uint8_t> (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::NormalToBytes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5dcd9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"NormalToBytes", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)()>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::ToString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5dcda8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                    {::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelManager_VoxelMineOperation.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoxelManager_VoxelMineOperation::*)()>(&::GlobalNamespace::VoxelManager_VoxelMineOperation::IsValid)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5dcdcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelManager_VoxelMineOperation::get_localHitPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"get_localHitPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::VoxelManager_VoxelMineOperation::set_localHitPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"set_localHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelManager_VoxelMineOperation::get_hitNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"get_hitNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::VoxelManager_VoxelMineOperation::set_hitNormal(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"set_hitNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::VoxelManager_VoxelMineOperation::_ctor(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::UnityEngine::Vector3  origin, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, world, hitPoint, hitNormal, origin, action);
}
inline ::System::ValueTuple_3<uint8_t,uint8_t,uint8_t> GlobalNamespace::VoxelManager_VoxelMineOperation::NormalToBytes(::UnityEngine::Vector3  hitNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"NormalToBytes", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<uint8_t,uint8_t,uint8_t>>(nullptr, ___internal_method, hitNormal);
}
inline ::StringW GlobalNamespace::VoxelManager_VoxelMineOperation::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::VoxelManager_VoxelMineOperation::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "worldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_hitOffset", ty: "::Unity::Mathematics::half3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_normX", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_normY", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_normZ", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "op", ty: "::GlobalNamespace::VoxelOperation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelManager_VoxelMineOperation::VoxelManager_VoxelMineOperation(int32_t  worldId, ::Unity::Mathematics::half3  _hitOffset, uint8_t  _normX, uint8_t  _normY, uint8_t  _normZ, ::GlobalNamespace::VoxelOperation  op) noexcept  {
this->worldId = worldId;
this->_hitOffset = _hitOffset;
this->_normX = _normX;
this->_normY = _normY;
this->_normZ = _normZ;
this->op = op;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelManager_VoxelMineOperation::VoxelManager_VoxelMineOperation()   {
}
