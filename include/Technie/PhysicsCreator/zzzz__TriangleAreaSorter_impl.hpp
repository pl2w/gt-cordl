#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/TriangleAreaSorter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__TriangleAreaSorter_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__Triangle_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleAreaSorter.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::TriangleAreaSorter::*)(::Technie::PhysicsCreator::Triangle*, ::Technie::PhysicsCreator::Triangle*)>(&::Technie::PhysicsCreator::TriangleAreaSorter::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xadc5010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleAreaSorter*>(),
                        {"Compare", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>(), ::i2c::type_of<::Technie::PhysicsCreator::Triangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleAreaSorter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleAreaSorter::*)()>(&::Technie::PhysicsCreator::TriangleAreaSorter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc5050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleAreaSorter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Technie::PhysicsCreator::TriangleAreaSorter::Compare(::Technie::PhysicsCreator::Triangle*  lhs, ::Technie::PhysicsCreator::Triangle*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleAreaSorter*>(),
                        {"Compare", {}, {::i2c::type_of<::Technie::PhysicsCreator::Triangle*>(), ::i2c::type_of<::Technie::PhysicsCreator::Triangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Technie::PhysicsCreator::TriangleAreaSorter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleAreaSorter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::TriangleAreaSorter* Technie::PhysicsCreator::TriangleAreaSorter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::TriangleAreaSorter*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>"
constexpr  Technie::PhysicsCreator::TriangleAreaSorter::operator ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>"
constexpr ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>* Technie::PhysicsCreator::TriangleAreaSorter::i___System__Collections__Generic__IComparer_1___Technie__PhysicsCreator__Triangle__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::Triangle*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::TriangleAreaSorter::TriangleAreaSorter()   {
}
