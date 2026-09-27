#pragma once
// IWYU pragma private; include "UnityEngine/Localization/EditorPropertyDriver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__EditorPropertyDriver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::EditorPropertyDriver.RegisterProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Localization::EditorPropertyDriver::RegisterProperty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb0154f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::EditorPropertyDriver*>(),
                        {"RegisterProperty", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::EditorPropertyDriver.UnregisterProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&::UnityEngine::Localization::EditorPropertyDriver::UnregisterProperty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb0154fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::EditorPropertyDriver*>(),
                        {"UnregisterProperty", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::EditorPropertyDriver::RegisterProperty(::UnityEngine::Object*  target, ::StringW  propertyPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::EditorPropertyDriver*>(),
                        {"RegisterProperty", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, propertyPath);
}
inline void UnityEngine::Localization::EditorPropertyDriver::UnregisterProperty(::UnityEngine::Object*  target, ::StringW  propertyPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::EditorPropertyDriver*>(),
                        {"UnregisterProperty", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, propertyPath);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::EditorPropertyDriver::EditorPropertyDriver()   {
}
