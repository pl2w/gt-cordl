#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_Output.hpp"
#include "BoingKit/zzzz__QuaternionSpring_impl.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Output_def.hpp"
#include "BoingKit/zzzz__BoingBehavior_def.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
#include "BoingKit/zzzz__BoingReactor_def.hpp"
#include "BoingKit/zzzz__QuaternionSpring_def.hpp"
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Output._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Output::*)(int32_t, ::by_ref<::BoingKit::Vector3Spring>, ::by_ref<::BoingKit::QuaternionSpring>, ::by_ref<::BoingKit::Vector3Spring>)>(&::GlobalNamespace::BoingWork_Output::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e26f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::BoingKit::Vector3Spring>>(), ::i2c::type_of<::by_ref<::BoingKit::QuaternionSpring>>(), ::i2c::type_of<::by_ref<::BoingKit::Vector3Spring>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Output.GatherOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Output::*)(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::GlobalNamespace::BoingWork_Output::GatherOutput)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e26f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {"GatherOutput", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Output.GatherOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Output::*)(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*, ::GlobalNamespace::BoingManager_UpdateMode)>(&::GlobalNamespace::BoingWork_Output::GatherOutput)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e27014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {"GatherOutput", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Output.SuppressWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Output::*)()>(&::GlobalNamespace::BoingWork_Output::SuppressWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e270bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {"SuppressWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoingWork_Output::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::GlobalNamespace::BoingWork_Output>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BoingWork_Output::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::GlobalNamespace::BoingWork_Output>();
}
inline void GlobalNamespace::BoingWork_Output::_ctor(int32_t  instanceID, ::by_ref<::BoingKit::Vector3Spring>  positionSpring, ::by_ref<::BoingKit::QuaternionSpring>  rotationSpring, ::by_ref<::BoingKit::Vector3Spring>  scaleSpring)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::BoingKit::Vector3Spring>>(), ::i2c::type_of<::by_ref<::BoingKit::QuaternionSpring>>(), ::i2c::type_of<::by_ref<::BoingKit::Vector3Spring>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceID, positionSpring, rotationSpring, scaleSpring);
}
inline void GlobalNamespace::BoingWork_Output::GatherOutput(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  behaviorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {"GatherOutput", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, behaviorMap, updateMode);
}
inline void GlobalNamespace::BoingWork_Output::GatherOutput(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  reactorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {"GatherOutput", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*>(), ::i2c::type_of<::GlobalNamespace::BoingManager_UpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reactorMap, updateMode);
}
inline void GlobalNamespace::BoingWork_Output::SuppressWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Output>(),
                        {"SuppressWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding0", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationSpring", ty: "::BoingKit::QuaternionSpring", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingWork_Output::BoingWork_Output(int32_t  InstanceID, int32_t  m_padding0, int32_t  m_padding1, int32_t  m_padding2, ::BoingKit::Vector3Spring  PositionSpring, ::BoingKit::QuaternionSpring  RotationSpring, ::BoingKit::Vector3Spring  ScaleSpring) noexcept  {
this->InstanceID = InstanceID;
this->m_padding0 = m_padding0;
this->m_padding1 = m_padding1;
this->m_padding2 = m_padding2;
this->PositionSpring = PositionSpring;
this->RotationSpring = RotationSpring;
this->ScaleSpring = ScaleSpring;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingWork_Output::BoingWork_Output()   {
}
