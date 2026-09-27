#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SupportClass.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SupportClass_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SupportClass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* (*)(::System::Type*, ::System::Type*)>(&::ExitGames::Client::Photon::SupportClass::GetMethods)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa6e983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"GetMethods", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.GetTickCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ExitGames::Client::Photon::SupportClass::GetTickCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6e9a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"GetTickCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.StartBackgroundCalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Func_1<bool>*, int32_t, ::StringW)>(&::ExitGames::Client::Photon::SupportClass::StartBackgroundCalls)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0xa6e9a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"StartBackgroundCalls", {}, {::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.StopBackgroundCalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::ExitGames::Client::Photon::SupportClass::StopBackgroundCalls)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa6e9f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"StopBackgroundCalls", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.StopAllBackgroundCalls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::ExitGames::Client::Photon::SupportClass::StopAllBackgroundCalls)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa6ea194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"StopAllBackgroundCalls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.WriteStackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::System::IO::TextWriter*)>(&::ExitGames::Client::Photon::SupportClass::WriteStackTrace)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa6ea460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"WriteStackTrace", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.WriteStackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::ExitGames::Client::Photon::SupportClass::WriteStackTrace)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6ea520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"WriteStackTrace", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.DictionaryToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::IDictionary*, bool)>(&::ExitGames::Client::Photon::SupportClass::DictionaryToString)> {
  constexpr static std::size_t size = 0xe10;
  constexpr static std::size_t addrs = 0xa6ea578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"DictionaryToString", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.DictionaryToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*, bool)>(&::ExitGames::Client::Photon::SupportClass::DictionaryToString)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0xa6eb388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"DictionaryToString", {}, {::i2c::type_of<::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.HashtableToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ExitGames::Client::Photon::Hashtable*)>(&::ExitGames::Client::Photon::SupportClass::HashtableToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6ebe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"HashtableToString", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.ByteArrayToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::SupportClass::ByteArrayToString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6ebe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"ByteArrayToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.InitializeTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (*)(uint32_t)>(&::ExitGames::Client::Photon::SupportClass::InitializeTable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa6ebe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"InitializeTable", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass.CalculateCrc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::ExitGames::Client::Photon::SupportClass::CalculateCrc)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa6ebf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"CalculateCrc", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SupportClass::*)()>(&::ExitGames::Client::Photon::SupportClass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ec060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SupportClass::setStaticF_threadList(::System::Collections::Generic::List_1<::System::Threading::Thread*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Threading::Thread*>*, "threadList", ::ExitGames::Client::Photon::SupportClass*>(std::forward<::System::Collections::Generic::List_1<::System::Threading::Thread*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Threading::Thread*>* ExitGames::Client::Photon::SupportClass::getStaticF_threadList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Threading::Thread*>*, "threadList", ::ExitGames::Client::Photon::SupportClass*>();
}
inline void ExitGames::Client::Photon::SupportClass::setStaticF_ThreadListLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "ThreadListLock", ::ExitGames::Client::Photon::SupportClass*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* ExitGames::Client::Photon::SupportClass::getStaticF_ThreadListLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "ThreadListLock", ::ExitGames::Client::Photon::SupportClass*>();
}
inline void ExitGames::Client::Photon::SupportClass::setStaticF_IntegerMilliseconds(::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*, "IntegerMilliseconds", ::ExitGames::Client::Photon::SupportClass*>(std::forward<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(value));
}
inline ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate* ExitGames::Client::Photon::SupportClass::getStaticF_IntegerMilliseconds()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*, "IntegerMilliseconds", ::ExitGames::Client::Photon::SupportClass*>();
}
inline void ExitGames::Client::Photon::SupportClass::setStaticF_crcLookupTable(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "crcLookupTable", ::ExitGames::Client::Photon::SupportClass*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> ExitGames::Client::Photon::SupportClass::getStaticF_crcLookupTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "crcLookupTable", ::ExitGames::Client::Photon::SupportClass*>();
}
inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* ExitGames::Client::Photon::SupportClass::GetMethods(::System::Type*  type, ::System::Type*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"GetMethods", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>(nullptr, ___internal_method, type, attribute);
}
inline int32_t ExitGames::Client::Photon::SupportClass::GetTickCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"GetTickCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline uint8_t ExitGames::Client::Photon::SupportClass::StartBackgroundCalls(::System::Func_1<bool>*  myThread, int32_t  millisecondsInterval, ::StringW  taskName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"StartBackgroundCalls", {}, {::i2c::type_of<::System::Func_1<bool>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, myThread, millisecondsInterval, taskName);
}
inline bool ExitGames::Client::Photon::SupportClass::StopBackgroundCalls(uint8_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"StopBackgroundCalls", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline bool ExitGames::Client::Photon::SupportClass::StopAllBackgroundCalls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"StopAllBackgroundCalls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void ExitGames::Client::Photon::SupportClass::WriteStackTrace(::System::Exception*  throwable, ::System::IO::TextWriter*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"WriteStackTrace", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, throwable, stream);
}
inline void ExitGames::Client::Photon::SupportClass::WriteStackTrace(::System::Exception*  throwable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"WriteStackTrace", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, throwable);
}
inline ::StringW ExitGames::Client::Photon::SupportClass::DictionaryToString(::System::Collections::IDictionary*  dictionary, bool  includeTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"DictionaryToString", {}, {::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dictionary, includeTypes);
}
inline ::StringW ExitGames::Client::Photon::SupportClass::DictionaryToString(::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*  dictionary, bool  includeTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"DictionaryToString", {}, {::i2c::type_of<::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dictionary, includeTypes);
}
inline ::StringW ExitGames::Client::Photon::SupportClass::HashtableToString(::ExitGames::Client::Photon::Hashtable*  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"HashtableToString", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hash);
}
inline ::StringW ExitGames::Client::Photon::SupportClass::ByteArrayToString(::ArrayW<uint8_t>  list, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"ByteArrayToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, list, length);
}
inline ::ArrayW<uint32_t> ExitGames::Client::Photon::SupportClass::InitializeTable(uint32_t  polynomial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"InitializeTable", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(nullptr, ___internal_method, polynomial);
}
inline uint32_t ExitGames::Client::Photon::SupportClass::CalculateCrc(::ArrayW<uint8_t>  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {"CalculateCrc", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, buffer, length);
}
inline void ExitGames::Client::Photon::SupportClass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::SupportClass* ExitGames::Client::Photon::SupportClass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SupportClass*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SupportClass::SupportClass()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::*)()>(&::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6e9f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0._StartBackgroundCalls_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::*)()>(&::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::_StartBackgroundCalls_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa6ec494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*>(),
                        {"<StartBackgroundCalls>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::__cordl_internal_get_millisecondsInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___millisecondsInterval;
}
constexpr int32_t const& ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::__cordl_internal_get_millisecondsInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___millisecondsInterval;
}
constexpr void ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::__cordl_internal_set_millisecondsInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___millisecondsInterval = value;
}
constexpr ::System::Func_1<bool>*& ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::__cordl_internal_get_myThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myThread;
}
constexpr ::System::Func_1<bool>* const& ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::__cordl_internal_get_myThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myThread;
}
constexpr void ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::__cordl_internal_set_myThread(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myThread = value;
}
inline void ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::_StartBackgroundCalls_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*>(),
                        {"<StartBackgroundCalls>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0* ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SupportClass___c__DisplayClass6_0::SupportClass___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SupportClass___c::*)()>(&::ExitGames::Client::Photon::SupportClass___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ec484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass___c.__cctor_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::SupportClass___c::*)()>(&::ExitGames::Client::Photon::SupportClass___c::__cctor_b__20_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ec48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c*>(),
                        {"<.cctor>b__20_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SupportClass___c::setStaticF___9(::ExitGames::Client::Photon::SupportClass___c*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::SupportClass___c*, "<>9", ::ExitGames::Client::Photon::SupportClass___c*>(std::forward<::ExitGames::Client::Photon::SupportClass___c*>(value));
}
inline ::ExitGames::Client::Photon::SupportClass___c* ExitGames::Client::Photon::SupportClass___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::SupportClass___c*, "<>9", ::ExitGames::Client::Photon::SupportClass___c*>();
}
inline void ExitGames::Client::Photon::SupportClass___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::SupportClass___c::__cctor_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass___c*>(),
                        {"<.cctor>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::SupportClass___c* ExitGames::Client::Photon::SupportClass___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SupportClass___c*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SupportClass___c::SupportClass___c()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::Next)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa6ec25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>(),
                        {"Next", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::*)()>(&::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6ec398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::setStaticF__r(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "_r", ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::getStaticF__r()  {
return ::cordl_internals::getStaticField<::System::Random*, "_r", ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>();
}
inline int32_t ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>(),
                        {"Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom* ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SupportClass_ThreadSafeRandom::SupportClass_ThreadSafeRandom()   {
}
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::*)(::System::Object*, ::System::IntPtr)>(&::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6ec168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::*)()>(&::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6ec204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6ec218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::*)(::System::IAsyncResult*)>(&::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6ec234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline int32_t ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate* ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SupportClass_IntegerMillisecondsDelegate::SupportClass_IntegerMillisecondsDelegate()   {
}
