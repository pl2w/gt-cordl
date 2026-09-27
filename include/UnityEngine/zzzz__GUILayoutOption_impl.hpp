#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutOption.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_Type_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayoutOption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUILayoutOption::*)(::GlobalNamespace::GUILayoutOption_Type, ::System::Object*)>(&::UnityEngine::GUILayoutOption::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb6462dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayoutOption*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GUILayoutOption_Type>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GUILayoutOption_Type& UnityEngine::GUILayoutOption::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::GUILayoutOption_Type const& UnityEngine::GUILayoutOption::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void UnityEngine::GUILayoutOption::__cordl_internal_set_type(::GlobalNamespace::GUILayoutOption_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Object*& UnityEngine::GUILayoutOption::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::System::Object* const& UnityEngine::GUILayoutOption::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void UnityEngine::GUILayoutOption::__cordl_internal_set_value(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void UnityEngine::GUILayoutOption::_ctor(::GlobalNamespace::GUILayoutOption_Type  type, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GUILayoutOption*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GUILayoutOption_Type>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayoutOption::New_ctor(::GlobalNamespace::GUILayoutOption_Type  type, ::System::Object*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUILayoutOption*>(type, value));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutOption::GUILayoutOption()   {
}
