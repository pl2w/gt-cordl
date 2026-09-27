#pragma once
// IWYU pragma private; include "Modio/Platforms/IVirtualKeyboardHandler.hpp"
#include "Modio/Platforms/zzzz__IVirtualKeyboardHandler_def.hpp"
#include "Modio/Platforms/zzzz__ModioVirtualKeyboardType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Modio::Platforms::IVirtualKeyboardHandler.OpenVirtualKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Platforms::IVirtualKeyboardHandler::*)(::StringW, ::StringW, ::StringW, ::Modio::Platforms::ModioVirtualKeyboardType, int32_t, bool, ::System::Action_1<::StringW>*)>(&::Modio::Platforms::IVirtualKeyboardHandler::OpenVirtualKeyboard)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Platforms::IVirtualKeyboardHandler*>(),
                    {::i2c::class_of<::Modio::Platforms::IVirtualKeyboardHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::Platforms::IVirtualKeyboardHandler::OpenVirtualKeyboard(::StringW  title, ::StringW  text, ::StringW  placeholder, ::Modio::Platforms::ModioVirtualKeyboardType  virtualKeyboardType, int32_t  characterLimit, bool  multiline, ::System::Action_1<::StringW>*  onClose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Platforms::IVirtualKeyboardHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, text, placeholder, virtualKeyboardType, characterLimit, multiline, onClose);
}
