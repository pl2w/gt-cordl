#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerPositionOverrides.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BetterBakerPositionOverrides_def.hpp"
#include "GlobalNamespace/zzzz__BetterBakerPositionOverrides_OverridePosition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetterBakerPositionOverrides._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterBakerPositionOverrides::*)()>(&::GlobalNamespace::BetterBakerPositionOverrides::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae1e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBakerPositionOverrides*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*& GlobalNamespace::BetterBakerPositionOverrides::__cordl_internal_get_overridePositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridePositions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>* const& GlobalNamespace::BetterBakerPositionOverrides::__cordl_internal_get_overridePositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridePositions;
}
constexpr void GlobalNamespace::BetterBakerPositionOverrides::__cordl_internal_set_overridePositions(::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overridePositions = value;
}
inline void GlobalNamespace::BetterBakerPositionOverrides::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterBakerPositionOverrides*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterBakerPositionOverrides* GlobalNamespace::BetterBakerPositionOverrides::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterBakerPositionOverrides*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterBakerPositionOverrides::BetterBakerPositionOverrides()   {
}
