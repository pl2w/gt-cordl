#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/ExcludeEntryFromExport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__ExcludeEntryFromExport_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::ExcludeEntryFromExport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::ExcludeEntryFromExport::*)()>(&::UnityEngine::Localization::Metadata::ExcludeEntryFromExport::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::ExcludeEntryFromExport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Metadata::ExcludeEntryFromExport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::ExcludeEntryFromExport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::ExcludeEntryFromExport* UnityEngine::Localization::Metadata::ExcludeEntryFromExport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::ExcludeEntryFromExport*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::ExcludeEntryFromExport::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::ExcludeEntryFromExport::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::ExcludeEntryFromExport::ExcludeEntryFromExport()   {
}
