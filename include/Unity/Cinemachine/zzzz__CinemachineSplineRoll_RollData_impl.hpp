#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll_RollData.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineRoll_RollData.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::CinemachineSplineRoll_RollData)>(&::GlobalNamespace::CinemachineSplineRoll_RollData::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae987ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::CinemachineSplineRoll_RollData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineRoll_RollData.op_Implicit___GlobalNamespace__CinemachineSplineRoll_RollData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineSplineRoll_RollData (*)(float_t)>(&::GlobalNamespace::CinemachineSplineRoll_RollData::op_Implicit___GlobalNamespace__CinemachineSplineRoll_RollData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae986fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::CinemachineSplineRoll_RollData::op_Implicit_float_t(::GlobalNamespace::CinemachineSplineRoll_RollData  roll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::CinemachineSplineRoll_RollData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, roll);
}
inline ::GlobalNamespace::CinemachineSplineRoll_RollData GlobalNamespace::CinemachineSplineRoll_RollData::op_Implicit___GlobalNamespace__CinemachineSplineRoll_RollData(float_t  roll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollData>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineSplineRoll_RollData>(nullptr, ___internal_method, roll);
}
// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineSplineRoll_RollData::CinemachineSplineRoll_RollData(float_t  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSplineRoll_RollData::CinemachineSplineRoll_RollData()   {
}
