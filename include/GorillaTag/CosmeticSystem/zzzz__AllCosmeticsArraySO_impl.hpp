#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/AllCosmeticsArraySO.hpp"
#include "GorillaTag/zzzz__GTDirectAssetRef_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__AllCosmeticsArraySO_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::AllCosmeticsArraySO.SearchForCosmeticSO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> (::GorillaTag::CosmeticSystem::AllCosmeticsArraySO::*)(::StringW)>(&::GorillaTag::CosmeticSystem::AllCosmeticsArraySO::SearchForCosmeticSO)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d46ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>(),
                        {"SearchForCosmeticSO", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::AllCosmeticsArraySO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticSystem::AllCosmeticsArraySO::*)()>(&::GorillaTag::CosmeticSystem::AllCosmeticsArraySO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d46be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>>& GorillaTag::CosmeticSystem::AllCosmeticsArraySO::__cordl_internal_get_sturdyAssetRefs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sturdyAssetRefs;
}
constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>> const& GorillaTag::CosmeticSystem::AllCosmeticsArraySO::__cordl_internal_get_sturdyAssetRefs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sturdyAssetRefs;
}
constexpr void GorillaTag::CosmeticSystem::AllCosmeticsArraySO::__cordl_internal_set_sturdyAssetRefs(::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sturdyAssetRefs = value;
}
inline ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> GorillaTag::CosmeticSystem::AllCosmeticsArraySO::SearchForCosmeticSO(::StringW  playfabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>(),
                        {"SearchForCosmeticSO", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>(this, ___internal_method, playfabId);
}
inline void GorillaTag::CosmeticSystem::AllCosmeticsArraySO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::CosmeticSystem::AllCosmeticsArraySO* GorillaTag::CosmeticSystem::AllCosmeticsArraySO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::AllCosmeticsArraySO::AllCosmeticsArraySO()   {
}
