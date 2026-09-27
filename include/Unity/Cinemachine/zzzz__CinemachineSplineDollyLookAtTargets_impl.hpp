#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDollyLookAtTargets.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDollyLookAtTargets_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDollyLookAtTargets_Item_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDollyLookAtTargets_LerpItem_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineData_1_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::*)()>(&::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaea6ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::*)()>(&::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::get_IsValid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaea6d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::*)()>(&::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea6ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::MutateCameraState)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xaea6efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets.GetGetSplineAndDolly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::*)(::by_ref<::UnityEngine::Splines::SplineContainer*>, ::by_ref<::Unity::Cinemachine::CinemachineSplineDolly*>)>(&::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::GetGetSplineAndDolly)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaea6dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                        {"GetGetSplineAndDolly", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineContainer*>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineSplineDolly*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::*)()>(&::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaea7228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*& Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::__cordl_internal_get_Targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Targets;
}
constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>* const& Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::__cordl_internal_get_Targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Targets;
}
constexpr void Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::__cordl_internal_set_Targets(::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Targets = value;
}
inline void Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::GetGetSplineAndDolly(::by_ref<::UnityEngine::Splines::SplineContainer*>  spline, ::by_ref<::Unity::Cinemachine::CinemachineSplineDolly*>  dolly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                        {"GetGetSplineAndDolly", {}, {::i2c::type_of<::by_ref<::UnityEngine::Splines::SplineContainer*>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineSplineDolly*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spline, dolly);
}
inline void Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets* Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets::CinemachineSplineDollyLookAtTargets()   {
}
