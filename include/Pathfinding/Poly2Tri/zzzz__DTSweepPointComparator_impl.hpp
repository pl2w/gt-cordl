#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepPointComparator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepPointComparator_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepPointComparator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepPointComparator::*)()>(&::Pathfinding::Poly2Tri::DTSweepPointComparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepPointComparator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepPointComparator.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Poly2Tri::DTSweepPointComparator::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepPointComparator::Compare)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa6b63fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepPointComparator*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Poly2Tri::DTSweepPointComparator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepPointComparator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Poly2Tri::DTSweepPointComparator::Compare(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepPointComparator*>(),
                        {"Compare", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p1, p2);
}
inline ::Pathfinding::Poly2Tri::DTSweepPointComparator* Pathfinding::Poly2Tri::DTSweepPointComparator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::DTSweepPointComparator*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>"
constexpr  Pathfinding::Poly2Tri::DTSweepPointComparator::operator ::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* Pathfinding::Poly2Tri::DTSweepPointComparator::i___System__Collections__Generic__IComparer_1___Pathfinding__Poly2Tri__TriangulationPoint__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweepPointComparator::DTSweepPointComparator()   {
}
