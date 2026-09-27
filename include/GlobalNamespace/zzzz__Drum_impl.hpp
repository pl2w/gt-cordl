#pragma once
// IWYU pragma private; include "GlobalNamespace/Drum.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Drum_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Drum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Drum::*)()>(&::GlobalNamespace::Drum::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Drum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Drum::__cordl_internal_get_disabler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabler;
}
constexpr bool const& GlobalNamespace::Drum::__cordl_internal_get_disabler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabler;
}
constexpr void GlobalNamespace::Drum::__cordl_internal_set_disabler(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabler = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Drum::__cordl_internal_get_mySource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Drum::__cordl_internal_get_mySource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySource;
}
constexpr void GlobalNamespace::Drum::__cordl_internal_set_mySource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySource = value;
}
constexpr int32_t& GlobalNamespace::Drum::__cordl_internal_get_myIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myIndex;
}
constexpr int32_t const& GlobalNamespace::Drum::__cordl_internal_get_myIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myIndex;
}
constexpr void GlobalNamespace::Drum::__cordl_internal_set_myIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myIndex = value;
}
inline void GlobalNamespace::Drum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Drum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Drum* GlobalNamespace::Drum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Drum*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Drum::Drum()   {
}
