#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/LocalSkyboxRotationDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Rendering/zzzz__LocalSkyboxRotationDriver_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::LocalSkyboxRotationDriver.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::LocalSkyboxRotationDriver::*)()>(&::GorillaTag::Rendering::LocalSkyboxRotationDriver::LateUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d55614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::LocalSkyboxRotationDriver.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::LocalSkyboxRotationDriver::*)()>(&::GorillaTag::Rendering::LocalSkyboxRotationDriver::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d556f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::LocalSkyboxRotationDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::LocalSkyboxRotationDriver::*)()>(&::GorillaTag::Rendering::LocalSkyboxRotationDriver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d557a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Rendering::LocalSkyboxRotationDriver::__cordl_internal_get_rotationSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Rendering::LocalSkyboxRotationDriver::__cordl_internal_get_rotationSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSource;
}
constexpr void GorillaTag::Rendering::LocalSkyboxRotationDriver::__cordl_internal_set_rotationSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSource = value;
}
inline void GorillaTag::Rendering::LocalSkyboxRotationDriver::setStaticF__LocalSkyboxRotation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_LocalSkyboxRotation", ::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Rendering::LocalSkyboxRotationDriver::getStaticF__LocalSkyboxRotation()  {
return ::cordl_internals::getStaticField<int32_t, "_LocalSkyboxRotation", ::GorillaTag::Rendering::LocalSkyboxRotationDriver*>();
}
inline void GorillaTag::Rendering::LocalSkyboxRotationDriver::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::LocalSkyboxRotationDriver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::LocalSkyboxRotationDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::LocalSkyboxRotationDriver* GorillaTag::Rendering::LocalSkyboxRotationDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::LocalSkyboxRotationDriver*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::LocalSkyboxRotationDriver::LocalSkyboxRotationDriver()   {
}
