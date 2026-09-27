#pragma once
// IWYU pragma private; include "Liv/Lck/CameraResolutionDescriptor.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
//  Writing Method size for method: ::Liv::Lck::CameraResolutionDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::CameraResolutionDescriptor::*)(uint32_t, uint32_t)>(&::Liv::Lck::CameraResolutionDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ceba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraResolutionDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::CameraResolutionDescriptor.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::CameraResolutionDescriptor::*)()>(&::Liv::Lck::CameraResolutionDescriptor::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ceb8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraResolutionDescriptor>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::CameraResolutionDescriptor.GetResolutionInOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::CameraResolutionDescriptor (::Liv::Lck::CameraResolutionDescriptor::*)(::Liv::Lck::LckCameraOrientation)>(&::Liv::Lck::CameraResolutionDescriptor::GetResolutionInOrientation)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ceba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraResolutionDescriptor>(),
                        {"GetResolutionInOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::CameraResolutionDescriptor::_ctor(uint32_t  width, uint32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraResolutionDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height);
}
inline bool Liv::Lck::CameraResolutionDescriptor::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraResolutionDescriptor>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Liv::Lck::CameraResolutionDescriptor Liv::Lck::CameraResolutionDescriptor::GetResolutionInOrientation(::Liv::Lck::LckCameraOrientation  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::CameraResolutionDescriptor>(),
                        {"GetResolutionInOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::CameraResolutionDescriptor>(*this, ___internal_method, orientation);
}
// Ctor Parameters [CppParam { name: "Width", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Height", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::CameraResolutionDescriptor::CameraResolutionDescriptor(uint32_t  Width, uint32_t  Height) noexcept  {
this->Width = Width;
this->Height = Height;
}
// Ctor Parameters []
constexpr ::Liv::Lck::CameraResolutionDescriptor::CameraResolutionDescriptor()   {
}
