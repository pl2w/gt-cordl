#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/IEntryOverride.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IEntryOverride_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__EntryOverrideType_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::IEntryOverride.GetOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::EntryOverrideType (::UnityEngine::Localization::Metadata::IEntryOverride::*)(::by_ref<::UnityEngine::Localization::Tables::TableReference>, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>)>(&::UnityEngine::Localization::Metadata::IEntryOverride::GetOverride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::IEntryOverride*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::IEntryOverride*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Localization::Metadata::EntryOverrideType UnityEngine::Localization::Metadata::IEntryOverride::GetOverride(::by_ref<::UnityEngine::Localization::Tables::TableReference>  tableReference, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>  tableEntryReference)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::IEntryOverride*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::EntryOverrideType>(this, ___internal_method, tableReference, tableEntryReference);
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::IEntryOverride::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::IEntryOverride::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
