#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceListener.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Diagnostics/zzzz__TraceListener_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::TraceListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad28544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_Name)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xad28584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_IsThreadSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_IsThreadSafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad285d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad285dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(bool)>(&::System::Diagnostics::TraceListener::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad28648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad2864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_IndentLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(int32_t)>(&::System::Diagnostics::TraceListener::set_IndentLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad28120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"set_IndentLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_IndentSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(int32_t)>(&::System::Diagnostics::TraceListener::set_IndentSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad28138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"set_IndentSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.get_NeedIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::get_NeedIndent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad28650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"get_NeedIndent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.set_NeedIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(bool)>(&::System::Diagnostics::TraceListener::set_NeedIndent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad28658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"set_NeedIndent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)()>(&::System::Diagnostics::TraceListener::WriteIndent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xad28660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::TraceListener.WriteLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::TraceListener::*)(::StringW)>(&::System::Diagnostics::TraceListener::WriteLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                    {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 13}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::Diagnostics::TraceListener::__cordl_internal_get_indentLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentLevel;
}
constexpr int32_t const& System::Diagnostics::TraceListener::__cordl_internal_get_indentLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentLevel;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_indentLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indentLevel = value;
}
constexpr int32_t& System::Diagnostics::TraceListener::__cordl_internal_get_indentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentSize;
}
constexpr int32_t const& System::Diagnostics::TraceListener::__cordl_internal_get_indentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indentSize;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_indentSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indentSize = value;
}
constexpr bool& System::Diagnostics::TraceListener::__cordl_internal_get_needIndent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needIndent;
}
constexpr bool const& System::Diagnostics::TraceListener::__cordl_internal_get_needIndent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needIndent;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_needIndent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needIndent = value;
}
constexpr ::StringW& System::Diagnostics::TraceListener::__cordl_internal_get_listenerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerName;
}
constexpr ::StringW const& System::Diagnostics::TraceListener::__cordl_internal_get_listenerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerName;
}
constexpr void System::Diagnostics::TraceListener::__cordl_internal_set_listenerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerName = value;
}
inline void System::Diagnostics::TraceListener::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Diagnostics::TraceListener::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Diagnostics::TraceListener::get_IsThreadSafe()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::TraceListener::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::set_IndentLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"set_IndentLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::TraceListener::set_IndentSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"set_IndentSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Diagnostics::TraceListener::get_NeedIndent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"get_NeedIndent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::set_NeedIndent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::TraceListener*>(),
                        {"set_NeedIndent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Diagnostics::TraceListener::Write(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Diagnostics::TraceListener::WriteIndent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::TraceListener::WriteLine(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::TraceListener*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::System::Diagnostics::TraceListener* System::Diagnostics::TraceListener::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::TraceListener*>(name));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Diagnostics::TraceListener::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Diagnostics::TraceListener::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceListener::TraceListener()   {
}
