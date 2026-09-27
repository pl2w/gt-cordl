#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/RuntimeMeshCombiner.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_AfterMerge_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_CombineOnStart_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_def.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_AfterMerge_def.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_CombineOnStart_def.hpp"
#include "MTAssets/EasyMeshCombiner/zzzz__RuntimeMeshCombiner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cb9c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cb9d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner.GetValidatedTargetGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*> (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::GetValidatedTargetGameObjects)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x5cb9df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"GetValidatedTargetGameObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner.CombineMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::CombineMeshes)> {
  constexpr static std::size_t size = 0x1600;
  constexpr static std::size_t addrs = 0x5cb7dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"CombineMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner.UndoMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::UndoMerge)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x5cb93c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"UndoMerge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner.isTargetMeshesMerged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::isTargetMeshesMerged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cbae38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"isTargetMeshesMerged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::*)()>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5cbae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_MAX_VERTICES_FOR_16BITS_MESH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAX_VERTICES_FOR_16BITS_MESH;
}
constexpr int32_t const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_MAX_VERTICES_FOR_16BITS_MESH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAX_VERTICES_FOR_16BITS_MESH;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_MAX_VERTICES_FOR_16BITS_MESH(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MAX_VERTICES_FOR_16BITS_MESH = value;
}
constexpr ::UnityEngine::Vector3& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalPosition;
}
constexpr ::UnityEngine::Vector3 const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalPosition;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_originalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalPosition = value;
}
constexpr ::UnityEngine::Vector3& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalEulerAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalEulerAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalEulerAngles;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_originalEulerAngles(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalEulerAngles = value;
}
constexpr ::UnityEngine::Vector3& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScale;
}
constexpr ::UnityEngine::Vector3 const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScale;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_originalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalScale = value;
}
constexpr ::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalGameObjectsWithMeshToRestore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalGameObjectsWithMeshToRestore;
}
constexpr ::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>* const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_originalGameObjectsWithMeshToRestore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalGameObjectsWithMeshToRestore;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_originalGameObjectsWithMeshToRestore(::System::Collections::Generic::List_1<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalGameObjectsWithMeshToRestore = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_targetMeshesMerged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMeshesMerged;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_targetMeshesMerged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMeshesMerged;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_targetMeshesMerged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMeshesMerged = value;
}
constexpr ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_afterMerge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterMerge;
}
constexpr ::GlobalNamespace::RuntimeMeshCombiner_AfterMerge const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_afterMerge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterMerge;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_afterMerge(::GlobalNamespace::RuntimeMeshCombiner_AfterMerge  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afterMerge = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_addMeshColliderAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addMeshColliderAfter;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_addMeshColliderAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addMeshColliderAfter;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_addMeshColliderAfter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addMeshColliderAfter = value;
}
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_combineMeshesAtStartUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineMeshesAtStartUp;
}
constexpr ::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_combineMeshesAtStartUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineMeshesAtStartUp;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_combineMeshesAtStartUp(::GlobalNamespace::RuntimeMeshCombiner_CombineOnStart  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineMeshesAtStartUp = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_combineInChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineInChildren;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_combineInChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineInChildren;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_combineInChildren(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineInChildren = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_combineInactives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineInactives;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_combineInactives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineInactives;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_combineInactives(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineInactives = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_recalculateNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNormals;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_recalculateNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNormals;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_recalculateNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recalculateNormals = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_recalculateTangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateTangents;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_recalculateTangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateTangents;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_recalculateTangents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recalculateTangents = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_optimizeResultingMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optimizeResultingMesh;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_optimizeResultingMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optimizeResultingMesh;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_optimizeResultingMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optimizeResultingMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_targetMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMeshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_targetMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMeshes;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_targetMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMeshes = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_showDebugLogs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDebugLogs;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_showDebugLogs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDebugLogs;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_showDebugLogs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showDebugLogs = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_garbageCollectorAfterUndo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___garbageCollectorAfterUndo;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_garbageCollectorAfterUndo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___garbageCollectorAfterUndo;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_garbageCollectorAfterUndo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___garbageCollectorAfterUndo = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_onDoneMerge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneMerge;
}
constexpr ::UnityEngine::Events::UnityEvent* const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_onDoneMerge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneMerge;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_onDoneMerge(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDoneMerge = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_onDoneUnmerge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneUnmerge;
}
constexpr ::UnityEngine::Events::UnityEvent* const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_get_onDoneUnmerge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDoneUnmerge;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::__cordl_internal_set_onDoneUnmerge(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDoneUnmerge = value;
}
inline void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*> MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::GetValidatedTargetGameObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"GetValidatedTargetGameObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*>>(this, ___internal_method);
}
inline bool MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::CombineMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"CombineMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::UndoMerge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"UndoMerge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::isTargetMeshesMerged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {"isTargetMeshesMerged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner* MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner*>());
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner::RuntimeMeshCombiner()   {
}
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::*)(::UnityEngine::Transform*, ::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*, int32_t)>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cd0e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr int32_t& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_subMeshIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshIndex;
}
constexpr int32_t const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_get_subMeshIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMeshIndex;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::__cordl_internal_set_subMeshIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMeshIndex = value;
}
inline void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::_ctor(::UnityEngine::Transform*  transform, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer, int32_t  subMeshIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, meshFilter, meshRenderer, subMeshIndex);
}
inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine* MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::New_ctor(::UnityEngine::Transform*  transform, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer, int32_t  subMeshIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine*>(transform, meshFilter, meshRenderer, subMeshIndex));
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_SubMeshToCombine::RuntimeMeshCombiner_SubMeshToCombine()   {
}
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::*)(::UnityEngine::GameObject*, bool, ::UnityEngine::MeshRenderer*, bool)>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cd0dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_originalGoState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalGoState;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_originalGoState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalGoState;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_set_originalGoState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalGoState = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr bool& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_originalMrState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMrState;
}
constexpr bool const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_get_originalMrState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMrState;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::__cordl_internal_set_originalMrState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMrState = value;
}
inline void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::_ctor(::UnityEngine::GameObject*  gameObject, bool  originalGoState, ::UnityEngine::MeshRenderer*  meshRenderer, bool  originalMrState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject, originalGoState, meshRenderer, originalMrState);
}
inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh* MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::New_ctor(::UnityEngine::GameObject*  gameObject, bool  originalGoState, ::UnityEngine::MeshRenderer*  meshRenderer, bool  originalMrState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh*>(gameObject, originalGoState, meshRenderer, originalMrState));
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_OriginalGameObjectWithMesh::RuntimeMeshCombiner_OriginalGameObjectWithMesh()   {
}
//  Writing Method size for method: ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::*)(::UnityEngine::GameObject*, ::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*)>(&::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cd0d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
inline void MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::_ctor(::UnityEngine::GameObject*  gameObject, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject, meshFilter, meshRenderer);
}
inline ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh* MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::New_ctor(::UnityEngine::GameObject*  gameObject, ::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::MeshRenderer*  meshRenderer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh*>(gameObject, meshFilter, meshRenderer));
}
// Ctor Parameters []
constexpr ::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner_GameObjectWithMesh::RuntimeMeshCombiner_GameObjectWithMesh()   {
}
