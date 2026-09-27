#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationUtil_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Orientation_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationUtil.SmartIncircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::TriangulationUtil::SmartIncircle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa6b5994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationUtil*>(),
                        {"SmartIncircle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationUtil.InScanArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::TriangulationUtil::InScanArea)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6b509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationUtil*>(),
                        {"InScanArea", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationUtil.Orient2d
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::Orientation (*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::TriangulationUtil::Orient2d)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa6b3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationUtil*>(),
                        {"Orient2d", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Poly2Tri::TriangulationUtil::setStaticF_EPSILON(double_t  value)  {
::cordl_internals::setStaticField<double_t, "EPSILON", ::Pathfinding::Poly2Tri::TriangulationUtil*>(std::forward<double_t>(value));
}
inline double_t Pathfinding::Poly2Tri::TriangulationUtil::getStaticF_EPSILON()  {
return ::cordl_internals::getStaticField<double_t, "EPSILON", ::Pathfinding::Poly2Tri::TriangulationUtil*>();
}
inline bool Pathfinding::Poly2Tri::TriangulationUtil::SmartIncircle(::Pathfinding::Poly2Tri::TriangulationPoint*  pa, ::Pathfinding::Poly2Tri::TriangulationPoint*  pb, ::Pathfinding::Poly2Tri::TriangulationPoint*  pc, ::Pathfinding::Poly2Tri::TriangulationPoint*  pd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationUtil*>(),
                        {"SmartIncircle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pa, pb, pc, pd);
}
inline bool Pathfinding::Poly2Tri::TriangulationUtil::InScanArea(::Pathfinding::Poly2Tri::TriangulationPoint*  pa, ::Pathfinding::Poly2Tri::TriangulationPoint*  pb, ::Pathfinding::Poly2Tri::TriangulationPoint*  pc, ::Pathfinding::Poly2Tri::TriangulationPoint*  pd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationUtil*>(),
                        {"InScanArea", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pa, pb, pc, pd);
}
inline ::Pathfinding::Poly2Tri::Orientation Pathfinding::Poly2Tri::TriangulationUtil::Orient2d(::Pathfinding::Poly2Tri::TriangulationPoint*  pa, ::Pathfinding::Poly2Tri::TriangulationPoint*  pb, ::Pathfinding::Poly2Tri::TriangulationPoint*  pc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationUtil*>(),
                        {"Orient2d", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::Orientation>(nullptr, ___internal_method, pa, pb, pc);
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::TriangulationUtil::TriangulationUtil()   {
}
