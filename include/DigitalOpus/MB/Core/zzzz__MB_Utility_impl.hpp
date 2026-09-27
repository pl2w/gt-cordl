#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_Utility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_Utility_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_Utility_MeshAnalysisResult_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_Utility_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.createTextureCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Texture2D*, bool)>(&::DigitalOpus::MB::Core::MB_Utility::createTextureCopy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9dbeae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"createTextureCopy", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.ArrayBIsSubsetOfA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Object*>, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::MB_Utility::ArrayBIsSubsetOfA)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9dbebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"ArrayBIsSubsetOfA", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.GetGOMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB_Utility::GetGOMaterials)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x9dbec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetGOMaterials", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.GetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB_Utility::GetMesh)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9dbafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetMesh", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.SetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MB_Utility::SetMesh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9dbf1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"SetMesh", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.GetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB_Utility::GetRenderer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9dbf308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetRenderer", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.DisableRendererInSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB_Utility::DisableRendererInSource)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9dbf418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"DisableRendererInSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Mesh*, ::by_ref<::UnityEngine::Rect>)>(&::DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9dbf53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9dbf578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector2>, ::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>, int32_t)>(&::DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9dbf684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.hasOutOfBoundsUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, ::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>, int32_t)>(&::DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9dbf810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.setSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::MB_Utility::setSolidColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9dbf980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"setSolidColor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.resampleTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Texture2D*, bool, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB_Utility::resampleTexture)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x9dbfa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"resampleTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.AreAllSharedMaterialsDistinct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Material*>)>(&::DigitalOpus::MB::Core::MB_Utility::AreAllSharedMaterialsDistinct)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9dbfc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"AreAllSharedMaterialsDistinct", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.doSubmeshesShareVertsOrTris
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>)>(&::DigitalOpus::MB::Core::MB_Utility::doSubmeshesShareVertsOrTris)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9dbfd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"doSubmeshesShareVertsOrTris", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::by_ref<::UnityEngine::Bounds>)>(&::DigitalOpus::MB::Core::MB_Utility::GetBounds)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9dbff9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::DigitalOpus::MB::Core::MB_Utility::Destroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9db9034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.ConvertAssetsRelativePathToFullSystemPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::DigitalOpus::MB::Core::MB_Utility::ConvertAssetsRelativePathToFullSystemPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9dc01e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"ConvertAssetsRelativePathToFullSystemPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.IsSceneInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB_Utility::IsSceneInstance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dc0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"IsSceneInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility.BoneWeightToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::BoneWeight)>(&::DigitalOpus::MB::Core::MB_Utility::BoneWeightToString)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x9dc02b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"BoneWeightToString", {}, {::i2c::type_of<::UnityEngine::BoneWeight>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_Utility::*)()>(&::DigitalOpus::MB::Core::MB_Utility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc0608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB_Utility::setStaticF_DO_INTEGRITY_CHECKS(bool  value)  {
::cordl_internals::setStaticField<bool, "DO_INTEGRITY_CHECKS", ::DigitalOpus::MB::Core::MB_Utility*>(std::forward<bool>(value));
}
inline bool DigitalOpus::MB::Core::MB_Utility::getStaticF_DO_INTEGRITY_CHECKS()  {
return ::cordl_internals::getStaticField<bool, "DO_INTEGRITY_CHECKS", ::DigitalOpus::MB::Core::MB_Utility*>();
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB_Utility::createTextureCopy(::UnityEngine::Texture2D*  source, bool  expectedToBeGammaCorrectedHint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"createTextureCopy", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, source, expectedToBeGammaCorrectedHint);
}
inline bool DigitalOpus::MB::Core::MB_Utility::ArrayBIsSubsetOfA(::ArrayW<::System::Object*>  a, ::ArrayW<::System::Object*>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"ArrayBIsSubsetOfA", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> DigitalOpus::MB::Core::MB_Utility::GetGOMaterials(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetGOMaterials", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(nullptr, ___internal_method, go);
}
inline ::UnityW<::UnityEngine::Mesh> DigitalOpus::MB::Core::MB_Utility::GetMesh(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetMesh", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, go);
}
inline void DigitalOpus::MB::Core::MB_Utility::SetMesh(::UnityEngine::GameObject*  go, ::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"SetMesh", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, m);
}
inline ::UnityW<::UnityEngine::Renderer> DigitalOpus::MB::Core::MB_Utility::GetRenderer(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetRenderer", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(nullptr, ___internal_method, go);
}
inline void DigitalOpus::MB::Core::MB_Utility::DisableRendererInSource(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"DisableRendererInSource", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go);
}
inline bool DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::UnityEngine::Rect>  uvBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, uvBounds);
}
inline bool DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  putResultHere, int32_t  submeshIndex, int32_t  uvChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, putResultHere, submeshIndex, uvChannel);
}
inline bool DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs(::ArrayW<::UnityEngine::Vector2>  uvs, ::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  putResultHere, int32_t  submeshIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uvs, m, putResultHere, submeshIndex);
}
inline bool DigitalOpus::MB::Core::MB_Utility::hasOutOfBoundsUVs(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  uvs, ::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  putResultHere, int32_t  submeshIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"hasOutOfBoundsUVs", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uvs, m, putResultHere, submeshIndex);
}
inline void DigitalOpus::MB::Core::MB_Utility::setSolidColor(::UnityEngine::Texture2D*  t, ::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"setSolidColor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, c);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB_Utility::resampleTexture(::UnityEngine::Texture2D*  source, bool  expectToBeGammaCorrectedHint, int32_t  newWidth, int32_t  newHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"resampleTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, source, expectToBeGammaCorrectedHint, newWidth, newHeight);
}
inline bool DigitalOpus::MB::Core::MB_Utility::AreAllSharedMaterialsDistinct(::ArrayW<::UnityEngine::Material*>  sharedMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"AreAllSharedMaterialsDistinct", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sharedMaterials);
}
inline void DigitalOpus::MB::Core::MB_Utility::doSubmeshesShareVertsOrTris(::UnityEngine::Mesh*  m, ::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>  mar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"doSubmeshesShareVertsOrTris", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MB_Utility_MeshAnalysisResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, mar);
}
inline bool DigitalOpus::MB::Core::MB_Utility::GetBounds(::UnityEngine::GameObject*  go, ::by_ref<::UnityEngine::Bounds>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"GetBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go, b);
}
inline void DigitalOpus::MB::Core::MB_Utility::Destroy(::UnityEngine::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, o);
}
inline ::StringW DigitalOpus::MB::Core::MB_Utility::ConvertAssetsRelativePathToFullSystemPath(::StringW  pth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"ConvertAssetsRelativePathToFullSystemPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pth);
}
inline bool DigitalOpus::MB::Core::MB_Utility::IsSceneInstance(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"IsSceneInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go);
}
inline ::StringW DigitalOpus::MB::Core::MB_Utility::BoneWeightToString(::UnityEngine::BoneWeight  bw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {"BoneWeightToString", {}, {::i2c::type_of<::UnityEngine::BoneWeight>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bw);
}
inline void DigitalOpus::MB::Core::MB_Utility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_Utility* DigitalOpus::MB::Core::MB_Utility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_Utility*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_Utility::MB_Utility()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle.isSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::*)(::System::Object*)>(&::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::isSame)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9dc0610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {"isSame", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle.sharesVerts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::*)(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*)>(&::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::sharesVerts)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9dc0724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {"sharesVerts", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::Initialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9dc0848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {"Initialize", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::*)()>(&::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9dc0918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MB_Utility_MB_Triangle::__cordl_internal_get_submeshIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIdx;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB_Utility_MB_Triangle::__cordl_internal_get_submeshIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIdx;
}
constexpr void DigitalOpus::MB::Core::MB_Utility_MB_Triangle::__cordl_internal_set_submeshIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshIdx = value;
}
constexpr ::ArrayW<int32_t>& DigitalOpus::MB::Core::MB_Utility_MB_Triangle::__cordl_internal_get_vs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vs;
}
constexpr ::ArrayW<int32_t> const& DigitalOpus::MB::Core::MB_Utility_MB_Triangle::__cordl_internal_get_vs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vs;
}
constexpr void DigitalOpus::MB::Core::MB_Utility_MB_Triangle::__cordl_internal_set_vs(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vs = value;
}
inline bool DigitalOpus::MB::Core::MB_Utility_MB_Triangle::isSame(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {"isSame", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool DigitalOpus::MB::Core::MB_Utility_MB_Triangle::sharesVerts(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {"sharesVerts", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void DigitalOpus::MB::Core::MB_Utility_MB_Triangle::Initialize(::ArrayW<int32_t>  ts, int32_t  idx, int32_t  sIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {"Initialize", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ts, idx, sIdx);
}
inline void DigitalOpus::MB::Core::MB_Utility_MB_Triangle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle* DigitalOpus::MB::Core::MB_Utility_MB_Triangle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle::MB_Utility_MB_Triangle()   {
}
