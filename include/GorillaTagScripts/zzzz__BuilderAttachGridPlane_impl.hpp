#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderAttachGridPlane.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderMovingPart_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderItem_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPool_def.hpp"
#include "GorillaTagScripts/zzzz__SnapOverlap_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)()>(&::GorillaTagScripts::BuilderAttachGridPlane::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b82d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::BuilderPiece*, int32_t, float_t)>(&::GorillaTagScripts::BuilderAttachGridPlane::Setup)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5b82e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.OnReturnToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GorillaTagScripts::BuilderPool*)>(&::GorillaTagScripts::BuilderAttachGridPlane::OnReturnToPool)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b83028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"OnReturnToPool", {}, {::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.GetGridPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTagScripts::BuilderAttachGridPlane::*)(int32_t, int32_t, float_t)>(&::GorillaTagScripts::BuilderAttachGridPlane::GetGridPosition)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b83528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"GetGridPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.GetChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::BuilderAttachGridPlane::*)()>(&::GorillaTagScripts::BuilderAttachGridPlane::GetChildCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b835fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"GetChildCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.ChangeChildPieceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(int32_t)>(&::GorillaTagScripts::BuilderAttachGridPlane::ChangeChildPieceCount)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b83604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"ChangeChildPieceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.AddSnapOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GorillaTagScripts::SnapOverlap*)>(&::GorillaTagScripts::BuilderAttachGridPlane::AddSnapOverlap)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b836f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"AddSnapOverlap", {}, {::i2c::type_of<::GorillaTagScripts::SnapOverlap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.RemoveSnapsWithDifferentRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::BuilderPiece*, ::GorillaTagScripts::BuilderPool*)>(&::GorillaTagScripts::BuilderAttachGridPlane::RemoveSnapsWithDifferentRoot)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5b8376c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"RemoveSnapsWithDifferentRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.RemoveSnapsWithPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::BuilderPiece*, ::GorillaTagScripts::BuilderPool*)>(&::GorillaTagScripts::BuilderAttachGridPlane::RemoveSnapsWithPiece)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5b83140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"RemoveSnapsWithPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.SetConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::SnapBounds, bool)>(&::GorillaTagScripts::BuilderAttachGridPlane::SetConnected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b832e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"SetConnected", {}, {::i2c::type_of<::GlobalNamespace::SnapBounds>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GlobalNamespace::SnapBounds)>(&::GorillaTagScripts::BuilderAttachGridPlane::IsConnected)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b83964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"IsConnected", {}, {::i2c::type_of<::GlobalNamespace::SnapBounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.CalcGridOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)(::GorillaTagScripts::BuilderAttachGridPlane*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, ::by_ref<::UnityEngine::Vector2Int>, ::by_ref<::UnityEngine::Vector2Int>)>(&::GorillaTagScripts::BuilderAttachGridPlane::CalcGridOverlap)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5b83ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"CalcGridOverlap", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.IsAttachedToMovingGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderAttachGridPlane::*)()>(&::GorillaTagScripts::BuilderAttachGridPlane::IsAttachedToMovingGrid)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b84028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"IsAttachedToMovingGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane.GetMovingParentGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane> (::GorillaTagScripts::BuilderAttachGridPlane::*)()>(&::GorillaTagScripts::BuilderAttachGridPlane::GetMovingParentGrid)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b84128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"GetMovingParentGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderAttachGridPlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderAttachGridPlane::*)()>(&::GorillaTagScripts::BuilderAttachGridPlane::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b84260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_male()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___male;
}
constexpr bool const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_male() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___male;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_male(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___male = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr int32_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr int32_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr int32_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_gridPlaneDataIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlaneDataIndex;
}
constexpr int32_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_gridPlaneDataIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlaneDataIndex;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_gridPlaneDataIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridPlaneDataIndex = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderItem>& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderItem> const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_item(::UnityW<::GorillaTagScripts::BuilderItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_piece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_piece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___piece;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___piece = value;
}
constexpr int32_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_attachIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachIndex;
}
constexpr int32_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_attachIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachIndex;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_attachIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachIndex = value;
}
constexpr float_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_boundingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingRadius;
}
constexpr float_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_boundingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingRadius;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_boundingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundingRadius = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_pieceToGridPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceToGridPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_pieceToGridPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceToGridPosition;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_pieceToGridPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceToGridPosition = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_pieceToGridRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceToGridRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_pieceToGridRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceToGridRotation;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_pieceToGridRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceToGridRotation = value;
}
constexpr ::ArrayW<bool>& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_connected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connected;
}
constexpr ::ArrayW<bool> const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_connected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connected;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_connected(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connected = value;
}
constexpr ::GorillaTagScripts::SnapOverlap*& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_firstOverlap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstOverlap;
}
constexpr ::GorillaTagScripts::SnapOverlap* const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_firstOverlap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstOverlap;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_firstOverlap(::GorillaTagScripts::SnapOverlap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstOverlap = value;
}
constexpr float_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_widthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthOffset;
}
constexpr float_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_widthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___widthOffset;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_widthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___widthOffset = value;
}
constexpr float_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_lengthOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lengthOffset;
}
constexpr float_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_lengthOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lengthOffset;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_lengthOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lengthOffset = value;
}
constexpr int32_t& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_childPieceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childPieceCount;
}
constexpr int32_t const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_childPieceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childPieceCount;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_childPieceCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___childPieceCount = value;
}
constexpr bool& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_isMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMoving;
}
constexpr bool const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_isMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMoving;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_isMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMoving = value;
}
constexpr bool& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_movesOnPlace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movesOnPlace;
}
constexpr bool const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_movesOnPlace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movesOnPlace;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_movesOnPlace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movesOnPlace = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_movingPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingPart;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart> const& GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_get_movingPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingPart;
}
constexpr void GorillaTagScripts::BuilderAttachGridPlane::__cordl_internal_set_movingPart(::UnityW<::GorillaTagScripts::Builder::BuilderMovingPart>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movingPart = value;
}
inline void GorillaTagScripts::BuilderAttachGridPlane::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::Setup(::GlobalNamespace::BuilderPiece*  piece, int32_t  attachIndex, float_t  gridSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, attachIndex, gridSize);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::OnReturnToPool(::GorillaTagScripts::BuilderPool*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"OnReturnToPool", {}, {::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
inline ::UnityEngine::Vector3 GorillaTagScripts::BuilderAttachGridPlane::GetGridPosition(int32_t  x, int32_t  z, float_t  gridSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"GetGridPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, z, gridSize);
}
inline int32_t GorillaTagScripts::BuilderAttachGridPlane::GetChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"GetChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::ChangeChildPieceCount(int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"ChangeChildPieceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::AddSnapOverlap(::GorillaTagScripts::SnapOverlap*  newOverlap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"AddSnapOverlap", {}, {::i2c::type_of<::GorillaTagScripts::SnapOverlap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOverlap);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::RemoveSnapsWithDifferentRoot(::GlobalNamespace::BuilderPiece*  root, ::GorillaTagScripts::BuilderPool*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"RemoveSnapsWithDifferentRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, pool);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::RemoveSnapsWithPiece(::GlobalNamespace::BuilderPiece*  piece, ::GorillaTagScripts::BuilderPool*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"RemoveSnapsWithPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, pool);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::SetConnected(::GlobalNamespace::SnapBounds  bounds, bool  connect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"SetConnected", {}, {::i2c::type_of<::GlobalNamespace::SnapBounds>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, connect);
}
inline bool GorillaTagScripts::BuilderAttachGridPlane::IsConnected(::GlobalNamespace::SnapBounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"IsConnected", {}, {::i2c::type_of<::GlobalNamespace::SnapBounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::CalcGridOverlap(::GorillaTagScripts::BuilderAttachGridPlane*  otherGridPlane, ::UnityEngine::Vector3  otherPieceLocalPos, ::UnityEngine::Quaternion  otherPieceLocalRot, float_t  gridSize, ::by_ref<::UnityEngine::Vector2Int>  min, ::by_ref<::UnityEngine::Vector2Int>  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"CalcGridOverlap", {}, {::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherGridPlane, otherPieceLocalPos, otherPieceLocalRot, gridSize, min, max);
}
inline bool GorillaTagScripts::BuilderAttachGridPlane::IsAttachedToMovingGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"IsAttachedToMovingGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane> GorillaTagScripts::BuilderAttachGridPlane::GetMovingParentGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {"GetMovingParentGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderAttachGridPlane::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderAttachGridPlane*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderAttachGridPlane* GorillaTagScripts::BuilderAttachGridPlane::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderAttachGridPlane*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderAttachGridPlane::BuilderAttachGridPlane()   {
}
