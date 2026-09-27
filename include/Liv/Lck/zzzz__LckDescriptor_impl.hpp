#pragma once
// IWYU pragma private; include "Liv/Lck/LckDescriptor.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckDescriptor_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckDescriptor::*)()>(&::Liv::Lck::LckDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf3a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDescriptor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::LckDescriptor::__cordl_internal_get_cameraTrackDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTrackDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::LckDescriptor::__cordl_internal_get_cameraTrackDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTrackDescriptor;
}
constexpr void Liv::Lck::LckDescriptor::__cordl_internal_set_cameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraTrackDescriptor = value;
}
inline void Liv::Lck::LckDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDescriptor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckDescriptor* Liv::Lck::LckDescriptor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckDescriptor*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckDescriptor::LckDescriptor()   {
}
