#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BoneAndBindpose.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneAndBindpose_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d93de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::*)(::System::Object*)>(&::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::Equals)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9d9a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d9a9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::_ctor(::UnityEngine::Transform*  t, ::UnityEngine::Matrix4x4  bp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t, bp);
}
inline bool GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "bone", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bindPose", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::MB3_MeshCombinerSingle_BoneAndBindpose(::UnityW<::UnityEngine::Transform>  bone, ::UnityEngine::Matrix4x4  bindPose) noexcept  {
this->bone = bone;
this->bindPose = bindPose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneAndBindpose::MB3_MeshCombinerSingle_BoneAndBindpose()   {
}
