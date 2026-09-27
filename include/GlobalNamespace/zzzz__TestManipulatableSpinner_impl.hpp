#pragma once
// IWYU pragma private; include "GlobalNamespace/TestManipulatableSpinner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TestManipulatableSpinner_def.hpp"
#include "GlobalNamespace/zzzz__ManipulatableSpinner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinner.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinner::*)()>(&::GlobalNamespace::TestManipulatableSpinner::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x575d4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinner*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinner.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinner::*)()>(&::GlobalNamespace::TestManipulatableSpinner::LateUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x575d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinner*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestManipulatableSpinner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestManipulatableSpinner::*)()>(&::GlobalNamespace::TestManipulatableSpinner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x575d524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner>& GlobalNamespace::TestManipulatableSpinner::__cordl_internal_get_spinner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinner;
}
constexpr ::UnityW<::GlobalNamespace::ManipulatableSpinner> const& GlobalNamespace::TestManipulatableSpinner::__cordl_internal_get_spinner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinner;
}
constexpr void GlobalNamespace::TestManipulatableSpinner::__cordl_internal_set_spinner(::UnityW<::GlobalNamespace::ManipulatableSpinner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinner = value;
}
constexpr float_t& GlobalNamespace::TestManipulatableSpinner::__cordl_internal_get_rotationScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationScale;
}
constexpr float_t const& GlobalNamespace::TestManipulatableSpinner::__cordl_internal_get_rotationScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationScale;
}
constexpr void GlobalNamespace::TestManipulatableSpinner::__cordl_internal_set_rotationScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationScale = value;
}
inline void GlobalNamespace::TestManipulatableSpinner::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinner*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinner::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinner*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TestManipulatableSpinner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestManipulatableSpinner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestManipulatableSpinner* GlobalNamespace::TestManipulatableSpinner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestManipulatableSpinner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestManipulatableSpinner::TestManipulatableSpinner()   {
}
