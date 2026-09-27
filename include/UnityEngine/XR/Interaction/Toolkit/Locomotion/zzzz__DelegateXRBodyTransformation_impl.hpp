#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/DelegateXRBodyTransformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__DelegateXRBodyTransformation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation.add_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::add_transformation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb449688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {"add_transformation", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation.remove_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::remove_transformation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb449738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {"remove_transformation", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4497e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4497f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::Apply)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb449820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {"Apply", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::__cordl_internal_get_transformation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformation;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::__cordl_internal_get_transformation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::__cordl_internal_set_transformation(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformation = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::add_transformation(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {"add_transformation", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::remove_transformation(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {"remove_transformation", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::_ctor(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  transformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformation);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(),
                        {"Apply", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation* UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>());
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation* UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::New_ctor(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>*  transformation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation*>(transformation));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::DelegateXRBodyTransformation::DelegateXRBodyTransformation()   {
}
