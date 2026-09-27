#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HmdDataSourceConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdDataSourceConfig.get_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer* (::Oculus::Interaction::Input::HmdDataSourceConfig::*)()>(&::Oculus::Interaction::Input::HmdDataSourceConfig::get_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5136e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataSourceConfig*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdDataSourceConfig.set_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdDataSourceConfig::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::HmdDataSourceConfig::set_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5136e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataSourceConfig*>(),
                        {"set_TrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HmdDataSourceConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HmdDataSourceConfig::*)()>(&::Oculus::Interaction::Input::HmdDataSourceConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5136f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataSourceConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Input::HmdDataSourceConfig::__cordl_internal_get__TrackingToWorldTransformer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackingToWorldTransformer_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Input::HmdDataSourceConfig::__cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackingToWorldTransformer_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HmdDataSourceConfig::__cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackingToWorldTransformer_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::Input::HmdDataSourceConfig::get_TrackingToWorldTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataSourceConfig*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HmdDataSourceConfig::set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataSourceConfig*>(),
                        {"set_TrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HmdDataSourceConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HmdDataSourceConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HmdDataSourceConfig* Oculus::Interaction::Input::HmdDataSourceConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HmdDataSourceConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig::HmdDataSourceConfig()   {
}
