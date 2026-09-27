#pragma once
// IWYU pragma private; include "Liv/Lck/QualityOption.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
//  Writing Method size for method: ::Liv::Lck::QualityOption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::QualityOption::*)(::StringW, bool, ::Liv::Lck::CameraTrackDescriptor, ::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::QualityOption::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cf34c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::QualityOption>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::QualityOption.get_CameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::CameraTrackDescriptor (::Liv::Lck::QualityOption::*)()>(&::Liv::Lck::QualityOption::get_CameraTrackDescriptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cf3520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::QualityOption>(),
                        {"get_CameraTrackDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::QualityOption::_ctor(::StringW  name, bool  isDefault, ::Liv::Lck::CameraTrackDescriptor  recordingCameraTrackDescriptor, ::Liv::Lck::CameraTrackDescriptor  streamingCameraTrackDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::QualityOption>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, isDefault, recordingCameraTrackDescriptor, streamingCameraTrackDescriptor);
}
inline ::Liv::Lck::CameraTrackDescriptor Liv::Lck::QualityOption::get_CameraTrackDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::QualityOption>(),
                        {"get_CameraTrackDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::CameraTrackDescriptor>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsDefault", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RecordingCameraTrackDescriptor", ty: "::Liv::Lck::CameraTrackDescriptor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StreamingCameraTrackDescriptor", ty: "::Liv::Lck::CameraTrackDescriptor", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::QualityOption::QualityOption(::StringW  Name, bool  IsDefault, ::Liv::Lck::CameraTrackDescriptor  RecordingCameraTrackDescriptor, ::Liv::Lck::CameraTrackDescriptor  StreamingCameraTrackDescriptor) noexcept  {
this->Name = Name;
this->IsDefault = IsDefault;
this->RecordingCameraTrackDescriptor = RecordingCameraTrackDescriptor;
this->StreamingCameraTrackDescriptor = StreamingCameraTrackDescriptor;
}
// Ctor Parameters []
constexpr ::Liv::Lck::QualityOption::QualityOption()   {
}
