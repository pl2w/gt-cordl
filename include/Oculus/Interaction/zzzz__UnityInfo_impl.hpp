#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__UnityInfo_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UnityInfo.IsEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Interaction::UnityInfo::IsEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48a40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityInfo*>(),
                        {"IsEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityInfo.Version_2020_3_Or_Newer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Interaction::UnityInfo::Version_2020_3_Or_Newer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48a414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityInfo*>(),
                        {"Version_2020_3_Or_Newer", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::UnityInfo::IsEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityInfo*>(),
                        {"IsEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Oculus::Interaction::UnityInfo::Version_2020_3_Or_Newer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityInfo*>(),
                        {"Version_2020_3_Or_Newer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityInfo::UnityInfo()   {
}
