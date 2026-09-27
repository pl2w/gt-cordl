#pragma once
// IWYU pragma private; include "Utilities/PathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Utilities/zzzz__PathUtils_def.hpp"
//  Writing Method size for method: ::Utilities::PathUtils.Resolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::Utilities::PathUtils::Resolve)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b710dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::PathUtils*>(),
                        {"Resolve", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Utilities::PathUtils::setStaticF_kPathSeps(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "kPathSeps", ::Utilities::PathUtils*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Utilities::PathUtils::getStaticF_kPathSeps()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "kPathSeps", ::Utilities::PathUtils*>();
}
inline ::StringW Utilities::PathUtils::Resolve(/* [ParamArray] */ ::ArrayW<::StringW>  subPaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::PathUtils*>(),
                        {"Resolve", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, subPaths);
}
// Ctor Parameters []
constexpr ::Utilities::PathUtils::PathUtils()   {
}
