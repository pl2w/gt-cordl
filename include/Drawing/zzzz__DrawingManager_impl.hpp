#pragma once
// IWYU pragma private; include "Drawing/DrawingManager.hpp"
#include "Drawing/zzzz__DetectedRenderPipeline_impl.hpp"
#include "Drawing/zzzz__RedrawScope_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Drawing/zzzz__DrawingManager_def.hpp"
#include "Drawing/zzzz__AlineURPRenderPassFeature_def.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Drawing/zzzz__DrawingData_CommandBufferWrapper_def.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__IDrawGizmos_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Drawing::DrawingManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Drawing::DrawingManager> (*)()>(&::Drawing::DrawingManager::get_instance)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55d28c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::DrawingManager::Init)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x55cac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.RefreshRenderPipelineMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::RefreshRenderPipelineMode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55d2988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"RefreshRenderPipelineMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::OnEnable)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x55d2a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.BeginContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::Drawing::DrawingManager::BeginContextRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55d2e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"BeginContextRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.BeginFrameRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>)>(&::Drawing::DrawingManager::BeginFrameRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55d2e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"BeginFrameRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.BeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::Drawing::DrawingManager::BeginCameraRendering)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55d2e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"BeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::OnDisable)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x55d2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.OnEditorUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::OnEditorUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55d3258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"OnEditorUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55d3420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.CleanupIfNoCameraRendered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::CleanupIfNoCameraRendered)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x55d3264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"CleanupIfNoCameraRendered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.ExecuteCustomRenderPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::Drawing::DrawingManager::ExecuteCustomRenderPass)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x55d37f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"ExecuteCustomRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.ExecuteCustomRenderGraphPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::GlobalNamespace::DrawingData_CommandBufferWrapper, ::UnityEngine::Camera*)>(&::Drawing::DrawingManager::ExecuteCustomRenderGraphPass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55d39f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"ExecuteCustomRenderGraphPass", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.EndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::Drawing::DrawingManager::EndCameraRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55d3a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"EndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.PostRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Camera*)>(&::Drawing::DrawingManager::PostRender)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55d3a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"PostRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.CheckFrameTicking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::CheckFrameTicking)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x55d3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"CheckFrameTicking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.SubmitFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Camera*, ::GlobalNamespace::DrawingData_CommandBufferWrapper, bool)>(&::Drawing::DrawingManager::SubmitFrame)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x55d38b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"SubmitFrame", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.ShouldDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::DrawingManager::*)(::UnityEngine::Object*)>(&::Drawing::DrawingManager::ShouldDrawGizmos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55d3c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"ShouldDrawGizmos", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.RemoveDestroyedGizmoDrawers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::DrawingManager::RemoveDestroyedGizmoDrawers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x55d35f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"RemoveDestroyedGizmoDrawers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.Submit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)(::UnityEngine::Camera*, ::GlobalNamespace::DrawingData_CommandBufferWrapper, bool, bool)>(&::Drawing::DrawingManager::Submit)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55d3afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Submit", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::IDrawGizmos*)>(&::Drawing::DrawingManager::Register)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x55d3c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Register", {}, {::i2c::type_of<::Drawing::IDrawGizmos*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.GetBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (*)(bool)>(&::Drawing::DrawingManager::GetBuilder)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x55d3f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetBuilder", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.GetBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (*)(::Drawing::RedrawScope, bool)>(&::Drawing::DrawingManager::GetBuilder)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55d3fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.GetBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (*)(::GlobalNamespace::DrawingData_Hasher, ::Drawing::RedrawScope, bool)>(&::Drawing::DrawingManager::GetBuilder)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55d408c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager.GetRedrawScope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::RedrawScope (*)()>(&::Drawing::DrawingManager::GetRedrawScope)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55cb608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetRedrawScope", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingManager::*)()>(&::Drawing::DrawingManager::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55d4140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Drawing::DrawingData*& Drawing::DrawingManager::__cordl_internal_get_gizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr ::Drawing::DrawingData* const& Drawing::DrawingManager::__cordl_internal_get_gizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_gizmos(::Drawing::DrawingData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmos = value;
}
constexpr bool& Drawing::DrawingManager::__cordl_internal_get_framePassed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePassed;
}
constexpr bool const& Drawing::DrawingManager::__cordl_internal_get_framePassed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePassed;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_framePassed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framePassed = value;
}
constexpr int32_t& Drawing::DrawingManager::__cordl_internal_get_lastFrameCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameCount;
}
constexpr int32_t const& Drawing::DrawingManager::__cordl_internal_get_lastFrameCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameCount;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_lastFrameCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFrameCount = value;
}
constexpr float_t& Drawing::DrawingManager::__cordl_internal_get_lastFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameTime;
}
constexpr float_t const& Drawing::DrawingManager::__cordl_internal_get_lastFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFrameTime;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_lastFrameTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFrameTime = value;
}
constexpr int32_t& Drawing::DrawingManager::__cordl_internal_get_lastFilterFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFilterFrame;
}
constexpr int32_t const& Drawing::DrawingManager::__cordl_internal_get_lastFilterFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFilterFrame;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_lastFilterFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFilterFrame = value;
}
constexpr bool& Drawing::DrawingManager::__cordl_internal_get_actuallyEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actuallyEnabled;
}
constexpr bool const& Drawing::DrawingManager::__cordl_internal_get_actuallyEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actuallyEnabled;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_actuallyEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actuallyEnabled = value;
}
constexpr ::Drawing::RedrawScope& Drawing::DrawingManager::__cordl_internal_get_previousFrameRedrawScope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousFrameRedrawScope;
}
constexpr ::Drawing::RedrawScope const& Drawing::DrawingManager::__cordl_internal_get_previousFrameRedrawScope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousFrameRedrawScope;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_previousFrameRedrawScope(::Drawing::RedrawScope  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousFrameRedrawScope = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& Drawing::DrawingManager::__cordl_internal_get_commandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& Drawing::DrawingManager::__cordl_internal_get_commandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBuffer;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandBuffer = value;
}
constexpr ::Drawing::DetectedRenderPipeline& Drawing::DrawingManager::__cordl_internal_get_detectedRenderPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detectedRenderPipeline;
}
constexpr ::Drawing::DetectedRenderPipeline const& Drawing::DrawingManager::__cordl_internal_get_detectedRenderPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detectedRenderPipeline;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_detectedRenderPipeline(::Drawing::DetectedRenderPipeline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detectedRenderPipeline = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*& Drawing::DrawingManager::__cordl_internal_get_scriptableRenderersWithPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptableRenderersWithPass;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>* const& Drawing::DrawingManager::__cordl_internal_get_scriptableRenderersWithPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptableRenderersWithPass;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_scriptableRenderersWithPass(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scriptableRenderersWithPass = value;
}
constexpr ::UnityW<::Drawing::AlineURPRenderPassFeature>& Drawing::DrawingManager::__cordl_internal_get_renderPassFeature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderPassFeature;
}
constexpr ::UnityW<::Drawing::AlineURPRenderPassFeature> const& Drawing::DrawingManager::__cordl_internal_get_renderPassFeature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderPassFeature;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_renderPassFeature(::UnityW<::Drawing::AlineURPRenderPassFeature>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderPassFeature = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*& Drawing::DrawingManager::__cordl_internal_get_typeToGizmosEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeToGizmosEnabled;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* const& Drawing::DrawingManager::__cordl_internal_get_typeToGizmosEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeToGizmosEnabled;
}
constexpr void Drawing::DrawingManager::__cordl_internal_set_typeToGizmosEnabled(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeToGizmosEnabled = value;
}
inline void Drawing::DrawingManager::setStaticF_gizmoDrawers(::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>*, "gizmoDrawers", ::Drawing::DrawingManager*>(std::forward<::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>* Drawing::DrawingManager::getStaticF_gizmoDrawers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>*, "gizmoDrawers", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_gizmoDrawerTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*, "gizmoDrawerTypes", ::Drawing::DrawingManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* Drawing::DrawingManager::getStaticF_gizmoDrawerTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*, "gizmoDrawerTypes", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF__instance(::UnityW<::Drawing::DrawingManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Drawing::DrawingManager>, "_instance", ::Drawing::DrawingManager*>(std::forward<::UnityW<::Drawing::DrawingManager>>(value));
}
inline ::UnityW<::Drawing::DrawingManager> Drawing::DrawingManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Drawing::DrawingManager>, "_instance", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_allowRenderToRenderTextures(bool  value)  {
::cordl_internals::setStaticField<bool, "allowRenderToRenderTextures", ::Drawing::DrawingManager*>(std::forward<bool>(value));
}
inline bool Drawing::DrawingManager::getStaticF_allowRenderToRenderTextures()  {
return ::cordl_internals::getStaticField<bool, "allowRenderToRenderTextures", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_drawToAllCameras(bool  value)  {
::cordl_internals::setStaticField<bool, "drawToAllCameras", ::Drawing::DrawingManager*>(std::forward<bool>(value));
}
inline bool Drawing::DrawingManager::getStaticF_drawToAllCameras()  {
return ::cordl_internals::getStaticField<bool, "drawToAllCameras", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_lineWidthMultiplier(float_t  value)  {
::cordl_internals::setStaticField<float_t, "lineWidthMultiplier", ::Drawing::DrawingManager*>(std::forward<float_t>(value));
}
inline float_t Drawing::DrawingManager::getStaticF_lineWidthMultiplier()  {
return ::cordl_internals::getStaticField<float_t, "lineWidthMultiplier", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerALINE(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerALINE", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerALINE()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerALINE", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerCommandBuffer(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerCommandBuffer", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerCommandBuffer()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerCommandBuffer", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerFrameTick(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerFrameTick", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerFrameTick()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerFrameTick", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerFilterDestroyedObjects(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerFilterDestroyedObjects", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerFilterDestroyedObjects()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerFilterDestroyedObjects", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerRefreshSelectionCache(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerRefreshSelectionCache", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerRefreshSelectionCache()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerRefreshSelectionCache", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerGizmosAllowed(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerGizmosAllowed", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerGizmosAllowed()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerGizmosAllowed", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerDrawGizmos(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerDrawGizmos", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerDrawGizmos()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerDrawGizmos", ::Drawing::DrawingManager*>();
}
inline void Drawing::DrawingManager::setStaticF_MarkerSubmitGizmos(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerSubmitGizmos", ::Drawing::DrawingManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingManager::getStaticF_MarkerSubmitGizmos()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerSubmitGizmos", ::Drawing::DrawingManager*>();
}
inline ::UnityW<::Drawing::DrawingManager> Drawing::DrawingManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Drawing::DrawingManager>>(nullptr, ___internal_method);
}
inline void Drawing::DrawingManager::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::DrawingManager::RefreshRenderPipelineMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"RefreshRenderPipelineMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"BeginContextRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cameras);
}
inline void Drawing::DrawingManager::BeginFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::ArrayW<::UnityEngine::Camera*>  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"BeginFrameRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cameras);
}
inline void Drawing::DrawingManager::BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"BeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void Drawing::DrawingManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::OnEditorUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"OnEditorUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::CleanupIfNoCameraRendered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"CleanupIfNoCameraRendered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::ExecuteCustomRenderPass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"ExecuteCustomRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void Drawing::DrawingManager::ExecuteCustomRenderGraphPass(::GlobalNamespace::DrawingData_CommandBufferWrapper  cmd, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"ExecuteCustomRenderGraphPass", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera);
}
inline void Drawing::DrawingManager::EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"EndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void Drawing::DrawingManager::PostRender(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"PostRender", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void Drawing::DrawingManager::CheckFrameTicking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"CheckFrameTicking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingManager::SubmitFrame(::UnityEngine::Camera*  camera, ::GlobalNamespace::DrawingData_CommandBufferWrapper  cmd, bool  usingRenderPipeline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"SubmitFrame", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cmd, usingRenderPipeline);
}
inline bool Drawing::DrawingManager::ShouldDrawGizmos(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"ShouldDrawGizmos", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline void Drawing::DrawingManager::RemoveDestroyedGizmoDrawers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"RemoveDestroyedGizmoDrawers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::DrawingManager::Submit(::UnityEngine::Camera*  camera, ::GlobalNamespace::DrawingData_CommandBufferWrapper  cmd, bool  usingRenderPipeline, bool  allowCameraDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Submit", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cmd, usingRenderPipeline, allowCameraDefault);
}
inline void Drawing::DrawingManager::Register(::Drawing::IDrawGizmos*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"Register", {}, {::i2c::type_of<::Drawing::IDrawGizmos*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
inline ::Drawing::CommandBuilder Drawing::DrawingManager::GetBuilder(bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetBuilder", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(nullptr, ___internal_method, renderInGame);
}
inline ::Drawing::CommandBuilder Drawing::DrawingManager::GetBuilder(::Drawing::RedrawScope  redrawScope, bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(nullptr, ___internal_method, redrawScope, renderInGame);
}
inline ::Drawing::CommandBuilder Drawing::DrawingManager::GetBuilder(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  redrawScope, bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(nullptr, ___internal_method, hasher, redrawScope, renderInGame);
}
inline ::Drawing::RedrawScope Drawing::DrawingManager::GetRedrawScope()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {"GetRedrawScope", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::RedrawScope>(nullptr, ___internal_method);
}
inline void Drawing::DrawingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::DrawingManager* Drawing::DrawingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::DrawingManager*>());
}
// Ctor Parameters []
constexpr ::Drawing::DrawingManager::DrawingManager()   {
}
