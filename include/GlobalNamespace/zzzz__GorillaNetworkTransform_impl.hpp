#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkTransform.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkTransform_NetTransformData_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkTransform_def.hpp"
#include "GlobalNamespace/zzzz__GorillaNetworkTransform_NetTransformData_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.get_RespectOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::get_RespectOwnership)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f2ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"get_RespectOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f2ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)(bool)>(&::GlobalNamespace::GorillaNetworkTransform::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f2ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaNetworkTransform_NetTransformData (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::get_data)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58f2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.set_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)(::GlobalNamespace::GorillaNetworkTransform_NetTransformData)>(&::GlobalNamespace::GorillaNetworkTransform::set_data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58f2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"set_data", {}, {::i2c::type_of<::GlobalNamespace::GorillaNetworkTransform_NetTransformData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58f2fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::OnEnable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58f309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::OnDisable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58f31f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::Tick)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x58f32fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::WriteDataFusion)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58f38c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::ReadDataFusion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58f3c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaNetworkTransform::WriteDataPUN)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x58f4214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaNetworkTransform::ReadDataPUN)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58f4458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.SharedRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)(::GlobalNamespace::GorillaNetworkTransform_NetTransformData)>(&::GlobalNamespace::GorillaNetworkTransform::SharedRead)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x58f3c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"SharedRead", {}, {::i2c::type_of<::GlobalNamespace::GorillaNetworkTransform_NetTransformData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.SharedWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaNetworkTransform_NetTransformData (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::SharedWrite)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x58f39d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"SharedWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.GTAddition_DoTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::GTAddition_DoTeleport)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f46e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"GTAddition_DoTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58f46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)(bool)>(&::GlobalNamespace::GorillaNetworkTransform::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58f4714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaNetworkTransform.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaNetworkTransform::*)()>(&::GlobalNamespace::GorillaNetworkTransform::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58f4784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_UseLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocal;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_UseLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocal;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_UseLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseLocal = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_respectOwnership()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respectOwnership;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_respectOwnership() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respectOwnership;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_respectOwnership(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respectOwnership = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_clampDistanceFromSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampDistanceFromSpawn;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_clampDistanceFromSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampDistanceFromSpawn;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_clampDistanceFromSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampDistanceFromSpawn = value;
}
constexpr float_t& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr float_t& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_maxDistanceSquare()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceSquare;
}
constexpr float_t const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_maxDistanceSquare() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceSquare;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_maxDistanceSquare(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceSquare = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_clampToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampToSpawn;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_clampToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampToSpawn;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_clampToSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampToSpawn = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_clampOriginPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampOriginPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_clampOriginPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampOriginPoint;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_clampOriginPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampOriginPoint = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_SynchronizePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizePosition;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_SynchronizePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizePosition;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_SynchronizePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizePosition = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_SynchronizeRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeRotation;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_SynchronizeRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeRotation;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_SynchronizeRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeRotation = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_SynchronizeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeScale;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_SynchronizeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeScale;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_SynchronizeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeScale = value;
}
constexpr float_t& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_Distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr float_t const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_Distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Distance;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_Distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Distance = value;
}
constexpr float_t& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_Angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr float_t const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_Angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Angle;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_Angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Angle = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_Velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_Velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_Velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Velocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_NetworkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_NetworkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_StoredPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoredPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_StoredPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoredPosition;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_StoredPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StoredPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_NetworkScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_NetworkScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkScale;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_NetworkScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkScale = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_NetworkRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_NetworkRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkRotation = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_firstTake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_firstTake;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get_m_firstTake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_firstTake;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set_m_firstTake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_firstTake = value;
}
constexpr bool& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::GlobalNamespace::GorillaNetworkTransform_NetTransformData& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::GlobalNamespace::GorillaNetworkTransform_NetTransformData const& GlobalNamespace::GorillaNetworkTransform::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void GlobalNamespace::GorillaNetworkTransform::__cordl_internal_set__data(::GlobalNamespace::GorillaNetworkTransform_NetTransformData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
inline bool GlobalNamespace::GorillaNetworkTransform::get_RespectOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"get_RespectOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaNetworkTransform::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GorillaNetworkTransform_NetTransformData GlobalNamespace::GorillaNetworkTransform::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaNetworkTransform_NetTransformData>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::set_data(::GlobalNamespace::GorillaNetworkTransform_NetTransformData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"set_data", {}, {::i2c::type_of<::GlobalNamespace::GorillaNetworkTransform_NetTransformData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaNetworkTransform::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaNetworkTransform::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaNetworkTransform::SharedRead(::GlobalNamespace::GorillaNetworkTransform_NetTransformData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"SharedRead", {}, {::i2c::type_of<::GlobalNamespace::GorillaNetworkTransform_NetTransformData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::GorillaNetworkTransform_NetTransformData GlobalNamespace::GorillaNetworkTransform::SharedWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"SharedWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaNetworkTransform_NetTransformData>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::GTAddition_DoTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {"GTAddition_DoTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaNetworkTransform::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GorillaNetworkTransform::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaNetworkTransform*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaNetworkTransform* GlobalNamespace::GorillaNetworkTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaNetworkTransform*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GorillaNetworkTransform::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GorillaNetworkTransform::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaNetworkTransform::GorillaNetworkTransform()   {
}
