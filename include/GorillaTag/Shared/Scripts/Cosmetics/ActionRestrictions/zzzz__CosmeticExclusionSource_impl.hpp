#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__CosmeticExclusionSource_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource.IsRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::IsRestricted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d4dd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*>(),
                        {"IsRestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::*)()>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4df9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::IsRestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*>(),
                        {"IsRestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource* GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource::CosmeticExclusionSource()   {
}
