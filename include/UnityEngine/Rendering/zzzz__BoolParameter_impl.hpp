#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BoolParameter.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_DisplayType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_DisplayType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BoolParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BoolParameter::*)(bool, bool)>(&::UnityEngine::Rendering::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb19e18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BoolParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BoolParameter::*)(bool, ::GlobalNamespace::BoolParameter_DisplayType, bool)>(&::UnityEngine::Rendering::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb19e1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BoolParameter_DisplayType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoolParameter_DisplayType& UnityEngine::Rendering::BoolParameter::__cordl_internal_get_displayType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayType;
}
constexpr ::GlobalNamespace::BoolParameter_DisplayType const& UnityEngine::Rendering::BoolParameter::__cordl_internal_get_displayType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayType;
}
constexpr void UnityEngine::Rendering::BoolParameter::__cordl_internal_set_displayType(::GlobalNamespace::BoolParameter_DisplayType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayType = value;
}
inline void UnityEngine::Rendering::BoolParameter::_ctor(bool  value, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::BoolParameter::_ctor(bool  value, ::GlobalNamespace::BoolParameter_DisplayType  displayType, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BoolParameter_DisplayType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, displayType, overrideState);
}
inline ::UnityEngine::Rendering::BoolParameter* UnityEngine::Rendering::BoolParameter::New_ctor(bool  value, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BoolParameter*>(value, overrideState));
}
inline ::UnityEngine::Rendering::BoolParameter* UnityEngine::Rendering::BoolParameter::New_ctor(bool  value, ::GlobalNamespace::BoolParameter_DisplayType  displayType, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BoolParameter*>(value, displayType, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BoolParameter::BoolParameter()   {
}
