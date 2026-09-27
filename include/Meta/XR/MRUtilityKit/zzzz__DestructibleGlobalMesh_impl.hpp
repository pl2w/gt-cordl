#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleGlobalMesh.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleGlobalMesh_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::*)(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh)>(&::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::Equals)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f09914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::*)(::System::Object*)>(&::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f09a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::*)()>(&::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9f09b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh)>(&::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f09bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                        {"op_Equality", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh)>(&::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f08fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Meta::XR::MRUtilityKit::DestructibleGlobalMesh::Equals(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Meta::XR::MRUtilityKit::DestructibleGlobalMesh::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Meta::XR::MRUtilityKit::DestructibleGlobalMesh::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::DestructibleGlobalMesh::op_Equality(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  left, ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                        {"op_Equality", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Meta::XR::MRUtilityKit::DestructibleGlobalMesh::op_Inequality(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  left, ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::DestructibleGlobalMesh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "DestructibleMeshComponent", ty: "::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxPointsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointsPerUnitX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointsPerUnitY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::DestructibleGlobalMesh(::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  DestructibleMeshComponent, int32_t  MaxPointsCount, float_t  PointsPerUnitX, float_t  PointsPerUnitY) noexcept  {
this->DestructibleMeshComponent = DestructibleMeshComponent;
this->MaxPointsCount = MaxPointsCount;
this->PointsPerUnitX = PointsPerUnitX;
this->PointsPerUnitY = PointsPerUnitY;
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh::DestructibleGlobalMesh()   {
}
