#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionQuery.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/zzzz__CosmeticExclusionQuery_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery.IsRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*, ::UnityEngine::GameObject*)>(&::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery::IsRestricted)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d4db98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery*>(),
                        {"IsRestricted", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery::IsRestricted(::GlobalNamespace::VRRig*  ownerRig, ::UnityEngine::GameObject*  effectSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery*>(),
                        {"IsRestricted", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ownerRig, effectSource);
}
// Ctor Parameters []
constexpr ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery::CosmeticExclusionQuery()   {
}
