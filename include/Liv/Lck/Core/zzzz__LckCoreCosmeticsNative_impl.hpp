#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreCosmeticsNative.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__LckCoreCosmeticsNative_def.hpp"
#include "Liv/Lck/Core/zzzz__CosmeticsReturnCode_def.hpp"
#include "Liv/Lck/Core/zzzz__LckCoreCosmeticsNative_def.hpp"
#include "Liv/Lck/Core/zzzz__SerializationType_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative.get_user_cosmetics_for_session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::CosmeticsReturnCode (*)(::System::IntPtr, ::System::UIntPtr, ::System::IntPtr, ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative::get_user_cosmetics_for_session)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d00fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative*>(),
                        {"get_user_cosmetics_for_session", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative.get_local_user_cosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::CosmeticsReturnCode (*)(::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative::get_local_user_cosmetics)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d01048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative*>(),
                        {"get_local_user_cosmetics", {}, {::i2c::type_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative.announce_player_presence_for_session
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::CosmeticsReturnCode (*)(::System::IntPtr, ::System::IntPtr, ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative::announce_player_presence_for_session)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d010c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative*>(),
                        {"announce_player_presence_for_session", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Core::CosmeticsReturnCode Liv::Lck::Core::LckCoreCosmeticsNative::get_user_cosmetics_for_session(::System::IntPtr  player_ids_array_ptr, ::System::UIntPtr  player_ids_len, ::System::IntPtr  session_id, ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*  on_cosmetic_available)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative*>(),
                        {"get_user_cosmetics_for_session", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::CosmeticsReturnCode>(nullptr, ___internal_method, player_ids_array_ptr, player_ids_len, session_id, on_cosmetic_available);
}
inline ::Liv::Lck::Core::CosmeticsReturnCode Liv::Lck::Core::LckCoreCosmeticsNative::get_local_user_cosmetics(::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*  on_cosmetic_available)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative*>(),
                        {"get_local_user_cosmetics", {}, {::i2c::type_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::CosmeticsReturnCode>(nullptr, ___internal_method, on_cosmetic_available);
}
inline ::Liv::Lck::Core::CosmeticsReturnCode Liv::Lck::Core::LckCoreCosmeticsNative::announce_player_presence_for_session(::System::IntPtr  player_id, ::System::IntPtr  session_id, ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*  on_presence_expiry_received)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative*>(),
                        {"announce_player_presence_for_session", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::CosmeticsReturnCode>(nullptr, ___internal_method, player_id, session_id, on_presence_expiry_received);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreCosmeticsNative::LckCoreCosmeticsNative()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d01400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::*)(::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d014a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::*)(::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d014b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d01570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::Invoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialized_cosmetic_data_ptr, serialized_data_length, serialization_type);
}
inline ::System::IAsyncResult* Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::BeginInvoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, serialized_cosmetic_data_ptr, serialized_data_length, serialization_type, callback, object);
}
inline void Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate* Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d01284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::*)(::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d01324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::*)(::System::IntPtr, ::System::UIntPtr, ::Liv::Lck::Core::SerializationType, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d01338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d013f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::Invoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialized_cosmetic_data_ptr, serialized_data_length, serialization_type);
}
inline ::System::IAsyncResult* Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::BeginInvoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, serialized_cosmetic_data_ptr, serialized_data_length, serialization_type, callback, object);
}
inline void Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate* Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate()   {
}
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d01168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::*)(uint64_t)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d01208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d0121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d01278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(),
                    {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::Invoke(uint64_t  time_until_expiration_seconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time_until_expiration_seconds);
}
inline ::System::IAsyncResult* Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::BeginInvoke(uint64_t  time_until_expiration_seconds, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, time_until_expiration_seconds, callback, object);
}
inline void Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate* Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate()   {
}
