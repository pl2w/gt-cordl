#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigEffectorData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_Style_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_Style_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigEffectorData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigEffectorData::*)()>(&::UnityEngine::Animations::Rigging::RigEffectorData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae7f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigEffectorData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_get_m_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_get_m_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr void UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Transform = value;
}
constexpr ::GlobalNamespace::RigEffectorData_Style& UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_get_m_Style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Style;
}
constexpr ::GlobalNamespace::RigEffectorData_Style const& UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_get_m_Style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Style;
}
constexpr void UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_set_m_Style(::GlobalNamespace::RigEffectorData_Style  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Style = value;
}
constexpr bool& UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_get_m_Visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Visible;
}
constexpr bool const& UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_get_m_Visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Visible;
}
constexpr void UnityEngine::Animations::Rigging::RigEffectorData::__cordl_internal_set_m_Visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Visible = value;
}
inline void UnityEngine::Animations::Rigging::RigEffectorData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigEffectorData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Animations::Rigging::RigEffectorData* UnityEngine::Animations::Rigging::RigEffectorData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigEffectorData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigEffectorData::RigEffectorData()   {
}
