#pragma once
// IWYU pragma private; include "Pathfinding/Profile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__Profile_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Pathfinding::Profile.ControlValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Profile::*)()>(&::Pathfinding::Profile::ControlValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebb814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"ControlValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)(::StringW)>(&::Pathfinding::Profile::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ebb81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.WriteCSV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::Pathfinding::Profile*>)>(&::Pathfinding::Profile::WriteCSV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ebb8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"WriteCSV", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Pathfinding::Profile*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)(::System::Action*)>(&::Pathfinding::Profile::Run)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ebb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Run", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)()>(&::Pathfinding::Profile::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ebb8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)()>(&::Pathfinding::Profile::Stop)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ebb8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)()>(&::Pathfinding::Profile::Log)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ebb910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Log", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.ConsoleLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)()>(&::Pathfinding::Profile::ConsoleLog)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ebb980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"ConsoleLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)(int32_t)>(&::Pathfinding::Profile::Stop)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ebb9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Stop", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.Control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Profile::*)(::Pathfinding::Profile*)>(&::Pathfinding::Profile::Control)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ebbae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Control", {}, {::i2c::type_of<::Pathfinding::Profile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Profile.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Profile::*)()>(&::Pathfinding::Profile::ToString)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ebbc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Profile*>(),
                    {::i2c::class_of<::Pathfinding::Profile*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::Profile::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Pathfinding::Profile::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Pathfinding::Profile::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Pathfinding::Profile::__cordl_internal_get_watch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Pathfinding::Profile::__cordl_internal_get_watch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr void Pathfinding::Profile::__cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watch = value;
}
constexpr int32_t& Pathfinding::Profile::__cordl_internal_get_counter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counter;
}
constexpr int32_t const& Pathfinding::Profile::__cordl_internal_get_counter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counter;
}
constexpr void Pathfinding::Profile::__cordl_internal_set_counter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counter = value;
}
constexpr int64_t& Pathfinding::Profile::__cordl_internal_get_mem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mem;
}
constexpr int64_t const& Pathfinding::Profile::__cordl_internal_get_mem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mem;
}
constexpr void Pathfinding::Profile::__cordl_internal_set_mem(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mem = value;
}
constexpr int64_t& Pathfinding::Profile::__cordl_internal_get_smem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smem;
}
constexpr int64_t const& Pathfinding::Profile::__cordl_internal_get_smem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smem;
}
constexpr void Pathfinding::Profile::__cordl_internal_set_smem(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smem = value;
}
constexpr int32_t& Pathfinding::Profile::__cordl_internal_get_control()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___control;
}
constexpr int32_t const& Pathfinding::Profile::__cordl_internal_get_control() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___control;
}
constexpr void Pathfinding::Profile::__cordl_internal_set_control(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___control = value;
}
inline int32_t Pathfinding::Profile::ControlValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"ControlValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Profile::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Pathfinding::Profile::WriteCSV(::StringW  path, /* [ParamArray] */ ::ArrayW<::Pathfinding::Profile*>  profiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"WriteCSV", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Pathfinding::Profile*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, profiles);
}
inline void Pathfinding::Profile::Run(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Run", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::Profile::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Profile::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Profile::Log()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Log", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Profile::ConsoleLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"ConsoleLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Profile::Stop(int32_t  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Stop", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, control);
}
inline void Pathfinding::Profile::Control(::Pathfinding::Profile*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Profile*>(),
                        {"Control", {}, {::i2c::type_of<::Pathfinding::Profile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::StringW Pathfinding::Profile::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Profile*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Pathfinding::Profile* Pathfinding::Profile::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Profile*>(name));
}
// Ctor Parameters []
constexpr ::Pathfinding::Profile::Profile()   {
}
