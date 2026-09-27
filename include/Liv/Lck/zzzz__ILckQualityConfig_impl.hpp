#pragma once
// IWYU pragma private; include "Liv/Lck/ILckQualityConfig.hpp"
#include "Liv/Lck/zzzz__ILckQualityConfig_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckQualityConfig.GetQualityOptionsForSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* (::Liv::Lck::ILckQualityConfig::*)()>(&::Liv::Lck::ILckQualityConfig::GetQualityOptionsForSystem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckQualityConfig*>(),
                    {::i2c::class_of<::Liv::Lck::ILckQualityConfig*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* Liv::Lck::ILckQualityConfig::GetQualityOptionsForSystem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckQualityConfig*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*>(this, ___internal_method);
}
