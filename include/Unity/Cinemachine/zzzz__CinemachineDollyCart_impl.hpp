#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDollyCart.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDollyCart_UpdateMethod_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_PositionUnits_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDollyCart_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDollyCart_UpdateMethod_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineCart_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDollyCart.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDollyCart::*)()>(&::Unity::Cinemachine::CinemachineDollyCart::FixedUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaecbcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDollyCart.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDollyCart::*)()>(&::Unity::Cinemachine::CinemachineDollyCart::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaecbe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDollyCart.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDollyCart::*)()>(&::Unity::Cinemachine::CinemachineDollyCart::LateUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaecbeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDollyCart.SetCartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDollyCart::*)(float_t)>(&::Unity::Cinemachine::CinemachineDollyCart::SetCartPosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaecbcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"SetCartPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDollyCart.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDollyCart::*)(::Unity::Cinemachine::CinemachineSplineCart*)>(&::Unity::Cinemachine::CinemachineDollyCart::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaecbf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineSplineCart*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDollyCart._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDollyCart::*)()>(&::Unity::Cinemachine::CinemachineDollyCart::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaecc094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase>& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase> const& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Path;
}
constexpr void Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_set_m_Path(::UnityW<::Unity::Cinemachine::CinemachinePathBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Path = value;
}
constexpr ::GlobalNamespace::CinemachineDollyCart_UpdateMethod& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_UpdateMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateMethod;
}
constexpr ::GlobalNamespace::CinemachineDollyCart_UpdateMethod const& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_UpdateMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateMethod;
}
constexpr void Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_set_m_UpdateMethod(::GlobalNamespace::CinemachineDollyCart_UpdateMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateMethod = value;
}
constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_PositionUnits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionUnits;
}
constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits const& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_PositionUnits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionUnits;
}
constexpr void Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_set_m_PositionUnits(::GlobalNamespace::CinemachinePathBase_PositionUnits  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionUnits = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Speed;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Speed;
}
constexpr void Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_set_m_Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Speed = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Position;
}
constexpr float_t const& Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_get_m_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Position;
}
constexpr void Unity::Cinemachine::CinemachineDollyCart::__cordl_internal_set_m_Position(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Position = value;
}
inline void Unity::Cinemachine::CinemachineDollyCart::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDollyCart::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDollyCart::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDollyCart::SetCartPosition(float_t  distanceAlongPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"SetCartPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distanceAlongPath);
}
inline void Unity::Cinemachine::CinemachineDollyCart::UpgradeToCm3(::Unity::Cinemachine::CinemachineSplineCart*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineSplineCart*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineDollyCart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDollyCart*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineDollyCart* Unity::Cinemachine::CinemachineDollyCart::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDollyCart*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDollyCart::CinemachineDollyCart()   {
}
