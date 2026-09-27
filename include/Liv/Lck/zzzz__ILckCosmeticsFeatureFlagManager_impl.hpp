#pragma once
// IWYU pragma private; include "Liv/Lck/ILckCosmeticsFeatureFlagManager.hpp"
#include "Liv/Lck/zzzz__ILckCosmeticsFeatureFlagManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckCosmeticsFeatureFlagManager.IsEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Liv::Lck::ILckCosmeticsFeatureFlagManager::*)()>(&::Liv::Lck::ILckCosmeticsFeatureFlagManager::IsEnabledAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>(),
                    {::i2c::class_of<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* Liv::Lck::ILckCosmeticsFeatureFlagManager::IsEnabledAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckCosmeticsFeatureFlagManager*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
