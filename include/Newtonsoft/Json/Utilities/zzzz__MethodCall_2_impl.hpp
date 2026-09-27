#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MethodCall_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T,typename TResult>
inline void Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T,typename TResult>
inline TResult Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>::Invoke(T  target, /* [ParamArray] [Nullable(new[] { 1, 2 })] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, target, args);
}
template<typename T,typename TResult>
inline ::Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>* Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>*>(object, method));
}
// Ctor Parameters []
template<typename T,typename TResult>
constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>::MethodCall_2()   {
}
