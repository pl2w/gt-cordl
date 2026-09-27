#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisOwner.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::IInputAxisOwner.GetInputAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::IInputAxisOwner::*)(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*)>(&::Unity::Cinemachine::IInputAxisOwner::GetInputAxes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::IInputAxisOwner*>(),
                    {::i2c::class_of<::Unity::Cinemachine::IInputAxisOwner*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::IInputAxisOwner::GetInputAxes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  axes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::IInputAxisOwner*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axes);
}
//  Writing Method size for method: ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaeb7b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::*)()>(&::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb7b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(),
                    {::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::*)(::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeb7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(),
                    {::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb7bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(),
                    {::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter* Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::AxisDescriptor_IInputAxisOwner_AxisGetter::AxisDescriptor_IInputAxisOwner_AxisGetter()   {
}
