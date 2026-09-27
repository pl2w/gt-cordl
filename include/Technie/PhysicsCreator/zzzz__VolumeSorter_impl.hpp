#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/VolumeSorter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__VolumeSorter_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Technie/PhysicsCreator/zzzz__RotatedBox_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::VolumeSorter.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::VolumeSorter::*)(::Technie::PhysicsCreator::RotatedBox*, ::Technie::PhysicsCreator::RotatedBox*)>(&::Technie::PhysicsCreator::VolumeSorter::Compare)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xadc64d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::VolumeSorter*>(),
                        {"Compare", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>(), ::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::VolumeSorter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::VolumeSorter::*)()>(&::Technie::PhysicsCreator::VolumeSorter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc6598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::VolumeSorter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Technie::PhysicsCreator::VolumeSorter::Compare(::Technie::PhysicsCreator::RotatedBox*  lhs, ::Technie::PhysicsCreator::RotatedBox*  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::VolumeSorter*>(),
                        {"Compare", {}, {::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>(), ::i2c::type_of<::Technie::PhysicsCreator::RotatedBox*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lhs, rhs);
}
inline void Technie::PhysicsCreator::VolumeSorter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::VolumeSorter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::VolumeSorter* Technie::PhysicsCreator::VolumeSorter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::VolumeSorter*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>"
constexpr  Technie::PhysicsCreator::VolumeSorter::operator ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>"
constexpr ::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>* Technie::PhysicsCreator::VolumeSorter::i___System__Collections__Generic__IComparer_1___Technie__PhysicsCreator__RotatedBox__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Technie::PhysicsCreator::RotatedBox*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::VolumeSorter::VolumeSorter()   {
}
