#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefTargetIdSO.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefIdBaseSO_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefTargetIdSO::*)()>(&::GorillaTag::GuidedRefs::GuidedRefTargetIdSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d45414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GuidedRefs::GuidedRefTargetIdSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO* GorillaTag::GuidedRefs::GuidedRefTargetIdSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO::GuidedRefTargetIdSO()   {
}
