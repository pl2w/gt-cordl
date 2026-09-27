#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ObjectConstructor_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline ::System::Object* Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::Invoke(/* [ParamArray] [Nullable(new[] { 1, 2 })] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
template<typename T>
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>* Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>::ObjectConstructor_1()   {
}
