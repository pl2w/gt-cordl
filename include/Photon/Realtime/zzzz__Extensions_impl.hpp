#pragma once
// IWYU pragma private; include "Photon/Realtime/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__Extensions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::Extensions.Merge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::System::Collections::IDictionary*)>(&::Photon::Realtime::Extensions::Merge)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa6f7c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"Merge", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.MergeStringKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*, ::System::Collections::IDictionary*)>(&::Photon::Realtime::Extensions::MergeStringKeys)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xa6f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"MergeStringKeys", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::IDictionary*)>(&::Photon::Realtime::Extensions::ToStringFull)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa6f84a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"ToStringFull", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::System::Object*>)>(&::Photon::Realtime::Extensions::ToStringFull)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6f8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"ToStringFull", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.StripToStringKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (*)(::System::Collections::IDictionary*)>(&::Photon::Realtime::Extensions::StripToStringKeys)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa6f863c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripToStringKeys", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.StripToStringKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::Hashtable* (*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::Extensions::StripToStringKeys)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa6f8a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripToStringKeys", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.StripKeysWithNullValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IDictionary*)>(&::Photon::Realtime::Extensions::StripKeysWithNullValues)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0xa6f8b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripKeysWithNullValues", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.StripKeysWithNullValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::Extensions::StripKeysWithNullValues)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa6f914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripKeysWithNullValues", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Extensions.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>, int32_t)>(&::Photon::Realtime::Extensions::Contains)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6f94e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"Contains", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::Extensions::setStaticF_keysWithNullValue(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Object*>*, "keysWithNullValue", ::Photon::Realtime::Extensions*>(std::forward<::System::Collections::Generic::List_1<::System::Object*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Photon::Realtime::Extensions::getStaticF_keysWithNullValue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Object*>*, "keysWithNullValue", ::Photon::Realtime::Extensions*>();
}
inline void Photon::Realtime::Extensions::Merge(::System::Collections::IDictionary*  target, ::System::Collections::IDictionary*  addHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"Merge", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, addHash);
}
inline void Photon::Realtime::Extensions::MergeStringKeys(::System::Collections::IDictionary*  target, ::System::Collections::IDictionary*  addHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"MergeStringKeys", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, addHash);
}
inline ::StringW Photon::Realtime::Extensions::ToStringFull(::System::Collections::IDictionary*  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"ToStringFull", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, origin);
}
template<typename T>
inline ::StringW Photon::Realtime::Extensions::ToStringFull(::System::Collections::Generic::List_1<T>*  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                    {"ToStringFull", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline ::StringW Photon::Realtime::Extensions::ToStringFull(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"ToStringFull", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Realtime::Extensions::StripToStringKeys(::System::Collections::IDictionary*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripToStringKeys", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(nullptr, ___internal_method, original);
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Realtime::Extensions::StripToStringKeys(::ExitGames::Client::Photon::Hashtable*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripToStringKeys", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*>(nullptr, ___internal_method, original);
}
inline void Photon::Realtime::Extensions::StripKeysWithNullValues(::System::Collections::IDictionary*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripKeysWithNullValues", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, original);
}
inline void Photon::Realtime::Extensions::StripKeysWithNullValues(::ExitGames::Client::Photon::Hashtable*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"StripKeysWithNullValues", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, original);
}
inline bool Photon::Realtime::Extensions::Contains(::ArrayW<int32_t>  target, int32_t  nr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Extensions*>(),
                        {"Contains", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, nr);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::Extensions::Extensions()   {
}
