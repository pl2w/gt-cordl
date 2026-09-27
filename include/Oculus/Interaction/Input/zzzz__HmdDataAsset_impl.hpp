#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HmdDataAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ICopyFrom_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdDataAsset.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdDataAsset::*)(::Oculus::Interaction::Input::HmdDataAsset*)>(&::Oculus::Interaction::Input::HmdDataAsset::CopyFrom)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa513694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::HmdDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdDataAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdDataAsset::*)()>(&::Oculus::Interaction::Input::HmdDataAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5136d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_set_Root(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr bool& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_IsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTracked;
}
constexpr bool const& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_IsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTracked;
}
constexpr void Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_set_IsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsTracked = value;
}
constexpr int32_t& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_FrameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameId;
}
constexpr int32_t const& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_FrameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameId;
}
constexpr void Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_set_FrameId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrameId = value;
}
constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig*& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig* const& Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Oculus::Interaction::Input::HmdDataAsset::__cordl_internal_set_Config(::Oculus::Interaction::Input::HmdDataSourceConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
inline void Oculus::Interaction::Input::HmdDataAsset::CopyFrom(::Oculus::Interaction::Input::HmdDataAsset*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataAsset*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::Input::HmdDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::Input::HmdDataAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HmdDataAsset* Oculus::Interaction::Input::HmdDataAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HmdDataAsset*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>"
constexpr  Oculus::Interaction::Input::HmdDataAsset::operator ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>*() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>* Oculus::Interaction::Input::HmdDataAsset::i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Input__HmdDataAsset__() noexcept {
return static_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HmdDataAsset*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HmdDataAsset::HmdDataAsset()   {
}
