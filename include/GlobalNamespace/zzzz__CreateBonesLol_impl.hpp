#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateBonesLol.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreateBonesLol_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateBonesLol.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateBonesLol::*)()>(&::GlobalNamespace::CreateBonesLol::Update)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5796744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateBonesLol*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateBonesLol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateBonesLol::*)()>(&::GlobalNamespace::CreateBonesLol::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5796c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateBonesLol*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CreateBonesLol::__cordl_internal_get_cube()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cube;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CreateBonesLol::__cordl_internal_get_cube() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cube;
}
constexpr void GlobalNamespace::CreateBonesLol::__cordl_internal_set_cube(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cube = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& GlobalNamespace::CreateBonesLol::__cordl_internal_get_skeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeleton;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& GlobalNamespace::CreateBonesLol::__cordl_internal_get_skeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeleton;
}
constexpr void GlobalNamespace::CreateBonesLol::__cordl_internal_set_skeleton(::UnityW<::GlobalNamespace::OVRSkeleton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skeleton = value;
}
inline void GlobalNamespace::CreateBonesLol::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateBonesLol*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreateBonesLol::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateBonesLol*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreateBonesLol* GlobalNamespace::CreateBonesLol::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateBonesLol*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateBonesLol::CreateBonesLol()   {
}
