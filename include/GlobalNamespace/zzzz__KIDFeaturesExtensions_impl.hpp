#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDFeaturesExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDFeaturesExtensions_def.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDFeaturesExtensions.ToStandardisedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDFeaturesExtensions::ToStandardisedString)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a267f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDFeaturesExtensions*>(),
                        {"ToStandardisedString", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDFeaturesExtensions.FromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::EKIDFeatures> (*)(::StringW)>(&::GlobalNamespace::KIDFeaturesExtensions::FromString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5a26694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDFeaturesExtensions*>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDFeaturesExtensions.TryGetFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::EKIDFeatures>)>(&::GlobalNamespace::KIDFeaturesExtensions::TryGetFromString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a275b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDFeaturesExtensions*>(),
                        {"TryGetFromString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EKIDFeatures>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::KIDFeaturesExtensions::ToStandardisedString(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDFeaturesExtensions*>(),
                        {"ToStandardisedString", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, feature);
}
inline ::System::Nullable_1<::GlobalNamespace::EKIDFeatures> GlobalNamespace::KIDFeaturesExtensions::FromString(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDFeaturesExtensions*>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::EKIDFeatures>>(nullptr, ___internal_method, name);
}
inline bool GlobalNamespace::KIDFeaturesExtensions::TryGetFromString(::StringW  name, ::by_ref<::GlobalNamespace::EKIDFeatures>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDFeaturesExtensions*>(),
                        {"TryGetFromString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EKIDFeatures>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDFeaturesExtensions::KIDFeaturesExtensions()   {
}
