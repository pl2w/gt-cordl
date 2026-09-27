#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GRef_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GRef_EResolveModes_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GRef.ShouldResolveNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GRef_EResolveModes)>(&::GorillaTag::GuidedRefs::GRef::ShouldResolveNow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d43fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GRef*>(),
                        {"ShouldResolveNow", {}, {::i2c::type_of<::GlobalNamespace::GRef_EResolveModes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GRef.IsAnyResolveModeOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GRef_EResolveModes)>(&::GorillaTag::GuidedRefs::GRef::IsAnyResolveModeOn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d44034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GRef*>(),
                        {"IsAnyResolveModeOn", {}, {::i2c::type_of<::GlobalNamespace::GRef_EResolveModes>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GorillaTag::GuidedRefs::GRef::ShouldResolveNow(::GlobalNamespace::GRef_EResolveModes  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GRef*>(),
                        {"ShouldResolveNow", {}, {::i2c::type_of<::GlobalNamespace::GRef_EResolveModes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
inline bool GorillaTag::GuidedRefs::GRef::IsAnyResolveModeOn(::GlobalNamespace::GRef_EResolveModes  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GRef*>(),
                        {"IsAnyResolveModeOn", {}, {::i2c::type_of<::GlobalNamespace::GRef_EResolveModes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GRef::GRef()   {
}
