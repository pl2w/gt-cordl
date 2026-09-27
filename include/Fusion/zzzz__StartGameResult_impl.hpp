#pragma once
// IWYU pragma private; include "Fusion/StartGameResult.hpp"
#include "Fusion/zzzz__ShutdownReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__StartGameResult_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Fusion::StartGameResult.get_Ok
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::StartGameResult::*)()>(&::Fusion::StartGameResult::get_Ok)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fdcc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_Ok", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.get_ShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ShutdownReason (::Fusion::StartGameResult::*)()>(&::Fusion::StartGameResult::get_ShutdownReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_ShutdownReason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.set_ShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::StartGameResult::*)(::Fusion::ShutdownReason)>(&::Fusion::StartGameResult::set_ShutdownReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"set_ShutdownReason", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.get_ErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::StartGameResult::*)()>(&::Fusion::StartGameResult::get_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_ErrorMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.set_ErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::StartGameResult::*)(::StringW)>(&::Fusion::StartGameResult::set_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdcca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"set_ErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.get_StackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::StartGameResult::*)()>(&::Fusion::StartGameResult::get_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdccac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_StackTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.set_StackTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::StartGameResult::*)(::StringW)>(&::Fusion::StartGameResult::set_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdccb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"set_StackTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::StartGameResult::*)(::Fusion::ShutdownReason, ::StringW, ::StringW)>(&::Fusion::StartGameResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fd4530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ShutdownReason>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::StartGameResult::*)()>(&::Fusion::StartGameResult::ToString)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5fdccbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::StartGameResult*>(),
                    {::i2c::class_of<::Fusion::StartGameResult*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameResult.BuildGameResultFromException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::StartGameResult* (*)(::System::Exception*)>(&::Fusion::StartGameResult::BuildGameResultFromException)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5fd4ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"BuildGameResultFromException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::ShutdownReason& Fusion::StartGameResult::__cordl_internal_get__ShutdownReason_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShutdownReason_k__BackingField;
}
constexpr ::Fusion::ShutdownReason const& Fusion::StartGameResult::__cordl_internal_get__ShutdownReason_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShutdownReason_k__BackingField;
}
constexpr void Fusion::StartGameResult::__cordl_internal_set__ShutdownReason_k__BackingField(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShutdownReason_k__BackingField = value;
}
constexpr ::StringW& Fusion::StartGameResult::__cordl_internal_get__ErrorMessage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorMessage_k__BackingField;
}
constexpr ::StringW const& Fusion::StartGameResult::__cordl_internal_get__ErrorMessage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorMessage_k__BackingField;
}
constexpr void Fusion::StartGameResult::__cordl_internal_set__ErrorMessage_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorMessage_k__BackingField = value;
}
constexpr ::StringW& Fusion::StartGameResult::__cordl_internal_get__StackTrace_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StackTrace_k__BackingField;
}
constexpr ::StringW const& Fusion::StartGameResult::__cordl_internal_get__StackTrace_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StackTrace_k__BackingField;
}
constexpr void Fusion::StartGameResult::__cordl_internal_set__StackTrace_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StackTrace_k__BackingField = value;
}
inline bool Fusion::StartGameResult::get_Ok()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_Ok", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::ShutdownReason Fusion::StartGameResult::get_ShutdownReason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_ShutdownReason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ShutdownReason>(this, ___internal_method);
}
inline void Fusion::StartGameResult::set_ShutdownReason(::Fusion::ShutdownReason  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"set_ShutdownReason", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::StartGameResult::get_ErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_ErrorMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::StartGameResult::set_ErrorMessage(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"set_ErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::StartGameResult::get_StackTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"get_StackTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::StartGameResult::set_StackTrace(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"set_StackTrace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::StartGameResult::_ctor(::Fusion::ShutdownReason  reason, ::StringW  message, ::StringW  stackTrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ShutdownReason>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason, message, stackTrace);
}
inline ::StringW Fusion::StartGameResult::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::StartGameResult*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::StartGameResult* Fusion::StartGameResult::BuildGameResultFromException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameResult*>(),
                        {"BuildGameResultFromException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::StartGameResult*>(nullptr, ___internal_method, e);
}
inline ::Fusion::StartGameResult* Fusion::StartGameResult::New_ctor(::Fusion::ShutdownReason  reason, ::StringW  message, ::StringW  stackTrace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::StartGameResult*>(reason, message, stackTrace));
}
// Ctor Parameters []
constexpr ::Fusion::StartGameResult::StartGameResult()   {
}
