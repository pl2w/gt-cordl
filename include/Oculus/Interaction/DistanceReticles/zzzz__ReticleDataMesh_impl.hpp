#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataMesh.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataMesh_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__IReticleData_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataMesh.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::Oculus::Interaction::DistanceReticles::ReticleDataMesh::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataMesh::get_Filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"get_Filter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataMesh.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataMesh::*)(::UnityEngine::MeshFilter*)>(&::Oculus::Interaction::DistanceReticles::ReticleDataMesh::set_Filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f08a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"set_Filter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataMesh.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::DistanceReticles::ReticleDataMesh::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataMesh::get_Target)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4f08b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataMesh.ProcessHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::ReticleDataMesh::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceReticles::ReticleDataMesh::ProcessHitPoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4f08c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataMesh::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& Oculus::Interaction::DistanceReticles::ReticleDataMesh::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Oculus::Interaction::DistanceReticles::ReticleDataMesh::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleDataMesh::__cordl_internal_set__filter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
inline ::UnityW<::UnityEngine::MeshFilter> Oculus::Interaction::DistanceReticles::ReticleDataMesh::get_Filter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"get_Filter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataMesh::set_Filter(::UnityEngine::MeshFilter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"set_Filter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::DistanceReticles::ReticleDataMesh::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::ReticleDataMesh::ProcessHitPoint(::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hitPoint);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::ReticleDataMesh* Oculus::Interaction::DistanceReticles::ReticleDataMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::ReticleDataMesh*>());
}
/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr  Oculus::Interaction::DistanceReticles::ReticleDataMesh::operator ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* Oculus::Interaction::DistanceReticles::ReticleDataMesh::i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::ReticleDataMesh::ReticleDataMesh()   {
}
