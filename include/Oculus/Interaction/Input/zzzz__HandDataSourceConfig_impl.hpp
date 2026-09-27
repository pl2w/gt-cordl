#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandDataSourceConfig.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataSourceConfig_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::HandDataSourceConfig::*)()>(&::Oculus::Interaction::Input::HandDataSourceConfig::get_Handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig.set_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataSourceConfig::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::Input::HandDataSourceConfig::set_Handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"set_Handedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig.get_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer* (::Oculus::Interaction::Input::HandDataSourceConfig::*)()>(&::Oculus::Interaction::Input::HandDataSourceConfig::get_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig.set_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataSourceConfig::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Input::HandDataSourceConfig::set_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"set_TrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig.get_HandSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (::Oculus::Interaction::Input::HandDataSourceConfig::*)()>(&::Oculus::Interaction::Input::HandDataSourceConfig::get_HandSkeleton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"get_HandSkeleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig.set_HandSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataSourceConfig::*)(::Oculus::Interaction::Input::HandSkeleton*)>(&::Oculus::Interaction::Input::HandDataSourceConfig::set_HandSkeleton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"set_HandSkeleton", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandSkeleton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandDataSourceConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandDataSourceConfig::*)()>(&::Oculus::Interaction::Input::HandDataSourceConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_get__Handedness_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handedness_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_get__Handedness_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handedness_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_set__Handedness_k__BackingField(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Handedness_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_get__TrackingToWorldTransformer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackingToWorldTransformer_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackingToWorldTransformer_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackingToWorldTransformer_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::HandSkeleton*& Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_get__HandSkeleton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandSkeleton_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::HandSkeleton* const& Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_get__HandSkeleton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandSkeleton_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandDataSourceConfig::__cordl_internal_set__HandSkeleton_k__BackingField(::Oculus::Interaction::Input::HandSkeleton*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandSkeleton_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::HandDataSourceConfig::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandDataSourceConfig::set_Handedness(::Oculus::Interaction::Input::Handedness  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"set_Handedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::Input::HandDataSourceConfig::get_TrackingToWorldTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandDataSourceConfig::set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"set_TrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandDataSourceConfig::get_HandSkeleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"get_HandSkeleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandSkeleton*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandDataSourceConfig::set_HandSkeleton(::Oculus::Interaction::Input::HandSkeleton*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {"set_HandSkeleton", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandSkeleton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HandDataSourceConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandDataSourceConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandDataSourceConfig* Oculus::Interaction::Input::HandDataSourceConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandDataSourceConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandDataSourceConfig::HandDataSourceConfig()   {
}
