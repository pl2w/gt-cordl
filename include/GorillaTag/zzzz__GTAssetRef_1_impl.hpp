#pragma once
// IWYU pragma private; include "GorillaTag/GTAssetRef_1.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_impl.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
template<typename TObject>
inline void GorillaTag::GTAssetRef_1<TObject>::_ctor(::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTAssetRef_1<TObject>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
template<typename TObject>
inline ::GorillaTag::GTAssetRef_1<TObject>* GorillaTag::GTAssetRef_1<TObject>::New_ctor(::StringW  guid)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GTAssetRef_1<TObject>*>(guid));
}
// Ctor Parameters []
template<typename TObject>
constexpr ::GorillaTag::GTAssetRef_1<TObject>::GTAssetRef_1()   {
}
