#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/TriangleBucketSorter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__TriangleBucketSorter_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__TriangleBucket_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucketSorter.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::TriangleBucketSorter::*)(::Technie::PhysicsCreator::TriangleBucket*, ::Technie::PhysicsCreator::TriangleBucket*)>(&::Technie::PhysicsCreator::TriangleBucketSorter::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xadc5058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucketSorter*>(),
                        {"Compare", {}, {::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>(), ::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::TriangleBucketSorter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::TriangleBucketSorter::*)()>(&::Technie::PhysicsCreator::TriangleBucketSorter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc5098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucketSorter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Technie::PhysicsCreator::TriangleBucketSorter::Compare(::Technie::PhysicsCreator::TriangleBucket*  lhs, ::Technie::PhysicsCreator::TriangleBucket*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucketSorter*>(),
                        {"Compare", {}, {::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>(), ::i2c::type_of<::Technie::PhysicsCreator::TriangleBucket*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Technie::PhysicsCreator::TriangleBucketSorter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::TriangleBucketSorter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::TriangleBucketSorter* Technie::PhysicsCreator::TriangleBucketSorter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::TriangleBucketSorter*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>"
constexpr  Technie::PhysicsCreator::TriangleBucketSorter::operator ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>"
constexpr ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>* Technie::PhysicsCreator::TriangleBucketSorter::i___System__Collections__Generic__IComparer_1___Technie__PhysicsCreator__TriangleBucket__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::TriangleBucket*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::TriangleBucketSorter::TriangleBucketSorter()   {
}
