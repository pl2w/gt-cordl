#pragma once
// IWYU pragma private; include "Pathfinding/Util/TileHandler.hpp"
#include "Pathfinding/Voxels/zzzz__Int3PolygonClipper_impl.hpp"
#include "Pathfinding/zzzz__Int2_impl.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/zzzz__IntRect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__Clipper_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyTree_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Polygon_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Util/zzzz__GridLookup_1_def.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_CutMode_def.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_CuttingResult_def.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_def.hpp"
#include "Pathfinding/zzzz__IWorkItemContext_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/zzzz__NavmeshClipper_def.hpp"
#include "Pathfinding/zzzz__NavmeshCut_def.hpp"
#include "Pathfinding/zzzz__NavmeshTile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.get_isBatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::TileHandler::*)()>(&::Pathfinding::Util::TileHandler::get_isBatching)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ed90c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"get_isBatching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::TileHandler::*)()>(&::Pathfinding::Util::TileHandler::get_isValid)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ed90d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::Pathfinding::NavmeshBase*)>(&::Pathfinding::Util::TileHandler::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5ed912c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.OnRecalculatedTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::ArrayW<::Pathfinding::NavmeshTile*>)>(&::Pathfinding::Util::TileHandler::OnRecalculatedTiles)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed93e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"OnRecalculatedTiles", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.GetActiveRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Util::TileHandler::*)(::Pathfinding::Int2)>(&::Pathfinding::Util::TileHandler::GetActiveRotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ed9a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"GetActiveRotation", {}, {::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.RegisterTileType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::TileHandler_TileType* (::Pathfinding::Util::TileHandler::*)(::UnityEngine::Mesh*, ::Pathfinding::Int3, int32_t, int32_t)>(&::Pathfinding::Util::TileHandler::RegisterTileType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ed9a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"RegisterTileType", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.CreateTileTypesFromGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)()>(&::Pathfinding::Util::TileHandler::CreateTileTypesFromGraph)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ed9df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CreateTileTypesFromGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.UpdateTileType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::Pathfinding::NavmeshTile*)>(&::Pathfinding::Util::TileHandler::UpdateTileType)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ed94a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"UpdateTileType", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.StartBatchLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)()>(&::Pathfinding::Util::TileHandler::StartBatchLoad)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ed96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"StartBatchLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.EndBatchLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)()>(&::Pathfinding::Util::TileHandler::EndBatchLoad)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ed989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"EndBatchLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.CutPoly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TileHandler_CuttingResult (::Pathfinding::Util::TileHandler::*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>, ::ArrayW<::Pathfinding::Int3>, ::Pathfinding::Util::GraphTransform*, ::Pathfinding::IntRect, ::GlobalNamespace::TileHandler_CutMode, int32_t)>(&::Pathfinding::Util::TileHandler::CutPoly)> {
  constexpr static std::size_t size = 0x2298;
  constexpr static std::size_t addrs = 0x5eda1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutPoly", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::GlobalNamespace::TileHandler_CutMode>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.PrepareNavmeshCutsForCutting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>* (*)(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshCut>>*, ::Pathfinding::Util::GraphTransform*, ::Pathfinding::IntRect, int32_t, bool)>(&::Pathfinding::Util::TileHandler::PrepareNavmeshCutsForCutting)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x5edc43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"PrepareNavmeshCutsForCutting", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshCut>>*>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.PoolPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::Polygon*, ::System::Collections::Generic::Stack_1<::Pathfinding::Poly2Tri::Polygon*>*)>(&::Pathfinding::Util::TileHandler::PoolPolygon)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5edd3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"PoolPolygon", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Polygon*>(), ::i2c::type_of<::System::Collections::Generic::Stack_1<::Pathfinding::Poly2Tri::Polygon*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.CutAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*, ::Pathfinding::ClipperLib::PolyTree*)>(&::Pathfinding::Util::TileHandler::CutAll)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5edcef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.CutDual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*, bool, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*, ::Pathfinding::ClipperLib::PolyTree*)>(&::Pathfinding::Util::TileHandler::CutDual)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5edd03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutDual", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.CutExtra
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*, ::Pathfinding::ClipperLib::PolyTree*)>(&::Pathfinding::Util::TileHandler::CutExtra)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5edd310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutExtra", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.ClipAgainstRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Util::TileHandler::*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<::Pathfinding::Int3>, ::Pathfinding::Int2)>(&::Pathfinding::Util::TileHandler::ClipAgainstRectangle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5edce14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ClipAgainstRectangle", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.CopyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>, ::System::Collections::Generic::List_1<::Pathfinding::Int3>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::Pathfinding::Util::TileHandler::CopyMesh)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5edcba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CopyMesh", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.DelaunayRefinement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>, ::by_ref<int32_t>, bool, bool)>(&::Pathfinding::Util::TileHandler::DelaunayRefinement)> {
  constexpr static std::size_t size = 0xda4;
  constexpr static std::size_t addrs = 0x5edd89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"DelaunayRefinement", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.ClearTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(int32_t, int32_t)>(&::Pathfinding::Util::TileHandler::ClearTile)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5ede640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ClearTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.ReloadInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::UnityEngine::Bounds)>(&::Pathfinding::Util::TileHandler::ReloadInBounds)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ede7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ReloadInBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.ReloadInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::Pathfinding::IntRect)>(&::Pathfinding::Util::TileHandler::ReloadInBounds)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ede858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ReloadInBounds", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.ReloadTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(int32_t, int32_t)>(&::Pathfinding::Util::TileHandler::ReloadTile)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ed97f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ReloadTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler.LoadTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler::*)(::Pathfinding::Util::TileHandler_TileType*, int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::Util::TileHandler::LoadTile)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5ede920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"LoadTile", {}, {::i2c::type_of<::Pathfinding::Util::TileHandler_TileType*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler._StartBatchLoad_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::TileHandler::*)(bool)>(&::Pathfinding::Util::TileHandler::_StartBatchLoad_b__23_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5edecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"<StartBatchLoad>b__23_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler._EndBatchLoad_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::TileHandler::*)(::Pathfinding::IWorkItemContext*, bool)>(&::Pathfinding::Util::TileHandler::_EndBatchLoad_b__24_0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5edece4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"<EndBatchLoad>b__24_0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::NavmeshBase*& Pathfinding::Util::TileHandler::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::NavmeshBase* const& Pathfinding::Util::TileHandler::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler::__cordl_internal_get_tileXCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileXCount;
}
constexpr int32_t const& Pathfinding::Util::TileHandler::__cordl_internal_get_tileXCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileXCount;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_tileXCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileXCount = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler::__cordl_internal_get_tileZCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileZCount;
}
constexpr int32_t const& Pathfinding::Util::TileHandler::__cordl_internal_get_tileZCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileZCount;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_tileZCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileZCount = value;
}
constexpr ::Pathfinding::ClipperLib::Clipper*& Pathfinding::Util::TileHandler::__cordl_internal_get_clipper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipper;
}
constexpr ::Pathfinding::ClipperLib::Clipper* const& Pathfinding::Util::TileHandler::__cordl_internal_get_clipper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipper;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_clipper(::Pathfinding::ClipperLib::Clipper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipper = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*& Pathfinding::Util::TileHandler::__cordl_internal_get_cached_Int2_int_dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cached_Int2_int_dict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>* const& Pathfinding::Util::TileHandler::__cordl_internal_get_cached_Int2_int_dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cached_Int2_int_dict;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_cached_Int2_int_dict(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cached_Int2_int_dict = value;
}
constexpr ::ArrayW<::Pathfinding::Util::TileHandler_TileType*>& Pathfinding::Util::TileHandler::__cordl_internal_get_activeTileTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTileTypes;
}
constexpr ::ArrayW<::Pathfinding::Util::TileHandler_TileType*> const& Pathfinding::Util::TileHandler::__cordl_internal_get_activeTileTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTileTypes;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_activeTileTypes(::ArrayW<::Pathfinding::Util::TileHandler_TileType*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTileTypes = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Util::TileHandler::__cordl_internal_get_activeTileRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTileRotations;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Util::TileHandler::__cordl_internal_get_activeTileRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTileRotations;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_activeTileRotations(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTileRotations = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Util::TileHandler::__cordl_internal_get_activeTileOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTileOffsets;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Util::TileHandler::__cordl_internal_get_activeTileOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTileOffsets;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_activeTileOffsets(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTileOffsets = value;
}
constexpr ::ArrayW<bool>& Pathfinding::Util::TileHandler::__cordl_internal_get_reloadedInBatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadedInBatch;
}
constexpr ::ArrayW<bool> const& Pathfinding::Util::TileHandler::__cordl_internal_get_reloadedInBatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadedInBatch;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_reloadedInBatch(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reloadedInBatch = value;
}
constexpr ::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>*& Pathfinding::Util::TileHandler::__cordl_internal_get_cuts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuts;
}
constexpr ::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>* const& Pathfinding::Util::TileHandler::__cordl_internal_get_cuts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cuts;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_cuts(::Pathfinding::Util::GridLookup_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cuts = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler::__cordl_internal_get_batchDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchDepth;
}
constexpr int32_t const& Pathfinding::Util::TileHandler::__cordl_internal_get_batchDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchDepth;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_batchDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batchDepth = value;
}
constexpr ::Pathfinding::Voxels::Int3PolygonClipper& Pathfinding::Util::TileHandler::__cordl_internal_get_simpleClipper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simpleClipper;
}
constexpr ::Pathfinding::Voxels::Int3PolygonClipper const& Pathfinding::Util::TileHandler::__cordl_internal_get_simpleClipper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simpleClipper;
}
constexpr void Pathfinding::Util::TileHandler::__cordl_internal_set_simpleClipper(::Pathfinding::Voxels::Int3PolygonClipper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simpleClipper = value;
}
inline bool Pathfinding::Util::TileHandler::get_isBatching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"get_isBatching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Util::TileHandler::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Util::TileHandler::_ctor(::Pathfinding::NavmeshBase*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::NavmeshBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Pathfinding::Util::TileHandler::OnRecalculatedTiles(::ArrayW<::Pathfinding::NavmeshTile*>  recalculatedTiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"OnRecalculatedTiles", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavmeshTile*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recalculatedTiles);
}
inline int32_t Pathfinding::Util::TileHandler::GetActiveRotation(::Pathfinding::Int2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"GetActiveRotation", {}, {::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline ::Pathfinding::Util::TileHandler_TileType* Pathfinding::Util::TileHandler::RegisterTileType(::UnityEngine::Mesh*  source, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"RegisterTileType", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::TileHandler_TileType*>(this, ___internal_method, source, centerOffset, width, depth);
}
inline void Pathfinding::Util::TileHandler::CreateTileTypesFromGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CreateTileTypesFromGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::TileHandler::UpdateTileType(::Pathfinding::NavmeshTile*  tile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"UpdateTileType", {}, {::i2c::type_of<::Pathfinding::NavmeshTile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile);
}
inline void Pathfinding::Util::TileHandler::StartBatchLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"StartBatchLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Util::TileHandler::EndBatchLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"EndBatchLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TileHandler_CuttingResult Pathfinding::Util::TileHandler::CutPoly(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::ArrayW<::Pathfinding::Int3>  extraShape, ::Pathfinding::Util::GraphTransform*  graphTransform, ::Pathfinding::IntRect  tiles, ::GlobalNamespace::TileHandler_CutMode  mode, int32_t  perturbate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutPoly", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::GlobalNamespace::TileHandler_CutMode>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TileHandler_CuttingResult>(this, ___internal_method, verts, tris, extraShape, graphTransform, tiles, mode, perturbate);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>* Pathfinding::Util::TileHandler::PrepareNavmeshCutsForCutting(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshCut>>*  navmeshCuts, ::Pathfinding::Util::GraphTransform*  transform, ::Pathfinding::IntRect  cutSpaceBounds, int32_t  perturbate, bool  anyNavmeshAdds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"PrepareNavmeshCutsForCutting", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshCut>>*>(), ::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*>(nullptr, ___internal_method, navmeshCuts, transform, cutSpaceBounds, perturbate, anyNavmeshAdds);
}
inline void Pathfinding::Util::TileHandler::PoolPolygon(::Pathfinding::Poly2Tri::Polygon*  polygon, ::System::Collections::Generic::Stack_1<::Pathfinding::Poly2Tri::Polygon*>*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"PoolPolygon", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Polygon*>(), ::i2c::type_of<::System::Collections::Generic::Stack_1<::Pathfinding::Poly2Tri::Polygon*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, polygon, pool);
}
inline void Pathfinding::Util::TileHandler::CutAll(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly, ::System::Collections::Generic::List_1<int32_t>*  intersectingCutIndices, ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*  cuts, ::Pathfinding::ClipperLib::PolyTree*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poly, intersectingCutIndices, cuts, result);
}
inline void Pathfinding::Util::TileHandler::CutDual(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly, ::System::Collections::Generic::List_1<int32_t>*  tmpIntersectingCuts, ::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*  cuts, bool  hasDual, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*  intermediateResult, ::Pathfinding::ClipperLib::PolyTree*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutDual", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Util::TileHandler_Cut*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poly, tmpIntersectingCuts, cuts, hasDual, intermediateResult, result);
}
inline void Pathfinding::Util::TileHandler::CutExtra(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  poly, ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  extraClipShape, ::Pathfinding::ClipperLib::PolyTree*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CutExtra", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*>(), ::i2c::type_of<::Pathfinding::ClipperLib::PolyTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poly, extraClipShape, result);
}
inline int32_t Pathfinding::Util::TileHandler::ClipAgainstRectangle(::ArrayW<::Pathfinding::Int3>  clipIn, ::ArrayW<::Pathfinding::Int3>  clipOut, ::Pathfinding::Int2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ClipAgainstRectangle", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clipIn, clipOut, size);
}
inline void Pathfinding::Util::TileHandler::CopyMesh(::ArrayW<::Pathfinding::Int3>  vertices, ::ArrayW<int32_t>  triangles, ::System::Collections::Generic::List_1<::Pathfinding::Int3>*  outVertices, ::System::Collections::Generic::List_1<int32_t>*  outTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"CopyMesh", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::Int3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, triangles, outVertices, outTriangles);
}
inline void Pathfinding::Util::TileHandler::DelaunayRefinement(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::by_ref<int32_t>  tCount, bool  delaunay, bool  colinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"DelaunayRefinement", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, tris, tCount, delaunay, colinear);
}
inline void Pathfinding::Util::TileHandler::ClearTile(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ClearTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline void Pathfinding::Util::TileHandler::ReloadInBounds(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ReloadInBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void Pathfinding::Util::TileHandler::ReloadInBounds(::Pathfinding::IntRect  tiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ReloadInBounds", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tiles);
}
inline void Pathfinding::Util::TileHandler::ReloadTile(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"ReloadTile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline void Pathfinding::Util::TileHandler::LoadTile(::Pathfinding::Util::TileHandler_TileType*  tile, int32_t  x, int32_t  z, int32_t  rotation, int32_t  yoffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"LoadTile", {}, {::i2c::type_of<::Pathfinding::Util::TileHandler_TileType*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tile, x, z, rotation, yoffset);
}
inline bool Pathfinding::Util::TileHandler::_StartBatchLoad_b__23_0(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"<StartBatchLoad>b__23_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline bool Pathfinding::Util::TileHandler::_EndBatchLoad_b__24_0(::Pathfinding::IWorkItemContext*  ctx, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler*>(),
                        {"<EndBatchLoad>b__24_0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ctx, force);
}
inline ::Pathfinding::Util::TileHandler* Pathfinding::Util::TileHandler::New_ctor(::Pathfinding::NavmeshBase*  graph)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::TileHandler*>(graph));
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::TileHandler::TileHandler()   {
}
//  Writing Method size for method: ::Pathfinding::Util::TileHandler___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler___c__DisplayClass41_0::*)()>(&::Pathfinding::Util::TileHandler___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edf23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler___c__DisplayClass41_0._LoadTile_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::TileHandler___c__DisplayClass41_0::*)(::Pathfinding::IWorkItemContext*, bool)>(&::Pathfinding::Util::TileHandler___c__DisplayClass41_0::_LoadTile_b__0)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5edf244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass41_0*>(),
                        {"<LoadTile>b__0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Util::TileHandler*& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::Util::TileHandler* const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set___4__this(::Pathfinding::Util::TileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_yoffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yoffset;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_yoffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yoffset;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set_yoffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yoffset = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set_rotation(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::Pathfinding::Util::TileHandler_TileType*& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_tile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tile;
}
constexpr ::Pathfinding::Util::TileHandler_TileType* const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_tile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tile;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set_tile(::Pathfinding::Util::TileHandler_TileType*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tile = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set_x(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_get_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass41_0::__cordl_internal_set_z(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___z = value;
}
inline void Pathfinding::Util::TileHandler___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Util::TileHandler___c__DisplayClass41_0::_LoadTile_b__0(::Pathfinding::IWorkItemContext*  context, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass41_0*>(),
                        {"<LoadTile>b__0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, force);
}
inline ::Pathfinding::Util::TileHandler___c__DisplayClass41_0* Pathfinding::Util::TileHandler___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::TileHandler___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::TileHandler___c__DisplayClass41_0::TileHandler___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::Pathfinding::Util::TileHandler___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler___c__DisplayClass37_0::*)()>(&::Pathfinding::Util::TileHandler___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edf0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler___c__DisplayClass37_0._ClearTile_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Util::TileHandler___c__DisplayClass37_0::*)(::Pathfinding::IWorkItemContext*, bool)>(&::Pathfinding::Util::TileHandler___c__DisplayClass37_0::_ClearTile_b__0)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5edf0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass37_0*>(),
                        {"<ClearTile>b__0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Util::TileHandler*& Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::Util::TileHandler* const& Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_set___4__this(::Pathfinding::Util::TileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_set_x(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_get_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr int32_t const& Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_get_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr void Pathfinding::Util::TileHandler___c__DisplayClass37_0::__cordl_internal_set_z(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___z = value;
}
inline void Pathfinding::Util::TileHandler___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass37_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Util::TileHandler___c__DisplayClass37_0::_ClearTile_b__0(::Pathfinding::IWorkItemContext*  context, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler___c__DisplayClass37_0*>(),
                        {"<ClearTile>b__0", {}, {::i2c::type_of<::Pathfinding::IWorkItemContext*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, force);
}
inline ::Pathfinding::Util::TileHandler___c__DisplayClass37_0* Pathfinding::Util::TileHandler___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::TileHandler___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::TileHandler___c__DisplayClass37_0::TileHandler___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::Pathfinding::Util::TileHandler_Cut._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler_Cut::*)()>(&::Pathfinding::Util::TileHandler_Cut::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edf098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_Cut*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::IntRect& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::Pathfinding::IntRect const& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::Util::TileHandler_Cut::__cordl_internal_set_bounds(::Pathfinding::IntRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::Pathfinding::Int2& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_boundsY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsY;
}
constexpr ::Pathfinding::Int2 const& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_boundsY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsY;
}
constexpr void Pathfinding::Util::TileHandler_Cut::__cordl_internal_set_boundsY(::Pathfinding::Int2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundsY = value;
}
constexpr bool& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_isDual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDual;
}
constexpr bool const& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_isDual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDual;
}
constexpr void Pathfinding::Util::TileHandler_Cut::__cordl_internal_set_isDual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDual = value;
}
constexpr bool& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_cutsAddedGeom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutsAddedGeom;
}
constexpr bool const& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_cutsAddedGeom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutsAddedGeom;
}
constexpr void Pathfinding::Util::TileHandler_Cut::__cordl_internal_set_cutsAddedGeom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutsAddedGeom = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_contour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contour;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* const& Pathfinding::Util::TileHandler_Cut::__cordl_internal_get_contour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contour;
}
constexpr void Pathfinding::Util::TileHandler_Cut::__cordl_internal_set_contour(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contour = value;
}
inline void Pathfinding::Util::TileHandler_Cut::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_Cut*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::TileHandler_Cut* Pathfinding::Util::TileHandler_Cut::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::TileHandler_Cut*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::TileHandler_Cut::TileHandler_Cut()   {
}
//  Writing Method size for method: ::Pathfinding::Util::TileHandler_TileType.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Util::TileHandler_TileType::*)()>(&::Pathfinding::Util::TileHandler_TileType::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ededa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler_TileType.get_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Util::TileHandler_TileType::*)()>(&::Pathfinding::Util::TileHandler_TileType::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ededb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {"get_Depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler_TileType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler_TileType::*)(::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>, ::Pathfinding::Int3, ::Pathfinding::Int3, int32_t, int32_t)>(&::Pathfinding::Util::TileHandler_TileType::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5ed9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler_TileType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler_TileType::*)(::UnityEngine::Mesh*, ::Pathfinding::Int3, ::Pathfinding::Int3, int32_t, int32_t)>(&::Pathfinding::Util::TileHandler_TileType::_ctor)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5ed9b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::TileHandler_TileType.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Util::TileHandler_TileType::*)(::by_ref<::ArrayW<::Pathfinding::Int3>>, ::by_ref<::ArrayW<int32_t>>, int32_t, int32_t)>(&::Pathfinding::Util::TileHandler_TileType::Load)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5ededb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {"Load", {}, {::i2c::type_of<::by_ref<::ArrayW<::Pathfinding::Int3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Pathfinding::Int3>& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_verts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr ::ArrayW<::Pathfinding::Int3> const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_verts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verts;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_verts(::ArrayW<::Pathfinding::Int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verts = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_tris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_tris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tris;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_tris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tris = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_offset(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_lastYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastYOffset;
}
constexpr int32_t const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_lastYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastYOffset;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_lastYOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastYOffset = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_lastRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotation;
}
constexpr int32_t const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_lastRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRotation;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_lastRotation(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRotation = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr int32_t const& Pathfinding::Util::TileHandler_TileType::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void Pathfinding::Util::TileHandler_TileType::__cordl_internal_set_depth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
inline void Pathfinding::Util::TileHandler_TileType::setStaticF_Rotations(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "Rotations", ::Pathfinding::Util::TileHandler_TileType*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Util::TileHandler_TileType::getStaticF_Rotations()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "Rotations", ::Pathfinding::Util::TileHandler_TileType*>();
}
inline int32_t Pathfinding::Util::TileHandler_TileType::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Util::TileHandler_TileType::get_Depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {"get_Depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Util::TileHandler_TileType::_ctor(::ArrayW<::Pathfinding::Int3>  sourceVerts, ::ArrayW<int32_t>  sourceTris, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceVerts, sourceTris, tileSize, centerOffset, width, depth);
}
inline void Pathfinding::Util::TileHandler_TileType::_ctor(::UnityEngine::Mesh*  source, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, tileSize, centerOffset, width, depth);
}
inline void Pathfinding::Util::TileHandler_TileType::Load(::by_ref<::ArrayW<::Pathfinding::Int3>>  verts, ::by_ref<::ArrayW<int32_t>>  tris, int32_t  rotation, int32_t  yoffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::TileHandler_TileType*>(),
                        {"Load", {}, {::i2c::type_of<::by_ref<::ArrayW<::Pathfinding::Int3>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, tris, rotation, yoffset);
}
inline ::Pathfinding::Util::TileHandler_TileType* Pathfinding::Util::TileHandler_TileType::New_ctor(::ArrayW<::Pathfinding::Int3>  sourceVerts, ::ArrayW<int32_t>  sourceTris, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::TileHandler_TileType*>(sourceVerts, sourceTris, tileSize, centerOffset, width, depth));
}
inline ::Pathfinding::Util::TileHandler_TileType* Pathfinding::Util::TileHandler_TileType::New_ctor(::UnityEngine::Mesh*  source, ::Pathfinding::Int3  tileSize, ::Pathfinding::Int3  centerOffset, int32_t  width, int32_t  depth)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::TileHandler_TileType*>(source, tileSize, centerOffset, width, depth));
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::TileHandler_TileType::TileHandler_TileType()   {
}
