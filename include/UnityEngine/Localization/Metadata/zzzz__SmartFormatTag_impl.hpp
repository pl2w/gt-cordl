#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SmartFormatTag.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SmartFormatTag_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SmartFormatTag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SmartFormatTag::*)()>(&::UnityEngine::Localization::Metadata::SmartFormatTag::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb051548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SmartFormatTag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Metadata::SmartFormatTag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SmartFormatTag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::SmartFormatTag* UnityEngine::Localization::Metadata::SmartFormatTag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::SmartFormatTag*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::SmartFormatTag::SmartFormatTag()   {
}
