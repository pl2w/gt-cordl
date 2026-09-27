#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SerializationCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SerializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationCallback::*)(::System::Object*, ::System::IntPtr)>(&::Newtonsoft::Json::Serialization::SerializationCallback::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa3b346c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationCallback::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::Serialization::SerializationCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa3b3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationCallback*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::SerializationCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Newtonsoft::Json::Serialization::SerializationCallback::Invoke(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, context);
}
inline ::Newtonsoft::Json::Serialization::SerializationCallback* Newtonsoft::Json::Serialization::SerializationCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::SerializationCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::SerializationCallback::SerializationCallback()   {
}
