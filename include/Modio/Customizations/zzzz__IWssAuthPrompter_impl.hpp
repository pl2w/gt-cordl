#pragma once
// IWYU pragma private; include "Modio/Customizations/IWssAuthPrompter.hpp"
#include "Modio/Customizations/zzzz__IWssAuthPrompter_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::IWssAuthPrompter.ShowPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::IWssAuthPrompter::*)(::StringW, ::StringW)>(&::Modio::Customizations::IWssAuthPrompter::ShowPrompt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::IWssAuthPrompter*>(),
                    {::i2c::class_of<::Modio::Customizations::IWssAuthPrompter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Customizations::IWssAuthPrompter::ShowPrompt(::StringW  url, ::StringW  code)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::IWssAuthPrompter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, code);
}
