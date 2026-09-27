#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderDataContainer.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_impl.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderDataContainer_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_def.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_Type_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_def.hpp"
#include "Drawing/zzzz__DrawingData_RenderedMeshWithType_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.get_memoryUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)()>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::get_memoryUsage)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x55ccdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"get_memoryUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.Reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type, ::GlobalNamespace::BuilderData_DrawingData_Meta)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Reserve)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x55d0cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Reserve", {}, {::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_Type>(), ::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_Meta>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::DrawingData_ProcessedBuilderData> (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Get)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55d10e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::DrawingData*, int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Release)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55d2288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Release", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.SubmitMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::DrawingData*, ::UnityEngine::Camera*, int32_t, bool, bool)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SubmitMeshes)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x55cdcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SubmitMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.PoolDynamicMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::PoolDynamicMeshes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55cdf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"PoolDynamicMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.CollectMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*, ::UnityEngine::Camera*, bool, bool)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::CollectMeshes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55cde84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"CollectMeshes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.FilterOldPersistentCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(int32_t, int32_t, float_t, int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::FilterOldPersistentCommands)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55ccb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"FilterOldPersistentCommands", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.SetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::GlobalNamespace::DrawingData_Hasher, int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SetVersion)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55cc44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SetVersion", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.SetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::RedrawScope, int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SetVersion)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55cc6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SetVersion", {}, {::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.SetCustomScope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::GlobalNamespace::DrawingData_Hasher, ::Drawing::RedrawScope)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SetCustomScope)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55cc5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SetCustomScope", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.ReleaseDataOlderThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::DrawingData*, int32_t)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::ReleaseDataOlderThan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55ccbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"ReleaseDataOlderThan", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.ReleaseAllWithHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::DrawingData*, ::GlobalNamespace::DrawingData_Hasher)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::ReleaseAllWithHash)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55cc350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"ReleaseAllWithHash", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55ce63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Dispose", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::get_memoryUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"get_memoryUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Reserve(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type  type, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Reserve", {}, {::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_Type>(), ::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_Meta>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, type, meta);
}
inline ::by_ref<::GlobalNamespace::DrawingData_ProcessedBuilderData> GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::DrawingData_ProcessedBuilderData>>(*this, ___internal_method, index);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Release(::Drawing::DrawingData*  gizmos, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Release", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, i);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SubmitMeshes(::Drawing::DrawingData*  gizmos, ::UnityEngine::Camera*  camera, int32_t  versionThreshold, bool  allowGizmos, bool  allowCameraDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SubmitMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, camera, versionThreshold, allowGizmos, allowCameraDefault);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::PoolDynamicMeshes(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"PoolDynamicMeshes", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::CollectMeshes(int32_t  versionThreshold, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  meshes, ::UnityEngine::Camera*  camera, bool  allowGizmos, bool  allowCameraDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"CollectMeshes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, versionThreshold, meshes, camera, allowGizmos, allowCameraDefault);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::FilterOldPersistentCommands(int32_t  version, int32_t  lastTickVersion, float_t  time, int32_t  sceneModeVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"FilterOldPersistentCommands", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, version, lastTickVersion, time, sceneModeVersion);
}
inline bool GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SetVersion(::GlobalNamespace::DrawingData_Hasher  hasher, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SetVersion", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, hasher, version);
}
inline bool GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SetVersion(::Drawing::RedrawScope  scope, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SetVersion", {}, {::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, scope, version);
}
inline bool GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::SetCustomScope(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  scope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"SetCustomScope", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, hasher, scope);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::ReleaseDataOlderThan(::Drawing::DrawingData*  gizmos, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"ReleaseDataOlderThan", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, version);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::ReleaseAllWithHash(::Drawing::DrawingData*  gizmos, ::GlobalNamespace::DrawingData_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"ReleaseAllWithHash", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, hasher);
}
inline void GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::Dispose(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer>(),
                        {"Dispose", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<::GlobalNamespace::DrawingData_ProcessedBuilderData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hash2index", ty: "::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "freeSlots", ty: "::System::Collections::Generic::Stack_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "freeLists", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::DrawingData_ProcessedBuilderDataContainer(::ArrayW<::GlobalNamespace::DrawingData_ProcessedBuilderData>  data, ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<int32_t>*>*  hash2index, ::System::Collections::Generic::Stack_1<int32_t>*  freeSlots, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<int32_t>*>*  freeLists) noexcept  {
this->data = data;
this->hash2index = hash2index;
this->freeSlots = freeSlots;
this->freeLists = freeLists;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer::DrawingData_ProcessedBuilderDataContainer()   {
}
