#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderConveyor.hpp"
#include "UnityEngine/Splines/zzzz__BezierCurve_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderConveyor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_BuilderPieceCategory_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderSetSelector_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b5e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b6440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.InitIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::InitIfNeeded)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x57b5e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.GetMaxItemsOnConveyor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::GetMaxItemsOnConveyor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57b6444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetMaxItemsOnConveyor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.GetFrameMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::GetFrameMovement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57b6534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetFrameMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::OnDestroy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x57b6544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.OnSelectedSetChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)(int32_t)>(&::GlobalNamespace::BuilderConveyor::OnSelectedSetChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57b6630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnSelectedSetChange", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.SetSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)(int32_t)>(&::GlobalNamespace::BuilderConveyor::SetSelection)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x57b6668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"SetSelection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.GetSelectedDisplayGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::GetSelectedDisplayGroupID)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57b6884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetSelectedDisplayGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.UpdateConveyor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::UpdateConveyor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x57b68a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"UpdateConveyor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.RemovePieceFromConveyor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::BuilderConveyor::RemovePieceFromConveyor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x57b6a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"RemovePieceFromConveyor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.EvaluateSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BuilderConveyor::*)(float_t)>(&::GlobalNamespace::BuilderConveyor::EvaluateSpline)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57b6c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"EvaluateSpline", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.UpdateShelfSliced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::UpdateShelfSliced)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x57b6d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"UpdateShelfSliced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.VerifySetSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::VerifySetSelection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57b6ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"VerifySetSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.OnAvailableResourcesChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::OnAvailableResourcesChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b6ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnAvailableResourcesChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.GetSpawnTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::GetSpawnTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b6ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetSpawnTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.OnShelfPieceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)(::GlobalNamespace::BuilderPiece*, float_t)>(&::GlobalNamespace::BuilderConveyor::OnShelfPieceCreated)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x57b6ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnShelfPieceCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.OnShelfPieceRecycled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderConveyor::OnShelfPieceRecycled)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57b7298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnShelfPieceRecycled", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.OnClearTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::OnClearTable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57b7350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnClearTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.ResetConveyorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::ResetConveyorState)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x57b73e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"ResetConveyorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.SpawnNextPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::SpawnNextPiece)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57b6e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"SpawnNextPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.FindNextAffordablePieceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::BuilderConveyor::FindNextAffordablePieceType)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x57b75e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"FindNextAffordablePieceType", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor.GetMaterialType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderConveyor::*)(::GlobalNamespace::BuilderPieceSet_PieceInfo)>(&::GlobalNamespace::BuilderConveyor::GetMaterialType)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x57b7874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetMaterialType", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet_PieceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderConveyor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderConveyor::*)()>(&::GlobalNamespace::BuilderConveyor::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57b7a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderSetSelector>& GlobalNamespace::BuilderConveyor::__cordl_internal_get_setSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setSelector;
}
constexpr ::UnityW<::GlobalNamespace::BuilderSetSelector> const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_setSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setSelector;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_setSelector(::UnityW<::GlobalNamespace::BuilderSetSelector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setSelector = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*& GlobalNamespace::BuilderConveyor::__cordl_internal_get__includeCategories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____includeCategories;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* const& GlobalNamespace::BuilderConveyor::__cordl_internal_get__includeCategories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____includeCategories;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set__includeCategories(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____includeCategories = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GlobalNamespace::BuilderConveyor::__cordl_internal_get_table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___table;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___table = value;
}
constexpr int32_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_shelfID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfID;
}
constexpr int32_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_shelfID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfID;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_shelfID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfID = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderConveyor::__cordl_internal_get_spawnTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_spawnTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransform;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_spawnTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTransform = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GlobalNamespace::BuilderConveyor::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_spline(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr float_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_conveyorMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorMoveSpeed;
}
constexpr float_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_conveyorMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conveyorMoveSpeed;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_conveyorMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conveyorMoveSpeed = value;
}
constexpr float_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_spawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr float_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_spawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnDelay;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_spawnDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnDelay = value;
}
constexpr double_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_nextSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr double_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_nextSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSpawnTime;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_nextSpawnTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSpawnTime = value;
}
constexpr int32_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_nextPieceToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPieceToSpawn;
}
constexpr int32_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_nextPieceToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPieceToSpawn;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_nextPieceToSpawn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPieceToSpawn = value;
}
constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*& GlobalNamespace::BuilderConveyor::__cordl_internal_get_currentDisplayGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDisplayGroup;
}
constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_currentDisplayGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDisplayGroup;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_currentDisplayGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDisplayGroup = value;
}
constexpr int32_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_loopCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCount;
}
constexpr int32_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_loopCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopCount;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_loopCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopCount = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*& GlobalNamespace::BuilderConveyor::__cordl_internal_get_piecesInSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecesInSet;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>* const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_piecesInSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecesInSet;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_piecesInSet(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piecesInSet = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& GlobalNamespace::BuilderConveyor::__cordl_internal_get_grabbedPieceTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPieceTypes;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_grabbedPieceTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPieceTypes;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_grabbedPieceTypes(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedPieceTypes = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& GlobalNamespace::BuilderConveyor::__cordl_internal_get_grabbedPieceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPieceMaterials;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_grabbedPieceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPieceMaterials;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_grabbedPieceMaterials(::System::Collections::Generic::Queue_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedPieceMaterials = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GlobalNamespace::BuilderConveyor::__cordl_internal_get_piecesOnConveyor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecesOnConveyor;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_piecesOnConveyor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piecesOnConveyor;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_piecesOnConveyor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piecesOnConveyor = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BuilderConveyor::__cordl_internal_get_moveDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_moveDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveDirection;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_moveDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveDirection = value;
}
constexpr bool& GlobalNamespace::BuilderConveyor::__cordl_internal_get_waitForResourceChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForResourceChange;
}
constexpr bool const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_waitForResourceChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForResourceChange;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_waitForResourceChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForResourceChange = value;
}
constexpr bool& GlobalNamespace::BuilderConveyor::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr float_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_splineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineLength;
}
constexpr float_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_splineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineLength;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_splineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineLength = value;
}
constexpr int32_t& GlobalNamespace::BuilderConveyor::__cordl_internal_get_maxItemsOnSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxItemsOnSpline;
}
constexpr int32_t const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_maxItemsOnSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxItemsOnSpline;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_maxItemsOnSpline(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxItemsOnSpline = value;
}
constexpr ::UnityEngine::Splines::BezierCurve& GlobalNamespace::BuilderConveyor::__cordl_internal_get__evaluateCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____evaluateCurve;
}
constexpr ::UnityEngine::Splines::BezierCurve const& GlobalNamespace::BuilderConveyor::__cordl_internal_get__evaluateCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____evaluateCurve;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set__evaluateCurve(::UnityEngine::Splines::BezierCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____evaluateCurve = value;
}
constexpr ::UnityEngine::Splines::NativeSpline& GlobalNamespace::BuilderConveyor::__cordl_internal_get_nativeSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeSpline;
}
constexpr ::UnityEngine::Splines::NativeSpline const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_nativeSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeSpline;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_nativeSpline(::UnityEngine::Splines::NativeSpline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeSpline = value;
}
constexpr bool& GlobalNamespace::BuilderConveyor::__cordl_internal_get_shouldVerifySetSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldVerifySetSelection;
}
constexpr bool const& GlobalNamespace::BuilderConveyor::__cordl_internal_get_shouldVerifySetSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldVerifySetSelection;
}
constexpr void GlobalNamespace::BuilderConveyor::__cordl_internal_set_shouldVerifySetSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldVerifySetSelection = value;
}
inline void GlobalNamespace::BuilderConveyor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BuilderConveyor::GetMaxItemsOnConveyor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetMaxItemsOnConveyor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BuilderConveyor::GetFrameMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetFrameMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::OnSelectedSetChange(int32_t  displayGroupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnSelectedSetChange", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayGroupID);
}
inline void GlobalNamespace::BuilderConveyor::SetSelection(int32_t  displayGroupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"SetSelection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayGroupID);
}
inline int32_t GlobalNamespace::BuilderConveyor::GetSelectedDisplayGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetSelectedDisplayGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::UpdateConveyor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"UpdateConveyor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::RemovePieceFromConveyor(::UnityEngine::Transform*  pieceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"RemovePieceFromConveyor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceTransform);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BuilderConveyor::EvaluateSpline(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"EvaluateSpline", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline void GlobalNamespace::BuilderConveyor::UpdateShelfSliced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"UpdateShelfSliced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::VerifySetSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"VerifySetSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::OnAvailableResourcesChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnAvailableResourcesChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::BuilderConveyor::GetSpawnTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetSpawnTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::OnShelfPieceCreated(::GlobalNamespace::BuilderPiece*  piece, float_t  timeOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnShelfPieceCreated", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, timeOffset);
}
inline void GlobalNamespace::BuilderConveyor::OnShelfPieceRecycled(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnShelfPieceRecycled", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderConveyor::OnClearTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"OnClearTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::ResetConveyorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"ResetConveyorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::SpawnNextPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"SpawnNextPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderConveyor::FindNextAffordablePieceType(::by_ref<int32_t>  pieceType, ::by_ref<int32_t>  materialType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"FindNextAffordablePieceType", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, materialType);
}
inline int32_t GlobalNamespace::BuilderConveyor::GetMaterialType(::GlobalNamespace::BuilderPieceSet_PieceInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {"GetMaterialType", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceSet_PieceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, info);
}
inline void GlobalNamespace::BuilderConveyor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderConveyor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderConveyor* GlobalNamespace::BuilderConveyor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderConveyor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderConveyor::BuilderConveyor()   {
}
