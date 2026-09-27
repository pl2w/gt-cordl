#pragma once
// IWYU pragma private; include "GorillaTag/DeactivateOnAwake.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__DeactivateOnAwake_def.hpp"
//  Writing Method size for method: ::GorillaTag::DeactivateOnAwake.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DeactivateOnAwake::*)()>(&::GorillaTag::DeactivateOnAwake::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d23fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DeactivateOnAwake*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::DeactivateOnAwake._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::DeactivateOnAwake::*)()>(&::GorillaTag::DeactivateOnAwake::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d24044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DeactivateOnAwake*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::DeactivateOnAwake::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DeactivateOnAwake*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::DeactivateOnAwake::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::DeactivateOnAwake*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::DeactivateOnAwake* GorillaTag::DeactivateOnAwake::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::DeactivateOnAwake*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::DeactivateOnAwake::DeactivateOnAwake()   {
}
