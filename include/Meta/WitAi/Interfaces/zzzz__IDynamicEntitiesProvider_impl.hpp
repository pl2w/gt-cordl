#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IDynamicEntitiesProvider.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider.GetDynamicEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (::Meta::WitAi::Interfaces::IDynamicEntitiesProvider::*)()>(&::Meta::WitAi::Interfaces::IDynamicEntitiesProvider::GetDynamicEntities)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Interfaces::IDynamicEntitiesProvider::GetDynamicEntities()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(this, ___internal_method);
}
