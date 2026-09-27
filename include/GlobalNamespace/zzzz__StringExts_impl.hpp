#pragma once
// IWYU pragma private; include "GlobalNamespace/StringExts.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StringExts_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringExts.EscapeCsv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::StringExts::EscapeCsv)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a211b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringExts*>(),
                        {"EscapeCsv", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StringExts::setStaticF__escapeChars(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_escapeChars", ::GlobalNamespace::StringExts*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> GlobalNamespace::StringExts::getStaticF__escapeChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_escapeChars", ::GlobalNamespace::StringExts*>();
}
inline ::StringW GlobalNamespace::StringExts::EscapeCsv(::StringW  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringExts*>(),
                        {"EscapeCsv", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, field);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringExts::StringExts()   {
}
