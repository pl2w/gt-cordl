#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/CloseDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CloseDelegate_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::CloseDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::CloseDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Pathfinding::Ionic::Zip::CloseDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa68bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::CloseDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::CloseDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::CloseDelegate::*)(::StringW, ::System::IO::Stream*)>(&::Pathfinding::Ionic::Zip::CloseDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa68bdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::CloseDelegate*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::CloseDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::CloseDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::CloseDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Pathfinding::Ionic::Zip::CloseDelegate::Invoke(::StringW  entryName, ::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::CloseDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryName, stream);
}
inline ::Pathfinding::Ionic::Zip::CloseDelegate* Pathfinding::Ionic::Zip::CloseDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::CloseDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::CloseDelegate::CloseDelegate()   {
}
