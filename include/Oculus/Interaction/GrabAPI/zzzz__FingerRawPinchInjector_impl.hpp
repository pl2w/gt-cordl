#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerRawPinchInjector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__FingerRawPinchInjector_def.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__HandGrabAPI_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchInjector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchInjector::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchInjector::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4fe328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabAPI::FingerRawPinchInjector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabAPI::FingerRawPinchInjector::*)()>(&::Oculus::Interaction::GrabAPI::FingerRawPinchInjector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4fe3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& Oculus::Interaction::GrabAPI::FingerRawPinchInjector::__cordl_internal_get__handGrabAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabAPI;
}
constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& Oculus::Interaction::GrabAPI::FingerRawPinchInjector::__cordl_internal_get__handGrabAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabAPI;
}
constexpr void Oculus::Interaction::GrabAPI::FingerRawPinchInjector::__cordl_internal_set__handGrabAPI(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabAPI = value;
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchInjector::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabAPI::FingerRawPinchInjector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabAPI::FingerRawPinchInjector* Oculus::Interaction::GrabAPI::FingerRawPinchInjector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabAPI::FingerRawPinchInjector::FingerRawPinchInjector()   {
}
