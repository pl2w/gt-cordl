#pragma once
// IWYU pragma private; include "UnityEngine/Recorder/ObjectRecordingSettings.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Recorder/zzzz__ObjectRecordingSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Recorder::ObjectRecordingSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::ObjectRecordingSettings::*)()>(&::UnityEngine::Recorder::ObjectRecordingSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb110120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::ObjectRecordingSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_get_recordPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordPosition;
}
constexpr bool const& UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_get_recordPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordPosition;
}
constexpr void UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_set_recordPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordPosition = value;
}
constexpr bool& UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_get_recordRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordRotation;
}
constexpr bool const& UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_get_recordRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordRotation;
}
constexpr void UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_set_recordRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordRotation = value;
}
constexpr bool& UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_get_recordScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordScale;
}
constexpr bool const& UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_get_recordScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordScale;
}
constexpr void UnityEngine::Recorder::ObjectRecordingSettings::__cordl_internal_set_recordScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordScale = value;
}
inline void UnityEngine::Recorder::ObjectRecordingSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::ObjectRecordingSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Recorder::ObjectRecordingSettings* UnityEngine::Recorder::ObjectRecordingSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Recorder::ObjectRecordingSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Recorder::ObjectRecordingSettings::ObjectRecordingSettings()   {
}
