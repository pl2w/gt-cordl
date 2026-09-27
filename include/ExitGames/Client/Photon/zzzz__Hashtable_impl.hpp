#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Hashtable.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DictionaryEntryEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.GetBoxedByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(uint8_t)>(&::ExitGames::Client::Photon::Hashtable::GetBoxedByte)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6b786c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"GetBoxedByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Hashtable::*)()>(&::ExitGames::Client::Photon::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa6b79fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Hashtable::*)(int32_t)>(&::ExitGames::Client::Photon::Hashtable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b7a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Hashtable::*)(::System::Object*)>(&::ExitGames::Client::Photon::Hashtable::get_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa6b7a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Hashtable::*)(::System::Object*, ::System::Object*)>(&::ExitGames::Client::Photon::Hashtable::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa6b7b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Hashtable::*)(uint8_t)>(&::ExitGames::Client::Photon::Hashtable::get_Item)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa6b7b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"get_Item", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Hashtable::*)(uint8_t, ::System::Object*)>(&::ExitGames::Client::Photon::Hashtable::set_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6b7c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"set_Item", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Hashtable::*)(uint8_t, ::System::Object*)>(&::ExitGames::Client::Photon::Hashtable::Add)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6b7cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"Add", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::Hashtable::*)(uint8_t)>(&::ExitGames::Client::Photon::Hashtable::Remove)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6b7d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"Remove", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ExitGames::Client::Photon::Hashtable::*)(uint8_t)>(&::ExitGames::Client::Photon::Hashtable::ContainsKey)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6b7e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"ContainsKey", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DictionaryEntryEnumerator (::ExitGames::Client::Photon::Hashtable::*)()>(&::ExitGames::Client::Photon::Hashtable::GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6b7eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ExitGames::Client::Photon::Hashtable::*)()>(&::ExitGames::Client::Photon::Hashtable::ToString)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0xa6b7f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Hashtable.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::ExitGames::Client::Photon::Hashtable::*)()>(&::ExitGames::Client::Photon::Hashtable::Clone)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6b851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::Hashtable::setStaticF_boxedByte(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "boxedByte", ::ExitGames::Client::Photon::Hashtable*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> ExitGames::Client::Photon::Hashtable::getStaticF_boxedByte()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "boxedByte", ::ExitGames::Client::Photon::Hashtable*>();
}
inline ::System::Object* ExitGames::Client::Photon::Hashtable::GetBoxedByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"GetBoxedByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value);
}
inline void ExitGames::Client::Photon::Hashtable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::Hashtable::_ctor(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::System::Object* ExitGames::Client::Photon::Hashtable::get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void ExitGames::Client::Photon::Hashtable::set_Item(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Object* ExitGames::Client::Photon::Hashtable::get_Item(uint8_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"get_Item", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void ExitGames::Client::Photon::Hashtable::set_Item(uint8_t  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"set_Item", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void ExitGames::Client::Photon::Hashtable::Add(uint8_t  k, ::System::Object*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"Add", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, k, v);
}
inline void ExitGames::Client::Photon::Hashtable::Remove(uint8_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"Remove", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, k);
}
inline bool ExitGames::Client::Photon::Hashtable::ContainsKey(uint8_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"ContainsKey", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::ExitGames::Client::Photon::DictionaryEntryEnumerator ExitGames::Client::Photon::Hashtable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DictionaryEntryEnumerator>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::Hashtable::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* ExitGames::Client::Photon::Hashtable::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::Hashtable*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::Hashtable* ExitGames::Client::Photon::Hashtable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Hashtable*>());
}
inline ::ExitGames::Client::Photon::Hashtable* ExitGames::Client::Photon::Hashtable::New_ctor(int32_t  x)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::Hashtable*>(x));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Hashtable::Hashtable()   {
}
