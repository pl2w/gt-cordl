#pragma once
// IWYU pragma private; include "GorillaTag/Audio/PlanarSound.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Audio/zzzz__PlanarSound_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::PlanarSound.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlanarSound::*)()>(&::GorillaTag::Audio::PlanarSound::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d4f8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlanarSound*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::PlanarSound.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlanarSound::*)()>(&::GorillaTag::Audio::PlanarSound::LateUpdate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d4f97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlanarSound*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::PlanarSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::PlanarSound::*)()>(&::GorillaTag::Audio::PlanarSound::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d4faf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlanarSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Audio::PlanarSound::__cordl_internal_get_cameraXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Audio::PlanarSound::__cordl_internal_get_cameraXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraXform;
}
constexpr void GorillaTag::Audio::PlanarSound::__cordl_internal_set_cameraXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraXform = value;
}
constexpr bool& GorillaTag::Audio::PlanarSound::__cordl_internal_get_hasCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCamera;
}
constexpr bool const& GorillaTag::Audio::PlanarSound::__cordl_internal_get_hasCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCamera;
}
constexpr void GorillaTag::Audio::PlanarSound::__cordl_internal_set_hasCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCamera = value;
}
constexpr bool& GorillaTag::Audio::PlanarSound::__cordl_internal_get_limitDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitDistance;
}
constexpr bool const& GorillaTag::Audio::PlanarSound::__cordl_internal_get_limitDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitDistance;
}
constexpr void GorillaTag::Audio::PlanarSound::__cordl_internal_set_limitDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitDistance = value;
}
constexpr float_t& GorillaTag::Audio::PlanarSound::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GorillaTag::Audio::PlanarSound::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GorillaTag::Audio::PlanarSound::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
inline void GorillaTag::Audio::PlanarSound::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlanarSound*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::PlanarSound::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlanarSound*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::PlanarSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::PlanarSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::PlanarSound* GorillaTag::Audio::PlanarSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::PlanarSound*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::PlanarSound::PlanarSound()   {
}
