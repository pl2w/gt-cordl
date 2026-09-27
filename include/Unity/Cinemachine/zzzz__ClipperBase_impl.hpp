#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_impl.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_impl.hpp"
#include "Unity/Cinemachine/zzzz__ClipperBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__Active_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipperBase_IntersectListSort_def.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_def.hpp"
#include "Unity/Cinemachine/zzzz__IntersectNode_def.hpp"
#include "Unity/Cinemachine/zzzz__Joiner_def.hpp"
#include "Unity/Cinemachine/zzzz__LocalMinima_def.hpp"
#include "Unity/Cinemachine/zzzz__OutPt_def.hpp"
#include "Unity/Cinemachine/zzzz__OutRec_def.hpp"
#include "Unity/Cinemachine/zzzz__PathType_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_def.hpp"
#include "Unity/Cinemachine/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.get_PreserveCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::get_PreserveCollinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeef5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"get_PreserveCollinear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.set_PreserveCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(bool)>(&::Unity::Cinemachine::ClipperBase::set_PreserveCollinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeef604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"set_PreserveCollinear", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.get_ReverseSolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::get_ReverseSolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeef60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"get_ReverseSolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.set_ReverseSolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(bool)>(&::Unity::Cinemachine::ClipperBase::set_ReverseSolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeef614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"set_ReverseSolution", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xaeef61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsOdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Unity::Cinemachine::ClipperBase::IsOdd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeef844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsHotEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsHotEdge)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeef84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHotEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsOpen)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeef868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOpen", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsOpenEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsOpenEnd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaeef87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOpenEnd", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsOpenEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Vertex*)>(&::Unity::Cinemachine::ClipperBase::IsOpenEnd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeef8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOpenEnd", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetPrevHotEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Active* (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::GetPrevHotEdge)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeef8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetPrevHotEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsFront)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeef8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsFront", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetDx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::GetDx)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaeef924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetDx", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.TopX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Unity::Cinemachine::Active*, int64_t)>(&::Unity::Cinemachine::ClipperBase::TopX)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xaeef95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TopX", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsHorizontal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeefa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHorizontal", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsHeadingRightHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsHeadingRightHorz)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaeefa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHeadingRightHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsHeadingLeftHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsHeadingLeftHorz)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaeefabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHeadingLeftHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SwapActives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Cinemachine::Active*>, ::by_ref<::Unity::Cinemachine::Active*>)>(&::Unity::Cinemachine::ClipperBase::SwapActives)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaeefae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapActives", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Active*>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Active*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetPolyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PathType (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::GetPolyType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeefb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetPolyType", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsSamePolyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsSamePolyType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeefb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsSamePolyType", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetIntersectPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Point64 (*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::GetIntersectPoint)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xaeefb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetIntersectPoint", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SetDx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::SetDx)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaeefea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetDx", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.NextVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Vertex* (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::NextVertex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaeefef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"NextVertex", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.PrevPrevVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Vertex* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::PrevPrevVertex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaeeff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PrevPrevVertex", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsMaxima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Vertex*)>(&::Unity::Cinemachine::ClipperBase::IsMaxima)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeeff7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsMaxima", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsMaxima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsMaxima)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaeeff94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsMaxima", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetMaximaPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Active* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::GetMaximaPair)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeeffb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetMaximaPair", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetCurrYMaximaVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Vertex* (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::GetCurrYMaximaVertex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaeeffe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetCurrYMaximaVertex", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetHorzMaximaPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Active* (*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Vertex*)>(&::Unity::Cinemachine::ClipperBase::GetHorzMaximaPair)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaef005c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetHorzMaximaPair", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SetSides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::OutRec*, ::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::SetSides)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaef00f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetSides", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SwapOutrecs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::SwapOutrecs)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaef012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapOutrecs", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::Area)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaef0224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Area", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AreaTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::AreaTriangle)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaef027c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AreaTriangle", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetRealOutRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutRec* (*)(::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::GetRealOutRec)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaef02c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetRealOutRec", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.UncoupleOutRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::UncoupleOutRec)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaef02dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"UncoupleOutRec", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.OutrecIsAscending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::OutrecIsAscending)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaef0354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"OutrecIsAscending", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SwapFrontBackSides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::SwapFrontBackSides)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaef037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapFrontBackSides", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.EdgesAdjacentInAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::IntersectNode)>(&::Unity::Cinemachine::ClipperBase::EdgesAdjacentInAEL)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaef03d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"EdgesAdjacentInAEL", {}, {::i2c::type_of<::Unity::Cinemachine::IntersectNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ClearSolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::ClearSolution)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xaef040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ClearSolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::Clear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaef05c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::Reset)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xaef0674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.InsertScanline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::InsertScanline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaef083c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertScanline", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.PopScanline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::by_ref<int64_t>)>(&::Unity::Cinemachine::ClipperBase::PopScanline)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaef08d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PopScanline", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.HasLocMinAtY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::HasLocMinAtY)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaef09e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"HasLocMinAtY", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.PopLocalMinima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::LocalMinima (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::PopLocalMinima)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaef0a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PopLocalMinima", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddLocMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Vertex*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::ClipperBase::AddLocMin)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaef0acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddLocMin", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddPathsToVertexList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::ClipperBase::AddPathsToVertexList)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0xaef0bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddPathsToVertexList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::ClipperBase::AddSubject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaef1308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddOpenSubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::ClipperBase::AddOpenSubject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaef1438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::ClipperBase::AddClip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaef1444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::ClipperBase::AddPath)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaef1314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::PathType, bool)>(&::Unity::Cinemachine::ClipperBase::AddPaths)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaef1450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsContributingClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsContributingClosed)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xaef1468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsContributingClosed", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsContributingOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsContributingOpen)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaef1644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsContributingOpen", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SetWindCountForClosedPathEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::SetWindCountForClosedPathEdge)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xaef16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetWindCountForClosedPathEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SetWindCountForOpenPathEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::SetWindCountForOpenPathEdge)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaef1858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetWindCountForOpenPathEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsValidAelOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::IsValidAelOrder)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaef1928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsValidAelOrder", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.InsertLeftEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::InsertLeftEdge)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaef1b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertLeftEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.InsertRightEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::InsertRightEdge)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaef1ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertRightEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.InsertLocalMinimaIntoAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::InsertLocalMinimaIntoAEL)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0xaef1d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertLocalMinimaIntoAEL", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.PushHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::PushHorz)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaef316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PushHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.PopHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::by_ref<::Unity::Cinemachine::Active*>)>(&::Unity::Cinemachine::ClipperBase::PopHorz)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaef31ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PopHorz", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Active*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.TestJoinWithPrev1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, int64_t)>(&::Unity::Cinemachine::ClipperBase::TestJoinWithPrev1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaef31f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithPrev1", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.TestJoinWithPrev2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::TestJoinWithPrev2)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaef32a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithPrev2", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.TestJoinWithNext1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, int64_t)>(&::Unity::Cinemachine::ClipperBase::TestJoinWithNext1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaef33b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithNext1", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.TestJoinWithNext2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::TestJoinWithNext2)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaef3464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithNext2", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddLocalMinPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64, bool)>(&::Unity::Cinemachine::ClipperBase::AddLocalMinPoly)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xaef242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddLocalMinPoly", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddLocalMaxPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::AddLocalMaxPoly)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xaef3570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddLocalMaxPoly", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.JoinOutrecPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::JoinOutrecPaths)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xaef39c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"JoinOutrecPaths", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddOutPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::AddOutPt)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xaef3c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddOutPt", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.StartOpenPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::StartOpenPath)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xaef2f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"StartOpenPath", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.UpdateEdgeIntoAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::UpdateEdgeIntoAEL)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaef3da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"UpdateEdgeIntoAEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.FindEdgeWithMatchingLocMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Active* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::FindEdgeWithMatchingLocMin)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaef3fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FindEdgeWithMatchingLocMin", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IntersectEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::IntersectEdges)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0xaef27ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IntersectEdges", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DeleteFromAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::DeleteFromAEL)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaef4084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeleteFromAEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AdjustCurrXAndCopyToSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::AdjustCurrXAndCopyToSEL)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaef40f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AdjustCurrXAndCopyToSEL", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ExecuteInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::ClipperBase::ExecuteInternal)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaef4170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ExecuteInternal", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DoIntersections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::DoIntersections)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaef5014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoIntersections", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DisposeIntersectNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::DisposeIntersectNodes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaef0554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DisposeIntersectNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddNewIntersectNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*, int64_t)>(&::Unity::Cinemachine::ClipperBase::AddNewIntersectNode)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xaef5830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddNewIntersectNode", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ExtractFromSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Active* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::ExtractFromSEL)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaef5a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ExtractFromSEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.Insert1Before2InSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::Insert1Before2InSEL)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaef5a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Insert1Before2InSEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.BuildIntersectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::BuildIntersectList)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xaef520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildIntersectList", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ProcessIntersectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::ProcessIntersectList)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xaef54fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ProcessIntersectList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SwapPositionsInAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::SwapPositionsInAEL)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaef2e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapPositionsInAEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ResetHorzDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*, ::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Unity::Cinemachine::ClipperBase::ResetHorzDirection)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaef5af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ResetHorzDirection", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.HorzIsSpike
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::HorzIsSpike)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaef5b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"HorzIsSpike", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.TrimHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*, bool)>(&::Unity::Cinemachine::ClipperBase::TrimHorz)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xaef5bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TrimHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DoHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::DoHorizontal)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0xaef427c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoHorizontal", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DoTopOfScanbeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(int64_t)>(&::Unity::Cinemachine::ClipperBase::DoTopOfScanbeam)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaef5040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoTopOfScanbeam", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DoMaxima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Active* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::ClipperBase::DoMaxima)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xaef5dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoMaxima", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsValidPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::IsValidPath)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaef60d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsValidPath", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AreReallyClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::AreReallyClose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaef60f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AreReallyClose", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.IsValidClosedPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::IsValidClosedPath)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaef6194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsValidClosedPath", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ValueBetween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int64_t, int64_t)>(&::Unity::Cinemachine::ClipperBase::ValueBetween)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaef62d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ValueBetween", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ValueEqualOrBetween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int64_t, int64_t)>(&::Unity::Cinemachine::ClipperBase::ValueEqualOrBetween)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaef6308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ValueEqualOrBetween", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.PointBetween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::PointBetween)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaef6330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PointBetween", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.CollinearSegsOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::CollinearSegsOverlap)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xaef638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CollinearSegsOverlap", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.HorzEdgesOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int64_t, int64_t, int64_t)>(&::Unity::Cinemachine::ClipperBase::HorzEdgesOverlap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaef64b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"HorzEdgesOverlap", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetHorzTrialParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Joiner* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::GetHorzTrialParent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaef6518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetHorzTrialParent", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.OutPtInTrialHorzList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::OutPtInTrialHorzList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaef6578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"OutPtInTrialHorzList", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ValidateClosedPathEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::by_ref<::Unity::Cinemachine::OutPt*>)>(&::Unity::Cinemachine::ClipperBase::ValidateClosedPathEx)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaef65b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ValidateClosedPathEx", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.InsertOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::InsertOp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaef66b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertOp", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DisposeOutPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::DisposeOutPt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaef6774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DisposeOutPt", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SafeDisposeOutPts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::by_ref<::Unity::Cinemachine::OutPt*>)>(&::Unity::Cinemachine::ClipperBase::SafeDisposeOutPts)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaef6604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SafeDisposeOutPts", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.SafeDeleteOutPtJoiners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::SafeDeleteOutPtJoiners)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaef67cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SafeDeleteOutPtJoiners", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddTrialHorzJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::AddTrialHorzJoin)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaef5d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddTrialHorzJoin", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.FindTrialJoinParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Joiner* (*)(::by_ref<::Unity::Cinemachine::Joiner*>, ::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::FindTrialJoinParent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaef6af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FindTrialJoinParent", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Joiner*>>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DeleteTrialHorzJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::DeleteTrialHorzJoin)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaef6884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeleteTrialHorzJoin", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetHorzExtendedHorzSeg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::by_ref<::Unity::Cinemachine::OutPt*>, ::by_ref<::Unity::Cinemachine::OutPt*>)>(&::Unity::Cinemachine::ClipperBase::GetHorzExtendedHorzSeg)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaef6b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetHorzExtendedHorzSeg", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ConvertHorzTrialsToJoins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::ConvertHorzTrialsToJoins)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xaef4c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ConvertHorzTrialsToJoins", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.AddJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*, ::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::AddJoin)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaef2710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddJoin", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.FindJoinParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Joiner* (*)(::Unity::Cinemachine::Joiner*, ::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::FindJoinParent)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaef6cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FindJoinParent", {}, {::i2c::type_of<::Unity::Cinemachine::Joiner*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DeleteJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Joiner*)>(&::Unity::Cinemachine::ClipperBase::DeleteJoin)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xaef69a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeleteJoin", {}, {::i2c::type_of<::Unity::Cinemachine::Joiner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ProcessJoinList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::ProcessJoinList)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaef5138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ProcessJoinList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.CheckDisposeAdjacent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Cinemachine::OutPt*>, ::Unity::Cinemachine::OutPt*, ::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::CheckDisposeAdjacent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xaef7808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CheckDisposeAdjacent", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DistanceFromLineSqrd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::DistanceFromLineSqrd)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaef79e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DistanceFromLineSqrd", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DistanceSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ClipperBase::DistanceSqr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaef7a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DistanceSqr", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.ProcessJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutRec* (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::Joiner*)>(&::Unity::Cinemachine::ClipperBase::ProcessJoin)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0xaef6d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ProcessJoin", {}, {::i2c::type_of<::Unity::Cinemachine::Joiner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.UpdateOutrecOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::UpdateOutrecOwner)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaef7df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"UpdateOutrecOwner", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.CompleteSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*, ::Unity::Cinemachine::OutPt*, ::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::CompleteSplit)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xaef7a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CompleteSplit", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.CleanCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::CleanCollinear)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xaef3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CleanCollinear", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DoSplitOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::OutPt* (::Unity::Cinemachine::ClipperBase::*)(::by_ref<::Unity::Cinemachine::OutPt*>, ::Unity::Cinemachine::OutPt*)>(&::Unity::Cinemachine::ClipperBase::DoSplitOp)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xaef7f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoSplitOp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.FixSelfIntersects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ClipperBase::*)(::by_ref<::Unity::Cinemachine::OutPt*>)>(&::Unity::Cinemachine::ClipperBase::FixSelfIntersects)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaef7e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FixSelfIntersects", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.BuildPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutPt*, bool, bool, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::ClipperBase::BuildPath)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xaef831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildPath", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.BuildPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::ClipperBase::BuildPaths)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xaef84d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.Path1InsidePath2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutRec*, ::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::Path1InsidePath2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaef8854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Path1InsidePath2", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Rect64 (::Unity::Cinemachine::ClipperBase::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::ClipperBase::GetBounds)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xaef88ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.DeepCheckOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::OutRec*, ::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::ClipperBase::DeepCheckOwner)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xaef8a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeepCheckOwner", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.BuildTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ClipperBase::*)(::Unity::Cinemachine::PolyPathBase*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::ClipperBase::BuildTree)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xaef8dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildTree", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ClipperBase.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Rect64 (::Unity::Cinemachine::ClipperBase::*)()>(&::Unity::Cinemachine::ClipperBase::GetBounds)> {
  constexpr static std::size_t size = 0xe38;
  constexpr static std::size_t addrs = 0xaef91f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::ClipType& Unity::Cinemachine::ClipperBase::__cordl_internal_get__cliptype()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cliptype;
}
constexpr ::Unity::Cinemachine::ClipType const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__cliptype() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cliptype;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__cliptype(::Unity::Cinemachine::ClipType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cliptype = value;
}
constexpr ::Unity::Cinemachine::FillRule& Unity::Cinemachine::ClipperBase::__cordl_internal_get__fillrule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillrule;
}
constexpr ::Unity::Cinemachine::FillRule const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__fillrule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillrule;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__fillrule(::Unity::Cinemachine::FillRule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillrule = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__actives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actives;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__actives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actives;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__actives(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actives = value;
}
constexpr ::Unity::Cinemachine::Active*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__sel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sel;
}
constexpr ::Unity::Cinemachine::Active* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__sel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sel;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__sel(::Unity::Cinemachine::Active*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sel = value;
}
constexpr ::Unity::Cinemachine::Joiner*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__horzJoiners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horzJoiners;
}
constexpr ::Unity::Cinemachine::Joiner* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__horzJoiners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horzJoiners;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__horzJoiners(::Unity::Cinemachine::Joiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horzJoiners = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__minimaList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimaList;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__minimaList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimaList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__minimaList(::System::Collections::Generic::List_1<::Unity::Cinemachine::LocalMinima>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minimaList = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__intersectList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intersectList;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__intersectList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intersectList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__intersectList(::System::Collections::Generic::List_1<::Unity::Cinemachine::IntersectNode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intersectList = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__vertexList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertexList;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__vertexList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertexList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__vertexList(::System::Collections::Generic::List_1<::Unity::Cinemachine::Vertex*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vertexList = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__outrecList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outrecList;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__outrecList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outrecList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__outrecList(::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outrecList = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__joinerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinerList;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__joinerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinerList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__joinerList(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinerList = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Unity::Cinemachine::ClipperBase::__cordl_internal_get__scanlineList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scanlineList;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__scanlineList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scanlineList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__scanlineList(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scanlineList = value;
}
constexpr int32_t& Unity::Cinemachine::ClipperBase::__cordl_internal_get__currentLocMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLocMin;
}
constexpr int32_t const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__currentLocMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLocMin;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__currentLocMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentLocMin = value;
}
constexpr int64_t& Unity::Cinemachine::ClipperBase::__cordl_internal_get__currentBotY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBotY;
}
constexpr int64_t const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__currentBotY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBotY;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__currentBotY(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentBotY = value;
}
constexpr bool& Unity::Cinemachine::ClipperBase::__cordl_internal_get__isSortedMinimaList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSortedMinimaList;
}
constexpr bool const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__isSortedMinimaList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSortedMinimaList;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__isSortedMinimaList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSortedMinimaList = value;
}
constexpr bool& Unity::Cinemachine::ClipperBase::__cordl_internal_get__hasOpenPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasOpenPaths;
}
constexpr bool const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__hasOpenPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasOpenPaths;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__hasOpenPaths(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasOpenPaths = value;
}
constexpr bool& Unity::Cinemachine::ClipperBase::__cordl_internal_get__using_polytree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____using_polytree;
}
constexpr bool const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__using_polytree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____using_polytree;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__using_polytree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____using_polytree = value;
}
constexpr bool& Unity::Cinemachine::ClipperBase::__cordl_internal_get__succeeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____succeeded;
}
constexpr bool const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__succeeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____succeeded;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__succeeded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____succeeded = value;
}
constexpr bool& Unity::Cinemachine::ClipperBase::__cordl_internal_get__PreserveCollinear_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreserveCollinear_k__BackingField;
}
constexpr bool const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__PreserveCollinear_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreserveCollinear_k__BackingField;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__PreserveCollinear_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreserveCollinear_k__BackingField = value;
}
constexpr bool& Unity::Cinemachine::ClipperBase::__cordl_internal_get__ReverseSolution_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverseSolution_k__BackingField;
}
constexpr bool const& Unity::Cinemachine::ClipperBase::__cordl_internal_get__ReverseSolution_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverseSolution_k__BackingField;
}
constexpr void Unity::Cinemachine::ClipperBase::__cordl_internal_set__ReverseSolution_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReverseSolution_k__BackingField = value;
}
inline bool Unity::Cinemachine::ClipperBase::get_PreserveCollinear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"get_PreserveCollinear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::set_PreserveCollinear(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"set_PreserveCollinear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::ClipperBase::get_ReverseSolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"get_ReverseSolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::set_ReverseSolution(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"set_ReverseSolution", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::ClipperBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::ClipperBase::IsOdd(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, val);
}
inline bool Unity::Cinemachine::ClipperBase::IsHotEdge(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHotEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsOpen(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOpen", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsOpenEnd(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOpenEnd", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsOpenEnd(::Unity::Cinemachine::Vertex*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsOpenEnd", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::ClipperBase::GetPrevHotEdge(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetPrevHotEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Active*>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsFront(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsFront", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline double_t Unity::Cinemachine::ClipperBase::GetDx(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetDx", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt1, pt2);
}
inline int64_t Unity::Cinemachine::ClipperBase::TopX(::Unity::Cinemachine::Active*  ae, int64_t  currentY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TopX", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ae, currentY);
}
inline bool Unity::Cinemachine::ClipperBase::IsHorizontal(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHorizontal", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsHeadingRightHorz(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHeadingRightHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsHeadingLeftHorz(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsHeadingLeftHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline void Unity::Cinemachine::ClipperBase::SwapActives(::by_ref<::Unity::Cinemachine::Active*>  ae1, ::by_ref<::Unity::Cinemachine::Active*>  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapActives", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Active*>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Active*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ae1, ae2);
}
inline ::Unity::Cinemachine::PathType Unity::Cinemachine::ClipperBase::GetPolyType(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetPolyType", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PathType>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsSamePolyType(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsSamePolyType", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae1, ae2);
}
inline ::Unity::Cinemachine::Point64 Unity::Cinemachine::ClipperBase::GetIntersectPoint(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetIntersectPoint", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Point64>(nullptr, ___internal_method, ae1, ae2);
}
inline void Unity::Cinemachine::ClipperBase::SetDx(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetDx", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ae);
}
inline ::Unity::Cinemachine::Vertex* Unity::Cinemachine::ClipperBase::NextVertex(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"NextVertex", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Vertex*>(nullptr, ___internal_method, ae);
}
inline ::Unity::Cinemachine::Vertex* Unity::Cinemachine::ClipperBase::PrevPrevVertex(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PrevPrevVertex", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Vertex*>(this, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsMaxima(::Unity::Cinemachine::Vertex*  vertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsMaxima", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vertex);
}
inline bool Unity::Cinemachine::ClipperBase::IsMaxima(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsMaxima", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ae);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::ClipperBase::GetMaximaPair(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetMaximaPair", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Active*>(this, ___internal_method, ae);
}
inline ::Unity::Cinemachine::Vertex* Unity::Cinemachine::ClipperBase::GetCurrYMaximaVertex(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetCurrYMaximaVertex", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Vertex*>(nullptr, ___internal_method, ae);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::ClipperBase::GetHorzMaximaPair(::Unity::Cinemachine::Active*  horz, ::Unity::Cinemachine::Vertex*  maxVert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetHorzMaximaPair", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Active*>(nullptr, ___internal_method, horz, maxVert);
}
inline void Unity::Cinemachine::ClipperBase::SetSides(::Unity::Cinemachine::OutRec*  outrec, ::Unity::Cinemachine::Active*  startEdge, ::Unity::Cinemachine::Active*  endEdge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetSides", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outrec, startEdge, endEdge);
}
inline void Unity::Cinemachine::ClipperBase::SwapOutrecs(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapOutrecs", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ae1, ae2);
}
inline double_t Unity::Cinemachine::ClipperBase::Area(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Area", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, op);
}
inline double_t Unity::Cinemachine::ClipperBase::AreaTriangle(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2, ::Unity::Cinemachine::Point64  pt3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AreaTriangle", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt1, pt2, pt3);
}
inline ::Unity::Cinemachine::OutRec* Unity::Cinemachine::ClipperBase::GetRealOutRec(::Unity::Cinemachine::OutRec*  outRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetRealOutRec", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutRec*>(nullptr, ___internal_method, outRec);
}
inline void Unity::Cinemachine::ClipperBase::UncoupleOutRec(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"UncoupleOutRec", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::OutrecIsAscending(::Unity::Cinemachine::Active*  hotEdge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"OutrecIsAscending", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hotEdge);
}
inline void Unity::Cinemachine::ClipperBase::SwapFrontBackSides(::Unity::Cinemachine::OutRec*  outrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapFrontBackSides", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outrec);
}
inline bool Unity::Cinemachine::ClipperBase::EdgesAdjacentInAEL(::Unity::Cinemachine::IntersectNode  inode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"EdgesAdjacentInAEL", {}, {::i2c::type_of<::Unity::Cinemachine::IntersectNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inode);
}
inline void Unity::Cinemachine::ClipperBase::ClearSolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ClearSolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::InsertScanline(int64_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertScanline", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y);
}
inline bool Unity::Cinemachine::ClipperBase::PopScanline(::by_ref<int64_t>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PopScanline", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, y);
}
inline bool Unity::Cinemachine::ClipperBase::HasLocMinAtY(int64_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"HasLocMinAtY", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, y);
}
inline ::Unity::Cinemachine::LocalMinima Unity::Cinemachine::ClipperBase::PopLocalMinima()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PopLocalMinima", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::LocalMinima>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::AddLocMin(::Unity::Cinemachine::Vertex*  vert, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddLocMin", {}, {::i2c::type_of<::Unity::Cinemachine::Vertex*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vert, polytype, isOpen);
}
inline void Unity::Cinemachine::ClipperBase::AddPathsToVertexList(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddPathsToVertexList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, polytype, isOpen);
}
inline void Unity::Cinemachine::ClipperBase::AddSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Unity::Cinemachine::ClipperBase::AddOpenSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddOpenSubject", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Unity::Cinemachine::ClipperBase::AddClip(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddClip", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Unity::Cinemachine::ClipperBase::AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, polytype, isOpen);
}
inline void Unity::Cinemachine::ClipperBase::AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::PathType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, polytype, isOpen);
}
inline bool Unity::Cinemachine::ClipperBase::IsContributingClosed(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsContributingClosed", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsContributingOpen(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsContributingOpen", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ae);
}
inline void Unity::Cinemachine::ClipperBase::SetWindCountForClosedPathEdge(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetWindCountForClosedPathEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae);
}
inline void Unity::Cinemachine::ClipperBase::SetWindCountForOpenPathEdge(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SetWindCountForOpenPathEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsValidAelOrder(::Unity::Cinemachine::Active*  resident, ::Unity::Cinemachine::Active*  newcomer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsValidAelOrder", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, resident, newcomer);
}
inline void Unity::Cinemachine::ClipperBase::InsertLeftEdge(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertLeftEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae);
}
inline void Unity::Cinemachine::ClipperBase::InsertRightEdge(::Unity::Cinemachine::Active*  ae, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertRightEdge", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae, ae2);
}
inline void Unity::Cinemachine::ClipperBase::InsertLocalMinimaIntoAEL(int64_t  botY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertLocalMinimaIntoAEL", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, botY);
}
inline void Unity::Cinemachine::ClipperBase::PushHorz(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PushHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::PopHorz(::by_ref<::Unity::Cinemachine::Active*>  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PopHorz", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Active*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::TestJoinWithPrev1(::Unity::Cinemachine::Active*  e, int64_t  currY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithPrev1", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, currY);
}
inline bool Unity::Cinemachine::ClipperBase::TestJoinWithPrev2(::Unity::Cinemachine::Active*  e, ::Unity::Cinemachine::Point64  currPt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithPrev2", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, currPt);
}
inline bool Unity::Cinemachine::ClipperBase::TestJoinWithNext1(::Unity::Cinemachine::Active*  e, int64_t  currY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithNext1", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, currY);
}
inline bool Unity::Cinemachine::ClipperBase::TestJoinWithNext2(::Unity::Cinemachine::Active*  e, ::Unity::Cinemachine::Point64  currPt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TestJoinWithNext2", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, currPt);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::AddLocalMinPoly(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, ::Unity::Cinemachine::Point64  pt, bool  isNew)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddLocalMinPoly", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(this, ___internal_method, ae1, ae2, pt, isNew);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::AddLocalMaxPoly(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, ::Unity::Cinemachine::Point64  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddLocalMaxPoly", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(this, ___internal_method, ae1, ae2, pt);
}
inline void Unity::Cinemachine::ClipperBase::JoinOutrecPaths(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"JoinOutrecPaths", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae1, ae2);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::AddOutPt(::Unity::Cinemachine::Active*  ae, ::Unity::Cinemachine::Point64  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddOutPt", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(this, ___internal_method, ae, pt);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::StartOpenPath(::Unity::Cinemachine::Active*  ae, ::Unity::Cinemachine::Point64  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"StartOpenPath", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(this, ___internal_method, ae, pt);
}
inline void Unity::Cinemachine::ClipperBase::UpdateEdgeIntoAEL(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"UpdateEdgeIntoAEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::ClipperBase::FindEdgeWithMatchingLocMin(::Unity::Cinemachine::Active*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FindEdgeWithMatchingLocMin", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Active*>(this, ___internal_method, e);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::IntersectEdges(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, ::Unity::Cinemachine::Point64  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IntersectEdges", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(this, ___internal_method, ae1, ae2, pt);
}
inline void Unity::Cinemachine::ClipperBase::DeleteFromAEL(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeleteFromAEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae);
}
inline void Unity::Cinemachine::ClipperBase::AdjustCurrXAndCopyToSEL(int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AdjustCurrXAndCopyToSEL", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topY);
}
inline void Unity::Cinemachine::ClipperBase::ExecuteInternal(::Unity::Cinemachine::ClipType  ct, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ExecuteInternal", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ct, fillRule);
}
inline void Unity::Cinemachine::ClipperBase::DoIntersections(int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoIntersections", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topY);
}
inline void Unity::Cinemachine::ClipperBase::DisposeIntersectNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DisposeIntersectNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::AddNewIntersectNode(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2, int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddNewIntersectNode", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae1, ae2, topY);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::ClipperBase::ExtractFromSEL(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ExtractFromSEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Active*>(this, ___internal_method, ae);
}
inline void Unity::Cinemachine::ClipperBase::Insert1Before2InSEL(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Insert1Before2InSEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae1, ae2);
}
inline bool Unity::Cinemachine::ClipperBase::BuildIntersectList(int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildIntersectList", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, topY);
}
inline void Unity::Cinemachine::ClipperBase::ProcessIntersectList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ProcessIntersectList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::SwapPositionsInAEL(::Unity::Cinemachine::Active*  ae1, ::Unity::Cinemachine::Active*  ae2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SwapPositionsInAEL", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ae1, ae2);
}
inline bool Unity::Cinemachine::ClipperBase::ResetHorzDirection(::Unity::Cinemachine::Active*  horz, /* [Nullable(2)] */ ::Unity::Cinemachine::Active*  maxPair, ::by_ref<int64_t>  leftX, ::by_ref<int64_t>  rightX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ResetHorzDirection", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, horz, maxPair, leftX, rightX);
}
inline bool Unity::Cinemachine::ClipperBase::HorzIsSpike(::Unity::Cinemachine::Active*  horz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"HorzIsSpike", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, horz);
}
inline bool Unity::Cinemachine::ClipperBase::TrimHorz(::Unity::Cinemachine::Active*  horzEdge, bool  preserveCollinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"TrimHorz", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, horzEdge, preserveCollinear);
}
inline void Unity::Cinemachine::ClipperBase::DoHorizontal(::Unity::Cinemachine::Active*  horz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoHorizontal", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, horz);
}
inline void Unity::Cinemachine::ClipperBase::DoTopOfScanbeam(int64_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoTopOfScanbeam", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y);
}
inline ::Unity::Cinemachine::Active* Unity::Cinemachine::ClipperBase::DoMaxima(::Unity::Cinemachine::Active*  ae)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoMaxima", {}, {::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Active*>(this, ___internal_method, ae);
}
inline bool Unity::Cinemachine::ClipperBase::IsValidPath(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsValidPath", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline bool Unity::Cinemachine::ClipperBase::AreReallyClose(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AreReallyClose", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pt1, pt2);
}
inline bool Unity::Cinemachine::ClipperBase::IsValidClosedPath(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"IsValidClosedPath", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op);
}
inline bool Unity::Cinemachine::ClipperBase::ValueBetween(int64_t  val, int64_t  end1, int64_t  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ValueBetween", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, val, end1, end2);
}
inline bool Unity::Cinemachine::ClipperBase::ValueEqualOrBetween(int64_t  val, int64_t  end1, int64_t  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ValueEqualOrBetween", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, val, end1, end2);
}
inline bool Unity::Cinemachine::ClipperBase::PointBetween(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Point64  corner1, ::Unity::Cinemachine::Point64  corner2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"PointBetween", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pt, corner1, corner2);
}
inline bool Unity::Cinemachine::ClipperBase::CollinearSegsOverlap(::Unity::Cinemachine::Point64  seg1a, ::Unity::Cinemachine::Point64  seg1b, ::Unity::Cinemachine::Point64  seg2a, ::Unity::Cinemachine::Point64  seg2b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CollinearSegsOverlap", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, seg1a, seg1b, seg2a, seg2b);
}
inline bool Unity::Cinemachine::ClipperBase::HorzEdgesOverlap(int64_t  x1a, int64_t  x1b, int64_t  x2a, int64_t  x2b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"HorzEdgesOverlap", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x1a, x1b, x2a, x2b);
}
inline ::Unity::Cinemachine::Joiner* Unity::Cinemachine::ClipperBase::GetHorzTrialParent(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetHorzTrialParent", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Joiner*>(this, ___internal_method, op);
}
inline bool Unity::Cinemachine::ClipperBase::OutPtInTrialHorzList(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"OutPtInTrialHorzList", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op);
}
inline bool Unity::Cinemachine::ClipperBase::ValidateClosedPathEx(::by_ref<::Unity::Cinemachine::OutPt*>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ValidateClosedPathEx", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::InsertOp(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::OutPt*  insertAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"InsertOp", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(nullptr, ___internal_method, pt, insertAfter);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::DisposeOutPt(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DisposeOutPt", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(nullptr, ___internal_method, op);
}
inline void Unity::Cinemachine::ClipperBase::SafeDisposeOutPts(::by_ref<::Unity::Cinemachine::OutPt*>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SafeDisposeOutPts", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Unity::Cinemachine::ClipperBase::SafeDeleteOutPtJoiners(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"SafeDeleteOutPtJoiners", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void Unity::Cinemachine::ClipperBase::AddTrialHorzJoin(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddTrialHorzJoin", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::Unity::Cinemachine::Joiner* Unity::Cinemachine::ClipperBase::FindTrialJoinParent(::by_ref<::Unity::Cinemachine::Joiner*>  joiner, ::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FindTrialJoinParent", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Joiner*>>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Joiner*>(nullptr, ___internal_method, joiner, op);
}
inline void Unity::Cinemachine::ClipperBase::DeleteTrialHorzJoin(::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeleteTrialHorzJoin", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline bool Unity::Cinemachine::ClipperBase::GetHorzExtendedHorzSeg(::by_ref<::Unity::Cinemachine::OutPt*>  op, ::by_ref<::Unity::Cinemachine::OutPt*>  op2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetHorzExtendedHorzSeg", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op, op2);
}
inline void Unity::Cinemachine::ClipperBase::ConvertHorzTrialsToJoins()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ConvertHorzTrialsToJoins", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::ClipperBase::AddJoin(::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"AddJoin", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op1, op2);
}
inline ::Unity::Cinemachine::Joiner* Unity::Cinemachine::ClipperBase::FindJoinParent(::Unity::Cinemachine::Joiner*  joiner, ::Unity::Cinemachine::OutPt*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FindJoinParent", {}, {::i2c::type_of<::Unity::Cinemachine::Joiner*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Joiner*>(nullptr, ___internal_method, joiner, op);
}
inline void Unity::Cinemachine::ClipperBase::DeleteJoin(::Unity::Cinemachine::Joiner*  joiner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeleteJoin", {}, {::i2c::type_of<::Unity::Cinemachine::Joiner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joiner);
}
inline void Unity::Cinemachine::ClipperBase::ProcessJoinList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ProcessJoinList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::ClipperBase::CheckDisposeAdjacent(::by_ref<::Unity::Cinemachine::OutPt*>  op, ::Unity::Cinemachine::OutPt*  guard, ::Unity::Cinemachine::OutRec*  outRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CheckDisposeAdjacent", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, op, guard, outRec);
}
inline double_t Unity::Cinemachine::ClipperBase::DistanceFromLineSqrd(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Point64  linePt1, ::Unity::Cinemachine::Point64  linePt2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DistanceFromLineSqrd", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt, linePt1, linePt2);
}
inline double_t Unity::Cinemachine::ClipperBase::DistanceSqr(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DistanceSqr", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt1, pt2);
}
inline ::Unity::Cinemachine::OutRec* Unity::Cinemachine::ClipperBase::ProcessJoin(::Unity::Cinemachine::Joiner*  j)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"ProcessJoin", {}, {::i2c::type_of<::Unity::Cinemachine::Joiner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutRec*>(this, ___internal_method, j);
}
inline void Unity::Cinemachine::ClipperBase::UpdateOutrecOwner(::Unity::Cinemachine::OutRec*  outrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"UpdateOutrecOwner", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outrec);
}
inline void Unity::Cinemachine::ClipperBase::CompleteSplit(::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2, /* [Nullable(1)] */ ::Unity::Cinemachine::OutRec*  outrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CompleteSplit", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op1, op2, outrec);
}
inline void Unity::Cinemachine::ClipperBase::CleanCollinear(::Unity::Cinemachine::OutRec*  outrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"CleanCollinear", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outrec);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::ClipperBase::DoSplitOp(::by_ref<::Unity::Cinemachine::OutPt*>  outRecOp, ::Unity::Cinemachine::OutPt*  splitOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DoSplitOp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::OutPt*>(this, ___internal_method, outRecOp, splitOp);
}
inline void Unity::Cinemachine::ClipperBase::FixSelfIntersects(::by_ref<::Unity::Cinemachine::OutPt*>  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"FixSelfIntersects", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::OutPt*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline bool Unity::Cinemachine::ClipperBase::BuildPath(::Unity::Cinemachine::OutPt*  op, bool  reverse, bool  isOpen, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildPath", {}, {::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op, reverse, isOpen, path);
}
inline bool Unity::Cinemachine::ClipperBase::BuildPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionClosed, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildPaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, solutionClosed, solutionOpen);
}
inline bool Unity::Cinemachine::ClipperBase::Path1InsidePath2(::Unity::Cinemachine::OutRec*  or1, ::Unity::Cinemachine::OutRec*  or2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"Path1InsidePath2", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, or1, or2);
}
inline ::Unity::Cinemachine::Rect64 Unity::Cinemachine::ClipperBase::GetBounds(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Rect64>(this, ___internal_method, path);
}
inline bool Unity::Cinemachine::ClipperBase::DeepCheckOwner(::Unity::Cinemachine::OutRec*  outrec, ::Unity::Cinemachine::OutRec*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"DeepCheckOwner", {}, {::i2c::type_of<::Unity::Cinemachine::OutRec*>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outrec, owner);
}
inline bool Unity::Cinemachine::ClipperBase::BuildTree(::Unity::Cinemachine::PolyPathBase*  polytree, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solutionOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"BuildTree", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, polytree, solutionOpen);
}
inline ::Unity::Cinemachine::Rect64 Unity::Cinemachine::ClipperBase::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ClipperBase*>(),
                        {"GetBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Rect64>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ClipperBase* Unity::Cinemachine::ClipperBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ClipperBase*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ClipperBase::ClipperBase()   {
}
