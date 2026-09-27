#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefHubIdSO.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefIdBaseSO_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHubIdSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefHubIdSO::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHubIdSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d453f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GuidedRefs::GuidedRefHubIdSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::GuidedRefs::GuidedRefHubIdSO* GorillaTag::GuidedRefs::GuidedRefHubIdSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefHubIdSO::GuidedRefHubIdSO()   {
}
