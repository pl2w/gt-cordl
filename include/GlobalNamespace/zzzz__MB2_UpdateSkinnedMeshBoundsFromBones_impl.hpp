#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_UpdateSkinnedMeshBoundsFromBones.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__MB2_UpdateSkinnedMeshBoundsFromBones_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::*)()>(&::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::Start)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9d74abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::*)()>(&::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::Update)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d74c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::*)()>(&::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d74e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::__cordl_internal_get_smr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smr;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::__cordl_internal_get_smr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smr;
}
constexpr void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::__cordl_internal_set_smr(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smr = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::__cordl_internal_set_bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
inline void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones* GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones::MB2_UpdateSkinnedMeshBoundsFromBones()   {
}
