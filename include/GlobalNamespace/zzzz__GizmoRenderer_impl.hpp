#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoRenderer.hpp"
#include "Drawing/zzzz__CommandBuilder_impl.hpp"
#include "Drawing/zzzz__LabelAlignment_impl.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_GizmoType_impl.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_RenderMode_impl.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_TextAlign_impl.hpp"
#include "System/zzzz__Action_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_def.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_GizmoType_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_RenderMode_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_TextAlign_def.hpp"
#include "GlobalNamespace/zzzz__GizmoRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GizmoRenderer::*)()>(&::GlobalNamespace::GizmoRenderer::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1accc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GizmoRenderer::*)()>(&::GlobalNamespace::GizmoRenderer::RenderGizmos)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5a1acd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderPlaneWire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderPlaneWire)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a1b020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderPlaneWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderPlaneSolid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderPlaneSolid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a1b0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderPlaneSolid", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderGridWire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderGridWire)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a1b1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderGridWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderBoxWire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderBoxWire)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a1b2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderBoxWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderBoxSolid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderBoxSolid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a1b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderBoxSolid", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderSphereWire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderSphereWire)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a1b464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderSphereWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderSphereSolid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderSphereSolid)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5a1b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderSphereSolid", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderLabel3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderLabel3D)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a1b768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderLabel3D", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.RenderLabel2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::CommandBuilder, ::GlobalNamespace::GizmoRenderer_GizmoInfo*)>(&::GlobalNamespace::GizmoRenderer::RenderLabel2D)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5a1b8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderLabel2D", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GizmoRenderer::InitializeOnLoad)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a1ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer.GetRandomColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::GlobalNamespace::GizmoRenderer::GetRandomColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a1baf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"GetRandomColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GizmoRenderer::*)()>(&::GlobalNamespace::GizmoRenderer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a1bb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode& GlobalNamespace::GizmoRenderer::__cordl_internal_get_renderMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMode;
}
constexpr ::GlobalNamespace::GizmoRenderer_RenderMode const& GlobalNamespace::GizmoRenderer::__cordl_internal_get_renderMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMode;
}
constexpr void GlobalNamespace::GizmoRenderer::__cordl_internal_set_renderMode(::GlobalNamespace::GizmoRenderer_RenderMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderMode = value;
}
constexpr bool& GlobalNamespace::GizmoRenderer::__cordl_internal_get_includeInBuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeInBuild;
}
constexpr bool const& GlobalNamespace::GizmoRenderer::__cordl_internal_get_includeInBuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeInBuild;
}
constexpr void GlobalNamespace::GizmoRenderer::__cordl_internal_set_includeInBuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeInBuild = value;
}
constexpr ::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*>& GlobalNamespace::GizmoRenderer::__cordl_internal_get_gizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr ::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*> const& GlobalNamespace::GizmoRenderer::__cordl_internal_get_gizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr void GlobalNamespace::GizmoRenderer::__cordl_internal_set_gizmos(::ArrayW<::GlobalNamespace::GizmoRenderer_GizmoInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmos = value;
}
inline void GlobalNamespace::GizmoRenderer::setStaticF_gRenderFuncs(::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*>, "gRenderFuncs", ::GlobalNamespace::GizmoRenderer*>(std::forward<::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*>>(value));
}
inline ::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*> GlobalNamespace::GizmoRenderer::getStaticF_gRenderFuncs()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Action_2<::Drawing::CommandBuilder,::GlobalNamespace::GizmoRenderer_GizmoInfo*>*>, "gRenderFuncs", ::GlobalNamespace::GizmoRenderer*>();
}
inline void GlobalNamespace::GizmoRenderer::setStaticF_gLabelAligns(::ArrayW<::Drawing::LabelAlignment>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Drawing::LabelAlignment>, "gLabelAligns", ::GlobalNamespace::GizmoRenderer*>(std::forward<::ArrayW<::Drawing::LabelAlignment>>(value));
}
inline ::ArrayW<::Drawing::LabelAlignment> GlobalNamespace::GizmoRenderer::getStaticF_gLabelAligns()  {
return ::cordl_internals::getStaticField<::ArrayW<::Drawing::LabelAlignment>, "gLabelAligns", ::GlobalNamespace::GizmoRenderer*>();
}
inline void GlobalNamespace::GizmoRenderer::setStaticF_gSphereMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "gSphereMesh", ::GlobalNamespace::GizmoRenderer*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::GizmoRenderer::getStaticF_gSphereMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "gSphereMesh", ::GlobalNamespace::GizmoRenderer*>();
}
inline void GlobalNamespace::GizmoRenderer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GizmoRenderer::RenderGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GizmoRenderer::RenderPlaneWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderPlaneWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderPlaneSolid(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderPlaneSolid", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderGridWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderGridWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderBoxWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderBoxWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderBoxSolid(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderBoxSolid", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderSphereWire(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderSphereWire", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderSphereSolid(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderSphereSolid", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderLabel3D(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderLabel3D", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::RenderLabel2D(::Drawing::CommandBuilder  draw, ::GlobalNamespace::GizmoRenderer_GizmoInfo*  gizmo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"RenderLabel2D", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, draw, gizmo);
}
inline void GlobalNamespace::GizmoRenderer::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::GizmoRenderer::GetRandomColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {"GetRandomColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GizmoRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GizmoRenderer* GlobalNamespace::GizmoRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GizmoRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GizmoRenderer::GizmoRenderer()   {
}
//  Writing Method size for method: ::GlobalNamespace::GizmoRenderer_GizmoInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GizmoRenderer_GizmoInfo::*)()>(&::GlobalNamespace::GizmoRenderer_GizmoInfo::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a1c0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_render()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___render;
}
constexpr bool const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_render() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___render;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_render(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___render = value;
}
constexpr ::GlobalNamespace::GizmoRenderer_GizmoType& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::GizmoRenderer_GizmoType const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_type(::GlobalNamespace::GizmoRenderer_GizmoType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr uint32_t& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_lineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineWidth;
}
constexpr uint32_t const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_lineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineWidth;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_lineWidth(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineWidth = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::Unity::Mathematics::float3& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::Unity::Mathematics::float3 const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_center(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::Unity::Mathematics::float3& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::Unity::Mathematics::float3 const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_size(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr float_t& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::Unity::Mathematics::quaternion& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::Unity::Mathematics::quaternion const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_rotation(::Unity::Mathematics::quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::StringW& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr float_t& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_textSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSize;
}
constexpr float_t const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_textSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSize;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_textSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textSize = value;
}
constexpr ::GlobalNamespace::GizmoRenderer_TextAlign& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_textAlign()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textAlign;
}
constexpr ::GlobalNamespace::GizmoRenderer_TextAlign const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_textAlign() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textAlign;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_textAlign(::GlobalNamespace::GizmoRenderer_TextAlign  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textAlign = value;
}
constexpr uint32_t& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_textPPU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPPU;
}
constexpr uint32_t const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_textPPU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPPU;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_textPPU(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textPPU = value;
}
constexpr ::Unity::Mathematics::int2& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_gridCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridCells;
}
constexpr ::Unity::Mathematics::int2 const& GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_get_gridCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridCells;
}
constexpr void GlobalNamespace::GizmoRenderer_GizmoInfo::__cordl_internal_set_gridCells(::Unity::Mathematics::int2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridCells = value;
}
inline void GlobalNamespace::GizmoRenderer_GizmoInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoRenderer_GizmoInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GizmoRenderer_GizmoInfo* GlobalNamespace::GizmoRenderer_GizmoInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GizmoRenderer_GizmoInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GizmoRenderer_GizmoInfo::GizmoRenderer_GizmoInfo()   {
}
