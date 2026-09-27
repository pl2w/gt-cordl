#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNative.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_PlaneSet_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_PlaneSet_def.hpp"
#include "Photon/Voice/zzzz__ImageFormat_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Photon::Voice::ImageBufferNative._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNative::*)(::Photon::Voice::ImageBufferInfo)>(&::Photon::Voice::ImageBufferNative::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa753858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNative*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNative._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNative::*)(::System::IntPtr, int32_t, int32_t, int32_t, ::Photon::Voice::ImageFormat)>(&::Photon::Voice::ImageBufferNative::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa7538b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNative*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ImageFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNative.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNative::*)()>(&::Photon::Voice::ImageBufferNative::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa75395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ImageBufferNative*>(),
                    {::i2c::class_of<::Photon::Voice::ImageBufferNative*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::ImageBufferNative.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::ImageBufferNative::*)()>(&::Photon::Voice::ImageBufferNative::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa753960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::ImageBufferNative*>(),
                    {::i2c::class_of<::Photon::Voice::ImageBufferNative*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::ImageBufferInfo& Photon::Voice::ImageBufferNative::__cordl_internal_get_Info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr ::Photon::Voice::ImageBufferInfo const& Photon::Voice::ImageBufferNative::__cordl_internal_get_Info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr void Photon::Voice::ImageBufferNative::__cordl_internal_set_Info(::Photon::Voice::ImageBufferInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Info = value;
}
constexpr ::GlobalNamespace::ImageBufferNative_PlaneSet& Photon::Voice::ImageBufferNative::__cordl_internal_get_Planes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Planes;
}
constexpr ::GlobalNamespace::ImageBufferNative_PlaneSet const& Photon::Voice::ImageBufferNative::__cordl_internal_get_Planes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Planes;
}
constexpr void Photon::Voice::ImageBufferNative::__cordl_internal_set_Planes(::GlobalNamespace::ImageBufferNative_PlaneSet  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Planes = value;
}
inline void Photon::Voice::ImageBufferNative::_ctor(::Photon::Voice::ImageBufferInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNative*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void Photon::Voice::ImageBufferNative::_ctor(::System::IntPtr  buf, int32_t  width, int32_t  height, int32_t  stride, ::Photon::Voice::ImageFormat  imageFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNative*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ImageFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, width, height, stride, imageFormat);
}
inline void Photon::Voice::ImageBufferNative::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNative*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::ImageBufferNative::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNative*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::ImageBufferNative* Photon::Voice::ImageBufferNative::New_ctor(::Photon::Voice::ImageBufferInfo  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNative*>(info));
}
inline ::Photon::Voice::ImageBufferNative* Photon::Voice::ImageBufferNative::New_ctor(::System::IntPtr  buf, int32_t  width, int32_t  height, int32_t  stride, ::Photon::Voice::ImageFormat  imageFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNative*>(buf, width, height, stride, imageFormat));
}
// Ctor Parameters []
constexpr ::Photon::Voice::ImageBufferNative::ImageBufferNative()   {
}
