#pragma once
// IWYU pragma private; include "Steamworks/SteamAPIWarningMessageHook_t.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Steamworks/zzzz__SteamAPIWarningMessageHook_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamAPIWarningMessageHook_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamAPIWarningMessageHook_t::*)(::System::Object*, ::System::IntPtr)>(&::Steamworks::SteamAPIWarningMessageHook_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f3350c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPIWarningMessageHook_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamAPIWarningMessageHook_t.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamAPIWarningMessageHook_t::*)(int32_t, ::System::Text::StringBuilder*)>(&::Steamworks::SteamAPIWarningMessageHook_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f335ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::SteamAPIWarningMessageHook_t*>(),
                    {::i2c::class_of<::Steamworks::SteamAPIWarningMessageHook_t*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::SteamAPIWarningMessageHook_t::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamAPIWarningMessageHook_t*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Steamworks::SteamAPIWarningMessageHook_t::Invoke(int32_t  nSeverity, ::System::Text::StringBuilder*  pchDebugText)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::SteamAPIWarningMessageHook_t*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nSeverity, pchDebugText);
}
inline ::Steamworks::SteamAPIWarningMessageHook_t* Steamworks::SteamAPIWarningMessageHook_t::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::SteamAPIWarningMessageHook_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Steamworks::SteamAPIWarningMessageHook_t::SteamAPIWarningMessageHook_t()   {
}
