#pragma once
// IWYU pragma private; include "BoingKit/BoingManagerPreUpdatePump.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BoingKit/zzzz__BoingManagerPreUpdatePump_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingManagerPreUpdatePump.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManagerPreUpdatePump::*)()>(&::BoingKit::BoingManagerPreUpdatePump::FixedUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManagerPreUpdatePump.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManagerPreUpdatePump::*)()>(&::BoingKit::BoingManagerPreUpdatePump::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManagerPreUpdatePump.TryPump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManagerPreUpdatePump::*)()>(&::BoingKit::BoingManagerPreUpdatePump::TryPump)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e1b650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"TryPump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManagerPreUpdatePump.DoPump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManagerPreUpdatePump::*)()>(&::BoingKit::BoingManagerPreUpdatePump::DoPump)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e1b698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"DoPump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingManagerPreUpdatePump._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingManagerPreUpdatePump::*)()>(&::BoingKit::BoingManagerPreUpdatePump::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e1b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& BoingKit::BoingManagerPreUpdatePump::__cordl_internal_get_m_lastPumpedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastPumpedFrame;
}
constexpr int32_t const& BoingKit::BoingManagerPreUpdatePump::__cordl_internal_get_m_lastPumpedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastPumpedFrame;
}
constexpr void BoingKit::BoingManagerPreUpdatePump::__cordl_internal_set_m_lastPumpedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lastPumpedFrame = value;
}
inline void BoingKit::BoingManagerPreUpdatePump::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingManagerPreUpdatePump::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingManagerPreUpdatePump::TryPump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"TryPump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingManagerPreUpdatePump::DoPump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {"DoPump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingManagerPreUpdatePump::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingManagerPreUpdatePump*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingManagerPreUpdatePump* BoingKit::BoingManagerPreUpdatePump::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingManagerPreUpdatePump*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingManagerPreUpdatePump::BoingManagerPreUpdatePump()   {
}
