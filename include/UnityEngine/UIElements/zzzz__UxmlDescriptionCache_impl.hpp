#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlDescriptionCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlDescriptionCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeNames_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlDescriptionCache.RegisterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>)>(&::UnityEngine::UIElements::UxmlDescriptionCache::RegisterType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb7b7368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlDescriptionCache*>(),
                        {"RegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlDescriptionCache::setStaticF_s_NamesPerType(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>*, "s_NamesPerType", ::UnityEngine::UIElements::UxmlDescriptionCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>* UnityEngine::UIElements::UxmlDescriptionCache::getStaticF_s_NamesPerType()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>*, "s_NamesPerType", ::UnityEngine::UIElements::UxmlDescriptionCache*>();
}
inline void UnityEngine::UIElements::UxmlDescriptionCache::RegisterType(::System::Type*  type, ::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>  attributeNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlDescriptionCache*>(),
                        {"RegisterType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::UxmlAttributeNames>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, attributeNames);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlDescriptionCache::UxmlDescriptionCache()   {
}
