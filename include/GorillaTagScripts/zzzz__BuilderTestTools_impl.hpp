#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTestTools.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTestTools_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderTestTools.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTestTools::*)()>(&::GorillaTagScripts::BuilderTestTools::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bb5884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTestTools*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTestTools._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTestTools::*)()>(&::GorillaTagScripts::BuilderTestTools::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb58dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTestTools*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderTestTools::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTestTools*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTestTools::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTestTools*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTestTools* GorillaTagScripts::BuilderTestTools::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTestTools*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTestTools::BuilderTestTools()   {
}
