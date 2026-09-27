#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GroupWeightManipulator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__GroupWeightManipulator_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::GroupWeightManipulator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GroupWeightManipulator::*)()>(&::Unity::Cinemachine::GroupWeightManipulator::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaee1230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GroupWeightManipulator.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GroupWeightManipulator::*)()>(&::Unity::Cinemachine::GroupWeightManipulator::OnValidate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaee127c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GroupWeightManipulator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GroupWeightManipulator::*)()>(&::Unity::Cinemachine::GroupWeightManipulator::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaee1298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GroupWeightManipulator.UpdateWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GroupWeightManipulator::*)()>(&::Unity::Cinemachine::GroupWeightManipulator::UpdateWeights)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xaee1310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"UpdateWeights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GroupWeightManipulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GroupWeightManipulator::*)()>(&::Unity::Cinemachine::GroupWeightManipulator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee1498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight0;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight0;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight0 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight1;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight1;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight1 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight2;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight2;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight2 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight3;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight3;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight3 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight4;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight4;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight4 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight5;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight5;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight5 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight6;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight6;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight6(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight6 = value;
}
constexpr float_t& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight7;
}
constexpr float_t const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_Weight7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight7;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_Weight7(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight7 = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineTargetGroup>& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_m_Group()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Group;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineTargetGroup> const& Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_get_m_Group() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Group;
}
constexpr void Unity::Cinemachine::GroupWeightManipulator::__cordl_internal_set_m_Group(::UnityW<::Unity::Cinemachine::CinemachineTargetGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Group = value;
}
inline void Unity::Cinemachine::GroupWeightManipulator::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::GroupWeightManipulator::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::GroupWeightManipulator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::GroupWeightManipulator::UpdateWeights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {"UpdateWeights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::GroupWeightManipulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GroupWeightManipulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::GroupWeightManipulator* Unity::Cinemachine::GroupWeightManipulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::GroupWeightManipulator*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::GroupWeightManipulator::GroupWeightManipulator()   {
}
