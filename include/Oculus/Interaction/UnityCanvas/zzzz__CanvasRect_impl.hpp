#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasRect.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMesh_impl.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasRect_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasRenderTexture_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasRect.MeshInverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::UnityCanvas::CanvasRect::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::UnityCanvas::CanvasRect::MeshInverseTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa490924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasRect.GenerateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasRect::*)(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>)>(&::Oculus::Interaction::UnityCanvas::CanvasRect::GenerateMesh)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0xa490928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasRect.InjectAllCanvasRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasRect::*)(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*, ::UnityEngine::MeshFilter*)>(&::Oculus::Interaction::UnityCanvas::CanvasRect::InjectAllCanvasRect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa491238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(),
                        {"InjectAllCanvasRect", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasRect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasRect::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasRect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa491268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::UnityCanvas::CanvasRect::MeshInverseTransform(::UnityEngine::Vector3  localPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, localPosition);
}
inline void Oculus::Interaction::UnityCanvas::CanvasRect::GenerateMesh(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  verts, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  tris, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>  uvs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, tris, uvs);
}
inline void Oculus::Interaction::UnityCanvas::CanvasRect::InjectAllCanvasRect(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshFilter*  meshFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(),
                        {"InjectAllCanvasRect", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasRenderTexture, meshFilter);
}
inline void Oculus::Interaction::UnityCanvas::CanvasRect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasRect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UnityCanvas::CanvasRect* Oculus::Interaction::UnityCanvas::CanvasRect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UnityCanvas::CanvasRect*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::CanvasRect::CanvasRect()   {
}
