#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/BasicPBRGlobals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Demo/zzzz__BasicPBRGlobals_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Demo::BasicPBRGlobals.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::BasicPBRGlobals::*)()>(&::Oculus::Interaction::Demo::BasicPBRGlobals::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4320a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::BasicPBRGlobals*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::BasicPBRGlobals.UpateShaderGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::BasicPBRGlobals::*)()>(&::Oculus::Interaction::Demo::BasicPBRGlobals::UpateShaderGlobals)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa4320a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::BasicPBRGlobals*>(),
                        {"UpateShaderGlobals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Demo::BasicPBRGlobals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Demo::BasicPBRGlobals::*)()>(&::Oculus::Interaction::Demo::BasicPBRGlobals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa432208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::BasicPBRGlobals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& Oculus::Interaction::Demo::BasicPBRGlobals::__cordl_internal_get__mainlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainlight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Oculus::Interaction::Demo::BasicPBRGlobals::__cordl_internal_get__mainlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainlight;
}
constexpr void Oculus::Interaction::Demo::BasicPBRGlobals::__cordl_internal_set__mainlight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainlight = value;
}
inline void Oculus::Interaction::Demo::BasicPBRGlobals::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::BasicPBRGlobals*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::BasicPBRGlobals::UpateShaderGlobals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::BasicPBRGlobals*>(),
                        {"UpateShaderGlobals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Demo::BasicPBRGlobals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Demo::BasicPBRGlobals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Demo::BasicPBRGlobals* Oculus::Interaction::Demo::BasicPBRGlobals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Demo::BasicPBRGlobals*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Demo::BasicPBRGlobals::BasicPBRGlobals()   {
}
