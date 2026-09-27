#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/EnviromentMovement.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__EnviromentMovement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::EnviromentMovement.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::EnviromentMovement::*)()>(&::MTAssets::EasyMeshCombiner::EnviromentMovement::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cb9920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::EnviromentMovement*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::EnviromentMovement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::EnviromentMovement::*)()>(&::MTAssets::EasyMeshCombiner::EnviromentMovement::Update)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5cb999c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::EnviromentMovement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::EnviromentMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::EnviromentMovement::*)()>(&::MTAssets::EasyMeshCombiner::EnviromentMovement::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cb9b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::EnviromentMovement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_nextPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPosition;
}
constexpr ::UnityEngine::Vector3 const& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_nextPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPosition;
}
constexpr void MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_set_nextPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_thisTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_thisTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisTransform;
}
constexpr void MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_set_thisTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisTransform = value;
}
constexpr ::UnityEngine::Vector3& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_pos1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos1;
}
constexpr ::UnityEngine::Vector3 const& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_pos1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos1;
}
constexpr void MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_set_pos1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos1 = value;
}
constexpr ::UnityEngine::Vector3& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_pos2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos2;
}
constexpr ::UnityEngine::Vector3 const& MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_get_pos2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos2;
}
constexpr void MTAssets::EasyMeshCombiner::EnviromentMovement::__cordl_internal_set_pos2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos2 = value;
}
inline void MTAssets::EasyMeshCombiner::EnviromentMovement::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::EnviromentMovement*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::EnviromentMovement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::EnviromentMovement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::EnviromentMovement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::EnviromentMovement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MTAssets::EasyMeshCombiner::EnviromentMovement* MTAssets::EasyMeshCombiner::EnviromentMovement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::EnviromentMovement*>());
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::EnviromentMovement::EnviromentMovement()   {
}
