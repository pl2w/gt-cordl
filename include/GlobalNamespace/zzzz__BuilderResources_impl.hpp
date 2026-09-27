#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResources.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderResources_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceQuantity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderResources::*)()>(&::GlobalNamespace::BuilderResources::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d78b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>*& GlobalNamespace::BuilderResources::__cordl_internal_get_quantities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quantities;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>* const& GlobalNamespace::BuilderResources::__cordl_internal_get_quantities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quantities;
}
constexpr void GlobalNamespace::BuilderResources::__cordl_internal_set_quantities(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceQuantity>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quantities = value;
}
inline void GlobalNamespace::BuilderResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderResources* GlobalNamespace::BuilderResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderResources*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderResources::BuilderResources()   {
}
