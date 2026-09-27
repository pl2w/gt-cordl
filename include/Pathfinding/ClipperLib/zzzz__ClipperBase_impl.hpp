#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/ClipperBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipperBase_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__LocalMinima_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutPt_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyType_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__TEdge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)()>(&::Pathfinding::ClipperLib::ClipperBase::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6835f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.get_PreserveCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)()>(&::Pathfinding::ClipperLib::ClipperBase::get_PreserveCollinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6836a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"get_PreserveCollinear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.set_PreserveCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(bool)>(&::Pathfinding::ClipperLib::ClipperBase::set_PreserveCollinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6836b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"set_PreserveCollinear", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.IsHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::IsHorizontal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6836b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"IsHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.PointOnLineSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, bool)>(&::Pathfinding::ClipperLib::ClipperBase::PointOnLineSegment)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa6836d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PointOnLineSegment", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.PointOnPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::OutPt*, bool)>(&::Pathfinding::ClipperLib::ClipperBase::PointOnPolygon)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa6837f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PointOnPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.PointInPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::OutPt*, bool)>(&::Pathfinding::ClipperLib::ClipperBase::PointInPolygon)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa683868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.SlopesEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, bool)>(&::Pathfinding::ClipperLib::ClipperBase::SlopesEqual)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa6839ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SlopesEqual", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.SlopesEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, bool)>(&::Pathfinding::ClipperLib::ClipperBase::SlopesEqual)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa683a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SlopesEqual", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)()>(&::Pathfinding::ClipperLib::ClipperBase::Clear)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa683ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.DisposeLocalMinimaList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)()>(&::Pathfinding::ClipperLib::ClipperBase::DisposeLocalMinimaList)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa683c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"DisposeLocalMinimaList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.RangeTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::IntPoint, ::by_ref<bool>)>(&::Pathfinding::ClipperLib::ClipperBase::RangeTest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa683c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"RangeTest", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.InitEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::ClipperBase::InitEdge)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa683d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"InitEdge", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.InitEdge2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::PolyType)>(&::Pathfinding::ClipperLib::ClipperBase::InitEdge2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa683dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"InitEdge2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.AddPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*, ::Pathfinding::ClipperLib::PolyType, bool)>(&::Pathfinding::ClipperLib::ClipperBase::AddPath)> {
  constexpr static std::size_t size = 0x954;
  constexpr static std::size_t addrs = 0xa683e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.AddPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*, ::Pathfinding::ClipperLib::PolyType)>(&::Pathfinding::ClipperLib::ClipperBase::AddPolygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa684d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AddPolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.Pt2IsBetweenPt1AndPt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::ClipperBase::Pt2IsBetweenPt1AndPt3)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa684828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"Pt2IsBetweenPt1AndPt3", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.RemoveEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::TEdge* (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::RemoveEdge)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6847c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"RemoveEdge", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.GetLastHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::TEdge* (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::GetLastHorz)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa684d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"GetLastHorz", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.SharedVertWithPrevAtTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::SharedVertWithPrevAtTop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa684a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SharedVertWithPrevAtTop", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.SharedVertWithNextIsBot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::SharedVertWithNextIsBot)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa684d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SharedVertWithNextIsBot", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.MoreBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::MoreBelow)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa684e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"MoreBelow", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.JustBeforeLocMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::JustBeforeLocMin)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa684e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"JustBeforeLocMin", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.MoreAbove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::MoreAbove)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa684ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"MoreAbove", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.AllHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::AllHorizontal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa684890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AllHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.SetDx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::SetDx)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa683e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SetDx", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.DoMinimaLML
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, bool)>(&::Pathfinding::ClipperLib::ClipperBase::DoMinimaLML)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa684f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"DoMinimaLML", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.DescendToMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::TEdge* (::Pathfinding::ClipperLib::ClipperBase::*)(::by_ref<::Pathfinding::ClipperLib::TEdge*>)>(&::Pathfinding::ClipperLib::ClipperBase::DescendToMin)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa6851bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"DescendToMin", {}, {::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::TEdge*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.AscendToMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::by_ref<::Pathfinding::ClipperLib::TEdge*>, bool, bool)>(&::Pathfinding::ClipperLib::ClipperBase::AscendToMax)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa6848d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AscendToMax", {}, {::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::TEdge*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.AddBoundsToLML
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::TEdge* (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*, bool)>(&::Pathfinding::ClipperLib::ClipperBase::AddBoundsToLML)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa684b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AddBoundsToLML", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.InsertLocalMinima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::LocalMinima*)>(&::Pathfinding::ClipperLib::ClipperBase::InsertLocalMinima)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa68510c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"InsertLocalMinima", {}, {::i2c::type_of<::Pathfinding::ClipperLib::LocalMinima*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.PopLocalMinima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)()>(&::Pathfinding::ClipperLib::ClipperBase::PopLocalMinima)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa68539c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PopLocalMinima", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.ReverseHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::ClipperBase::ReverseHorizontal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa68519c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"ReverseHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::ClipperBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::ClipperBase::*)()>(&::Pathfinding::ClipperLib::ClipperBase::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa6853b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ClipperLib::LocalMinima*& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_MinimaList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimaList;
}
constexpr ::Pathfinding::ClipperLib::LocalMinima* const& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_MinimaList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimaList;
}
constexpr void Pathfinding::ClipperLib::ClipperBase::__cordl_internal_set_m_MinimaList(::Pathfinding::ClipperLib::LocalMinima*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimaList = value;
}
constexpr ::Pathfinding::ClipperLib::LocalMinima*& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_CurrentLM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLM;
}
constexpr ::Pathfinding::ClipperLib::LocalMinima* const& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_CurrentLM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLM;
}
constexpr void Pathfinding::ClipperLib::ClipperBase::__cordl_internal_set_m_CurrentLM(::Pathfinding::ClipperLib::LocalMinima*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentLM = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>*& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_edges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_edges;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>* const& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_edges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_edges;
}
constexpr void Pathfinding::ClipperLib::ClipperBase::__cordl_internal_set_m_edges(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::TEdge*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_edges = value;
}
constexpr bool& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_UseFullRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseFullRange;
}
constexpr bool const& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_UseFullRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseFullRange;
}
constexpr void Pathfinding::ClipperLib::ClipperBase::__cordl_internal_set_m_UseFullRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseFullRange = value;
}
constexpr bool& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_HasOpenPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasOpenPaths;
}
constexpr bool const& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get_m_HasOpenPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasOpenPaths;
}
constexpr void Pathfinding::ClipperLib::ClipperBase::__cordl_internal_set_m_HasOpenPaths(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasOpenPaths = value;
}
constexpr bool& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get__PreserveCollinear_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreserveCollinear_k__BackingField;
}
constexpr bool const& Pathfinding::ClipperLib::ClipperBase::__cordl_internal_get__PreserveCollinear_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreserveCollinear_k__BackingField;
}
constexpr void Pathfinding::ClipperLib::ClipperBase::__cordl_internal_set__PreserveCollinear_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreserveCollinear_k__BackingField = value;
}
inline void Pathfinding::ClipperLib::ClipperBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::ClipperLib::ClipperBase::get_PreserveCollinear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"get_PreserveCollinear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::ClipperBase::set_PreserveCollinear(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"set_PreserveCollinear", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::ClipperLib::ClipperBase::IsHorizontal(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"IsHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e);
}
inline bool Pathfinding::ClipperLib::ClipperBase::PointOnLineSegment(::Pathfinding::ClipperLib::IntPoint  pt, ::Pathfinding::ClipperLib::IntPoint  linePt1, ::Pathfinding::ClipperLib::IntPoint  linePt2, bool  UseFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PointOnLineSegment", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pt, linePt1, linePt2, UseFullRange);
}
inline bool Pathfinding::ClipperLib::ClipperBase::PointOnPolygon(::Pathfinding::ClipperLib::IntPoint  pt, ::Pathfinding::ClipperLib::OutPt*  pp, bool  UseFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PointOnPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pt, pp, UseFullRange);
}
inline bool Pathfinding::ClipperLib::ClipperBase::PointInPolygon(::Pathfinding::ClipperLib::IntPoint  pt, ::Pathfinding::ClipperLib::OutPt*  pp, bool  UseFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pt, pp, UseFullRange);
}
inline bool Pathfinding::ClipperLib::ClipperBase::SlopesEqual(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, bool  UseFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SlopesEqual", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e1, e2, UseFullRange);
}
inline bool Pathfinding::ClipperLib::ClipperBase::SlopesEqual(::Pathfinding::ClipperLib::IntPoint  pt1, ::Pathfinding::ClipperLib::IntPoint  pt2, ::Pathfinding::ClipperLib::IntPoint  pt3, bool  UseFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SlopesEqual", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pt1, pt2, pt3, UseFullRange);
}
inline void Pathfinding::ClipperLib::ClipperBase::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::ClipperBase::DisposeLocalMinimaList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"DisposeLocalMinimaList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::ClipperBase::RangeTest(::Pathfinding::ClipperLib::IntPoint  Pt, ::by_ref<bool>  useFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"RangeTest", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Pt, useFullRange);
}
inline void Pathfinding::ClipperLib::ClipperBase::InitEdge(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::TEdge*  eNext, ::Pathfinding::ClipperLib::TEdge*  ePrev, ::Pathfinding::ClipperLib::IntPoint  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"InitEdge", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, eNext, ePrev, pt);
}
inline void Pathfinding::ClipperLib::ClipperBase::InitEdge2(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::PolyType  polyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"InitEdge2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, polyType);
}
inline bool Pathfinding::ClipperLib::ClipperBase::AddPath(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  pg, ::Pathfinding::ClipperLib::PolyType  polyType, bool  Closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AddPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pg, polyType, Closed);
}
inline bool Pathfinding::ClipperLib::ClipperBase::AddPolygon(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  pg, ::Pathfinding::ClipperLib::PolyType  polyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AddPolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pg, polyType);
}
inline bool Pathfinding::ClipperLib::ClipperBase::Pt2IsBetweenPt1AndPt3(::Pathfinding::ClipperLib::IntPoint  pt1, ::Pathfinding::ClipperLib::IntPoint  pt2, ::Pathfinding::ClipperLib::IntPoint  pt3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"Pt2IsBetweenPt1AndPt3", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pt1, pt2, pt3);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::ClipperBase::RemoveEdge(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"RemoveEdge", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::TEdge*>(this, ___internal_method, e);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::ClipperBase::GetLastHorz(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"GetLastHorz", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::TEdge*>(this, ___internal_method, Edge);
}
inline bool Pathfinding::ClipperLib::ClipperBase::SharedVertWithPrevAtTop(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SharedVertWithPrevAtTop", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Edge);
}
inline bool Pathfinding::ClipperLib::ClipperBase::SharedVertWithNextIsBot(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SharedVertWithNextIsBot", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Edge);
}
inline bool Pathfinding::ClipperLib::ClipperBase::MoreBelow(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"MoreBelow", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Edge);
}
inline bool Pathfinding::ClipperLib::ClipperBase::JustBeforeLocMin(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"JustBeforeLocMin", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Edge);
}
inline bool Pathfinding::ClipperLib::ClipperBase::MoreAbove(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"MoreAbove", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Edge);
}
inline bool Pathfinding::ClipperLib::ClipperBase::AllHorizontal(::Pathfinding::ClipperLib::TEdge*  Edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AllHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Edge);
}
inline void Pathfinding::ClipperLib::ClipperBase::SetDx(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"SetDx", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Pathfinding::ClipperLib::ClipperBase::DoMinimaLML(::Pathfinding::ClipperLib::TEdge*  E1, ::Pathfinding::ClipperLib::TEdge*  E2, bool  IsClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"DoMinimaLML", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, E1, E2, IsClosed);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::ClipperBase::DescendToMin(::by_ref<::Pathfinding::ClipperLib::TEdge*>  E)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"DescendToMin", {}, {::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::TEdge*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::TEdge*>(this, ___internal_method, E);
}
inline void Pathfinding::ClipperLib::ClipperBase::AscendToMax(::by_ref<::Pathfinding::ClipperLib::TEdge*>  E, bool  Appending, bool  IsClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AscendToMax", {}, {::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::TEdge*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, E, Appending, IsClosed);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::ClipperBase::AddBoundsToLML(::Pathfinding::ClipperLib::TEdge*  E, bool  Closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"AddBoundsToLML", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::TEdge*>(this, ___internal_method, E, Closed);
}
inline void Pathfinding::ClipperLib::ClipperBase::InsertLocalMinima(::Pathfinding::ClipperLib::LocalMinima*  newLm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"InsertLocalMinima", {}, {::i2c::type_of<::Pathfinding::ClipperLib::LocalMinima*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLm);
}
inline void Pathfinding::ClipperLib::ClipperBase::PopLocalMinima()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"PopLocalMinima", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::ClipperBase::ReverseHorizontal(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(),
                        {"ReverseHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Pathfinding::ClipperLib::ClipperBase::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::ClipperBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::ClipperBase* Pathfinding::ClipperLib::ClipperBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::ClipperBase*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::ClipperBase::ClipperBase()   {
}
