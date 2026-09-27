#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_BoneWeightCopier.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_BoneWeightCopier_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_BoneWeightCopier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_BoneWeightCopier::*)()>(&::GlobalNamespace::MB3_BoneWeightCopier::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d75568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BoneWeightCopier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_inputGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_inputGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputGameObject;
}
constexpr void GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_set_inputGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputGameObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_outputPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_outputPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPrefab;
}
constexpr void GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_set_outputPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputPrefab = value;
}
constexpr float_t& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_seamMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seamMesh;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_seamMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seamMesh;
}
constexpr void GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_set_seamMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seamMesh = value;
}
constexpr ::StringW& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_outputFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputFolder;
}
constexpr ::StringW const& GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_get_outputFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputFolder;
}
constexpr void GlobalNamespace::MB3_BoneWeightCopier::__cordl_internal_set_outputFolder(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputFolder = value;
}
inline void GlobalNamespace::MB3_BoneWeightCopier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BoneWeightCopier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_BoneWeightCopier* GlobalNamespace::MB3_BoneWeightCopier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_BoneWeightCopier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_BoneWeightCopier::MB3_BoneWeightCopier()   {
}
