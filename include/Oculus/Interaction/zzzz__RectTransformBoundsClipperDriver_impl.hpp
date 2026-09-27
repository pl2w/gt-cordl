#pragma once
// IWYU pragma private; include "Oculus/Interaction/RectTransformBoundsClipperDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__RectTransformBoundsClipperDriver_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__BoundsClipper_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RectTransformBoundsClipperDriver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RectTransformBoundsClipperDriver::*)()>(&::Oculus::Interaction::RectTransformBoundsClipperDriver::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa489ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                    {::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RectTransformBoundsClipperDriver.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RectTransformBoundsClipperDriver::*)()>(&::Oculus::Interaction::RectTransformBoundsClipperDriver::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa489bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                    {::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RectTransformBoundsClipperDriver.OnRectTransformDimensionsChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RectTransformBoundsClipperDriver::*)()>(&::Oculus::Interaction::RectTransformBoundsClipperDriver::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa489bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                        {"OnRectTransformDimensionsChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RectTransformBoundsClipperDriver.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RectTransformBoundsClipperDriver::*)()>(&::Oculus::Interaction::RectTransformBoundsClipperDriver::Resize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa489adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                        {"Resize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RectTransformBoundsClipperDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RectTransformBoundsClipperDriver::*)()>(&::Oculus::Interaction::RectTransformBoundsClipperDriver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa489bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>& Oculus::Interaction::RectTransformBoundsClipperDriver::__cordl_internal_get__boundsClipper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundsClipper;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper> const& Oculus::Interaction::RectTransformBoundsClipperDriver::__cordl_internal_get__boundsClipper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundsClipper;
}
constexpr void Oculus::Interaction::RectTransformBoundsClipperDriver::__cordl_internal_set__boundsClipper(::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundsClipper = value;
}
inline void Oculus::Interaction::RectTransformBoundsClipperDriver::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RectTransformBoundsClipperDriver::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RectTransformBoundsClipperDriver::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                        {"OnRectTransformDimensionsChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RectTransformBoundsClipperDriver::Resize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                        {"Resize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RectTransformBoundsClipperDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RectTransformBoundsClipperDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::RectTransformBoundsClipperDriver* Oculus::Interaction::RectTransformBoundsClipperDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RectTransformBoundsClipperDriver*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RectTransformBoundsClipperDriver::RectTransformBoundsClipperDriver()   {
}
