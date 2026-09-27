#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSExtensions_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::CMSExtensions.GetHierarchyPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GT_CustomMapSupportRuntime::CMSExtensions::GetHierarchyPath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cb1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CMSExtensions*>(),
                        {"GetHierarchyPath", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GT_CustomMapSupportRuntime::CMSExtensions::GetHierarchyPath(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::CMSExtensions*>(),
                        {"GetHierarchyPath", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, transform);
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::CMSExtensions::CMSExtensions()   {
}
