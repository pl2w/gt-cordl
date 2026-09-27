#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Clipper.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipType_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipperBase_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyFillType_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__Clipper_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipType_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__Direction_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntersectNode_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__Join_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutPt_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutRec_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyFillType_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyTree_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__Scanbeam_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__TEdge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(int32_t)>(&::Pathfinding::ClipperLib::Clipper::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa68544c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6855b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa6856b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                    {::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.get_ReverseSolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::get_ReverseSolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68587c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"get_ReverseSolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.set_ReverseSolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(bool)>(&::Pathfinding::ClipperLib::Clipper::set_ReverseSolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa685884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"set_ReverseSolution", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.get_StrictlySimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::get_StrictlySimple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa68588c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"get_StrictlySimple", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.set_StrictlySimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(bool)>(&::Pathfinding::ClipperLib::Clipper::set_StrictlySimple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa685894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"set_StrictlySimple", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.InsertScanbeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(int64_t)>(&::Pathfinding::ClipperLib::Clipper::InsertScanbeam)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa685728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertScanbeam", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::ClipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*, ::Pathfinding::ClipperLib::PolyFillType, ::Pathfinding::ClipperLib::PolyFillType)>(&::Pathfinding::ClipperLib::Clipper::Execute)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa68589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Execute", {}, {::i2c::type_of<::Pathfinding::ClipperLib::ClipType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::ClipType, ::Pathfinding::ClipperLib::PolyTree*, ::Pathfinding::ClipperLib::PolyFillType, ::Pathfinding::ClipperLib::PolyFillType)>(&::Pathfinding::ClipperLib::Clipper::Execute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa685f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Execute", {}, {::i2c::type_of<::Pathfinding::ClipperLib::ClipType>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.FixHoleLinkage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::FixHoleLinkage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa686310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixHoleLinkage", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ExecuteInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::ExecuteInternal)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xa6859b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ExecuteInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.PopScanbeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::PopScanbeam)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa686374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"PopScanbeam", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DisposeAllPolyPts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::DisposeAllPolyPts)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa685614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeAllPolyPts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DisposeOutRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(int32_t)>(&::Pathfinding::ClipperLib::Clipper::DisposeOutRec)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa687430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeOutRec", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DisposeOutPts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*)>(&::Pathfinding::ClipperLib::Clipper::DisposeOutPts)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6874c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeOutPts", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AddJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::AddJoin)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa6874e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddJoin", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AddGhostJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::AddGhostJoin)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa68760c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddGhostJoin", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.InsertLocalMinimaIntoAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(int64_t)>(&::Pathfinding::ClipperLib::Clipper::InsertLocalMinimaIntoAEL)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xa68639c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertLocalMinimaIntoAEL", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.InsertEdgeIntoAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::InsertEdgeIntoAEL)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa68771c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertEdgeIntoAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.E2InsertsBeforeE1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::E2InsertsBeforeE1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa688608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"E2InsertsBeforeE1", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IsEvenOddFillType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::IsEvenOddFillType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa6886e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsEvenOddFillType", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IsEvenOddAltFillType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::IsEvenOddAltFillType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa688710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsEvenOddAltFillType", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IsContributing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::IsContributing)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa687a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsContributing", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SetWindingCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::SetWindingCount)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa68781c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SetWindingCount", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AddEdgeToSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::AddEdgeToSEL)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa687f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddEdgeToSEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.CopyAELToSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::CopyAELToSEL)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa688740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"CopyAELToSEL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SwapPositionsInAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::SwapPositionsInAEL)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa688788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapPositionsInAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SwapPositionsInSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::SwapPositionsInSEL)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa6889c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapPositionsInSEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AddLocalMaxPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::AddLocalMaxPoly)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa688c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddLocalMaxPoly", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AddLocalMinPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutPt* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::AddLocalMinPoly)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa687de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddLocalMinPoly", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.CreateOutRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutRec* (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::CreateOutRec)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa688fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"CreateOutRec", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AddOutPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutPt* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::AddOutPt)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa687bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddOutPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.HorzSegmentsOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::HorzSegmentsOverlap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa687ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"HorzSegmentsOverlap", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SetHoleState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::SetHoleState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa68912c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SetHoleState", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetDx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::IntPoint, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::GetDx)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6891e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetDx", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.FirstIsBottomPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::OutPt*)>(&::Pathfinding::ClipperLib::Clipper::FirstIsBottomPt)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa689208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FirstIsBottomPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetBottomPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutPt* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*)>(&::Pathfinding::ClipperLib::Clipper::GetBottomPt)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa68941c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetBottomPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetLowermostRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutRec* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*, ::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::GetLowermostRec)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa689508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetLowermostRec", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Param1RightOfParam2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*, ::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::Param1RightOfParam2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6895ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Param1RightOfParam2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetOutRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutRec* (::Pathfinding::ClipperLib::Clipper::*)(int32_t)>(&::Pathfinding::ClipperLib::Clipper::GetOutRec)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa689618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetOutRec", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.AppendPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::AppendPolygon)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xa688c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AppendPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ReversePolyPtLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*)>(&::Pathfinding::ClipperLib::Clipper::ReversePolyPtLinks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa686c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ReversePolyPtLinks", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SwapSides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::SwapSides)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6896b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapSides", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SwapPolyIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::SwapPolyIndexes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6896e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapPolyIndexes", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IntersectEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::IntPoint, bool)>(&::Pathfinding::ClipperLib::Clipper::IntersectEdges)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0xa688088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IntersectEdges", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DeleteFromAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::DeleteFromAEL)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa689708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DeleteFromAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DeleteFromSEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::DeleteFromSEL)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6897ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DeleteFromSEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.UpdateEdgeIntoAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::by_ref<::Pathfinding::ClipperLib::TEdge*>)>(&::Pathfinding::ClipperLib::Clipper::UpdateEdgeIntoAEL)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa689850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"UpdateEdgeIntoAEL", {}, {::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::TEdge*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ProcessHorizontals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(bool)>(&::Pathfinding::ClipperLib::Clipper::ProcessHorizontals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa68673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessHorizontals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetHorzDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::by_ref<::Pathfinding::ClipperLib::Direction>, ::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Pathfinding::ClipperLib::Clipper::GetHorzDirection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa689ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetHorzDirection", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::Direction>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.PrepareHorzJoins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, bool)>(&::Pathfinding::ClipperLib::Clipper::PrepareHorzJoins)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa689e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"PrepareHorzJoins", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ProcessHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, bool)>(&::Pathfinding::ClipperLib::Clipper::ProcessHorizontal)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xa689994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetNextInAEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::TEdge* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::Direction)>(&::Pathfinding::ClipperLib::Clipper::GetNextInAEL)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa68a080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetNextInAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IsMaxima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, double_t)>(&::Pathfinding::ClipperLib::Clipper::IsMaxima)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa68a0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsMaxima", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IsIntermediate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, double_t)>(&::Pathfinding::ClipperLib::Clipper::IsIntermediate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa68a0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsIntermediate", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetMaximaPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::TEdge* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::GetMaximaPair)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa689fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetMaximaPair", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ProcessIntersections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(int64_t, int64_t)>(&::Pathfinding::ClipperLib::Clipper::ProcessIntersections)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa686784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessIntersections", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.BuildIntersectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(int64_t, int64_t)>(&::Pathfinding::ClipperLib::Clipper::BuildIntersectList)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa68a110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"BuildIntersectList", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.EdgesAdjacent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::IntersectNode*)>(&::Pathfinding::ClipperLib::Clipper::EdgesAdjacent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa68a83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"EdgesAdjacent", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntersectNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.FixupIntersectionOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::FixupIntersectionOrder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa68a338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupIntersectionOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ProcessIntersectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::ProcessIntersectList)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa68a3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessIntersectList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(double_t)>(&::Pathfinding::ClipperLib::Clipper::Round)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa68a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Round", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.TopX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Pathfinding::ClipperLib::TEdge*, int64_t)>(&::Pathfinding::ClipperLib::Clipper::TopX)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa688674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"TopX", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.InsertIntersectNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::IntPoint)>(&::Pathfinding::ClipperLib::Clipper::InsertIntersectNode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa68a73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertIntersectNode", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.SwapIntersectNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::IntersectNode*, ::Pathfinding::ClipperLib::IntersectNode*)>(&::Pathfinding::ClipperLib::Clipper::SwapIntersectNodes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa68a87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapIntersectNodes", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntersectNode*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntersectNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.IntersectPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*, ::Pathfinding::ClipperLib::TEdge*, ::by_ref<::Pathfinding::ClipperLib::IntPoint>)>(&::Pathfinding::ClipperLib::Clipper::IntersectPoint)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa68a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IntersectPoint", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::IntPoint>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DisposeIntersectNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::DisposeIntersectNodes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa68a428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeIntersectNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.ProcessEdgesAtTopOfScanbeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(int64_t)>(&::Pathfinding::ClipperLib::Clipper::ProcessEdgesAtTopOfScanbeam)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa6868bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessEdgesAtTopOfScanbeam", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DoMaxima
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::TEdge*)>(&::Pathfinding::ClipperLib::Clipper::DoMaxima)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa68a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DoMaxima", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Orientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*)>(&::Pathfinding::ClipperLib::Clipper::Orientation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa68aa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Orientation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.PointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*)>(&::Pathfinding::ClipperLib::Clipper::PointCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa68ac10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"PointCount", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.BuildResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*)>(&::Pathfinding::ClipperLib::Clipper::BuildResult)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa685d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"BuildResult", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.BuildResult2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::PolyTree*)>(&::Pathfinding::ClipperLib::Clipper::BuildResult2)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa685fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"BuildResult2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.FixupOutPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::FixupOutPolygon)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa687040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupOutPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DupOutPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ClipperLib::OutPt* (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*, bool)>(&::Pathfinding::ClipperLib::Clipper::DupOutPt)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa68ac40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DupOutPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.GetOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(int64_t, int64_t, int64_t, int64_t, ::by_ref<int64_t>, ::by_ref<int64_t>)>(&::Pathfinding::ClipperLib::Clipper::GetOverlap)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa68ad44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetOverlap", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.JoinHorz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::IntPoint, bool)>(&::Pathfinding::ClipperLib::Clipper::JoinHorz)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa68ae7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"JoinHorz", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.JoinPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::Join*, ::by_ref<::Pathfinding::ClipperLib::OutPt*>, ::by_ref<::Pathfinding::ClipperLib::OutPt*>)>(&::Pathfinding::ClipperLib::Clipper::JoinPoints)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0xa68b1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"JoinPoints", {}, {::i2c::type_of<::Pathfinding::ClipperLib::Join*>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::OutPt*>>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::OutPt*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Poly2ContainsPoly1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutPt*, ::Pathfinding::ClipperLib::OutPt*, bool)>(&::Pathfinding::ClipperLib::Clipper::Poly2ContainsPoly1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa68b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Poly2ContainsPoly1", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.FixupFirstLefts1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*, ::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::FixupFirstLefts1)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa68b8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupFirstLefts1", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.FixupFirstLefts2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*, ::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::FixupFirstLefts2)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa68b9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupFirstLefts2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.JoinCommonEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::JoinCommonEdges)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xa686cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"JoinCommonEdges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.UpdateOutPtIdxs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::UpdateOutPtIdxs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa68bb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"UpdateOutPtIdxs", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.DoSimplePolygons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Clipper::*)()>(&::Pathfinding::ClipperLib::Clipper::DoSimplePolygons)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa6871f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DoSimplePolygons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*)>(&::Pathfinding::ClipperLib::Clipper::Area)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa68aa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::ClipperLib::Clipper.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Pathfinding::ClipperLib::Clipper::*)(::Pathfinding::ClipperLib::OutRec*)>(&::Pathfinding::ClipperLib::Clipper::Area)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa686c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_PolyOuts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PolyOuts;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_PolyOuts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PolyOuts;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_PolyOuts(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::OutRec*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PolyOuts = value;
}
constexpr ::Pathfinding::ClipperLib::ClipType& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ClipType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipType;
}
constexpr ::Pathfinding::ClipperLib::ClipType const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ClipType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipType;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_ClipType(::Pathfinding::ClipperLib::ClipType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClipType = value;
}
constexpr ::Pathfinding::ClipperLib::Scanbeam*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_Scanbeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scanbeam;
}
constexpr ::Pathfinding::ClipperLib::Scanbeam* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_Scanbeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scanbeam;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_Scanbeam(::Pathfinding::ClipperLib::Scanbeam*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Scanbeam = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ActiveEdges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveEdges;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ActiveEdges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveEdges;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_ActiveEdges(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveEdges = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_SortedEdges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedEdges;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_SortedEdges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedEdges;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_SortedEdges(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortedEdges = value;
}
constexpr ::Pathfinding::ClipperLib::IntersectNode*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_IntersectNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntersectNodes;
}
constexpr ::Pathfinding::ClipperLib::IntersectNode* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_IntersectNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntersectNodes;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_IntersectNodes(::Pathfinding::ClipperLib::IntersectNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IntersectNodes = value;
}
constexpr bool& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ExecuteLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExecuteLocked;
}
constexpr bool const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ExecuteLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExecuteLocked;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_ExecuteLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExecuteLocked = value;
}
constexpr ::Pathfinding::ClipperLib::PolyFillType& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ClipFillType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipFillType;
}
constexpr ::Pathfinding::ClipperLib::PolyFillType const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_ClipFillType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClipFillType;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_ClipFillType(::Pathfinding::ClipperLib::PolyFillType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClipFillType = value;
}
constexpr ::Pathfinding::ClipperLib::PolyFillType& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_SubjFillType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubjFillType;
}
constexpr ::Pathfinding::ClipperLib::PolyFillType const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_SubjFillType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubjFillType;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_SubjFillType(::Pathfinding::ClipperLib::PolyFillType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubjFillType = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_Joins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Joins;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_Joins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Joins;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_Joins(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Joins = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_GhostJoins()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GhostJoins;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>* const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_GhostJoins() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GhostJoins;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_GhostJoins(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::Join*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GhostJoins = value;
}
constexpr bool& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_UsingPolyTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingPolyTree;
}
constexpr bool const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get_m_UsingPolyTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingPolyTree;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set_m_UsingPolyTree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UsingPolyTree = value;
}
constexpr bool& Pathfinding::ClipperLib::Clipper::__cordl_internal_get__ReverseSolution_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverseSolution_k__BackingField;
}
constexpr bool const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get__ReverseSolution_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverseSolution_k__BackingField;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set__ReverseSolution_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReverseSolution_k__BackingField = value;
}
constexpr bool& Pathfinding::ClipperLib::Clipper::__cordl_internal_get__StrictlySimple_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StrictlySimple_k__BackingField;
}
constexpr bool const& Pathfinding::ClipperLib::Clipper::__cordl_internal_get__StrictlySimple_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StrictlySimple_k__BackingField;
}
constexpr void Pathfinding::ClipperLib::Clipper::__cordl_internal_set__StrictlySimple_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StrictlySimple_k__BackingField = value;
}
inline void Pathfinding::ClipperLib::Clipper::setStaticF___f__am$cacheE(::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*, "<>f__am$cacheE", ::Pathfinding::ClipperLib::Clipper*>(std::forward<::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>(value));
}
inline ::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>* Pathfinding::ClipperLib::Clipper::getStaticF___f__am$cacheE()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*, "<>f__am$cacheE", ::Pathfinding::ClipperLib::Clipper*>();
}
inline void Pathfinding::ClipperLib::Clipper::setStaticF___f__am$cacheF(::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*, "<>f__am$cacheF", ::Pathfinding::ClipperLib::Clipper*>(std::forward<::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>(value));
}
inline ::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>* Pathfinding::ClipperLib::Clipper::getStaticF___f__am$cacheF()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*, "<>f__am$cacheF", ::Pathfinding::ClipperLib::Clipper*>();
}
inline void Pathfinding::ClipperLib::Clipper::_ctor(int32_t  InitOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, InitOptions);
}
inline void Pathfinding::ClipperLib::Clipper::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::ClipperLib::Clipper::get_ReverseSolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"get_ReverseSolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::set_ReverseSolution(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"set_ReverseSolution", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::ClipperLib::Clipper::get_StrictlySimple()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"get_StrictlySimple", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::set_StrictlySimple(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"set_StrictlySimple", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::ClipperLib::Clipper::InsertScanbeam(int64_t  Y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertScanbeam", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Y);
}
inline bool Pathfinding::ClipperLib::Clipper::Execute(::Pathfinding::ClipperLib::ClipType  clipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  solution, ::Pathfinding::ClipperLib::PolyFillType  subjFillType, ::Pathfinding::ClipperLib::PolyFillType  clipFillType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Execute", {}, {::i2c::type_of<::Pathfinding::ClipperLib::ClipType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, solution, subjFillType, clipFillType);
}
inline bool Pathfinding::ClipperLib::Clipper::Execute(::Pathfinding::ClipperLib::ClipType  clipType, ::Pathfinding::ClipperLib::PolyTree*  polytree, ::Pathfinding::ClipperLib::PolyFillType  subjFillType, ::Pathfinding::ClipperLib::PolyFillType  clipFillType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Execute", {}, {::i2c::type_of<::Pathfinding::ClipperLib::ClipType>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyFillType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType, polytree, subjFillType, clipFillType);
}
inline void Pathfinding::ClipperLib::Clipper::FixHoleLinkage(::Pathfinding::ClipperLib::OutRec*  outRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixHoleLinkage", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outRec);
}
inline bool Pathfinding::ClipperLib::Clipper::ExecuteInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ExecuteInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Pathfinding::ClipperLib::Clipper::PopScanbeam()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"PopScanbeam", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::DisposeAllPolyPts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeAllPolyPts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::DisposeOutRec(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeOutRec", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Pathfinding::ClipperLib::Clipper::DisposeOutPts(::Pathfinding::ClipperLib::OutPt*  pp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeOutPts", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pp);
}
inline void Pathfinding::ClipperLib::Clipper::AddJoin(::Pathfinding::ClipperLib::OutPt*  Op1, ::Pathfinding::ClipperLib::OutPt*  Op2, ::Pathfinding::ClipperLib::IntPoint  OffPt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddJoin", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Op1, Op2, OffPt);
}
inline void Pathfinding::ClipperLib::Clipper::AddGhostJoin(::Pathfinding::ClipperLib::OutPt*  Op, ::Pathfinding::ClipperLib::IntPoint  OffPt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddGhostJoin", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Op, OffPt);
}
inline void Pathfinding::ClipperLib::Clipper::InsertLocalMinimaIntoAEL(int64_t  botY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertLocalMinimaIntoAEL", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, botY);
}
inline void Pathfinding::ClipperLib::Clipper::InsertEdgeIntoAEL(::Pathfinding::ClipperLib::TEdge*  edge, ::Pathfinding::ClipperLib::TEdge*  startEdge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertEdgeIntoAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge, startEdge);
}
inline bool Pathfinding::ClipperLib::Clipper::E2InsertsBeforeE1(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"E2InsertsBeforeE1", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e1, e2);
}
inline bool Pathfinding::ClipperLib::Clipper::IsEvenOddFillType(::Pathfinding::ClipperLib::TEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsEvenOddFillType", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, edge);
}
inline bool Pathfinding::ClipperLib::Clipper::IsEvenOddAltFillType(::Pathfinding::ClipperLib::TEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsEvenOddAltFillType", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, edge);
}
inline bool Pathfinding::ClipperLib::Clipper::IsContributing(::Pathfinding::ClipperLib::TEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsContributing", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, edge);
}
inline void Pathfinding::ClipperLib::Clipper::SetWindingCount(::Pathfinding::ClipperLib::TEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SetWindingCount", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline void Pathfinding::ClipperLib::Clipper::AddEdgeToSEL(::Pathfinding::ClipperLib::TEdge*  edge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddEdgeToSEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge);
}
inline void Pathfinding::ClipperLib::Clipper::CopyAELToSEL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"CopyAELToSEL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::SwapPositionsInAEL(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapPositionsInAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge1, edge2);
}
inline void Pathfinding::ClipperLib::Clipper::SwapPositionsInSEL(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapPositionsInSEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, edge1, edge2);
}
inline void Pathfinding::ClipperLib::Clipper::AddLocalMaxPoly(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddLocalMaxPoly", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e1, e2, pt);
}
inline ::Pathfinding::ClipperLib::OutPt* Pathfinding::ClipperLib::Clipper::AddLocalMinPoly(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddLocalMinPoly", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutPt*>(this, ___internal_method, e1, e2, pt);
}
inline ::Pathfinding::ClipperLib::OutRec* Pathfinding::ClipperLib::Clipper::CreateOutRec()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"CreateOutRec", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutRec*>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::OutPt* Pathfinding::ClipperLib::Clipper::AddOutPt(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::IntPoint  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AddOutPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutPt*>(this, ___internal_method, e, pt);
}
inline bool Pathfinding::ClipperLib::Clipper::HorzSegmentsOverlap(::Pathfinding::ClipperLib::IntPoint  Pt1a, ::Pathfinding::ClipperLib::IntPoint  Pt1b, ::Pathfinding::ClipperLib::IntPoint  Pt2a, ::Pathfinding::ClipperLib::IntPoint  Pt2b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"HorzSegmentsOverlap", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, Pt1a, Pt1b, Pt2a, Pt2b);
}
inline void Pathfinding::ClipperLib::Clipper::SetHoleState(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::OutRec*  outRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SetHoleState", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, outRec);
}
inline double_t Pathfinding::ClipperLib::Clipper::GetDx(::Pathfinding::ClipperLib::IntPoint  pt1, ::Pathfinding::ClipperLib::IntPoint  pt2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetDx", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, pt1, pt2);
}
inline bool Pathfinding::ClipperLib::Clipper::FirstIsBottomPt(::Pathfinding::ClipperLib::OutPt*  btmPt1, ::Pathfinding::ClipperLib::OutPt*  btmPt2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FirstIsBottomPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, btmPt1, btmPt2);
}
inline ::Pathfinding::ClipperLib::OutPt* Pathfinding::ClipperLib::Clipper::GetBottomPt(::Pathfinding::ClipperLib::OutPt*  pp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetBottomPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutPt*>(this, ___internal_method, pp);
}
inline ::Pathfinding::ClipperLib::OutRec* Pathfinding::ClipperLib::Clipper::GetLowermostRec(::Pathfinding::ClipperLib::OutRec*  outRec1, ::Pathfinding::ClipperLib::OutRec*  outRec2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetLowermostRec", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutRec*>(this, ___internal_method, outRec1, outRec2);
}
inline bool Pathfinding::ClipperLib::Clipper::Param1RightOfParam2(::Pathfinding::ClipperLib::OutRec*  outRec1, ::Pathfinding::ClipperLib::OutRec*  outRec2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Param1RightOfParam2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outRec1, outRec2);
}
inline ::Pathfinding::ClipperLib::OutRec* Pathfinding::ClipperLib::Clipper::GetOutRec(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetOutRec", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutRec*>(this, ___internal_method, idx);
}
inline void Pathfinding::ClipperLib::Clipper::AppendPolygon(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"AppendPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e1, e2);
}
inline void Pathfinding::ClipperLib::Clipper::ReversePolyPtLinks(::Pathfinding::ClipperLib::OutPt*  pp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ReversePolyPtLinks", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pp);
}
inline void Pathfinding::ClipperLib::Clipper::SwapSides(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapSides", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, edge1, edge2);
}
inline void Pathfinding::ClipperLib::Clipper::SwapPolyIndexes(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapPolyIndexes", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, edge1, edge2);
}
inline void Pathfinding::ClipperLib::Clipper::IntersectEdges(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt, bool  protect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IntersectEdges", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e1, e2, pt, protect);
}
inline void Pathfinding::ClipperLib::Clipper::DeleteFromAEL(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DeleteFromAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Pathfinding::ClipperLib::Clipper::DeleteFromSEL(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DeleteFromSEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Pathfinding::ClipperLib::Clipper::UpdateEdgeIntoAEL(::by_ref<::Pathfinding::ClipperLib::TEdge*>  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"UpdateEdgeIntoAEL", {}, {::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::TEdge*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Pathfinding::ClipperLib::Clipper::ProcessHorizontals(bool  isTopOfScanbeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessHorizontals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isTopOfScanbeam);
}
inline void Pathfinding::ClipperLib::Clipper::GetHorzDirection(::Pathfinding::ClipperLib::TEdge*  HorzEdge, ::by_ref<::Pathfinding::ClipperLib::Direction>  Dir, ::by_ref<int64_t>  Left, ::by_ref<int64_t>  Right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetHorzDirection", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::Direction>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, HorzEdge, Dir, Left, Right);
}
inline void Pathfinding::ClipperLib::Clipper::PrepareHorzJoins(::Pathfinding::ClipperLib::TEdge*  horzEdge, bool  isTopOfScanbeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"PrepareHorzJoins", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, horzEdge, isTopOfScanbeam);
}
inline void Pathfinding::ClipperLib::Clipper::ProcessHorizontal(::Pathfinding::ClipperLib::TEdge*  horzEdge, bool  isTopOfScanbeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessHorizontal", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, horzEdge, isTopOfScanbeam);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::Clipper::GetNextInAEL(::Pathfinding::ClipperLib::TEdge*  e, ::Pathfinding::ClipperLib::Direction  Direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetNextInAEL", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::TEdge*>(this, ___internal_method, e, Direction);
}
inline bool Pathfinding::ClipperLib::Clipper::IsMaxima(::Pathfinding::ClipperLib::TEdge*  e, double_t  Y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsMaxima", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, Y);
}
inline bool Pathfinding::ClipperLib::Clipper::IsIntermediate(::Pathfinding::ClipperLib::TEdge*  e, double_t  Y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IsIntermediate", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, Y);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::Clipper::GetMaximaPair(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetMaximaPair", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::TEdge*>(this, ___internal_method, e);
}
inline bool Pathfinding::ClipperLib::Clipper::ProcessIntersections(int64_t  botY, int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessIntersections", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, botY, topY);
}
inline void Pathfinding::ClipperLib::Clipper::BuildIntersectList(int64_t  botY, int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"BuildIntersectList", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, botY, topY);
}
inline bool Pathfinding::ClipperLib::Clipper::EdgesAdjacent(::Pathfinding::ClipperLib::IntersectNode*  inode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"EdgesAdjacent", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntersectNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inode);
}
inline bool Pathfinding::ClipperLib::Clipper::FixupIntersectionOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupIntersectionOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::ProcessIntersectList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessIntersectList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Pathfinding::ClipperLib::Clipper::Round(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Round", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t Pathfinding::ClipperLib::Clipper::TopX(::Pathfinding::ClipperLib::TEdge*  edge, int64_t  currentY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"TopX", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, edge, currentY);
}
inline void Pathfinding::ClipperLib::Clipper::InsertIntersectNode(::Pathfinding::ClipperLib::TEdge*  e1, ::Pathfinding::ClipperLib::TEdge*  e2, ::Pathfinding::ClipperLib::IntPoint  pt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"InsertIntersectNode", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e1, e2, pt);
}
inline void Pathfinding::ClipperLib::Clipper::SwapIntersectNodes(::Pathfinding::ClipperLib::IntersectNode*  int1, ::Pathfinding::ClipperLib::IntersectNode*  int2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"SwapIntersectNodes", {}, {::i2c::type_of<::Pathfinding::ClipperLib::IntersectNode*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntersectNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, int1, int2);
}
inline bool Pathfinding::ClipperLib::Clipper::IntersectPoint(::Pathfinding::ClipperLib::TEdge*  edge1, ::Pathfinding::ClipperLib::TEdge*  edge2, ::by_ref<::Pathfinding::ClipperLib::IntPoint>  ip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"IntersectPoint", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::IntPoint>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, edge1, edge2, ip);
}
inline void Pathfinding::ClipperLib::Clipper::DisposeIntersectNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DisposeIntersectNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::ProcessEdgesAtTopOfScanbeam(int64_t  topY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"ProcessEdgesAtTopOfScanbeam", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topY);
}
inline void Pathfinding::ClipperLib::Clipper::DoMaxima(::Pathfinding::ClipperLib::TEdge*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DoMaxima", {}, {::i2c::type_of<::Pathfinding::ClipperLib::TEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool Pathfinding::ClipperLib::Clipper::Orientation(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Orientation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, poly);
}
inline int32_t Pathfinding::ClipperLib::Clipper::PointCount(::Pathfinding::ClipperLib::OutPt*  pts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"PointCount", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pts);
}
inline void Pathfinding::ClipperLib::Clipper::BuildResult(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  polyg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"BuildResult", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, polyg);
}
inline void Pathfinding::ClipperLib::Clipper::BuildResult2(::Pathfinding::ClipperLib::PolyTree*  polytree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"BuildResult2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, polytree);
}
inline void Pathfinding::ClipperLib::Clipper::FixupOutPolygon(::Pathfinding::ClipperLib::OutRec*  outRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupOutPolygon", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outRec);
}
inline ::Pathfinding::ClipperLib::OutPt* Pathfinding::ClipperLib::Clipper::DupOutPt(::Pathfinding::ClipperLib::OutPt*  outPt, bool  InsertAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DupOutPt", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ClipperLib::OutPt*>(this, ___internal_method, outPt, InsertAfter);
}
inline bool Pathfinding::ClipperLib::Clipper::GetOverlap(int64_t  a1, int64_t  a2, int64_t  b1, int64_t  b2, ::by_ref<int64_t>  Left, ::by_ref<int64_t>  Right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"GetOverlap", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a1, a2, b1, b2, Left, Right);
}
inline bool Pathfinding::ClipperLib::Clipper::JoinHorz(::Pathfinding::ClipperLib::OutPt*  op1, ::Pathfinding::ClipperLib::OutPt*  op1b, ::Pathfinding::ClipperLib::OutPt*  op2, ::Pathfinding::ClipperLib::OutPt*  op2b, ::Pathfinding::ClipperLib::IntPoint  Pt, bool  DiscardLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"JoinHorz", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::IntPoint>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, op1, op1b, op2, op2b, Pt, DiscardLeft);
}
inline bool Pathfinding::ClipperLib::Clipper::JoinPoints(::Pathfinding::ClipperLib::Join*  j, ::by_ref<::Pathfinding::ClipperLib::OutPt*>  p1, ::by_ref<::Pathfinding::ClipperLib::OutPt*>  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"JoinPoints", {}, {::i2c::type_of<::Pathfinding::ClipperLib::Join*>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::OutPt*>>(), ::i2c::type_of<::by_ref<::Pathfinding::ClipperLib::OutPt*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, j, p1, p2);
}
inline bool Pathfinding::ClipperLib::Clipper::Poly2ContainsPoly1(::Pathfinding::ClipperLib::OutPt*  outPt1, ::Pathfinding::ClipperLib::OutPt*  outPt2, bool  UseFullRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Poly2ContainsPoly1", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutPt*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outPt1, outPt2, UseFullRange);
}
inline void Pathfinding::ClipperLib::Clipper::FixupFirstLefts1(::Pathfinding::ClipperLib::OutRec*  OldOutRec, ::Pathfinding::ClipperLib::OutRec*  NewOutRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupFirstLefts1", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OldOutRec, NewOutRec);
}
inline void Pathfinding::ClipperLib::Clipper::FixupFirstLefts2(::Pathfinding::ClipperLib::OutRec*  OldOutRec, ::Pathfinding::ClipperLib::OutRec*  NewOutRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"FixupFirstLefts2", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>(), ::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OldOutRec, NewOutRec);
}
inline void Pathfinding::ClipperLib::Clipper::JoinCommonEdges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"JoinCommonEdges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::ClipperLib::Clipper::UpdateOutPtIdxs(::Pathfinding::ClipperLib::OutRec*  outrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"UpdateOutPtIdxs", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outrec);
}
inline void Pathfinding::ClipperLib::Clipper::DoSimplePolygons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"DoSimplePolygons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t Pathfinding::ClipperLib::Clipper::Area(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, poly);
}
inline double_t Pathfinding::ClipperLib::Clipper::Area(::Pathfinding::ClipperLib::OutRec*  outRec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::Pathfinding::ClipperLib::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, outRec);
}
inline ::Pathfinding::ClipperLib::Clipper* Pathfinding::ClipperLib::Clipper::New_ctor(int32_t  InitOptions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::Clipper*>(InitOptions));
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::Clipper::Clipper()   {
}
