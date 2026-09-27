#pragma once
// IWYU pragma private; include "GlobalNamespace/EnterPlayID.hpp"
#include "GlobalNamespace/zzzz__EnterPlayID_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnterPlayID.NextID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::EnterPlayID::NextID)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b0e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnterPlayID>(),
                        {"NextID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayID.GetCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnterPlayID (*)()>(&::GlobalNamespace::EnterPlayID::GetCurrent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0e190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnterPlayID>(),
                        {"GetCurrent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayID.get_IsCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnterPlayID::*)()>(&::GlobalNamespace::EnterPlayID::get_IsCurrent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b0e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnterPlayID>(),
                        {"get_IsCurrent", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnterPlayID::setStaticF_currentID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "currentID", ::GlobalNamespace::EnterPlayID>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::EnterPlayID::getStaticF_currentID()  {
return ::cordl_internals::getStaticField<int32_t, "currentID", ::GlobalNamespace::EnterPlayID>();
}
inline void GlobalNamespace::EnterPlayID::NextID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnterPlayID>(),
                        {"NextID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::EnterPlayID GlobalNamespace::EnterPlayID::GetCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnterPlayID>(),
                        {"GetCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnterPlayID>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::EnterPlayID::get_IsCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnterPlayID>(),
                        {"get_IsCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EnterPlayID::EnterPlayID(int32_t  id) noexcept  {
this->id = id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnterPlayID::EnterPlayID()   {
}
