#pragma once
// IWYU pragma private; include "Viveport/Core/Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/Core/zzzz__Logger_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Viveport::Core::Logger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Viveport::Core::Logger::Log)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b52c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Core::Logger.ConsoleLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Viveport::Core::Logger::ConsoleLog)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b5a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"ConsoleLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Core::Logger.UnityLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Viveport::Core::Logger::UnityLog)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5b5a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"UnityLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Core::Logger.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::Viveport::Core::Logger::GetType)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b5a950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Core::Logger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Core::Logger::*)()>(&::Viveport::Core::Logger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5aa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::Core::Logger::setStaticF__hasDetected(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasDetected", ::Viveport::Core::Logger*>(std::forward<bool>(value));
}
inline bool Viveport::Core::Logger::getStaticF__hasDetected()  {
return ::cordl_internals::getStaticField<bool, "_hasDetected", ::Viveport::Core::Logger*>();
}
inline void Viveport::Core::Logger::setStaticF__usingUnityLog(bool  value)  {
::cordl_internals::setStaticField<bool, "_usingUnityLog", ::Viveport::Core::Logger*>(std::forward<bool>(value));
}
inline bool Viveport::Core::Logger::getStaticF__usingUnityLog()  {
return ::cordl_internals::getStaticField<bool, "_usingUnityLog", ::Viveport::Core::Logger*>();
}
inline void Viveport::Core::Logger::setStaticF__unityLogType(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "_unityLogType", ::Viveport::Core::Logger*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* Viveport::Core::Logger::getStaticF__unityLogType()  {
return ::cordl_internals::getStaticField<::System::Type*, "_unityLogType", ::Viveport::Core::Logger*>();
}
inline void Viveport::Core::Logger::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Viveport::Core::Logger::ConsoleLog(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"ConsoleLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Viveport::Core::Logger::UnityLog(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"UnityLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::System::Type* Viveport::Core::Logger::GetType(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName);
}
inline void Viveport::Core::Logger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Core::Logger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Core::Logger* Viveport::Core::Logger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Core::Logger*>());
}
// Ctor Parameters []
constexpr ::Viveport::Core::Logger::Logger()   {
}
