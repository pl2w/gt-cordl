#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderConveyorManager.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderConveyorManager_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderConveyorManager_EvaluateSplineJob_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> (*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c1ef34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::Builder::BuilderConveyorManager*)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c1ef7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::Awake)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c1efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.UpdateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::UpdateManager)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5c1f170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"UpdateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::Setup)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5c1f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"Setup", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.GetSplineProgressForPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::Builder::BuilderConveyorManager::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::GetSplineProgressForPiece)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c1f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"GetSplineProgressForPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.GetPieceCreateTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Builder::BuilderConveyorManager::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::GetPieceCreateTimestamp)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5c1faac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"GetPieceCreateTimestamp", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.OnClearTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::OnClearTable)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c1fd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"OnClearTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c1ff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.ConstructJobHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::GorillaTagScripts::Builder::BuilderConveyorManager::*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::ConstructJobHandle)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5c20038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"ConstructJobHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.AddPieceToJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)(::GlobalNamespace::BuilderPiece*, float_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::AddPieceToJob)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c20194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"AddPieceToJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.RemovePieceFromJobAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)(int32_t)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::RemovePieceFromJobAtIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c1f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"RemovePieceFromJobAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager.RemovePieceFromJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)(::GlobalNamespace::BuilderPiece*)>(&::GorillaTagScripts::Builder::BuilderConveyorManager::RemovePieceFromJob)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c202d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"RemovePieceFromJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderConveyorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderConveyorManager::*)()>(&::GorillaTagScripts::Builder::BuilderConveyorManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c20460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_conveyorSplines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorSplines;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline> const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_conveyorSplines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorSplines;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_conveyorSplines(::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conveyorSplines = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_conveyorRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorRotations;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_conveyorRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorRotations;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_conveyorRotations(::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conveyorRotations = value;
}
constexpr ::Unity::Collections::NativeList_1<int32_t>& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_conveyorIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorIndices;
}
constexpr ::Unity::Collections::NativeList_1<int32_t> const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_conveyorIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorIndices;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_conveyorIndices(::Unity::Collections::NativeList_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conveyorIndices = value;
}
constexpr ::Unity::Collections::NativeList_1<float_t>& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_jobSplineTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobSplineTimes;
}
constexpr ::Unity::Collections::NativeList_1<float_t> const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_jobSplineTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobSplineTimes;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_jobSplineTimes(::Unity::Collections::NativeList_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobSplineTimes = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Vector3>& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_jobShelfOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobShelfOffsets;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Vector3> const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_jobShelfOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobShelfOffsets;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_jobShelfOffsets(::Unity::Collections::NativeList_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobShelfOffsets = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_pieceTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceTransforms;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_pieceTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceTransforms;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_pieceTransforms(::UnityEngine::Jobs::TransformAccessArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceTransforms = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_isSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSetup;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_isSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSetup;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_isSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSetup = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_maxItemCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxItemCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_maxItemCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxItemCount;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_maxItemCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxItemCount = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_shelfSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfSlice;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_get_shelfSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfSlice;
}
constexpr void GorillaTagScripts::Builder::BuilderConveyorManager::__cordl_internal_set_shelfSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfSlice = value;
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::setStaticF__instance_k__BackingField(::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>, "<instance>k__BackingField", ::GorillaTagScripts::Builder::BuilderConveyorManager*>(std::forward<::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> GorillaTagScripts::Builder::BuilderConveyorManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>, "<instance>k__BackingField", ::GorillaTagScripts::Builder::BuilderConveyorManager*>();
}
inline ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> GorillaTagScripts::Builder::BuilderConveyorManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::set_instance(::GorillaTagScripts::Builder::BuilderConveyorManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::UpdateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"UpdateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::Setup(::GorillaTagScripts::BuilderTable*  mytable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"Setup", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mytable);
}
inline float_t GorillaTagScripts::Builder::BuilderConveyorManager::GetSplineProgressForPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"GetSplineProgressForPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, piece);
}
inline int32_t GorillaTagScripts::Builder::BuilderConveyorManager::GetPieceCreateTimestamp(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"GetPieceCreateTimestamp", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::OnClearTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"OnClearTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle GorillaTagScripts::Builder::BuilderConveyorManager::ConstructJobHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"ConstructJobHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::AddPieceToJob(::GlobalNamespace::BuilderPiece*  piece, float_t  splineTime, int32_t  conveyorID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"AddPieceToJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, splineTime, conveyorID);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::RemovePieceFromJobAtIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"RemovePieceFromJobAtIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::RemovePieceFromJob(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {"RemovePieceFromJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GorillaTagScripts::Builder::BuilderConveyorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderConveyorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderConveyorManager* GorillaTagScripts::Builder::BuilderConveyorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderConveyorManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderConveyorManager::BuilderConveyorManager()   {
}
