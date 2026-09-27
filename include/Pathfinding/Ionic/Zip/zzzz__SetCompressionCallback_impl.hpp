#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/SetCompressionCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__SetCompressionCallback_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SetCompressionCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::SetCompressionCallback::*)(::System::Object*, ::System::IntPtr)>(&::Pathfinding::Ionic::Zip::SetCompressionCallback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa68be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::SetCompressionCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionLevel (::Pathfinding::Ionic::Zip::SetCompressionCallback::*)(::StringW, ::StringW)>(&::Pathfinding::Ionic::Zip::SetCompressionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa68bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(),
                    {::i2c::class_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Ionic::Zip::SetCompressionCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Pathfinding::Ionic::Zlib::CompressionLevel Pathfinding::Ionic::Zip::SetCompressionCallback::Invoke(::StringW  localFileName, ::StringW  fileNameInArchive)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionLevel>(this, ___internal_method, localFileName, fileNameInArchive);
}
inline ::Pathfinding::Ionic::Zip::SetCompressionCallback* Pathfinding::Ionic::Zip::SetCompressionCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::SetCompressionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback::SetCompressionCallback()   {
}
