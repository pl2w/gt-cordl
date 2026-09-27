#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/Rig.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Rig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::Rig.get_weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Animations::Rigging::Rig::*)()>(&::UnityEngine::Animations::Rigging::Rig::get_weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae779ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::Rig*>(),
                        {"get_weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::Rig.set_weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::Rig::*)(float_t)>(&::UnityEngine::Animations::Rigging::Rig::set_weight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae779b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::Rig*>(),
                        {"set_weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::Rig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::Rig::*)()>(&::UnityEngine::Animations::Rigging::Rig::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae779d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::Rig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Animations::Rigging::Rig::__cordl_internal_get_m_Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Weight;
}
constexpr float_t const& UnityEngine::Animations::Rigging::Rig::__cordl_internal_get_m_Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Weight;
}
constexpr void UnityEngine::Animations::Rigging::Rig::__cordl_internal_set_m_Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Weight = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*& UnityEngine::Animations::Rigging::Rig::__cordl_internal_get_m_Effectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Effectors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>* const& UnityEngine::Animations::Rigging::Rig::__cordl_internal_get_m_Effectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Effectors;
}
constexpr void UnityEngine::Animations::Rigging::Rig::__cordl_internal_set_m_Effectors(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Effectors = value;
}
inline float_t UnityEngine::Animations::Rigging::Rig::get_weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::Rig*>(),
                        {"get_weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::Rig::set_weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::Rig*>(),
                        {"set_weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Animations::Rigging::Rig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::Rig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Animations::Rigging::Rig* UnityEngine::Animations::Rigging::Rig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::Rig*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::Rig::Rig()   {
}
