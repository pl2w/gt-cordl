#pragma once
// IWYU pragma private; include "Liv/NGFX/Context.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NGFX/zzzz__Context_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::NGFX::Context._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::Context::*)()>(&::Liv::NGFX::Context::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9cdc254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::Context.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::Context::*)()>(&::Liv::NGFX::Context::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9cdc284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::NGFX::Context*>(),
                    {::i2c::class_of<::Liv::NGFX::Context*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::Context.get_ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Liv::NGFX::Context::*)()>(&::Liv::NGFX::Context::get_ptr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"get_ptr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::Context.get_valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::NGFX::Context::*)()>(&::Liv::NGFX::Context::get_valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"get_valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::Context.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Liv::NGFX::Context*)>(&::Liv::NGFX::Context::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cdc358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::Context*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NGFX::Context.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NGFX::Context::*)()>(&::Liv::NGFX::Context::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cdc320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Liv::NGFX::Context::__cordl_internal_get_m_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
constexpr ::System::IntPtr const& Liv::NGFX::Context::__cordl_internal_get_m_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_context;
}
constexpr void Liv::NGFX::Context::__cordl_internal_set_m_context(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_context = value;
}
constexpr bool& Liv::NGFX::Context::__cordl_internal_get_m_valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
constexpr bool const& Liv::NGFX::Context::__cordl_internal_get_m_valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_valid;
}
constexpr void Liv::NGFX::Context::__cordl_internal_set_m_valid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_valid = value;
}
inline void Liv::NGFX::Context::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NGFX::Context::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::NGFX::Context*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr Liv::NGFX::Context::get_ptr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"get_ptr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline bool Liv::NGFX::Context::get_valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"get_valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr Liv::NGFX::Context::op_Implicit___System__IntPtr(::Liv::NGFX::Context*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Liv::NGFX::Context*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, c);
}
inline void Liv::NGFX::Context::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NGFX::Context*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::NGFX::Context* Liv::NGFX::Context::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NGFX::Context*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::NGFX::Context::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::NGFX::Context::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::NGFX::Context::Context()   {
}
