#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneObjectTransformType.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_Transformation_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_Transformation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneObjectTransformType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneObjectTransformType::*)()>(&::GlobalNamespace::OVRSceneObjectTransformType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneObjectTransformType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation& GlobalNamespace::OVRSceneObjectTransformType::__cordl_internal_get_TransformType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformType;
}
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const& GlobalNamespace::OVRSceneObjectTransformType::__cordl_internal_get_TransformType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransformType;
}
constexpr void GlobalNamespace::OVRSceneObjectTransformType::__cordl_internal_set_TransformType(::GlobalNamespace::OVRSceneObjectTransformType_Transformation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransformType = value;
}
inline void GlobalNamespace::OVRSceneObjectTransformType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneObjectTransformType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneObjectTransformType* GlobalNamespace::OVRSceneObjectTransformType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneObjectTransformType*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneObjectTransformType::OVRSceneObjectTransformType()   {
}
