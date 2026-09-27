#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_impl.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_MeshBuffers_impl.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_Type_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_def.hpp"
#include "Drawing/zzzz__DrawingData_MeshWithType_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_CapturedState_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_MeshBuffers_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_Type_def.hpp"
#include "Drawing/zzzz__DrawingData_RenderedMeshWithType_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__GeometryBuilder_CameraInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)()>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55ce9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.get_splitterOutputPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer* (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)()>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::get_splitterOutputPtr)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55cea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"get_splitterOutputPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type, ::GlobalNamespace::BuilderData_DrawingData_Meta)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::Init)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x55cea54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_Type>(), ::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_Meta>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.SetSplitterJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::Drawing::DrawingData*, ::Unity::Jobs::JobHandle)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::SetSplitterJob)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55ced9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"SetSplitterJob", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.SchedulePersistFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(int32_t, int32_t, float_t, int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::SchedulePersistFilter)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x55cf2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"SchedulePersistFilter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.IsValidForCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::UnityEngine::Camera*, bool, bool)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::IsValidForCamera)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55cf3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"IsValidForCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.Schedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::Drawing::DrawingData*, ::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::Schedule)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x55cf470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Schedule", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.BuildMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::BuildMeshes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55cf4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"BuildMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.CollectMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::CollectMeshes)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x55cf974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"CollectMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.PoolMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::Drawing::DrawingData*, bool)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::PoolMeshes)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x55cfbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"PoolMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.PoolDynamicMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::PoolDynamicMeshes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55cfd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"PoolDynamicMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::Release)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55cfd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Release", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderData::*)()>(&::GlobalNamespace::DrawingData_ProcessedBuilderData::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x55cfef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::setStaticF_SubmittedJobs(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SubmittedJobs", ::GlobalNamespace::DrawingData_ProcessedBuilderData>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::DrawingData_ProcessedBuilderData::getStaticF_SubmittedJobs()  {
return ::cordl_internals::getStaticField<int32_t, "SubmittedJobs", ::GlobalNamespace::DrawingData_ProcessedBuilderData>();
}
inline bool GlobalNamespace::DrawingData_ProcessedBuilderData::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer* GlobalNamespace::DrawingData_ProcessedBuilderData::get_splitterOutputPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"get_splitterOutputPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(*this, ___internal_method);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::Init(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_Type>(), ::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_Meta>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, meta);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::SetSplitterJob(::Drawing::DrawingData*  gizmos, ::Unity::Jobs::JobHandle  splitterJob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"SetSplitterJob", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, splitterJob);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::SchedulePersistFilter(int32_t  version, int32_t  lastTickVersion, float_t  time, int32_t  sceneModeVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"SchedulePersistFilter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, version, lastTickVersion, time, sceneModeVersion);
}
inline bool GlobalNamespace::DrawingData_ProcessedBuilderData::IsValidForCamera(::UnityEngine::Camera*  camera, bool  allowGizmos, bool  allowCameraDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"IsValidForCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, camera, allowGizmos, allowCameraDefault);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::Schedule(::Drawing::DrawingData*  gizmos, ::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>  cameraInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Schedule", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, cameraInfo);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::BuildMeshes(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"BuildMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::CollectMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  meshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"CollectMeshes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshes);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::PoolMeshes(::Drawing::DrawingData*  gizmos, bool  includeCustom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"PoolMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, includeCustom);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::PoolDynamicMeshes(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"PoolDynamicMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::Release(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Release", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::ProcessedBuilderData_DrawingData_Type", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meta", ty: "::GlobalNamespace::BuilderData_DrawingData_Meta", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "submitted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "temporaryMeshBuffers", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buildJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitterJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshes", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderData::DrawingData_ProcessedBuilderData(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta, bool  submitted, ::Unity::Collections::NativeArray_1<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers>  temporaryMeshBuffers, ::Unity::Jobs::JobHandle  buildJob, ::Unity::Jobs::JobHandle  splitterJob, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*  meshes) noexcept  {
this->type = type;
this->meta = meta;
this->submitted = submitted;
this->temporaryMeshBuffers = temporaryMeshBuffers;
this->buildJob = buildJob;
this->splitterJob = splitterJob;
this->meshes = meshes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderData::DrawingData_ProcessedBuilderData()   {
}
