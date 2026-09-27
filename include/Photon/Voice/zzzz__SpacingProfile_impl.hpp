#pragma once
// IWYU pragma private; include "Photon/Voice/SpacingProfile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__SpacingProfile_def.hpp"
#include "Photon/Voice/zzzz__SpacingProfile_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Photon::Voice::SpacingProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::SpacingProfile::*)(int32_t)>(&::Photon::Voice::SpacingProfile::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa74807c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::SpacingProfile.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::SpacingProfile::*)()>(&::Photon::Voice::SpacingProfile::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa7480a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::SpacingProfile.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::SpacingProfile::*)(bool, bool)>(&::Photon::Voice::SpacingProfile::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa748180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"Update", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::SpacingProfile.get_Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::SpacingProfile::*)()>(&::Photon::Voice::SpacingProfile::get_Dump)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa748240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"get_Dump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::SpacingProfile.get_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::SpacingProfile::*)()>(&::Photon::Voice::SpacingProfile::get_Max)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa7484c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"get_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::SpacingProfile._get_Dump_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::SpacingProfile::*)(int16_t, int32_t)>(&::Photon::Voice::SpacingProfile::_get_Dump_b__11_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa7485f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"<get_Dump>b__11_0", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Photon::Voice::SpacingProfile::__cordl_internal_get_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
constexpr ::ArrayW<int16_t> const& Photon::Voice::SpacingProfile::__cordl_internal_get_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_buf(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buf = value;
}
constexpr ::ArrayW<bool>& Photon::Voice::SpacingProfile::__cordl_internal_get_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr ::ArrayW<bool> const& Photon::Voice::SpacingProfile::__cordl_internal_get_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___info;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_info(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___info = value;
}
constexpr int32_t& Photon::Voice::SpacingProfile::__cordl_internal_get_capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capacity;
}
constexpr int32_t const& Photon::Voice::SpacingProfile::__cordl_internal_get_capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capacity;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capacity = value;
}
constexpr int32_t& Photon::Voice::SpacingProfile::__cordl_internal_get_ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ptr;
}
constexpr int32_t const& Photon::Voice::SpacingProfile::__cordl_internal_get_ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ptr;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_ptr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ptr = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Photon::Voice::SpacingProfile::__cordl_internal_get_watch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr ::System::Diagnostics::Stopwatch* const& Photon::Voice::SpacingProfile::__cordl_internal_get_watch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watch = value;
}
constexpr int64_t& Photon::Voice::SpacingProfile::__cordl_internal_get_watchLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchLast;
}
constexpr int64_t const& Photon::Voice::SpacingProfile::__cordl_internal_get_watchLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchLast;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_watchLast(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchLast = value;
}
constexpr bool& Photon::Voice::SpacingProfile::__cordl_internal_get_flushed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flushed;
}
constexpr bool const& Photon::Voice::SpacingProfile::__cordl_internal_get_flushed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flushed;
}
constexpr void Photon::Voice::SpacingProfile::__cordl_internal_set_flushed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flushed = value;
}
inline void Photon::Voice::SpacingProfile::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void Photon::Voice::SpacingProfile::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::SpacingProfile::Update(bool  lost, bool  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"Update", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lost, flush);
}
inline ::StringW Photon::Voice::SpacingProfile::get_Dump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"get_Dump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Photon::Voice::SpacingProfile::get_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"get_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Voice::SpacingProfile::_get_Dump_b__11_0(int16_t  v, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile*>(),
                        {"<get_Dump>b__11_0", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, v, i);
}
inline ::Photon::Voice::SpacingProfile* Photon::Voice::SpacingProfile::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::SpacingProfile*>(capacity));
}
// Ctor Parameters []
constexpr ::Photon::Voice::SpacingProfile::SpacingProfile()   {
}
//  Writing Method size for method: ::Photon::Voice::SpacingProfile___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::SpacingProfile___c::*)()>(&::Photon::Voice::SpacingProfile___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa748708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::SpacingProfile___c._get_Max_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Photon::Voice::SpacingProfile___c::*)(int16_t)>(&::Photon::Voice::SpacingProfile___c::_get_Max_b__13_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa748710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile___c*>(),
                        {"<get_Max>b__13_0", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::SpacingProfile___c::setStaticF___9(::Photon::Voice::SpacingProfile___c*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::SpacingProfile___c*, "<>9", ::Photon::Voice::SpacingProfile___c*>(std::forward<::Photon::Voice::SpacingProfile___c*>(value));
}
inline ::Photon::Voice::SpacingProfile___c* Photon::Voice::SpacingProfile___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Voice::SpacingProfile___c*, "<>9", ::Photon::Voice::SpacingProfile___c*>();
}
inline void Photon::Voice::SpacingProfile___c::setStaticF___9__13_0(::System::Func_2<int16_t,int16_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<int16_t,int16_t>*, "<>9__13_0", ::Photon::Voice::SpacingProfile___c*>(std::forward<::System::Func_2<int16_t,int16_t>*>(value));
}
inline ::System::Func_2<int16_t,int16_t>* Photon::Voice::SpacingProfile___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<int16_t,int16_t>*, "<>9__13_0", ::Photon::Voice::SpacingProfile___c*>();
}
inline void Photon::Voice::SpacingProfile___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int16_t Photon::Voice::SpacingProfile___c::_get_Max_b__13_0(int16_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::SpacingProfile___c*>(),
                        {"<get_Max>b__13_0", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, v);
}
inline ::Photon::Voice::SpacingProfile___c* Photon::Voice::SpacingProfile___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::SpacingProfile___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::SpacingProfile___c::SpacingProfile___c()   {
}
