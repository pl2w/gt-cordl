#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/FirstPersonMeshCullingDisabler.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GorillaTag/Rendering/zzzz__FirstPersonMeshCullingDisabler_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::FirstPersonMeshCullingDisabler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::*)()>(&::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::Awake)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5d551ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::FirstPersonMeshCullingDisabler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::*)()>(&::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::OnEnable)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5d55348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::FirstPersonMeshCullingDisabler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::*)()>(&::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5560c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& GorillaTag::Rendering::FirstPersonMeshCullingDisabler::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& GorillaTag::Rendering::FirstPersonMeshCullingDisabler::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void GorillaTag::Rendering::FirstPersonMeshCullingDisabler::__cordl_internal_set_meshes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GorillaTag::Rendering::FirstPersonMeshCullingDisabler::__cordl_internal_get_xforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GorillaTag::Rendering::FirstPersonMeshCullingDisabler::__cordl_internal_get_xforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xforms;
}
constexpr void GorillaTag::Rendering::FirstPersonMeshCullingDisabler::__cordl_internal_set_xforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xforms = value;
}
inline void GorillaTag::Rendering::FirstPersonMeshCullingDisabler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::FirstPersonMeshCullingDisabler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::FirstPersonMeshCullingDisabler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::FirstPersonMeshCullingDisabler* GorillaTag::Rendering::FirstPersonMeshCullingDisabler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::FirstPersonMeshCullingDisabler()   {
}
