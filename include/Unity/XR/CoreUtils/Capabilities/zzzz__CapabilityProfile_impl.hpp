#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/CapabilityProfile.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/CoreUtils/Capabilities/zzzz__CapabilityProfile_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile.add_CapabilityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*)>(&::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::add_CapabilityChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb3fd4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {"add_CapabilityChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile.remove_CapabilityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*)>(&::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::remove_CapabilityChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb3fd5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {"remove_CapabilityChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile.ReportCapabilityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::*)()>(&::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::ReportCapabilityChanged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb3fd67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {"ReportCapabilityChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::*)()>(&::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fd6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::Capabilities::CapabilityProfile::setStaticF_CapabilityChanged(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*, "CapabilityChanged", ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(std::forward<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*>(value));
}
inline ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>* Unity::XR::CoreUtils::Capabilities::CapabilityProfile::getStaticF_CapabilityChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*, "CapabilityChanged", ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>();
}
inline void Unity::XR::CoreUtils::Capabilities::CapabilityProfile::add_CapabilityChanged(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {"add_CapabilityChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Capabilities::CapabilityProfile::remove_CapabilityChanged(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {"remove_CapabilityChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::Capabilities::CapabilityProfile::ReportCapabilityChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {"ReportCapabilityChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Capabilities::CapabilityProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile* Unity::XR::CoreUtils::Capabilities::CapabilityProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Capabilities::CapabilityProfile*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Capabilities::CapabilityProfile::CapabilityProfile()   {
}
