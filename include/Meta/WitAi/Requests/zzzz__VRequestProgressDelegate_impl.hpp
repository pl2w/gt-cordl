#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestProgressDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestProgressDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequestProgressDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequestProgressDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::Requests::VRequestProgressDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e87674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequestProgressDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequestProgressDelegate::*)(float_t)>(&::Meta::WitAi::Requests::VRequestProgressDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e87714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Requests::VRequestProgressDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::WitAi::Requests::VRequestProgressDelegate::Invoke(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline ::Meta::WitAi::Requests::VRequestProgressDelegate* Meta::WitAi::Requests::VRequestProgressDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequestProgressDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate::VRequestProgressDelegate()   {
}
