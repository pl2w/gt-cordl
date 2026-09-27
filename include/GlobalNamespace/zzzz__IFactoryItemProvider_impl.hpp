#pragma once
// IWYU pragma private; include "GlobalNamespace/IFactoryItemProvider.hpp"
#include "GlobalNamespace/zzzz__IFactoryItemProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IFactoryItemProvider.GetFactoryItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::IFactoryItemProvider::*)()>(&::GlobalNamespace::IFactoryItemProvider::GetFactoryItems)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IFactoryItemProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::IFactoryItemProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::IFactoryItemProvider::GetFactoryItems()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFactoryItemProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method);
}
