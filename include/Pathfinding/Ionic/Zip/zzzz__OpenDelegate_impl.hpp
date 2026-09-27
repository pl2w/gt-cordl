#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/OpenDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__OpenDelegate_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::OpenDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::OpenDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Pathfinding::Ionic::Zip::OpenDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa68bc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::OpenDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::OpenDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::OpenDelegate::*)(::StringW)>(&::Pathfinding::Ionic::Zip::OpenDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa68bd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::OpenDelegate*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::OpenDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::OpenDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::OpenDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::OpenDelegate::Invoke(::StringW  entryName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::OpenDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, entryName);
}
inline ::Pathfinding::Ionic::Zip::OpenDelegate* Pathfinding::Ionic::Zip::OpenDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::OpenDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::OpenDelegate::OpenDelegate()   {
}
