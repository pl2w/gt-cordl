#pragma once
// IWYU pragma private; include "Modio/Authentication/IEmailCodePrompter.hpp"
#include "Modio/Authentication/zzzz__IEmailCodePrompter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Authentication::IEmailCodePrompter.ShowCodePrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Authentication::IEmailCodePrompter::*)()>(&::Modio::Authentication::IEmailCodePrompter::ShowCodePrompt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Authentication::IEmailCodePrompter*>(),
                    {::i2c::class_of<::Modio::Authentication::IEmailCodePrompter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Authentication::IEmailCodePrompter::ShowCodePrompt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Authentication::IEmailCodePrompter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
