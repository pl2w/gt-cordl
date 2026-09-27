#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedMeshFilter.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedMeshFilter_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter.CanTrackProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::CanTrackProperty)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb057130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter.ApplyLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::*)(::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::ApplyLocale)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0xb05717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter.MeshOperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::MeshOperationCompleted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb0576f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                        {"MeshOperationCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter.SetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::*)(::UnityEngine::Mesh*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::SetMesh)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb057684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                        {"SetMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb057750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::__cordl_internal_get_m_CurrentOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>> const& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::__cordl_internal_get_m_CurrentOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentOperation;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::__cordl_internal_set_m_CurrentOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentOperation = value;
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::CanTrackProperty(::StringW  propertyPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertyPath);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, variantLocale, defaultLocale);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::MeshOperationCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>  assetOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                        {"MeshOperationCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Mesh>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assetOp);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::SetMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                        {"SetMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedMeshFilter::TrackedMeshFilter()   {
}
