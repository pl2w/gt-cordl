#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LocMinSorter.hpp"
#include "Unity/Cinemachine/zzzz__LocMinSorter_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Unity/Cinemachine/zzzz__LocalMinima_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::LocMinSorter.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::LocMinSorter::*)(::Unity::Cinemachine::LocalMinima, ::Unity::Cinemachine::LocalMinima)>(&::Unity::Cinemachine::LocMinSorter::Compare)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaeef358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocMinSorter>(),
                        {"Compare", {}, {::i2c::type_of<::Unity::Cinemachine::LocalMinima>(), ::i2c::type_of<::Unity::Cinemachine::LocalMinima>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Cinemachine::LocMinSorter::Compare(::Unity::Cinemachine::LocalMinima  locMin1, ::Unity::Cinemachine::LocalMinima  locMin2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LocMinSorter>(),
                        {"Compare", {}, {::i2c::type_of<::Unity::Cinemachine::LocalMinima>(), ::i2c::type_of<::Unity::Cinemachine::LocalMinima>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, locMin1, locMin2);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>"
constexpr  Unity::Cinemachine::LocMinSorter::operator ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>"
constexpr ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>* Unity::Cinemachine::LocMinSorter::i___System__Collections__Generic__IComparer_1___Unity__Cinemachine__LocalMinima_()  {
return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::LocalMinima>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::LocMinSorter::LocMinSorter()   {
}
