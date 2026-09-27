#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/NavigationModel_ImplementationData.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_ImplementationData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__MoveDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.get_consecutiveMoveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NavigationModel_ImplementationData::*)()>(&::GlobalNamespace::NavigationModel_ImplementationData::get_consecutiveMoveCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"get_consecutiveMoveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.set_consecutiveMoveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NavigationModel_ImplementationData::*)(int32_t)>(&::GlobalNamespace::NavigationModel_ImplementationData::set_consecutiveMoveCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"set_consecutiveMoveCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.get_lastMoveDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::MoveDirection (::GlobalNamespace::NavigationModel_ImplementationData::*)()>(&::GlobalNamespace::NavigationModel_ImplementationData::get_lastMoveDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"get_lastMoveDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.set_lastMoveDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NavigationModel_ImplementationData::*)(::UnityEngine::EventSystems::MoveDirection)>(&::GlobalNamespace::NavigationModel_ImplementationData::set_lastMoveDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"set_lastMoveDirection", {}, {::i2c::type_of<::UnityEngine::EventSystems::MoveDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.get_lastMoveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NavigationModel_ImplementationData::*)()>(&::GlobalNamespace::NavigationModel_ImplementationData::get_lastMoveTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43235c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"get_lastMoveTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.set_lastMoveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NavigationModel_ImplementationData::*)(float_t)>(&::GlobalNamespace::NavigationModel_ImplementationData::set_lastMoveTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"set_lastMoveTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NavigationModel_ImplementationData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NavigationModel_ImplementationData::*)()>(&::GlobalNamespace::NavigationModel_ImplementationData::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb432320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NavigationModel_ImplementationData::get_consecutiveMoveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"get_consecutiveMoveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::NavigationModel_ImplementationData::set_consecutiveMoveCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"set_consecutiveMoveCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::MoveDirection GlobalNamespace::NavigationModel_ImplementationData::get_lastMoveDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"get_lastMoveDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::MoveDirection>(*this, ___internal_method);
}
inline void GlobalNamespace::NavigationModel_ImplementationData::set_lastMoveDirection(::UnityEngine::EventSystems::MoveDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"set_lastMoveDirection", {}, {::i2c::type_of<::UnityEngine::EventSystems::MoveDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::NavigationModel_ImplementationData::get_lastMoveTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"get_lastMoveTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::NavigationModel_ImplementationData::set_lastMoveTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"set_lastMoveTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::NavigationModel_ImplementationData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NavigationModel_ImplementationData>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_consecutiveMoveCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lastMoveDirection_k__BackingField", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lastMoveTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NavigationModel_ImplementationData::NavigationModel_ImplementationData(int32_t  _consecutiveMoveCount_k__BackingField, ::UnityEngine::EventSystems::MoveDirection  _lastMoveDirection_k__BackingField, float_t  _lastMoveTime_k__BackingField) noexcept  {
this->_consecutiveMoveCount_k__BackingField = _consecutiveMoveCount_k__BackingField;
this->_lastMoveDirection_k__BackingField = _lastMoveDirection_k__BackingField;
this->_lastMoveTime_k__BackingField = _lastMoveTime_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NavigationModel_ImplementationData::NavigationModel_ImplementationData()   {
}
