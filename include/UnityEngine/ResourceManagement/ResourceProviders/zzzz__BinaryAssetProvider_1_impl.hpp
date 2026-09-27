#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryAssetProvider_1.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryAssetProvider_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename TAdapter>
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::Convert(::System::Type*  type, ::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, data);
}
template<typename TAdapter>
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAdapter>
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>* UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>*>());
}
// Ctor Parameters []
template<typename TAdapter>
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryAssetProvider_1<TAdapter>::BinaryAssetProvider_1()   {
}
