#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/ConstraintsUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__ConstraintsUtils_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::ConstraintsUtils.ConstructConstraintDataPropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Animations::Rigging::ConstraintsUtils::ConstructConstraintDataPropertyName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xae7bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::ConstraintsUtils*>(),
                        {"ConstructConstraintDataPropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::ConstraintsUtils.ConstructCustomPropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Component*, ::StringW)>(&::UnityEngine::Animations::Rigging::ConstraintsUtils::ConstructCustomPropertyName)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xae7f9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::ConstraintsUtils*>(),
                        {"ConstructCustomPropertyName", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Animations::Rigging::ConstraintsUtils::ConstructConstraintDataPropertyName(::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::ConstraintsUtils*>(),
                        {"ConstructConstraintDataPropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, property);
}
inline ::StringW UnityEngine::Animations::Rigging::ConstraintsUtils::ConstructCustomPropertyName(::UnityEngine::Component*  component, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::ConstraintsUtils*>(),
                        {"ConstructCustomPropertyName", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component, property);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::ConstraintsUtils::ConstraintsUtils()   {
}
